/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/RoutingRuleMatchHeaders.h>
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

RoutingRuleMatchHeaders::RoutingRuleMatchHeaders(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutingRuleMatchHeaders& RoutingRuleMatchHeaders::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("anyOf"))
  {
    Aws::Utils::Array<JsonView> anyOfJsonList = jsonValue.GetArray("anyOf");
    for(unsigned anyOfIndex = 0; anyOfIndex < anyOfJsonList.GetLength(); ++anyOfIndex)
    {
      m_anyOf.push_back(anyOfJsonList[anyOfIndex].AsObject());
    }
    m_anyOfHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingRuleMatchHeaders::Jsonize() const
{
  JsonValue payload;

  if(m_anyOfHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> anyOfJsonList(m_anyOf.size());
   for(unsigned anyOfIndex = 0; anyOfIndex < anyOfJsonList.GetLength(); ++anyOfIndex)
   {
     anyOfJsonList[anyOfIndex].AsObject(m_anyOf[anyOfIndex].Jsonize());
   }
   payload.WithArray("anyOf", std::move(anyOfJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
