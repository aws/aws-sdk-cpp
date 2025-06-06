﻿/**
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
   * <p>Object for LoRaWAN join resource type event configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANJoinResourceTypeEventConfiguration">AWS
   * API Reference</a></p>
   */
  class LoRaWANJoinResourceTypeEventConfiguration
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANJoinResourceTypeEventConfiguration() = default;
    AWS_IOTWIRELESS_API LoRaWANJoinResourceTypeEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANJoinResourceTypeEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Denotes whether the wireless device join event topic is enabled or
     * disabled.</p>
     */
    inline EventNotificationTopicStatus GetWirelessDeviceEventTopic() const { return m_wirelessDeviceEventTopic; }
    inline bool WirelessDeviceEventTopicHasBeenSet() const { return m_wirelessDeviceEventTopicHasBeenSet; }
    inline void SetWirelessDeviceEventTopic(EventNotificationTopicStatus value) { m_wirelessDeviceEventTopicHasBeenSet = true; m_wirelessDeviceEventTopic = value; }
    inline LoRaWANJoinResourceTypeEventConfiguration& WithWirelessDeviceEventTopic(EventNotificationTopicStatus value) { SetWirelessDeviceEventTopic(value); return *this;}
    ///@}
  private:

    EventNotificationTopicStatus m_wirelessDeviceEventTopic{EventNotificationTopicStatus::NOT_SET};
    bool m_wirelessDeviceEventTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
