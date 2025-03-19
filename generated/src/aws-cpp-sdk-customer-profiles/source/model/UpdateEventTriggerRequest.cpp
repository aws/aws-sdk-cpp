/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/UpdateEventTriggerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateEventTriggerRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




