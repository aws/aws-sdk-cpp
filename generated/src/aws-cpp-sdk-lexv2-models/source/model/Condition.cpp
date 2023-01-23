/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/Condition.h>
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

Condition::Condition() : 
    m_expressionStringHasBeenSet(false)
{
}

Condition::Condition(JsonView jsonValue) : 
    m_expressionStringHasBeenSet(false)
{
  *this = jsonValue;
}

Condition& Condition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expressionString"))
  {
    m_expressionString = jsonValue.GetString("expressionString");

    m_expressionStringHasBeenSet = true;
  }

  return *this;
}

JsonValue Condition::Jsonize() const
{
  JsonValue payload;

  if(m_expressionStringHasBeenSet)
  {
   payload.WithString("expressionString", m_expressionString);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
