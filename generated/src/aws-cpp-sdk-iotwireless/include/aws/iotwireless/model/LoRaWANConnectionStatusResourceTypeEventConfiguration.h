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
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANConnectionStatusResourceTypeEventConfiguration">AWS
   * API Reference</a></p>
   */
  class LoRaWANConnectionStatusResourceTypeEventConfiguration
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANConnectionStatusResourceTypeEventConfiguration();
    AWS_IOTWIRELESS_API LoRaWANConnectionStatusResourceTypeEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANConnectionStatusResourceTypeEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Denotes whether the wireless gateway connection status event topic is enabled
     * or disabled.</p>
     */
    inline const EventNotificationTopicStatus& GetWirelessGatewayEventTopic() const{ return m_wirelessGatewayEventTopic; }

    /**
     * <p>Denotes whether the wireless gateway connection status event topic is enabled
     * or disabled.</p>
     */
    inline bool WirelessGatewayEventTopicHasBeenSet() const { return m_wirelessGatewayEventTopicHasBeenSet; }

    /**
     * <p>Denotes whether the wireless gateway connection status event topic is enabled
     * or disabled.</p>
     */
    inline void SetWirelessGatewayEventTopic(const EventNotificationTopicStatus& value) { m_wirelessGatewayEventTopicHasBeenSet = true; m_wirelessGatewayEventTopic = value; }

    /**
     * <p>Denotes whether the wireless gateway connection status event topic is enabled
     * or disabled.</p>
     */
    inline void SetWirelessGatewayEventTopic(EventNotificationTopicStatus&& value) { m_wirelessGatewayEventTopicHasBeenSet = true; m_wirelessGatewayEventTopic = std::move(value); }

    /**
     * <p>Denotes whether the wireless gateway connection status event topic is enabled
     * or disabled.</p>
     */
    inline LoRaWANConnectionStatusResourceTypeEventConfiguration& WithWirelessGatewayEventTopic(const EventNotificationTopicStatus& value) { SetWirelessGatewayEventTopic(value); return *this;}

    /**
     * <p>Denotes whether the wireless gateway connection status event topic is enabled
     * or disabled.</p>
     */
    inline LoRaWANConnectionStatusResourceTypeEventConfiguration& WithWirelessGatewayEventTopic(EventNotificationTopicStatus&& value) { SetWirelessGatewayEventTopic(std::move(value)); return *this;}

  private:

    EventNotificationTopicStatus m_wirelessGatewayEventTopic;
    bool m_wirelessGatewayEventTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
