/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/SlotDefaultValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

SlotDefaultValue::SlotDefaultValue() : 
    m_defaultValueHasBeenSet(false)
{
}

SlotDefaultValue::SlotDefaultValue(JsonView jsonValue) : 
    m_defaultValueHasBeenSet(false)
{
  *this = jsonValue;
}

SlotDefaultValue& SlotDefaultValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotDefaultValue::Jsonize() const
{
  JsonValue payload;

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
