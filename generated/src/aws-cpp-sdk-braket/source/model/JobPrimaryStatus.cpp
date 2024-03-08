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

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        JobPrimaryStatus GetJobPrimaryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
