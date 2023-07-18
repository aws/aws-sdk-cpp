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
   * <p>Device registration state event configuration object for enabling and
   * disabling relevant topics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeviceRegistrationStateEventConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API DeviceRegistrationStateEventConfiguration
  {
  public:
    DeviceRegistrationStateEventConfiguration();
    DeviceRegistrationStateEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DeviceRegistrationStateEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Device registration state event configuration object for enabling or
     * disabling Sidewalk related event topics.</p>
     */
    inline const SidewalkEventNotificationConfigurations& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>Device registration state event configuration object for enabling or
     * disabling Sidewalk related event topics.</p>
     */
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }

    /**
     * <p>Device registration state event configuration object for enabling or
     * disabling Sidewalk related event topics.</p>
     */
    inline void SetSidewalk(const SidewalkEventNotificationConfigurations& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }

    /**
     * <p>Device registration state event configuration object for enabling or
     * disabling Sidewalk related event topics.</p>
     */
    inline void SetSidewalk(SidewalkEventNotificationConfigurations&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }

    /**
     * <p>Device registration state event configuration object for enabling or
     * disabling Sidewalk related event topics.</p>
     */
    inline DeviceRegistrationStateEventConfiguration& WithSidewalk(const SidewalkEventNotificationConfigurations& value) { SetSidewalk(value); return *this;}

    /**
     * <p>Device registration state event configuration object for enabling or
     * disabling Sidewalk related event topics.</p>
     */
    inline DeviceRegistrationStateEventConfiguration& WithSidewalk(SidewalkEventNotificationConfigurations&& value) { SetSidewalk(std::move(value)); return *this;}


    /**
     * <p>Enum to denote whether the wireless device id device registration state event
     * topic is enabled or disabled.</p>
     */
    inline const EventNotificationTopicStatus& GetWirelessDeviceIdEventTopic() const{ return m_wirelessDeviceIdEventTopic; }

    /**
     * <p>Enum to denote whether the wireless device id device registration state event
     * topic is enabled or disabled.</p>
     */
    inline bool WirelessDeviceIdEventTopicHasBeenSet() const { return m_wirelessDeviceIdEventTopicHasBeenSet; }

    /**
     * <p>Enum to denote whether the wireless device id device registration state event
     * topic is enabled or disabled.</p>
     */
    inline void SetWirelessDeviceIdEventTopic(const EventNotificationTopicStatus& value) { m_wirelessDeviceIdEventTopicHasBeenSet = true; m_wirelessDeviceIdEventTopic = value; }

    /**
     * <p>Enum to denote whether the wireless device id device registration state event
     * topic is enabled or disabled.</p>
     */
    inline void SetWirelessDeviceIdEventTopic(EventNotificationTopicStatus&& value) { m_wirelessDeviceIdEventTopicHasBeenSet = true; m_wirelessDeviceIdEventTopic = std::move(value); }

    /**
     * <p>Enum to denote whether the wireless device id device registration state event
     * topic is enabled or disabled.</p>
     */
    inline DeviceRegistrationStateEventConfiguration& WithWirelessDeviceIdEventTopic(const EventNotificationTopicStatus& value) { SetWirelessDeviceIdEventTopic(value); return *this;}

    /**
     * <p>Enum to denote whether the wireless device id device registration state event
     * topic is enabled or disabled.</p>
     */
    inline DeviceRegistrationStateEventConfiguration& WithWirelessDeviceIdEventTopic(EventNotificationTopicStatus&& value) { SetWirelessDeviceIdEventTopic(std::move(value)); return *this;}

  private:

    SidewalkEventNotificationConfigurations m_sidewalk;
    bool m_sidewalkHasBeenSet;

    EventNotificationTopicStatus m_wirelessDeviceIdEventTopic;
    bool m_wirelessDeviceIdEventTopicHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
