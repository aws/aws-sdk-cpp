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
   * <p>Identifes a user level permission for a channel configuration. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/SlackUserIdentity">AWS
   * API Reference</a></p>
   */
  class SlackUserIdentity
  {
  public:
    AWS_CHATBOT_API SlackUserIdentity() = default;
    AWS_CHATBOT_API SlackUserIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API SlackUserIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    SlackUserIdentity& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SlackChannelConfiguration associated
     * with the user identity to delete.</p>
     */
    inline const Aws::String& GetChatConfigurationArn() const { return m_chatConfigurationArn; }
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }
    template<typename ChatConfigurationArnT = Aws::String>
    void SetChatConfigurationArn(ChatConfigurationArnT&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::forward<ChatConfigurationArnT>(value); }
    template<typename ChatConfigurationArnT = Aws::String>
    SlackUserIdentity& WithChatConfigurationArn(ChatConfigurationArnT&& value) { SetChatConfigurationArn(std::forward<ChatConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Slack workspace authorized with AWS Chatbot.</p>
     */
    inline const Aws::String& GetSlackTeamId() const { return m_slackTeamId; }
    inline bool SlackTeamIdHasBeenSet() const { return m_slackTeamIdHasBeenSet; }
    template<typename SlackTeamIdT = Aws::String>
    void SetSlackTeamId(SlackTeamIdT&& value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId = std::forward<SlackTeamIdT>(value); }
    template<typename SlackTeamIdT = Aws::String>
    SlackUserIdentity& WithSlackTeamId(SlackTeamIdT&& value) { SetSlackTeamId(std::forward<SlackTeamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user in Slack</p>
     */
    inline const Aws::String& GetSlackUserId() const { return m_slackUserId; }
    inline bool SlackUserIdHasBeenSet() const { return m_slackUserIdHasBeenSet; }
    template<typename SlackUserIdT = Aws::String>
    void SetSlackUserId(SlackUserIdT&& value) { m_slackUserIdHasBeenSet = true; m_slackUserId = std::forward<SlackUserIdT>(value); }
    template<typename SlackUserIdT = Aws::String>
    SlackUserIdentity& WithSlackUserId(SlackUserIdT&& value) { SetSlackUserId(std::forward<SlackUserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS user identity ARN used to associate a Slack user ID with an IAM
     * Role.</p>
     */
    inline const Aws::String& GetAwsUserIdentity() const { return m_awsUserIdentity; }
    inline bool AwsUserIdentityHasBeenSet() const { return m_awsUserIdentityHasBeenSet; }
    template<typename AwsUserIdentityT = Aws::String>
    void SetAwsUserIdentity(AwsUserIdentityT&& value) { m_awsUserIdentityHasBeenSet = true; m_awsUserIdentity = std::forward<AwsUserIdentityT>(value); }
    template<typename AwsUserIdentityT = Aws::String>
    SlackUserIdentity& WithAwsUserIdentity(AwsUserIdentityT&& value) { SetAwsUserIdentity(std::forward<AwsUserIdentityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_chatConfigurationArn;
    bool m_chatConfigurationArnHasBeenSet = false;

    Aws::String m_slackTeamId;
    bool m_slackTeamIdHasBeenSet = false;

    Aws::String m_slackUserId;
    bool m_slackUserIdHasBeenSet = false;

    Aws::String m_awsUserIdentity;
    bool m_awsUserIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
