/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

SlotValue::SlotValue() : 
    m_interpretedValueHasBeenSet(false)
{
}

SlotValue::SlotValue(JsonView jsonValue) : 
    m_interpretedValueHasBeenSet(false)
{
  *this = jsonValue;
}

SlotValue& SlotValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("interpretedValue"))
  {
    m_interpretedValue = jsonValue.GetString("interpretedValue");

    m_interpretedValueHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotValue::Jsonize() const
{
  JsonValue payload;

  if(m_interpretedValueHasBeenSet)
  {
   payload.WithString("interpretedValue", m_interpretedValue);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
