/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/GatewayDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

GatewayDetails::GatewayDetails() : 
    m_gatewayArnHasBeenSet(false),
    m_gatewayDisplayNameHasBeenSet(false),
    m_gatewayType(GatewayType::NOT_SET),
    m_gatewayTypeHasBeenSet(false),
    m_hypervisorIdHasBeenSet(false),
    m_lastSeenTimeHasBeenSet(false),
    m_maintenanceStartTimeHasBeenSet(false),
    m_nextUpdateAvailabilityTimeHasBeenSet(false),
    m_vpcEndpointHasBeenSet(false)
{
}

GatewayDetails::GatewayDetails(JsonView jsonValue) : 
    m_gatewayArnHasBeenSet(false),
    m_gatewayDisplayNameHasBeenSet(false),
    m_gatewayType(GatewayType::NOT_SET),
    m_gatewayTypeHasBeenSet(false),
    m_hypervisorIdHasBeenSet(false),
    m_lastSeenTimeHasBeenSet(false),
    m_maintenanceStartTimeHasBeenSet(false),
    m_nextUpdateAvailabilityTimeHasBeenSet(false),
    m_vpcEndpointHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayDetails& GatewayDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GatewayArn"))
  {
    m_gatewayArn = jsonValue.GetString("GatewayArn");

    m_gatewayArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayDisplayName"))
  {
    m_gatewayDisplayName = jsonValue.GetString("GatewayDisplayName");

    m_gatewayDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayType"))
  {
    m_gatewayType = GatewayTypeMapper::GetGatewayTypeForName(jsonValue.GetString("GatewayType"));

    m_gatewayTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HypervisorId"))
  {
    m_hypervisorId = jsonValue.GetString("HypervisorId");

    m_hypervisorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSeenTime"))
  {
    m_lastSeenTime = jsonValue.GetDouble("LastSeenTime");

    m_lastSeenTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaintenanceStartTime"))
  {
    m_maintenanceStartTime = jsonValue.GetObject("MaintenanceStartTime");

    m_maintenanceStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextUpdateAvailabilityTime"))
  {
    m_nextUpdateAvailabilityTime = jsonValue.GetDouble("NextUpdateAvailabilityTime");

    m_nextUpdateAvailabilityTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcEndpoint"))
  {
    m_vpcEndpoint = jsonValue.GetString("VpcEndpoint");

    m_vpcEndpointHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayDetails::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayArnHasBeenSet)
  {
   payload.WithString("GatewayArn", m_gatewayArn);

  }

  if(m_gatewayDisplayNameHasBeenSet)
  {
   payload.WithString("GatewayDisplayName", m_gatewayDisplayName);

  }

  if(m_gatewayTypeHasBeenSet)
  {
   payload.WithString("GatewayType", GatewayTypeMapper::GetNameForGatewayType(m_gatewayType));
  }

  if(m_hypervisorIdHasBeenSet)
  {
   payload.WithString("HypervisorId", m_hypervisorId);

  }

  if(m_lastSeenTimeHasBeenSet)
  {
   payload.WithDouble("LastSeenTime", m_lastSeenTime.SecondsWithMSPrecision());
  }

  if(m_maintenanceStartTimeHasBeenSet)
  {
   payload.WithObject("MaintenanceStartTime", m_maintenanceStartTime.Jsonize());

  }

  if(m_nextUpdateAvailabilityTimeHasBeenSet)
  {
   payload.WithDouble("NextUpdateAvailabilityTime", m_nextUpdateAvailabilityTime.SecondsWithMSPrecision());
  }

  if(m_vpcEndpointHasBeenSet)
  {
   payload.WithString("VpcEndpoint", m_vpcEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
