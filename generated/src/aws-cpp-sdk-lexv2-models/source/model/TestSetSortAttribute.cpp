/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetSortAttribute.h>
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
      namespace TestSetSortAttributeMapper
      {

        static const int TestSetName_HASH = HashingUtils::HashString("TestSetName");
        static const int LastUpdatedDateTime_HASH = HashingUtils::HashString("LastUpdatedDateTime");


        TestSetSortAttribute GetTestSetSortAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TestSetName_HASH)
          {
            return TestSetSortAttribute::TestSetName;
          }
          else if (hashCode == LastUpdatedDateTime_HASH)
          {
            return TestSetSortAttribute::LastUpdatedDateTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestSetSortAttribute>(hashCode);
          }

          return TestSetSortAttribute::NOT_SET;
        }

        Aws::String GetNameForTestSetSortAttribute(TestSetSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case TestSetSortAttribute::NOT_SET:
            return {};
          case TestSetSortAttribute::TestSetName:
            return "TestSetName";
          case TestSetSortAttribute::LastUpdatedDateTime:
            return "LastUpdatedDateTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestSetSortAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
