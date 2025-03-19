/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RoutingCriteriaInputStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

RoutingCriteriaInputStep::RoutingCriteriaInputStep(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutingCriteriaInputStep& RoutingCriteriaInputStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Expiry"))
  {
    m_expiry = jsonValue.GetObject("Expiry");
    m_expiryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetObject("Expression");
    m_expressionHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingCriteriaInputStep::Jsonize() const
{
  JsonValue payload;

  if(m_expiryHasBeenSet)
  {
   payload.WithObject("Expiry", m_expiry.Jsonize());

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithObject("Expression", m_expression.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
