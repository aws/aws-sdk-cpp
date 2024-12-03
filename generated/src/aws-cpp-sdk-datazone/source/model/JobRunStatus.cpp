/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/JobRunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace JobRunStatusMapper
      {

        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int PARTIALLY_SUCCEEDED_HASH = HashingUtils::HashString("PARTIALLY_SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int ABORTED_HASH = HashingUtils::HashString("ABORTED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");


        JobRunStatus GetJobRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCHEDULED_HASH)
          {
            return JobRunStatus::SCHEDULED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return JobRunStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return JobRunStatus::SUCCESS;
          }
          else if (hashCode == PARTIALLY_SUCCEEDED_HASH)
          {
            return JobRunStatus::PARTIALLY_SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobRunStatus::FAILED;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return JobRunStatus::ABORTED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return JobRunStatus::TIMED_OUT;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return JobRunStatus::CANCELED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobRunStatus>(hashCode);
          }

          return JobRunStatus::NOT_SET;
        }

        Aws::String GetNameForJobRunStatus(JobRunStatus enumValue)
        {
          switch(enumValue)
          {
          case JobRunStatus::NOT_SET:
            return {};
          case JobRunStatus::SCHEDULED:
            return "SCHEDULED";
          case JobRunStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case JobRunStatus::SUCCESS:
            return "SUCCESS";
          case JobRunStatus::PARTIALLY_SUCCEEDED:
            return "PARTIALLY_SUCCEEDED";
          case JobRunStatus::FAILED:
            return "FAILED";
          case JobRunStatus::ABORTED:
            return "ABORTED";
          case JobRunStatus::TIMED_OUT:
            return "TIMED_OUT";
          case JobRunStatus::CANCELED:
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

      } // namespace JobRunStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
