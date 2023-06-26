/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/Threshold.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

Threshold::Threshold() : 
    m_valueHasBeenSet(false),
    m_operator(Operator::NOT_SET),
    m_operatorHasBeenSet(false)
{
}

Threshold::Threshold(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_operator(Operator::NOT_SET),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

Threshold& Threshold::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = OperatorMapper::GetOperatorForName(jsonValue.GetString("Operator"));

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue Threshold::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", OperatorMapper::GetNameForOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
