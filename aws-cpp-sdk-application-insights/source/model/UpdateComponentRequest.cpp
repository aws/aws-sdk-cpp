/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/UpdateComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateComponentRequest::UpdateComponentRequest() : 
    m_resourceGroupNameHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_newComponentNameHasBeenSet(false),
    m_resourceListHasBeenSet(false)
{
}

Aws::String UpdateComponentRequest::SerializePayload() const
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

  if(m_newComponentNameHasBeenSet)
  {
   payload.WithString("NewComponentName", m_newComponentName);

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

Aws::Http::HeaderValueCollection UpdateComponentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EC2WindowsBarleyService.UpdateComponent"));
  return headers;

}




