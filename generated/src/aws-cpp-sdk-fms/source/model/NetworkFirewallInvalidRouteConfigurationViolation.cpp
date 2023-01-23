/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkFirewallInvalidRouteConfigurationViolation.h>
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

NetworkFirewallInvalidRouteConfigurationViolation::NetworkFirewallInvalidRouteConfigurationViolation() : 
    m_affectedSubnetsHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_isRouteTableUsedInDifferentAZ(false),
    m_isRouteTableUsedInDifferentAZHasBeenSet(false),
    m_violatingRouteHasBeenSet(false),
    m_currentFirewallSubnetRouteTableHasBeenSet(false),
    m_expectedFirewallEndpointHasBeenSet(false),
    m_actualFirewallEndpointHasBeenSet(false),
    m_expectedFirewallSubnetIdHasBeenSet(false),
    m_actualFirewallSubnetIdHasBeenSet(false),
    m_expectedFirewallSubnetRoutesHasBeenSet(false),
    m_actualFirewallSubnetRoutesHasBeenSet(false),
    m_internetGatewayIdHasBeenSet(false),
    m_currentInternetGatewayRouteTableHasBeenSet(false),
    m_expectedInternetGatewayRoutesHasBeenSet(false),
    m_actualInternetGatewayRoutesHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

NetworkFirewallInvalidRouteConfigurationViolation::NetworkFirewallInvalidRouteConfigurationViolation(JsonView jsonValue) : 
    m_affectedSubnetsHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_isRouteTableUsedInDifferentAZ(false),
    m_isRouteTableUsedInDifferentAZHasBeenSet(false),
    m_violatingRouteHasBeenSet(false),
    m_currentFirewallSubnetRouteTableHasBeenSet(false),
    m_expectedFirewallEndpointHasBeenSet(false),
    m_actualFirewallEndpointHasBeenSet(false),
    m_expectedFirewallSubnetIdHasBeenSet(false),
    m_actualFirewallSubnetIdHasBeenSet(false),
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

NetworkFirewallInvalidRouteConfigurationViolation& NetworkFirewallInvalidRouteConfigurationViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AffectedSubnets"))
  {
    Aws::Utils::Array<JsonView> affectedSubnetsJsonList = jsonValue.GetArray("AffectedSubnets");
    for(unsigned affectedSubnetsIndex = 0; affectedSubnetsIndex < affectedSubnetsJsonList.GetLength(); ++affectedSubnetsIndex)
    {
      m_affectedSubnets.push_back(affectedSubnetsJsonList[affectedSubnetsIndex].AsString());
    }
    m_affectedSubnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteTableId"))
  {
    m_routeTableId = jsonValue.GetString("RouteTableId");

    m_routeTableIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsRouteTableUsedInDifferentAZ"))
  {
    m_isRouteTableUsedInDifferentAZ = jsonValue.GetBool("IsRouteTableUsedInDifferentAZ");

    m_isRouteTableUsedInDifferentAZHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViolatingRoute"))
  {
    m_violatingRoute = jsonValue.GetObject("ViolatingRoute");

    m_violatingRouteHasBeenSet = true;
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

  if(jsonValue.ValueExists("ActualFirewallEndpoint"))
  {
    m_actualFirewallEndpoint = jsonValue.GetString("ActualFirewallEndpoint");

    m_actualFirewallEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedFirewallSubnetId"))
  {
    m_expectedFirewallSubnetId = jsonValue.GetString("ExpectedFirewallSubnetId");

    m_expectedFirewallSubnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActualFirewallSubnetId"))
  {
    m_actualFirewallSubnetId = jsonValue.GetString("ActualFirewallSubnetId");

    m_actualFirewallSubnetIdHasBeenSet = true;
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

JsonValue NetworkFirewallInvalidRouteConfigurationViolation::Jsonize() const
{
  JsonValue payload;

  if(m_affectedSubnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> affectedSubnetsJsonList(m_affectedSubnets.size());
   for(unsigned affectedSubnetsIndex = 0; affectedSubnetsIndex < affectedSubnetsJsonList.GetLength(); ++affectedSubnetsIndex)
   {
     affectedSubnetsJsonList[affectedSubnetsIndex].AsString(m_affectedSubnets[affectedSubnetsIndex]);
   }
   payload.WithArray("AffectedSubnets", std::move(affectedSubnetsJsonList));

  }

  if(m_routeTableIdHasBeenSet)
  {
   payload.WithString("RouteTableId", m_routeTableId);

  }

  if(m_isRouteTableUsedInDifferentAZHasBeenSet)
  {
   payload.WithBool("IsRouteTableUsedInDifferentAZ", m_isRouteTableUsedInDifferentAZ);

  }

  if(m_violatingRouteHasBeenSet)
  {
   payload.WithObject("ViolatingRoute", m_violatingRoute.Jsonize());

  }

  if(m_currentFirewallSubnetRouteTableHasBeenSet)
  {
   payload.WithString("CurrentFirewallSubnetRouteTable", m_currentFirewallSubnetRouteTable);

  }

  if(m_expectedFirewallEndpointHasBeenSet)
  {
   payload.WithString("ExpectedFirewallEndpoint", m_expectedFirewallEndpoint);

  }

  if(m_actualFirewallEndpointHasBeenSet)
  {
   payload.WithString("ActualFirewallEndpoint", m_actualFirewallEndpoint);

  }

  if(m_expectedFirewallSubnetIdHasBeenSet)
  {
   payload.WithString("ExpectedFirewallSubnetId", m_expectedFirewallSubnetId);

  }

  if(m_actualFirewallSubnetIdHasBeenSet)
  {
   payload.WithString("ActualFirewallSubnetId", m_actualFirewallSubnetId);

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
