/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/model/SearchProductsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchProductsRequest::SearchProductsRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_sortBy(ProductViewSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_pageTokenHasBeenSet(false)
{
}

Aws::String SearchProductsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_filtersHasBeenSet)
  {
   JsonValue filtersJsonMap;
   for(auto& filtersItem : m_filters)
   {
     Array<JsonValue> productViewFilterValuesJsonList(filtersItem.second.size());
     for(unsigned productViewFilterValuesIndex = 0; productViewFilterValuesIndex < productViewFilterValuesJsonList.GetLength(); ++productViewFilterValuesIndex)
     {
       productViewFilterValuesJsonList[productViewFilterValuesIndex].AsString(filtersItem.second[productViewFilterValuesIndex]);
     }
     filtersJsonMap.WithArray(ProductViewFilterByMapper::GetNameForProductViewFilterBy(filtersItem.first), std::move(productViewFilterValuesJsonList));
   }
   payload.WithObject("Filters", std::move(filtersJsonMap));

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", ProductViewSortByMapper::GetNameForProductViewSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("PageToken", m_pageToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SearchProductsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.SearchProducts"));
  return headers;

}



