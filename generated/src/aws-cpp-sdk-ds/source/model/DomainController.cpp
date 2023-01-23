/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DomainController.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

DomainController::DomainController() : 
    m_directoryIdHasBeenSet(false),
    m_domainControllerIdHasBeenSet(false),
    m_dnsIpAddrHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_status(DomainControllerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_launchTimeHasBeenSet(false),
    m_statusLastUpdatedDateTimeHasBeenSet(false)
{
}

DomainController::DomainController(JsonView jsonValue) : 
    m_directoryIdHasBeenSet(false),
    m_domainControllerIdHasBeenSet(false),
    m_dnsIpAddrHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_status(DomainControllerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_launchTimeHasBeenSet(false),
    m_statusLastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DomainController& DomainController::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainControllerId"))
  {
    m_domainControllerId = jsonValue.GetString("DomainControllerId");

    m_domainControllerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsIpAddr"))
  {
    m_dnsIpAddr = jsonValue.GetString("DnsIpAddr");

    m_dnsIpAddrHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DomainControllerStatusMapper::GetDomainControllerStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchTime"))
  {
    m_launchTime = jsonValue.GetDouble("LaunchTime");

    m_launchTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusLastUpdatedDateTime"))
  {
    m_statusLastUpdatedDateTime = jsonValue.GetDouble("StatusLastUpdatedDateTime");

    m_statusLastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainController::Jsonize() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_domainControllerIdHasBeenSet)
  {
   payload.WithString("DomainControllerId", m_domainControllerId);

  }

  if(m_dnsIpAddrHasBeenSet)
  {
   payload.WithString("DnsIpAddr", m_dnsIpAddr);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DomainControllerStatusMapper::GetNameForDomainControllerStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  if(m_launchTimeHasBeenSet)
  {
   payload.WithDouble("LaunchTime", m_launchTime.SecondsWithMSPrecision());
  }

  if(m_statusLastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("StatusLastUpdatedDateTime", m_statusLastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
