/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/JobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace JobStatusMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t PAUSED_HASH = ConstExprHashingUtils::HashString("PAUSED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t COMPLETE_HASH = ConstExprHashingUtils::HashString("COMPLETE");
        static constexpr uint32_t IDLE_HASH = ConstExprHashingUtils::HashString("IDLE");
        static constexpr uint32_t USER_PAUSED_HASH = ConstExprHashingUtils::HashString("USER_PAUSED");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return JobStatus::RUNNING;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return JobStatus::PAUSED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return JobStatus::CANCELLED;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return JobStatus::COMPLETE;
          }
          else if (hashCode == IDLE_HASH)
          {
            return JobStatus::IDLE;
          }
          else if (hashCode == USER_PAUSED_HASH)
          {
            return JobStatus::USER_PAUSED;
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
          case JobStatus::RUNNING:
            return "RUNNING";
          case JobStatus::PAUSED:
            return "PAUSED";
          case JobStatus::CANCELLED:
            return "CANCELLED";
          case JobStatus::COMPLETE:
            return "COMPLETE";
          case JobStatus::IDLE:
            return "IDLE";
          case JobStatus::USER_PAUSED:
            return "USER_PAUSED";
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
  } // namespace Macie2
} // namespace Aws
