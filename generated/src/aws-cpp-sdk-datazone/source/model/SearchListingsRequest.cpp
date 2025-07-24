/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SearchListingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SearchListingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_additionalAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalAttributesJsonList(m_additionalAttributes.size());
   for(unsigned additionalAttributesIndex = 0; additionalAttributesIndex < additionalAttributesJsonList.GetLength(); ++additionalAttributesIndex)
   {
     additionalAttributesJsonList[additionalAttributesIndex].AsString(SearchOutputAdditionalAttributeMapper::GetNameForSearchOutputAdditionalAttribute(m_additionalAttributes[additionalAttributesIndex]));
   }
   payload.WithArray("additionalAttributes", std::move(additionalAttributesJsonList));

  }

  if(m_aggregationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggregationsJsonList(m_aggregations.size());
   for(unsigned aggregationsIndex = 0; aggregationsIndex < aggregationsJsonList.GetLength(); ++aggregationsIndex)
   {
     aggregationsJsonList[aggregationsIndex].AsObject(m_aggregations[aggregationsIndex].Jsonize());
   }
   payload.WithArray("aggregations", std::move(aggregationsJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("filters", m_filters.Jsonize());

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




