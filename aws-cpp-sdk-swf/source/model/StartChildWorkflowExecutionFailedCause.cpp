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
#include <aws/swf/model/StartChildWorkflowExecutionFailedCause.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace StartChildWorkflowExecutionFailedCauseMapper
      {

        static const int WORKFLOW_TYPE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("WORKFLOW_TYPE_DOES_NOT_EXIST");
        static const int WORKFLOW_TYPE_DEPRECATED_HASH = HashingUtils::HashString("WORKFLOW_TYPE_DEPRECATED");
        static const int OPEN_CHILDREN_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("OPEN_CHILDREN_LIMIT_EXCEEDED");
        static const int OPEN_WORKFLOWS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("OPEN_WORKFLOWS_LIMIT_EXCEEDED");
        static const int CHILD_CREATION_RATE_EXCEEDED_HASH = HashingUtils::HashString("CHILD_CREATION_RATE_EXCEEDED");
        static const int WORKFLOW_ALREADY_RUNNING_HASH = HashingUtils::HashString("WORKFLOW_ALREADY_RUNNING");
        static const int DEFAULT_EXECUTION_START_TO_CLOSE_TIMEOUT_UNDEFINED_HASH = HashingUtils::HashString("DEFAULT_EXECUTION_START_TO_CLOSE_TIMEOUT_UNDEFINED");
        static const int DEFAULT_TASK_LIST_UNDEFINED_HASH = HashingUtils::HashString("DEFAULT_TASK_LIST_UNDEFINED");
        static const int DEFAULT_TASK_START_TO_CLOSE_TIMEOUT_UNDEFINED_HASH = HashingUtils::HashString("DEFAULT_TASK_START_TO_CLOSE_TIMEOUT_UNDEFINED");
        static const int DEFAULT_CHILD_POLICY_UNDEFINED_HASH = HashingUtils::HashString("DEFAULT_CHILD_POLICY_UNDEFINED");
        static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OPERATION_NOT_PERMITTED");


        StartChildWorkflowExecutionFailedCause GetStartChildWorkflowExecutionFailedCauseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WORKFLOW_TYPE_DOES_NOT_EXIST_HASH)
          {
            return StartChildWorkflowExecutionFailedCause::WORKFLOW_TYPE_DOES_NOT_EXIST;
          }
          else if (hashCode == WORKFLOW_TYPE_DEPRECATED_HASH)
          {
            return StartChildWorkflowExecutionFailedCause::WORKFLOW_TYPE_DEPRECATED;
          }
          else if (hashCode == OPEN_CHILDREN_LIMIT_EXCEEDED_HASH)
          {
            return StartChildWorkflowExecutionFailedCause::OPEN_CHILDREN_LIMIT_EXCEEDED;
          }
          else if (hashCode == OPEN_WORKFLOWS_LIMIT_EXCEEDED_HASH)
          {
            return StartChildWorkflowExecutionFailedCause::OPEN_WORKFLOWS_LIMIT_EXCEEDED;
          }
          else if (hashCode == CHILD_CREATION_RATE_EXCEEDED_HASH)
          {
            return StartChildWorkflowExecutionFailedCause::CHILD_CREATION_RATE_EXCEEDED;
          }
          else if (hashCode == WORKFLOW_ALREADY_RUNNING_HASH)
          {
            return StartChildWorkflowExecutionFailedCause::WORKFLOW_ALREADY_RUNNING;
          }
          else if (hashCode == DEFAULT_EXECUTION_START_TO_CLOSE_TIMEOUT_UNDEFINED_HASH)
          {
            return StartChildWorkflowExecutionFailedCause::DEFAULT_EXECUTION_START_TO_CLOSE_TIMEOUT_UNDEFINED;
          }
          else if (hashCode == DEFAULT_TASK_LIST_UNDEFINED_HASH)
          {
            return StartChildWorkflowExecutionFailedCause::DEFAULT_TASK_LIST_UNDEFINED;
          }
          else if (hashCode == DEFAULT_TASK_START_TO_CLOSE_TIMEOUT_UNDEFINED_HASH)
          {
            return StartChildWorkflowExecutionFailedCause::DEFAULT_TASK_START_TO_CLOSE_TIMEOUT_UNDEFINED;
          }
          else if (hashCode == DEFAULT_CHILD_POLICY_UNDEFINED_HASH)
          {
            return StartChildWorkflowExecutionFailedCause::DEFAULT_CHILD_POLICY_UNDEFINED;
          }
          else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
          {
            return StartChildWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StartChildWorkflowExecutionFailedCause>(hashCode);
          }

          return StartChildWorkflowExecutionFailedCause::NOT_SET;
        }

        Aws::String GetNameForStartChildWorkflowExecutionFailedCause(StartChildWorkflowExecutionFailedCause enumValue)
        {
          switch(enumValue)
          {
          case StartChildWorkflowExecutionFailedCause::WORKFLOW_TYPE_DOES_NOT_EXIST:
            return "WORKFLOW_TYPE_DOES_NOT_EXIST";
          case StartChildWorkflowExecutionFailedCause::WORKFLOW_TYPE_DEPRECATED:
            return "WORKFLOW_TYPE_DEPRECATED";
          case StartChildWorkflowExecutionFailedCause::OPEN_CHILDREN_LIMIT_EXCEEDED:
            return "OPEN_CHILDREN_LIMIT_EXCEEDED";
          case StartChildWorkflowExecutionFailedCause::OPEN_WORKFLOWS_LIMIT_EXCEEDED:
            return "OPEN_WORKFLOWS_LIMIT_EXCEEDED";
          case StartChildWorkflowExecutionFailedCause::CHILD_CREATION_RATE_EXCEEDED:
            return "CHILD_CREATION_RATE_EXCEEDED";
          case StartChildWorkflowExecutionFailedCause::WORKFLOW_ALREADY_RUNNING:
            return "WORKFLOW_ALREADY_RUNNING";
          case StartChildWorkflowExecutionFailedCause::DEFAULT_EXECUTION_START_TO_CLOSE_TIMEOUT_UNDEFINED:
            return "DEFAULT_EXECUTION_START_TO_CLOSE_TIMEOUT_UNDEFINED";
          case StartChildWorkflowExecutionFailedCause::DEFAULT_TASK_LIST_UNDEFINED:
            return "DEFAULT_TASK_LIST_UNDEFINED";
          case StartChildWorkflowExecutionFailedCause::DEFAULT_TASK_START_TO_CLOSE_TIMEOUT_UNDEFINED:
            return "DEFAULT_TASK_START_TO_CLOSE_TIMEOUT_UNDEFINED";
          case StartChildWorkflowExecutionFailedCause::DEFAULT_CHILD_POLICY_UNDEFINED:
            return "DEFAULT_CHILD_POLICY_UNDEFINED";
          case StartChildWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED:
            return "OPERATION_NOT_PERMITTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace StartChildWorkflowExecutionFailedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
