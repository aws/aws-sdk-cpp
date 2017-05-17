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

#include <aws/health/model/EventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace Model
{

EventDetails::EventDetails() : 
    m_eventHasBeenSet(false),
    m_eventDescriptionHasBeenSet(false),
    m_eventMetadataHasBeenSet(false)
{
}

EventDetails::EventDetails(const JsonValue& jsonValue) : 
    m_eventHasBeenSet(false),
    m_eventDescriptionHasBeenSet(false),
    m_eventMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

EventDetails& EventDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("event"))
  {
    m_event = jsonValue.GetObject("event");

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventDescription"))
  {
    m_eventDescription = jsonValue.GetString("eventDescription");

    m_eventDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventMetadata"))
  {
    Aws::Map<Aws::String, JsonValue> eventMetadataJsonMap = jsonValue.GetObject("eventMetadata").GetAllObjects();
    for(auto& eventMetadataItem : eventMetadataJsonMap)
    {
      m_eventMetadata[eventMetadataItem.first] = eventMetadataItem.second.AsString();
    }
    m_eventMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue EventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_eventHasBeenSet)
  {
   payload.WithObject("event", m_event.Jsonize());

  }

  if(m_eventDescriptionHasBeenSet)
  {
   payload.WithString("eventDescription", m_eventDescription);

  }

  if(m_eventMetadataHasBeenSet)
  {
   JsonValue eventMetadataJsonMap;
   for(auto& eventMetadataItem : m_eventMetadata)
   {
     eventMetadataJsonMap.WithString(eventMetadataItem.first, eventMetadataItem.second);
   }
   payload.WithObject("eventMetadata", std::move(eventMetadataJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws