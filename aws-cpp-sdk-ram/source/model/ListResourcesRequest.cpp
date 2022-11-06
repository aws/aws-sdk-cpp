/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ListResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListResourcesRequest::ListResourcesRequest() : 
    m_resourceOwner(ResourceOwner::NOT_SET),
    m_resourceOwnerHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceArnsHasBeenSet(false),
    m_resourceShareArnsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_resourceRegionScope(ResourceRegionScopeFilter::NOT_SET),
    m_resourceRegionScopeHasBeenSet(false)
{
}

Aws::String ListResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceOwnerHasBeenSet)
  {
   payload.WithString("resourceOwner", ResourceOwnerMapper::GetNameForResourceOwner(m_resourceOwner));
  }

  if(m_principalHasBeenSet)
  {
   payload.WithString("principal", m_principal);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_resourceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
   for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
   {
     resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
   }
   payload.WithArray("resourceArns", std::move(resourceArnsJsonList));

  }

  if(m_resourceShareArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceShareArnsJsonList(m_resourceShareArns.size());
   for(unsigned resourceShareArnsIndex = 0; resourceShareArnsIndex < resourceShareArnsJsonList.GetLength(); ++resourceShareArnsIndex)
   {
     resourceShareArnsJsonList[resourceShareArnsIndex].AsString(m_resourceShareArns[resourceShareArnsIndex]);
   }
   payload.WithArray("resourceShareArns", std::move(resourceShareArnsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_resourceRegionScopeHasBeenSet)
  {
   payload.WithString("resourceRegionScope", ResourceRegionScopeFilterMapper::GetNameForResourceRegionScopeFilter(m_resourceRegionScope));
  }

  return payload.View().WriteReadable();
}




