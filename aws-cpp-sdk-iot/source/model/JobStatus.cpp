/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/JobStatus.h>
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
      namespace JobStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int DELETION_IN_PROGRESS_HASH = HashingUtils::HashString("DELETION_IN_PROGRESS");
        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return JobStatus::IN_PROGRESS;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return JobStatus::CANCELED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return JobStatus::COMPLETED;
          }
          else if (hashCode == DELETION_IN_PROGRESS_HASH)
          {
            return JobStatus::DELETION_IN_PROGRESS;
          }
          else if (hashCode == SCHEDULED_HASH)
          {
            return JobStatus::SCHEDULED;
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
          case JobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case JobStatus::CANCELED:
            return "CANCELED";
          case JobStatus::COMPLETED:
            return "COMPLETED";
          case JobStatus::DELETION_IN_PROGRESS:
            return "DELETION_IN_PROGRESS";
          case JobStatus::SCHEDULED:
            return "SCHEDULED";
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
  } // namespace IoT
} // namespace Aws
