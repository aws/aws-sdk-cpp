/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANConnectionStatusResourceTypeEventConfiguration.h>
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

LoRaWANConnectionStatusResourceTypeEventConfiguration::LoRaWANConnectionStatusResourceTypeEventConfiguration() : 
    m_wirelessGatewayEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_wirelessGatewayEventTopicHasBeenSet(false)
{
}

LoRaWANConnectionStatusResourceTypeEventConfiguration::LoRaWANConnectionStatusResourceTypeEventConfiguration(JsonView jsonValue) : 
    m_wirelessGatewayEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_wirelessGatewayEventTopicHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANConnectionStatusResourceTypeEventConfiguration& LoRaWANConnectionStatusResourceTypeEventConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WirelessGatewayEventTopic"))
  {
    m_wirelessGatewayEventTopic = EventNotificationTopicStatusMapper::GetEventNotificationTopicStatusForName(jsonValue.GetString("WirelessGatewayEventTopic"));

    m_wirelessGatewayEventTopicHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANConnectionStatusResourceTypeEventConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_wirelessGatewayEventTopicHasBeenSet)
  {
   payload.WithString("WirelessGatewayEventTopic", EventNotificationTopicStatusMapper::GetNameForEventNotificationTopicStatus(m_wirelessGatewayEventTopic));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
