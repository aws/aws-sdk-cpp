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
   * <p>A Slack workspace. </p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>The ID of the Slack workspace authorized with AWS Chatbot.</p>
     */
    inline const Aws::String& GetSlackTeamId() const{ return m_slackTeamId; }
    inline bool SlackTeamIdHasBeenSet() const { return m_slackTeamIdHasBeenSet; }
    inline void SetSlackTeamId(const Aws::String& value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId = value; }
    inline void SetSlackTeamId(Aws::String&& value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId = std::move(value); }
    inline void SetSlackTeamId(const char* value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId.assign(value); }
    inline SlackWorkspace& WithSlackTeamId(const Aws::String& value) { SetSlackTeamId(value); return *this;}
    inline SlackWorkspace& WithSlackTeamId(Aws::String&& value) { SetSlackTeamId(std::move(value)); return *this;}
    inline SlackWorkspace& WithSlackTeamId(const char* value) { SetSlackTeamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline const Aws::String& GetSlackTeamName() const{ return m_slackTeamName; }
    inline bool SlackTeamNameHasBeenSet() const { return m_slackTeamNameHasBeenSet; }
    inline void SetSlackTeamName(const Aws::String& value) { m_slackTeamNameHasBeenSet = true; m_slackTeamName = value; }
    inline void SetSlackTeamName(Aws::String&& value) { m_slackTeamNameHasBeenSet = true; m_slackTeamName = std::move(value); }
    inline void SetSlackTeamName(const char* value) { m_slackTeamNameHasBeenSet = true; m_slackTeamName.assign(value); }
    inline SlackWorkspace& WithSlackTeamName(const Aws::String& value) { SetSlackTeamName(value); return *this;}
    inline SlackWorkspace& WithSlackTeamName(Aws::String&& value) { SetSlackTeamName(std::move(value)); return *this;}
    inline SlackWorkspace& WithSlackTeamName(const char* value) { SetSlackTeamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Either <code>ENABLED</code> or <code>DISABLED</code>. The resource returns
     * <code>DISABLED</code> if the organization's AWS Chatbot policy has explicitly
     * denied that configuration. For example, if Amazon Chime is disabled.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline SlackWorkspace& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline SlackWorkspace& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline SlackWorkspace& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provided if State is <code>DISABLED</code>. Provides context as to why the
     * resource is disabled.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }
    inline SlackWorkspace& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}
    inline SlackWorkspace& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}
    inline SlackWorkspace& WithStateReason(const char* value) { SetStateReason(value); return *this;}
    ///@}
  private:

    Aws::String m_slackTeamId;
    bool m_slackTeamIdHasBeenSet = false;

    Aws::String m_slackTeamName;
    bool m_slackTeamNameHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
