/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioUsageModificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMPricingCalculator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchUpdateBillScenarioUsageModificationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_billScenarioIdHasBeenSet)
  {
   payload.WithString("billScenarioId", m_billScenarioId);

  }

  if(m_usageModificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usageModificationsJsonList(m_usageModifications.size());
   for(unsigned usageModificationsIndex = 0; usageModificationsIndex < usageModificationsJsonList.GetLength(); ++usageModificationsIndex)
   {
     usageModificationsJsonList[usageModificationsIndex].AsObject(m_usageModifications[usageModificationsIndex].Jsonize());
   }
   payload.WithArray("usageModifications", std::move(usageModificationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchUpdateBillScenarioUsageModificationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBCMPricingCalculator.BatchUpdateBillScenarioUsageModification"));
  return headers;

}




