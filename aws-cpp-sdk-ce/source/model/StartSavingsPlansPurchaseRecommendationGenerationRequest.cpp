/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/StartSavingsPlansPurchaseRecommendationGenerationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartSavingsPlansPurchaseRecommendationGenerationRequest::StartSavingsPlansPurchaseRecommendationGenerationRequest()
{
}

Aws::String StartSavingsPlansPurchaseRecommendationGenerationRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection StartSavingsPlansPurchaseRecommendationGenerationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.StartSavingsPlansPurchaseRecommendationGeneration"));
  return headers;

}




