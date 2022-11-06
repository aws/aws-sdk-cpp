/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkFirewallUnexpectedGatewayRoutesViolation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

NetworkFirewallUnexpectedGatewayRoutesViolation::NetworkFirewallUnexpectedGatewayRoutesViolation() : 
    m_gatewayIdHasBeenSet(false),
    m_violatingRoutesHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

NetworkFirewallUnexpectedGatewayRoutesViolation::NetworkFirewallUnexpectedGatewayRoutesViolation(JsonView jsonValue) : 
    m_gatewayIdHasBeenSet(false),
    m_violatingRoutesHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFirewallUnexpectedGatewayRoutesViolation& NetworkFirewallUnexpectedGatewayRoutesViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GatewayId"))
  {
    m_gatewayId = jsonValue.GetString("GatewayId");

    m_gatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViolatingRoutes"))
  {
    Aws::Utils::Array<JsonView> violatingRoutesJsonList = jsonValue.GetArray("ViolatingRoutes");
    for(unsigned violatingRoutesIndex = 0; violatingRoutesIndex < violatingRoutesJsonList.GetLength(); ++violatingRoutesIndex)
    {
      m_violatingRoutes.push_back(violatingRoutesJsonList[violatingRoutesIndex].AsObject());
    }
    m_violatingRoutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteTableId"))
  {
    m_routeTableId = jsonValue.GetString("RouteTableId");

    m_routeTableIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFirewallUnexpectedGatewayRoutesViolation::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayIdHasBeenSet)
  {
   payload.WithString("GatewayId", m_gatewayId);

  }

  if(m_violatingRoutesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> violatingRoutesJsonList(m_violatingRoutes.size());
   for(unsigned violatingRoutesIndex = 0; violatingRoutesIndex < violatingRoutesJsonList.GetLength(); ++violatingRoutesIndex)
   {
     violatingRoutesJsonList[violatingRoutesIndex].AsObject(m_violatingRoutes[violatingRoutesIndex].Jsonize());
   }
   payload.WithArray("ViolatingRoutes", std::move(violatingRoutesJsonList));

  }

  if(m_routeTableIdHasBeenSet)
  {
   payload.WithString("RouteTableId", m_routeTableId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
