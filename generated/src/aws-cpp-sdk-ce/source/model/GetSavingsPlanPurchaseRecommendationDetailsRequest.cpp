/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetSavingsPlanPurchaseRecommendationDetailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSavingsPlanPurchaseRecommendationDetailsRequest::GetSavingsPlanPurchaseRecommendationDetailsRequest() : 
    m_recommendationDetailIdHasBeenSet(false)
{
}

Aws::String GetSavingsPlanPurchaseRecommendationDetailsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recommendationDetailIdHasBeenSet)
  {
   payload.WithString("RecommendationDetailId", m_recommendationDetailId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSavingsPlanPurchaseRecommendationDetailsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetSavingsPlanPurchaseRecommendationDetails"));
  return headers;

}




