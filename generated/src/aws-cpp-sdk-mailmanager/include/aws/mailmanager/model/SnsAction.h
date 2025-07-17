/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ActionFailurePolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/SnsNotificationEncoding.h>
#include <aws/mailmanager/model/SnsNotificationPayloadType.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The action to publish the email content to an Amazon SNS topic. When
   * executed, this action will send the email as a notification to the specified SNS
   * topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/SnsAction">AWS
   * API Reference</a></p>
   */
  class SnsAction
  {
  public:
    AWS_MAILMANAGER_API SnsAction() = default;
    AWS_MAILMANAGER_API SnsAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API SnsAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A policy that states what to do in the case of failure. The action will fail
     * if there are configuration errors. For example, specified SNS topic has been
     * deleted or the role lacks necessary permissions to call the
     * <code>sns:Publish</code> API.</p>
     */
    inline ActionFailurePolicy GetActionFailurePolicy() const { return m_actionFailurePolicy; }
    inline bool ActionFailurePolicyHasBeenSet() const { return m_actionFailurePolicyHasBeenSet; }
    inline void SetActionFailurePolicy(ActionFailurePolicy value) { m_actionFailurePolicyHasBeenSet = true; m_actionFailurePolicy = value; }
    inline SnsAction& WithActionFailurePolicy(ActionFailurePolicy value) { SetActionFailurePolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS Topic to which notification
     * for the email received will be published.</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    SnsAction& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role to use while writing to Amazon
     * SNS. This role must have access to the <code>sns:Publish</code> API for the
     * given topic.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    SnsAction& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encoding to use for the email within the Amazon SNS notification. The
     * default value is <code>UTF-8</code>. Use <code>BASE64</code> if you need to
     * preserve all special characters, especially when the original message uses a
     * different encoding format.</p>
     */
    inline SnsNotificationEncoding GetEncoding() const { return m_encoding; }
    inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }
    inline void SetEncoding(SnsNotificationEncoding value) { m_encodingHasBeenSet = true; m_encoding = value; }
    inline SnsAction& WithEncoding(SnsNotificationEncoding value) { SetEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected payload type within the Amazon SNS notification.
     * <code>CONTENT</code> attempts to publish the full email content with 20KB of
     * headers content. <code>HEADERS</code> extracts up to 100KB of header content to
     * include in the notification, email content will not be included to the
     * notification. The default value is <code>CONTENT</code>.</p>
     */
    inline SnsNotificationPayloadType GetPayloadType() const { return m_payloadType; }
    inline bool PayloadTypeHasBeenSet() const { return m_payloadTypeHasBeenSet; }
    inline void SetPayloadType(SnsNotificationPayloadType value) { m_payloadTypeHasBeenSet = true; m_payloadType = value; }
    inline SnsAction& WithPayloadType(SnsNotificationPayloadType value) { SetPayloadType(value); return *this;}
    ///@}
  private:

    ActionFailurePolicy m_actionFailurePolicy{ActionFailurePolicy::NOT_SET};
    bool m_actionFailurePolicyHasBeenSet = false;

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    SnsNotificationEncoding m_encoding{SnsNotificationEncoding::NOT_SET};
    bool m_encodingHasBeenSet = false;

    SnsNotificationPayloadType m_payloadType{SnsNotificationPayloadType::NOT_SET};
    bool m_payloadTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
