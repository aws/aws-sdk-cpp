/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GrpcGatewayRouteRewrite.h>
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

GrpcGatewayRouteRewrite::GrpcGatewayRouteRewrite() : 
    m_hostnameHasBeenSet(false)
{
}

GrpcGatewayRouteRewrite::GrpcGatewayRouteRewrite(JsonView jsonValue) : 
    m_hostnameHasBeenSet(false)
{
  *this = jsonValue;
}

GrpcGatewayRouteRewrite& GrpcGatewayRouteRewrite::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetObject("hostname");

    m_hostnameHasBeenSet = true;
  }

  return *this;
}

JsonValue GrpcGatewayRouteRewrite::Jsonize() const
{
  JsonValue payload;

  if(m_hostnameHasBeenSet)
  {
   payload.WithObject("hostname", m_hostname.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
