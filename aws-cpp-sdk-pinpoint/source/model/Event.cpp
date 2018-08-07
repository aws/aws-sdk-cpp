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

#include <aws/pinpoint/model/Event.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

Event::Event() : 
    m_attributesHasBeenSet(false),
    m_clientSdkVersionHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_sessionHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

Event::Event(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_clientSdkVersionHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_sessionHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

Event& Event::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientSdkVersion"))
  {
    m_clientSdkVersion = jsonValue.GetString("ClientSdkVersion");

    m_clientSdkVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventType"))
  {
    m_eventType = jsonValue.GetString("EventType");

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metrics"))
  {
    Aws::Map<Aws::String, JsonView> metricsJsonMap = jsonValue.GetObject("Metrics").GetAllObjects();
    for(auto& metricsItem : metricsJsonMap)
    {
      m_metrics[metricsItem.first] = metricsItem.second.AsDouble();
    }
    m_metricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Session"))
  {
    m_session = jsonValue.GetObject("Session");

    m_sessionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetString("Timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue Event::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_clientSdkVersionHasBeenSet)
  {
   payload.WithString("ClientSdkVersion", m_clientSdkVersion);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("EventType", m_eventType);

  }

  if(m_metricsHasBeenSet)
  {
   JsonValue metricsJsonMap;
   for(auto& metricsItem : m_metrics)
   {
     metricsJsonMap.WithDouble(metricsItem.first, metricsItem.second);
   }
   payload.WithObject("Metrics", std::move(metricsJsonMap));

  }

  if(m_sessionHasBeenSet)
  {
   payload.WithObject("Session", m_session.Jsonize());

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithString("Timestamp", m_timestamp);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
