/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/UpdateWorkloadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWorkloadRequest::UpdateWorkloadRequest() : 
    m_resourceGroupNameHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_workloadIdHasBeenSet(false),
    m_workloadConfigurationHasBeenSet(false)
{
}

Aws::String UpdateWorkloadRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceGroupNameHasBeenSet)
  {
   payload.WithString("ResourceGroupName", m_resourceGroupName);

  }

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("ComponentName", m_componentName);

  }

  if(m_workloadIdHasBeenSet)
  {
   payload.WithString("WorkloadId", m_workloadId);

  }

  if(m_workloadConfigurationHasBeenSet)
  {
   payload.WithObject("WorkloadConfiguration", m_workloadConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateWorkloadRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EC2WindowsBarleyService.UpdateWorkload"));
  return headers;

}




