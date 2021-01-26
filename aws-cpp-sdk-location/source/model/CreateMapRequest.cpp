/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CreateMapRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMapRequest::CreateMapRequest() : 
    m_configurationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_mapNameHasBeenSet(false),
    m_pricingPlan(PricingPlan::NOT_SET),
    m_pricingPlanHasBeenSet(false)
{
}

Aws::String CreateMapRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("Configuration", m_configuration.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_mapNameHasBeenSet)
  {
   payload.WithString("MapName", m_mapName);

  }

  if(m_pricingPlanHasBeenSet)
  {
   payload.WithString("PricingPlan", PricingPlanMapper::GetNameForPricingPlan(m_pricingPlan));
  }

  return payload.View().WriteReadable();
}




