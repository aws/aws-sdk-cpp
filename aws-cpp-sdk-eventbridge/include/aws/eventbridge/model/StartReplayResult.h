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
  class StartReplayResult
  {
  public:
    AWS_EVENTBRIDGE_API StartReplayResult();
    AWS_EVENTBRIDGE_API StartReplayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API StartReplayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the replay.</p>
     */
    inline const Aws::String& GetReplayArn() const{ return m_replayArn; }

    /**
     * <p>The ARN of the replay.</p>
     */
    inline void SetReplayArn(const Aws::String& value) { m_replayArn = value; }

    /**
     * <p>The ARN of the replay.</p>
     */
    inline void SetReplayArn(Aws::String&& value) { m_replayArn = std::move(value); }

    /**
     * <p>The ARN of the replay.</p>
     */
    inline void SetReplayArn(const char* value) { m_replayArn.assign(value); }

    /**
     * <p>The ARN of the replay.</p>
     */
    inline StartReplayResult& WithReplayArn(const Aws::String& value) { SetReplayArn(value); return *this;}

    /**
     * <p>The ARN of the replay.</p>
     */
    inline StartReplayResult& WithReplayArn(Aws::String&& value) { SetReplayArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the replay.</p>
     */
    inline StartReplayResult& WithReplayArn(const char* value) { SetReplayArn(value); return *this;}


    /**
     * <p>The state of the replay.</p>
     */
    inline const ReplayState& GetState() const{ return m_state; }

    /**
     * <p>The state of the replay.</p>
     */
    inline void SetState(const ReplayState& value) { m_state = value; }

    /**
     * <p>The state of the replay.</p>
     */
    inline void SetState(ReplayState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the replay.</p>
     */
    inline StartReplayResult& WithState(const ReplayState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the replay.</p>
     */
    inline StartReplayResult& WithState(ReplayState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason that the replay is in the state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>The reason that the replay is in the state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReason = value; }

    /**
     * <p>The reason that the replay is in the state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReason = std::move(value); }

    /**
     * <p>The reason that the replay is in the state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReason.assign(value); }

    /**
     * <p>The reason that the replay is in the state.</p>
     */
    inline StartReplayResult& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>The reason that the replay is in the state.</p>
     */
    inline StartReplayResult& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the replay is in the state.</p>
     */
    inline StartReplayResult& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The time at which the replay started.</p>
     */
    inline const Aws::Utils::DateTime& GetReplayStartTime() const{ return m_replayStartTime; }

    /**
     * <p>The time at which the replay started.</p>
     */
    inline void SetReplayStartTime(const Aws::Utils::DateTime& value) { m_replayStartTime = value; }

    /**
     * <p>The time at which the replay started.</p>
     */
    inline void SetReplayStartTime(Aws::Utils::DateTime&& value) { m_replayStartTime = std::move(value); }

    /**
     * <p>The time at which the replay started.</p>
     */
    inline StartReplayResult& WithReplayStartTime(const Aws::Utils::DateTime& value) { SetReplayStartTime(value); return *this;}

    /**
     * <p>The time at which the replay started.</p>
     */
    inline StartReplayResult& WithReplayStartTime(Aws::Utils::DateTime&& value) { SetReplayStartTime(std::move(value)); return *this;}

  private:

    Aws::String m_replayArn;

    ReplayState m_state;

    Aws::String m_stateReason;

    Aws::Utils::DateTime m_replayStartTime;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
