/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/Event.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

Event::Event() : 
    m_eventIdHasBeenSet(false),
    m_eventTypeNameHasBeenSet(false),
    m_eventTimestampHasBeenSet(false),
    m_eventVariablesHasBeenSet(false),
    m_currentLabelHasBeenSet(false),
    m_labelTimestampHasBeenSet(false),
    m_entitiesHasBeenSet(false)
{
}

Event::Event(JsonView jsonValue) : 
    m_eventIdHasBeenSet(false),
    m_eventTypeNameHasBeenSet(false),
    m_eventTimestampHasBeenSet(false),
    m_eventVariablesHasBeenSet(false),
    m_currentLabelHasBeenSet(false),
    m_labelTimestampHasBeenSet(false),
    m_entitiesHasBeenSet(false)
{
  *this = jsonValue;
}

Event& Event::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTypeName"))
  {
    m_eventTypeName = jsonValue.GetString("eventTypeName");

    m_eventTypeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTimestamp"))
  {
    m_eventTimestamp = jsonValue.GetString("eventTimestamp");

    m_eventTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventVariables"))
  {
    Aws::Map<Aws::String, JsonView> eventVariablesJsonMap = jsonValue.GetObject("eventVariables").GetAllObjects();
    for(auto& eventVariablesItem : eventVariablesJsonMap)
    {
      m_eventVariables[eventVariablesItem.first] = eventVariablesItem.second.AsString();
    }
    m_eventVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentLabel"))
  {
    m_currentLabel = jsonValue.GetString("currentLabel");

    m_currentLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("labelTimestamp"))
  {
    m_labelTimestamp = jsonValue.GetString("labelTimestamp");

    m_labelTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entities"))
  {
    Aws::Utils::Array<JsonView> entitiesJsonList = jsonValue.GetArray("entities");
    for(unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex)
    {
      m_entities.push_back(entitiesJsonList[entitiesIndex].AsObject());
    }
    m_entitiesHasBeenSet = true;
  }

  return *this;
}

JsonValue Event::Jsonize() const
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

  if(m_currentLabelHasBeenSet)
  {
   payload.WithString("currentLabel", m_currentLabel);

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

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
