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
#include <aws/swf/model/CancelWorkflowExecutionFailedCause.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int UNHANDLED_DECISION_HASH = HashingUtils::HashString("UNHANDLED_DECISION");
static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OPERATION_NOT_PERMITTED");

namespace Aws
{
namespace SWF
{
namespace Model
{
namespace CancelWorkflowExecutionFailedCauseMapper
{
CancelWorkflowExecutionFailedCause GetCancelWorkflowExecutionFailedCauseForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == UNHANDLED_DECISION_HASH)
  {
    return CancelWorkflowExecutionFailedCause::UNHANDLED_DECISION;
  }
  else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return CancelWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED;
  }

  return CancelWorkflowExecutionFailedCause::NOT_SET;
}

Aws::String GetNameForCancelWorkflowExecutionFailedCause(CancelWorkflowExecutionFailedCause value)
{
  switch(value)
  {
  case CancelWorkflowExecutionFailedCause::UNHANDLED_DECISION:
    return "UNHANDLED_DECISION";
  case CancelWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED:
    return "OPERATION_NOT_PERMITTED";
  default:
    return "";
  }
}

} // namespace CancelWorkflowExecutionFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
