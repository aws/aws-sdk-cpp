/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkFirewallUnexpectedFirewallRoutesViolation.h>
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

NetworkFirewallUnexpectedFirewallRoutesViolation::NetworkFirewallUnexpectedFirewallRoutesViolation() : 
    m_firewallSubnetIdHasBeenSet(false),
    m_violatingRoutesHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_firewallEndpointHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

NetworkFirewallUnexpectedFirewallRoutesViolation::NetworkFirewallUnexpectedFirewallRoutesViolation(JsonView jsonValue) : 
    m_firewallSubnetIdHasBeenSet(false),
    m_violatingRoutesHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_firewallEndpointHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFirewallUnexpectedFirewallRoutesViolation& NetworkFirewallUnexpectedFirewallRoutesViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirewallSubnetId"))
  {
    m_firewallSubnetId = jsonValue.GetString("FirewallSubnetId");

    m_firewallSubnetIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("FirewallEndpoint"))
  {
    m_firewallEndpoint = jsonValue.GetString("FirewallEndpoint");

    m_firewallEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFirewallUnexpectedFirewallRoutesViolation::Jsonize() const
{
  JsonValue payload;

  if(m_firewallSubnetIdHasBeenSet)
  {
   payload.WithString("FirewallSubnetId", m_firewallSubnetId);

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

  if(m_firewallEndpointHasBeenSet)
  {
   payload.WithString("FirewallEndpoint", m_firewallEndpoint);

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
