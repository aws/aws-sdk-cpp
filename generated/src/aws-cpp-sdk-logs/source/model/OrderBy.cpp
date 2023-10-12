/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/OrderBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace OrderByMapper
      {

        static constexpr uint32_t LogStreamName_HASH = ConstExprHashingUtils::HashString("LogStreamName");
        static constexpr uint32_t LastEventTime_HASH = ConstExprHashingUtils::HashString("LastEventTime");


        OrderBy GetOrderByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LogStreamName_HASH)
          {
            return OrderBy::LogStreamName;
          }
          else if (hashCode == LastEventTime_HASH)
          {
            return OrderBy::LastEventTime;
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
          case OrderBy::NOT_SET:
            return {};
          case OrderBy::LogStreamName:
            return "LogStreamName";
          case OrderBy::LastEventTime:
            return "LastEventTime";
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
  } // namespace CloudWatchLogs
} // namespace Aws
