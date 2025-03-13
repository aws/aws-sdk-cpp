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
    AWS_CHATBOT_API UpdateSlackChannelConfigurationRequest() = default;

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
    inline const Aws::String& GetChatConfigurationArn() const { return m_chatConfigurationArn; }
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }
    template<typename ChatConfigurationArnT = Aws::String>
    void SetChatConfigurationArn(ChatConfigurationArnT&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::forward<ChatConfigurationArnT>(value); }
    template<typename ChatConfigurationArnT = Aws::String>
    UpdateSlackChannelConfigurationRequest& WithChatConfigurationArn(ChatConfigurationArnT&& value) { SetChatConfigurationArn(std::forward<ChatConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Slack channel.</p> <p>To get this ID, open Slack, right click
     * on the channel name in the left pane, then choose Copy Link. The channel ID is
     * the 9-character string at the end of the URL. For example, ABCBBLZZZ. </p>
     */
    inline const Aws::String& GetSlackChannelId() const { return m_slackChannelId; }
    inline bool SlackChannelIdHasBeenSet() const { return m_slackChannelIdHasBeenSet; }
    template<typename SlackChannelIdT = Aws::String>
    void SetSlackChannelId(SlackChannelIdT&& value) { m_slackChannelIdHasBeenSet = true; m_slackChannelId = std::forward<SlackChannelIdT>(value); }
    template<typename SlackChannelIdT = Aws::String>
    UpdateSlackChannelConfigurationRequest& WithSlackChannelId(SlackChannelIdT&& value) { SetSlackChannelId(std::forward<SlackChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Slack channel.</p>
     */
    inline const Aws::String& GetSlackChannelName() const { return m_slackChannelName; }
    inline bool SlackChannelNameHasBeenSet() const { return m_slackChannelNameHasBeenSet; }
    template<typename SlackChannelNameT = Aws::String>
    void SetSlackChannelName(SlackChannelNameT&& value) { m_slackChannelNameHasBeenSet = true; m_slackChannelName = std::forward<SlackChannelNameT>(value); }
    template<typename SlackChannelNameT = Aws::String>
    UpdateSlackChannelConfigurationRequest& WithSlackChannelName(SlackChannelNameT&& value) { SetSlackChannelName(std::forward<SlackChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the SNS topics that deliver notifications
     * to AWS Chatbot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnsTopicArns() const { return m_snsTopicArns; }
    inline bool SnsTopicArnsHasBeenSet() const { return m_snsTopicArnsHasBeenSet; }
    template<typename SnsTopicArnsT = Aws::Vector<Aws::String>>
    void SetSnsTopicArns(SnsTopicArnsT&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns = std::forward<SnsTopicArnsT>(value); }
    template<typename SnsTopicArnsT = Aws::Vector<Aws::String>>
    UpdateSlackChannelConfigurationRequest& WithSnsTopicArns(SnsTopicArnsT&& value) { SetSnsTopicArns(std::forward<SnsTopicArnsT>(value)); return *this;}
    template<typename SnsTopicArnsT = Aws::String>
    UpdateSlackChannelConfigurationRequest& AddSnsTopicArns(SnsTopicArnsT&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.emplace_back(std::forward<SnsTopicArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A user-defined role that AWS Chatbot assumes. This is not the service-linked
     * role.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/chatbot/latest/adminguide/chatbot-iam-policies.html">IAM
     * policies for AWS Chatbot</a> in the <i> AWS Chatbot Administrator Guide</i>.
     * </p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    UpdateSlackChannelConfigurationRequest& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logging levels include <code>ERROR</code>, <code>INFO</code>, or
     * <code>NONE</code>.</p>
     */
    inline const Aws::String& GetLoggingLevel() const { return m_loggingLevel; }
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }
    template<typename LoggingLevelT = Aws::String>
    void SetLoggingLevel(LoggingLevelT&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::forward<LoggingLevelT>(value); }
    template<typename LoggingLevelT = Aws::String>
    UpdateSlackChannelConfigurationRequest& WithLoggingLevel(LoggingLevelT&& value) { SetLoggingLevel(std::forward<LoggingLevelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed <code>AdministratorAccess</code> policy is applied by default if this is
     * not set. </p>
     */
    inline const Aws::Vector<Aws::String>& GetGuardrailPolicyArns() const { return m_guardrailPolicyArns; }
    inline bool GuardrailPolicyArnsHasBeenSet() const { return m_guardrailPolicyArnsHasBeenSet; }
    template<typename GuardrailPolicyArnsT = Aws::Vector<Aws::String>>
    void SetGuardrailPolicyArns(GuardrailPolicyArnsT&& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns = std::forward<GuardrailPolicyArnsT>(value); }
    template<typename GuardrailPolicyArnsT = Aws::Vector<Aws::String>>
    UpdateSlackChannelConfigurationRequest& WithGuardrailPolicyArns(GuardrailPolicyArnsT&& value) { SetGuardrailPolicyArns(std::forward<GuardrailPolicyArnsT>(value)); return *this;}
    template<typename GuardrailPolicyArnsT = Aws::String>
    UpdateSlackChannelConfigurationRequest& AddGuardrailPolicyArns(GuardrailPolicyArnsT&& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.emplace_back(std::forward<GuardrailPolicyArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables use of a user role requirement in your chat configuration.</p>
     */
    inline bool GetUserAuthorizationRequired() const { return m_userAuthorizationRequired; }
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

    bool m_userAuthorizationRequired{false};
    bool m_userAuthorizationRequiredHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
