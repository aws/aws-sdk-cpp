/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchDeleteBillScenarioUsageModificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMPricingCalculator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDeleteBillScenarioUsageModificationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_billScenarioIdHasBeenSet)
  {
   payload.WithString("billScenarioId", m_billScenarioId);

  }

  if(m_idsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idsJsonList(m_ids.size());
   for(unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex)
   {
     idsJsonList[idsIndex].AsString(m_ids[idsIndex]);
   }
   payload.WithArray("ids", std::move(idsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDeleteBillScenarioUsageModificationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBCMPricingCalculator.BatchDeleteBillScenarioUsageModification"));
  return headers;

}




