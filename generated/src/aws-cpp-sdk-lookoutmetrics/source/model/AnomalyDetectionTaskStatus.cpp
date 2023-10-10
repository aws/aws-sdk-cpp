/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AnomalyDetectionTaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutMetrics
  {
    namespace Model
    {
      namespace AnomalyDetectionTaskStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int FAILED_TO_SCHEDULE_HASH = HashingUtils::HashString("FAILED_TO_SCHEDULE");


        AnomalyDetectionTaskStatus GetAnomalyDetectionTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return AnomalyDetectionTaskStatus::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return AnomalyDetectionTaskStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return AnomalyDetectionTaskStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AnomalyDetectionTaskStatus::FAILED;
          }
          else if (hashCode == FAILED_TO_SCHEDULE_HASH)
          {
            return AnomalyDetectionTaskStatus::FAILED_TO_SCHEDULE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnomalyDetectionTaskStatus>(hashCode);
          }

          return AnomalyDetectionTaskStatus::NOT_SET;
        }

        Aws::String GetNameForAnomalyDetectionTaskStatus(AnomalyDetectionTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case AnomalyDetectionTaskStatus::NOT_SET:
            return {};
          case AnomalyDetectionTaskStatus::PENDING:
            return "PENDING";
          case AnomalyDetectionTaskStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AnomalyDetectionTaskStatus::COMPLETED:
            return "COMPLETED";
          case AnomalyDetectionTaskStatus::FAILED:
            return "FAILED";
          case AnomalyDetectionTaskStatus::FAILED_TO_SCHEDULE:
            return "FAILED_TO_SCHEDULE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnomalyDetectionTaskStatusMapper
    } // namespace Model
  } // namespace LookoutMetrics
} // namespace Aws
