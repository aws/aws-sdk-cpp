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
    AWS_CHATBOT_API TeamsUserIdentity() = default;
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
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    TeamsUserIdentity& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
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
    TeamsUserIdentity& WithChatConfigurationArn(ChatConfigurationArnT&& value) { SetChatConfigurationArn(std::forward<ChatConfigurationArnT>(value)); return *this;}
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
    TeamsUserIdentity& WithTeamId(TeamIdT&& value) { SetTeamId(std::forward<TeamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Microsoft Teams user ID.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    TeamsUserIdentity& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS user identity ARN used to associate a Microsoft Teams user Identity
     * with an IAM Role.</p>
     */
    inline const Aws::String& GetAwsUserIdentity() const { return m_awsUserIdentity; }
    inline bool AwsUserIdentityHasBeenSet() const { return m_awsUserIdentityHasBeenSet; }
    template<typename AwsUserIdentityT = Aws::String>
    void SetAwsUserIdentity(AwsUserIdentityT&& value) { m_awsUserIdentityHasBeenSet = true; m_awsUserIdentity = std::forward<AwsUserIdentityT>(value); }
    template<typename AwsUserIdentityT = Aws::String>
    TeamsUserIdentity& WithAwsUserIdentity(AwsUserIdentityT&& value) { SetAwsUserIdentity(std::forward<AwsUserIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Microsoft Teams channel.</p>
     */
    inline const Aws::String& GetTeamsChannelId() const { return m_teamsChannelId; }
    inline bool TeamsChannelIdHasBeenSet() const { return m_teamsChannelIdHasBeenSet; }
    template<typename TeamsChannelIdT = Aws::String>
    void SetTeamsChannelId(TeamsChannelIdT&& value) { m_teamsChannelIdHasBeenSet = true; m_teamsChannelId = std::forward<TeamsChannelIdT>(value); }
    template<typename TeamsChannelIdT = Aws::String>
    TeamsUserIdentity& WithTeamsChannelId(TeamsChannelIdT&& value) { SetTeamsChannelId(std::forward<TeamsChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Microsoft Teams tenant.</p>
     */
    inline const Aws::String& GetTeamsTenantId() const { return m_teamsTenantId; }
    inline bool TeamsTenantIdHasBeenSet() const { return m_teamsTenantIdHasBeenSet; }
    template<typename TeamsTenantIdT = Aws::String>
    void SetTeamsTenantId(TeamsTenantIdT&& value) { m_teamsTenantIdHasBeenSet = true; m_teamsTenantId = std::forward<TeamsTenantIdT>(value); }
    template<typename TeamsTenantIdT = Aws::String>
    TeamsUserIdentity& WithTeamsTenantId(TeamsTenantIdT&& value) { SetTeamsTenantId(std::forward<TeamsTenantIdT>(value)); return *this;}
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
