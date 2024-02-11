/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/RemoveWorkloadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveWorkloadRequest::RemoveWorkloadRequest() : 
    m_resourceGroupNameHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_workloadIdHasBeenSet(false)
{
}

Aws::String RemoveWorkloadRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RemoveWorkloadRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EC2WindowsBarleyService.RemoveWorkload"));
  return headers;

}




