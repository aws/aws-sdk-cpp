/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/TaskRunStatus.h>
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
      namespace TaskRunStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int ASSIGNED_HASH = HashingUtils::HashString("ASSIGNED");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
        static const int INTERRUPTING_HASH = HashingUtils::HashString("INTERRUPTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int NOT_COMPATIBLE_HASH = HashingUtils::HashString("NOT_COMPATIBLE");


        TaskRunStatus GetTaskRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return TaskRunStatus::PENDING;
          }
          else if (hashCode == READY_HASH)
          {
            return TaskRunStatus::READY;
          }
          else if (hashCode == ASSIGNED_HASH)
          {
            return TaskRunStatus::ASSIGNED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return TaskRunStatus::STARTING;
          }
          else if (hashCode == SCHEDULED_HASH)
          {
            return TaskRunStatus::SCHEDULED;
          }
          else if (hashCode == INTERRUPTING_HASH)
          {
            return TaskRunStatus::INTERRUPTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return TaskRunStatus::RUNNING;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return TaskRunStatus::SUSPENDED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return TaskRunStatus::CANCELED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TaskRunStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return TaskRunStatus::SUCCEEDED;
          }
          else if (hashCode == NOT_COMPATIBLE_HASH)
          {
            return TaskRunStatus::NOT_COMPATIBLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskRunStatus>(hashCode);
          }

          return TaskRunStatus::NOT_SET;
        }

        Aws::String GetNameForTaskRunStatus(TaskRunStatus enumValue)
        {
          switch(enumValue)
          {
          case TaskRunStatus::NOT_SET:
            return {};
          case TaskRunStatus::PENDING:
            return "PENDING";
          case TaskRunStatus::READY:
            return "READY";
          case TaskRunStatus::ASSIGNED:
            return "ASSIGNED";
          case TaskRunStatus::STARTING:
            return "STARTING";
          case TaskRunStatus::SCHEDULED:
            return "SCHEDULED";
          case TaskRunStatus::INTERRUPTING:
            return "INTERRUPTING";
          case TaskRunStatus::RUNNING:
            return "RUNNING";
          case TaskRunStatus::SUSPENDED:
            return "SUSPENDED";
          case TaskRunStatus::CANCELED:
            return "CANCELED";
          case TaskRunStatus::FAILED:
            return "FAILED";
          case TaskRunStatus::SUCCEEDED:
            return "SUCCEEDED";
          case TaskRunStatus::NOT_COMPATIBLE:
            return "NOT_COMPATIBLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskRunStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
