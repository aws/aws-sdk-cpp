/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANGatewayMetadata.h>
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

LoRaWANGatewayMetadata::LoRaWANGatewayMetadata() : 
    m_gatewayEuiHasBeenSet(false),
    m_snr(0.0),
    m_snrHasBeenSet(false),
    m_rssi(0.0),
    m_rssiHasBeenSet(false)
{
}

LoRaWANGatewayMetadata::LoRaWANGatewayMetadata(JsonView jsonValue) : 
    m_gatewayEuiHasBeenSet(false),
    m_snr(0.0),
    m_snrHasBeenSet(false),
    m_rssi(0.0),
    m_rssiHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANGatewayMetadata& LoRaWANGatewayMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GatewayEui"))
  {
    m_gatewayEui = jsonValue.GetString("GatewayEui");

    m_gatewayEuiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Snr"))
  {
    m_snr = jsonValue.GetDouble("Snr");

    m_snrHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rssi"))
  {
    m_rssi = jsonValue.GetDouble("Rssi");

    m_rssiHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANGatewayMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayEuiHasBeenSet)
  {
   payload.WithString("GatewayEui", m_gatewayEui);

  }

  if(m_snrHasBeenSet)
  {
   payload.WithDouble("Snr", m_snr);

  }

  if(m_rssiHasBeenSet)
  {
   payload.WithDouble("Rssi", m_rssi);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
