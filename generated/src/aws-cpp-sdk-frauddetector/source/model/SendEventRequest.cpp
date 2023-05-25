/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/SendEventRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendEventRequest::SendEventRequest() : 
    m_eventIdHasBeenSet(false),
    m_eventTypeNameHasBeenSet(false),
    m_eventTimestampHasBeenSet(false),
    m_eventVariablesHasBeenSet(false),
    m_assignedLabelHasBeenSet(false),
    m_labelTimestampHasBeenSet(false),
    m_entitiesHasBeenSet(false)
{
}

Aws::String SendEventRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_eventTypeNameHasBeenSet)
  {
   payload.WithString("eventTypeName", m_eventTypeName);

  }

  if(m_eventTimestampHasBeenSet)
  {
   payload.WithString("eventTimestamp", m_eventTimestamp);

  }

  if(m_eventVariablesHasBeenSet)
  {
   JsonValue eventVariablesJsonMap;
   for(auto& eventVariablesItem : m_eventVariables)
   {
     eventVariablesJsonMap.WithString(eventVariablesItem.first, eventVariablesItem.second);
   }
   payload.WithObject("eventVariables", std::move(eventVariablesJsonMap));

  }

  if(m_assignedLabelHasBeenSet)
  {
   payload.WithString("assignedLabel", m_assignedLabel);

  }

  if(m_labelTimestampHasBeenSet)
  {
   payload.WithString("labelTimestamp", m_labelTimestamp);

  }

  if(m_entitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entitiesJsonList(m_entities.size());
   for(unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex)
   {
     entitiesJsonList[entitiesIndex].AsObject(m_entities[entitiesIndex].Jsonize());
   }
   payload.WithArray("entities", std::move(entitiesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendEventRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.SendEvent"));
  return headers;

}




