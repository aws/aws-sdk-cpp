/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Condition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

Condition::Condition(JsonView jsonValue)
{
  *this = jsonValue;
}

Condition& Condition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringCondition"))
  {
    m_stringCondition = jsonValue.GetObject("StringCondition");
    m_stringConditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberCondition"))
  {
    m_numberCondition = jsonValue.GetObject("NumberCondition");
    m_numberConditionHasBeenSet = true;
  }
  return *this;
}

JsonValue Condition::Jsonize() const
{
  JsonValue payload;

  if(m_stringConditionHasBeenSet)
  {
   payload.WithObject("StringCondition", m_stringCondition.Jsonize());

  }

  if(m_numberConditionHasBeenSet)
  {
   payload.WithObject("NumberCondition", m_numberCondition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
