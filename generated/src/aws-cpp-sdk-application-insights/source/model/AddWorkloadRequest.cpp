﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/AddWorkloadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddWorkloadRequest::AddWorkloadRequest() : 
    m_resourceGroupNameHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_workloadConfigurationHasBeenSet(false)
{
}

Aws::String AddWorkloadRequest::SerializePayload() const
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

  if(m_workloadConfigurationHasBeenSet)
  {
   payload.WithObject("WorkloadConfiguration", m_workloadConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddWorkloadRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EC2WindowsBarleyService.AddWorkload"));
  return headers;

}




