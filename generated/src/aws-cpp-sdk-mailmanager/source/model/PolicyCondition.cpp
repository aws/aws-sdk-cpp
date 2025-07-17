/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/PolicyCondition.h>
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

PolicyCondition::PolicyCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

PolicyCondition& PolicyCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringExpression"))
  {
    m_stringExpression = jsonValue.GetObject("StringExpression");
    m_stringExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IpExpression"))
  {
    m_ipExpression = jsonValue.GetObject("IpExpression");
    m_ipExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ipv6Expression"))
  {
    m_ipv6Expression = jsonValue.GetObject("Ipv6Expression");
    m_ipv6ExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TlsExpression"))
  {
    m_tlsExpression = jsonValue.GetObject("TlsExpression");
    m_tlsExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BooleanExpression"))
  {
    m_booleanExpression = jsonValue.GetObject("BooleanExpression");
    m_booleanExpressionHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyCondition::Jsonize() const
{
  JsonValue payload;

  if(m_stringExpressionHasBeenSet)
  {
   payload.WithObject("StringExpression", m_stringExpression.Jsonize());

  }

  if(m_ipExpressionHasBeenSet)
  {
   payload.WithObject("IpExpression", m_ipExpression.Jsonize());

  }

  if(m_ipv6ExpressionHasBeenSet)
  {
   payload.WithObject("Ipv6Expression", m_ipv6Expression.Jsonize());

  }

  if(m_tlsExpressionHasBeenSet)
  {
   payload.WithObject("TlsExpression", m_tlsExpression.Jsonize());

  }

  if(m_booleanExpressionHasBeenSet)
  {
   payload.WithObject("BooleanExpression", m_booleanExpression.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
