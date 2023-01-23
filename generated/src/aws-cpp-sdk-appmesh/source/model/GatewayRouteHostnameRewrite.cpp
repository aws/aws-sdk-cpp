/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GatewayRouteHostnameRewrite.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

GatewayRouteHostnameRewrite::GatewayRouteHostnameRewrite() : 
    m_defaultTargetHostname(DefaultGatewayRouteRewrite::NOT_SET),
    m_defaultTargetHostnameHasBeenSet(false)
{
}

GatewayRouteHostnameRewrite::GatewayRouteHostnameRewrite(JsonView jsonValue) : 
    m_defaultTargetHostname(DefaultGatewayRouteRewrite::NOT_SET),
    m_defaultTargetHostnameHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayRouteHostnameRewrite& GatewayRouteHostnameRewrite::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultTargetHostname"))
  {
    m_defaultTargetHostname = DefaultGatewayRouteRewriteMapper::GetDefaultGatewayRouteRewriteForName(jsonValue.GetString("defaultTargetHostname"));

    m_defaultTargetHostnameHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayRouteHostnameRewrite::Jsonize() const
{
  JsonValue payload;

  if(m_defaultTargetHostnameHasBeenSet)
  {
   payload.WithString("defaultTargetHostname", DefaultGatewayRouteRewriteMapper::GetNameForDefaultGatewayRouteRewrite(m_defaultTargetHostname));
  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
