/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ParticipantState.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the state transition of a supervisor.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StateTransition">AWS
   * API Reference</a></p>
   */
  class StateTransition
  {
  public:
    AWS_CONNECT_API StateTransition() = default;
    AWS_CONNECT_API StateTransition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API StateTransition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the transition.</p>
     */
    inline ParticipantState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ParticipantState value) { m_stateHasBeenSet = true; m_state = value; }
    inline StateTransition& WithState(ParticipantState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the state started in UTC time.</p>
     */
    inline const Aws::Utils::DateTime& GetStateStartTimestamp() const { return m_stateStartTimestamp; }
    inline bool StateStartTimestampHasBeenSet() const { return m_stateStartTimestampHasBeenSet; }
    template<typename StateStartTimestampT = Aws::Utils::DateTime>
    void SetStateStartTimestamp(StateStartTimestampT&& value) { m_stateStartTimestampHasBeenSet = true; m_stateStartTimestamp = std::forward<StateStartTimestampT>(value); }
    template<typename StateStartTimestampT = Aws::Utils::DateTime>
    StateTransition& WithStateStartTimestamp(StateStartTimestampT&& value) { SetStateStartTimestamp(std::forward<StateStartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the state ended in UTC time.</p>
     */
    inline const Aws::Utils::DateTime& GetStateEndTimestamp() const { return m_stateEndTimestamp; }
    inline bool StateEndTimestampHasBeenSet() const { return m_stateEndTimestampHasBeenSet; }
    template<typename StateEndTimestampT = Aws::Utils::DateTime>
    void SetStateEndTimestamp(StateEndTimestampT&& value) { m_stateEndTimestampHasBeenSet = true; m_stateEndTimestamp = std::forward<StateEndTimestampT>(value); }
    template<typename StateEndTimestampT = Aws::Utils::DateTime>
    StateTransition& WithStateEndTimestamp(StateEndTimestampT&& value) { SetStateEndTimestamp(std::forward<StateEndTimestampT>(value)); return *this;}
    ///@}
  private:

    ParticipantState m_state{ParticipantState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_stateStartTimestamp{};
    bool m_stateStartTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_stateEndTimestamp{};
    bool m_stateEndTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
