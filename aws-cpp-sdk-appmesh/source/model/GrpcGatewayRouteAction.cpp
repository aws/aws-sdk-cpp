/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GrpcGatewayRouteAction.h>
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

GrpcGatewayRouteAction::GrpcGatewayRouteAction() : 
    m_targetHasBeenSet(false)
{
}

GrpcGatewayRouteAction::GrpcGatewayRouteAction(JsonView jsonValue) : 
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

GrpcGatewayRouteAction& GrpcGatewayRouteAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetObject("target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue GrpcGatewayRouteAction::Jsonize() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithObject("target", m_target.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
