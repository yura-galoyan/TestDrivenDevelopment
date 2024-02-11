#include <gtest/gtest.h>

// Define a new test fixture for the second test suite
class SubtractTest : public ::testing::Test {
protected:
    // Optional setup code that will be executed before each test case
    void SetUp() override {
        // Add any setup code specific to the test suite here
    }

    // Optional tear-down code that will be executed after each test case
    void TearDown() override {
        // Add any tear-down code specific to the test suite here
    }
};

// Define test cases for the second test suite
TEST_F(SubtractTest, PositiveNumbers) {
    // Test logic for subtracting positive numbers
    EXPECT_EQ(5 - 3, 2);
}

TEST_F(SubtractTest, NegativeNumbers) {
    // Test logic for subtracting negative numbers
    EXPECT_EQ(-5 - (-3), -2);
}