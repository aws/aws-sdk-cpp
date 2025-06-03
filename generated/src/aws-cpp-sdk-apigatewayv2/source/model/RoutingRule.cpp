/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/RoutingRule.h>
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

RoutingRule::RoutingRule(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutingRule& RoutingRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conditions"))
  {
    Aws::Utils::Array<JsonView> conditionsJsonList = jsonValue.GetArray("conditions");
    for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
    {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("routingRuleArn"))
  {
    m_routingRuleArn = jsonValue.GetString("routingRuleArn");
    m_routingRuleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("routingRuleId"))
  {
    m_routingRuleId = jsonValue.GetString("routingRuleId");
    m_routingRuleIdHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingRule::Jsonize() const
{
  JsonValue payload;

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("actions", std::move(actionsJsonList));

  }

  if(m_conditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionsJsonList(m_conditions.size());
   for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
   {
     conditionsJsonList[conditionsIndex].AsObject(m_conditions[conditionsIndex].Jsonize());
   }
   payload.WithArray("conditions", std::move(conditionsJsonList));

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_routingRuleArnHasBeenSet)
  {
   payload.WithString("routingRuleArn", m_routingRuleArn);

  }

  if(m_routingRuleIdHasBeenSet)
  {
   payload.WithString("routingRuleId", m_routingRuleId);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
