/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/RoutingRuleAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

RoutingRuleAction::RoutingRuleAction(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutingRuleAction& RoutingRuleAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("invokeApi"))
  {
    m_invokeApi = jsonValue.GetObject("invokeApi");
    m_invokeApiHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingRuleAction::Jsonize() const
{
  JsonValue payload;

  if(m_invokeApiHasBeenSet)
  {
   payload.WithObject("invokeApi", m_invokeApi.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
