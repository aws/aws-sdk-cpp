/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/CreateResourceGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateResourceGroupRequest::CreateResourceGroupRequest() : 
    m_resourceGroupTagsHasBeenSet(false)
{
}

Aws::String CreateResourceGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceGroupTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceGroupTagsJsonList(m_resourceGroupTags.size());
   for(unsigned resourceGroupTagsIndex = 0; resourceGroupTagsIndex < resourceGroupTagsJsonList.GetLength(); ++resourceGroupTagsIndex)
   {
     resourceGroupTagsJsonList[resourceGroupTagsIndex].AsObject(m_resourceGroupTags[resourceGroupTagsIndex].Jsonize());
   }
   payload.WithArray("resourceGroupTags", std::move(resourceGroupTagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateResourceGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.CreateResourceGroup"));
  return headers;

}




