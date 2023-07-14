/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace JobStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int PREPARING_FOR_INITIALIZATION_HASH = HashingUtils::HashString("PREPARING_FOR_INITIALIZATION");
        static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int PENDING_JOB_HASH = HashingUtils::HashString("PENDING_JOB");
        static const int COMPLETING_HASH = HashingUtils::HashString("COMPLETING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILING_HASH = HashingUtils::HashString("FAILING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return JobStatus::CREATED;
          }
          else if (hashCode == PREPARING_FOR_INITIALIZATION_HASH)
          {
            return JobStatus::PREPARING_FOR_INITIALIZATION;
          }
          else if (hashCode == INITIALIZING_HASH)
          {
            return JobStatus::INITIALIZING;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return JobStatus::PROCESSING;
          }
          else if (hashCode == PENDING_JOB_HASH)
          {
            return JobStatus::PENDING_JOB;
          }
          else if (hashCode == COMPLETING_HASH)
          {
            return JobStatus::COMPLETING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return JobStatus::COMPLETED;
          }
          else if (hashCode == FAILING_HASH)
          {
            return JobStatus::FAILING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobStatus::FAILED;
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
          case JobStatus::CREATED:
            return "CREATED";
          case JobStatus::PREPARING_FOR_INITIALIZATION:
            return "PREPARING_FOR_INITIALIZATION";
          case JobStatus::INITIALIZING:
            return "INITIALIZING";
          case JobStatus::PROCESSING:
            return "PROCESSING";
          case JobStatus::PENDING_JOB:
            return "PENDING_JOB";
          case JobStatus::COMPLETING:
            return "COMPLETING";
          case JobStatus::COMPLETED:
            return "COMPLETED";
          case JobStatus::FAILING:
            return "FAILING";
          case JobStatus::FAILED:
            return "FAILED";
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
  } // namespace Pinpoint
} // namespace Aws
