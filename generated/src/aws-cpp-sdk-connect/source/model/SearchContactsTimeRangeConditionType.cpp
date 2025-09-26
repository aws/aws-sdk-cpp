/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchContactsTimeRangeConditionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace SearchContactsTimeRangeConditionTypeMapper
      {

        static const int NOT_EXISTS_HASH = HashingUtils::HashString("NOT_EXISTS");


        SearchContactsTimeRangeConditionType GetSearchContactsTimeRangeConditionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_EXISTS_HASH)
          {
            return SearchContactsTimeRangeConditionType::NOT_EXISTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchContactsTimeRangeConditionType>(hashCode);
          }

          return SearchContactsTimeRangeConditionType::NOT_SET;
        }

        Aws::String GetNameForSearchContactsTimeRangeConditionType(SearchContactsTimeRangeConditionType enumValue)
        {
          switch(enumValue)
          {
          case SearchContactsTimeRangeConditionType::NOT_SET:
            return {};
          case SearchContactsTimeRangeConditionType::NOT_EXISTS:
            return "NOT_EXISTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchContactsTimeRangeConditionTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
