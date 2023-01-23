/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GatewayRouteStatus.h>
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

GatewayRouteStatus::GatewayRouteStatus() : 
    m_status(GatewayRouteStatusCode::NOT_SET),
    m_statusHasBeenSet(false)
{
}

GatewayRouteStatus::GatewayRouteStatus(JsonView jsonValue) : 
    m_status(GatewayRouteStatusCode::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayRouteStatus& GatewayRouteStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = GatewayRouteStatusCodeMapper::GetGatewayRouteStatusCodeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayRouteStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", GatewayRouteStatusCodeMapper::GetNameForGatewayRouteStatusCode(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
