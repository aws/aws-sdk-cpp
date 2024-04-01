/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/JobTargetTaskRunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace JobTargetTaskRunStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        JobTargetTaskRunStatus GetJobTargetTaskRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return JobTargetTaskRunStatus::READY;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobTargetTaskRunStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return JobTargetTaskRunStatus::SUCCEEDED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return JobTargetTaskRunStatus::CANCELED;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return JobTargetTaskRunStatus::SUSPENDED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return JobTargetTaskRunStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobTargetTaskRunStatus>(hashCode);
          }

          return JobTargetTaskRunStatus::NOT_SET;
        }

        Aws::String GetNameForJobTargetTaskRunStatus(JobTargetTaskRunStatus enumValue)
        {
          switch(enumValue)
          {
          case JobTargetTaskRunStatus::NOT_SET:
            return {};
          case JobTargetTaskRunStatus::READY:
            return "READY";
          case JobTargetTaskRunStatus::FAILED:
            return "FAILED";
          case JobTargetTaskRunStatus::SUCCEEDED:
            return "SUCCEEDED";
          case JobTargetTaskRunStatus::CANCELED:
            return "CANCELED";
          case JobTargetTaskRunStatus::SUSPENDED:
            return "SUSPENDED";
          case JobTargetTaskRunStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobTargetTaskRunStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
