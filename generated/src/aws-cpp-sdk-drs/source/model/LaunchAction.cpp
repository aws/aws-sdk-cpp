/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LaunchAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

LaunchAction::LaunchAction() : 
    m_actionCodeHasBeenSet(false),
    m_actionIdHasBeenSet(false),
    m_actionVersionHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_category(LaunchActionCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_optional(false),
    m_optionalHasBeenSet(false),
    m_order(0),
    m_orderHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_type(LaunchActionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

LaunchAction::LaunchAction(JsonView jsonValue) : 
    m_actionCodeHasBeenSet(false),
    m_actionIdHasBeenSet(false),
    m_actionVersionHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_category(LaunchActionCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_optional(false),
    m_optionalHasBeenSet(false),
    m_order(0),
    m_orderHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_type(LaunchActionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchAction& LaunchAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionCode"))
  {
    m_actionCode = jsonValue.GetString("actionCode");

    m_actionCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionId"))
  {
    m_actionId = jsonValue.GetString("actionId");

    m_actionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionVersion"))
  {
    m_actionVersion = jsonValue.GetString("actionVersion");

    m_actionVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");

    m_activeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("category"))
  {
    m_category = LaunchActionCategoryMapper::GetLaunchActionCategoryForName(jsonValue.GetString("category"));

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("optional"))
  {
    m_optional = jsonValue.GetBool("optional");

    m_optionalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("order"))
  {
    m_order = jsonValue.GetInteger("order");

    m_orderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = LaunchActionTypeMapper::GetLaunchActionTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionCodeHasBeenSet)
  {
   payload.WithString("actionCode", m_actionCode);

  }

  if(m_actionIdHasBeenSet)
  {
   payload.WithString("actionId", m_actionId);

  }

  if(m_actionVersionHasBeenSet)
  {
   payload.WithString("actionVersion", m_actionVersion);

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("active", m_active);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", LaunchActionCategoryMapper::GetNameForLaunchActionCategory(m_category));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_optionalHasBeenSet)
  {
   payload.WithBool("optional", m_optional);

  }

  if(m_orderHasBeenSet)
  {
   payload.WithInteger("order", m_order);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.Jsonize());
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", LaunchActionTypeMapper::GetNameForLaunchActionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
