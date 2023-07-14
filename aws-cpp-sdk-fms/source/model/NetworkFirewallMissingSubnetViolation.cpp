/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkFirewallMissingSubnetViolation.h>
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

NetworkFirewallMissingSubnetViolation::NetworkFirewallMissingSubnetViolation() : 
    m_violationTargetHasBeenSet(false),
    m_vPCHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_targetViolationReasonHasBeenSet(false)
{
}

NetworkFirewallMissingSubnetViolation::NetworkFirewallMissingSubnetViolation(JsonView jsonValue) : 
    m_violationTargetHasBeenSet(false),
    m_vPCHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_targetViolationReasonHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFirewallMissingSubnetViolation& NetworkFirewallMissingSubnetViolation::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("TargetViolationReason"))
  {
    m_targetViolationReason = jsonValue.GetString("TargetViolationReason");

    m_targetViolationReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFirewallMissingSubnetViolation::Jsonize() const
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

  if(m_targetViolationReasonHasBeenSet)
  {
   payload.WithString("TargetViolationReason", m_targetViolationReason);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
