/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/StringCondition.h>
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

StringCondition::StringCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

StringCondition& StringCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = StringConditionOperatorMapper::GetStringConditionOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  return *this;
}

JsonValue StringCondition::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", StringConditionOperatorMapper::GetNameForStringConditionOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
