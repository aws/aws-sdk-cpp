/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/WorkflowStepExecutionRollbackStatus.h>
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
      namespace WorkflowStepExecutionRollbackStatusMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t SKIPPED_HASH = ConstExprHashingUtils::HashString("SKIPPED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        WorkflowStepExecutionRollbackStatus GetWorkflowStepExecutionRollbackStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return WorkflowStepExecutionRollbackStatus::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return WorkflowStepExecutionRollbackStatus::COMPLETED;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return WorkflowStepExecutionRollbackStatus::SKIPPED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return WorkflowStepExecutionRollbackStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowStepExecutionRollbackStatus>(hashCode);
          }

          return WorkflowStepExecutionRollbackStatus::NOT_SET;
        }

        Aws::String GetNameForWorkflowStepExecutionRollbackStatus(WorkflowStepExecutionRollbackStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkflowStepExecutionRollbackStatus::NOT_SET:
            return {};
          case WorkflowStepExecutionRollbackStatus::RUNNING:
            return "RUNNING";
          case WorkflowStepExecutionRollbackStatus::COMPLETED:
            return "COMPLETED";
          case WorkflowStepExecutionRollbackStatus::SKIPPED:
            return "SKIPPED";
          case WorkflowStepExecutionRollbackStatus::FAILED:
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

      } // namespace WorkflowStepExecutionRollbackStatusMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
