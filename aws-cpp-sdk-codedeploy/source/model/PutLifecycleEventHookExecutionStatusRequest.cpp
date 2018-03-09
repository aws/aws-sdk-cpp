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

#include <aws/codedeploy/model/PutLifecycleEventHookExecutionStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutLifecycleEventHookExecutionStatusRequest::PutLifecycleEventHookExecutionStatusRequest() : 
    m_deploymentIdHasBeenSet(false),
    m_lifecycleEventHookExecutionIdHasBeenSet(false),
    m_status(LifecycleEventStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String PutLifecycleEventHookExecutionStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_lifecycleEventHookExecutionIdHasBeenSet)
  {
   payload.WithString("lifecycleEventHookExecutionId", m_lifecycleEventHookExecutionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", LifecycleEventStatusMapper::GetNameForLifecycleEventStatus(m_status));
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection PutLifecycleEventHookExecutionStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.PutLifecycleEventHookExecutionStatus"));
  return headers;

}




