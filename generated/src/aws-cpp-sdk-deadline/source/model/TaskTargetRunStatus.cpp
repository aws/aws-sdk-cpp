/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/TaskTargetRunStatus.h>
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
      namespace TaskTargetRunStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        TaskTargetRunStatus GetTaskTargetRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return TaskTargetRunStatus::READY;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TaskTargetRunStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return TaskTargetRunStatus::SUCCEEDED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return TaskTargetRunStatus::CANCELED;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return TaskTargetRunStatus::SUSPENDED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return TaskTargetRunStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskTargetRunStatus>(hashCode);
          }

          return TaskTargetRunStatus::NOT_SET;
        }

        Aws::String GetNameForTaskTargetRunStatus(TaskTargetRunStatus enumValue)
        {
          switch(enumValue)
          {
          case TaskTargetRunStatus::NOT_SET:
            return {};
          case TaskTargetRunStatus::READY:
            return "READY";
          case TaskTargetRunStatus::FAILED:
            return "FAILED";
          case TaskTargetRunStatus::SUCCEEDED:
            return "SUCCEEDED";
          case TaskTargetRunStatus::CANCELED:
            return "CANCELED";
          case TaskTargetRunStatus::SUSPENDED:
            return "SUSPENDED";
          case TaskTargetRunStatus::PENDING:
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

      } // namespace TaskTargetRunStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
