/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/WorkflowExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace WorkflowExecutionStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int ROLLBACK_IN_PROGRESS_HASH = HashingUtils::HashString("ROLLBACK_IN_PROGRESS");
        static const int ROLLBACK_COMPLETED_HASH = HashingUtils::HashString("ROLLBACK_COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        WorkflowExecutionStatus GetWorkflowExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return WorkflowExecutionStatus::PENDING;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return WorkflowExecutionStatus::SKIPPED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return WorkflowExecutionStatus::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return WorkflowExecutionStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return WorkflowExecutionStatus::FAILED;
          }
          else if (hashCode == ROLLBACK_IN_PROGRESS_HASH)
          {
            return WorkflowExecutionStatus::ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == ROLLBACK_COMPLETED_HASH)
          {
            return WorkflowExecutionStatus::ROLLBACK_COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return WorkflowExecutionStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowExecutionStatus>(hashCode);
          }

          return WorkflowExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForWorkflowExecutionStatus(WorkflowExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkflowExecutionStatus::NOT_SET:
            return {};
          case WorkflowExecutionStatus::PENDING:
            return "PENDING";
          case WorkflowExecutionStatus::SKIPPED:
            return "SKIPPED";
          case WorkflowExecutionStatus::RUNNING:
            return "RUNNING";
          case WorkflowExecutionStatus::COMPLETED:
            return "COMPLETED";
          case WorkflowExecutionStatus::FAILED:
            return "FAILED";
          case WorkflowExecutionStatus::ROLLBACK_IN_PROGRESS:
            return "ROLLBACK_IN_PROGRESS";
          case WorkflowExecutionStatus::ROLLBACK_COMPLETED:
            return "ROLLBACK_COMPLETED";
          case WorkflowExecutionStatus::CANCELLED:
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

      } // namespace WorkflowExecutionStatusMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
