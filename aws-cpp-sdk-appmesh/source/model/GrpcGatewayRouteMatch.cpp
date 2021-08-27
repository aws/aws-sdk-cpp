/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GrpcGatewayRouteMatch.h>
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

GrpcGatewayRouteMatch::GrpcGatewayRouteMatch() : 
    m_serviceNameHasBeenSet(false)
{
}

GrpcGatewayRouteMatch::GrpcGatewayRouteMatch(JsonView jsonValue) : 
    m_serviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

GrpcGatewayRouteMatch& GrpcGatewayRouteMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue GrpcGatewayRouteMatch::Jsonize() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
