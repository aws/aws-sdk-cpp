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
    AWS_CHATBOT_API SlackWorkspace() = default;
    AWS_CHATBOT_API SlackWorkspace(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API SlackWorkspace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Slack workspace authorized with AWS Chatbot.</p>
     */
    inline const Aws::String& GetSlackTeamId() const { return m_slackTeamId; }
    inline bool SlackTeamIdHasBeenSet() const { return m_slackTeamIdHasBeenSet; }
    template<typename SlackTeamIdT = Aws::String>
    void SetSlackTeamId(SlackTeamIdT&& value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId = std::forward<SlackTeamIdT>(value); }
    template<typename SlackTeamIdT = Aws::String>
    SlackWorkspace& WithSlackTeamId(SlackTeamIdT&& value) { SetSlackTeamId(std::forward<SlackTeamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline const Aws::String& GetSlackTeamName() const { return m_slackTeamName; }
    inline bool SlackTeamNameHasBeenSet() const { return m_slackTeamNameHasBeenSet; }
    template<typename SlackTeamNameT = Aws::String>
    void SetSlackTeamName(SlackTeamNameT&& value) { m_slackTeamNameHasBeenSet = true; m_slackTeamName = std::forward<SlackTeamNameT>(value); }
    template<typename SlackTeamNameT = Aws::String>
    SlackWorkspace& WithSlackTeamName(SlackTeamNameT&& value) { SetSlackTeamName(std::forward<SlackTeamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Either <code>ENABLED</code> or <code>DISABLED</code>. The resource returns
     * <code>DISABLED</code> if the organization's AWS Chatbot policy has explicitly
     * denied that configuration. For example, if Amazon Chime is disabled.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    SlackWorkspace& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provided if State is <code>DISABLED</code>. Provides context as to why the
     * resource is disabled.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    SlackWorkspace& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
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
