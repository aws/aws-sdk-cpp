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
  class DeleteMicrosoftTeamsConfiguredTeamRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API DeleteMicrosoftTeamsConfiguredTeamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMicrosoftTeamsConfiguredTeam"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Microsoft Teams team authorized with AWS Chatbot.</p> <p>To get
     * the team ID, you must perform the initial authorization flow with Microsoft
     * Teams in the AWS Chatbot console. Then you can copy and paste the team ID from
     * the console. For more information, see <a
     * href="https://docs.aws.amazon.com/chatbot/latest/adminguide/teams-setup.html#teams-client-setup">Step
     * 1: Configure a Microsoft Teams client</a> in the <i> AWS Chatbot Administrator
     * Guide</i>. </p>
     */
    inline const Aws::String& GetTeamId() const{ return m_teamId; }
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }
    inline void SetTeamId(const Aws::String& value) { m_teamIdHasBeenSet = true; m_teamId = value; }
    inline void SetTeamId(Aws::String&& value) { m_teamIdHasBeenSet = true; m_teamId = std::move(value); }
    inline void SetTeamId(const char* value) { m_teamIdHasBeenSet = true; m_teamId.assign(value); }
    inline DeleteMicrosoftTeamsConfiguredTeamRequest& WithTeamId(const Aws::String& value) { SetTeamId(value); return *this;}
    inline DeleteMicrosoftTeamsConfiguredTeamRequest& WithTeamId(Aws::String&& value) { SetTeamId(std::move(value)); return *this;}
    inline DeleteMicrosoftTeamsConfiguredTeamRequest& WithTeamId(const char* value) { SetTeamId(value); return *this;}
    ///@}
  private:

    Aws::String m_teamId;
    bool m_teamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
