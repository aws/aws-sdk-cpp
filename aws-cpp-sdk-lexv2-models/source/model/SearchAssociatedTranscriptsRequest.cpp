/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SearchAssociatedTranscriptsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchAssociatedTranscriptsRequest::SearchAssociatedTranscriptsRequest() : 
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_botRecommendationIdHasBeenSet(false),
    m_searchOrder(SearchOrder::NOT_SET),
    m_searchOrderHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextIndex(0),
    m_nextIndexHasBeenSet(false)
{
}

Aws::String SearchAssociatedTranscriptsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_searchOrderHasBeenSet)
  {
   payload.WithString("searchOrder", SearchOrderMapper::GetNameForSearchOrder(m_searchOrder));
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

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextIndexHasBeenSet)
  {
   payload.WithInteger("nextIndex", m_nextIndex);

  }

  return payload.View().WriteReadable();
}




