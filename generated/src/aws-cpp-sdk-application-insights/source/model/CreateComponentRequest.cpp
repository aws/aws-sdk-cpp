/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/CreateComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateComponentRequest::CreateComponentRequest() : 
    m_resourceGroupNameHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_resourceListHasBeenSet(false)
{
}

Aws::String CreateComponentRequest::SerializePayload() const
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

  if(m_resourceListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceListJsonList(m_resourceList.size());
   for(unsigned resourceListIndex = 0; resourceListIndex < resourceListJsonList.GetLength(); ++resourceListIndex)
   {
     resourceListJsonList[resourceListIndex].AsString(m_resourceList[resourceListIndex]);
   }
   payload.WithArray("ResourceList", std::move(resourceListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateComponentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EC2WindowsBarleyService.CreateComponent"));
  return headers;

}




