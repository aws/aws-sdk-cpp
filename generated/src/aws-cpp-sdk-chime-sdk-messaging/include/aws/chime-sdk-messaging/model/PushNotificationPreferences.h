﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/AllowNotifications.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>The channel membership preferences for push notification.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/PushNotificationPreferences">AWS
   * API Reference</a></p>
   */
  class PushNotificationPreferences
  {
  public:
    AWS_CHIMESDKMESSAGING_API PushNotificationPreferences();
    AWS_CHIMESDKMESSAGING_API PushNotificationPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API PushNotificationPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enum value that indicates which push notifications to send to the requested
     * member of a channel. <code>ALL</code> sends all push notifications,
     * <code>NONE</code> sends no push notifications, <code>FILTERED</code> sends only
     * filtered push notifications. </p>
     */
    inline const AllowNotifications& GetAllowNotifications() const{ return m_allowNotifications; }
    inline bool AllowNotificationsHasBeenSet() const { return m_allowNotificationsHasBeenSet; }
    inline void SetAllowNotifications(const AllowNotifications& value) { m_allowNotificationsHasBeenSet = true; m_allowNotifications = value; }
    inline void SetAllowNotifications(AllowNotifications&& value) { m_allowNotificationsHasBeenSet = true; m_allowNotifications = std::move(value); }
    inline PushNotificationPreferences& WithAllowNotifications(const AllowNotifications& value) { SetAllowNotifications(value); return *this;}
    inline PushNotificationPreferences& WithAllowNotifications(AllowNotifications&& value) { SetAllowNotifications(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The simple JSON object used to send a subset of a push notification to the
     * requested member.</p>
     */
    inline const Aws::String& GetFilterRule() const{ return m_filterRule; }
    inline bool FilterRuleHasBeenSet() const { return m_filterRuleHasBeenSet; }
    inline void SetFilterRule(const Aws::String& value) { m_filterRuleHasBeenSet = true; m_filterRule = value; }
    inline void SetFilterRule(Aws::String&& value) { m_filterRuleHasBeenSet = true; m_filterRule = std::move(value); }
    inline void SetFilterRule(const char* value) { m_filterRuleHasBeenSet = true; m_filterRule.assign(value); }
    inline PushNotificationPreferences& WithFilterRule(const Aws::String& value) { SetFilterRule(value); return *this;}
    inline PushNotificationPreferences& WithFilterRule(Aws::String&& value) { SetFilterRule(std::move(value)); return *this;}
    inline PushNotificationPreferences& WithFilterRule(const char* value) { SetFilterRule(value); return *this;}
    ///@}
  private:

    AllowNotifications m_allowNotifications;
    bool m_allowNotificationsHasBeenSet = false;

    Aws::String m_filterRule;
    bool m_filterRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
