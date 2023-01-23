/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/RouteSpec.h>
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

RouteSpec::RouteSpec() : 
    m_grpcRouteHasBeenSet(false),
    m_http2RouteHasBeenSet(false),
    m_httpRouteHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_tcpRouteHasBeenSet(false)
{
}

RouteSpec::RouteSpec(JsonView jsonValue) : 
    m_grpcRouteHasBeenSet(false),
    m_http2RouteHasBeenSet(false),
    m_httpRouteHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_tcpRouteHasBeenSet(false)
{
  *this = jsonValue;
}

RouteSpec& RouteSpec::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tcpRoute"))
  {
    m_tcpRoute = jsonValue.GetObject("tcpRoute");

    m_tcpRouteHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteSpec::Jsonize() const
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

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_tcpRouteHasBeenSet)
  {
   payload.WithObject("tcpRoute", m_tcpRoute.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
