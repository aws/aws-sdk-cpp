/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ReplayState.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>A <code>Replay</code> object that contains details about a
   * replay.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/Replay">AWS API
   * Reference</a></p>
   */
  class Replay
  {
  public:
    AWS_CLOUDWATCHEVENTS_API Replay();
    AWS_CLOUDWATCHEVENTS_API Replay(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Replay& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the replay.</p>
     */
    inline const Aws::String& GetReplayName() const{ return m_replayName; }

    /**
     * <p>The name of the replay.</p>
     */
    inline bool ReplayNameHasBeenSet() const { return m_replayNameHasBeenSet; }

    /**
     * <p>The name of the replay.</p>
     */
    inline void SetReplayName(const Aws::String& value) { m_replayNameHasBeenSet = true; m_replayName = value; }

    /**
     * <p>The name of the replay.</p>
     */
    inline void SetReplayName(Aws::String&& value) { m_replayNameHasBeenSet = true; m_replayName = std::move(value); }

    /**
     * <p>The name of the replay.</p>
     */
    inline void SetReplayName(const char* value) { m_replayNameHasBeenSet = true; m_replayName.assign(value); }

    /**
     * <p>The name of the replay.</p>
     */
    inline Replay& WithReplayName(const Aws::String& value) { SetReplayName(value); return *this;}

    /**
     * <p>The name of the replay.</p>
     */
    inline Replay& WithReplayName(Aws::String&& value) { SetReplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the replay.</p>
     */
    inline Replay& WithReplayName(const char* value) { SetReplayName(value); return *this;}


    /**
     * <p>The ARN of the archive to replay event from.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /**
     * <p>The ARN of the archive to replay event from.</p>
     */
    inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }

    /**
     * <p>The ARN of the archive to replay event from.</p>
     */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = value; }

    /**
     * <p>The ARN of the archive to replay event from.</p>
     */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::move(value); }

    /**
     * <p>The ARN of the archive to replay event from.</p>
     */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn.assign(value); }

    /**
     * <p>The ARN of the archive to replay event from.</p>
     */
    inline Replay& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The ARN of the archive to replay event from.</p>
     */
    inline Replay& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the archive to replay event from.</p>
     */
    inline Replay& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}


    /**
     * <p>The current state of the replay.</p>
     */
    inline const ReplayState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the replay.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the replay.</p>
     */
    inline void SetState(const ReplayState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the replay.</p>
     */
    inline void SetState(ReplayState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the replay.</p>
     */
    inline Replay& WithState(const ReplayState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the replay.</p>
     */
    inline Replay& WithState(ReplayState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A description of why the replay is in the current state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>A description of why the replay is in the current state.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>A description of why the replay is in the current state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>A description of why the replay is in the current state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>A description of why the replay is in the current state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>A description of why the replay is in the current state.</p>
     */
    inline Replay& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>A description of why the replay is in the current state.</p>
     */
    inline Replay& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>A description of why the replay is in the current state.</p>
     */
    inline Replay& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>A time stamp for the time to start replaying events. This is determined by
     * the time in the event as described in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEventsRequestEntry.html#eventbridge-Type-PutEventsRequestEntry-Time">Time</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetEventStartTime() const{ return m_eventStartTime; }

    /**
     * <p>A time stamp for the time to start replaying events. This is determined by
     * the time in the event as described in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEventsRequestEntry.html#eventbridge-Type-PutEventsRequestEntry-Time">Time</a>.</p>
     */
    inline bool EventStartTimeHasBeenSet() const { return m_eventStartTimeHasBeenSet; }

    /**
     * <p>A time stamp for the time to start replaying events. This is determined by
     * the time in the event as described in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEventsRequestEntry.html#eventbridge-Type-PutEventsRequestEntry-Time">Time</a>.</p>
     */
    inline void SetEventStartTime(const Aws::Utils::DateTime& value) { m_eventStartTimeHasBeenSet = true; m_eventStartTime = value; }

    /**
     * <p>A time stamp for the time to start replaying events. This is determined by
     * the time in the event as described in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEventsRequestEntry.html#eventbridge-Type-PutEventsRequestEntry-Time">Time</a>.</p>
     */
    inline void SetEventStartTime(Aws::Utils::DateTime&& value) { m_eventStartTimeHasBeenSet = true; m_eventStartTime = std::move(value); }

    /**
     * <p>A time stamp for the time to start replaying events. This is determined by
     * the time in the event as described in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEventsRequestEntry.html#eventbridge-Type-PutEventsRequestEntry-Time">Time</a>.</p>
     */
    inline Replay& WithEventStartTime(const Aws::Utils::DateTime& value) { SetEventStartTime(value); return *this;}

    /**
     * <p>A time stamp for the time to start replaying events. This is determined by
     * the time in the event as described in <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEventsRequestEntry.html#eventbridge-Type-PutEventsRequestEntry-Time">Time</a>.</p>
     */
    inline Replay& WithEventStartTime(Aws::Utils::DateTime&& value) { SetEventStartTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time to start replaying events. Any event with a
     * creation time prior to the <code>EventEndTime</code> specified is replayed.</p>
     */
    inline const Aws::Utils::DateTime& GetEventEndTime() const{ return m_eventEndTime; }

    /**
     * <p>A time stamp for the time to start replaying events. Any event with a
     * creation time prior to the <code>EventEndTime</code> specified is replayed.</p>
     */
    inline bool EventEndTimeHasBeenSet() const { return m_eventEndTimeHasBeenSet; }

    /**
     * <p>A time stamp for the time to start replaying events. Any event with a
     * creation time prior to the <code>EventEndTime</code> specified is replayed.</p>
     */
    inline void SetEventEndTime(const Aws::Utils::DateTime& value) { m_eventEndTimeHasBeenSet = true; m_eventEndTime = value; }

    /**
     * <p>A time stamp for the time to start replaying events. Any event with a
     * creation time prior to the <code>EventEndTime</code> specified is replayed.</p>
     */
    inline void SetEventEndTime(Aws::Utils::DateTime&& value) { m_eventEndTimeHasBeenSet = true; m_eventEndTime = std::move(value); }

    /**
     * <p>A time stamp for the time to start replaying events. Any event with a
     * creation time prior to the <code>EventEndTime</code> specified is replayed.</p>
     */
    inline Replay& WithEventEndTime(const Aws::Utils::DateTime& value) { SetEventEndTime(value); return *this;}

    /**
     * <p>A time stamp for the time to start replaying events. Any event with a
     * creation time prior to the <code>EventEndTime</code> specified is replayed.</p>
     */
    inline Replay& WithEventEndTime(Aws::Utils::DateTime&& value) { SetEventEndTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time that the last event was replayed.</p>
     */
    inline const Aws::Utils::DateTime& GetEventLastReplayedTime() const{ return m_eventLastReplayedTime; }

    /**
     * <p>A time stamp for the time that the last event was replayed.</p>
     */
    inline bool EventLastReplayedTimeHasBeenSet() const { return m_eventLastReplayedTimeHasBeenSet; }

    /**
     * <p>A time stamp for the time that the last event was replayed.</p>
     */
    inline void SetEventLastReplayedTime(const Aws::Utils::DateTime& value) { m_eventLastReplayedTimeHasBeenSet = true; m_eventLastReplayedTime = value; }

    /**
     * <p>A time stamp for the time that the last event was replayed.</p>
     */
    inline void SetEventLastReplayedTime(Aws::Utils::DateTime&& value) { m_eventLastReplayedTimeHasBeenSet = true; m_eventLastReplayedTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the last event was replayed.</p>
     */
    inline Replay& WithEventLastReplayedTime(const Aws::Utils::DateTime& value) { SetEventLastReplayedTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the last event was replayed.</p>
     */
    inline Replay& WithEventLastReplayedTime(Aws::Utils::DateTime&& value) { SetEventLastReplayedTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time that the replay started.</p>
     */
    inline const Aws::Utils::DateTime& GetReplayStartTime() const{ return m_replayStartTime; }

    /**
     * <p>A time stamp for the time that the replay started.</p>
     */
    inline bool ReplayStartTimeHasBeenSet() const { return m_replayStartTimeHasBeenSet; }

    /**
     * <p>A time stamp for the time that the replay started.</p>
     */
    inline void SetReplayStartTime(const Aws::Utils::DateTime& value) { m_replayStartTimeHasBeenSet = true; m_replayStartTime = value; }

    /**
     * <p>A time stamp for the time that the replay started.</p>
     */
    inline void SetReplayStartTime(Aws::Utils::DateTime&& value) { m_replayStartTimeHasBeenSet = true; m_replayStartTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the replay started.</p>
     */
    inline Replay& WithReplayStartTime(const Aws::Utils::DateTime& value) { SetReplayStartTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the replay started.</p>
     */
    inline Replay& WithReplayStartTime(Aws::Utils::DateTime&& value) { SetReplayStartTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time that the replay completed.</p>
     */
    inline const Aws::Utils::DateTime& GetReplayEndTime() const{ return m_replayEndTime; }

    /**
     * <p>A time stamp for the time that the replay completed.</p>
     */
    inline bool ReplayEndTimeHasBeenSet() const { return m_replayEndTimeHasBeenSet; }

    /**
     * <p>A time stamp for the time that the replay completed.</p>
     */
    inline void SetReplayEndTime(const Aws::Utils::DateTime& value) { m_replayEndTimeHasBeenSet = true; m_replayEndTime = value; }

    /**
     * <p>A time stamp for the time that the replay completed.</p>
     */
    inline void SetReplayEndTime(Aws::Utils::DateTime&& value) { m_replayEndTimeHasBeenSet = true; m_replayEndTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the replay completed.</p>
     */
    inline Replay& WithReplayEndTime(const Aws::Utils::DateTime& value) { SetReplayEndTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the replay completed.</p>
     */
    inline Replay& WithReplayEndTime(Aws::Utils::DateTime&& value) { SetReplayEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_replayName;
    bool m_replayNameHasBeenSet = false;

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet = false;

    ReplayState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Utils::DateTime m_eventStartTime;
    bool m_eventStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_eventEndTime;
    bool m_eventEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_eventLastReplayedTime;
    bool m_eventLastReplayedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replayStartTime;
    bool m_replayStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replayEndTime;
    bool m_replayEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
