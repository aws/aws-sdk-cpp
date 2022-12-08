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
   * <p>Object for LoRaWAN join resource type event configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANJoinEventNotificationConfigurations">AWS
   * API Reference</a></p>
   */
  class LoRaWANJoinEventNotificationConfigurations
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANJoinEventNotificationConfigurations();
    AWS_IOTWIRELESS_API LoRaWANJoinEventNotificationConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANJoinEventNotificationConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Denotes whether the Dev EUI join event topic is enabled or disabled.</p>
     */
    inline const EventNotificationTopicStatus& GetDevEuiEventTopic() const{ return m_devEuiEventTopic; }

    /**
     * <p>Denotes whether the Dev EUI join event topic is enabled or disabled.</p>
     */
    inline bool DevEuiEventTopicHasBeenSet() const { return m_devEuiEventTopicHasBeenSet; }

    /**
     * <p>Denotes whether the Dev EUI join event topic is enabled or disabled.</p>
     */
    inline void SetDevEuiEventTopic(const EventNotificationTopicStatus& value) { m_devEuiEventTopicHasBeenSet = true; m_devEuiEventTopic = value; }

    /**
     * <p>Denotes whether the Dev EUI join event topic is enabled or disabled.</p>
     */
    inline void SetDevEuiEventTopic(EventNotificationTopicStatus&& value) { m_devEuiEventTopicHasBeenSet = true; m_devEuiEventTopic = std::move(value); }

    /**
     * <p>Denotes whether the Dev EUI join event topic is enabled or disabled.</p>
     */
    inline LoRaWANJoinEventNotificationConfigurations& WithDevEuiEventTopic(const EventNotificationTopicStatus& value) { SetDevEuiEventTopic(value); return *this;}

    /**
     * <p>Denotes whether the Dev EUI join event topic is enabled or disabled.</p>
     */
    inline LoRaWANJoinEventNotificationConfigurations& WithDevEuiEventTopic(EventNotificationTopicStatus&& value) { SetDevEuiEventTopic(std::move(value)); return *this;}

  private:

    EventNotificationTopicStatus m_devEuiEventTopic;
    bool m_devEuiEventTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
