/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ValueMappings.h>
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

ValueMappings::ValueMappings() : 
    m_valuesHasBeenSet(false),
    m_bindingPropertiesHasBeenSet(false)
{
}

ValueMappings::ValueMappings(JsonView jsonValue) : 
    m_valuesHasBeenSet(false),
    m_bindingPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

ValueMappings& ValueMappings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsObject());
    }
    m_valuesHasBeenSet = true;
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

  return *this;
}

JsonValue ValueMappings::Jsonize() const
{
  JsonValue payload;

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsObject(m_values[valuesIndex].Jsonize());
   }
   payload.WithArray("values", std::move(valuesJsonList));

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

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
