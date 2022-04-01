/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANJoinEventNotificationConfigurations.h>
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

LoRaWANJoinEventNotificationConfigurations::LoRaWANJoinEventNotificationConfigurations() : 
    m_devEuiEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_devEuiEventTopicHasBeenSet(false)
{
}

LoRaWANJoinEventNotificationConfigurations::LoRaWANJoinEventNotificationConfigurations(JsonView jsonValue) : 
    m_devEuiEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_devEuiEventTopicHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANJoinEventNotificationConfigurations& LoRaWANJoinEventNotificationConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DevEuiEventTopic"))
  {
    m_devEuiEventTopic = EventNotificationTopicStatusMapper::GetEventNotificationTopicStatusForName(jsonValue.GetString("DevEuiEventTopic"));

    m_devEuiEventTopicHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANJoinEventNotificationConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_devEuiEventTopicHasBeenSet)
  {
   payload.WithString("DevEuiEventTopic", EventNotificationTopicStatusMapper::GetNameForEventNotificationTopicStatus(m_devEuiEventTopic));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
