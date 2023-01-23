/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ComponentChild.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

ComponentChild::ComponentChild() : 
    m_childrenHasBeenSet(false),
    m_componentTypeHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_sourceIdHasBeenSet(false)
{
}

ComponentChild::ComponentChild(JsonView jsonValue) : 
    m_childrenHasBeenSet(false),
    m_componentTypeHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_sourceIdHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentChild& ComponentChild::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("children"))
  {
    Aws::Utils::Array<JsonView> childrenJsonList = jsonValue.GetArray("children");
    for(unsigned childrenIndex = 0; childrenIndex < childrenJsonList.GetLength(); ++childrenIndex)
    {
      m_children.push_back(childrenJsonList[childrenIndex].AsObject());
    }
    m_childrenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentType"))
  {
    m_componentType = jsonValue.GetString("componentType");

    m_componentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("events"))
  {
    Aws::Map<Aws::String, JsonView> eventsJsonMap = jsonValue.GetObject("events").GetAllObjects();
    for(auto& eventsItem : eventsJsonMap)
    {
      m_events[eventsItem.first] = eventsItem.second.AsObject();
    }
    m_eventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("properties"))
  {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("properties").GetAllObjects();
    for(auto& propertiesItem : propertiesJsonMap)
    {
      m_properties[propertiesItem.first] = propertiesItem.second.AsObject();
    }
    m_propertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceId"))
  {
    m_sourceId = jsonValue.GetString("sourceId");

    m_sourceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentChild::Jsonize() const
{
  JsonValue payload;

  if(m_childrenHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> childrenJsonList(m_children.size());
   for(unsigned childrenIndex = 0; childrenIndex < childrenJsonList.GetLength(); ++childrenIndex)
   {
     childrenJsonList[childrenIndex].AsObject(m_children[childrenIndex].Jsonize());
   }
   payload.WithArray("children", std::move(childrenJsonList));

  }

  if(m_componentTypeHasBeenSet)
  {
   payload.WithString("componentType", m_componentType);

  }

  if(m_eventsHasBeenSet)
  {
   JsonValue eventsJsonMap;
   for(auto& eventsItem : m_events)
   {
     eventsJsonMap.WithObject(eventsItem.first, eventsItem.second.Jsonize());
   }
   payload.WithObject("events", std::move(eventsJsonMap));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_propertiesHasBeenSet)
  {
   JsonValue propertiesJsonMap;
   for(auto& propertiesItem : m_properties)
   {
     propertiesJsonMap.WithObject(propertiesItem.first, propertiesItem.second.Jsonize());
   }
   payload.WithObject("properties", std::move(propertiesJsonMap));

  }

  if(m_sourceIdHasBeenSet)
  {
   payload.WithString("sourceId", m_sourceId);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
