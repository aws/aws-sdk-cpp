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
#include <aws/swf/model/WorkflowExecutionCancelRequestedCause.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int CHILD_POLICY_APPLIED_HASH = HashingUtils::HashString("CHILD_POLICY_APPLIED");

namespace Aws
{
namespace SWF
{
namespace Model
{
namespace WorkflowExecutionCancelRequestedCauseMapper
{
WorkflowExecutionCancelRequestedCause GetWorkflowExecutionCancelRequestedCauseForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == CHILD_POLICY_APPLIED_HASH)
  {
    return WorkflowExecutionCancelRequestedCause::CHILD_POLICY_APPLIED;
  }

  return WorkflowExecutionCancelRequestedCause::NOT_SET;
}

Aws::String GetNameForWorkflowExecutionCancelRequestedCause(WorkflowExecutionCancelRequestedCause value)
{
  switch(value)
  {
  case WorkflowExecutionCancelRequestedCause::CHILD_POLICY_APPLIED:
    return "CHILD_POLICY_APPLIED";
  default:
    return "";
  }
}

} // namespace WorkflowExecutionCancelRequestedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
