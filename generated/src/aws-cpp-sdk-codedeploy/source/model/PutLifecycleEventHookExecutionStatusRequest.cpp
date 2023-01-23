/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutLifecycleEventHookExecutionStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.PutLifecycleEventHookExecutionStatus"));
  return headers;

}




