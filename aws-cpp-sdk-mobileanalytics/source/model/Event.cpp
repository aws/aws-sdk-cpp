/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/mobileanalytics/model/Event.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MobileAnalytics
{
namespace Model
{

Event::Event() : 
    m_eventTypeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_sessionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
}

Event::Event(const JsonValue& jsonValue) : 
    m_eventTypeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_sessionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
  *this = jsonValue;
}

Event& Event::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = jsonValue.GetString("eventType");

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetString("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("session"))
  {
    m_session = jsonValue.GetObject("session");

    m_sessionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonValue> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metrics"))
  {
    Aws::Map<Aws::String, JsonValue> metricsJsonMap = jsonValue.GetObject("metrics").GetAllObjects();
    for(auto& metricsItem : metricsJsonMap)
    {
      m_metrics[metricsItem.first] = metricsItem.second.AsDouble();
    }
    m_metricsHasBeenSet = true;
  }

  return *this;
}

JsonValue Event::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithString("timestamp", m_timestamp);

  }

  if(m_sessionHasBeenSet)
  {
   payload.WithObject("session", m_session.Jsonize());

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_metricsHasBeenSet)
  {
   JsonValue metricsJsonMap;
   for(auto& metricsItem : m_metrics)
   {
     metricsJsonMap.WithDouble(metricsItem.first, metricsItem.second);
   }
   payload.WithObject("metrics", std::move(metricsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace MobileAnalytics
} // namespace Aws