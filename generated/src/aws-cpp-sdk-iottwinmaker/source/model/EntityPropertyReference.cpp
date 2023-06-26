/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/EntityPropertyReference.h>
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

EntityPropertyReference::EntityPropertyReference() : 
    m_componentNameHasBeenSet(false),
    m_externalIdPropertyHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_propertyNameHasBeenSet(false)
{
}

EntityPropertyReference::EntityPropertyReference(JsonView jsonValue) : 
    m_componentNameHasBeenSet(false),
    m_externalIdPropertyHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_propertyNameHasBeenSet(false)
{
  *this = jsonValue;
}

EntityPropertyReference& EntityPropertyReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentName"))
  {
    m_componentName = jsonValue.GetString("componentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalIdProperty"))
  {
    Aws::Map<Aws::String, JsonView> externalIdPropertyJsonMap = jsonValue.GetObject("externalIdProperty").GetAllObjects();
    for(auto& externalIdPropertyItem : externalIdPropertyJsonMap)
    {
      m_externalIdProperty[externalIdPropertyItem.first] = externalIdPropertyItem.second.AsString();
    }
    m_externalIdPropertyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("propertyName"))
  {
    m_propertyName = jsonValue.GetString("propertyName");

    m_propertyNameHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityPropertyReference::Jsonize() const
{
  JsonValue payload;

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("componentName", m_componentName);

  }

  if(m_externalIdPropertyHasBeenSet)
  {
   JsonValue externalIdPropertyJsonMap;
   for(auto& externalIdPropertyItem : m_externalIdProperty)
   {
     externalIdPropertyJsonMap.WithString(externalIdPropertyItem.first, externalIdPropertyItem.second);
   }
   payload.WithObject("externalIdProperty", std::move(externalIdPropertyJsonMap));

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  if(m_propertyNameHasBeenSet)
  {
   payload.WithString("propertyName", m_propertyName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
