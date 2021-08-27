/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANListDevice.h>
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

LoRaWANListDevice::LoRaWANListDevice() : 
    m_devEuiHasBeenSet(false)
{
}

LoRaWANListDevice::LoRaWANListDevice(JsonView jsonValue) : 
    m_devEuiHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANListDevice& LoRaWANListDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DevEui"))
  {
    m_devEui = jsonValue.GetString("DevEui");

    m_devEuiHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANListDevice::Jsonize() const
{
  JsonValue payload;

  if(m_devEuiHasBeenSet)
  {
   payload.WithString("DevEui", m_devEui);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
