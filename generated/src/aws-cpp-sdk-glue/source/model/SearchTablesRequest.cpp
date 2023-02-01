/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SearchTablesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchTablesRequest::SearchTablesRequest() : 
    m_catalogIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_searchTextHasBeenSet(false),
    m_sortCriteriaHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_resourceShareType(ResourceShareType::NOT_SET),
    m_resourceShareTypeHasBeenSet(false)
{
}

Aws::String SearchTablesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  if(m_searchTextHasBeenSet)
  {
   payload.WithString("SearchText", m_searchText);

  }

  if(m_sortCriteriaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortCriteriaJsonList(m_sortCriteria.size());
   for(unsigned sortCriteriaIndex = 0; sortCriteriaIndex < sortCriteriaJsonList.GetLength(); ++sortCriteriaIndex)
   {
     sortCriteriaJsonList[sortCriteriaIndex].AsObject(m_sortCriteria[sortCriteriaIndex].Jsonize());
   }
   payload.WithArray("SortCriteria", std::move(sortCriteriaJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_resourceShareTypeHasBeenSet)
  {
   payload.WithString("ResourceShareType", ResourceShareTypeMapper::GetNameForResourceShareType(m_resourceShareType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchTablesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.SearchTables"));
  return headers;

}




