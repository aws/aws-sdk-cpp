/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GatewayRouteVirtualService.h>
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

GatewayRouteVirtualService::GatewayRouteVirtualService() : 
    m_virtualServiceNameHasBeenSet(false)
{
}

GatewayRouteVirtualService::GatewayRouteVirtualService(JsonView jsonValue) : 
    m_virtualServiceNameHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayRouteVirtualService& GatewayRouteVirtualService::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("virtualServiceName"))
  {
    m_virtualServiceName = jsonValue.GetString("virtualServiceName");

    m_virtualServiceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayRouteVirtualService::Jsonize() const
{
  JsonValue payload;

  if(m_virtualServiceNameHasBeenSet)
  {
   payload.WithString("virtualServiceName", m_virtualServiceName);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
