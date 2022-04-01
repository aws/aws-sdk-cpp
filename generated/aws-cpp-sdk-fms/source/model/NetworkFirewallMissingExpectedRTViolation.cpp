/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkFirewallMissingExpectedRTViolation.h>
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

NetworkFirewallMissingExpectedRTViolation::NetworkFirewallMissingExpectedRTViolation() : 
    m_violationTargetHasBeenSet(false),
    m_vPCHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_currentRouteTableHasBeenSet(false),
    m_expectedRouteTableHasBeenSet(false)
{
}

NetworkFirewallMissingExpectedRTViolation::NetworkFirewallMissingExpectedRTViolation(JsonView jsonValue) : 
    m_violationTargetHasBeenSet(false),
    m_vPCHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_currentRouteTableHasBeenSet(false),
    m_expectedRouteTableHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFirewallMissingExpectedRTViolation& NetworkFirewallMissingExpectedRTViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ViolationTarget"))
  {
    m_violationTarget = jsonValue.GetString("ViolationTarget");

    m_violationTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VPC"))
  {
    m_vPC = jsonValue.GetString("VPC");

    m_vPCHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentRouteTable"))
  {
    m_currentRouteTable = jsonValue.GetString("CurrentRouteTable");

    m_currentRouteTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedRouteTable"))
  {
    m_expectedRouteTable = jsonValue.GetString("ExpectedRouteTable");

    m_expectedRouteTableHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFirewallMissingExpectedRTViolation::Jsonize() const
{
  JsonValue payload;

  if(m_violationTargetHasBeenSet)
  {
   payload.WithString("ViolationTarget", m_violationTarget);

  }

  if(m_vPCHasBeenSet)
  {
   payload.WithString("VPC", m_vPC);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_currentRouteTableHasBeenSet)
  {
   payload.WithString("CurrentRouteTable", m_currentRouteTable);

  }

  if(m_expectedRouteTableHasBeenSet)
  {
   payload.WithString("ExpectedRouteTable", m_expectedRouteTable);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
