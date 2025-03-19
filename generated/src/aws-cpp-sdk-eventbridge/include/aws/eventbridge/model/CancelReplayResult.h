/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ReplayState.h>
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
namespace EventBridge
{
namespace Model
{
  class CancelReplayResult
  {
  public:
    AWS_EVENTBRIDGE_API CancelReplayResult() = default;
    AWS_EVENTBRIDGE_API CancelReplayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API CancelReplayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the replay to cancel.</p>
     */
    inline const Aws::String& GetReplayArn() const { return m_replayArn; }
    template<typename ReplayArnT = Aws::String>
    void SetReplayArn(ReplayArnT&& value) { m_replayArnHasBeenSet = true; m_replayArn = std::forward<ReplayArnT>(value); }
    template<typename ReplayArnT = Aws::String>
    CancelReplayResult& WithReplayArn(ReplayArnT&& value) { SetReplayArn(std::forward<ReplayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the replay.</p>
     */
    inline ReplayState GetState() const { return m_state; }
    inline void SetState(ReplayState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CancelReplayResult& WithState(ReplayState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the replay is in the current state.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    CancelReplayResult& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelReplayResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replayArn;
    bool m_replayArnHasBeenSet = false;

    ReplayState m_state{ReplayState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
