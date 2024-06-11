﻿/**
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
   * <p>Represents a request to specify the Amazon SNS topic to which Amazon SES
   * publishes bounce, complaint, or delivery notifications for emails sent with that
   * identity as the source. For information about Amazon SES notifications, see the
   * <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity-using-notifications-sns.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityNotificationTopicRequest">AWS
   * API Reference</a></p>
   */
  class SetIdentityNotificationTopicRequest : public SESRequest
  {
  public:
    AWS_SES_API SetIdentityNotificationTopicRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetIdentityNotificationTopic"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identity (email address or domain) for the Amazon SNS topic.</p>
     *  <p>You can only specify a verified identity for this parameter.</p>
     *  <p>You can specify an identity by using its name or by using its
     * Amazon Resource Name (ARN). The following examples are all valid identities:
     * <code>sender@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }
    inline SetIdentityNotificationTopicRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}
    inline SetIdentityNotificationTopicRequest& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}
    inline SetIdentityNotificationTopicRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of notifications that are published to the specified Amazon SNS
     * topic.</p>
     */
    inline const NotificationType& GetNotificationType() const{ return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    inline void SetNotificationType(const NotificationType& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }
    inline void SetNotificationType(NotificationType&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = std::move(value); }
    inline SetIdentityNotificationTopicRequest& WithNotificationType(const NotificationType& value) { SetNotificationType(value); return *this;}
    inline SetIdentityNotificationTopicRequest& WithNotificationType(NotificationType&& value) { SetNotificationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic. If the parameter is
     * omitted from the request or a null value is passed, <code>SnsTopic</code> is
     * cleared and publishing is disabled.</p>
     */
    inline const Aws::String& GetSnsTopic() const{ return m_snsTopic; }
    inline bool SnsTopicHasBeenSet() const { return m_snsTopicHasBeenSet; }
    inline void SetSnsTopic(const Aws::String& value) { m_snsTopicHasBeenSet = true; m_snsTopic = value; }
    inline void SetSnsTopic(Aws::String&& value) { m_snsTopicHasBeenSet = true; m_snsTopic = std::move(value); }
    inline void SetSnsTopic(const char* value) { m_snsTopicHasBeenSet = true; m_snsTopic.assign(value); }
    inline SetIdentityNotificationTopicRequest& WithSnsTopic(const Aws::String& value) { SetSnsTopic(value); return *this;}
    inline SetIdentityNotificationTopicRequest& WithSnsTopic(Aws::String&& value) { SetSnsTopic(std::move(value)); return *this;}
    inline SetIdentityNotificationTopicRequest& WithSnsTopic(const char* value) { SetSnsTopic(value); return *this;}
    ///@}
  private:

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;

    NotificationType m_notificationType;
    bool m_notificationTypeHasBeenSet = false;

    Aws::String m_snsTopic;
    bool m_snsTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
