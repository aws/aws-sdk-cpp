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
    AWS_CHATBOT_API TeamsChannelConfiguration() = default;
    AWS_CHATBOT_API TeamsChannelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API TeamsChannelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Microsoft Teams channel.</p>
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    TeamsChannelConfiguration& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Microsoft Teams channel.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    TeamsChannelConfiguration& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
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
    inline const Aws::String& GetTeamId() const { return m_teamId; }
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }
    template<typename TeamIdT = Aws::String>
    void SetTeamId(TeamIdT&& value) { m_teamIdHasBeenSet = true; m_teamId = std::forward<TeamIdT>(value); }
    template<typename TeamIdT = Aws::String>
    TeamsChannelConfiguration& WithTeamId(TeamIdT&& value) { SetTeamId(std::forward<TeamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Microsoft Teams Team.</p>
     */
    inline const Aws::String& GetTeamName() const { return m_teamName; }
    inline bool TeamNameHasBeenSet() const { return m_teamNameHasBeenSet; }
    template<typename TeamNameT = Aws::String>
    void SetTeamName(TeamNameT&& value) { m_teamNameHasBeenSet = true; m_teamName = std::forward<TeamNameT>(value); }
    template<typename TeamNameT = Aws::String>
    TeamsChannelConfiguration& WithTeamName(TeamNameT&& value) { SetTeamName(std::forward<TeamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Microsoft Teams tenant.</p>
     */
    inline const Aws::String& GetTenantId() const { return m_tenantId; }
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
    template<typename TenantIdT = Aws::String>
    void SetTenantId(TenantIdT&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::forward<TenantIdT>(value); }
    template<typename TenantIdT = Aws::String>
    TeamsChannelConfiguration& WithTenantId(TenantIdT&& value) { SetTenantId(std::forward<TenantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the MicrosoftTeamsChannelConfiguration
     * associated with the user identity to delete.</p>
     */
    inline const Aws::String& GetChatConfigurationArn() const { return m_chatConfigurationArn; }
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }
    template<typename ChatConfigurationArnT = Aws::String>
    void SetChatConfigurationArn(ChatConfigurationArnT&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::forward<ChatConfigurationArnT>(value); }
    template<typename ChatConfigurationArnT = Aws::String>
    TeamsChannelConfiguration& WithChatConfigurationArn(ChatConfigurationArnT&& value) { SetChatConfigurationArn(std::forward<ChatConfigurationArnT>(value)); return *this;}
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
    TeamsChannelConfiguration& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
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
    TeamsChannelConfiguration& WithSnsTopicArns(SnsTopicArnsT&& value) { SetSnsTopicArns(std::forward<SnsTopicArnsT>(value)); return *this;}
    template<typename SnsTopicArnsT = Aws::String>
    TeamsChannelConfiguration& AddSnsTopicArns(SnsTopicArnsT&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.emplace_back(std::forward<SnsTopicArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationName() const { return m_configurationName; }
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
    template<typename ConfigurationNameT = Aws::String>
    void SetConfigurationName(ConfigurationNameT&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::forward<ConfigurationNameT>(value); }
    template<typename ConfigurationNameT = Aws::String>
    TeamsChannelConfiguration& WithConfigurationName(ConfigurationNameT&& value) { SetConfigurationName(std::forward<ConfigurationNameT>(value)); return *this;}
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
    TeamsChannelConfiguration& WithLoggingLevel(LoggingLevelT&& value) { SetLoggingLevel(std::forward<LoggingLevelT>(value)); return *this;}
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
    TeamsChannelConfiguration& WithGuardrailPolicyArns(GuardrailPolicyArnsT&& value) { SetGuardrailPolicyArns(std::forward<GuardrailPolicyArnsT>(value)); return *this;}
    template<typename GuardrailPolicyArnsT = Aws::String>
    TeamsChannelConfiguration& AddGuardrailPolicyArns(GuardrailPolicyArnsT&& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.emplace_back(std::forward<GuardrailPolicyArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables use of a user role requirement in your chat configuration.</p>
     */
    inline bool GetUserAuthorizationRequired() const { return m_userAuthorizationRequired; }
    inline bool UserAuthorizationRequiredHasBeenSet() const { return m_userAuthorizationRequiredHasBeenSet; }
    inline void SetUserAuthorizationRequired(bool value) { m_userAuthorizationRequiredHasBeenSet = true; m_userAuthorizationRequired = value; }
    inline TeamsChannelConfiguration& WithUserAuthorizationRequired(bool value) { SetUserAuthorizationRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of tags assigned to a resource. A tag is a string-to-string map of
     * key-value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TeamsChannelConfiguration& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TeamsChannelConfiguration& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Either <code>ENABLED</code> or <code>DISABLED</code>. The resource returns
     * <code>DISABLED</code> if the organization's AWS Chatbot policy has explicitly
     * denied that configuration. For example, if Amazon Chime is disabled.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    TeamsChannelConfiguration& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provided if State is <code>DISABLED</code>. Provides context as to why the
     * resource is disabled.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    TeamsChannelConfiguration& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
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

    bool m_userAuthorizationRequired{false};
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
