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
   Array<JsonValue> resourceListJsonList(m_resourceList.size());
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




