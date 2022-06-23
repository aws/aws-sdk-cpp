/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/NormalizedValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

NormalizedValue::NormalizedValue() : 
    m_valueHasBeenSet(false),
    m_valueType(ValueType::NOT_SET),
    m_valueTypeHasBeenSet(false)
{
}

NormalizedValue::NormalizedValue(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_valueType(ValueType::NOT_SET),
    m_valueTypeHasBeenSet(false)
{
  *this = jsonValue;
}

NormalizedValue& NormalizedValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueType"))
  {
    m_valueType = ValueTypeMapper::GetValueTypeForName(jsonValue.GetString("ValueType"));

    m_valueTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue NormalizedValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_valueTypeHasBeenSet)
  {
   payload.WithString("ValueType", ValueTypeMapper::GetNameForValueType(m_valueType));
  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
