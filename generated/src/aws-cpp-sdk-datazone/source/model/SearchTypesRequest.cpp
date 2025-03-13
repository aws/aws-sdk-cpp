/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SearchTypesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SearchTypesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("filters", m_filters.Jsonize());

  }

  if(m_managedHasBeenSet)
  {
   payload.WithBool("managed", m_managed);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_searchInHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> searchInJsonList(m_searchIn.size());
   for(unsigned searchInIndex = 0; searchInIndex < searchInJsonList.GetLength(); ++searchInIndex)
   {
     searchInJsonList[searchInIndex].AsObject(m_searchIn[searchInIndex].Jsonize());
   }
   payload.WithArray("searchIn", std::move(searchInJsonList));

  }

  if(m_searchScopeHasBeenSet)
  {
   payload.WithString("searchScope", TypesSearchScopeMapper::GetNameForTypesSearchScope(m_searchScope));
  }

  if(m_searchTextHasBeenSet)
  {
   payload.WithString("searchText", m_searchText);

  }

  if(m_sortHasBeenSet)
  {
   payload.WithObject("sort", m_sort.Jsonize());

  }

  return payload.View().WriteReadable();
}




