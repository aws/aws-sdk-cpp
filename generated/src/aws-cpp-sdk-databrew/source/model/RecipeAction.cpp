/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/RecipeAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

RecipeAction::RecipeAction() : 
    m_operationHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

RecipeAction::RecipeAction(JsonView jsonValue) : 
    m_operationHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

RecipeAction& RecipeAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Operation"))
  {
    m_operation = jsonValue.GetString("Operation");

    m_operationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue RecipeAction::Jsonize() const
{
  JsonValue payload;

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", m_operation);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
