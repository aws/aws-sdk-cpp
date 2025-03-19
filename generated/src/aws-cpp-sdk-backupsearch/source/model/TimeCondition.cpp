/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/TimeCondition.h>
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

TimeCondition::TimeCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

TimeCondition& TimeCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = TimeConditionOperatorMapper::GetTimeConditionOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeCondition::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value.SecondsWithMSPrecision());
  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", TimeConditionOperatorMapper::GetNameForTimeConditionOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
