/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DocumentAttributeCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

DocumentAttributeCondition::DocumentAttributeCondition() : 
    m_conditionDocumentAttributeKeyHasBeenSet(false),
    m_operator(ConditionOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_conditionOnValueHasBeenSet(false)
{
}

DocumentAttributeCondition::DocumentAttributeCondition(JsonView jsonValue) : 
    m_conditionDocumentAttributeKeyHasBeenSet(false),
    m_operator(ConditionOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_conditionOnValueHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentAttributeCondition& DocumentAttributeCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConditionDocumentAttributeKey"))
  {
    m_conditionDocumentAttributeKey = jsonValue.GetString("ConditionDocumentAttributeKey");

    m_conditionDocumentAttributeKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = ConditionOperatorMapper::GetConditionOperatorForName(jsonValue.GetString("Operator"));

    m_operatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConditionOnValue"))
  {
    m_conditionOnValue = jsonValue.GetObject("ConditionOnValue");

    m_conditionOnValueHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentAttributeCondition::Jsonize() const
{
  JsonValue payload;

  if(m_conditionDocumentAttributeKeyHasBeenSet)
  {
   payload.WithString("ConditionDocumentAttributeKey", m_conditionDocumentAttributeKey);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", ConditionOperatorMapper::GetNameForConditionOperator(m_operator));
  }

  if(m_conditionOnValueHasBeenSet)
  {
   payload.WithObject("ConditionOnValue", m_conditionOnValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
