/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANJoinResourceTypeEventConfiguration.h>
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

LoRaWANJoinResourceTypeEventConfiguration::LoRaWANJoinResourceTypeEventConfiguration() : 
    m_wirelessDeviceEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_wirelessDeviceEventTopicHasBeenSet(false)
{
}

LoRaWANJoinResourceTypeEventConfiguration::LoRaWANJoinResourceTypeEventConfiguration(JsonView jsonValue) : 
    m_wirelessDeviceEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_wirelessDeviceEventTopicHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANJoinResourceTypeEventConfiguration& LoRaWANJoinResourceTypeEventConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WirelessDeviceEventTopic"))
  {
    m_wirelessDeviceEventTopic = EventNotificationTopicStatusMapper::GetEventNotificationTopicStatusForName(jsonValue.GetString("WirelessDeviceEventTopic"));

    m_wirelessDeviceEventTopicHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANJoinResourceTypeEventConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_wirelessDeviceEventTopicHasBeenSet)
  {
   payload.WithString("WirelessDeviceEventTopic", EventNotificationTopicStatusMapper::GetNameForEventNotificationTopicStatus(m_wirelessDeviceEventTopic));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
