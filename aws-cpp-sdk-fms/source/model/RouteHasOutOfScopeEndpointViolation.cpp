/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/RouteHasOutOfScopeEndpointViolation.h>
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

RouteHasOutOfScopeEndpointViolation::RouteHasOutOfScopeEndpointViolation() : 
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_violatingRoutesHasBeenSet(false),
    m_subnetAvailabilityZoneHasBeenSet(false),
    m_subnetAvailabilityZoneIdHasBeenSet(false),
    m_currentFirewallSubnetRouteTableHasBeenSet(false),
    m_firewallSubnetIdHasBeenSet(false),
    m_firewallSubnetRoutesHasBeenSet(false),
    m_internetGatewayIdHasBeenSet(false),
    m_currentInternetGatewayRouteTableHasBeenSet(false),
    m_internetGatewayRoutesHasBeenSet(false)
{
}

RouteHasOutOfScopeEndpointViolation::RouteHasOutOfScopeEndpointViolation(JsonView jsonValue) : 
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_violatingRoutesHasBeenSet(false),
    m_subnetAvailabilityZoneHasBeenSet(false),
    m_subnetAvailabilityZoneIdHasBeenSet(false),
    m_currentFirewallSubnetRouteTableHasBeenSet(false),
    m_firewallSubnetIdHasBeenSet(false),
    m_firewallSubnetRoutesHasBeenSet(false),
    m_internetGatewayIdHasBeenSet(false),
    m_currentInternetGatewayRouteTableHasBeenSet(false),
    m_internetGatewayRoutesHasBeenSet(false)
{
  *this = jsonValue;
}

RouteHasOutOfScopeEndpointViolation& RouteHasOutOfScopeEndpointViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteTableId"))
  {
    m_routeTableId = jsonValue.GetString("RouteTableId");

    m_routeTableIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("SubnetAvailabilityZone"))
  {
    m_subnetAvailabilityZone = jsonValue.GetString("SubnetAvailabilityZone");

    m_subnetAvailabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetAvailabilityZoneId"))
  {
    m_subnetAvailabilityZoneId = jsonValue.GetString("SubnetAvailabilityZoneId");

    m_subnetAvailabilityZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentFirewallSubnetRouteTable"))
  {
    m_currentFirewallSubnetRouteTable = jsonValue.GetString("CurrentFirewallSubnetRouteTable");

    m_currentFirewallSubnetRouteTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallSubnetId"))
  {
    m_firewallSubnetId = jsonValue.GetString("FirewallSubnetId");

    m_firewallSubnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallSubnetRoutes"))
  {
    Aws::Utils::Array<JsonView> firewallSubnetRoutesJsonList = jsonValue.GetArray("FirewallSubnetRoutes");
    for(unsigned firewallSubnetRoutesIndex = 0; firewallSubnetRoutesIndex < firewallSubnetRoutesJsonList.GetLength(); ++firewallSubnetRoutesIndex)
    {
      m_firewallSubnetRoutes.push_back(firewallSubnetRoutesJsonList[firewallSubnetRoutesIndex].AsObject());
    }
    m_firewallSubnetRoutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InternetGatewayId"))
  {
    m_internetGatewayId = jsonValue.GetString("InternetGatewayId");

    m_internetGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentInternetGatewayRouteTable"))
  {
    m_currentInternetGatewayRouteTable = jsonValue.GetString("CurrentInternetGatewayRouteTable");

    m_currentInternetGatewayRouteTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InternetGatewayRoutes"))
  {
    Aws::Utils::Array<JsonView> internetGatewayRoutesJsonList = jsonValue.GetArray("InternetGatewayRoutes");
    for(unsigned internetGatewayRoutesIndex = 0; internetGatewayRoutesIndex < internetGatewayRoutesJsonList.GetLength(); ++internetGatewayRoutesIndex)
    {
      m_internetGatewayRoutes.push_back(internetGatewayRoutesJsonList[internetGatewayRoutesIndex].AsObject());
    }
    m_internetGatewayRoutesHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteHasOutOfScopeEndpointViolation::Jsonize() const
{
  JsonValue payload;

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_routeTableIdHasBeenSet)
  {
   payload.WithString("RouteTableId", m_routeTableId);

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

  if(m_subnetAvailabilityZoneHasBeenSet)
  {
   payload.WithString("SubnetAvailabilityZone", m_subnetAvailabilityZone);

  }

  if(m_subnetAvailabilityZoneIdHasBeenSet)
  {
   payload.WithString("SubnetAvailabilityZoneId", m_subnetAvailabilityZoneId);

  }

  if(m_currentFirewallSubnetRouteTableHasBeenSet)
  {
   payload.WithString("CurrentFirewallSubnetRouteTable", m_currentFirewallSubnetRouteTable);

  }

  if(m_firewallSubnetIdHasBeenSet)
  {
   payload.WithString("FirewallSubnetId", m_firewallSubnetId);

  }

  if(m_firewallSubnetRoutesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> firewallSubnetRoutesJsonList(m_firewallSubnetRoutes.size());
   for(unsigned firewallSubnetRoutesIndex = 0; firewallSubnetRoutesIndex < firewallSubnetRoutesJsonList.GetLength(); ++firewallSubnetRoutesIndex)
   {
     firewallSubnetRoutesJsonList[firewallSubnetRoutesIndex].AsObject(m_firewallSubnetRoutes[firewallSubnetRoutesIndex].Jsonize());
   }
   payload.WithArray("FirewallSubnetRoutes", std::move(firewallSubnetRoutesJsonList));

  }

  if(m_internetGatewayIdHasBeenSet)
  {
   payload.WithString("InternetGatewayId", m_internetGatewayId);

  }

  if(m_currentInternetGatewayRouteTableHasBeenSet)
  {
   payload.WithString("CurrentInternetGatewayRouteTable", m_currentInternetGatewayRouteTable);

  }

  if(m_internetGatewayRoutesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> internetGatewayRoutesJsonList(m_internetGatewayRoutes.size());
   for(unsigned internetGatewayRoutesIndex = 0; internetGatewayRoutesIndex < internetGatewayRoutesJsonList.GetLength(); ++internetGatewayRoutesIndex)
   {
     internetGatewayRoutesJsonList[internetGatewayRoutesIndex].AsObject(m_internetGatewayRoutes[internetGatewayRoutesIndex].Jsonize());
   }
   payload.WithArray("InternetGatewayRoutes", std::move(internetGatewayRoutesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
