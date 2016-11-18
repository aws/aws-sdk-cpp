﻿/*
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
#include <aws/swf/model/WorkflowExecutionStartedEventAttributes.h>
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

WorkflowExecutionStartedEventAttributes::WorkflowExecutionStartedEventAttributes() : 
    m_inputHasBeenSet(false),
    m_executionStartToCloseTimeoutHasBeenSet(false),
    m_taskStartToCloseTimeoutHasBeenSet(false),
    m_childPolicy(ChildPolicy::NOT_SET),
    m_childPolicyHasBeenSet(false),
    m_taskListHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_taskPriorityHasBeenSet(false),
    m_continuedExecutionRunIdHasBeenSet(false),
    m_parentWorkflowExecutionHasBeenSet(false),
    m_parentInitiatedEventId(0),
    m_parentInitiatedEventIdHasBeenSet(false),
    m_lambdaRoleHasBeenSet(false)
{
}

WorkflowExecutionStartedEventAttributes::WorkflowExecutionStartedEventAttributes(const JsonValue& jsonValue) : 
    m_inputHasBeenSet(false),
    m_executionStartToCloseTimeoutHasBeenSet(false),
    m_taskStartToCloseTimeoutHasBeenSet(false),
    m_childPolicy(ChildPolicy::NOT_SET),
    m_childPolicyHasBeenSet(false),
    m_taskListHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_taskPriorityHasBeenSet(false),
    m_continuedExecutionRunIdHasBeenSet(false),
    m_parentWorkflowExecutionHasBeenSet(false),
    m_parentInitiatedEventId(0),
    m_parentInitiatedEventIdHasBeenSet(false),
    m_lambdaRoleHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowExecutionStartedEventAttributes& WorkflowExecutionStartedEventAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionStartToCloseTimeout"))
  {
    m_executionStartToCloseTimeout = jsonValue.GetString("executionStartToCloseTimeout");

    m_executionStartToCloseTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskStartToCloseTimeout"))
  {
    m_taskStartToCloseTimeout = jsonValue.GetString("taskStartToCloseTimeout");

    m_taskStartToCloseTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("childPolicy"))
  {
    m_childPolicy = ChildPolicyMapper::GetChildPolicyForName(jsonValue.GetString("childPolicy"));

    m_childPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskList"))
  {
    m_taskList = jsonValue.GetObject("taskList");

    m_taskListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowType"))
  {
    m_workflowType = jsonValue.GetObject("workflowType");

    m_workflowTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagList"))
  {
    Array<JsonValue> tagListJsonList = jsonValue.GetArray("tagList");
    for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
    {
      m_tagList.push_back(tagListJsonList[tagListIndex].AsString());
    }
    m_tagListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskPriority"))
  {
    m_taskPriority = jsonValue.GetString("taskPriority");

    m_taskPriorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("continuedExecutionRunId"))
  {
    m_continuedExecutionRunId = jsonValue.GetString("continuedExecutionRunId");

    m_continuedExecutionRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentWorkflowExecution"))
  {
    m_parentWorkflowExecution = jsonValue.GetObject("parentWorkflowExecution");

    m_parentWorkflowExecutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentInitiatedEventId"))
  {
    m_parentInitiatedEventId = jsonValue.GetInt64("parentInitiatedEventId");

    m_parentInitiatedEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaRole"))
  {
    m_lambdaRole = jsonValue.GetString("lambdaRole");

    m_lambdaRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowExecutionStartedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_executionStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("executionStartToCloseTimeout", m_executionStartToCloseTimeout);

  }

  if(m_taskStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("taskStartToCloseTimeout", m_taskStartToCloseTimeout);

  }

  if(m_childPolicyHasBeenSet)
  {
   payload.WithString("childPolicy", ChildPolicyMapper::GetNameForChildPolicy(m_childPolicy));
  }

  if(m_taskListHasBeenSet)
  {
   payload.WithObject("taskList", m_taskList.Jsonize());

  }

  if(m_workflowTypeHasBeenSet)
  {
   payload.WithObject("workflowType", m_workflowType.Jsonize());

  }

  if(m_tagListHasBeenSet)
  {
   Array<JsonValue> tagListJsonList(m_tagList.size());
   for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
   {
     tagListJsonList[tagListIndex].AsString(m_tagList[tagListIndex]);
   }
   payload.WithArray("tagList", std::move(tagListJsonList));

  }

  if(m_taskPriorityHasBeenSet)
  {
   payload.WithString("taskPriority", m_taskPriority);

  }

  if(m_continuedExecutionRunIdHasBeenSet)
  {
   payload.WithString("continuedExecutionRunId", m_continuedExecutionRunId);

  }

  if(m_parentWorkflowExecutionHasBeenSet)
  {
   payload.WithObject("parentWorkflowExecution", m_parentWorkflowExecution.Jsonize());

  }

  if(m_parentInitiatedEventIdHasBeenSet)
  {
   payload.WithInt64("parentInitiatedEventId", m_parentInitiatedEventId);

  }

  if(m_lambdaRoleHasBeenSet)
  {
   payload.WithString("lambdaRole", m_lambdaRole);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws