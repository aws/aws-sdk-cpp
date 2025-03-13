/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/NotificationType.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to set whether Amazon SES includes the original email
   * headers in the Amazon SNS notifications of a specified type. For information
   * about notifications, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity-using-notifications-sns.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityHeadersInNotificationsEnabledRequest">AWS
   * API Reference</a></p>
   */
  class SetIdentityHeadersInNotificationsEnabledRequest : public SESRequest
  {
  public:
    AWS_SES_API SetIdentityHeadersInNotificationsEnabledRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetIdentityHeadersInNotificationsEnabled"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identity for which to enable or disable headers in notifications.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline const Aws::String& GetIdentity() const { return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    template<typename IdentityT = Aws::String>
    void SetIdentity(IdentityT&& value) { m_identityHasBeenSet = true; m_identity = std::forward<IdentityT>(value); }
    template<typename IdentityT = Aws::String>
    SetIdentityHeadersInNotificationsEnabledRequest& WithIdentity(IdentityT&& value) { SetIdentity(std::forward<IdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification type for which to enable or disable headers in
     * notifications. </p>
     */
    inline NotificationType GetNotificationType() const { return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    inline void SetNotificationType(NotificationType value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }
    inline SetIdentityHeadersInNotificationsEnabledRequest& WithNotificationType(NotificationType value) { SetNotificationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets whether Amazon SES includes the original email headers in Amazon SNS
     * notifications of the specified notification type. A value of <code>true</code>
     * specifies that Amazon SES includes headers in notifications, and a value of
     * <code>false</code> specifies that Amazon SES does not include headers in
     * notifications.</p> <p>This value can only be set when
     * <code>NotificationType</code> is already set to use a particular Amazon SNS
     * topic.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline SetIdentityHeadersInNotificationsEnabledRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;

    NotificationType m_notificationType{NotificationType::NOT_SET};
    bool m_notificationTypeHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
