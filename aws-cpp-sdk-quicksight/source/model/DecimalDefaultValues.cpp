/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DecimalDefaultValues.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DecimalDefaultValues::DecimalDefaultValues() : 
    m_dynamicValueHasBeenSet(false),
    m_staticValuesHasBeenSet(false)
{
}

DecimalDefaultValues::DecimalDefaultValues(JsonView jsonValue) : 
    m_dynamicValueHasBeenSet(false),
    m_staticValuesHasBeenSet(false)
{
  *this = jsonValue;
}

DecimalDefaultValues& DecimalDefaultValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DynamicValue"))
  {
    m_dynamicValue = jsonValue.GetObject("DynamicValue");

    m_dynamicValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StaticValues"))
  {
    Aws::Utils::Array<JsonView> staticValuesJsonList = jsonValue.GetArray("StaticValues");
    for(unsigned staticValuesIndex = 0; staticValuesIndex < staticValuesJsonList.GetLength(); ++staticValuesIndex)
    {
      m_staticValues.push_back(staticValuesJsonList[staticValuesIndex].AsDouble());
    }
    m_staticValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue DecimalDefaultValues::Jsonize() const
{
  JsonValue payload;

  if(m_dynamicValueHasBeenSet)
  {
   payload.WithObject("DynamicValue", m_dynamicValue.Jsonize());

  }

  if(m_staticValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> staticValuesJsonList(m_staticValues.size());
   for(unsigned staticValuesIndex = 0; staticValuesIndex < staticValuesJsonList.GetLength(); ++staticValuesIndex)
   {
     staticValuesJsonList[staticValuesIndex].AsDouble(m_staticValues[staticValuesIndex]);
   }
   payload.WithArray("StaticValues", std::move(staticValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
