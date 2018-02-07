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

#include <aws/servicecatalog/model/SearchProvisionedProductsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchProvisionedProductsRequest::SearchProvisionedProductsRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_accessLevelFilterHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_pageTokenHasBeenSet(false)
{
}

Aws::String SearchProvisionedProductsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_accessLevelFilterHasBeenSet)
  {
   payload.WithObject("AccessLevelFilter", m_accessLevelFilter.Jsonize());

  }

  if(m_filtersHasBeenSet)
  {
   JsonValue filtersJsonMap;
   for(auto& filtersItem : m_filters)
   {
     Array<JsonValue> provisionedProductViewFilterValuesJsonList(filtersItem.second.size());
     for(unsigned provisionedProductViewFilterValuesIndex = 0; provisionedProductViewFilterValuesIndex < provisionedProductViewFilterValuesJsonList.GetLength(); ++provisionedProductViewFilterValuesIndex)
     {
       provisionedProductViewFilterValuesJsonList[provisionedProductViewFilterValuesIndex].AsString(filtersItem.second[provisionedProductViewFilterValuesIndex]);
     }
     filtersJsonMap.WithArray(ProvisionedProductViewFilterByMapper::GetNameForProvisionedProductViewFilterBy(filtersItem.first), std::move(provisionedProductViewFilterValuesJsonList));
   }
   payload.WithObject("Filters", std::move(filtersJsonMap));

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", m_sortBy);

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("PageToken", m_pageToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SearchProvisionedProductsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.SearchProvisionedProducts"));
  return headers;

}




