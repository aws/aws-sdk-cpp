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

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEED_HASH = HashingUtils::HashString("SUCCEED");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
