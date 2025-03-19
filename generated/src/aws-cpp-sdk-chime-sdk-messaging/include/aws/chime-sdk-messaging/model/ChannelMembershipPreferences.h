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
    AWS_CHIMESDKMESSAGING_API ChannelMembershipPreferences() = default;
    AWS_CHIMESDKMESSAGING_API ChannelMembershipPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelMembershipPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The push notification configuration of a message.</p>
     */
    inline const PushNotificationPreferences& GetPushNotifications() const { return m_pushNotifications; }
    inline bool PushNotificationsHasBeenSet() const { return m_pushNotificationsHasBeenSet; }
    template<typename PushNotificationsT = PushNotificationPreferences>
    void SetPushNotifications(PushNotificationsT&& value) { m_pushNotificationsHasBeenSet = true; m_pushNotifications = std::forward<PushNotificationsT>(value); }
    template<typename PushNotificationsT = PushNotificationPreferences>
    ChannelMembershipPreferences& WithPushNotifications(PushNotificationsT&& value) { SetPushNotifications(std::forward<PushNotificationsT>(value)); return *this;}
    ///@}
  private:

    PushNotificationPreferences m_pushNotifications;
    bool m_pushNotificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
