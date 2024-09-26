/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chatbot/model/Tag.h>
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
namespace chatbot
{
namespace Model
{

  /**
   * <p>An AWS Chatbot configuration for Microsoft Teams.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/TeamsChannelConfiguration">AWS
   * API Reference</a></p>
   */
  class TeamsChannelConfiguration
  {
  public:
    AWS_CHATBOT_API TeamsChannelConfiguration();
    AWS_CHATBOT_API TeamsChannelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API TeamsChannelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Microsoft Teams channel.</p>
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }
    inline TeamsChannelConfiguration& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}
    inline TeamsChannelConfiguration& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}
    inline TeamsChannelConfiguration& WithChannelId(const char* value) { SetChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Microsoft Teams channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline TeamsChannelConfiguration& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline TeamsChannelConfiguration& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline TeamsChannelConfiguration& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Microsoft Teams authorized with AWS Chatbot.</p> <p>To get the
     * team ID, you must perform the initial authorization flow with Microsoft Teams in
     * the AWS Chatbot console. Then you can copy and paste the team ID from the
     * console. For more information, see <a
     * href="https://docs.aws.amazon.com/chatbot/latest/adminguide/teams-setup.html#teams-client-setup">Step
     * 1: Configure a Microsoft Teams client</a> in the <i> AWS Chatbot Administrator
     * Guide</i>. </p>
     */
    inline const Aws::String& GetTeamId() const{ return m_teamId; }
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }
    inline void SetTeamId(const Aws::String& value) { m_teamIdHasBeenSet = true; m_teamId = value; }
    inline void SetTeamId(Aws::String&& value) { m_teamIdHasBeenSet = true; m_teamId = std::move(value); }
    inline void SetTeamId(const char* value) { m_teamIdHasBeenSet = true; m_teamId.assign(value); }
    inline TeamsChannelConfiguration& WithTeamId(const Aws::String& value) { SetTeamId(value); return *this;}
    inline TeamsChannelConfiguration& WithTeamId(Aws::String&& value) { SetTeamId(std::move(value)); return *this;}
    inline TeamsChannelConfiguration& WithTeamId(const char* value) { SetTeamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Microsoft Teams Team.</p>
     */
    inline const Aws::String& GetTeamName() const{ return m_teamName; }
    inline bool TeamNameHasBeenSet() const { return m_teamNameHasBeenSet; }
    inline void SetTeamName(const Aws::String& value) { m_teamNameHasBeenSet = true; m_teamName = value; }
    inline void SetTeamName(Aws::String&& value) { m_teamNameHasBeenSet = true; m_teamName = std::move(value); }
    inline void SetTeamName(const char* value) { m_teamNameHasBeenSet = true; m_teamName.assign(value); }
    inline TeamsChannelConfiguration& WithTeamName(const Aws::String& value) { SetTeamName(value); return *this;}
    inline TeamsChannelConfiguration& WithTeamName(Aws::String&& value) { SetTeamName(std::move(value)); return *this;}
    inline TeamsChannelConfiguration& WithTeamName(const char* value) { SetTeamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Microsoft Teams tenant.</p>
     */
    inline const Aws::String& GetTenantId() const{ return m_tenantId; }
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
    inline void SetTenantId(const Aws::String& value) { m_tenantIdHasBeenSet = true; m_tenantId = value; }
    inline void SetTenantId(Aws::String&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::move(value); }
    inline void SetTenantId(const char* value) { m_tenantIdHasBeenSet = true; m_tenantId.assign(value); }
    inline TeamsChannelConfiguration& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}
    inline TeamsChannelConfiguration& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}
    inline TeamsChannelConfiguration& WithTenantId(const char* value) { SetTenantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the MicrosoftTeamsChannelConfiguration
     * associated with the user identity to delete.</p>
     */
    inline const Aws::String& GetChatConfigurationArn() const{ return m_chatConfigurationArn; }
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }
    inline void SetChatConfigurationArn(const Aws::String& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = value; }
    inline void SetChatConfigurationArn(Aws::String&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::move(value); }
    inline void SetChatConfigurationArn(const char* value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn.assign(value); }
    inline TeamsChannelConfiguration& WithChatConfigurationArn(const Aws::String& value) { SetChatConfigurationArn(value); return *this;}
    inline TeamsChannelConfiguration& WithChatConfigurationArn(Aws::String&& value) { SetChatConfigurationArn(std::move(value)); return *this;}
    inline TeamsChannelConfiguration& WithChatConfigurationArn(const char* value) { SetChatConfigurationArn(value); return *this;}
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
    inline TeamsChannelConfiguration& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline TeamsChannelConfiguration& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline TeamsChannelConfiguration& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
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
    inline TeamsChannelConfiguration& WithSnsTopicArns(const Aws::Vector<Aws::String>& value) { SetSnsTopicArns(value); return *this;}
    inline TeamsChannelConfiguration& WithSnsTopicArns(Aws::Vector<Aws::String>&& value) { SetSnsTopicArns(std::move(value)); return *this;}
    inline TeamsChannelConfiguration& AddSnsTopicArns(const Aws::String& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }
    inline TeamsChannelConfiguration& AddSnsTopicArns(Aws::String&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(std::move(value)); return *this; }
    inline TeamsChannelConfiguration& AddSnsTopicArns(const char* value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }
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
    inline TeamsChannelConfiguration& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}
    inline TeamsChannelConfiguration& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}
    inline TeamsChannelConfiguration& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}
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
    inline TeamsChannelConfiguration& WithLoggingLevel(const Aws::String& value) { SetLoggingLevel(value); return *this;}
    inline TeamsChannelConfiguration& WithLoggingLevel(Aws::String&& value) { SetLoggingLevel(std::move(value)); return *this;}
    inline TeamsChannelConfiguration& WithLoggingLevel(const char* value) { SetLoggingLevel(value); return *this;}
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
    inline TeamsChannelConfiguration& WithGuardrailPolicyArns(const Aws::Vector<Aws::String>& value) { SetGuardrailPolicyArns(value); return *this;}
    inline TeamsChannelConfiguration& WithGuardrailPolicyArns(Aws::Vector<Aws::String>&& value) { SetGuardrailPolicyArns(std::move(value)); return *this;}
    inline TeamsChannelConfiguration& AddGuardrailPolicyArns(const Aws::String& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(value); return *this; }
    inline TeamsChannelConfiguration& AddGuardrailPolicyArns(Aws::String&& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(std::move(value)); return *this; }
    inline TeamsChannelConfiguration& AddGuardrailPolicyArns(const char* value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables use of a user role requirement in your chat configuration.</p>
     */
    inline bool GetUserAuthorizationRequired() const{ return m_userAuthorizationRequired; }
    inline bool UserAuthorizationRequiredHasBeenSet() const { return m_userAuthorizationRequiredHasBeenSet; }
    inline void SetUserAuthorizationRequired(bool value) { m_userAuthorizationRequiredHasBeenSet = true; m_userAuthorizationRequired = value; }
    inline TeamsChannelConfiguration& WithUserAuthorizationRequired(bool value) { SetUserAuthorizationRequired(value); return *this;}
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
    inline TeamsChannelConfiguration& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline TeamsChannelConfiguration& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline TeamsChannelConfiguration& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline TeamsChannelConfiguration& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Either <code>ENABLED</code> or <code>DISABLED</code>. The resource returns
     * <code>DISABLED</code> if the organization's AWS Chatbot policy has explicitly
     * denied that configuration. For example, if Amazon Chime is disabled.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline TeamsChannelConfiguration& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline TeamsChannelConfiguration& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline TeamsChannelConfiguration& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provided if State is <code>DISABLED</code>. Provides context as to why the
     * resource is disabled.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }
    inline TeamsChannelConfiguration& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}
    inline TeamsChannelConfiguration& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}
    inline TeamsChannelConfiguration& WithStateReason(const char* value) { SetStateReason(value); return *this;}
    ///@}
  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_teamId;
    bool m_teamIdHasBeenSet = false;

    Aws::String m_teamName;
    bool m_teamNameHasBeenSet = false;

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;

    Aws::String m_chatConfigurationArn;
    bool m_chatConfigurationArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_snsTopicArns;
    bool m_snsTopicArnsHasBeenSet = false;

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

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
