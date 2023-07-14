/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskInvocationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMaintenanceWindowExecutionTaskInvocationRequest::GetMaintenanceWindowExecutionTaskInvocationRequest() : 
    m_windowExecutionIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_invocationIdHasBeenSet(false)
{
}

Aws::String GetMaintenanceWindowExecutionTaskInvocationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_windowExecutionIdHasBeenSet)
  {
   payload.WithString("WindowExecutionId", m_windowExecutionId);

  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("TaskId", m_taskId);

  }

  if(m_invocationIdHasBeenSet)
  {
   payload.WithString("InvocationId", m_invocationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetMaintenanceWindowExecutionTaskInvocationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.GetMaintenanceWindowExecutionTaskInvocation"));
  return headers;

}




