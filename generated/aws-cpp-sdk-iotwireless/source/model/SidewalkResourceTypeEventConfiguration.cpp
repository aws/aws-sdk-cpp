/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkResourceTypeEventConfiguration.h>
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

SidewalkResourceTypeEventConfiguration::SidewalkResourceTypeEventConfiguration() : 
    m_wirelessDeviceEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_wirelessDeviceEventTopicHasBeenSet(false)
{
}

SidewalkResourceTypeEventConfiguration::SidewalkResourceTypeEventConfiguration(JsonView jsonValue) : 
    m_wirelessDeviceEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_wirelessDeviceEventTopicHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkResourceTypeEventConfiguration& SidewalkResourceTypeEventConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WirelessDeviceEventTopic"))
  {
    m_wirelessDeviceEventTopic = EventNotificationTopicStatusMapper::GetEventNotificationTopicStatusForName(jsonValue.GetString("WirelessDeviceEventTopic"));

    m_wirelessDeviceEventTopicHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkResourceTypeEventConfiguration::Jsonize() const
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
