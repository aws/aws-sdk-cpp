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
#include <aws/swf/model/StartWorkflowExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartWorkflowExecutionRequest::StartWorkflowExecutionRequest() : 
    m_domainHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_taskListHasBeenSet(false),
    m_taskPriorityHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_executionStartToCloseTimeoutHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_taskStartToCloseTimeoutHasBeenSet(false),
    m_childPolicy(ChildPolicy::NOT_SET),
    m_childPolicyHasBeenSet(false),
    m_lambdaRoleHasBeenSet(false)
{
}

Aws::String StartWorkflowExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("workflowId", m_workflowId);

  }

  if(m_workflowTypeHasBeenSet)
  {
   payload.WithObject("workflowType", m_workflowType.Jsonize());

  }

  if(m_taskListHasBeenSet)
  {
   payload.WithObject("taskList", m_taskList.Jsonize());

  }

  if(m_taskPriorityHasBeenSet)
  {
   payload.WithString("taskPriority", m_taskPriority);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_executionStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("executionStartToCloseTimeout", m_executionStartToCloseTimeout);

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

  if(m_taskStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("taskStartToCloseTimeout", m_taskStartToCloseTimeout);

  }

  if(m_childPolicyHasBeenSet)
  {
   payload.WithString("childPolicy", ChildPolicyMapper::GetNameForChildPolicy(m_childPolicy));
  }

  if(m_lambdaRoleHasBeenSet)
  {
   payload.WithString("lambdaRole", m_lambdaRole);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection StartWorkflowExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.StartWorkflowExecution"));
  return headers;

}



