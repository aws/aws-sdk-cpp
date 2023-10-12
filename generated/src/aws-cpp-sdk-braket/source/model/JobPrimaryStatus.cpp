/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/JobPrimaryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Braket
  {
    namespace Model
    {
      namespace JobPrimaryStatusMapper
      {

        static constexpr uint32_t QUEUED_HASH = ConstExprHashingUtils::HashString("QUEUED");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t CANCELLING_HASH = ConstExprHashingUtils::HashString("CANCELLING");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");


        JobPrimaryStatus GetJobPrimaryStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return JobPrimaryStatus::QUEUED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return JobPrimaryStatus::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return JobPrimaryStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobPrimaryStatus::FAILED;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return JobPrimaryStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return JobPrimaryStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobPrimaryStatus>(hashCode);
          }

          return JobPrimaryStatus::NOT_SET;
        }

        Aws::String GetNameForJobPrimaryStatus(JobPrimaryStatus enumValue)
        {
          switch(enumValue)
          {
          case JobPrimaryStatus::NOT_SET:
            return {};
          case JobPrimaryStatus::QUEUED:
            return "QUEUED";
          case JobPrimaryStatus::RUNNING:
            return "RUNNING";
          case JobPrimaryStatus::COMPLETED:
            return "COMPLETED";
          case JobPrimaryStatus::FAILED:
            return "FAILED";
          case JobPrimaryStatus::CANCELLING:
            return "CANCELLING";
          case JobPrimaryStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobPrimaryStatusMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
