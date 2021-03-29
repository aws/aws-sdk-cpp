/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CreateTrackerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTrackerRequest::CreateTrackerRequest() : 
    m_descriptionHasBeenSet(false),
    m_pricingPlan(PricingPlan::NOT_SET),
    m_pricingPlanHasBeenSet(false),
    m_pricingPlanDataSourceHasBeenSet(false),
    m_trackerNameHasBeenSet(false)
{
}

Aws::String CreateTrackerRequest::SerializePayload() const
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

  if(m_pricingPlanDataSourceHasBeenSet)
  {
   payload.WithString("PricingPlanDataSource", m_pricingPlanDataSource);

  }

  if(m_trackerNameHasBeenSet)
  {
   payload.WithString("TrackerName", m_trackerName);

  }

  return payload.View().WriteReadable();
}




