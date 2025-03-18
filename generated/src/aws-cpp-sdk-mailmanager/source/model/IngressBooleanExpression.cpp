/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressBooleanExpression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

IngressBooleanExpression::IngressBooleanExpression(JsonView jsonValue)
{
  *this = jsonValue;
}

IngressBooleanExpression& IngressBooleanExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Evaluate"))
  {
    m_evaluate = jsonValue.GetObject("Evaluate");
    m_evaluateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = IngressBooleanOperatorMapper::GetIngressBooleanOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  return *this;
}

JsonValue IngressBooleanExpression::Jsonize() const
{
  JsonValue payload;

  if(m_evaluateHasBeenSet)
  {
   payload.WithObject("Evaluate", m_evaluate.Jsonize());

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", IngressBooleanOperatorMapper::GetNameForIngressBooleanOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
