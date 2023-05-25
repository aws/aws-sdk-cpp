/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/Compute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

Compute::Compute() : 
    m_fleetIdHasBeenSet(false),
    m_fleetArnHasBeenSet(false),
    m_computeNameHasBeenSet(false),
    m_computeArnHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_computeStatus(ComputeStatus::NOT_SET),
    m_computeStatusHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_type(EC2InstanceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_gameLiftServiceSdkEndpointHasBeenSet(false)
{
}

Compute::Compute(JsonView jsonValue) : 
    m_fleetIdHasBeenSet(false),
    m_fleetArnHasBeenSet(false),
    m_computeNameHasBeenSet(false),
    m_computeArnHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_computeStatus(ComputeStatus::NOT_SET),
    m_computeStatusHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_type(EC2InstanceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_gameLiftServiceSdkEndpointHasBeenSet(false)
{
  *this = jsonValue;
}

Compute& Compute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");

    m_fleetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FleetArn"))
  {
    m_fleetArn = jsonValue.GetString("FleetArn");

    m_fleetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputeName"))
  {
    m_computeName = jsonValue.GetString("ComputeName");

    m_computeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputeArn"))
  {
    m_computeArn = jsonValue.GetString("ComputeArn");

    m_computeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsName"))
  {
    m_dnsName = jsonValue.GetString("DnsName");

    m_dnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputeStatus"))
  {
    m_computeStatus = ComputeStatusMapper::GetComputeStatusForName(jsonValue.GetString("ComputeStatus"));

    m_computeStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperatingSystem"))
  {
    m_operatingSystem = OperatingSystemMapper::GetOperatingSystemForName(jsonValue.GetString("OperatingSystem"));

    m_operatingSystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = EC2InstanceTypeMapper::GetEC2InstanceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameLiftServiceSdkEndpoint"))
  {
    m_gameLiftServiceSdkEndpoint = jsonValue.GetString("GameLiftServiceSdkEndpoint");

    m_gameLiftServiceSdkEndpointHasBeenSet = true;
  }

  return *this;
}

JsonValue Compute::Jsonize() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_computeNameHasBeenSet)
  {
   payload.WithString("ComputeName", m_computeName);

  }

  if(m_computeArnHasBeenSet)
  {
   payload.WithString("ComputeArn", m_computeArn);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_dnsNameHasBeenSet)
  {
   payload.WithString("DnsName", m_dnsName);

  }

  if(m_computeStatusHasBeenSet)
  {
   payload.WithString("ComputeStatus", ComputeStatusMapper::GetNameForComputeStatus(m_computeStatus));
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("OperatingSystem", OperatingSystemMapper::GetNameForOperatingSystem(m_operatingSystem));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EC2InstanceTypeMapper::GetNameForEC2InstanceType(m_type));
  }

  if(m_gameLiftServiceSdkEndpointHasBeenSet)
  {
   payload.WithString("GameLiftServiceSdkEndpoint", m_gameLiftServiceSdkEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
