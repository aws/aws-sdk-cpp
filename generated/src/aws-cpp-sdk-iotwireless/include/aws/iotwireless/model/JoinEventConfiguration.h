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
    AWS_IOTWIRELESS_API JoinEventConfiguration() = default;
    AWS_IOTWIRELESS_API JoinEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API JoinEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Join event configuration object for enabling or disabling LoRaWAN related
     * event topics.</p>
     */
    inline const LoRaWANJoinEventNotificationConfigurations& GetLoRaWAN() const { return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    template<typename LoRaWANT = LoRaWANJoinEventNotificationConfigurations>
    void SetLoRaWAN(LoRaWANT&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::forward<LoRaWANT>(value); }
    template<typename LoRaWANT = LoRaWANJoinEventNotificationConfigurations>
    JoinEventConfiguration& WithLoRaWAN(LoRaWANT&& value) { SetLoRaWAN(std::forward<LoRaWANT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Denotes whether the wireless device ID join event topic is enabled or
     * disabled.</p>
     */
    inline EventNotificationTopicStatus GetWirelessDeviceIdEventTopic() const { return m_wirelessDeviceIdEventTopic; }
    inline bool WirelessDeviceIdEventTopicHasBeenSet() const { return m_wirelessDeviceIdEventTopicHasBeenSet; }
    inline void SetWirelessDeviceIdEventTopic(EventNotificationTopicStatus value) { m_wirelessDeviceIdEventTopicHasBeenSet = true; m_wirelessDeviceIdEventTopic = value; }
    inline JoinEventConfiguration& WithWirelessDeviceIdEventTopic(EventNotificationTopicStatus value) { SetWirelessDeviceIdEventTopic(value); return *this;}
    ///@}
  private:

    LoRaWANJoinEventNotificationConfigurations m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    EventNotificationTopicStatus m_wirelessDeviceIdEventTopic{EventNotificationTopicStatus::NOT_SET};
    bool m_wirelessDeviceIdEventTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
