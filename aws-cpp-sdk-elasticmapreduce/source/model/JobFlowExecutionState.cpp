/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int BOOTSTRAPPING_HASH = HashingUtils::HashString("BOOTSTRAPPING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int WAITING_HASH = HashingUtils::HashString("WAITING");
        static const int SHUTTING_DOWN_HASH = HashingUtils::HashString("SHUTTING_DOWN");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        JobFlowExecutionState GetJobFlowExecutionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace JobFlowExecutionStateMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
