/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> eventsJsonList = jsonValue.GetArray("events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(eventsJsonList[eventsIndex].AsObject());
    }
    m_eventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transitionEvents"))
  {
    Array<JsonView> transitionEventsJsonList = jsonValue.GetArray("transitionEvents");
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
   Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsObject(m_events[eventsIndex].Jsonize());
   }
   payload.WithArray("events", std::move(eventsJsonList));

  }

  if(m_transitionEventsHasBeenSet)
  {
   Array<JsonValue> transitionEventsJsonList(m_transitionEvents.size());
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
