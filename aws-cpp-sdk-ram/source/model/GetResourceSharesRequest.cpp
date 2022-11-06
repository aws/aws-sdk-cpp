/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/GetResourceSharesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResourceSharesRequest::GetResourceSharesRequest() : 
    m_resourceShareArnsHasBeenSet(false),
    m_resourceShareStatus(ResourceShareStatus::NOT_SET),
    m_resourceShareStatusHasBeenSet(false),
    m_resourceOwner(ResourceOwner::NOT_SET),
    m_resourceOwnerHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagFiltersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_permissionArnHasBeenSet(false)
{
}

Aws::String GetResourceSharesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceShareArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceShareArnsJsonList(m_resourceShareArns.size());
   for(unsigned resourceShareArnsIndex = 0; resourceShareArnsIndex < resourceShareArnsJsonList.GetLength(); ++resourceShareArnsIndex)
   {
     resourceShareArnsJsonList[resourceShareArnsIndex].AsString(m_resourceShareArns[resourceShareArnsIndex]);
   }
   payload.WithArray("resourceShareArns", std::move(resourceShareArnsJsonList));

  }

  if(m_resourceShareStatusHasBeenSet)
  {
   payload.WithString("resourceShareStatus", ResourceShareStatusMapper::GetNameForResourceShareStatus(m_resourceShareStatus));
  }

  if(m_resourceOwnerHasBeenSet)
  {
   payload.WithString("resourceOwner", ResourceOwnerMapper::GetNameForResourceOwner(m_resourceOwner));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_tagFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagFiltersJsonList(m_tagFilters.size());
   for(unsigned tagFiltersIndex = 0; tagFiltersIndex < tagFiltersJsonList.GetLength(); ++tagFiltersIndex)
   {
     tagFiltersJsonList[tagFiltersIndex].AsObject(m_tagFilters[tagFiltersIndex].Jsonize());
   }
   payload.WithArray("tagFilters", std::move(tagFiltersJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_permissionArnHasBeenSet)
  {
   payload.WithString("permissionArn", m_permissionArn);

  }

  return payload.View().WriteReadable();
}




