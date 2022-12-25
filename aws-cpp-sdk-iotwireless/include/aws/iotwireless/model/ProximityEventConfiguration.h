/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SidewalkEventNotificationConfigurations.h>
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
   * <p>Proximity event configuration object for enabling and disabling relevant
   * topics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ProximityEventConfiguration">AWS
   * API Reference</a></p>
   */
  class ProximityEventConfiguration
  {
  public:
    AWS_IOTWIRELESS_API ProximityEventConfiguration();
    AWS_IOTWIRELESS_API ProximityEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API ProximityEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Proximity event configuration object for enabling or disabling Sidewalk
     * related event topics.</p>
     */
    inline const SidewalkEventNotificationConfigurations& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>Proximity event configuration object for enabling or disabling Sidewalk
     * related event topics.</p>
     */
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }

    /**
     * <p>Proximity event configuration object for enabling or disabling Sidewalk
     * related event topics.</p>
     */
    inline void SetSidewalk(const SidewalkEventNotificationConfigurations& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }

    /**
     * <p>Proximity event configuration object for enabling or disabling Sidewalk
     * related event topics.</p>
     */
    inline void SetSidewalk(SidewalkEventNotificationConfigurations&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }

    /**
     * <p>Proximity event configuration object for enabling or disabling Sidewalk
     * related event topics.</p>
     */
    inline ProximityEventConfiguration& WithSidewalk(const SidewalkEventNotificationConfigurations& value) { SetSidewalk(value); return *this;}

    /**
     * <p>Proximity event configuration object for enabling or disabling Sidewalk
     * related event topics.</p>
     */
    inline ProximityEventConfiguration& WithSidewalk(SidewalkEventNotificationConfigurations&& value) { SetSidewalk(std::move(value)); return *this;}


    /**
     * <p>Denotes whether the wireless device ID proximity event topic is enabled or
     * disabled.</p>
     */
    inline const EventNotificationTopicStatus& GetWirelessDeviceIdEventTopic() const{ return m_wirelessDeviceIdEventTopic; }

    /**
     * <p>Denotes whether the wireless device ID proximity event topic is enabled or
     * disabled.</p>
     */
    inline bool WirelessDeviceIdEventTopicHasBeenSet() const { return m_wirelessDeviceIdEventTopicHasBeenSet; }

    /**
     * <p>Denotes whether the wireless device ID proximity event topic is enabled or
     * disabled.</p>
     */
    inline void SetWirelessDeviceIdEventTopic(const EventNotificationTopicStatus& value) { m_wirelessDeviceIdEventTopicHasBeenSet = true; m_wirelessDeviceIdEventTopic = value; }

    /**
     * <p>Denotes whether the wireless device ID proximity event topic is enabled or
     * disabled.</p>
     */
    inline void SetWirelessDeviceIdEventTopic(EventNotificationTopicStatus&& value) { m_wirelessDeviceIdEventTopicHasBeenSet = true; m_wirelessDeviceIdEventTopic = std::move(value); }

    /**
     * <p>Denotes whether the wireless device ID proximity event topic is enabled or
     * disabled.</p>
     */
    inline ProximityEventConfiguration& WithWirelessDeviceIdEventTopic(const EventNotificationTopicStatus& value) { SetWirelessDeviceIdEventTopic(value); return *this;}

    /**
     * <p>Denotes whether the wireless device ID proximity event topic is enabled or
     * disabled.</p>
     */
    inline ProximityEventConfiguration& WithWirelessDeviceIdEventTopic(EventNotificationTopicStatus&& value) { SetWirelessDeviceIdEventTopic(std::move(value)); return *this;}

  private:

    SidewalkEventNotificationConfigurations m_sidewalk;
    bool m_sidewalkHasBeenSet = false;

    EventNotificationTopicStatus m_wirelessDeviceIdEventTopic;
    bool m_wirelessDeviceIdEventTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
