/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/UpdateBillScenarioRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMPricingCalculator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateBillScenarioRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_expiresAtHasBeenSet)
  {
   payload.WithDouble("expiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateBillScenarioRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBCMPricingCalculator.UpdateBillScenario"));
  return headers;

}




