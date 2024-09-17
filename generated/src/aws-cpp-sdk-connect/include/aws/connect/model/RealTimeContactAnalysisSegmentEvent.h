/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ParticipantRole.h>
#include <aws/connect/model/RealTimeContactAnalysisTimeData.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Segment type describing a contact event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisSegmentEvent">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisSegmentEvent
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisSegmentEvent();
    AWS_CONNECT_API RealTimeContactAnalysisSegmentEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisSegmentEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the contact event.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RealTimeContactAnalysisSegmentEvent& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RealTimeContactAnalysisSegmentEvent& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RealTimeContactAnalysisSegmentEvent& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the participant.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }
    inline RealTimeContactAnalysisSegmentEvent& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}
    inline RealTimeContactAnalysisSegmentEvent& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}
    inline RealTimeContactAnalysisSegmentEvent& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the participant. For example, is it a customer, agent, or
     * system.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }
    inline RealTimeContactAnalysisSegmentEvent& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}
    inline RealTimeContactAnalysisSegmentEvent& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the participant. Can be redacted.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline RealTimeContactAnalysisSegmentEvent& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline RealTimeContactAnalysisSegmentEvent& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline RealTimeContactAnalysisSegmentEvent& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the event. For example,
     * <code>application/vnd.amazonaws.connect.event.participant.left</code>.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }
    inline RealTimeContactAnalysisSegmentEvent& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}
    inline RealTimeContactAnalysisSegmentEvent& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}
    inline RealTimeContactAnalysisSegmentEvent& WithEventType(const char* value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Field describing the time of the event. It can have different representations
     * of time.</p>
     */
    inline const RealTimeContactAnalysisTimeData& GetTime() const{ return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    inline void SetTime(const RealTimeContactAnalysisTimeData& value) { m_timeHasBeenSet = true; m_time = value; }
    inline void SetTime(RealTimeContactAnalysisTimeData&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }
    inline RealTimeContactAnalysisSegmentEvent& WithTime(const RealTimeContactAnalysisTimeData& value) { SetTime(value); return *this;}
    inline RealTimeContactAnalysisSegmentEvent& WithTime(RealTimeContactAnalysisTimeData&& value) { SetTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    ParticipantRole m_participantRole;
    bool m_participantRoleHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    RealTimeContactAnalysisTimeData m_time;
    bool m_timeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
