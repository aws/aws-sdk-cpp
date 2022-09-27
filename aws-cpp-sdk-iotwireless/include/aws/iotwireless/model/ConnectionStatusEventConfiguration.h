/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/LoRaWANConnectionStatusEventNotificationConfigurations.h>
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
   * <p>Connection status event configuration object for enabling or disabling
   * topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ConnectionStatusEventConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API ConnectionStatusEventConfiguration
  {
  public:
    ConnectionStatusEventConfiguration();
    ConnectionStatusEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ConnectionStatusEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Connection status event configuration object for enabling or disabling
     * LoRaWAN related event topics.</p>
     */
    inline const LoRaWANConnectionStatusEventNotificationConfigurations& GetLoRaWAN() const{ return m_loRaWAN; }

    /**
     * <p>Connection status event configuration object for enabling or disabling
     * LoRaWAN related event topics.</p>
     */
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    /**
     * <p>Connection status event configuration object for enabling or disabling
     * LoRaWAN related event topics.</p>
     */
    inline void SetLoRaWAN(const LoRaWANConnectionStatusEventNotificationConfigurations& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    /**
     * <p>Connection status event configuration object for enabling or disabling
     * LoRaWAN related event topics.</p>
     */
    inline void SetLoRaWAN(LoRaWANConnectionStatusEventNotificationConfigurations&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    /**
     * <p>Connection status event configuration object for enabling or disabling
     * LoRaWAN related event topics.</p>
     */
    inline ConnectionStatusEventConfiguration& WithLoRaWAN(const LoRaWANConnectionStatusEventNotificationConfigurations& value) { SetLoRaWAN(value); return *this;}

    /**
     * <p>Connection status event configuration object for enabling or disabling
     * LoRaWAN related event topics.</p>
     */
    inline ConnectionStatusEventConfiguration& WithLoRaWAN(LoRaWANConnectionStatusEventNotificationConfigurations&& value) { SetLoRaWAN(std::move(value)); return *this;}


    /**
     * <p>Enum to denote whether the wireless gateway id connection status event topic
     * is enabled or disabled .</p>
     */
    inline const EventNotificationTopicStatus& GetWirelessGatewayIdEventTopic() const{ return m_wirelessGatewayIdEventTopic; }

    /**
     * <p>Enum to denote whether the wireless gateway id connection status event topic
     * is enabled or disabled .</p>
     */
    inline bool WirelessGatewayIdEventTopicHasBeenSet() const { return m_wirelessGatewayIdEventTopicHasBeenSet; }

    /**
     * <p>Enum to denote whether the wireless gateway id connection status event topic
     * is enabled or disabled .</p>
     */
    inline void SetWirelessGatewayIdEventTopic(const EventNotificationTopicStatus& value) { m_wirelessGatewayIdEventTopicHasBeenSet = true; m_wirelessGatewayIdEventTopic = value; }

    /**
     * <p>Enum to denote whether the wireless gateway id connection status event topic
     * is enabled or disabled .</p>
     */
    inline void SetWirelessGatewayIdEventTopic(EventNotificationTopicStatus&& value) { m_wirelessGatewayIdEventTopicHasBeenSet = true; m_wirelessGatewayIdEventTopic = std::move(value); }

    /**
     * <p>Enum to denote whether the wireless gateway id connection status event topic
     * is enabled or disabled .</p>
     */
    inline ConnectionStatusEventConfiguration& WithWirelessGatewayIdEventTopic(const EventNotificationTopicStatus& value) { SetWirelessGatewayIdEventTopic(value); return *this;}

    /**
     * <p>Enum to denote whether the wireless gateway id connection status event topic
     * is enabled or disabled .</p>
     */
    inline ConnectionStatusEventConfiguration& WithWirelessGatewayIdEventTopic(EventNotificationTopicStatus&& value) { SetWirelessGatewayIdEventTopic(std::move(value)); return *this;}

  private:

    LoRaWANConnectionStatusEventNotificationConfigurations m_loRaWAN;
    bool m_loRaWANHasBeenSet;

    EventNotificationTopicStatus m_wirelessGatewayIdEventTopic;
    bool m_wirelessGatewayIdEventTopicHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
