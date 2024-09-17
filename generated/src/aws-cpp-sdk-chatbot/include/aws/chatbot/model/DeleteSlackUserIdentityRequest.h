/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/ChatbotRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace chatbot
{
namespace Model
{

  /**
   */
  class DeleteSlackUserIdentityRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API DeleteSlackUserIdentityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSlackUserIdentity"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the SlackChannelConfiguration associated with the user identity to
     * delete.</p>
     */
    inline const Aws::String& GetChatConfigurationArn() const{ return m_chatConfigurationArn; }
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }
    inline void SetChatConfigurationArn(const Aws::String& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = value; }
    inline void SetChatConfigurationArn(Aws::String&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::move(value); }
    inline void SetChatConfigurationArn(const char* value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn.assign(value); }
    inline DeleteSlackUserIdentityRequest& WithChatConfigurationArn(const Aws::String& value) { SetChatConfigurationArn(value); return *this;}
    inline DeleteSlackUserIdentityRequest& WithChatConfigurationArn(Aws::String&& value) { SetChatConfigurationArn(std::move(value)); return *this;}
    inline DeleteSlackUserIdentityRequest& WithChatConfigurationArn(const char* value) { SetChatConfigurationArn(value); return *this;}
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
    inline DeleteSlackUserIdentityRequest& WithSlackTeamId(const Aws::String& value) { SetSlackTeamId(value); return *this;}
    inline DeleteSlackUserIdentityRequest& WithSlackTeamId(Aws::String&& value) { SetSlackTeamId(std::move(value)); return *this;}
    inline DeleteSlackUserIdentityRequest& WithSlackTeamId(const char* value) { SetSlackTeamId(value); return *this;}
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
    inline DeleteSlackUserIdentityRequest& WithSlackUserId(const Aws::String& value) { SetSlackUserId(value); return *this;}
    inline DeleteSlackUserIdentityRequest& WithSlackUserId(Aws::String&& value) { SetSlackUserId(std::move(value)); return *this;}
    inline DeleteSlackUserIdentityRequest& WithSlackUserId(const char* value) { SetSlackUserId(value); return *this;}
    ///@}
  private:

    Aws::String m_chatConfigurationArn;
    bool m_chatConfigurationArnHasBeenSet = false;

    Aws::String m_slackTeamId;
    bool m_slackTeamIdHasBeenSet = false;

    Aws::String m_slackUserId;
    bool m_slackUserIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
