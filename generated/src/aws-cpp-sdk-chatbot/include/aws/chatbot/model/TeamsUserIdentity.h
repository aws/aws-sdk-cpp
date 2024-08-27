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
   * <p>Identifes a user level permission for a channel configuration.</p><p><h3>See
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
    inline TeamsUserIdentity& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline TeamsUserIdentity& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline TeamsUserIdentity& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
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
    inline TeamsUserIdentity& WithChatConfigurationArn(const Aws::String& value) { SetChatConfigurationArn(value); return *this;}
    inline TeamsUserIdentity& WithChatConfigurationArn(Aws::String&& value) { SetChatConfigurationArn(std::move(value)); return *this;}
    inline TeamsUserIdentity& WithChatConfigurationArn(const char* value) { SetChatConfigurationArn(value); return *this;}
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
    inline TeamsUserIdentity& WithTeamId(const Aws::String& value) { SetTeamId(value); return *this;}
    inline TeamsUserIdentity& WithTeamId(Aws::String&& value) { SetTeamId(std::move(value)); return *this;}
    inline TeamsUserIdentity& WithTeamId(const char* value) { SetTeamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Microsoft Teams user ID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline TeamsUserIdentity& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline TeamsUserIdentity& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline TeamsUserIdentity& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS user identity ARN used to associate a Microsoft Teams user Identity
     * with an IAM Role.</p>
     */
    inline const Aws::String& GetAwsUserIdentity() const{ return m_awsUserIdentity; }
    inline bool AwsUserIdentityHasBeenSet() const { return m_awsUserIdentityHasBeenSet; }
    inline void SetAwsUserIdentity(const Aws::String& value) { m_awsUserIdentityHasBeenSet = true; m_awsUserIdentity = value; }
    inline void SetAwsUserIdentity(Aws::String&& value) { m_awsUserIdentityHasBeenSet = true; m_awsUserIdentity = std::move(value); }
    inline void SetAwsUserIdentity(const char* value) { m_awsUserIdentityHasBeenSet = true; m_awsUserIdentity.assign(value); }
    inline TeamsUserIdentity& WithAwsUserIdentity(const Aws::String& value) { SetAwsUserIdentity(value); return *this;}
    inline TeamsUserIdentity& WithAwsUserIdentity(Aws::String&& value) { SetAwsUserIdentity(std::move(value)); return *this;}
    inline TeamsUserIdentity& WithAwsUserIdentity(const char* value) { SetAwsUserIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Microsoft Teams channel.</p>
     */
    inline const Aws::String& GetTeamsChannelId() const{ return m_teamsChannelId; }
    inline bool TeamsChannelIdHasBeenSet() const { return m_teamsChannelIdHasBeenSet; }
    inline void SetTeamsChannelId(const Aws::String& value) { m_teamsChannelIdHasBeenSet = true; m_teamsChannelId = value; }
    inline void SetTeamsChannelId(Aws::String&& value) { m_teamsChannelIdHasBeenSet = true; m_teamsChannelId = std::move(value); }
    inline void SetTeamsChannelId(const char* value) { m_teamsChannelIdHasBeenSet = true; m_teamsChannelId.assign(value); }
    inline TeamsUserIdentity& WithTeamsChannelId(const Aws::String& value) { SetTeamsChannelId(value); return *this;}
    inline TeamsUserIdentity& WithTeamsChannelId(Aws::String&& value) { SetTeamsChannelId(std::move(value)); return *this;}
    inline TeamsUserIdentity& WithTeamsChannelId(const char* value) { SetTeamsChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Microsoft Teams tenant.</p>
     */
    inline const Aws::String& GetTeamsTenantId() const{ return m_teamsTenantId; }
    inline bool TeamsTenantIdHasBeenSet() const { return m_teamsTenantIdHasBeenSet; }
    inline void SetTeamsTenantId(const Aws::String& value) { m_teamsTenantIdHasBeenSet = true; m_teamsTenantId = value; }
    inline void SetTeamsTenantId(Aws::String&& value) { m_teamsTenantIdHasBeenSet = true; m_teamsTenantId = std::move(value); }
    inline void SetTeamsTenantId(const char* value) { m_teamsTenantIdHasBeenSet = true; m_teamsTenantId.assign(value); }
    inline TeamsUserIdentity& WithTeamsTenantId(const Aws::String& value) { SetTeamsTenantId(value); return *this;}
    inline TeamsUserIdentity& WithTeamsTenantId(Aws::String&& value) { SetTeamsTenantId(std::move(value)); return *this;}
    inline TeamsUserIdentity& WithTeamsTenantId(const char* value) { SetTeamsTenantId(value); return *this;}
    ///@}
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
