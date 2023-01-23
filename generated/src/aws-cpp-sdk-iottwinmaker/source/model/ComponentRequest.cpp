/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ComponentRequest.h>
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

ComponentRequest::ComponentRequest() : 
    m_descriptionHasBeenSet(false),
    m_componentTypeIdHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_propertyGroupsHasBeenSet(false)
{
}

ComponentRequest::ComponentRequest(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_componentTypeIdHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_propertyGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentRequest& ComponentRequest::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue ComponentRequest::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_componentTypeIdHasBeenSet)
  {
   payload.WithString("componentTypeId", m_componentTypeId);

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

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
