/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANDeviceMetadata.h>
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

LoRaWANDeviceMetadata::LoRaWANDeviceMetadata() : 
    m_devEuiHasBeenSet(false),
    m_fPort(0),
    m_fPortHasBeenSet(false),
    m_dataRate(0),
    m_dataRateHasBeenSet(false),
    m_frequency(0),
    m_frequencyHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_gatewaysHasBeenSet(false)
{
}

LoRaWANDeviceMetadata::LoRaWANDeviceMetadata(JsonView jsonValue) : 
    m_devEuiHasBeenSet(false),
    m_fPort(0),
    m_fPortHasBeenSet(false),
    m_dataRate(0),
    m_dataRateHasBeenSet(false),
    m_frequency(0),
    m_frequencyHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_gatewaysHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANDeviceMetadata& LoRaWANDeviceMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DevEui"))
  {
    m_devEui = jsonValue.GetString("DevEui");

    m_devEuiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FPort"))
  {
    m_fPort = jsonValue.GetInteger("FPort");

    m_fPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataRate"))
  {
    m_dataRate = jsonValue.GetInteger("DataRate");

    m_dataRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Frequency"))
  {
    m_frequency = jsonValue.GetInteger("Frequency");

    m_frequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetString("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Gateways"))
  {
    Aws::Utils::Array<JsonView> gatewaysJsonList = jsonValue.GetArray("Gateways");
    for(unsigned gatewaysIndex = 0; gatewaysIndex < gatewaysJsonList.GetLength(); ++gatewaysIndex)
    {
      m_gateways.push_back(gatewaysJsonList[gatewaysIndex].AsObject());
    }
    m_gatewaysHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANDeviceMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_devEuiHasBeenSet)
  {
   payload.WithString("DevEui", m_devEui);

  }

  if(m_fPortHasBeenSet)
  {
   payload.WithInteger("FPort", m_fPort);

  }

  if(m_dataRateHasBeenSet)
  {
   payload.WithInteger("DataRate", m_dataRate);

  }

  if(m_frequencyHasBeenSet)
  {
   payload.WithInteger("Frequency", m_frequency);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithString("Timestamp", m_timestamp);

  }

  if(m_gatewaysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gatewaysJsonList(m_gateways.size());
   for(unsigned gatewaysIndex = 0; gatewaysIndex < gatewaysJsonList.GetLength(); ++gatewaysIndex)
   {
     gatewaysJsonList[gatewaysIndex].AsObject(m_gateways[gatewaysIndex].Jsonize());
   }
   payload.WithArray("Gateways", std::move(gatewaysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
