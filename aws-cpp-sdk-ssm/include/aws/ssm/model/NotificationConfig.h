﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/NotificationType.h>
#include <aws/ssm/model/NotificationEvent.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Configurations for sending notifications.</p>
   */
  class AWS_SSM_API NotificationConfig
  {
  public:
    NotificationConfig();
    NotificationConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    NotificationConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>An Amazon Resource Name (ARN) for a Simple Notification Service (SNS) topic.
     * SSM pushes notifications about command status changes to this topic.</p>
     */
    inline const Aws::String& GetNotificationArn() const{ return m_notificationArn; }

    /**
     * <p>An Amazon Resource Name (ARN) for a Simple Notification Service (SNS) topic.
     * SSM pushes notifications about command status changes to this topic.</p>
     */
    inline void SetNotificationArn(const Aws::String& value) { m_notificationArnHasBeenSet = true; m_notificationArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) for a Simple Notification Service (SNS) topic.
     * SSM pushes notifications about command status changes to this topic.</p>
     */
    inline void SetNotificationArn(Aws::String&& value) { m_notificationArnHasBeenSet = true; m_notificationArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) for a Simple Notification Service (SNS) topic.
     * SSM pushes notifications about command status changes to this topic.</p>
     */
    inline void SetNotificationArn(const char* value) { m_notificationArnHasBeenSet = true; m_notificationArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) for a Simple Notification Service (SNS) topic.
     * SSM pushes notifications about command status changes to this topic.</p>
     */
    inline NotificationConfig& WithNotificationArn(const Aws::String& value) { SetNotificationArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) for a Simple Notification Service (SNS) topic.
     * SSM pushes notifications about command status changes to this topic.</p>
     */
    inline NotificationConfig& WithNotificationArn(Aws::String&& value) { SetNotificationArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) for a Simple Notification Service (SNS) topic.
     * SSM pushes notifications about command status changes to this topic.</p>
     */
    inline NotificationConfig& WithNotificationArn(const char* value) { SetNotificationArn(value); return *this;}

    /**
     * <p>The different events for which you can receive notifications. These events
     * include the following: All (events), InProgress, Success, TimedOut, Cancelled,
     * Failed. To learn more about these events, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitor-commands.html">Monitoring
     * Commands</a> in the <i>Amazon Elastic Compute Cloud User Guide </i>.</p>
     */
    inline const Aws::Vector<NotificationEvent>& GetNotificationEvents() const{ return m_notificationEvents; }

    /**
     * <p>The different events for which you can receive notifications. These events
     * include the following: All (events), InProgress, Success, TimedOut, Cancelled,
     * Failed. To learn more about these events, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitor-commands.html">Monitoring
     * Commands</a> in the <i>Amazon Elastic Compute Cloud User Guide </i>.</p>
     */
    inline void SetNotificationEvents(const Aws::Vector<NotificationEvent>& value) { m_notificationEventsHasBeenSet = true; m_notificationEvents = value; }

    /**
     * <p>The different events for which you can receive notifications. These events
     * include the following: All (events), InProgress, Success, TimedOut, Cancelled,
     * Failed. To learn more about these events, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitor-commands.html">Monitoring
     * Commands</a> in the <i>Amazon Elastic Compute Cloud User Guide </i>.</p>
     */
    inline void SetNotificationEvents(Aws::Vector<NotificationEvent>&& value) { m_notificationEventsHasBeenSet = true; m_notificationEvents = value; }

    /**
     * <p>The different events for which you can receive notifications. These events
     * include the following: All (events), InProgress, Success, TimedOut, Cancelled,
     * Failed. To learn more about these events, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitor-commands.html">Monitoring
     * Commands</a> in the <i>Amazon Elastic Compute Cloud User Guide </i>.</p>
     */
    inline NotificationConfig& WithNotificationEvents(const Aws::Vector<NotificationEvent>& value) { SetNotificationEvents(value); return *this;}

    /**
     * <p>The different events for which you can receive notifications. These events
     * include the following: All (events), InProgress, Success, TimedOut, Cancelled,
     * Failed. To learn more about these events, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitor-commands.html">Monitoring
     * Commands</a> in the <i>Amazon Elastic Compute Cloud User Guide </i>.</p>
     */
    inline NotificationConfig& WithNotificationEvents(Aws::Vector<NotificationEvent>&& value) { SetNotificationEvents(value); return *this;}

    /**
     * <p>The different events for which you can receive notifications. These events
     * include the following: All (events), InProgress, Success, TimedOut, Cancelled,
     * Failed. To learn more about these events, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitor-commands.html">Monitoring
     * Commands</a> in the <i>Amazon Elastic Compute Cloud User Guide </i>.</p>
     */
    inline NotificationConfig& AddNotificationEvents(const NotificationEvent& value) { m_notificationEventsHasBeenSet = true; m_notificationEvents.push_back(value); return *this; }

    /**
     * <p>The different events for which you can receive notifications. These events
     * include the following: All (events), InProgress, Success, TimedOut, Cancelled,
     * Failed. To learn more about these events, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitor-commands.html">Monitoring
     * Commands</a> in the <i>Amazon Elastic Compute Cloud User Guide </i>.</p>
     */
    inline NotificationConfig& AddNotificationEvents(NotificationEvent&& value) { m_notificationEventsHasBeenSet = true; m_notificationEvents.push_back(value); return *this; }

    /**
     * <p>Command: Receive notification when the status of a command changes.
     * Invocation: For commands sent to multiple instances, receive notification on a
     * per-instance basis when the status of a command changes. </p>
     */
    inline const NotificationType& GetNotificationType() const{ return m_notificationType; }

    /**
     * <p>Command: Receive notification when the status of a command changes.
     * Invocation: For commands sent to multiple instances, receive notification on a
     * per-instance basis when the status of a command changes. </p>
     */
    inline void SetNotificationType(const NotificationType& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }

    /**
     * <p>Command: Receive notification when the status of a command changes.
     * Invocation: For commands sent to multiple instances, receive notification on a
     * per-instance basis when the status of a command changes. </p>
     */
    inline void SetNotificationType(NotificationType&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }

    /**
     * <p>Command: Receive notification when the status of a command changes.
     * Invocation: For commands sent to multiple instances, receive notification on a
     * per-instance basis when the status of a command changes. </p>
     */
    inline NotificationConfig& WithNotificationType(const NotificationType& value) { SetNotificationType(value); return *this;}

    /**
     * <p>Command: Receive notification when the status of a command changes.
     * Invocation: For commands sent to multiple instances, receive notification on a
     * per-instance basis when the status of a command changes. </p>
     */
    inline NotificationConfig& WithNotificationType(NotificationType&& value) { SetNotificationType(value); return *this;}

  private:
    Aws::String m_notificationArn;
    bool m_notificationArnHasBeenSet;
    Aws::Vector<NotificationEvent> m_notificationEvents;
    bool m_notificationEventsHasBeenSet;
    NotificationType m_notificationType;
    bool m_notificationTypeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
