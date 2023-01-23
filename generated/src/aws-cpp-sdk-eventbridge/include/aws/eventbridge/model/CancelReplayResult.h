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
    AWS_EVENTBRIDGE_API CancelReplayResult();
    AWS_EVENTBRIDGE_API CancelReplayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API CancelReplayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the replay to cancel.</p>
     */
    inline const Aws::String& GetReplayArn() const{ return m_replayArn; }

    /**
     * <p>The ARN of the replay to cancel.</p>
     */
    inline void SetReplayArn(const Aws::String& value) { m_replayArn = value; }

    /**
     * <p>The ARN of the replay to cancel.</p>
     */
    inline void SetReplayArn(Aws::String&& value) { m_replayArn = std::move(value); }

    /**
     * <p>The ARN of the replay to cancel.</p>
     */
    inline void SetReplayArn(const char* value) { m_replayArn.assign(value); }

    /**
     * <p>The ARN of the replay to cancel.</p>
     */
    inline CancelReplayResult& WithReplayArn(const Aws::String& value) { SetReplayArn(value); return *this;}

    /**
     * <p>The ARN of the replay to cancel.</p>
     */
    inline CancelReplayResult& WithReplayArn(Aws::String&& value) { SetReplayArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the replay to cancel.</p>
     */
    inline CancelReplayResult& WithReplayArn(const char* value) { SetReplayArn(value); return *this;}


    /**
     * <p>The current state of the replay.</p>
     */
    inline const ReplayState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the replay.</p>
     */
    inline void SetState(const ReplayState& value) { m_state = value; }

    /**
     * <p>The current state of the replay.</p>
     */
    inline void SetState(ReplayState&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the replay.</p>
     */
    inline CancelReplayResult& WithState(const ReplayState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the replay.</p>
     */
    inline CancelReplayResult& WithState(ReplayState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason that the replay is in the current state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>The reason that the replay is in the current state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReason = value; }

    /**
     * <p>The reason that the replay is in the current state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReason = std::move(value); }

    /**
     * <p>The reason that the replay is in the current state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReason.assign(value); }

    /**
     * <p>The reason that the replay is in the current state.</p>
     */
    inline CancelReplayResult& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>The reason that the replay is in the current state.</p>
     */
    inline CancelReplayResult& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the replay is in the current state.</p>
     */
    inline CancelReplayResult& WithStateReason(const char* value) { SetStateReason(value); return *this;}

  private:

    Aws::String m_replayArn;

    ReplayState m_state;

    Aws::String m_stateReason;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
