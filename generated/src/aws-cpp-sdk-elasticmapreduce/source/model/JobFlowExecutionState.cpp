/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/JobFlowExecutionState.h>
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
      namespace JobFlowExecutionStateMapper
      {

        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t BOOTSTRAPPING_HASH = ConstExprHashingUtils::HashString("BOOTSTRAPPING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t WAITING_HASH = ConstExprHashingUtils::HashString("WAITING");
        static constexpr uint32_t SHUTTING_DOWN_HASH = ConstExprHashingUtils::HashString("SHUTTING_DOWN");
        static constexpr uint32_t TERMINATED_HASH = ConstExprHashingUtils::HashString("TERMINATED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        JobFlowExecutionState GetJobFlowExecutionStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return JobFlowExecutionState::STARTING;
          }
          else if (hashCode == BOOTSTRAPPING_HASH)
          {
            return JobFlowExecutionState::BOOTSTRAPPING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return JobFlowExecutionState::RUNNING;
          }
          else if (hashCode == WAITING_HASH)
          {
            return JobFlowExecutionState::WAITING;
          }
          else if (hashCode == SHUTTING_DOWN_HASH)
          {
            return JobFlowExecutionState::SHUTTING_DOWN;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return JobFlowExecutionState::TERMINATED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return JobFlowExecutionState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobFlowExecutionState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobFlowExecutionState>(hashCode);
          }

          return JobFlowExecutionState::NOT_SET;
        }

        Aws::String GetNameForJobFlowExecutionState(JobFlowExecutionState enumValue)
        {
          switch(enumValue)
          {
          case JobFlowExecutionState::NOT_SET:
            return {};
          case JobFlowExecutionState::STARTING:
            return "STARTING";
          case JobFlowExecutionState::BOOTSTRAPPING:
            return "BOOTSTRAPPING";
          case JobFlowExecutionState::RUNNING:
            return "RUNNING";
          case JobFlowExecutionState::WAITING:
            return "WAITING";
          case JobFlowExecutionState::SHUTTING_DOWN:
            return "SHUTTING_DOWN";
          case JobFlowExecutionState::TERMINATED:
            return "TERMINATED";
          case JobFlowExecutionState::COMPLETED:
            return "COMPLETED";
          case JobFlowExecutionState::FAILED:
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

      } // namespace JobFlowExecutionStateMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
