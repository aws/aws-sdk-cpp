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
    AWS_IVSREALTIME_API Event();
    AWS_IVSREALTIME_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the event.</p>
     */
    inline const EventName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const EventName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(EventName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline Event& WithName(const EventName& value) { SetName(value); return *this;}
    inline Event& WithName(EventName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the participant who triggered the event. This is
     * assigned by IVS.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }
    inline Event& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}
    inline Event& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}
    inline Event& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ISO 8601 timestamp (returned as a string) for when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }
    inline Event& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}
    inline Event& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the remote participant. For a subscribe event, this is
     * the publisher. For a publish or join event, this is null. This is assigned by
     * IVS.</p>
     */
    inline const Aws::String& GetRemoteParticipantId() const{ return m_remoteParticipantId; }
    inline bool RemoteParticipantIdHasBeenSet() const { return m_remoteParticipantIdHasBeenSet; }
    inline void SetRemoteParticipantId(const Aws::String& value) { m_remoteParticipantIdHasBeenSet = true; m_remoteParticipantId = value; }
    inline void SetRemoteParticipantId(Aws::String&& value) { m_remoteParticipantIdHasBeenSet = true; m_remoteParticipantId = std::move(value); }
    inline void SetRemoteParticipantId(const char* value) { m_remoteParticipantIdHasBeenSet = true; m_remoteParticipantId.assign(value); }
    inline Event& WithRemoteParticipantId(const Aws::String& value) { SetRemoteParticipantId(value); return *this;}
    inline Event& WithRemoteParticipantId(Aws::String&& value) { SetRemoteParticipantId(std::move(value)); return *this;}
    inline Event& WithRemoteParticipantId(const char* value) { SetRemoteParticipantId(value); return *this;}
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
    inline const EventErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const EventErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(EventErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline Event& WithErrorCode(const EventErrorCode& value) { SetErrorCode(value); return *this;}
    inline Event& WithErrorCode(EventErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}
  private:

    EventName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_remoteParticipantId;
    bool m_remoteParticipantIdHasBeenSet = false;

    EventErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
