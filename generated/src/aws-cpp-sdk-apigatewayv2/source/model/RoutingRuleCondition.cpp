/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/RoutingRuleCondition.h>
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

RoutingRuleCondition::RoutingRuleCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutingRuleCondition& RoutingRuleCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("matchBasePaths"))
  {
    m_matchBasePaths = jsonValue.GetObject("matchBasePaths");
    m_matchBasePathsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("matchHeaders"))
  {
    m_matchHeaders = jsonValue.GetObject("matchHeaders");
    m_matchHeadersHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingRuleCondition::Jsonize() const
{
  JsonValue payload;

  if(m_matchBasePathsHasBeenSet)
  {
   payload.WithObject("matchBasePaths", m_matchBasePaths.Jsonize());

  }

  if(m_matchHeadersHasBeenSet)
  {
   payload.WithObject("matchHeaders", m_matchHeaders.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
