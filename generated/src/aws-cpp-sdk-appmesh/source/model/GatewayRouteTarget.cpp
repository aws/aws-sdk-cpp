/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GatewayRouteTarget.h>
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

GatewayRouteTarget::GatewayRouteTarget() : 
    m_port(0),
    m_portHasBeenSet(false),
    m_virtualServiceHasBeenSet(false)
{
}

GatewayRouteTarget::GatewayRouteTarget(JsonView jsonValue) : 
    m_port(0),
    m_portHasBeenSet(false),
    m_virtualServiceHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayRouteTarget& GatewayRouteTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualService"))
  {
    m_virtualService = jsonValue.GetObject("virtualService");

    m_virtualServiceHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayRouteTarget::Jsonize() const
{
  JsonValue payload;

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_virtualServiceHasBeenSet)
  {
   payload.WithObject("virtualService", m_virtualService.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
