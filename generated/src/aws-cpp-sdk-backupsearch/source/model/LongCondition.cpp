/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/LongCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupSearch
{
namespace Model
{

LongCondition::LongCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

LongCondition& LongCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInt64("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = LongConditionOperatorMapper::GetLongConditionOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  return *this;
}

JsonValue LongCondition::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithInt64("Value", m_value);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", LongConditionOperatorMapper::GetNameForLongConditionOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
