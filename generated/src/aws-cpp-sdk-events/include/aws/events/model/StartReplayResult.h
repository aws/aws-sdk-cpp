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
  class StartReplayResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API StartReplayResult() = default;
    AWS_CLOUDWATCHEVENTS_API StartReplayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API StartReplayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the replay.</p>
     */
    inline const Aws::String& GetReplayArn() const { return m_replayArn; }
    template<typename ReplayArnT = Aws::String>
    void SetReplayArn(ReplayArnT&& value) { m_replayArnHasBeenSet = true; m_replayArn = std::forward<ReplayArnT>(value); }
    template<typename ReplayArnT = Aws::String>
    StartReplayResult& WithReplayArn(ReplayArnT&& value) { SetReplayArn(std::forward<ReplayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the replay.</p>
     */
    inline ReplayState GetState() const { return m_state; }
    inline void SetState(ReplayState value) { m_stateHasBeenSet = true; m_state = value; }
    inline StartReplayResult& WithState(ReplayState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the replay is in the state.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    StartReplayResult& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the replay started.</p>
     */
    inline const Aws::Utils::DateTime& GetReplayStartTime() const { return m_replayStartTime; }
    template<typename ReplayStartTimeT = Aws::Utils::DateTime>
    void SetReplayStartTime(ReplayStartTimeT&& value) { m_replayStartTimeHasBeenSet = true; m_replayStartTime = std::forward<ReplayStartTimeT>(value); }
    template<typename ReplayStartTimeT = Aws::Utils::DateTime>
    StartReplayResult& WithReplayStartTime(ReplayStartTimeT&& value) { SetReplayStartTime(std::forward<ReplayStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartReplayResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replayArn;
    bool m_replayArnHasBeenSet = false;

    ReplayState m_state{ReplayState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Utils::DateTime m_replayStartTime{};
    bool m_replayStartTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
