/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/WorkflowStepExecutionStatus.h>
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
      namespace WorkflowStepExecutionStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        WorkflowStepExecutionStatus GetWorkflowStepExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return WorkflowStepExecutionStatus::PENDING;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return WorkflowStepExecutionStatus::SKIPPED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return WorkflowStepExecutionStatus::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return WorkflowStepExecutionStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return WorkflowStepExecutionStatus::FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return WorkflowStepExecutionStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowStepExecutionStatus>(hashCode);
          }

          return WorkflowStepExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForWorkflowStepExecutionStatus(WorkflowStepExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkflowStepExecutionStatus::NOT_SET:
            return {};
          case WorkflowStepExecutionStatus::PENDING:
            return "PENDING";
          case WorkflowStepExecutionStatus::SKIPPED:
            return "SKIPPED";
          case WorkflowStepExecutionStatus::RUNNING:
            return "RUNNING";
          case WorkflowStepExecutionStatus::COMPLETED:
            return "COMPLETED";
          case WorkflowStepExecutionStatus::FAILED:
            return "FAILED";
          case WorkflowStepExecutionStatus::CANCELLED:
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

      } // namespace WorkflowStepExecutionStatusMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
