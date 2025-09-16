/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/EventName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ivs-realtime/model/EventErrorCode.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>An occurrence during a stage session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/Event">AWS
   * API Reference</a></p>
   */
  class Event
  {
  public:
    AWS_IVSREALTIME_API Event() = default;
    AWS_IVSREALTIME_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the event.</p>
     */
    inline EventName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(EventName value) { m_nameHasBeenSet = true; m_name = value; }
    inline Event& WithName(EventName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the participant who triggered the event. This is
     * assigned by IVS.</p>
     */
    inline const Aws::String& GetParticipantId() const { return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    template<typename ParticipantIdT = Aws::String>
    void SetParticipantId(ParticipantIdT&& value) { m_participantIdHasBeenSet = true; m_participantId = std::forward<ParticipantIdT>(value); }
    template<typename ParticipantIdT = Aws::String>
    Event& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ISO 8601 timestamp (returned as a string) for when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const { return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    template<typename EventTimeT = Aws::Utils::DateTime>
    void SetEventTime(EventTimeT&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::forward<EventTimeT>(value); }
    template<typename EventTimeT = Aws::Utils::DateTime>
    Event& WithEventTime(EventTimeT&& value) { SetEventTime(std::forward<EventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the remote participant. For a subscribe event, this is
     * the publisher. For a publish or join event, this is null. This is assigned by
     * IVS.</p>
     */
    inline const Aws::String& GetRemoteParticipantId() const { return m_remoteParticipantId; }
    inline bool RemoteParticipantIdHasBeenSet() const { return m_remoteParticipantIdHasBeenSet; }
    template<typename RemoteParticipantIdT = Aws::String>
    void SetRemoteParticipantId(RemoteParticipantIdT&& value) { m_remoteParticipantIdHasBeenSet = true; m_remoteParticipantId = std::forward<RemoteParticipantIdT>(value); }
    template<typename RemoteParticipantIdT = Aws::String>
    Event& WithRemoteParticipantId(RemoteParticipantIdT&& value) { SetRemoteParticipantId(std::forward<RemoteParticipantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is an error event, the error code is provided to give insight
     * into the specific error that occurred. If the event is not an error event, this
     * field is null.</p> <ul> <li> <p> <code>B_FRAME_PRESENT</code> — The
     * participant's stream includes B-frames. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/rt-rtmp-publishing.html">
     * IVS RTMP Publishing</a>.</p> </li> <li> <p> <code>BITRATE_EXCEEDED</code> — The
     * participant exceeded the maximum supported bitrate. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/service-quotas.html">
     * Service Quotas</a>.</p> </li> <li> <p> <code>INSUFFICIENT_CAPABILITIES</code> —
     * The participant tried to take an action that the participant’s token is not
     * allowed to do. For details on participant capabilities, see the
     * <code>capabilities</code> field in <a>CreateParticipantToken</a>.</p> </li> <li>
     * <p> <code>INTERNAL_SERVER_EXCEPTION</code> — The participant failed to publish
     * to the stage due to an internal server error.</p> </li> <li> <p>
     * <code>INVALID_AUDIO_CODEC</code> — The participant is using an invalid audio
     * codec. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/rt-stream-ingest.html">
     * Stream Ingest</a>.</p> </li> <li> <p> <code>INVALID_INPUT</code> — The
     * participant is using an invalid input stream.</p> </li> <li> <p>
     * <code>INVALID_PROTOCOL</code> — The participant's IngestConfiguration resource
     * is configured for RTMPS but they tried streaming with RTMP. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/rt-rtmp-publishing.html">
     * IVS RTMP Publishing</a>.</p> </li> <li> <p> <code>INVALID_STREAM_KEY</code> —
     * The participant is using an invalid stream key. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/rt-rtmp-publishing.html">
     * IVS RTMP Publishing</a>.</p> </li> <li> <p> <code>INVALID_VIDEO_CODEC</code> —
     * The participant is using an invalid video codec. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/rt-stream-ingest.html">
     * Stream Ingest</a>.</p> </li> <li> <p> <code>PUBLISHER_NOT_FOUND</code> — The
     * participant tried to subscribe to a publisher that doesn’t exist.</p> </li> <li>
     * <p> <code>QUOTA_EXCEEDED</code> — The number of participants who want to
     * publish/subscribe to a stage exceeds the quota. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/service-quotas.html">
     * Service Quotas</a>.</p> </li> <li> <p> <code>RESOLUTION_EXCEEDED</code> — The
     * participant exceeded the maximum supported resolution. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/service-quotas.html">
     * Service Quotas</a>.</p> </li> <li> <p> <code>REUSE_OF_STREAM_KEY</code> — The
     * participant tried to use a stream key that is associated with another active
     * stage session.</p> </li> <li> <p> <code>STREAM_DURATION_EXCEEDED</code> — The
     * participant exceeded the maximum allowed stream duration. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/service-quotas.html">
     * Service Quotas</a>.</p> </li> </ul>
     */
    inline EventErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(EventErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline Event& WithErrorCode(EventErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the stage where the participant is replicated. Applicable only if the
     * event name is <code>REPLICATION_STARTED</code> or
     * <code>REPLICATION_STOPPED</code>.</p>
     */
    inline const Aws::String& GetDestinationStageArn() const { return m_destinationStageArn; }
    inline bool DestinationStageArnHasBeenSet() const { return m_destinationStageArnHasBeenSet; }
    template<typename DestinationStageArnT = Aws::String>
    void SetDestinationStageArn(DestinationStageArnT&& value) { m_destinationStageArnHasBeenSet = true; m_destinationStageArn = std::forward<DestinationStageArnT>(value); }
    template<typename DestinationStageArnT = Aws::String>
    Event& WithDestinationStageArn(DestinationStageArnT&& value) { SetDestinationStageArn(std::forward<DestinationStageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the session within the destination stage. Applicable only if the event
     * name is <code>REPLICATION_STARTED</code> or
     * <code>REPLICATION_STOPPED</code>.</p>
     */
    inline const Aws::String& GetDestinationSessionId() const { return m_destinationSessionId; }
    inline bool DestinationSessionIdHasBeenSet() const { return m_destinationSessionIdHasBeenSet; }
    template<typename DestinationSessionIdT = Aws::String>
    void SetDestinationSessionId(DestinationSessionIdT&& value) { m_destinationSessionIdHasBeenSet = true; m_destinationSessionId = std::forward<DestinationSessionIdT>(value); }
    template<typename DestinationSessionIdT = Aws::String>
    Event& WithDestinationSessionId(DestinationSessionIdT&& value) { SetDestinationSessionId(std::forward<DestinationSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, this indicates the <code>participantId</code> is a replicated
     * participant. If this is a subscribe event, then this flag refers to
     * <code>remoteParticipantId</code>. Default: <code>false</code>.</p>
     */
    inline bool GetReplica() const { return m_replica; }
    inline bool ReplicaHasBeenSet() const { return m_replicaHasBeenSet; }
    inline void SetReplica(bool value) { m_replicaHasBeenSet = true; m_replica = value; }
    inline Event& WithReplica(bool value) { SetReplica(value); return *this;}
    ///@}
  private:

    EventName m_name{EventName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime{};
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_remoteParticipantId;
    bool m_remoteParticipantIdHasBeenSet = false;

    EventErrorCode m_errorCode{EventErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_destinationStageArn;
    bool m_destinationStageArnHasBeenSet = false;

    Aws::String m_destinationSessionId;
    bool m_destinationSessionIdHasBeenSet = false;

    bool m_replica{false};
    bool m_replicaHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
