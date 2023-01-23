/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/HttpGatewayRouteRewrite.h>
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

HttpGatewayRouteRewrite::HttpGatewayRouteRewrite() : 
    m_hostnameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

HttpGatewayRouteRewrite::HttpGatewayRouteRewrite(JsonView jsonValue) : 
    m_hostnameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
  *this = jsonValue;
}

HttpGatewayRouteRewrite& HttpGatewayRouteRewrite::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetObject("hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetObject("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetObject("prefix");

    m_prefixHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpGatewayRouteRewrite::Jsonize() const
{
  JsonValue payload;

  if(m_hostnameHasBeenSet)
  {
   payload.WithObject("hostname", m_hostname.Jsonize());

  }

  if(m_pathHasBeenSet)
  {
   payload.WithObject("path", m_path.Jsonize());

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithObject("prefix", m_prefix.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
