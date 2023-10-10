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

        static const int TestSetName_HASH = HashingUtils::HashString("TestSetName");
        static const int CreationDateTime_HASH = HashingUtils::HashString("CreationDateTime");


        TestExecutionSortAttribute GetTestExecutionSortAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
