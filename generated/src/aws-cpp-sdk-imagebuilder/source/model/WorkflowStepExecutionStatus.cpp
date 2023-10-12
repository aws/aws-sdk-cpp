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

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t SKIPPED_HASH = ConstExprHashingUtils::HashString("SKIPPED");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        WorkflowStepExecutionStatus GetWorkflowStepExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
