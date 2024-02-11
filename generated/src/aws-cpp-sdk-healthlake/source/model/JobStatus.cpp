/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/JobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace HealthLake
  {
    namespace Model
    {
      namespace JobStatusMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_WITH_ERRORS_HASH = HashingUtils::HashString("COMPLETED_WITH_ERRORS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCEL_SUBMITTED_HASH = HashingUtils::HashString("CANCEL_SUBMITTED");
        static const int CANCEL_IN_PROGRESS_HASH = HashingUtils::HashString("CANCEL_IN_PROGRESS");
        static const int CANCEL_COMPLETED_HASH = HashingUtils::HashString("CANCEL_COMPLETED");
        static const int CANCEL_FAILED_HASH = HashingUtils::HashString("CANCEL_FAILED");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return JobStatus::SUBMITTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return JobStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_WITH_ERRORS_HASH)
          {
            return JobStatus::COMPLETED_WITH_ERRORS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return JobStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobStatus::FAILED;
          }
          else if (hashCode == CANCEL_SUBMITTED_HASH)
          {
            return JobStatus::CANCEL_SUBMITTED;
          }
          else if (hashCode == CANCEL_IN_PROGRESS_HASH)
          {
            return JobStatus::CANCEL_IN_PROGRESS;
          }
          else if (hashCode == CANCEL_COMPLETED_HASH)
          {
            return JobStatus::CANCEL_COMPLETED;
          }
          else if (hashCode == CANCEL_FAILED_HASH)
          {
            return JobStatus::CANCEL_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobStatus>(hashCode);
          }

          return JobStatus::NOT_SET;
        }

        Aws::String GetNameForJobStatus(JobStatus enumValue)
        {
          switch(enumValue)
          {
          case JobStatus::NOT_SET:
            return {};
          case JobStatus::SUBMITTED:
            return "SUBMITTED";
          case JobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case JobStatus::COMPLETED_WITH_ERRORS:
            return "COMPLETED_WITH_ERRORS";
          case JobStatus::COMPLETED:
            return "COMPLETED";
          case JobStatus::FAILED:
            return "FAILED";
          case JobStatus::CANCEL_SUBMITTED:
            return "CANCEL_SUBMITTED";
          case JobStatus::CANCEL_IN_PROGRESS:
            return "CANCEL_IN_PROGRESS";
          case JobStatus::CANCEL_COMPLETED:
            return "CANCEL_COMPLETED";
          case JobStatus::CANCEL_FAILED:
            return "CANCEL_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobStatusMapper
    } // namespace Model
  } // namespace HealthLake
} // namespace Aws
