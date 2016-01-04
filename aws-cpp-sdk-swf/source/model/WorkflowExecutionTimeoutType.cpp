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
#include <aws/swf/model/WorkflowExecutionTimeoutType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int START_TO_CLOSE_HASH = HashingUtils::HashString("START_TO_CLOSE");

namespace Aws
{
namespace SWF
{
namespace Model
{
namespace WorkflowExecutionTimeoutTypeMapper
{
WorkflowExecutionTimeoutType GetWorkflowExecutionTimeoutTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == START_TO_CLOSE_HASH)
  {
    return WorkflowExecutionTimeoutType::START_TO_CLOSE;
  }

  return WorkflowExecutionTimeoutType::NOT_SET;
}

Aws::String GetNameForWorkflowExecutionTimeoutType(WorkflowExecutionTimeoutType value)
{
  switch(value)
  {
  case WorkflowExecutionTimeoutType::START_TO_CLOSE:
    return "START_TO_CLOSE";
  default:
    return "";
  }
}

} // namespace WorkflowExecutionTimeoutTypeMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
