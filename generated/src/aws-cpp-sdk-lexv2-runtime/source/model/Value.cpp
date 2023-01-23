/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/Value.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

Value::Value() : 
    m_originalValueHasBeenSet(false),
    m_interpretedValueHasBeenSet(false),
    m_resolvedValuesHasBeenSet(false)
{
}

Value::Value(JsonView jsonValue) : 
    m_originalValueHasBeenSet(false),
    m_interpretedValueHasBeenSet(false),
    m_resolvedValuesHasBeenSet(false)
{
  *this = jsonValue;
}

Value& Value::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("originalValue"))
  {
    m_originalValue = jsonValue.GetString("originalValue");

    m_originalValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interpretedValue"))
  {
    m_interpretedValue = jsonValue.GetString("interpretedValue");

    m_interpretedValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolvedValues"))
  {
    Aws::Utils::Array<JsonView> resolvedValuesJsonList = jsonValue.GetArray("resolvedValues");
    for(unsigned resolvedValuesIndex = 0; resolvedValuesIndex < resolvedValuesJsonList.GetLength(); ++resolvedValuesIndex)
    {
      m_resolvedValues.push_back(resolvedValuesJsonList[resolvedValuesIndex].AsString());
    }
    m_resolvedValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue Value::Jsonize() const
{
  JsonValue payload;

  if(m_originalValueHasBeenSet)
  {
   payload.WithString("originalValue", m_originalValue);

  }

  if(m_interpretedValueHasBeenSet)
  {
   payload.WithString("interpretedValue", m_interpretedValue);

  }

  if(m_resolvedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resolvedValuesJsonList(m_resolvedValues.size());
   for(unsigned resolvedValuesIndex = 0; resolvedValuesIndex < resolvedValuesJsonList.GetLength(); ++resolvedValuesIndex)
   {
     resolvedValuesJsonList[resolvedValuesIndex].AsString(m_resolvedValues[resolvedValuesIndex]);
   }
   payload.WithArray("resolvedValues", std::move(resolvedValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
