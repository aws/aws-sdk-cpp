/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ConnectionStatusEventConfiguration.h>
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

ConnectionStatusEventConfiguration::ConnectionStatusEventConfiguration() : 
    m_loRaWANHasBeenSet(false),
    m_wirelessGatewayIdEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_wirelessGatewayIdEventTopicHasBeenSet(false)
{
}

ConnectionStatusEventConfiguration::ConnectionStatusEventConfiguration(JsonView jsonValue) : 
    m_loRaWANHasBeenSet(false),
    m_wirelessGatewayIdEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_wirelessGatewayIdEventTopicHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionStatusEventConfiguration& ConnectionStatusEventConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LoRaWAN"))
  {
    m_loRaWAN = jsonValue.GetObject("LoRaWAN");

    m_loRaWANHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WirelessGatewayIdEventTopic"))
  {
    m_wirelessGatewayIdEventTopic = EventNotificationTopicStatusMapper::GetEventNotificationTopicStatusForName(jsonValue.GetString("WirelessGatewayIdEventTopic"));

    m_wirelessGatewayIdEventTopicHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionStatusEventConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_loRaWANHasBeenSet)
  {
   payload.WithObject("LoRaWAN", m_loRaWAN.Jsonize());

  }

  if(m_wirelessGatewayIdEventTopicHasBeenSet)
  {
   payload.WithString("WirelessGatewayIdEventTopic", EventNotificationTopicStatusMapper::GetNameForEventNotificationTopicStatus(m_wirelessGatewayIdEventTopic));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
