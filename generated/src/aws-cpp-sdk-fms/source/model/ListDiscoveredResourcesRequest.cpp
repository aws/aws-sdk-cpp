/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ListDiscoveredResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDiscoveredResourcesRequest::ListDiscoveredResourcesRequest() : 
    m_memberAccountIdsHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListDiscoveredResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_memberAccountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> memberAccountIdsJsonList(m_memberAccountIds.size());
   for(unsigned memberAccountIdsIndex = 0; memberAccountIdsIndex < memberAccountIdsJsonList.GetLength(); ++memberAccountIdsIndex)
   {
     memberAccountIdsJsonList[memberAccountIdsIndex].AsString(m_memberAccountIds[memberAccountIdsIndex]);
   }
   payload.WithArray("MemberAccountIds", std::move(memberAccountIdsJsonList));

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

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

Aws::Http::HeaderValueCollection ListDiscoveredResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFMS_20180101.ListDiscoveredResources"));
  return headers;

}




