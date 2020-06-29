/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CreateQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateQueueRequest::CreateQueueRequest() : 
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pricingPlan(PricingPlan::NOT_SET),
    m_pricingPlanHasBeenSet(false),
    m_reservationPlanSettingsHasBeenSet(false),
    m_status(QueueStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateQueueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pricingPlanHasBeenSet)
  {
   payload.WithString("pricingPlan", PricingPlanMapper::GetNameForPricingPlan(m_pricingPlan));
  }

  if(m_reservationPlanSettingsHasBeenSet)
  {
   payload.WithObject("reservationPlanSettings", m_reservationPlanSettings.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", QueueStatusMapper::GetNameForQueueStatus(m_status));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




