/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/GetRecommendationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostOptimizationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRecommendationRequest::GetRecommendationRequest() : 
    m_recommendationIdHasBeenSet(false)
{
}

Aws::String GetRecommendationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recommendationIdHasBeenSet)
  {
   payload.WithString("recommendationId", m_recommendationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRecommendationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CostOptimizationHubService.GetRecommendation"));
  return headers;

}




