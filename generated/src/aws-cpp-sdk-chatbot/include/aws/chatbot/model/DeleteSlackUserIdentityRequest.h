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
    AWS_CHATBOT_API DeleteSlackUserIdentityRequest() = default;

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
    inline const Aws::String& GetChatConfigurationArn() const { return m_chatConfigurationArn; }
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }
    template<typename ChatConfigurationArnT = Aws::String>
    void SetChatConfigurationArn(ChatConfigurationArnT&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::forward<ChatConfigurationArnT>(value); }
    template<typename ChatConfigurationArnT = Aws::String>
    DeleteSlackUserIdentityRequest& WithChatConfigurationArn(ChatConfigurationArnT&& value) { SetChatConfigurationArn(std::forward<ChatConfigurationArnT>(value)); return *this;}
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
    DeleteSlackUserIdentityRequest& WithSlackTeamId(SlackTeamIdT&& value) { SetSlackTeamId(std::forward<SlackTeamIdT>(value)); return *this;}
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
    DeleteSlackUserIdentityRequest& WithSlackUserId(SlackUserIdT&& value) { SetSlackUserId(std::forward<SlackUserIdT>(value)); return *this;}
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
