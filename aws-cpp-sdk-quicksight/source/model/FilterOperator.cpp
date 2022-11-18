/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilterOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace FilterOperatorMapper
      {

        static const int StringEquals_HASH = HashingUtils::HashString("StringEquals");
        static const int StringLike_HASH = HashingUtils::HashString("StringLike");


        FilterOperator GetFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == StringEquals_HASH)
          {
            return FilterOperator::StringEquals;
          }
          else if (hashCode == StringLike_HASH)
          {
            return FilterOperator::StringLike;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterOperator>(hashCode);
          }

          return FilterOperator::NOT_SET;
        }

        Aws::String GetNameForFilterOperator(FilterOperator enumValue)
        {
          switch(enumValue)
          {
          case FilterOperator::StringEquals:
            return "StringEquals";
          case FilterOperator::StringLike:
            return "StringLike";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterOperatorMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
