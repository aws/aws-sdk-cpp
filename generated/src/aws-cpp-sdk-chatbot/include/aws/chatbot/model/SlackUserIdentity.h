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
   * Identifes a User level permission for a channel configuration.<p><h3>See
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
    inline SlackUserIdentity& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline SlackUserIdentity& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline SlackUserIdentity& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * The ARN of the SlackChannelConfiguration associated with the user identity.
     */
    inline const Aws::String& GetChatConfigurationArn() const{ return m_chatConfigurationArn; }

    /**
     * The ARN of the SlackChannelConfiguration associated with the user identity.
     */
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }

    /**
     * The ARN of the SlackChannelConfiguration associated with the user identity.
     */
    inline void SetChatConfigurationArn(const Aws::String& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = value; }

    /**
     * The ARN of the SlackChannelConfiguration associated with the user identity.
     */
    inline void SetChatConfigurationArn(Aws::String&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::move(value); }

    /**
     * The ARN of the SlackChannelConfiguration associated with the user identity.
     */
    inline void SetChatConfigurationArn(const char* value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn.assign(value); }

    /**
     * The ARN of the SlackChannelConfiguration associated with the user identity.
     */
    inline SlackUserIdentity& WithChatConfigurationArn(const Aws::String& value) { SetChatConfigurationArn(value); return *this;}

    /**
     * The ARN of the SlackChannelConfiguration associated with the user identity.
     */
    inline SlackUserIdentity& WithChatConfigurationArn(Aws::String&& value) { SetChatConfigurationArn(std::move(value)); return *this;}

    /**
     * The ARN of the SlackChannelConfiguration associated with the user identity.
     */
    inline SlackUserIdentity& WithChatConfigurationArn(const char* value) { SetChatConfigurationArn(value); return *this;}


    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline const Aws::String& GetSlackTeamId() const{ return m_slackTeamId; }

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline bool SlackTeamIdHasBeenSet() const { return m_slackTeamIdHasBeenSet; }

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline void SetSlackTeamId(const Aws::String& value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId = value; }

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline void SetSlackTeamId(Aws::String&& value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId = std::move(value); }

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline void SetSlackTeamId(const char* value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId.assign(value); }

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline SlackUserIdentity& WithSlackTeamId(const Aws::String& value) { SetSlackTeamId(value); return *this;}

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline SlackUserIdentity& WithSlackTeamId(Aws::String&& value) { SetSlackTeamId(std::move(value)); return *this;}

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline SlackUserIdentity& WithSlackTeamId(const char* value) { SetSlackTeamId(value); return *this;}


    /**
     * The ID of the user in Slack.
     */
    inline const Aws::String& GetSlackUserId() const{ return m_slackUserId; }

    /**
     * The ID of the user in Slack.
     */
    inline bool SlackUserIdHasBeenSet() const { return m_slackUserIdHasBeenSet; }

    /**
     * The ID of the user in Slack.
     */
    inline void SetSlackUserId(const Aws::String& value) { m_slackUserIdHasBeenSet = true; m_slackUserId = value; }

    /**
     * The ID of the user in Slack.
     */
    inline void SetSlackUserId(Aws::String&& value) { m_slackUserIdHasBeenSet = true; m_slackUserId = std::move(value); }

    /**
     * The ID of the user in Slack.
     */
    inline void SetSlackUserId(const char* value) { m_slackUserIdHasBeenSet = true; m_slackUserId.assign(value); }

    /**
     * The ID of the user in Slack.
     */
    inline SlackUserIdentity& WithSlackUserId(const Aws::String& value) { SetSlackUserId(value); return *this;}

    /**
     * The ID of the user in Slack.
     */
    inline SlackUserIdentity& WithSlackUserId(Aws::String&& value) { SetSlackUserId(std::move(value)); return *this;}

    /**
     * The ID of the user in Slack.
     */
    inline SlackUserIdentity& WithSlackUserId(const char* value) { SetSlackUserId(value); return *this;}


    /**
     * The AWS user identity ARN used to associate a Slack User Identity with an IAM
     * Role.
     */
    inline const Aws::String& GetAwsUserIdentity() const{ return m_awsUserIdentity; }

    /**
     * The AWS user identity ARN used to associate a Slack User Identity with an IAM
     * Role.
     */
    inline bool AwsUserIdentityHasBeenSet() const { return m_awsUserIdentityHasBeenSet; }

    /**
     * The AWS user identity ARN used to associate a Slack User Identity with an IAM
     * Role.
     */
    inline void SetAwsUserIdentity(const Aws::String& value) { m_awsUserIdentityHasBeenSet = true; m_awsUserIdentity = value; }

    /**
     * The AWS user identity ARN used to associate a Slack User Identity with an IAM
     * Role.
     */
    inline void SetAwsUserIdentity(Aws::String&& value) { m_awsUserIdentityHasBeenSet = true; m_awsUserIdentity = std::move(value); }

    /**
     * The AWS user identity ARN used to associate a Slack User Identity with an IAM
     * Role.
     */
    inline void SetAwsUserIdentity(const char* value) { m_awsUserIdentityHasBeenSet = true; m_awsUserIdentity.assign(value); }

    /**
     * The AWS user identity ARN used to associate a Slack User Identity with an IAM
     * Role.
     */
    inline SlackUserIdentity& WithAwsUserIdentity(const Aws::String& value) { SetAwsUserIdentity(value); return *this;}

    /**
     * The AWS user identity ARN used to associate a Slack User Identity with an IAM
     * Role.
     */
    inline SlackUserIdentity& WithAwsUserIdentity(Aws::String&& value) { SetAwsUserIdentity(std::move(value)); return *this;}

    /**
     * The AWS user identity ARN used to associate a Slack User Identity with an IAM
     * Role.
     */
    inline SlackUserIdentity& WithAwsUserIdentity(const char* value) { SetAwsUserIdentity(value); return *this;}

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
