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
   * <p> <code>SidewalkEventNotificationConfigurations</code> object, which is the
   * event configuration object for Sidewalk-related event topics.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkEventNotificationConfigurations">AWS
   * API Reference</a></p>
   */
  class SidewalkEventNotificationConfigurations
  {
  public:
    AWS_IOTWIRELESS_API SidewalkEventNotificationConfigurations() = default;
    AWS_IOTWIRELESS_API SidewalkEventNotificationConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkEventNotificationConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Denotes whether the Amazon ID event topic is enabled or disabled.</p>
     */
    inline EventNotificationTopicStatus GetAmazonIdEventTopic() const { return m_amazonIdEventTopic; }
    inline bool AmazonIdEventTopicHasBeenSet() const { return m_amazonIdEventTopicHasBeenSet; }
    inline void SetAmazonIdEventTopic(EventNotificationTopicStatus value) { m_amazonIdEventTopicHasBeenSet = true; m_amazonIdEventTopic = value; }
    inline SidewalkEventNotificationConfigurations& WithAmazonIdEventTopic(EventNotificationTopicStatus value) { SetAmazonIdEventTopic(value); return *this;}
    ///@}
  private:

    EventNotificationTopicStatus m_amazonIdEventTopic{EventNotificationTopicStatus::NOT_SET};
    bool m_amazonIdEventTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
