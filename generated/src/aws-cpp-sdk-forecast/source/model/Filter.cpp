/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/Filter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

Filter::Filter() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_condition(FilterConditionString::NOT_SET),
    m_conditionHasBeenSet(false)
{
}

Filter::Filter(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_condition(FilterConditionString::NOT_SET),
    m_conditionHasBeenSet(false)
{
  *this = jsonValue;
}

Filter& Filter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = FilterConditionStringMapper::GetFilterConditionStringForName(jsonValue.GetString("Condition"));

    m_conditionHasBeenSet = true;
  }

  return *this;
}

JsonValue Filter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithString("Condition", FilterConditionStringMapper::GetNameForFilterConditionString(m_condition));
  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
