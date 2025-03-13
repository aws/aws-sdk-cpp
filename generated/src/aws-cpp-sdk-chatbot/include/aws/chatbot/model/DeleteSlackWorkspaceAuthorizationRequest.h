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
  class DeleteSlackWorkspaceAuthorizationRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API DeleteSlackWorkspaceAuthorizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSlackWorkspaceAuthorization"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Slack workspace authorized with AWS Chatbot.</p>
     */
    inline const Aws::String& GetSlackTeamId() const { return m_slackTeamId; }
    inline bool SlackTeamIdHasBeenSet() const { return m_slackTeamIdHasBeenSet; }
    template<typename SlackTeamIdT = Aws::String>
    void SetSlackTeamId(SlackTeamIdT&& value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId = std::forward<SlackTeamIdT>(value); }
    template<typename SlackTeamIdT = Aws::String>
    DeleteSlackWorkspaceAuthorizationRequest& WithSlackTeamId(SlackTeamIdT&& value) { SetSlackTeamId(std::forward<SlackTeamIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_slackTeamId;
    bool m_slackTeamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
