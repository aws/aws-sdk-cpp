﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/CreateEventTriggerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEventTriggerRequest::CreateEventTriggerRequest() : 
    m_domainNameHasBeenSet(false),
    m_eventTriggerNameHasBeenSet(false),
    m_objectTypeNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventTriggerConditionsHasBeenSet(false),
    m_segmentFilterHasBeenSet(false),
    m_eventTriggerLimitsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateEventTriggerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_objectTypeNameHasBeenSet)
  {
   payload.WithString("ObjectTypeName", m_objectTypeName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_eventTriggerConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventTriggerConditionsJsonList(m_eventTriggerConditions.size());
   for(unsigned eventTriggerConditionsIndex = 0; eventTriggerConditionsIndex < eventTriggerConditionsJsonList.GetLength(); ++eventTriggerConditionsIndex)
   {
     eventTriggerConditionsJsonList[eventTriggerConditionsIndex].AsObject(m_eventTriggerConditions[eventTriggerConditionsIndex].Jsonize());
   }
   payload.WithArray("EventTriggerConditions", std::move(eventTriggerConditionsJsonList));

  }

  if(m_segmentFilterHasBeenSet)
  {
   payload.WithString("SegmentFilter", m_segmentFilter);

  }

  if(m_eventTriggerLimitsHasBeenSet)
  {
   payload.WithObject("EventTriggerLimits", m_eventTriggerLimits.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




