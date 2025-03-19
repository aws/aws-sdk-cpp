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

LoRaWANDeviceMetadata::LoRaWANDeviceMetadata(JsonView jsonValue)
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
  if(jsonValue.ValueExists("PublicGateways"))
  {
    Aws::Utils::Array<JsonView> publicGatewaysJsonList = jsonValue.GetArray("PublicGateways");
    for(unsigned publicGatewaysIndex = 0; publicGatewaysIndex < publicGatewaysJsonList.GetLength(); ++publicGatewaysIndex)
    {
      m_publicGateways.push_back(publicGatewaysJsonList[publicGatewaysIndex].AsObject());
    }
    m_publicGatewaysHasBeenSet = true;
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

  if(m_publicGatewaysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> publicGatewaysJsonList(m_publicGateways.size());
   for(unsigned publicGatewaysIndex = 0; publicGatewaysIndex < publicGatewaysJsonList.GetLength(); ++publicGatewaysIndex)
   {
     publicGatewaysJsonList[publicGatewaysIndex].AsObject(m_publicGateways[publicGatewaysIndex].Jsonize());
   }
   payload.WithArray("PublicGateways", std::move(publicGatewaysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
