/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/Hsm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

Hsm::Hsm() : 
    m_availabilityZoneHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_eniIdHasBeenSet(false),
    m_eniIpHasBeenSet(false),
    m_hsmIdHasBeenSet(false),
    m_state(HsmState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateMessageHasBeenSet(false)
{
}

Hsm::Hsm(JsonView jsonValue) : 
    m_availabilityZoneHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_eniIdHasBeenSet(false),
    m_eniIpHasBeenSet(false),
    m_hsmIdHasBeenSet(false),
    m_state(HsmState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateMessageHasBeenSet(false)
{
  *this = jsonValue;
}

Hsm& Hsm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterId"))
  {
    m_clusterId = jsonValue.GetString("ClusterId");

    m_clusterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EniId"))
  {
    m_eniId = jsonValue.GetString("EniId");

    m_eniIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EniIp"))
  {
    m_eniIp = jsonValue.GetString("EniIp");

    m_eniIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HsmId"))
  {
    m_hsmId = jsonValue.GetString("HsmId");

    m_hsmIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = HsmStateMapper::GetHsmStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateMessage"))
  {
    m_stateMessage = jsonValue.GetString("StateMessage");

    m_stateMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue Hsm::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_eniIdHasBeenSet)
  {
   payload.WithString("EniId", m_eniId);

  }

  if(m_eniIpHasBeenSet)
  {
   payload.WithString("EniIp", m_eniIp);

  }

  if(m_hsmIdHasBeenSet)
  {
   payload.WithString("HsmId", m_hsmId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", HsmStateMapper::GetNameForHsmState(m_state));
  }

  if(m_stateMessageHasBeenSet)
  {
   payload.WithString("StateMessage", m_stateMessage);

  }

  return payload;
}

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
