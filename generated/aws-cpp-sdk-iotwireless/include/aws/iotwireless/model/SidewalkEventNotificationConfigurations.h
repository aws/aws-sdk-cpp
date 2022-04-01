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
   * <p> SidewalkEventNotificationConfigurations object Event configuration object
   * for Sidewalk related event topics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkEventNotificationConfigurations">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API SidewalkEventNotificationConfigurations
  {
  public:
    SidewalkEventNotificationConfigurations();
    SidewalkEventNotificationConfigurations(Aws::Utils::Json::JsonView jsonValue);
    SidewalkEventNotificationConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enum to denote whether amazon id event topic is enabled or disabled.</p>
     */
    inline const EventNotificationTopicStatus& GetAmazonIdEventTopic() const{ return m_amazonIdEventTopic; }

    /**
     * <p>Enum to denote whether amazon id event topic is enabled or disabled.</p>
     */
    inline bool AmazonIdEventTopicHasBeenSet() const { return m_amazonIdEventTopicHasBeenSet; }

    /**
     * <p>Enum to denote whether amazon id event topic is enabled or disabled.</p>
     */
    inline void SetAmazonIdEventTopic(const EventNotificationTopicStatus& value) { m_amazonIdEventTopicHasBeenSet = true; m_amazonIdEventTopic = value; }

    /**
     * <p>Enum to denote whether amazon id event topic is enabled or disabled.</p>
     */
    inline void SetAmazonIdEventTopic(EventNotificationTopicStatus&& value) { m_amazonIdEventTopicHasBeenSet = true; m_amazonIdEventTopic = std::move(value); }

    /**
     * <p>Enum to denote whether amazon id event topic is enabled or disabled.</p>
     */
    inline SidewalkEventNotificationConfigurations& WithAmazonIdEventTopic(const EventNotificationTopicStatus& value) { SetAmazonIdEventTopic(value); return *this;}

    /**
     * <p>Enum to denote whether amazon id event topic is enabled or disabled.</p>
     */
    inline SidewalkEventNotificationConfigurations& WithAmazonIdEventTopic(EventNotificationTopicStatus&& value) { SetAmazonIdEventTopic(std::move(value)); return *this;}

  private:

    EventNotificationTopicStatus m_amazonIdEventTopic;
    bool m_amazonIdEventTopicHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
