/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
