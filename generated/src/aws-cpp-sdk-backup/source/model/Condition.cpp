/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/Condition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

Condition::Condition() : 
    m_conditionType(ConditionType::NOT_SET),
    m_conditionTypeHasBeenSet(false),
    m_conditionKeyHasBeenSet(false),
    m_conditionValueHasBeenSet(false)
{
}

Condition::Condition(JsonView jsonValue) : 
    m_conditionType(ConditionType::NOT_SET),
    m_conditionTypeHasBeenSet(false),
    m_conditionKeyHasBeenSet(false),
    m_conditionValueHasBeenSet(false)
{
  *this = jsonValue;
}

Condition& Condition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConditionType"))
  {
    m_conditionType = ConditionTypeMapper::GetConditionTypeForName(jsonValue.GetString("ConditionType"));

    m_conditionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConditionKey"))
  {
    m_conditionKey = jsonValue.GetString("ConditionKey");

    m_conditionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConditionValue"))
  {
    m_conditionValue = jsonValue.GetString("ConditionValue");

    m_conditionValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Condition::Jsonize() const
{
  JsonValue payload;

  if(m_conditionTypeHasBeenSet)
  {
   payload.WithString("ConditionType", ConditionTypeMapper::GetNameForConditionType(m_conditionType));
  }

  if(m_conditionKeyHasBeenSet)
  {
   payload.WithString("ConditionKey", m_conditionKey);

  }

  if(m_conditionValueHasBeenSet)
  {
   payload.WithString("ConditionValue", m_conditionValue);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
