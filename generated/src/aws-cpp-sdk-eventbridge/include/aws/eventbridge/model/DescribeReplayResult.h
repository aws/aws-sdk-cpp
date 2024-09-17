/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ReplayState.h>
#include <aws/eventbridge/model/ReplayDestination.h>
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
  class DescribeReplayResult
  {
  public:
    AWS_EVENTBRIDGE_API DescribeReplayResult();
    AWS_EVENTBRIDGE_API DescribeReplayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API DescribeReplayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the replay.</p>
     */
    inline const Aws::String& GetReplayName() const{ return m_replayName; }
    inline void SetReplayName(const Aws::String& value) { m_replayName = value; }
    inline void SetReplayName(Aws::String&& value) { m_replayName = std::move(value); }
    inline void SetReplayName(const char* value) { m_replayName.assign(value); }
    inline DescribeReplayResult& WithReplayName(const Aws::String& value) { SetReplayName(value); return *this;}
    inline DescribeReplayResult& WithReplayName(Aws::String&& value) { SetReplayName(std::move(value)); return *this;}
    inline DescribeReplayResult& WithReplayName(const char* value) { SetReplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the replay.</p>
     */
    inline const Aws::String& GetReplayArn() const{ return m_replayArn; }
    inline void SetReplayArn(const Aws::String& value) { m_replayArn = value; }
    inline void SetReplayArn(Aws::String&& value) { m_replayArn = std::move(value); }
    inline void SetReplayArn(const char* value) { m_replayArn.assign(value); }
    inline DescribeReplayResult& WithReplayArn(const Aws::String& value) { SetReplayArn(value); return *this;}
    inline DescribeReplayResult& WithReplayArn(Aws::String&& value) { SetReplayArn(std::move(value)); return *this;}
    inline DescribeReplayResult& WithReplayArn(const char* value) { SetReplayArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the replay.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeReplayResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeReplayResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeReplayResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the replay.</p>
     */
    inline const ReplayState& GetState() const{ return m_state; }
    inline void SetState(const ReplayState& value) { m_state = value; }
    inline void SetState(ReplayState&& value) { m_state = std::move(value); }
    inline DescribeReplayResult& WithState(const ReplayState& value) { SetState(value); return *this;}
    inline DescribeReplayResult& WithState(ReplayState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the replay is in the current state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }
    inline void SetStateReason(const Aws::String& value) { m_stateReason = value; }
    inline void SetStateReason(Aws::String&& value) { m_stateReason = std::move(value); }
    inline void SetStateReason(const char* value) { m_stateReason.assign(value); }
    inline DescribeReplayResult& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}
    inline DescribeReplayResult& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}
    inline DescribeReplayResult& WithStateReason(const char* value) { SetStateReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the archive events were replayed from.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArn = value; }
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArn = std::move(value); }
    inline void SetEventSourceArn(const char* value) { m_eventSourceArn.assign(value); }
    inline DescribeReplayResult& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}
    inline DescribeReplayResult& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}
    inline DescribeReplayResult& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ReplayDestination</code> object that contains details about the
     * replay.</p>
     */
    inline const ReplayDestination& GetDestination() const{ return m_destination; }
    inline void SetDestination(const ReplayDestination& value) { m_destination = value; }
    inline void SetDestination(ReplayDestination&& value) { m_destination = std::move(value); }
    inline DescribeReplayResult& WithDestination(const ReplayDestination& value) { SetDestination(value); return *this;}
    inline DescribeReplayResult& WithDestination(ReplayDestination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the first event that was last replayed from the
     * archive.</p>
     */
    inline const Aws::Utils::DateTime& GetEventStartTime() const{ return m_eventStartTime; }
    inline void SetEventStartTime(const Aws::Utils::DateTime& value) { m_eventStartTime = value; }
    inline void SetEventStartTime(Aws::Utils::DateTime&& value) { m_eventStartTime = std::move(value); }
    inline DescribeReplayResult& WithEventStartTime(const Aws::Utils::DateTime& value) { SetEventStartTime(value); return *this;}
    inline DescribeReplayResult& WithEventStartTime(Aws::Utils::DateTime&& value) { SetEventStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp for the last event that was replayed from the archive.</p>
     */
    inline const Aws::Utils::DateTime& GetEventEndTime() const{ return m_eventEndTime; }
    inline void SetEventEndTime(const Aws::Utils::DateTime& value) { m_eventEndTime = value; }
    inline void SetEventEndTime(Aws::Utils::DateTime&& value) { m_eventEndTime = std::move(value); }
    inline DescribeReplayResult& WithEventEndTime(const Aws::Utils::DateTime& value) { SetEventEndTime(value); return *this;}
    inline DescribeReplayResult& WithEventEndTime(Aws::Utils::DateTime&& value) { SetEventEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the event was last replayed.</p>
     */
    inline const Aws::Utils::DateTime& GetEventLastReplayedTime() const{ return m_eventLastReplayedTime; }
    inline void SetEventLastReplayedTime(const Aws::Utils::DateTime& value) { m_eventLastReplayedTime = value; }
    inline void SetEventLastReplayedTime(Aws::Utils::DateTime&& value) { m_eventLastReplayedTime = std::move(value); }
    inline DescribeReplayResult& WithEventLastReplayedTime(const Aws::Utils::DateTime& value) { SetEventLastReplayedTime(value); return *this;}
    inline DescribeReplayResult& WithEventLastReplayedTime(Aws::Utils::DateTime&& value) { SetEventLastReplayedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the replay started.</p>
     */
    inline const Aws::Utils::DateTime& GetReplayStartTime() const{ return m_replayStartTime; }
    inline void SetReplayStartTime(const Aws::Utils::DateTime& value) { m_replayStartTime = value; }
    inline void SetReplayStartTime(Aws::Utils::DateTime&& value) { m_replayStartTime = std::move(value); }
    inline DescribeReplayResult& WithReplayStartTime(const Aws::Utils::DateTime& value) { SetReplayStartTime(value); return *this;}
    inline DescribeReplayResult& WithReplayStartTime(Aws::Utils::DateTime&& value) { SetReplayStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the replay stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetReplayEndTime() const{ return m_replayEndTime; }
    inline void SetReplayEndTime(const Aws::Utils::DateTime& value) { m_replayEndTime = value; }
    inline void SetReplayEndTime(Aws::Utils::DateTime&& value) { m_replayEndTime = std::move(value); }
    inline DescribeReplayResult& WithReplayEndTime(const Aws::Utils::DateTime& value) { SetReplayEndTime(value); return *this;}
    inline DescribeReplayResult& WithReplayEndTime(Aws::Utils::DateTime&& value) { SetReplayEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeReplayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeReplayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeReplayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_replayName;

    Aws::String m_replayArn;

    Aws::String m_description;

    ReplayState m_state;

    Aws::String m_stateReason;

    Aws::String m_eventSourceArn;

    ReplayDestination m_destination;

    Aws::Utils::DateTime m_eventStartTime;

    Aws::Utils::DateTime m_eventEndTime;

    Aws::Utils::DateTime m_eventLastReplayedTime;

    Aws::Utils::DateTime m_replayStartTime;

    Aws::Utils::DateTime m_replayEndTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
