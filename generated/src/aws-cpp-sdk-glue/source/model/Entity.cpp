/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Entity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Entity::Entity(JsonView jsonValue)
{
  *this = jsonValue;
}

Entity& Entity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EntityName"))
  {
    m_entityName = jsonValue.GetString("EntityName");
    m_entityNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");
    m_labelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsParentEntity"))
  {
    m_isParentEntity = jsonValue.GetBool("IsParentEntity");
    m_isParentEntityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Category"))
  {
    m_category = jsonValue.GetString("Category");
    m_categoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomProperties"))
  {
    Aws::Map<Aws::String, JsonView> customPropertiesJsonMap = jsonValue.GetObject("CustomProperties").GetAllObjects();
    for(auto& customPropertiesItem : customPropertiesJsonMap)
    {
      m_customProperties[customPropertiesItem.first] = customPropertiesItem.second.AsString();
    }
    m_customPropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue Entity::Jsonize() const
{
  JsonValue payload;

  if(m_entityNameHasBeenSet)
  {
   payload.WithString("EntityName", m_entityName);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_isParentEntityHasBeenSet)
  {
   payload.WithBool("IsParentEntity", m_isParentEntity);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", m_category);

  }

  if(m_customPropertiesHasBeenSet)
  {
   JsonValue customPropertiesJsonMap;
   for(auto& customPropertiesItem : m_customProperties)
   {
     customPropertiesJsonMap.WithString(customPropertiesItem.first, customPropertiesItem.second);
   }
   payload.WithObject("CustomProperties", std::move(customPropertiesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
