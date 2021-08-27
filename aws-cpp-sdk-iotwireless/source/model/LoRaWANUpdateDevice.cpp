/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANUpdateDevice.h>
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

LoRaWANUpdateDevice::LoRaWANUpdateDevice() : 
    m_deviceProfileIdHasBeenSet(false),
    m_serviceProfileIdHasBeenSet(false)
{
}

LoRaWANUpdateDevice::LoRaWANUpdateDevice(JsonView jsonValue) : 
    m_deviceProfileIdHasBeenSet(false),
    m_serviceProfileIdHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANUpdateDevice& LoRaWANUpdateDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceProfileId"))
  {
    m_deviceProfileId = jsonValue.GetString("DeviceProfileId");

    m_deviceProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceProfileId"))
  {
    m_serviceProfileId = jsonValue.GetString("ServiceProfileId");

    m_serviceProfileIdHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANUpdateDevice::Jsonize() const
{
  JsonValue payload;

  if(m_deviceProfileIdHasBeenSet)
  {
   payload.WithString("DeviceProfileId", m_deviceProfileId);

  }

  if(m_serviceProfileIdHasBeenSet)
  {
   payload.WithString("ServiceProfileId", m_serviceProfileId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
