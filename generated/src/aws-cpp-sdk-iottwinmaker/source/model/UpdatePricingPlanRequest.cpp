/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/UpdatePricingPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePricingPlanRequest::UpdatePricingPlanRequest() : 
    m_pricingMode(PricingMode::NOT_SET),
    m_pricingModeHasBeenSet(false),
    m_bundleNamesHasBeenSet(false)
{
}

Aws::String UpdatePricingPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pricingModeHasBeenSet)
  {
   payload.WithString("pricingMode", PricingModeMapper::GetNameForPricingMode(m_pricingMode));
  }

  if(m_bundleNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bundleNamesJsonList(m_bundleNames.size());
   for(unsigned bundleNamesIndex = 0; bundleNamesIndex < bundleNamesJsonList.GetLength(); ++bundleNamesIndex)
   {
     bundleNamesJsonList[bundleNamesIndex].AsString(m_bundleNames[bundleNamesIndex]);
   }
   payload.WithArray("bundleNames", std::move(bundleNamesJsonList));

  }

  return payload.View().WriteReadable();
}




