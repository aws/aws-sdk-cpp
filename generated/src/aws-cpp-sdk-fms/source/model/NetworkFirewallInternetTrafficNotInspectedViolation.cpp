/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkFirewallInternetTrafficNotInspectedViolation.h>
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

NetworkFirewallInternetTrafficNotInspectedViolation::NetworkFirewallInternetTrafficNotInspectedViolation() : 
    m_subnetIdHasBeenSet(false),
    m_subnetAvailabilityZoneHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_violatingRoutesHasBeenSet(false),
    m_isRouteTableUsedInDifferentAZ(false),
    m_isRouteTableUsedInDifferentAZHasBeenSet(false),
    m_currentFirewallSubnetRouteTableHasBeenSet(false),
    m_expectedFirewallEndpointHasBeenSet(false),
    m_firewallSubnetIdHasBeenSet(false),
    m_expectedFirewallSubnetRoutesHasBeenSet(false),
    m_actualFirewallSubnetRoutesHasBeenSet(false),
    m_internetGatewayIdHasBeenSet(false),
    m_currentInternetGatewayRouteTableHasBeenSet(false),
    m_expectedInternetGatewayRoutesHasBeenSet(false),
    m_actualInternetGatewayRoutesHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

NetworkFirewallInternetTrafficNotInspectedViolation::NetworkFirewallInternetTrafficNotInspectedViolation(JsonView jsonValue) : 
    m_subnetIdHasBeenSet(false),
    m_subnetAvailabilityZoneHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_violatingRoutesHasBeenSet(false),
    m_isRouteTableUsedInDifferentAZ(false),
    m_isRouteTableUsedInDifferentAZHasBeenSet(false),
    m_currentFirewallSubnetRouteTableHasBeenSet(false),
    m_expectedFirewallEndpointHasBeenSet(false),
    m_firewallSubnetIdHasBeenSet(false),
    m_expectedFirewallSubnetRoutesHasBeenSet(false),
    m_actualFirewallSubnetRoutesHasBeenSet(false),
    m_internetGatewayIdHasBeenSet(false),
    m_currentInternetGatewayRouteTableHasBeenSet(false),
    m_expectedInternetGatewayRoutesHasBeenSet(false),
    m_actualInternetGatewayRoutesHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFirewallInternetTrafficNotInspectedViolation& NetworkFirewallInternetTrafficNotInspectedViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetAvailabilityZone"))
  {
    m_subnetAvailabilityZone = jsonValue.GetString("SubnetAvailabilityZone");

    m_subnetAvailabilityZoneHasBeenSet = true;
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

  if(jsonValue.ValueExists("IsRouteTableUsedInDifferentAZ"))
  {
    m_isRouteTableUsedInDifferentAZ = jsonValue.GetBool("IsRouteTableUsedInDifferentAZ");

    m_isRouteTableUsedInDifferentAZHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentFirewallSubnetRouteTable"))
  {
    m_currentFirewallSubnetRouteTable = jsonValue.GetString("CurrentFirewallSubnetRouteTable");

    m_currentFirewallSubnetRouteTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedFirewallEndpoint"))
  {
    m_expectedFirewallEndpoint = jsonValue.GetString("ExpectedFirewallEndpoint");

    m_expectedFirewallEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallSubnetId"))
  {
    m_firewallSubnetId = jsonValue.GetString("FirewallSubnetId");

    m_firewallSubnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedFirewallSubnetRoutes"))
  {
    Aws::Utils::Array<JsonView> expectedFirewallSubnetRoutesJsonList = jsonValue.GetArray("ExpectedFirewallSubnetRoutes");
    for(unsigned expectedFirewallSubnetRoutesIndex = 0; expectedFirewallSubnetRoutesIndex < expectedFirewallSubnetRoutesJsonList.GetLength(); ++expectedFirewallSubnetRoutesIndex)
    {
      m_expectedFirewallSubnetRoutes.push_back(expectedFirewallSubnetRoutesJsonList[expectedFirewallSubnetRoutesIndex].AsObject());
    }
    m_expectedFirewallSubnetRoutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActualFirewallSubnetRoutes"))
  {
    Aws::Utils::Array<JsonView> actualFirewallSubnetRoutesJsonList = jsonValue.GetArray("ActualFirewallSubnetRoutes");
    for(unsigned actualFirewallSubnetRoutesIndex = 0; actualFirewallSubnetRoutesIndex < actualFirewallSubnetRoutesJsonList.GetLength(); ++actualFirewallSubnetRoutesIndex)
    {
      m_actualFirewallSubnetRoutes.push_back(actualFirewallSubnetRoutesJsonList[actualFirewallSubnetRoutesIndex].AsObject());
    }
    m_actualFirewallSubnetRoutesHasBeenSet = true;
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

  if(jsonValue.ValueExists("ExpectedInternetGatewayRoutes"))
  {
    Aws::Utils::Array<JsonView> expectedInternetGatewayRoutesJsonList = jsonValue.GetArray("ExpectedInternetGatewayRoutes");
    for(unsigned expectedInternetGatewayRoutesIndex = 0; expectedInternetGatewayRoutesIndex < expectedInternetGatewayRoutesJsonList.GetLength(); ++expectedInternetGatewayRoutesIndex)
    {
      m_expectedInternetGatewayRoutes.push_back(expectedInternetGatewayRoutesJsonList[expectedInternetGatewayRoutesIndex].AsObject());
    }
    m_expectedInternetGatewayRoutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActualInternetGatewayRoutes"))
  {
    Aws::Utils::Array<JsonView> actualInternetGatewayRoutesJsonList = jsonValue.GetArray("ActualInternetGatewayRoutes");
    for(unsigned actualInternetGatewayRoutesIndex = 0; actualInternetGatewayRoutesIndex < actualInternetGatewayRoutesJsonList.GetLength(); ++actualInternetGatewayRoutesIndex)
    {
      m_actualInternetGatewayRoutes.push_back(actualInternetGatewayRoutesJsonList[actualInternetGatewayRoutesIndex].AsObject());
    }
    m_actualInternetGatewayRoutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFirewallInternetTrafficNotInspectedViolation::Jsonize() const
{
  JsonValue payload;

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_subnetAvailabilityZoneHasBeenSet)
  {
   payload.WithString("SubnetAvailabilityZone", m_subnetAvailabilityZone);

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

  if(m_isRouteTableUsedInDifferentAZHasBeenSet)
  {
   payload.WithBool("IsRouteTableUsedInDifferentAZ", m_isRouteTableUsedInDifferentAZ);

  }

  if(m_currentFirewallSubnetRouteTableHasBeenSet)
  {
   payload.WithString("CurrentFirewallSubnetRouteTable", m_currentFirewallSubnetRouteTable);

  }

  if(m_expectedFirewallEndpointHasBeenSet)
  {
   payload.WithString("ExpectedFirewallEndpoint", m_expectedFirewallEndpoint);

  }

  if(m_firewallSubnetIdHasBeenSet)
  {
   payload.WithString("FirewallSubnetId", m_firewallSubnetId);

  }

  if(m_expectedFirewallSubnetRoutesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> expectedFirewallSubnetRoutesJsonList(m_expectedFirewallSubnetRoutes.size());
   for(unsigned expectedFirewallSubnetRoutesIndex = 0; expectedFirewallSubnetRoutesIndex < expectedFirewallSubnetRoutesJsonList.GetLength(); ++expectedFirewallSubnetRoutesIndex)
   {
     expectedFirewallSubnetRoutesJsonList[expectedFirewallSubnetRoutesIndex].AsObject(m_expectedFirewallSubnetRoutes[expectedFirewallSubnetRoutesIndex].Jsonize());
   }
   payload.WithArray("ExpectedFirewallSubnetRoutes", std::move(expectedFirewallSubnetRoutesJsonList));

  }

  if(m_actualFirewallSubnetRoutesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actualFirewallSubnetRoutesJsonList(m_actualFirewallSubnetRoutes.size());
   for(unsigned actualFirewallSubnetRoutesIndex = 0; actualFirewallSubnetRoutesIndex < actualFirewallSubnetRoutesJsonList.GetLength(); ++actualFirewallSubnetRoutesIndex)
   {
     actualFirewallSubnetRoutesJsonList[actualFirewallSubnetRoutesIndex].AsObject(m_actualFirewallSubnetRoutes[actualFirewallSubnetRoutesIndex].Jsonize());
   }
   payload.WithArray("ActualFirewallSubnetRoutes", std::move(actualFirewallSubnetRoutesJsonList));

  }

  if(m_internetGatewayIdHasBeenSet)
  {
   payload.WithString("InternetGatewayId", m_internetGatewayId);

  }

  if(m_currentInternetGatewayRouteTableHasBeenSet)
  {
   payload.WithString("CurrentInternetGatewayRouteTable", m_currentInternetGatewayRouteTable);

  }

  if(m_expectedInternetGatewayRoutesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> expectedInternetGatewayRoutesJsonList(m_expectedInternetGatewayRoutes.size());
   for(unsigned expectedInternetGatewayRoutesIndex = 0; expectedInternetGatewayRoutesIndex < expectedInternetGatewayRoutesJsonList.GetLength(); ++expectedInternetGatewayRoutesIndex)
   {
     expectedInternetGatewayRoutesJsonList[expectedInternetGatewayRoutesIndex].AsObject(m_expectedInternetGatewayRoutes[expectedInternetGatewayRoutesIndex].Jsonize());
   }
   payload.WithArray("ExpectedInternetGatewayRoutes", std::move(expectedInternetGatewayRoutesJsonList));

  }

  if(m_actualInternetGatewayRoutesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actualInternetGatewayRoutesJsonList(m_actualInternetGatewayRoutes.size());
   for(unsigned actualInternetGatewayRoutesIndex = 0; actualInternetGatewayRoutesIndex < actualInternetGatewayRoutesJsonList.GetLength(); ++actualInternetGatewayRoutesIndex)
   {
     actualInternetGatewayRoutesJsonList[actualInternetGatewayRoutesIndex].AsObject(m_actualInternetGatewayRoutes[actualInternetGatewayRoutesIndex].Jsonize());
   }
   payload.WithArray("ActualInternetGatewayRoutes", std::move(actualInternetGatewayRoutesJsonList));

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
