/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * An AWS Chatbot configuration for Microsoft Teams.<p><h3>See Also:</h3>   <a
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


    /**
     * The ID of the Microsoft Teams channel.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * The ID of the Microsoft Teams channel.
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * The ID of the Microsoft Teams channel.
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * The ID of the Microsoft Teams channel.
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * The ID of the Microsoft Teams channel.
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * The ID of the Microsoft Teams channel.
     */
    inline TeamsChannelConfiguration& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * The ID of the Microsoft Teams channel.
     */
    inline TeamsChannelConfiguration& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * The ID of the Microsoft Teams channel.
     */
    inline TeamsChannelConfiguration& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * The name of the Microsoft Teams channel.
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * The name of the Microsoft Teams channel.
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * The name of the Microsoft Teams channel.
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * The name of the Microsoft Teams channel.
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * The name of the Microsoft Teams channel.
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * The name of the Microsoft Teams channel.
     */
    inline TeamsChannelConfiguration& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * The name of the Microsoft Teams channel.
     */
    inline TeamsChannelConfiguration& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * The name of the Microsoft Teams channel.
     */
    inline TeamsChannelConfiguration& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * The ID of the Microsoft Team authorized with AWS Chatbot. To get the team ID,
     * you must perform the initial authorization flow with Microsoft Teams in the AWS
     * Chatbot console. Then you can copy and paste the team ID from the console. For
     * more details, see steps 1-4 in Get started with Microsoft Teams in the AWS
     * Chatbot Administrator Guide.
     */
    inline const Aws::String& GetTeamId() const{ return m_teamId; }

    /**
     * The ID of the Microsoft Team authorized with AWS Chatbot. To get the team ID,
     * you must perform the initial authorization flow with Microsoft Teams in the AWS
     * Chatbot console. Then you can copy and paste the team ID from the console. For
     * more details, see steps 1-4 in Get started with Microsoft Teams in the AWS
     * Chatbot Administrator Guide.
     */
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }

    /**
     * The ID of the Microsoft Team authorized with AWS Chatbot. To get the team ID,
     * you must perform the initial authorization flow with Microsoft Teams in the AWS
     * Chatbot console. Then you can copy and paste the team ID from the console. For
     * more details, see steps 1-4 in Get started with Microsoft Teams in the AWS
     * Chatbot Administrator Guide.
     */
    inline void SetTeamId(const Aws::String& value) { m_teamIdHasBeenSet = true; m_teamId = value; }

    /**
     * The ID of the Microsoft Team authorized with AWS Chatbot. To get the team ID,
     * you must perform the initial authorization flow with Microsoft Teams in the AWS
     * Chatbot console. Then you can copy and paste the team ID from the console. For
     * more details, see steps 1-4 in Get started with Microsoft Teams in the AWS
     * Chatbot Administrator Guide.
     */
    inline void SetTeamId(Aws::String&& value) { m_teamIdHasBeenSet = true; m_teamId = std::move(value); }

    /**
     * The ID of the Microsoft Team authorized with AWS Chatbot. To get the team ID,
     * you must perform the initial authorization flow with Microsoft Teams in the AWS
     * Chatbot console. Then you can copy and paste the team ID from the console. For
     * more details, see steps 1-4 in Get started with Microsoft Teams in the AWS
     * Chatbot Administrator Guide.
     */
    inline void SetTeamId(const char* value) { m_teamIdHasBeenSet = true; m_teamId.assign(value); }

    /**
     * The ID of the Microsoft Team authorized with AWS Chatbot. To get the team ID,
     * you must perform the initial authorization flow with Microsoft Teams in the AWS
     * Chatbot console. Then you can copy and paste the team ID from the console. For
     * more details, see steps 1-4 in Get started with Microsoft Teams in the AWS
     * Chatbot Administrator Guide.
     */
    inline TeamsChannelConfiguration& WithTeamId(const Aws::String& value) { SetTeamId(value); return *this;}

    /**
     * The ID of the Microsoft Team authorized with AWS Chatbot. To get the team ID,
     * you must perform the initial authorization flow with Microsoft Teams in the AWS
     * Chatbot console. Then you can copy and paste the team ID from the console. For
     * more details, see steps 1-4 in Get started with Microsoft Teams in the AWS
     * Chatbot Administrator Guide.
     */
    inline TeamsChannelConfiguration& WithTeamId(Aws::String&& value) { SetTeamId(std::move(value)); return *this;}

    /**
     * The ID of the Microsoft Team authorized with AWS Chatbot. To get the team ID,
     * you must perform the initial authorization flow with Microsoft Teams in the AWS
     * Chatbot console. Then you can copy and paste the team ID from the console. For
     * more details, see steps 1-4 in Get started with Microsoft Teams in the AWS
     * Chatbot Administrator Guide.
     */
    inline TeamsChannelConfiguration& WithTeamId(const char* value) { SetTeamId(value); return *this;}


    /**
     * The name of the Microsoft Teams Team.
     */
    inline const Aws::String& GetTeamName() const{ return m_teamName; }

    /**
     * The name of the Microsoft Teams Team.
     */
    inline bool TeamNameHasBeenSet() const { return m_teamNameHasBeenSet; }

    /**
     * The name of the Microsoft Teams Team.
     */
    inline void SetTeamName(const Aws::String& value) { m_teamNameHasBeenSet = true; m_teamName = value; }

    /**
     * The name of the Microsoft Teams Team.
     */
    inline void SetTeamName(Aws::String&& value) { m_teamNameHasBeenSet = true; m_teamName = std::move(value); }

    /**
     * The name of the Microsoft Teams Team.
     */
    inline void SetTeamName(const char* value) { m_teamNameHasBeenSet = true; m_teamName.assign(value); }

    /**
     * The name of the Microsoft Teams Team.
     */
    inline TeamsChannelConfiguration& WithTeamName(const Aws::String& value) { SetTeamName(value); return *this;}

    /**
     * The name of the Microsoft Teams Team.
     */
    inline TeamsChannelConfiguration& WithTeamName(Aws::String&& value) { SetTeamName(std::move(value)); return *this;}

    /**
     * The name of the Microsoft Teams Team.
     */
    inline TeamsChannelConfiguration& WithTeamName(const char* value) { SetTeamName(value); return *this;}


    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline const Aws::String& GetTenantId() const{ return m_tenantId; }

    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }

    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline void SetTenantId(const Aws::String& value) { m_tenantIdHasBeenSet = true; m_tenantId = value; }

    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline void SetTenantId(Aws::String&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::move(value); }

    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline void SetTenantId(const char* value) { m_tenantIdHasBeenSet = true; m_tenantId.assign(value); }

    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline TeamsChannelConfiguration& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}

    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline TeamsChannelConfiguration& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}

    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline TeamsChannelConfiguration& WithTenantId(const char* value) { SetTenantId(value); return *this;}


    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration.
     */
    inline const Aws::String& GetChatConfigurationArn() const{ return m_chatConfigurationArn; }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration.
     */
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration.
     */
    inline void SetChatConfigurationArn(const Aws::String& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = value; }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration.
     */
    inline void SetChatConfigurationArn(Aws::String&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::move(value); }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration.
     */
    inline void SetChatConfigurationArn(const char* value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn.assign(value); }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration.
     */
    inline TeamsChannelConfiguration& WithChatConfigurationArn(const Aws::String& value) { SetChatConfigurationArn(value); return *this;}

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration.
     */
    inline TeamsChannelConfiguration& WithChatConfigurationArn(Aws::String&& value) { SetChatConfigurationArn(std::move(value)); return *this;}

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration.
     */
    inline TeamsChannelConfiguration& WithChatConfigurationArn(const char* value) { SetChatConfigurationArn(value); return *this;}


    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline TeamsChannelConfiguration& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline TeamsChannelConfiguration& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline TeamsChannelConfiguration& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline const Aws::Vector<Aws::String>& GetSnsTopicArns() const{ return m_snsTopicArns; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline bool SnsTopicArnsHasBeenSet() const { return m_snsTopicArnsHasBeenSet; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline void SetSnsTopicArns(const Aws::Vector<Aws::String>& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns = value; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline void SetSnsTopicArns(Aws::Vector<Aws::String>&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns = std::move(value); }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline TeamsChannelConfiguration& WithSnsTopicArns(const Aws::Vector<Aws::String>& value) { SetSnsTopicArns(value); return *this;}

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline TeamsChannelConfiguration& WithSnsTopicArns(Aws::Vector<Aws::String>&& value) { SetSnsTopicArns(std::move(value)); return *this;}

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline TeamsChannelConfiguration& AddSnsTopicArns(const Aws::String& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline TeamsChannelConfiguration& AddSnsTopicArns(Aws::String&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(std::move(value)); return *this; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline TeamsChannelConfiguration& AddSnsTopicArns(const char* value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }


    /**
     * The name of the configuration.
     */
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }

    /**
     * The name of the configuration.
     */
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }

    /**
     * The name of the configuration.
     */
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }

    /**
     * The name of the configuration.
     */
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }

    /**
     * The name of the configuration.
     */
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }

    /**
     * The name of the configuration.
     */
    inline TeamsChannelConfiguration& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}

    /**
     * The name of the configuration.
     */
    inline TeamsChannelConfiguration& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}

    /**
     * The name of the configuration.
     */
    inline TeamsChannelConfiguration& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}


    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline const Aws::String& GetLoggingLevel() const{ return m_loggingLevel; }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline void SetLoggingLevel(const Aws::String& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline void SetLoggingLevel(Aws::String&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::move(value); }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline void SetLoggingLevel(const char* value) { m_loggingLevelHasBeenSet = true; m_loggingLevel.assign(value); }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline TeamsChannelConfiguration& WithLoggingLevel(const Aws::String& value) { SetLoggingLevel(value); return *this;}

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline TeamsChannelConfiguration& WithLoggingLevel(Aws::String&& value) { SetLoggingLevel(std::move(value)); return *this;}

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline TeamsChannelConfiguration& WithLoggingLevel(const char* value) { SetLoggingLevel(value); return *this;}


    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline const Aws::Vector<Aws::String>& GetGuardrailPolicyArns() const{ return m_guardrailPolicyArns; }

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline bool GuardrailPolicyArnsHasBeenSet() const { return m_guardrailPolicyArnsHasBeenSet; }

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline void SetGuardrailPolicyArns(const Aws::Vector<Aws::String>& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns = value; }

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline void SetGuardrailPolicyArns(Aws::Vector<Aws::String>&& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns = std::move(value); }

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline TeamsChannelConfiguration& WithGuardrailPolicyArns(const Aws::Vector<Aws::String>& value) { SetGuardrailPolicyArns(value); return *this;}

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline TeamsChannelConfiguration& WithGuardrailPolicyArns(Aws::Vector<Aws::String>&& value) { SetGuardrailPolicyArns(std::move(value)); return *this;}

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline TeamsChannelConfiguration& AddGuardrailPolicyArns(const Aws::String& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(value); return *this; }

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline TeamsChannelConfiguration& AddGuardrailPolicyArns(Aws::String&& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(std::move(value)); return *this; }

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline TeamsChannelConfiguration& AddGuardrailPolicyArns(const char* value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(value); return *this; }


    /**
     * Enables use of a user role requirement in your chat configuration.
     */
    inline bool GetUserAuthorizationRequired() const{ return m_userAuthorizationRequired; }

    /**
     * Enables use of a user role requirement in your chat configuration.
     */
    inline bool UserAuthorizationRequiredHasBeenSet() const { return m_userAuthorizationRequiredHasBeenSet; }

    /**
     * Enables use of a user role requirement in your chat configuration.
     */
    inline void SetUserAuthorizationRequired(bool value) { m_userAuthorizationRequiredHasBeenSet = true; m_userAuthorizationRequired = value; }

    /**
     * Enables use of a user role requirement in your chat configuration.
     */
    inline TeamsChannelConfiguration& WithUserAuthorizationRequired(bool value) { SetUserAuthorizationRequired(value); return *this;}

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
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
