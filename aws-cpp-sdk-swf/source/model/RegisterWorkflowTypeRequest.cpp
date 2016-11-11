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
#include <aws/swf/model/RegisterWorkflowTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterWorkflowTypeRequest::RegisterWorkflowTypeRequest() : 
    m_domainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultTaskStartToCloseTimeoutHasBeenSet(false),
    m_defaultExecutionStartToCloseTimeoutHasBeenSet(false),
    m_defaultTaskListHasBeenSet(false),
    m_defaultTaskPriorityHasBeenSet(false),
    m_defaultChildPolicy(ChildPolicy::NOT_SET),
    m_defaultChildPolicyHasBeenSet(false),
    m_defaultLambdaRoleHasBeenSet(false)
{
}

Aws::String RegisterWorkflowTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_defaultTaskStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("defaultTaskStartToCloseTimeout", m_defaultTaskStartToCloseTimeout);

  }

  if(m_defaultExecutionStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("defaultExecutionStartToCloseTimeout", m_defaultExecutionStartToCloseTimeout);

  }

  if(m_defaultTaskListHasBeenSet)
  {
   payload.WithObject("defaultTaskList", m_defaultTaskList.Jsonize());

  }

  if(m_defaultTaskPriorityHasBeenSet)
  {
   payload.WithString("defaultTaskPriority", m_defaultTaskPriority);

  }

  if(m_defaultChildPolicyHasBeenSet)
  {
   payload.WithString("defaultChildPolicy", ChildPolicyMapper::GetNameForChildPolicy(m_defaultChildPolicy));
  }

  if(m_defaultLambdaRoleHasBeenSet)
  {
   payload.WithString("defaultLambdaRole", m_defaultLambdaRole);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterWorkflowTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.RegisterWorkflowType"));
  return headers;

}



