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
    AWS_SES_API SetIdentityNotificationTopicRequest() = default;

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
    inline const Aws::String& GetIdentity() const { return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    template<typename IdentityT = Aws::String>
    void SetIdentity(IdentityT&& value) { m_identityHasBeenSet = true; m_identity = std::forward<IdentityT>(value); }
    template<typename IdentityT = Aws::String>
    SetIdentityNotificationTopicRequest& WithIdentity(IdentityT&& value) { SetIdentity(std::forward<IdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of notifications that are published to the specified Amazon SNS
     * topic.</p>
     */
    inline NotificationType GetNotificationType() const { return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    inline void SetNotificationType(NotificationType value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }
    inline SetIdentityNotificationTopicRequest& WithNotificationType(NotificationType value) { SetNotificationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic. If the parameter is
     * omitted from the request or a null value is passed, <code>SnsTopic</code> is
     * cleared and publishing is disabled.</p>
     */
    inline const Aws::String& GetSnsTopic() const { return m_snsTopic; }
    inline bool SnsTopicHasBeenSet() const { return m_snsTopicHasBeenSet; }
    template<typename SnsTopicT = Aws::String>
    void SetSnsTopic(SnsTopicT&& value) { m_snsTopicHasBeenSet = true; m_snsTopic = std::forward<SnsTopicT>(value); }
    template<typename SnsTopicT = Aws::String>
    SetIdentityNotificationTopicRequest& WithSnsTopic(SnsTopicT&& value) { SetSnsTopic(std::forward<SnsTopicT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;

    NotificationType m_notificationType{NotificationType::NOT_SET};
    bool m_notificationTypeHasBeenSet = false;

    Aws::String m_snsTopic;
    bool m_snsTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
