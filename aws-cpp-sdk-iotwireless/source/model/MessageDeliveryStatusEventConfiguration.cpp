/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/MessageDeliveryStatusEventConfiguration.h>
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

MessageDeliveryStatusEventConfiguration::MessageDeliveryStatusEventConfiguration() : 
    m_sidewalkHasBeenSet(false),
    m_wirelessDeviceIdEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_wirelessDeviceIdEventTopicHasBeenSet(false)
{
}

MessageDeliveryStatusEventConfiguration::MessageDeliveryStatusEventConfiguration(JsonView jsonValue) : 
    m_sidewalkHasBeenSet(false),
    m_wirelessDeviceIdEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_wirelessDeviceIdEventTopicHasBeenSet(false)
{
  *this = jsonValue;
}

MessageDeliveryStatusEventConfiguration& MessageDeliveryStatusEventConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Sidewalk"))
  {
    m_sidewalk = jsonValue.GetObject("Sidewalk");

    m_sidewalkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WirelessDeviceIdEventTopic"))
  {
    m_wirelessDeviceIdEventTopic = EventNotificationTopicStatusMapper::GetEventNotificationTopicStatusForName(jsonValue.GetString("WirelessDeviceIdEventTopic"));

    m_wirelessDeviceIdEventTopicHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageDeliveryStatusEventConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sidewalkHasBeenSet)
  {
   payload.WithObject("Sidewalk", m_sidewalk.Jsonize());

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
