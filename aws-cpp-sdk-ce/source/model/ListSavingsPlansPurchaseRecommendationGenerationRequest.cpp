/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ListSavingsPlansPurchaseRecommendationGenerationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListSavingsPlansPurchaseRecommendationGenerationRequest::ListSavingsPlansPurchaseRecommendationGenerationRequest() : 
    m_generationStatus(GenerationStatus::NOT_SET),
    m_generationStatusHasBeenSet(false),
    m_recommendationIdsHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false)
{
}

Aws::String ListSavingsPlansPurchaseRecommendationGenerationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_generationStatusHasBeenSet)
  {
   payload.WithString("GenerationStatus", GenerationStatusMapper::GetNameForGenerationStatus(m_generationStatus));
  }

  if(m_recommendationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationIdsJsonList(m_recommendationIds.size());
   for(unsigned recommendationIdsIndex = 0; recommendationIdsIndex < recommendationIdsJsonList.GetLength(); ++recommendationIdsIndex)
   {
     recommendationIdsJsonList[recommendationIdsIndex].AsString(m_recommendationIds[recommendationIdsIndex]);
   }
   payload.WithArray("RecommendationIds", std::move(recommendationIdsJsonList));

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("NextPageToken", m_nextPageToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListSavingsPlansPurchaseRecommendationGenerationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.ListSavingsPlansPurchaseRecommendationGeneration"));
  return headers;

}




