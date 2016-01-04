/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/model/RequestCancelExternalWorkflowExecutionFailedCause.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int UNKNOWN_EXTERNAL_WORKFLOW_EXECUTION_HASH = HashingUtils::HashString("UNKNOWN_EXTERNAL_WORKFLOW_EXECUTION");
static const int REQUEST_CANCEL_EXTERNAL_WORKFLOW_EXECUTION_RATE_EXCEEDED_HASH = HashingUtils::HashString("REQUEST_CANCEL_EXTERNAL_WORKFLOW_EXECUTION_RATE_EXCEEDED");
static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OPERATION_NOT_PERMITTED");

namespace Aws
{
namespace SWF
{
namespace Model
{
namespace RequestCancelExternalWorkflowExecutionFailedCauseMapper
{
RequestCancelExternalWorkflowExecutionFailedCause GetRequestCancelExternalWorkflowExecutionFailedCauseForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == UNKNOWN_EXTERNAL_WORKFLOW_EXECUTION_HASH)
  {
    return RequestCancelExternalWorkflowExecutionFailedCause::UNKNOWN_EXTERNAL_WORKFLOW_EXECUTION;
  }
  else if (hashCode == REQUEST_CANCEL_EXTERNAL_WORKFLOW_EXECUTION_RATE_EXCEEDED_HASH)
  {
    return RequestCancelExternalWorkflowExecutionFailedCause::REQUEST_CANCEL_EXTERNAL_WORKFLOW_EXECUTION_RATE_EXCEEDED;
  }
  else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return RequestCancelExternalWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED;
  }

  return RequestCancelExternalWorkflowExecutionFailedCause::NOT_SET;
}

Aws::String GetNameForRequestCancelExternalWorkflowExecutionFailedCause(RequestCancelExternalWorkflowExecutionFailedCause value)
{
  switch(value)
  {
  case RequestCancelExternalWorkflowExecutionFailedCause::UNKNOWN_EXTERNAL_WORKFLOW_EXECUTION:
    return "UNKNOWN_EXTERNAL_WORKFLOW_EXECUTION";
  case RequestCancelExternalWorkflowExecutionFailedCause::REQUEST_CANCEL_EXTERNAL_WORKFLOW_EXECUTION_RATE_EXCEEDED:
    return "REQUEST_CANCEL_EXTERNAL_WORKFLOW_EXECUTION_RATE_EXCEEDED";
  case RequestCancelExternalWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED:
    return "OPERATION_NOT_PERMITTED";
  default:
    return "";
  }
}

} // namespace RequestCancelExternalWorkflowExecutionFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
