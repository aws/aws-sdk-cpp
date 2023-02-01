/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/OnInputLifecycle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

OnInputLifecycle::OnInputLifecycle() : 
    m_eventsHasBeenSet(false),
    m_transitionEventsHasBeenSet(false)
{
}

OnInputLifecycle::OnInputLifecycle(JsonView jsonValue) : 
    m_eventsHasBeenSet(false),
    m_transitionEventsHasBeenSet(false)
{
  *this = jsonValue;
}

OnInputLifecycle& OnInputLifecycle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("events"))
  {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(eventsJsonList[eventsIndex].AsObject());
    }
    m_eventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transitionEvents"))
  {
    Aws::Utils::Array<JsonView> transitionEventsJsonList = jsonValue.GetArray("transitionEvents");
    for(unsigned transitionEventsIndex = 0; transitionEventsIndex < transitionEventsJsonList.GetLength(); ++transitionEventsIndex)
    {
      m_transitionEvents.push_back(transitionEventsJsonList[transitionEventsIndex].AsObject());
    }
    m_transitionEventsHasBeenSet = true;
  }

  return *this;
}

JsonValue OnInputLifecycle::Jsonize() const
{
  JsonValue payload;

  if(m_eventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsObject(m_events[eventsIndex].Jsonize());
   }
   payload.WithArray("events", std::move(eventsJsonList));

  }

  if(m_transitionEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> transitionEventsJsonList(m_transitionEvents.size());
   for(unsigned transitionEventsIndex = 0; transitionEventsIndex < transitionEventsJsonList.GetLength(); ++transitionEventsIndex)
   {
     transitionEventsJsonList[transitionEventsIndex].AsObject(m_transitionEvents[transitionEventsIndex].Jsonize());
   }
   payload.WithArray("transitionEvents", std::move(transitionEventsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
