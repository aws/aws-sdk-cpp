/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkFirewallBlackHoleRouteDetectedViolation.h>
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

NetworkFirewallBlackHoleRouteDetectedViolation::NetworkFirewallBlackHoleRouteDetectedViolation() : 
    m_violationTargetHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_violatingRoutesHasBeenSet(false)
{
}

NetworkFirewallBlackHoleRouteDetectedViolation::NetworkFirewallBlackHoleRouteDetectedViolation(JsonView jsonValue) : 
    m_violationTargetHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_violatingRoutesHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFirewallBlackHoleRouteDetectedViolation& NetworkFirewallBlackHoleRouteDetectedViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ViolationTarget"))
  {
    m_violationTarget = jsonValue.GetString("ViolationTarget");

    m_violationTargetHasBeenSet = true;
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

  if(jsonValue.ValueExists("ViolatingRoutes"))
  {
    Aws::Utils::Array<JsonView> violatingRoutesJsonList = jsonValue.GetArray("ViolatingRoutes");
    for(unsigned violatingRoutesIndex = 0; violatingRoutesIndex < violatingRoutesJsonList.GetLength(); ++violatingRoutesIndex)
    {
      m_violatingRoutes.push_back(violatingRoutesJsonList[violatingRoutesIndex].AsObject());
    }
    m_violatingRoutesHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFirewallBlackHoleRouteDetectedViolation::Jsonize() const
{
  JsonValue payload;

  if(m_violationTargetHasBeenSet)
  {
   payload.WithString("ViolationTarget", m_violationTarget);

  }

  if(m_routeTableIdHasBeenSet)
  {
   payload.WithString("RouteTableId", m_routeTableId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

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

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
