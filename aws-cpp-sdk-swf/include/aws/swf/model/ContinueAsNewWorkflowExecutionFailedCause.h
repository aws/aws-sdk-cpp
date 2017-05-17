/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{
  enum class ContinueAsNewWorkflowExecutionFailedCause
  {
    NOT_SET,
    UNHANDLED_DECISION,
    WORKFLOW_TYPE_DEPRECATED,
    WORKFLOW_TYPE_DOES_NOT_EXIST,
    DEFAULT_EXECUTION_START_TO_CLOSE_TIMEOUT_UNDEFINED,
    DEFAULT_TASK_START_TO_CLOSE_TIMEOUT_UNDEFINED,
    DEFAULT_TASK_LIST_UNDEFINED,
    DEFAULT_CHILD_POLICY_UNDEFINED,
    CONTINUE_AS_NEW_WORKFLOW_EXECUTION_RATE_EXCEEDED,
    OPERATION_NOT_PERMITTED
  };

namespace ContinueAsNewWorkflowExecutionFailedCauseMapper
{
AWS_SWF_API ContinueAsNewWorkflowExecutionFailedCause GetContinueAsNewWorkflowExecutionFailedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForContinueAsNewWorkflowExecutionFailedCause(ContinueAsNewWorkflowExecutionFailedCause value);
} // namespace ContinueAsNewWorkflowExecutionFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
