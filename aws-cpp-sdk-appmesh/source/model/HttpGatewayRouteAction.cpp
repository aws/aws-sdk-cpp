/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/HttpGatewayRouteAction.h>
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

HttpGatewayRouteAction::HttpGatewayRouteAction() : 
    m_targetHasBeenSet(false)
{
}

HttpGatewayRouteAction::HttpGatewayRouteAction(JsonView jsonValue) : 
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

HttpGatewayRouteAction& HttpGatewayRouteAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetObject("target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpGatewayRouteAction::Jsonize() const
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
