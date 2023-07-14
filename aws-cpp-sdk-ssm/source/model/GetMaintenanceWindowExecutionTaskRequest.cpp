/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMaintenanceWindowExecutionTaskRequest::GetMaintenanceWindowExecutionTaskRequest() : 
    m_windowExecutionIdHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

Aws::String GetMaintenanceWindowExecutionTaskRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetMaintenanceWindowExecutionTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.GetMaintenanceWindowExecutionTask"));
  return headers;

}




