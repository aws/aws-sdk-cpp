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
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

TEST(EnumOverflowTest, TestHashRetrieval)
{
   EnumParseOverflowContainer container;
   container.StoreOverflow(15, "fifteen");
   container.StoreOverflow(16, "sixteen");

   ASSERT_EQ("fifteen", container.RetrieveOverflow(15));
   ASSERT_EQ("", container.RetrieveOverflow(17));
}

enum class TestEnum
{
    VALUE1,
    VALUE2,
    VALUE3
};

TEST(EnumOverflowTest, TestUseWithEnum)
{
    EnumParseOverflowContainer container;
    int hashCode = HashingUtils::HashString("VALUE4");
    container.StoreOverflow(hashCode, "VALUE4");

    TestEnum nonModeledValue = static_cast<TestEnum>(hashCode);
    ASSERT_EQ("VALUE4", container.RetrieveOverflow(static_cast<int>(nonModeledValue)));
}