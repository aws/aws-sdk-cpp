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
    m_componentTypeIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_propertyUpdatesHasBeenSet(false),
    m_updateType(ComponentUpdateType::NOT_SET),
    m_updateTypeHasBeenSet(false)
{
}

ComponentUpdateRequest::ComponentUpdateRequest(JsonView jsonValue) : 
    m_componentTypeIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_propertyUpdatesHasBeenSet(false),
    m_updateType(ComponentUpdateType::NOT_SET),
    m_updateTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentUpdateRequest& ComponentUpdateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentTypeId"))
  {
    m_componentTypeId = jsonValue.GetString("componentTypeId");

    m_componentTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
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

  if(jsonValue.ValueExists("updateType"))
  {
    m_updateType = ComponentUpdateTypeMapper::GetComponentUpdateTypeForName(jsonValue.GetString("updateType"));

    m_updateTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentUpdateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_componentTypeIdHasBeenSet)
  {
   payload.WithString("componentTypeId", m_componentTypeId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

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

  if(m_updateTypeHasBeenSet)
  {
   payload.WithString("updateType", ComponentUpdateTypeMapper::GetNameForComponentUpdateType(m_updateType));
  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
