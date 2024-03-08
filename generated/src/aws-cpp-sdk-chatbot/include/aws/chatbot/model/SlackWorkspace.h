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
   * A Slack Workspace.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/SlackWorkspace">AWS
   * API Reference</a></p>
   */
  class SlackWorkspace
  {
  public:
    AWS_CHATBOT_API SlackWorkspace();
    AWS_CHATBOT_API SlackWorkspace(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API SlackWorkspace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline SlackWorkspace& WithSlackTeamId(const Aws::String& value) { SetSlackTeamId(value); return *this;}

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline SlackWorkspace& WithSlackTeamId(Aws::String&& value) { SetSlackTeamId(std::move(value)); return *this;}

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline SlackWorkspace& WithSlackTeamId(const char* value) { SetSlackTeamId(value); return *this;}


    /**
     * Name of the Slack Workspace.
     */
    inline const Aws::String& GetSlackTeamName() const{ return m_slackTeamName; }

    /**
     * Name of the Slack Workspace.
     */
    inline bool SlackTeamNameHasBeenSet() const { return m_slackTeamNameHasBeenSet; }

    /**
     * Name of the Slack Workspace.
     */
    inline void SetSlackTeamName(const Aws::String& value) { m_slackTeamNameHasBeenSet = true; m_slackTeamName = value; }

    /**
     * Name of the Slack Workspace.
     */
    inline void SetSlackTeamName(Aws::String&& value) { m_slackTeamNameHasBeenSet = true; m_slackTeamName = std::move(value); }

    /**
     * Name of the Slack Workspace.
     */
    inline void SetSlackTeamName(const char* value) { m_slackTeamNameHasBeenSet = true; m_slackTeamName.assign(value); }

    /**
     * Name of the Slack Workspace.
     */
    inline SlackWorkspace& WithSlackTeamName(const Aws::String& value) { SetSlackTeamName(value); return *this;}

    /**
     * Name of the Slack Workspace.
     */
    inline SlackWorkspace& WithSlackTeamName(Aws::String&& value) { SetSlackTeamName(std::move(value)); return *this;}

    /**
     * Name of the Slack Workspace.
     */
    inline SlackWorkspace& WithSlackTeamName(const char* value) { SetSlackTeamName(value); return *this;}

  private:

    Aws::String m_slackTeamId;
    bool m_slackTeamIdHasBeenSet = false;

    Aws::String m_slackTeamName;
    bool m_slackTeamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
