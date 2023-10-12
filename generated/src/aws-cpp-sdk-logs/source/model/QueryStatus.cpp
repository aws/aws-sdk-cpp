/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/QueryStatus.h>
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
      namespace QueryStatusMapper
      {

        static constexpr uint32_t Scheduled_HASH = ConstExprHashingUtils::HashString("Scheduled");
        static constexpr uint32_t Running_HASH = ConstExprHashingUtils::HashString("Running");
        static constexpr uint32_t Complete_HASH = ConstExprHashingUtils::HashString("Complete");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");
        static constexpr uint32_t Timeout_HASH = ConstExprHashingUtils::HashString("Timeout");
        static constexpr uint32_t Unknown_HASH = ConstExprHashingUtils::HashString("Unknown");


        QueryStatus GetQueryStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Scheduled_HASH)
          {
            return QueryStatus::Scheduled;
          }
          else if (hashCode == Running_HASH)
          {
            return QueryStatus::Running;
          }
          else if (hashCode == Complete_HASH)
          {
            return QueryStatus::Complete;
          }
          else if (hashCode == Failed_HASH)
          {
            return QueryStatus::Failed;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return QueryStatus::Cancelled;
          }
          else if (hashCode == Timeout_HASH)
          {
            return QueryStatus::Timeout;
          }
          else if (hashCode == Unknown_HASH)
          {
            return QueryStatus::Unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryStatus>(hashCode);
          }

          return QueryStatus::NOT_SET;
        }

        Aws::String GetNameForQueryStatus(QueryStatus enumValue)
        {
          switch(enumValue)
          {
          case QueryStatus::NOT_SET:
            return {};
          case QueryStatus::Scheduled:
            return "Scheduled";
          case QueryStatus::Running:
            return "Running";
          case QueryStatus::Complete:
            return "Complete";
          case QueryStatus::Failed:
            return "Failed";
          case QueryStatus::Cancelled:
            return "Cancelled";
          case QueryStatus::Timeout:
            return "Timeout";
          case QueryStatus::Unknown:
            return "Unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryStatusMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
