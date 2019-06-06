/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications-via-sns.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityHeadersInNotificationsEnabledRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API SetIdentityHeadersInNotificationsEnabledRequest : public SESRequest
  {
  public:
    SetIdentityHeadersInNotificationsEnabledRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetIdentityHeadersInNotificationsEnabled"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identity for which to enable or disable headers in notifications.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>The identity for which to enable or disable headers in notifications.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }

    /**
     * <p>The identity for which to enable or disable headers in notifications.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The identity for which to enable or disable headers in notifications.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }

    /**
     * <p>The identity for which to enable or disable headers in notifications.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p>The identity for which to enable or disable headers in notifications.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline SetIdentityHeadersInNotificationsEnabledRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>The identity for which to enable or disable headers in notifications.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline SetIdentityHeadersInNotificationsEnabledRequest& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}

    /**
     * <p>The identity for which to enable or disable headers in notifications.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline SetIdentityHeadersInNotificationsEnabledRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}


    /**
     * <p>The notification type for which to enable or disable headers in
     * notifications. </p>
     */
    inline const NotificationType& GetNotificationType() const{ return m_notificationType; }

    /**
     * <p>The notification type for which to enable or disable headers in
     * notifications. </p>
     */
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }

    /**
     * <p>The notification type for which to enable or disable headers in
     * notifications. </p>
     */
    inline void SetNotificationType(const NotificationType& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }

    /**
     * <p>The notification type for which to enable or disable headers in
     * notifications. </p>
     */
    inline void SetNotificationType(NotificationType&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = std::move(value); }

    /**
     * <p>The notification type for which to enable or disable headers in
     * notifications. </p>
     */
    inline SetIdentityHeadersInNotificationsEnabledRequest& WithNotificationType(const NotificationType& value) { SetNotificationType(value); return *this;}

    /**
     * <p>The notification type for which to enable or disable headers in
     * notifications. </p>
     */
    inline SetIdentityHeadersInNotificationsEnabledRequest& WithNotificationType(NotificationType&& value) { SetNotificationType(std::move(value)); return *this;}


    /**
     * <p>Sets whether Amazon SES includes the original email headers in Amazon SNS
     * notifications of the specified notification type. A value of <code>true</code>
     * specifies that Amazon SES will include headers in notifications, and a value of
     * <code>false</code> specifies that Amazon SES will not include headers in
     * notifications.</p> <p>This value can only be set when
     * <code>NotificationType</code> is already set to use a particular Amazon SNS
     * topic.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Sets whether Amazon SES includes the original email headers in Amazon SNS
     * notifications of the specified notification type. A value of <code>true</code>
     * specifies that Amazon SES will include headers in notifications, and a value of
     * <code>false</code> specifies that Amazon SES will not include headers in
     * notifications.</p> <p>This value can only be set when
     * <code>NotificationType</code> is already set to use a particular Amazon SNS
     * topic.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Sets whether Amazon SES includes the original email headers in Amazon SNS
     * notifications of the specified notification type. A value of <code>true</code>
     * specifies that Amazon SES will include headers in notifications, and a value of
     * <code>false</code> specifies that Amazon SES will not include headers in
     * notifications.</p> <p>This value can only be set when
     * <code>NotificationType</code> is already set to use a particular Amazon SNS
     * topic.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Sets whether Amazon SES includes the original email headers in Amazon SNS
     * notifications of the specified notification type. A value of <code>true</code>
     * specifies that Amazon SES will include headers in notifications, and a value of
     * <code>false</code> specifies that Amazon SES will not include headers in
     * notifications.</p> <p>This value can only be set when
     * <code>NotificationType</code> is already set to use a particular Amazon SNS
     * topic.</p>
     */
    inline SetIdentityHeadersInNotificationsEnabledRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_identity;
    bool m_identityHasBeenSet;

    NotificationType m_notificationType;
    bool m_notificationTypeHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
