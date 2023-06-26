﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/UpdateComponentData.h>
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

UpdateComponentData::UpdateComponentData() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_componentTypeHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_childrenHasBeenSet(false),
    m_variantsHasBeenSet(false),
    m_overridesHasBeenSet(false),
    m_bindingPropertiesHasBeenSet(false),
    m_collectionPropertiesHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_schemaVersionHasBeenSet(false)
{
}

UpdateComponentData::UpdateComponentData(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_componentTypeHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_childrenHasBeenSet(false),
    m_variantsHasBeenSet(false),
    m_overridesHasBeenSet(false),
    m_bindingPropertiesHasBeenSet(false),
    m_collectionPropertiesHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_schemaVersionHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateComponentData& UpdateComponentData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceId"))
  {
    m_sourceId = jsonValue.GetString("sourceId");

    m_sourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentType"))
  {
    m_componentType = jsonValue.GetString("componentType");

    m_componentTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("children"))
  {
    Aws::Utils::Array<JsonView> childrenJsonList = jsonValue.GetArray("children");
    for(unsigned childrenIndex = 0; childrenIndex < childrenJsonList.GetLength(); ++childrenIndex)
    {
      m_children.push_back(childrenJsonList[childrenIndex].AsObject());
    }
    m_childrenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variants"))
  {
    Aws::Utils::Array<JsonView> variantsJsonList = jsonValue.GetArray("variants");
    for(unsigned variantsIndex = 0; variantsIndex < variantsJsonList.GetLength(); ++variantsIndex)
    {
      m_variants.push_back(variantsJsonList[variantsIndex].AsObject());
    }
    m_variantsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("overrides"))
  {
    Aws::Map<Aws::String, JsonView> overridesJsonMap = jsonValue.GetObject("overrides").GetAllObjects();
    for(auto& overridesItem : overridesJsonMap)
    {
      Aws::Map<Aws::String, JsonView> componentOverridesValueJsonMap = overridesItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::String> componentOverridesValueMap;
      for(auto& componentOverridesValueItem : componentOverridesValueJsonMap)
      {
        componentOverridesValueMap[componentOverridesValueItem.first] = componentOverridesValueItem.second.AsString();
      }
      m_overrides[overridesItem.first] = std::move(componentOverridesValueMap);
    }
    m_overridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bindingProperties"))
  {
    Aws::Map<Aws::String, JsonView> bindingPropertiesJsonMap = jsonValue.GetObject("bindingProperties").GetAllObjects();
    for(auto& bindingPropertiesItem : bindingPropertiesJsonMap)
    {
      m_bindingProperties[bindingPropertiesItem.first] = bindingPropertiesItem.second.AsObject();
    }
    m_bindingPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("collectionProperties"))
  {
    Aws::Map<Aws::String, JsonView> collectionPropertiesJsonMap = jsonValue.GetObject("collectionProperties").GetAllObjects();
    for(auto& collectionPropertiesItem : collectionPropertiesJsonMap)
    {
      m_collectionProperties[collectionPropertiesItem.first] = collectionPropertiesItem.second.AsObject();
    }
    m_collectionPropertiesHasBeenSet = true;
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

  if(jsonValue.ValueExists("schemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("schemaVersion");

    m_schemaVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateComponentData::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_sourceIdHasBeenSet)
  {
   payload.WithString("sourceId", m_sourceId);

  }

  if(m_componentTypeHasBeenSet)
  {
   payload.WithString("componentType", m_componentType);

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

  if(m_childrenHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> childrenJsonList(m_children.size());
   for(unsigned childrenIndex = 0; childrenIndex < childrenJsonList.GetLength(); ++childrenIndex)
   {
     childrenJsonList[childrenIndex].AsObject(m_children[childrenIndex].Jsonize());
   }
   payload.WithArray("children", std::move(childrenJsonList));

  }

  if(m_variantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> variantsJsonList(m_variants.size());
   for(unsigned variantsIndex = 0; variantsIndex < variantsJsonList.GetLength(); ++variantsIndex)
   {
     variantsJsonList[variantsIndex].AsObject(m_variants[variantsIndex].Jsonize());
   }
   payload.WithArray("variants", std::move(variantsJsonList));

  }

  if(m_overridesHasBeenSet)
  {
   JsonValue overridesJsonMap;
   for(auto& overridesItem : m_overrides)
   {
     JsonValue componentOverridesValueJsonMap;
     for(auto& componentOverridesValueItem : overridesItem.second)
     {
       componentOverridesValueJsonMap.WithString(componentOverridesValueItem.first, componentOverridesValueItem.second);
     }
     overridesJsonMap.WithObject(overridesItem.first, std::move(componentOverridesValueJsonMap));
   }
   payload.WithObject("overrides", std::move(overridesJsonMap));

  }

  if(m_bindingPropertiesHasBeenSet)
  {
   JsonValue bindingPropertiesJsonMap;
   for(auto& bindingPropertiesItem : m_bindingProperties)
   {
     bindingPropertiesJsonMap.WithObject(bindingPropertiesItem.first, bindingPropertiesItem.second.Jsonize());
   }
   payload.WithObject("bindingProperties", std::move(bindingPropertiesJsonMap));

  }

  if(m_collectionPropertiesHasBeenSet)
  {
   JsonValue collectionPropertiesJsonMap;
   for(auto& collectionPropertiesItem : m_collectionProperties)
   {
     collectionPropertiesJsonMap.WithObject(collectionPropertiesItem.first, collectionPropertiesItem.second.Jsonize());
   }
   payload.WithObject("collectionProperties", std::move(collectionPropertiesJsonMap));

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

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("schemaVersion", m_schemaVersion);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
