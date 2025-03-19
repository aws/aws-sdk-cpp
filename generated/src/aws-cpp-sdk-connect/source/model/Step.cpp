/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Step.h>
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

Step::Step(JsonView jsonValue)
{
  *this = jsonValue;
}

Step& Step::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Status"))
  {
    m_status = RoutingCriteriaStepStatusMapper::GetRoutingCriteriaStepStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue Step::Jsonize() const
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RoutingCriteriaStepStatusMapper::GetNameForRoutingCriteriaStepStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
