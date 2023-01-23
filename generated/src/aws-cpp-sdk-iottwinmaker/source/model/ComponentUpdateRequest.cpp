/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ComponentUpdateRequest.h>
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

ComponentUpdateRequest::ComponentUpdateRequest() : 
    m_updateType(ComponentUpdateType::NOT_SET),
    m_updateTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_componentTypeIdHasBeenSet(false),
    m_propertyUpdatesHasBeenSet(false),
    m_propertyGroupUpdatesHasBeenSet(false)
{
}

ComponentUpdateRequest::ComponentUpdateRequest(JsonView jsonValue) : 
    m_updateType(ComponentUpdateType::NOT_SET),
    m_updateTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_componentTypeIdHasBeenSet(false),
    m_propertyUpdatesHasBeenSet(false),
    m_propertyGroupUpdatesHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentUpdateRequest& ComponentUpdateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("updateType"))
  {
    m_updateType = ComponentUpdateTypeMapper::GetComponentUpdateTypeForName(jsonValue.GetString("updateType"));

    m_updateTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("propertyUpdates"))
  {
    Aws::Map<Aws::String, JsonView> propertyUpdatesJsonMap = jsonValue.GetObject("propertyUpdates").GetAllObjects();
    for(auto& propertyUpdatesItem : propertyUpdatesJsonMap)
    {
      m_propertyUpdates[propertyUpdatesItem.first] = propertyUpdatesItem.second.AsObject();
    }
    m_propertyUpdatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("propertyGroupUpdates"))
  {
    Aws::Map<Aws::String, JsonView> propertyGroupUpdatesJsonMap = jsonValue.GetObject("propertyGroupUpdates").GetAllObjects();
    for(auto& propertyGroupUpdatesItem : propertyGroupUpdatesJsonMap)
    {
      m_propertyGroupUpdates[propertyGroupUpdatesItem.first] = propertyGroupUpdatesItem.second.AsObject();
    }
    m_propertyGroupUpdatesHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentUpdateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_updateTypeHasBeenSet)
  {
   payload.WithString("updateType", ComponentUpdateTypeMapper::GetNameForComponentUpdateType(m_updateType));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_componentTypeIdHasBeenSet)
  {
   payload.WithString("componentTypeId", m_componentTypeId);

  }

  if(m_propertyUpdatesHasBeenSet)
  {
   JsonValue propertyUpdatesJsonMap;
   for(auto& propertyUpdatesItem : m_propertyUpdates)
   {
     propertyUpdatesJsonMap.WithObject(propertyUpdatesItem.first, propertyUpdatesItem.second.Jsonize());
   }
   payload.WithObject("propertyUpdates", std::move(propertyUpdatesJsonMap));

  }

  if(m_propertyGroupUpdatesHasBeenSet)
  {
   JsonValue propertyGroupUpdatesJsonMap;
   for(auto& propertyGroupUpdatesItem : m_propertyGroupUpdates)
   {
     propertyGroupUpdatesJsonMap.WithObject(propertyGroupUpdatesItem.first, propertyGroupUpdatesItem.second.Jsonize());
   }
   payload.WithObject("propertyGroupUpdates", std::move(propertyGroupUpdatesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
