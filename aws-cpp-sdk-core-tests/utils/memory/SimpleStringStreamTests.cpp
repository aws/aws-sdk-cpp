/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/external/gtest.h>
#include <aws/core/utils/memory/stl/SimpleStringStream.h>

TEST(SimpleStringStreamTest, DefaultConstructor)
{
    Aws::SimpleStringStream ss;

    ASSERT_TRUE(ss.str().size() == 0);
}

static const char* SIMPLE_STRING = "A Simple String";

TEST(SimpleStringStreamTest, StringConstructor)
{
    Aws::SimpleStringStream ss(SIMPLE_STRING);

    ASSERT_STREQ(ss.str().c_str(), SIMPLE_STRING);
}

TEST(SimpleStringStreamTest, BasicOutput)
{
    Aws::SimpleStringStream ss;

    ss << SIMPLE_STRING;

    ASSERT_STREQ(ss.str().c_str(), SIMPLE_STRING);
}

TEST(SimpleStringStreamTest, MultipleOutput)
{
    Aws::SimpleStringStream ss;

    ss << "A string " << Aws::String("\"Howdy\"");
    ss << ", a number " << 75;
    ss << ", and a boolean " << std::boolalpha << true;
    ss << " walk into a bar";

    ASSERT_STREQ(ss.str().c_str(), "A string \"Howdy\", a number 75, and a boolean true walk into a bar");
}

TEST(SimpleStringStreamTest, MultipleInput)
{
    Aws::SimpleStringStream ss("523 47.0 true");

    uint32_t number = 0;
    ss >> number;
    ASSERT_TRUE(number == 523);

    double fp = 0.0;
    ss >> fp;
    ASSERT_DOUBLE_EQ(fp, 47.0);

    bool value = false;
    ss >> std::boolalpha >> value;
    ASSERT_TRUE(value);
}

