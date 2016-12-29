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
#include <aws/swf/model/WorkflowExecutionTimedOutEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

WorkflowExecutionTimedOutEventAttributes::WorkflowExecutionTimedOutEventAttributes() : 
    m_timeoutType(WorkflowExecutionTimeoutType::NOT_SET),
    m_timeoutTypeHasBeenSet(false),
    m_childPolicy(ChildPolicy::NOT_SET),
    m_childPolicyHasBeenSet(false)
{
}

WorkflowExecutionTimedOutEventAttributes::WorkflowExecutionTimedOutEventAttributes(const JsonValue& jsonValue) : 
    m_timeoutType(WorkflowExecutionTimeoutType::NOT_SET),
    m_timeoutTypeHasBeenSet(false),
    m_childPolicy(ChildPolicy::NOT_SET),
    m_childPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowExecutionTimedOutEventAttributes& WorkflowExecutionTimedOutEventAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("timeoutType"))
  {
    m_timeoutType = WorkflowExecutionTimeoutTypeMapper::GetWorkflowExecutionTimeoutTypeForName(jsonValue.GetString("timeoutType"));

    m_timeoutTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("childPolicy"))
  {
    m_childPolicy = ChildPolicyMapper::GetChildPolicyForName(jsonValue.GetString("childPolicy"));

    m_childPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowExecutionTimedOutEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutTypeHasBeenSet)
  {
   payload.WithString("timeoutType", WorkflowExecutionTimeoutTypeMapper::GetNameForWorkflowExecutionTimeoutType(m_timeoutType));
  }

  if(m_childPolicyHasBeenSet)
  {
   payload.WithString("childPolicy", ChildPolicyMapper::GetNameForChildPolicy(m_childPolicy));
  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws