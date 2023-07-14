/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/JobExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace JobExecutionStatusMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int REMOVED_HASH = HashingUtils::HashString("REMOVED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");


        JobExecutionStatus GetJobExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return JobExecutionStatus::QUEUED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return JobExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return JobExecutionStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobExecutionStatus::FAILED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return JobExecutionStatus::TIMED_OUT;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return JobExecutionStatus::REJECTED;
          }
          else if (hashCode == REMOVED_HASH)
          {
            return JobExecutionStatus::REMOVED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return JobExecutionStatus::CANCELED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobExecutionStatus>(hashCode);
          }

          return JobExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForJobExecutionStatus(JobExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case JobExecutionStatus::QUEUED:
            return "QUEUED";
          case JobExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case JobExecutionStatus::SUCCEEDED:
            return "SUCCEEDED";
          case JobExecutionStatus::FAILED:
            return "FAILED";
          case JobExecutionStatus::TIMED_OUT:
            return "TIMED_OUT";
          case JobExecutionStatus::REJECTED:
            return "REJECTED";
          case JobExecutionStatus::REMOVED:
            return "REMOVED";
          case JobExecutionStatus::CANCELED:
            return "CANCELED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobExecutionStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
