/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/GenerateRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GenerateRecommendationsRequest::GenerateRecommendationsRequest() : 
    m_discoveryJobArnHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_resourceType(DiscoveryResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

Aws::String GenerateRecommendationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_discoveryJobArnHasBeenSet)
  {
   payload.WithString("DiscoveryJobArn", m_discoveryJobArn);

  }

  if(m_resourceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceIdsJsonList(m_resourceIds.size());
   for(unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex)
   {
     resourceIdsJsonList[resourceIdsIndex].AsString(m_resourceIds[resourceIdsIndex]);
   }
   payload.WithArray("ResourceIds", std::move(resourceIdsJsonList));

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", DiscoveryResourceTypeMapper::GetNameForDiscoveryResourceType(m_resourceType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GenerateRecommendationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.GenerateRecommendations"));
  return headers;

}




