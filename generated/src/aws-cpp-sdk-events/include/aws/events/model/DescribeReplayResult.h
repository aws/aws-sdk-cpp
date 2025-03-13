/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ReplayState.h>
#include <aws/events/model/ReplayDestination.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvents
{
namespace Model
{
  class DescribeReplayResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API DescribeReplayResult() = default;
    AWS_CLOUDWATCHEVENTS_API DescribeReplayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API DescribeReplayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the replay.</p>
     */
    inline const Aws::String& GetReplayName() const { return m_replayName; }
    template<typename ReplayNameT = Aws::String>
    void SetReplayName(ReplayNameT&& value) { m_replayNameHasBeenSet = true; m_replayName = std::forward<ReplayNameT>(value); }
    template<typename ReplayNameT = Aws::String>
    DescribeReplayResult& WithReplayName(ReplayNameT&& value) { SetReplayName(std::forward<ReplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the replay.</p>
     */
    inline const Aws::String& GetReplayArn() const { return m_replayArn; }
    template<typename ReplayArnT = Aws::String>
    void SetReplayArn(ReplayArnT&& value) { m_replayArnHasBeenSet = true; m_replayArn = std::forward<ReplayArnT>(value); }
    template<typename ReplayArnT = Aws::String>
    DescribeReplayResult& WithReplayArn(ReplayArnT&& value) { SetReplayArn(std::forward<ReplayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the replay.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeReplayResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the replay.</p>
     */
    inline ReplayState GetState() const { return m_state; }
    inline void SetState(ReplayState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeReplayResult& WithState(ReplayState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the replay is in the current state.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    DescribeReplayResult& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the archive events were replayed from.</p>
     */
    inline const Aws::String& GetEventSourceArn() const { return m_eventSourceArn; }
    template<typename EventSourceArnT = Aws::String>
    void SetEventSourceArn(EventSourceArnT&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::forward<EventSourceArnT>(value); }
    template<typename EventSourceArnT = Aws::String>
    DescribeReplayResult& WithEventSourceArn(EventSourceArnT&& value) { SetEventSourceArn(std::forward<EventSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ReplayDestination</code> object that contains details about the
     * replay.</p>
     */
    inline const ReplayDestination& GetDestination() const { return m_destination; }
    template<typename DestinationT = ReplayDestination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = ReplayDestination>
    DescribeReplayResult& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the first event that was last replayed from the
     * archive.</p>
     */
    inline const Aws::Utils::DateTime& GetEventStartTime() const { return m_eventStartTime; }
    template<typename EventStartTimeT = Aws::Utils::DateTime>
    void SetEventStartTime(EventStartTimeT&& value) { m_eventStartTimeHasBeenSet = true; m_eventStartTime = std::forward<EventStartTimeT>(value); }
    template<typename EventStartTimeT = Aws::Utils::DateTime>
    DescribeReplayResult& WithEventStartTime(EventStartTimeT&& value) { SetEventStartTime(std::forward<EventStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp for the last event that was replayed from the archive.</p>
     */
    inline const Aws::Utils::DateTime& GetEventEndTime() const { return m_eventEndTime; }
    template<typename EventEndTimeT = Aws::Utils::DateTime>
    void SetEventEndTime(EventEndTimeT&& value) { m_eventEndTimeHasBeenSet = true; m_eventEndTime = std::forward<EventEndTimeT>(value); }
    template<typename EventEndTimeT = Aws::Utils::DateTime>
    DescribeReplayResult& WithEventEndTime(EventEndTimeT&& value) { SetEventEndTime(std::forward<EventEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the event was last replayed.</p>
     */
    inline const Aws::Utils::DateTime& GetEventLastReplayedTime() const { return m_eventLastReplayedTime; }
    template<typename EventLastReplayedTimeT = Aws::Utils::DateTime>
    void SetEventLastReplayedTime(EventLastReplayedTimeT&& value) { m_eventLastReplayedTimeHasBeenSet = true; m_eventLastReplayedTime = std::forward<EventLastReplayedTimeT>(value); }
    template<typename EventLastReplayedTimeT = Aws::Utils::DateTime>
    DescribeReplayResult& WithEventLastReplayedTime(EventLastReplayedTimeT&& value) { SetEventLastReplayedTime(std::forward<EventLastReplayedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the replay started.</p>
     */
    inline const Aws::Utils::DateTime& GetReplayStartTime() const { return m_replayStartTime; }
    template<typename ReplayStartTimeT = Aws::Utils::DateTime>
    void SetReplayStartTime(ReplayStartTimeT&& value) { m_replayStartTimeHasBeenSet = true; m_replayStartTime = std::forward<ReplayStartTimeT>(value); }
    template<typename ReplayStartTimeT = Aws::Utils::DateTime>
    DescribeReplayResult& WithReplayStartTime(ReplayStartTimeT&& value) { SetReplayStartTime(std::forward<ReplayStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the replay stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetReplayEndTime() const { return m_replayEndTime; }
    template<typename ReplayEndTimeT = Aws::Utils::DateTime>
    void SetReplayEndTime(ReplayEndTimeT&& value) { m_replayEndTimeHasBeenSet = true; m_replayEndTime = std::forward<ReplayEndTimeT>(value); }
    template<typename ReplayEndTimeT = Aws::Utils::DateTime>
    DescribeReplayResult& WithReplayEndTime(ReplayEndTimeT&& value) { SetReplayEndTime(std::forward<ReplayEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReplayResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replayName;
    bool m_replayNameHasBeenSet = false;

    Aws::String m_replayArn;
    bool m_replayArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ReplayState m_state{ReplayState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet = false;

    ReplayDestination m_destination;
    bool m_destinationHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
