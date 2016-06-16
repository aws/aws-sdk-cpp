/*
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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/NotificationType.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to specify the Amazon SNS topic to which Amazon SES will
   * publish bounce, complaint, or delivery notifications for emails sent with that
   * identity as the Source. For information about Amazon SES notifications, see the
   * <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications-via-sns.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API SetIdentityNotificationTopicRequest : public SESRequest
  {
  public:
    SetIdentityNotificationTopicRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identity for which the Amazon SNS topic will be set. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>The identity for which the Amazon SNS topic will be set. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The identity for which the Amazon SNS topic will be set. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The identity for which the Amazon SNS topic will be set. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p>The identity for which the Amazon SNS topic will be set. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline SetIdentityNotificationTopicRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>The identity for which the Amazon SNS topic will be set. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline SetIdentityNotificationTopicRequest& WithIdentity(Aws::String&& value) { SetIdentity(value); return *this;}

    /**
     * <p>The identity for which the Amazon SNS topic will be set. You can specify an
     * identity by using its name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline SetIdentityNotificationTopicRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}

    /**
     * <p>The type of notifications that will be published to the specified Amazon SNS
     * topic.</p>
     */
    inline const NotificationType& GetNotificationType() const{ return m_notificationType; }

    /**
     * <p>The type of notifications that will be published to the specified Amazon SNS
     * topic.</p>
     */
    inline void SetNotificationType(const NotificationType& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }

    /**
     * <p>The type of notifications that will be published to the specified Amazon SNS
     * topic.</p>
     */
    inline void SetNotificationType(NotificationType&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }

    /**
     * <p>The type of notifications that will be published to the specified Amazon SNS
     * topic.</p>
     */
    inline SetIdentityNotificationTopicRequest& WithNotificationType(const NotificationType& value) { SetNotificationType(value); return *this;}

    /**
     * <p>The type of notifications that will be published to the specified Amazon SNS
     * topic.</p>
     */
    inline SetIdentityNotificationTopicRequest& WithNotificationType(NotificationType&& value) { SetNotificationType(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic. If the parameter is
     * omitted from the request or a null value is passed, <code>SnsTopic</code> is
     * cleared and publishing is disabled.</p>
     */
    inline const Aws::String& GetSnsTopic() const{ return m_snsTopic; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic. If the parameter is
     * omitted from the request or a null value is passed, <code>SnsTopic</code> is
     * cleared and publishing is disabled.</p>
     */
    inline void SetSnsTopic(const Aws::String& value) { m_snsTopicHasBeenSet = true; m_snsTopic = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic. If the parameter is
     * omitted from the request or a null value is passed, <code>SnsTopic</code> is
     * cleared and publishing is disabled.</p>
     */
    inline void SetSnsTopic(Aws::String&& value) { m_snsTopicHasBeenSet = true; m_snsTopic = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic. If the parameter is
     * omitted from the request or a null value is passed, <code>SnsTopic</code> is
     * cleared and publishing is disabled.</p>
     */
    inline void SetSnsTopic(const char* value) { m_snsTopicHasBeenSet = true; m_snsTopic.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic. If the parameter is
     * omitted from the request or a null value is passed, <code>SnsTopic</code> is
     * cleared and publishing is disabled.</p>
     */
    inline SetIdentityNotificationTopicRequest& WithSnsTopic(const Aws::String& value) { SetSnsTopic(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic. If the parameter is
     * omitted from the request or a null value is passed, <code>SnsTopic</code> is
     * cleared and publishing is disabled.</p>
     */
    inline SetIdentityNotificationTopicRequest& WithSnsTopic(Aws::String&& value) { SetSnsTopic(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic. If the parameter is
     * omitted from the request or a null value is passed, <code>SnsTopic</code> is
     * cleared and publishing is disabled.</p>
     */
    inline SetIdentityNotificationTopicRequest& WithSnsTopic(const char* value) { SetSnsTopic(value); return *this;}

  private:
    Aws::String m_identity;
    bool m_identityHasBeenSet;
    NotificationType m_notificationType;
    bool m_notificationTypeHasBeenSet;
    Aws::String m_snsTopic;
    bool m_snsTopicHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
