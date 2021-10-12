/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AvailMatchingCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

AvailMatchingCriteria::AvailMatchingCriteria() : 
    m_dynamicVariableHasBeenSet(false),
    m_operator(Operator::NOT_SET),
    m_operatorHasBeenSet(false)
{
}

AvailMatchingCriteria::AvailMatchingCriteria(JsonView jsonValue) : 
    m_dynamicVariableHasBeenSet(false),
    m_operator(Operator::NOT_SET),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

AvailMatchingCriteria& AvailMatchingCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DynamicVariable"))
  {
    m_dynamicVariable = jsonValue.GetString("DynamicVariable");

    m_dynamicVariableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = OperatorMapper::GetOperatorForName(jsonValue.GetString("Operator"));

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue AvailMatchingCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_dynamicVariableHasBeenSet)
  {
   payload.WithString("DynamicVariable", m_dynamicVariable);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", OperatorMapper::GetNameForOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
