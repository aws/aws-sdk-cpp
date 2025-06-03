/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/RoutingRuleMatchHeaderValue.h>
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

RoutingRuleMatchHeaderValue::RoutingRuleMatchHeaderValue(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutingRuleMatchHeaderValue& RoutingRuleMatchHeaderValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("header"))
  {
    m_header = jsonValue.GetString("header");
    m_headerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("valueGlob"))
  {
    m_valueGlob = jsonValue.GetString("valueGlob");
    m_valueGlobHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingRuleMatchHeaderValue::Jsonize() const
{
  JsonValue payload;

  if(m_headerHasBeenSet)
  {
   payload.WithString("header", m_header);

  }

  if(m_valueGlobHasBeenSet)
  {
   payload.WithString("valueGlob", m_valueGlob);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
