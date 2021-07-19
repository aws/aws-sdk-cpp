/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/UpdateRouteCalculatorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRouteCalculatorRequest::UpdateRouteCalculatorRequest() : 
    m_calculatorNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_pricingPlan(PricingPlan::NOT_SET),
    m_pricingPlanHasBeenSet(false)
{
}

Aws::String UpdateRouteCalculatorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_pricingPlanHasBeenSet)
  {
   payload.WithString("PricingPlan", PricingPlanMapper::GetNameForPricingPlan(m_pricingPlan));
  }

  return payload.View().WriteReadable();
}




