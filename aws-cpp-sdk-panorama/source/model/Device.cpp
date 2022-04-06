/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/Device.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

Device::Device() : 
    m_brand(DeviceBrand::NOT_SET),
    m_brandHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_leaseExpirationTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provisioningStatus(DeviceStatus::NOT_SET),
    m_provisioningStatusHasBeenSet(false)
{
}

Device::Device(JsonView jsonValue) : 
    m_brand(DeviceBrand::NOT_SET),
    m_brandHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_leaseExpirationTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provisioningStatus(DeviceStatus::NOT_SET),
    m_provisioningStatusHasBeenSet(false)
{
  *this = jsonValue;
}

Device& Device::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Brand"))
  {
    m_brand = DeviceBrandMapper::GetDeviceBrandForName(jsonValue.GetString("Brand"));

    m_brandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

    m_deviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LeaseExpirationTime"))
  {
    m_leaseExpirationTime = jsonValue.GetDouble("LeaseExpirationTime");

    m_leaseExpirationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningStatus"))
  {
    m_provisioningStatus = DeviceStatusMapper::GetDeviceStatusForName(jsonValue.GetString("ProvisioningStatus"));

    m_provisioningStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue Device::Jsonize() const
{
  JsonValue payload;

  if(m_brandHasBeenSet)
  {
   payload.WithString("Brand", DeviceBrandMapper::GetNameForDeviceBrand(m_brand));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_leaseExpirationTimeHasBeenSet)
  {
   payload.WithDouble("LeaseExpirationTime", m_leaseExpirationTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_provisioningStatusHasBeenSet)
  {
   payload.WithString("ProvisioningStatus", DeviceStatusMapper::GetNameForDeviceStatus(m_provisioningStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
