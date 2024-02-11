/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeStorageSystemResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeStorageSystemResourcesRequest::DescribeStorageSystemResourcesRequest() : 
    m_discoveryJobArnHasBeenSet(false),
    m_resourceType(DiscoveryResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeStorageSystemResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_discoveryJobArnHasBeenSet)
  {
   payload.WithString("DiscoveryJobArn", m_discoveryJobArn);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", DiscoveryResourceTypeMapper::GetNameForDiscoveryResourceType(m_resourceType));
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

  if(m_filterHasBeenSet)
  {
   JsonValue filterJsonMap;
   for(auto& filterItem : m_filter)
   {
     Aws::Utils::Array<JsonValue> filterMembersJsonList(filterItem.second.size());
     for(unsigned filterMembersIndex = 0; filterMembersIndex < filterMembersJsonList.GetLength(); ++filterMembersIndex)
     {
       filterMembersJsonList[filterMembersIndex].AsString(filterItem.second[filterMembersIndex]);
     }
     filterJsonMap.WithArray(DiscoveryResourceFilterMapper::GetNameForDiscoveryResourceFilter(filterItem.first), std::move(filterMembersJsonList));
   }
   payload.WithObject("Filter", std::move(filterJsonMap));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeStorageSystemResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.DescribeStorageSystemResources"));
  return headers;

}




