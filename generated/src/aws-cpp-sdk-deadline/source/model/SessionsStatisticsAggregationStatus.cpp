/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SessionsStatisticsAggregationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace SessionsStatisticsAggregationStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int TIMEOUT_HASH = HashingUtils::HashString("TIMEOUT");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        SessionsStatisticsAggregationStatus GetSessionsStatisticsAggregationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return SessionsStatisticsAggregationStatus::IN_PROGRESS;
          }
          else if (hashCode == TIMEOUT_HASH)
          {
            return SessionsStatisticsAggregationStatus::TIMEOUT;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SessionsStatisticsAggregationStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return SessionsStatisticsAggregationStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionsStatisticsAggregationStatus>(hashCode);
          }

          return SessionsStatisticsAggregationStatus::NOT_SET;
        }

        Aws::String GetNameForSessionsStatisticsAggregationStatus(SessionsStatisticsAggregationStatus enumValue)
        {
          switch(enumValue)
          {
          case SessionsStatisticsAggregationStatus::NOT_SET:
            return {};
          case SessionsStatisticsAggregationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case SessionsStatisticsAggregationStatus::TIMEOUT:
            return "TIMEOUT";
          case SessionsStatisticsAggregationStatus::FAILED:
            return "FAILED";
          case SessionsStatisticsAggregationStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionsStatisticsAggregationStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
