/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/SystemEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

SystemEvent::SystemEvent() : 
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_stateChangeConfigurationHasBeenSet(false)
{
}

SystemEvent::SystemEvent(JsonView jsonValue) : 
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_stateChangeConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

SystemEvent& SystemEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = EventTypeMapper::GetEventTypeForName(jsonValue.GetString("eventType"));

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateChangeConfiguration"))
  {
    m_stateChangeConfiguration = jsonValue.GetObject("stateChangeConfiguration");

    m_stateChangeConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SystemEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", EventTypeMapper::GetNameForEventType(m_eventType));
  }

  if(m_stateChangeConfigurationHasBeenSet)
  {
   payload.WithObject("stateChangeConfiguration", m_stateChangeConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
