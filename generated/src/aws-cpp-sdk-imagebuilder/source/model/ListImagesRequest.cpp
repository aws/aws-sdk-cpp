/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ListImagesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListImagesRequest::ListImagesRequest() : 
    m_owner(Ownership::NOT_SET),
    m_ownerHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_byName(false),
    m_byNameHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_includeDeprecated(false),
    m_includeDeprecatedHasBeenSet(false)
{
}

Aws::String ListImagesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", OwnershipMapper::GetNameForOwnership(m_owner));
  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_byNameHasBeenSet)
  {
   payload.WithBool("byName", m_byName);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_includeDeprecatedHasBeenSet)
  {
   payload.WithBool("includeDeprecated", m_includeDeprecated);

  }

  return payload.View().WriteReadable();
}




