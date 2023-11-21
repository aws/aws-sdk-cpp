/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ComponentResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

ComponentResponse::ComponentResponse() : 
    m_componentNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_componentTypeIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_definedInHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_propertyGroupsHasBeenSet(false),
    m_syncSourceHasBeenSet(false),
    m_areAllPropertiesReturned(false),
    m_areAllPropertiesReturnedHasBeenSet(false),
    m_compositeComponentsHasBeenSet(false),
    m_areAllCompositeComponentsReturned(false),
    m_areAllCompositeComponentsReturnedHasBeenSet(false)
{
}

ComponentResponse::ComponentResponse(JsonView jsonValue) : 
    m_componentNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_componentTypeIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_definedInHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_propertyGroupsHasBeenSet(false),
    m_syncSourceHasBeenSet(false),
    m_areAllPropertiesReturned(false),
    m_areAllPropertiesReturnedHasBeenSet(false),
    m_compositeComponentsHasBeenSet(false),
    m_areAllCompositeComponentsReturned(false),
    m_areAllCompositeComponentsReturnedHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentResponse& ComponentResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentName"))
  {
    m_componentName = jsonValue.GetString("componentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentTypeId"))
  {
    m_componentTypeId = jsonValue.GetString("componentTypeId");

    m_componentTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("definedIn"))
  {
    m_definedIn = jsonValue.GetString("definedIn");

    m_definedInHasBeenSet = true;
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

  if(jsonValue.ValueExists("propertyGroups"))
  {
    Aws::Map<Aws::String, JsonView> propertyGroupsJsonMap = jsonValue.GetObject("propertyGroups").GetAllObjects();
    for(auto& propertyGroupsItem : propertyGroupsJsonMap)
    {
      m_propertyGroups[propertyGroupsItem.first] = propertyGroupsItem.second.AsObject();
    }
    m_propertyGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("syncSource"))
  {
    m_syncSource = jsonValue.GetString("syncSource");

    m_syncSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("areAllPropertiesReturned"))
  {
    m_areAllPropertiesReturned = jsonValue.GetBool("areAllPropertiesReturned");

    m_areAllPropertiesReturnedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("compositeComponents"))
  {
    Aws::Map<Aws::String, JsonView> compositeComponentsJsonMap = jsonValue.GetObject("compositeComponents").GetAllObjects();
    for(auto& compositeComponentsItem : compositeComponentsJsonMap)
    {
      m_compositeComponents[compositeComponentsItem.first] = compositeComponentsItem.second.AsObject();
    }
    m_compositeComponentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("areAllCompositeComponentsReturned"))
  {
    m_areAllCompositeComponentsReturned = jsonValue.GetBool("areAllCompositeComponentsReturned");

    m_areAllCompositeComponentsReturnedHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentResponse::Jsonize() const
{
  JsonValue payload;

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("componentName", m_componentName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_componentTypeIdHasBeenSet)
  {
   payload.WithString("componentTypeId", m_componentTypeId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  if(m_definedInHasBeenSet)
  {
   payload.WithString("definedIn", m_definedIn);

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

  if(m_propertyGroupsHasBeenSet)
  {
   JsonValue propertyGroupsJsonMap;
   for(auto& propertyGroupsItem : m_propertyGroups)
   {
     propertyGroupsJsonMap.WithObject(propertyGroupsItem.first, propertyGroupsItem.second.Jsonize());
   }
   payload.WithObject("propertyGroups", std::move(propertyGroupsJsonMap));

  }

  if(m_syncSourceHasBeenSet)
  {
   payload.WithString("syncSource", m_syncSource);

  }

  if(m_areAllPropertiesReturnedHasBeenSet)
  {
   payload.WithBool("areAllPropertiesReturned", m_areAllPropertiesReturned);

  }

  if(m_compositeComponentsHasBeenSet)
  {
   JsonValue compositeComponentsJsonMap;
   for(auto& compositeComponentsItem : m_compositeComponents)
   {
     compositeComponentsJsonMap.WithObject(compositeComponentsItem.first, compositeComponentsItem.second.Jsonize());
   }
   payload.WithObject("compositeComponents", std::move(compositeComponentsJsonMap));

  }

  if(m_areAllCompositeComponentsReturnedHasBeenSet)
  {
   payload.WithBool("areAllCompositeComponentsReturned", m_areAllCompositeComponentsReturned);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
