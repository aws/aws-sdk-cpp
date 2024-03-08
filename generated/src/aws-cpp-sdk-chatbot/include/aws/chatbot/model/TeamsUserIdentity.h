/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Identifes a user level permission for a channel configuration.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/TeamsUserIdentity">AWS
   * API Reference</a></p>
   */
  class TeamsUserIdentity
  {
  public:
    AWS_CHATBOT_API TeamsUserIdentity();
    AWS_CHATBOT_API TeamsUserIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API TeamsUserIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline TeamsUserIdentity& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline TeamsUserIdentity& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline TeamsUserIdentity& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity.
     */
    inline const Aws::String& GetChatConfigurationArn() const{ return m_chatConfigurationArn; }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity.
     */
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity.
     */
    inline void SetChatConfigurationArn(const Aws::String& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = value; }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity.
     */
    inline void SetChatConfigurationArn(Aws::String&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::move(value); }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity.
     */
    inline void SetChatConfigurationArn(const char* value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn.assign(value); }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity.
     */
    inline TeamsUserIdentity& WithChatConfigurationArn(const Aws::String& value) { SetChatConfigurationArn(value); return *this;}

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity.
     */
    inline TeamsUserIdentity& WithChatConfigurationArn(Aws::String&& value) { SetChatConfigurationArn(std::move(value)); return *this;}

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity.
     */
    inline TeamsUserIdentity& WithChatConfigurationArn(const char* value) { SetChatConfigurationArn(value); return *this;}


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
    inline TeamsUserIdentity& WithTeamId(const Aws::String& value) { SetTeamId(value); return *this;}

    /**
     * The ID of the Microsoft Team authorized with AWS Chatbot. To get the team ID,
     * you must perform the initial authorization flow with Microsoft Teams in the AWS
     * Chatbot console. Then you can copy and paste the team ID from the console. For
     * more details, see steps 1-4 in Get started with Microsoft Teams in the AWS
     * Chatbot Administrator Guide.
     */
    inline TeamsUserIdentity& WithTeamId(Aws::String&& value) { SetTeamId(std::move(value)); return *this;}

    /**
     * The ID of the Microsoft Team authorized with AWS Chatbot. To get the team ID,
     * you must perform the initial authorization flow with Microsoft Teams in the AWS
     * Chatbot console. Then you can copy and paste the team ID from the console. For
     * more details, see steps 1-4 in Get started with Microsoft Teams in the AWS
     * Chatbot Administrator Guide.
     */
    inline TeamsUserIdentity& WithTeamId(const char* value) { SetTeamId(value); return *this;}


    /**
     * Id from Microsoft Teams for user.
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * Id from Microsoft Teams for user.
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * Id from Microsoft Teams for user.
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * Id from Microsoft Teams for user.
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * Id from Microsoft Teams for user.
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * Id from Microsoft Teams for user.
     */
    inline TeamsUserIdentity& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * Id from Microsoft Teams for user.
     */
    inline TeamsUserIdentity& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * Id from Microsoft Teams for user.
     */
    inline TeamsUserIdentity& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * The AWS user identity ARN used to associate a Microsoft Teams User Identity with
     * an IAM Role.
     */
    inline const Aws::String& GetAwsUserIdentity() const{ return m_awsUserIdentity; }

    /**
     * The AWS user identity ARN used to associate a Microsoft Teams User Identity with
     * an IAM Role.
     */
    inline bool AwsUserIdentityHasBeenSet() const { return m_awsUserIdentityHasBeenSet; }

    /**
     * The AWS user identity ARN used to associate a Microsoft Teams User Identity with
     * an IAM Role.
     */
    inline void SetAwsUserIdentity(const Aws::String& value) { m_awsUserIdentityHasBeenSet = true; m_awsUserIdentity = value; }

    /**
     * The AWS user identity ARN used to associate a Microsoft Teams User Identity with
     * an IAM Role.
     */
    inline void SetAwsUserIdentity(Aws::String&& value) { m_awsUserIdentityHasBeenSet = true; m_awsUserIdentity = std::move(value); }

    /**
     * The AWS user identity ARN used to associate a Microsoft Teams User Identity with
     * an IAM Role.
     */
    inline void SetAwsUserIdentity(const char* value) { m_awsUserIdentityHasBeenSet = true; m_awsUserIdentity.assign(value); }

    /**
     * The AWS user identity ARN used to associate a Microsoft Teams User Identity with
     * an IAM Role.
     */
    inline TeamsUserIdentity& WithAwsUserIdentity(const Aws::String& value) { SetAwsUserIdentity(value); return *this;}

    /**
     * The AWS user identity ARN used to associate a Microsoft Teams User Identity with
     * an IAM Role.
     */
    inline TeamsUserIdentity& WithAwsUserIdentity(Aws::String&& value) { SetAwsUserIdentity(std::move(value)); return *this;}

    /**
     * The AWS user identity ARN used to associate a Microsoft Teams User Identity with
     * an IAM Role.
     */
    inline TeamsUserIdentity& WithAwsUserIdentity(const char* value) { SetAwsUserIdentity(value); return *this;}


    /**
     * The ID of the Microsoft Teams channel.
     */
    inline const Aws::String& GetTeamsChannelId() const{ return m_teamsChannelId; }

    /**
     * The ID of the Microsoft Teams channel.
     */
    inline bool TeamsChannelIdHasBeenSet() const { return m_teamsChannelIdHasBeenSet; }

    /**
     * The ID of the Microsoft Teams channel.
     */
    inline void SetTeamsChannelId(const Aws::String& value) { m_teamsChannelIdHasBeenSet = true; m_teamsChannelId = value; }

    /**
     * The ID of the Microsoft Teams channel.
     */
    inline void SetTeamsChannelId(Aws::String&& value) { m_teamsChannelIdHasBeenSet = true; m_teamsChannelId = std::move(value); }

    /**
     * The ID of the Microsoft Teams channel.
     */
    inline void SetTeamsChannelId(const char* value) { m_teamsChannelIdHasBeenSet = true; m_teamsChannelId.assign(value); }

    /**
     * The ID of the Microsoft Teams channel.
     */
    inline TeamsUserIdentity& WithTeamsChannelId(const Aws::String& value) { SetTeamsChannelId(value); return *this;}

    /**
     * The ID of the Microsoft Teams channel.
     */
    inline TeamsUserIdentity& WithTeamsChannelId(Aws::String&& value) { SetTeamsChannelId(std::move(value)); return *this;}

    /**
     * The ID of the Microsoft Teams channel.
     */
    inline TeamsUserIdentity& WithTeamsChannelId(const char* value) { SetTeamsChannelId(value); return *this;}


    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline const Aws::String& GetTeamsTenantId() const{ return m_teamsTenantId; }

    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline bool TeamsTenantIdHasBeenSet() const { return m_teamsTenantIdHasBeenSet; }

    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline void SetTeamsTenantId(const Aws::String& value) { m_teamsTenantIdHasBeenSet = true; m_teamsTenantId = value; }

    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline void SetTeamsTenantId(Aws::String&& value) { m_teamsTenantIdHasBeenSet = true; m_teamsTenantId = std::move(value); }

    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline void SetTeamsTenantId(const char* value) { m_teamsTenantIdHasBeenSet = true; m_teamsTenantId.assign(value); }

    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline TeamsUserIdentity& WithTeamsTenantId(const Aws::String& value) { SetTeamsTenantId(value); return *this;}

    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline TeamsUserIdentity& WithTeamsTenantId(Aws::String&& value) { SetTeamsTenantId(std::move(value)); return *this;}

    /**
     * The ID of the Microsoft Teams tenant.
     */
    inline TeamsUserIdentity& WithTeamsTenantId(const char* value) { SetTeamsTenantId(value); return *this;}

  private:

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_chatConfigurationArn;
    bool m_chatConfigurationArnHasBeenSet = false;

    Aws::String m_teamId;
    bool m_teamIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_awsUserIdentity;
    bool m_awsUserIdentityHasBeenSet = false;

    Aws::String m_teamsChannelId;
    bool m_teamsChannelIdHasBeenSet = false;

    Aws::String m_teamsTenantId;
    bool m_teamsTenantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
