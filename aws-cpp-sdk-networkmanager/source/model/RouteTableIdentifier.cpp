/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/RouteTableIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

RouteTableIdentifier::RouteTableIdentifier() : 
    m_transitGatewayRouteTableArnHasBeenSet(false)
{
}

RouteTableIdentifier::RouteTableIdentifier(JsonView jsonValue) : 
    m_transitGatewayRouteTableArnHasBeenSet(false)
{
  *this = jsonValue;
}

RouteTableIdentifier& RouteTableIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransitGatewayRouteTableArn"))
  {
    m_transitGatewayRouteTableArn = jsonValue.GetString("TransitGatewayRouteTableArn");

    m_transitGatewayRouteTableArnHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteTableIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_transitGatewayRouteTableArnHasBeenSet)
  {
   payload.WithString("TransitGatewayRouteTableArn", m_transitGatewayRouteTableArn);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
