/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/EventNotificationTopicStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Object for LoRaWAN connection status resource type event
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANConnectionStatusEventNotificationConfigurations">AWS
   * API Reference</a></p>
   */
  class LoRaWANConnectionStatusEventNotificationConfigurations
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANConnectionStatusEventNotificationConfigurations();
    AWS_IOTWIRELESS_API LoRaWANConnectionStatusEventNotificationConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANConnectionStatusEventNotificationConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Denotes whether the gateway EUI connection status event topic is enabled or
     * disabled.</p>
     */
    inline const EventNotificationTopicStatus& GetGatewayEuiEventTopic() const{ return m_gatewayEuiEventTopic; }

    /**
     * <p>Denotes whether the gateway EUI connection status event topic is enabled or
     * disabled.</p>
     */
    inline bool GatewayEuiEventTopicHasBeenSet() const { return m_gatewayEuiEventTopicHasBeenSet; }

    /**
     * <p>Denotes whether the gateway EUI connection status event topic is enabled or
     * disabled.</p>
     */
    inline void SetGatewayEuiEventTopic(const EventNotificationTopicStatus& value) { m_gatewayEuiEventTopicHasBeenSet = true; m_gatewayEuiEventTopic = value; }

    /**
     * <p>Denotes whether the gateway EUI connection status event topic is enabled or
     * disabled.</p>
     */
    inline void SetGatewayEuiEventTopic(EventNotificationTopicStatus&& value) { m_gatewayEuiEventTopicHasBeenSet = true; m_gatewayEuiEventTopic = std::move(value); }

    /**
     * <p>Denotes whether the gateway EUI connection status event topic is enabled or
     * disabled.</p>
     */
    inline LoRaWANConnectionStatusEventNotificationConfigurations& WithGatewayEuiEventTopic(const EventNotificationTopicStatus& value) { SetGatewayEuiEventTopic(value); return *this;}

    /**
     * <p>Denotes whether the gateway EUI connection status event topic is enabled or
     * disabled.</p>
     */
    inline LoRaWANConnectionStatusEventNotificationConfigurations& WithGatewayEuiEventTopic(EventNotificationTopicStatus&& value) { SetGatewayEuiEventTopic(std::move(value)); return *this;}

  private:

    EventNotificationTopicStatus m_gatewayEuiEventTopic;
    bool m_gatewayEuiEventTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
