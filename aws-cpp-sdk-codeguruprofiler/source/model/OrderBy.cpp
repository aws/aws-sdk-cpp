/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/OrderBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruProfiler
  {
    namespace Model
    {
      namespace OrderByMapper
      {

        static const int TimestampDescending_HASH = HashingUtils::HashString("TimestampDescending");
        static const int TimestampAscending_HASH = HashingUtils::HashString("TimestampAscending");


        OrderBy GetOrderByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TimestampDescending_HASH)
          {
            return OrderBy::TimestampDescending;
          }
          else if (hashCode == TimestampAscending_HASH)
          {
            return OrderBy::TimestampAscending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrderBy>(hashCode);
          }

          return OrderBy::NOT_SET;
        }

        Aws::String GetNameForOrderBy(OrderBy enumValue)
        {
          switch(enumValue)
          {
          case OrderBy::TimestampDescending:
            return "TimestampDescending";
          case OrderBy::TimestampAscending:
            return "TimestampAscending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrderByMapper
    } // namespace Model
  } // namespace CodeGuruProfiler
} // namespace Aws
