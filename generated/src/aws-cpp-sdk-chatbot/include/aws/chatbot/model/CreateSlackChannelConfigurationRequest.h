/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/ChatbotRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chatbot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace chatbot
{
namespace Model
{

  /**
   */
  class CreateSlackChannelConfigurationRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API CreateSlackChannelConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSlackChannelConfiguration"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Slack workspace authorized with AWS Chatbot.</p>
     */
    inline const Aws::String& GetSlackTeamId() const{ return m_slackTeamId; }
    inline bool SlackTeamIdHasBeenSet() const { return m_slackTeamIdHasBeenSet; }
    inline void SetSlackTeamId(const Aws::String& value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId = value; }
    inline void SetSlackTeamId(Aws::String&& value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId = std::move(value); }
    inline void SetSlackTeamId(const char* value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId.assign(value); }
    inline CreateSlackChannelConfigurationRequest& WithSlackTeamId(const Aws::String& value) { SetSlackTeamId(value); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithSlackTeamId(Aws::String&& value) { SetSlackTeamId(std::move(value)); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithSlackTeamId(const char* value) { SetSlackTeamId(value); return *this;}
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
    inline CreateSlackChannelConfigurationRequest& WithSlackChannelId(const Aws::String& value) { SetSlackChannelId(value); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithSlackChannelId(Aws::String&& value) { SetSlackChannelId(std::move(value)); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithSlackChannelId(const char* value) { SetSlackChannelId(value); return *this;}
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
    inline CreateSlackChannelConfigurationRequest& WithSlackChannelName(const Aws::String& value) { SetSlackChannelName(value); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithSlackChannelName(Aws::String&& value) { SetSlackChannelName(std::move(value)); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithSlackChannelName(const char* value) { SetSlackChannelName(value); return *this;}
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
    inline CreateSlackChannelConfigurationRequest& WithSnsTopicArns(const Aws::Vector<Aws::String>& value) { SetSnsTopicArns(value); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithSnsTopicArns(Aws::Vector<Aws::String>&& value) { SetSnsTopicArns(std::move(value)); return *this;}
    inline CreateSlackChannelConfigurationRequest& AddSnsTopicArns(const Aws::String& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }
    inline CreateSlackChannelConfigurationRequest& AddSnsTopicArns(Aws::String&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(std::move(value)); return *this; }
    inline CreateSlackChannelConfigurationRequest& AddSnsTopicArns(const char* value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }
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
    inline CreateSlackChannelConfigurationRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }
    inline CreateSlackChannelConfigurationRequest& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}
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
    inline CreateSlackChannelConfigurationRequest& WithLoggingLevel(const Aws::String& value) { SetLoggingLevel(value); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithLoggingLevel(Aws::String&& value) { SetLoggingLevel(std::move(value)); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithLoggingLevel(const char* value) { SetLoggingLevel(value); return *this;}
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
    inline CreateSlackChannelConfigurationRequest& WithGuardrailPolicyArns(const Aws::Vector<Aws::String>& value) { SetGuardrailPolicyArns(value); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithGuardrailPolicyArns(Aws::Vector<Aws::String>&& value) { SetGuardrailPolicyArns(std::move(value)); return *this;}
    inline CreateSlackChannelConfigurationRequest& AddGuardrailPolicyArns(const Aws::String& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(value); return *this; }
    inline CreateSlackChannelConfigurationRequest& AddGuardrailPolicyArns(Aws::String&& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(std::move(value)); return *this; }
    inline CreateSlackChannelConfigurationRequest& AddGuardrailPolicyArns(const char* value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables use of a user role requirement in your chat configuration.</p>
     */
    inline bool GetUserAuthorizationRequired() const{ return m_userAuthorizationRequired; }
    inline bool UserAuthorizationRequiredHasBeenSet() const { return m_userAuthorizationRequiredHasBeenSet; }
    inline void SetUserAuthorizationRequired(bool value) { m_userAuthorizationRequiredHasBeenSet = true; m_userAuthorizationRequired = value; }
    inline CreateSlackChannelConfigurationRequest& WithUserAuthorizationRequired(bool value) { SetUserAuthorizationRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of tags assigned to a resource. A tag is a string-to-string map of
     * key-value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateSlackChannelConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateSlackChannelConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSlackChannelConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateSlackChannelConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_slackTeamId;
    bool m_slackTeamIdHasBeenSet = false;

    Aws::String m_slackChannelId;
    bool m_slackChannelIdHasBeenSet = false;

    Aws::String m_slackChannelName;
    bool m_slackChannelNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_snsTopicArns;
    bool m_snsTopicArnsHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet = false;

    Aws::String m_loggingLevel;
    bool m_loggingLevelHasBeenSet = false;

    Aws::Vector<Aws::String> m_guardrailPolicyArns;
    bool m_guardrailPolicyArnsHasBeenSet = false;

    bool m_userAuthorizationRequired;
    bool m_userAuthorizationRequiredHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
