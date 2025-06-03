/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/RoutingRuleActionInvokeApi.h>
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

RoutingRuleActionInvokeApi::RoutingRuleActionInvokeApi(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutingRuleActionInvokeApi& RoutingRuleActionInvokeApi::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiId"))
  {
    m_apiId = jsonValue.GetString("apiId");
    m_apiIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stage"))
  {
    m_stage = jsonValue.GetString("stage");
    m_stageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stripBasePath"))
  {
    m_stripBasePath = jsonValue.GetBool("stripBasePath");
    m_stripBasePathHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingRuleActionInvokeApi::Jsonize() const
{
  JsonValue payload;

  if(m_apiIdHasBeenSet)
  {
   payload.WithString("apiId", m_apiId);

  }

  if(m_stageHasBeenSet)
  {
   payload.WithString("stage", m_stage);

  }

  if(m_stripBasePathHasBeenSet)
  {
   payload.WithBool("stripBasePath", m_stripBasePath);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
