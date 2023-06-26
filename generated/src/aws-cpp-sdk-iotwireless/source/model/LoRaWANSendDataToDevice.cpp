/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANSendDataToDevice.h>
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

LoRaWANSendDataToDevice::LoRaWANSendDataToDevice() : 
    m_fPort(0),
    m_fPortHasBeenSet(false),
    m_participatingGatewaysHasBeenSet(false)
{
}

LoRaWANSendDataToDevice::LoRaWANSendDataToDevice(JsonView jsonValue) : 
    m_fPort(0),
    m_fPortHasBeenSet(false),
    m_participatingGatewaysHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANSendDataToDevice& LoRaWANSendDataToDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FPort"))
  {
    m_fPort = jsonValue.GetInteger("FPort");

    m_fPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParticipatingGateways"))
  {
    m_participatingGateways = jsonValue.GetObject("ParticipatingGateways");

    m_participatingGatewaysHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANSendDataToDevice::Jsonize() const
{
  JsonValue payload;

  if(m_fPortHasBeenSet)
  {
   payload.WithInteger("FPort", m_fPort);

  }

  if(m_participatingGatewaysHasBeenSet)
  {
   payload.WithObject("ParticipatingGateways", m_participatingGateways.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
