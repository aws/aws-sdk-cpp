/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ComponentVariant.h>
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

ComponentVariant::ComponentVariant() : 
    m_variantValuesHasBeenSet(false),
    m_overridesHasBeenSet(false)
{
}

ComponentVariant::ComponentVariant(JsonView jsonValue) : 
    m_variantValuesHasBeenSet(false),
    m_overridesHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentVariant& ComponentVariant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("variantValues"))
  {
    Aws::Map<Aws::String, JsonView> variantValuesJsonMap = jsonValue.GetObject("variantValues").GetAllObjects();
    for(auto& variantValuesItem : variantValuesJsonMap)
    {
      m_variantValues[variantValuesItem.first] = variantValuesItem.second.AsString();
    }
    m_variantValuesHasBeenSet = true;
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

  return *this;
}

JsonValue ComponentVariant::Jsonize() const
{
  JsonValue payload;

  if(m_variantValuesHasBeenSet)
  {
   JsonValue variantValuesJsonMap;
   for(auto& variantValuesItem : m_variantValues)
   {
     variantValuesJsonMap.WithString(variantValuesItem.first, variantValuesItem.second);
   }
   payload.WithObject("variantValues", std::move(variantValuesJsonMap));

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

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
