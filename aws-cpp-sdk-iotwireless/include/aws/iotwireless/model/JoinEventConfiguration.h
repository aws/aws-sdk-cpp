/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/LoRaWANJoinEventNotificationConfigurations.h>
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
   * <p>Join event configuration object for enabling or disabling
   * topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/JoinEventConfiguration">AWS
   * API Reference</a></p>
   */
  class JoinEventConfiguration
  {
  public:
    AWS_IOTWIRELESS_API JoinEventConfiguration();
    AWS_IOTWIRELESS_API JoinEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API JoinEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Join event configuration object for enabling or disabling LoRaWAN related
     * event topics.</p>
     */
    inline const LoRaWANJoinEventNotificationConfigurations& GetLoRaWAN() const{ return m_loRaWAN; }

    /**
     * <p>Join event configuration object for enabling or disabling LoRaWAN related
     * event topics.</p>
     */
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    /**
     * <p>Join event configuration object for enabling or disabling LoRaWAN related
     * event topics.</p>
     */
    inline void SetLoRaWAN(const LoRaWANJoinEventNotificationConfigurations& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    /**
     * <p>Join event configuration object for enabling or disabling LoRaWAN related
     * event topics.</p>
     */
    inline void SetLoRaWAN(LoRaWANJoinEventNotificationConfigurations&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    /**
     * <p>Join event configuration object for enabling or disabling LoRaWAN related
     * event topics.</p>
     */
    inline JoinEventConfiguration& WithLoRaWAN(const LoRaWANJoinEventNotificationConfigurations& value) { SetLoRaWAN(value); return *this;}

    /**
     * <p>Join event configuration object for enabling or disabling LoRaWAN related
     * event topics.</p>
     */
    inline JoinEventConfiguration& WithLoRaWAN(LoRaWANJoinEventNotificationConfigurations&& value) { SetLoRaWAN(std::move(value)); return *this;}


    /**
     * <p>Denotes whether the wireless device ID join event topic is enabled or
     * disabled.</p>
     */
    inline const EventNotificationTopicStatus& GetWirelessDeviceIdEventTopic() const{ return m_wirelessDeviceIdEventTopic; }

    /**
     * <p>Denotes whether the wireless device ID join event topic is enabled or
     * disabled.</p>
     */
    inline bool WirelessDeviceIdEventTopicHasBeenSet() const { return m_wirelessDeviceIdEventTopicHasBeenSet; }

    /**
     * <p>Denotes whether the wireless device ID join event topic is enabled or
     * disabled.</p>
     */
    inline void SetWirelessDeviceIdEventTopic(const EventNotificationTopicStatus& value) { m_wirelessDeviceIdEventTopicHasBeenSet = true; m_wirelessDeviceIdEventTopic = value; }

    /**
     * <p>Denotes whether the wireless device ID join event topic is enabled or
     * disabled.</p>
     */
    inline void SetWirelessDeviceIdEventTopic(EventNotificationTopicStatus&& value) { m_wirelessDeviceIdEventTopicHasBeenSet = true; m_wirelessDeviceIdEventTopic = std::move(value); }

    /**
     * <p>Denotes whether the wireless device ID join event topic is enabled or
     * disabled.</p>
     */
    inline JoinEventConfiguration& WithWirelessDeviceIdEventTopic(const EventNotificationTopicStatus& value) { SetWirelessDeviceIdEventTopic(value); return *this;}

    /**
     * <p>Denotes whether the wireless device ID join event topic is enabled or
     * disabled.</p>
     */
    inline JoinEventConfiguration& WithWirelessDeviceIdEventTopic(EventNotificationTopicStatus&& value) { SetWirelessDeviceIdEventTopic(std::move(value)); return *this;}

  private:

    LoRaWANJoinEventNotificationConfigurations m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    EventNotificationTopicStatus m_wirelessDeviceIdEventTopic;
    bool m_wirelessDeviceIdEventTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
