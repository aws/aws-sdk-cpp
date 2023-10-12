/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/JobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Amplify
  {
    namespace Model
    {
      namespace JobStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t PROVISIONING_HASH = ConstExprHashingUtils::HashString("PROVISIONING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SUCCEED_HASH = ConstExprHashingUtils::HashString("SUCCEED");
        static constexpr uint32_t CANCELLING_HASH = ConstExprHashingUtils::HashString("CANCELLING");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return JobStatus::PENDING;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return JobStatus::PROVISIONING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return JobStatus::RUNNING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobStatus::FAILED;
          }
          else if (hashCode == SUCCEED_HASH)
          {
            return JobStatus::SUCCEED;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return JobStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return JobStatus::CANCELLED;
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
          case JobStatus::PENDING:
            return "PENDING";
          case JobStatus::PROVISIONING:
            return "PROVISIONING";
          case JobStatus::RUNNING:
            return "RUNNING";
          case JobStatus::FAILED:
            return "FAILED";
          case JobStatus::SUCCEED:
            return "SUCCEED";
          case JobStatus::CANCELLING:
            return "CANCELLING";
          case JobStatus::CANCELLED:
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

      } // namespace JobStatusMapper
    } // namespace Model
  } // namespace Amplify
} // namespace Aws
