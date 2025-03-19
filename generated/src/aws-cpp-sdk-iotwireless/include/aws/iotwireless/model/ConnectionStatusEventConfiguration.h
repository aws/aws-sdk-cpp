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
  class ConnectionStatusEventConfiguration
  {
  public:
    AWS_IOTWIRELESS_API ConnectionStatusEventConfiguration() = default;
    AWS_IOTWIRELESS_API ConnectionStatusEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API ConnectionStatusEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Connection status event configuration object for enabling or disabling
     * LoRaWAN related event topics.</p>
     */
    inline const LoRaWANConnectionStatusEventNotificationConfigurations& GetLoRaWAN() const { return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    template<typename LoRaWANT = LoRaWANConnectionStatusEventNotificationConfigurations>
    void SetLoRaWAN(LoRaWANT&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::forward<LoRaWANT>(value); }
    template<typename LoRaWANT = LoRaWANConnectionStatusEventNotificationConfigurations>
    ConnectionStatusEventConfiguration& WithLoRaWAN(LoRaWANT&& value) { SetLoRaWAN(std::forward<LoRaWANT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Denotes whether the wireless gateway ID connection status event topic is
     * enabled or disabled.</p>
     */
    inline EventNotificationTopicStatus GetWirelessGatewayIdEventTopic() const { return m_wirelessGatewayIdEventTopic; }
    inline bool WirelessGatewayIdEventTopicHasBeenSet() const { return m_wirelessGatewayIdEventTopicHasBeenSet; }
    inline void SetWirelessGatewayIdEventTopic(EventNotificationTopicStatus value) { m_wirelessGatewayIdEventTopicHasBeenSet = true; m_wirelessGatewayIdEventTopic = value; }
    inline ConnectionStatusEventConfiguration& WithWirelessGatewayIdEventTopic(EventNotificationTopicStatus value) { SetWirelessGatewayIdEventTopic(value); return *this;}
    ///@}
  private:

    LoRaWANConnectionStatusEventNotificationConfigurations m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    EventNotificationTopicStatus m_wirelessGatewayIdEventTopic{EventNotificationTopicStatus::NOT_SET};
    bool m_wirelessGatewayIdEventTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
