/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/VariableValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

VariableValue::VariableValue() : 
    m_rawValueHasBeenSet(false)
{
}

VariableValue::VariableValue(JsonView jsonValue) : 
    m_rawValueHasBeenSet(false)
{
  *this = jsonValue;
}

VariableValue& VariableValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rawValue"))
  {
    m_rawValue = jsonValue.GetString("rawValue");

    m_rawValueHasBeenSet = true;
  }

  return *this;
}

JsonValue VariableValue::Jsonize() const
{
  JsonValue payload;

  if(m_rawValueHasBeenSet)
  {
   payload.WithString("rawValue", m_rawValue);

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
