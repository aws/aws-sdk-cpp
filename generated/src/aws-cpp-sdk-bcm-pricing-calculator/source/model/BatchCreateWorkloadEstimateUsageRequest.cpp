/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchCreateWorkloadEstimateUsageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMPricingCalculator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchCreateWorkloadEstimateUsageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workloadEstimateIdHasBeenSet)
  {
   payload.WithString("workloadEstimateId", m_workloadEstimateId);

  }

  if(m_usageHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usageJsonList(m_usage.size());
   for(unsigned usageIndex = 0; usageIndex < usageJsonList.GetLength(); ++usageIndex)
   {
     usageJsonList[usageIndex].AsObject(m_usage[usageIndex].Jsonize());
   }
   payload.WithArray("usage", std::move(usageJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchCreateWorkloadEstimateUsageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBCMPricingCalculator.BatchCreateWorkloadEstimateUsage"));
  return headers;

}




