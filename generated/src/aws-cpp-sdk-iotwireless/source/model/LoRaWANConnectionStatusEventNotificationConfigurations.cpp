/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANConnectionStatusEventNotificationConfigurations.h>
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

LoRaWANConnectionStatusEventNotificationConfigurations::LoRaWANConnectionStatusEventNotificationConfigurations() : 
    m_gatewayEuiEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_gatewayEuiEventTopicHasBeenSet(false)
{
}

LoRaWANConnectionStatusEventNotificationConfigurations::LoRaWANConnectionStatusEventNotificationConfigurations(JsonView jsonValue) : 
    m_gatewayEuiEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_gatewayEuiEventTopicHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANConnectionStatusEventNotificationConfigurations& LoRaWANConnectionStatusEventNotificationConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GatewayEuiEventTopic"))
  {
    m_gatewayEuiEventTopic = EventNotificationTopicStatusMapper::GetEventNotificationTopicStatusForName(jsonValue.GetString("GatewayEuiEventTopic"));

    m_gatewayEuiEventTopicHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANConnectionStatusEventNotificationConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayEuiEventTopicHasBeenSet)
  {
   payload.WithString("GatewayEuiEventTopic", EventNotificationTopicStatusMapper::GetNameForEventNotificationTopicStatus(m_gatewayEuiEventTopic));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
