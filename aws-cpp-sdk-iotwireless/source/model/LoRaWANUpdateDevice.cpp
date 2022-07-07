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
    m_serviceProfileIdHasBeenSet(false),
    m_abpV1_1HasBeenSet(false),
    m_abpV1_0_xHasBeenSet(false),
    m_fPortsHasBeenSet(false)
{
}

LoRaWANUpdateDevice::LoRaWANUpdateDevice(JsonView jsonValue) : 
    m_deviceProfileIdHasBeenSet(false),
    m_serviceProfileIdHasBeenSet(false),
    m_abpV1_1HasBeenSet(false),
    m_abpV1_0_xHasBeenSet(false),
    m_fPortsHasBeenSet(false)
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

  if(jsonValue.ValueExists("AbpV1_1"))
  {
    m_abpV1_1 = jsonValue.GetObject("AbpV1_1");

    m_abpV1_1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("AbpV1_0_x"))
  {
    m_abpV1_0_x = jsonValue.GetObject("AbpV1_0_x");

    m_abpV1_0_xHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FPorts"))
  {
    m_fPorts = jsonValue.GetObject("FPorts");

    m_fPortsHasBeenSet = true;
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

  if(m_abpV1_1HasBeenSet)
  {
   payload.WithObject("AbpV1_1", m_abpV1_1.Jsonize());

  }

  if(m_abpV1_0_xHasBeenSet)
  {
   payload.WithObject("AbpV1_0_x", m_abpV1_0_x.Jsonize());

  }

  if(m_fPortsHasBeenSet)
  {
   payload.WithObject("FPorts", m_fPorts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
