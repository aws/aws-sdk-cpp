/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GatewayRouteSpec.h>
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

GatewayRouteSpec::GatewayRouteSpec() : 
    m_grpcRouteHasBeenSet(false),
    m_http2RouteHasBeenSet(false),
    m_httpRouteHasBeenSet(false)
{
}

GatewayRouteSpec::GatewayRouteSpec(JsonView jsonValue) : 
    m_grpcRouteHasBeenSet(false),
    m_http2RouteHasBeenSet(false),
    m_httpRouteHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayRouteSpec& GatewayRouteSpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("grpcRoute"))
  {
    m_grpcRoute = jsonValue.GetObject("grpcRoute");

    m_grpcRouteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("http2Route"))
  {
    m_http2Route = jsonValue.GetObject("http2Route");

    m_http2RouteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("httpRoute"))
  {
    m_httpRoute = jsonValue.GetObject("httpRoute");

    m_httpRouteHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayRouteSpec::Jsonize() const
{
  JsonValue payload;

  if(m_grpcRouteHasBeenSet)
  {
   payload.WithObject("grpcRoute", m_grpcRoute.Jsonize());

  }

  if(m_http2RouteHasBeenSet)
  {
   payload.WithObject("http2Route", m_http2Route.Jsonize());

  }

  if(m_httpRouteHasBeenSet)
  {
   payload.WithObject("httpRoute", m_httpRoute.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
