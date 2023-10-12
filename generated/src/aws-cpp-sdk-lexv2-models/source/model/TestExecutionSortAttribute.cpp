/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestExecutionSortAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace TestExecutionSortAttributeMapper
      {

        static constexpr uint32_t TestSetName_HASH = ConstExprHashingUtils::HashString("TestSetName");
        static constexpr uint32_t CreationDateTime_HASH = ConstExprHashingUtils::HashString("CreationDateTime");


        TestExecutionSortAttribute GetTestExecutionSortAttributeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TestSetName_HASH)
          {
            return TestExecutionSortAttribute::TestSetName;
          }
          else if (hashCode == CreationDateTime_HASH)
          {
            return TestExecutionSortAttribute::CreationDateTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestExecutionSortAttribute>(hashCode);
          }

          return TestExecutionSortAttribute::NOT_SET;
        }

        Aws::String GetNameForTestExecutionSortAttribute(TestExecutionSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case TestExecutionSortAttribute::NOT_SET:
            return {};
          case TestExecutionSortAttribute::TestSetName:
            return "TestSetName";
          case TestExecutionSortAttribute::CreationDateTime:
            return "CreationDateTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestExecutionSortAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
