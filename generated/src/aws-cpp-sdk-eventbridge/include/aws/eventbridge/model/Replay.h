/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ReplayState.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>A <code>Replay</code> object that contains details about a
   * replay.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/Replay">AWS
   * API Reference</a></p>
   */
  class Replay
  {
  public:
    AWS_EVENTBRIDGE_API Replay() = default;
    AWS_EVENTBRIDGE_API Replay(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Replay& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the replay.</p>
     */
    inline const Aws::String& GetReplayName() const { return m_replayName; }
    inline bool ReplayNameHasBeenSet() const { return m_replayNameHasBeenSet; }
    template<typename ReplayNameT = Aws::String>
    void SetReplayName(ReplayNameT&& value) { m_replayNameHasBeenSet = true; m_replayName = std::forward<ReplayNameT>(value); }
    template<typename ReplayNameT = Aws::String>
    Replay& WithReplayName(ReplayNameT&& value) { SetReplayName(std::forward<ReplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the archive to replay event from.</p>
     */
    inline const Aws::String& GetEventSourceArn() const { return m_eventSourceArn; }
    inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }
    template<typename EventSourceArnT = Aws::String>
    void SetEventSourceArn(EventSourceArnT&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::forward<EventSourceArnT>(value); }
    template<typename EventSourceArnT = Aws::String>
    Replay& WithEventSourceArn(EventSourceArnT&& value) { SetEventSourceArn(std::forward<EventSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the replay.</p>
     */
    inline ReplayState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ReplayState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Replay& WithState(ReplayState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of why the replay is in the current state.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    Replay& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time to start replaying events. This is determined by
     * the time in the event as described in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEventsRequestEntry.html#eventbridge-Type-PutEventsRequestEntry-Time">Time</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetEventStartTime() const { return m_eventStartTime; }
    inline bool EventStartTimeHasBeenSet() const { return m_eventStartTimeHasBeenSet; }
    template<typename EventStartTimeT = Aws::Utils::DateTime>
    void SetEventStartTime(EventStartTimeT&& value) { m_eventStartTimeHasBeenSet = true; m_eventStartTime = std::forward<EventStartTimeT>(value); }
    template<typename EventStartTimeT = Aws::Utils::DateTime>
    Replay& WithEventStartTime(EventStartTimeT&& value) { SetEventStartTime(std::forward<EventStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time to start replaying events. Any event with a
     * creation time prior to the <code>EventEndTime</code> specified is replayed.</p>
     */
    inline const Aws::Utils::DateTime& GetEventEndTime() const { return m_eventEndTime; }
    inline bool EventEndTimeHasBeenSet() const { return m_eventEndTimeHasBeenSet; }
    template<typename EventEndTimeT = Aws::Utils::DateTime>
    void SetEventEndTime(EventEndTimeT&& value) { m_eventEndTimeHasBeenSet = true; m_eventEndTime = std::forward<EventEndTimeT>(value); }
    template<typename EventEndTimeT = Aws::Utils::DateTime>
    Replay& WithEventEndTime(EventEndTimeT&& value) { SetEventEndTime(std::forward<EventEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the last event was replayed.</p>
     */
    inline const Aws::Utils::DateTime& GetEventLastReplayedTime() const { return m_eventLastReplayedTime; }
    inline bool EventLastReplayedTimeHasBeenSet() const { return m_eventLastReplayedTimeHasBeenSet; }
    template<typename EventLastReplayedTimeT = Aws::Utils::DateTime>
    void SetEventLastReplayedTime(EventLastReplayedTimeT&& value) { m_eventLastReplayedTimeHasBeenSet = true; m_eventLastReplayedTime = std::forward<EventLastReplayedTimeT>(value); }
    template<typename EventLastReplayedTimeT = Aws::Utils::DateTime>
    Replay& WithEventLastReplayedTime(EventLastReplayedTimeT&& value) { SetEventLastReplayedTime(std::forward<EventLastReplayedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the replay started.</p>
     */
    inline const Aws::Utils::DateTime& GetReplayStartTime() const { return m_replayStartTime; }
    inline bool ReplayStartTimeHasBeenSet() const { return m_replayStartTimeHasBeenSet; }
    template<typename ReplayStartTimeT = Aws::Utils::DateTime>
    void SetReplayStartTime(ReplayStartTimeT&& value) { m_replayStartTimeHasBeenSet = true; m_replayStartTime = std::forward<ReplayStartTimeT>(value); }
    template<typename ReplayStartTimeT = Aws::Utils::DateTime>
    Replay& WithReplayStartTime(ReplayStartTimeT&& value) { SetReplayStartTime(std::forward<ReplayStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the replay completed.</p>
     */
    inline const Aws::Utils::DateTime& GetReplayEndTime() const { return m_replayEndTime; }
    inline bool ReplayEndTimeHasBeenSet() const { return m_replayEndTimeHasBeenSet; }
    template<typename ReplayEndTimeT = Aws::Utils::DateTime>
    void SetReplayEndTime(ReplayEndTimeT&& value) { m_replayEndTimeHasBeenSet = true; m_replayEndTime = std::forward<ReplayEndTimeT>(value); }
    template<typename ReplayEndTimeT = Aws::Utils::DateTime>
    Replay& WithReplayEndTime(ReplayEndTimeT&& value) { SetReplayEndTime(std::forward<ReplayEndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replayName;
    bool m_replayNameHasBeenSet = false;

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet = false;

    ReplayState m_state{ReplayState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Utils::DateTime m_eventStartTime{};
    bool m_eventStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_eventEndTime{};
    bool m_eventEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_eventLastReplayedTime{};
    bool m_eventLastReplayedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replayStartTime{};
    bool m_replayStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replayEndTime{};
    bool m_replayEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
