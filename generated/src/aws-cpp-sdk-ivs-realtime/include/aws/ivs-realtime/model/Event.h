﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/EventErrorCode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ivs-realtime/model/EventName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
     * <p>If the event is an error event, the error code is provided to give insight
     * into the specific error that occurred. If the event is not an error event, this
     * field is null. <code>INSUFFICIENT_CAPABILITIES</code> indicates that the
     * participant tried to take an action that the participant’s token is not allowed
     * to do. For more information about participant capabilities, see the
     * <code>capabilities</code> field in <a>CreateParticipantToken</a>.
     * <code>QUOTA_EXCEEDED</code> indicates that the number of participants who want
     * to publish/subscribe to a stage exceeds the quota; for more information, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/service-quotas.html">Service
     * Quotas</a>. <code>PUBLISHER_NOT_FOUND</code> indicates that the participant
     * tried to subscribe to a publisher that doesn’t exist. </p>
     */
    inline const EventErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const EventErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(EventErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline Event& WithErrorCode(const EventErrorCode& value) { SetErrorCode(value); return *this;}
    inline Event& WithErrorCode(EventErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
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
  private:

    EventErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet = false;

    EventName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_remoteParticipantId;
    bool m_remoteParticipantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
