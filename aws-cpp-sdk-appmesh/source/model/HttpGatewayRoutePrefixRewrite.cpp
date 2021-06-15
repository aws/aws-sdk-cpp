/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/HttpGatewayRoutePrefixRewrite.h>
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

HttpGatewayRoutePrefixRewrite::HttpGatewayRoutePrefixRewrite() : 
    m_defaultPrefix(DefaultGatewayRouteRewrite::NOT_SET),
    m_defaultPrefixHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

HttpGatewayRoutePrefixRewrite::HttpGatewayRoutePrefixRewrite(JsonView jsonValue) : 
    m_defaultPrefix(DefaultGatewayRouteRewrite::NOT_SET),
    m_defaultPrefixHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

HttpGatewayRoutePrefixRewrite& HttpGatewayRoutePrefixRewrite::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultPrefix"))
  {
    m_defaultPrefix = DefaultGatewayRouteRewriteMapper::GetDefaultGatewayRouteRewriteForName(jsonValue.GetString("defaultPrefix"));

    m_defaultPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpGatewayRoutePrefixRewrite::Jsonize() const
{
  JsonValue payload;

  if(m_defaultPrefixHasBeenSet)
  {
   payload.WithString("defaultPrefix", DefaultGatewayRouteRewriteMapper::GetNameForDefaultGatewayRouteRewrite(m_defaultPrefix));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
