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

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int CONTINUE_HASH = HashingUtils::HashString("CONTINUE");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int INTERRUPTED_HASH = HashingUtils::HashString("INTERRUPTED");


        StepExecutionState GetStepExecutionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace StepExecutionStateMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
