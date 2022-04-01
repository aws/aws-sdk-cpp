/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/FirewallSubnetMissingVPCEndpointViolation.h>
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

FirewallSubnetMissingVPCEndpointViolation::FirewallSubnetMissingVPCEndpointViolation() : 
    m_firewallSubnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetAvailabilityZoneHasBeenSet(false),
    m_subnetAvailabilityZoneIdHasBeenSet(false)
{
}

FirewallSubnetMissingVPCEndpointViolation::FirewallSubnetMissingVPCEndpointViolation(JsonView jsonValue) : 
    m_firewallSubnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetAvailabilityZoneHasBeenSet(false),
    m_subnetAvailabilityZoneIdHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallSubnetMissingVPCEndpointViolation& FirewallSubnetMissingVPCEndpointViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirewallSubnetId"))
  {
    m_firewallSubnetId = jsonValue.GetString("FirewallSubnetId");

    m_firewallSubnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
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

  return *this;
}

JsonValue FirewallSubnetMissingVPCEndpointViolation::Jsonize() const
{
  JsonValue payload;

  if(m_firewallSubnetIdHasBeenSet)
  {
   payload.WithString("FirewallSubnetId", m_firewallSubnetId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_subnetAvailabilityZoneHasBeenSet)
  {
   payload.WithString("SubnetAvailabilityZone", m_subnetAvailabilityZone);

  }

  if(m_subnetAvailabilityZoneIdHasBeenSet)
  {
   payload.WithString("SubnetAvailabilityZoneId", m_subnetAvailabilityZoneId);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
