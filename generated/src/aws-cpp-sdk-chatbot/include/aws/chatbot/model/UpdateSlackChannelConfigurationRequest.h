/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/ChatbotRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace chatbot
{
namespace Model
{

  /**
   */
  class UpdateSlackChannelConfigurationRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API UpdateSlackChannelConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSlackChannelConfiguration"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SlackChannelConfiguration to
     * update.</p>
     */
    inline const Aws::String& GetChatConfigurationArn() const{ return m_chatConfigurationArn; }
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }
    inline void SetChatConfigurationArn(const Aws::String& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = value; }
    inline void SetChatConfigurationArn(Aws::String&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::move(value); }
    inline void SetChatConfigurationArn(const char* value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn.assign(value); }
    inline UpdateSlackChannelConfigurationRequest& WithChatConfigurationArn(const Aws::String& value) { SetChatConfigurationArn(value); return *this;}
    inline UpdateSlackChannelConfigurationRequest& WithChatConfigurationArn(Aws::String&& value) { SetChatConfigurationArn(std::move(value)); return *this;}
    inline UpdateSlackChannelConfigurationRequest& WithChatConfigurationArn(const char* value) { SetChatConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Slack channel.</p> <p>To get this ID, open Slack, right click
     * on the channel name in the left pane, then choose Copy Link. The channel ID is
     * the 9-character string at the end of the URL. For example, ABCBBLZZZ. </p>
     */
    inline const Aws::String& GetSlackChannelId() const{ return m_slackChannelId; }
    inline bool SlackChannelIdHasBeenSet() const { return m_slackChannelIdHasBeenSet; }
    inline void SetSlackChannelId(const Aws::String& value) { m_slackChannelIdHasBeenSet = true; m_slackChannelId = value; }
    inline void SetSlackChannelId(Aws::String&& value) { m_slackChannelIdHasBeenSet = true; m_slackChannelId = std::move(value); }
    inline void SetSlackChannelId(const char* value) { m_slackChannelIdHasBeenSet = true; m_slackChannelId.assign(value); }
    inline UpdateSlackChannelConfigurationRequest& WithSlackChannelId(const Aws::String& value) { SetSlackChannelId(value); return *this;}
    inline UpdateSlackChannelConfigurationRequest& WithSlackChannelId(Aws::String&& value) { SetSlackChannelId(std::move(value)); return *this;}
    inline UpdateSlackChannelConfigurationRequest& WithSlackChannelId(const char* value) { SetSlackChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Slack channel.</p>
     */
    inline const Aws::String& GetSlackChannelName() const{ return m_slackChannelName; }
    inline bool SlackChannelNameHasBeenSet() const { return m_slackChannelNameHasBeenSet; }
    inline void SetSlackChannelName(const Aws::String& value) { m_slackChannelNameHasBeenSet = true; m_slackChannelName = value; }
    inline void SetSlackChannelName(Aws::String&& value) { m_slackChannelNameHasBeenSet = true; m_slackChannelName = std::move(value); }
    inline void SetSlackChannelName(const char* value) { m_slackChannelNameHasBeenSet = true; m_slackChannelName.assign(value); }
    inline UpdateSlackChannelConfigurationRequest& WithSlackChannelName(const Aws::String& value) { SetSlackChannelName(value); return *this;}
    inline UpdateSlackChannelConfigurationRequest& WithSlackChannelName(Aws::String&& value) { SetSlackChannelName(std::move(value)); return *this;}
    inline UpdateSlackChannelConfigurationRequest& WithSlackChannelName(const char* value) { SetSlackChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the SNS topics that deliver notifications
     * to AWS Chatbot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnsTopicArns() const{ return m_snsTopicArns; }
    inline bool SnsTopicArnsHasBeenSet() const { return m_snsTopicArnsHasBeenSet; }
    inline void SetSnsTopicArns(const Aws::Vector<Aws::String>& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns = value; }
    inline void SetSnsTopicArns(Aws::Vector<Aws::String>&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns = std::move(value); }
    inline UpdateSlackChannelConfigurationRequest& WithSnsTopicArns(const Aws::Vector<Aws::String>& value) { SetSnsTopicArns(value); return *this;}
    inline UpdateSlackChannelConfigurationRequest& WithSnsTopicArns(Aws::Vector<Aws::String>&& value) { SetSnsTopicArns(std::move(value)); return *this;}
    inline UpdateSlackChannelConfigurationRequest& AddSnsTopicArns(const Aws::String& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }
    inline UpdateSlackChannelConfigurationRequest& AddSnsTopicArns(Aws::String&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(std::move(value)); return *this; }
    inline UpdateSlackChannelConfigurationRequest& AddSnsTopicArns(const char* value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A user-defined role that AWS Chatbot assumes. This is not the service-linked
     * role.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/chatbot/latest/adminguide/chatbot-iam-policies.html">IAM
     * policies for AWS Chatbot</a> in the <i> AWS Chatbot Administrator Guide</i>.
     * </p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline UpdateSlackChannelConfigurationRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline UpdateSlackChannelConfigurationRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline UpdateSlackChannelConfigurationRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logging levels include <code>ERROR</code>, <code>INFO</code>, or
     * <code>NONE</code>.</p>
     */
    inline const Aws::String& GetLoggingLevel() const{ return m_loggingLevel; }
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }
    inline void SetLoggingLevel(const Aws::String& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }
    inline void SetLoggingLevel(Aws::String&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::move(value); }
    inline void SetLoggingLevel(const char* value) { m_loggingLevelHasBeenSet = true; m_loggingLevel.assign(value); }
    inline UpdateSlackChannelConfigurationRequest& WithLoggingLevel(const Aws::String& value) { SetLoggingLevel(value); return *this;}
    inline UpdateSlackChannelConfigurationRequest& WithLoggingLevel(Aws::String&& value) { SetLoggingLevel(std::move(value)); return *this;}
    inline UpdateSlackChannelConfigurationRequest& WithLoggingLevel(const char* value) { SetLoggingLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed <code>AdministratorAccess</code> policy is applied by default if this is
     * not set. </p>
     */
    inline const Aws::Vector<Aws::String>& GetGuardrailPolicyArns() const{ return m_guardrailPolicyArns; }
    inline bool GuardrailPolicyArnsHasBeenSet() const { return m_guardrailPolicyArnsHasBeenSet; }
    inline void SetGuardrailPolicyArns(const Aws::Vector<Aws::String>& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns = value; }
    inline void SetGuardrailPolicyArns(Aws::Vector<Aws::String>&& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns = std::move(value); }
    inline UpdateSlackChannelConfigurationRequest& WithGuardrailPolicyArns(const Aws::Vector<Aws::String>& value) { SetGuardrailPolicyArns(value); return *this;}
    inline UpdateSlackChannelConfigurationRequest& WithGuardrailPolicyArns(Aws::Vector<Aws::String>&& value) { SetGuardrailPolicyArns(std::move(value)); return *this;}
    inline UpdateSlackChannelConfigurationRequest& AddGuardrailPolicyArns(const Aws::String& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(value); return *this; }
    inline UpdateSlackChannelConfigurationRequest& AddGuardrailPolicyArns(Aws::String&& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(std::move(value)); return *this; }
    inline UpdateSlackChannelConfigurationRequest& AddGuardrailPolicyArns(const char* value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables use of a user role requirement in your chat configuration.</p>
     */
    inline bool GetUserAuthorizationRequired() const{ return m_userAuthorizationRequired; }
    inline bool UserAuthorizationRequiredHasBeenSet() const { return m_userAuthorizationRequiredHasBeenSet; }
    inline void SetUserAuthorizationRequired(bool value) { m_userAuthorizationRequiredHasBeenSet = true; m_userAuthorizationRequired = value; }
    inline UpdateSlackChannelConfigurationRequest& WithUserAuthorizationRequired(bool value) { SetUserAuthorizationRequired(value); return *this;}
    ///@}
  private:

    Aws::String m_chatConfigurationArn;
    bool m_chatConfigurationArnHasBeenSet = false;

    Aws::String m_slackChannelId;
    bool m_slackChannelIdHasBeenSet = false;

    Aws::String m_slackChannelName;
    bool m_slackChannelNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_snsTopicArns;
    bool m_snsTopicArnsHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_loggingLevel;
    bool m_loggingLevelHasBeenSet = false;

    Aws::Vector<Aws::String> m_guardrailPolicyArns;
    bool m_guardrailPolicyArnsHasBeenSet = false;

    bool m_userAuthorizationRequired;
    bool m_userAuthorizationRequiredHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
