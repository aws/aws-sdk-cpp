/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FilterValue.h>
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

FilterValue::FilterValue() : 
    m_type(FilterValueType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

FilterValue::FilterValue(JsonView jsonValue) : 
    m_type(FilterValueType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

FilterValue& FilterValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = FilterValueTypeMapper::GetFilterValueTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    Aws::Utils::Array<JsonView> valueJsonList = jsonValue.GetArray("Value");
    for(unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex)
    {
      m_value.push_back(valueJsonList[valueIndex].AsString());
    }
    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterValue::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", FilterValueTypeMapper::GetNameForFilterValueType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valueJsonList(m_value.size());
   for(unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex)
   {
     valueJsonList[valueIndex].AsString(m_value[valueIndex]);
   }
   payload.WithArray("Value", std::move(valueJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
