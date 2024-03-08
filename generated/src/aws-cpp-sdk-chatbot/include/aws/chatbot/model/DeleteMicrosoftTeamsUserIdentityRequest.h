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
  class DeleteMicrosoftTeamsUserIdentityRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API DeleteMicrosoftTeamsUserIdentityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMicrosoftTeamsUserIdentity"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity to delete.
     */
    inline const Aws::String& GetChatConfigurationArn() const{ return m_chatConfigurationArn; }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity to delete.
     */
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity to delete.
     */
    inline void SetChatConfigurationArn(const Aws::String& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = value; }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity to delete.
     */
    inline void SetChatConfigurationArn(Aws::String&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::move(value); }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity to delete.
     */
    inline void SetChatConfigurationArn(const char* value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn.assign(value); }

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity to delete.
     */
    inline DeleteMicrosoftTeamsUserIdentityRequest& WithChatConfigurationArn(const Aws::String& value) { SetChatConfigurationArn(value); return *this;}

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity to delete.
     */
    inline DeleteMicrosoftTeamsUserIdentityRequest& WithChatConfigurationArn(Aws::String&& value) { SetChatConfigurationArn(std::move(value)); return *this;}

    /**
     * The ARN of the MicrosoftTeamsChannelConfiguration associated with the user
     * identity to delete.
     */
    inline DeleteMicrosoftTeamsUserIdentityRequest& WithChatConfigurationArn(const char* value) { SetChatConfigurationArn(value); return *this;}


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
    inline DeleteMicrosoftTeamsUserIdentityRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * Id from Microsoft Teams for user.
     */
    inline DeleteMicrosoftTeamsUserIdentityRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * Id from Microsoft Teams for user.
     */
    inline DeleteMicrosoftTeamsUserIdentityRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_chatConfigurationArn;
    bool m_chatConfigurationArnHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
