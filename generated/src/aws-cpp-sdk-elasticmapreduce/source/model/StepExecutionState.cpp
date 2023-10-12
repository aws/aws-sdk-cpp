/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/StepExecutionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace StepExecutionStateMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t CONTINUE_HASH = ConstExprHashingUtils::HashString("CONTINUE");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t INTERRUPTED_HASH = ConstExprHashingUtils::HashString("INTERRUPTED");


        StepExecutionState GetStepExecutionStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return StepExecutionState::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return StepExecutionState::RUNNING;
          }
          else if (hashCode == CONTINUE_HASH)
          {
            return StepExecutionState::CONTINUE;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return StepExecutionState::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return StepExecutionState::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StepExecutionState::FAILED;
          }
          else if (hashCode == INTERRUPTED_HASH)
          {
            return StepExecutionState::INTERRUPTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepExecutionState>(hashCode);
          }

          return StepExecutionState::NOT_SET;
        }

        Aws::String GetNameForStepExecutionState(StepExecutionState enumValue)
        {
          switch(enumValue)
          {
          case StepExecutionState::NOT_SET:
            return {};
          case StepExecutionState::PENDING:
            return "PENDING";
          case StepExecutionState::RUNNING:
            return "RUNNING";
          case StepExecutionState::CONTINUE:
            return "CONTINUE";
          case StepExecutionState::COMPLETED:
            return "COMPLETED";
          case StepExecutionState::CANCELLED:
            return "CANCELLED";
          case StepExecutionState::FAILED:
            return "FAILED";
          case StepExecutionState::INTERRUPTED:
            return "INTERRUPTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StepExecutionStateMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
