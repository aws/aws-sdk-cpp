/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkCreateWirelessDevice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

SidewalkCreateWirelessDevice::SidewalkCreateWirelessDevice() : 
    m_deviceProfileIdHasBeenSet(false)
{
}

SidewalkCreateWirelessDevice::SidewalkCreateWirelessDevice(JsonView jsonValue) : 
    m_deviceProfileIdHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkCreateWirelessDevice& SidewalkCreateWirelessDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceProfileId"))
  {
    m_deviceProfileId = jsonValue.GetString("DeviceProfileId");

    m_deviceProfileIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkCreateWirelessDevice::Jsonize() const
{
  JsonValue payload;

  if(m_deviceProfileIdHasBeenSet)
  {
   payload.WithString("DeviceProfileId", m_deviceProfileId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
