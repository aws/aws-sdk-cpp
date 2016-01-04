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
#include <aws/swf/model/WorkflowExecutionTerminatedCause.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int CHILD_POLICY_APPLIED_HASH = HashingUtils::HashString("CHILD_POLICY_APPLIED");
static const int EVENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("EVENT_LIMIT_EXCEEDED");
static const int OPERATOR_INITIATED_HASH = HashingUtils::HashString("OPERATOR_INITIATED");

namespace Aws
{
namespace SWF
{
namespace Model
{
namespace WorkflowExecutionTerminatedCauseMapper
{
WorkflowExecutionTerminatedCause GetWorkflowExecutionTerminatedCauseForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == CHILD_POLICY_APPLIED_HASH)
  {
    return WorkflowExecutionTerminatedCause::CHILD_POLICY_APPLIED;
  }
  else if (hashCode == EVENT_LIMIT_EXCEEDED_HASH)
  {
    return WorkflowExecutionTerminatedCause::EVENT_LIMIT_EXCEEDED;
  }
  else if (hashCode == OPERATOR_INITIATED_HASH)
  {
    return WorkflowExecutionTerminatedCause::OPERATOR_INITIATED;
  }

  return WorkflowExecutionTerminatedCause::NOT_SET;
}

Aws::String GetNameForWorkflowExecutionTerminatedCause(WorkflowExecutionTerminatedCause value)
{
  switch(value)
  {
  case WorkflowExecutionTerminatedCause::CHILD_POLICY_APPLIED:
    return "CHILD_POLICY_APPLIED";
  case WorkflowExecutionTerminatedCause::EVENT_LIMIT_EXCEEDED:
    return "EVENT_LIMIT_EXCEEDED";
  case WorkflowExecutionTerminatedCause::OPERATOR_INITIATED:
    return "OPERATOR_INITIATED";
  default:
    return "";
  }
}

} // namespace WorkflowExecutionTerminatedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
