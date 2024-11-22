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
    AWS_CHATBOT_API SlackUserIdentity();
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
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline SlackUserIdentity& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline SlackUserIdentity& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline SlackUserIdentity& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SlackChannelConfiguration associated
     * with the user identity to delete.</p>
     */
    inline const Aws::String& GetChatConfigurationArn() const{ return m_chatConfigurationArn; }
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }
    inline void SetChatConfigurationArn(const Aws::String& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = value; }
    inline void SetChatConfigurationArn(Aws::String&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::move(value); }
    inline void SetChatConfigurationArn(const char* value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn.assign(value); }
    inline SlackUserIdentity& WithChatConfigurationArn(const Aws::String& value) { SetChatConfigurationArn(value); return *this;}
    inline SlackUserIdentity& WithChatConfigurationArn(Aws::String&& value) { SetChatConfigurationArn(std::move(value)); return *this;}
    inline SlackUserIdentity& WithChatConfigurationArn(const char* value) { SetChatConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Slack workspace authorized with AWS Chatbot.</p>
     */
    inline const Aws::String& GetSlackTeamId() const{ return m_slackTeamId; }
    inline bool SlackTeamIdHasBeenSet() const { return m_slackTeamIdHasBeenSet; }
    inline void SetSlackTeamId(const Aws::String& value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId = value; }
    inline void SetSlackTeamId(Aws::String&& value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId = std::move(value); }
    inline void SetSlackTeamId(const char* value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId.assign(value); }
    inline SlackUserIdentity& WithSlackTeamId(const Aws::String& value) { SetSlackTeamId(value); return *this;}
    inline SlackUserIdentity& WithSlackTeamId(Aws::String&& value) { SetSlackTeamId(std::move(value)); return *this;}
    inline SlackUserIdentity& WithSlackTeamId(const char* value) { SetSlackTeamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user in Slack</p>
     */
    inline const Aws::String& GetSlackUserId() const{ return m_slackUserId; }
    inline bool SlackUserIdHasBeenSet() const { return m_slackUserIdHasBeenSet; }
    inline void SetSlackUserId(const Aws::String& value) { m_slackUserIdHasBeenSet = true; m_slackUserId = value; }
    inline void SetSlackUserId(Aws::String&& value) { m_slackUserIdHasBeenSet = true; m_slackUserId = std::move(value); }
    inline void SetSlackUserId(const char* value) { m_slackUserIdHasBeenSet = true; m_slackUserId.assign(value); }
    inline SlackUserIdentity& WithSlackUserId(const Aws::String& value) { SetSlackUserId(value); return *this;}
    inline SlackUserIdentity& WithSlackUserId(Aws::String&& value) { SetSlackUserId(std::move(value)); return *this;}
    inline SlackUserIdentity& WithSlackUserId(const char* value) { SetSlackUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS user identity ARN used to associate a Slack user ID with an IAM
     * Role.</p>
     */
    inline const Aws::String& GetAwsUserIdentity() const{ return m_awsUserIdentity; }
    inline bool AwsUserIdentityHasBeenSet() const { return m_awsUserIdentityHasBeenSet; }
    inline void SetAwsUserIdentity(const Aws::String& value) { m_awsUserIdentityHasBeenSet = true; m_awsUserIdentity = value; }
    inline void SetAwsUserIdentity(Aws::String&& value) { m_awsUserIdentityHasBeenSet = true; m_awsUserIdentity = std::move(value); }
    inline void SetAwsUserIdentity(const char* value) { m_awsUserIdentityHasBeenSet = true; m_awsUserIdentity.assign(value); }
    inline SlackUserIdentity& WithAwsUserIdentity(const Aws::String& value) { SetAwsUserIdentity(value); return *this;}
    inline SlackUserIdentity& WithAwsUserIdentity(Aws::String&& value) { SetAwsUserIdentity(std::move(value)); return *this;}
    inline SlackUserIdentity& WithAwsUserIdentity(const char* value) { SetAwsUserIdentity(value); return *this;}
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
