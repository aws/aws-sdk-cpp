/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/PushNotificationPreferences.h>
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
   * <p>The channel membership preferences for an
   * <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelMembershipPreferences">AWS
   * API Reference</a></p>
   */
  class ChannelMembershipPreferences
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelMembershipPreferences();
    AWS_CHIMESDKMESSAGING_API ChannelMembershipPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelMembershipPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The push notification configuration of a message.</p>
     */
    inline const PushNotificationPreferences& GetPushNotifications() const{ return m_pushNotifications; }

    /**
     * <p>The push notification configuration of a message.</p>
     */
    inline bool PushNotificationsHasBeenSet() const { return m_pushNotificationsHasBeenSet; }

    /**
     * <p>The push notification configuration of a message.</p>
     */
    inline void SetPushNotifications(const PushNotificationPreferences& value) { m_pushNotificationsHasBeenSet = true; m_pushNotifications = value; }

    /**
     * <p>The push notification configuration of a message.</p>
     */
    inline void SetPushNotifications(PushNotificationPreferences&& value) { m_pushNotificationsHasBeenSet = true; m_pushNotifications = std::move(value); }

    /**
     * <p>The push notification configuration of a message.</p>
     */
    inline ChannelMembershipPreferences& WithPushNotifications(const PushNotificationPreferences& value) { SetPushNotifications(value); return *this;}

    /**
     * <p>The push notification configuration of a message.</p>
     */
    inline ChannelMembershipPreferences& WithPushNotifications(PushNotificationPreferences&& value) { SetPushNotifications(std::move(value)); return *this;}

  private:

    PushNotificationPreferences m_pushNotifications;
    bool m_pushNotificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
