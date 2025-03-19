/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioCommitmentModificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMPricingCalculator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchUpdateBillScenarioCommitmentModificationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_billScenarioIdHasBeenSet)
  {
   payload.WithString("billScenarioId", m_billScenarioId);

  }

  if(m_commitmentModificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commitmentModificationsJsonList(m_commitmentModifications.size());
   for(unsigned commitmentModificationsIndex = 0; commitmentModificationsIndex < commitmentModificationsJsonList.GetLength(); ++commitmentModificationsIndex)
   {
     commitmentModificationsJsonList[commitmentModificationsIndex].AsObject(m_commitmentModifications[commitmentModificationsIndex].Jsonize());
   }
   payload.WithArray("commitmentModifications", std::move(commitmentModificationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchUpdateBillScenarioCommitmentModificationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBCMPricingCalculator.BatchUpdateBillScenarioCommitmentModification"));
  return headers;

}




