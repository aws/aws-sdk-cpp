/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/JoinEventConfiguration.h>
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

JoinEventConfiguration::JoinEventConfiguration() : 
    m_loRaWANHasBeenSet(false),
    m_wirelessDeviceIdEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_wirelessDeviceIdEventTopicHasBeenSet(false)
{
}

JoinEventConfiguration::JoinEventConfiguration(JsonView jsonValue) : 
    m_loRaWANHasBeenSet(false),
    m_wirelessDeviceIdEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_wirelessDeviceIdEventTopicHasBeenSet(false)
{
  *this = jsonValue;
}

JoinEventConfiguration& JoinEventConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LoRaWAN"))
  {
    m_loRaWAN = jsonValue.GetObject("LoRaWAN");

    m_loRaWANHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WirelessDeviceIdEventTopic"))
  {
    m_wirelessDeviceIdEventTopic = EventNotificationTopicStatusMapper::GetEventNotificationTopicStatusForName(jsonValue.GetString("WirelessDeviceIdEventTopic"));

    m_wirelessDeviceIdEventTopicHasBeenSet = true;
  }

  return *this;
}

JsonValue JoinEventConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_loRaWANHasBeenSet)
  {
   payload.WithObject("LoRaWAN", m_loRaWAN.Jsonize());

  }

  if(m_wirelessDeviceIdEventTopicHasBeenSet)
  {
   payload.WithString("WirelessDeviceIdEventTopic", EventNotificationTopicStatusMapper::GetNameForEventNotificationTopicStatus(m_wirelessDeviceIdEventTopic));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
