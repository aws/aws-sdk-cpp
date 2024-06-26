/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/ParticipantState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ivs-realtime/model/ParticipantRecordingState.h>
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
   * <p>Summary object describing a participant that has joined a
   * stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ParticipantSummary">AWS
   * API Reference</a></p>
   */
  class ParticipantSummary
  {
  public:
    AWS_IVSREALTIME_API ParticipantSummary();
    AWS_IVSREALTIME_API ParticipantSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API ParticipantSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for this participant, assigned by IVS.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }
    inline ParticipantSummary& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}
    inline ParticipantSummary& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}
    inline ParticipantSummary& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline ParticipantSummary& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline ParticipantSummary& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline ParticipantSummary& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the participant is connected to or disconnected from the stage.</p>
     */
    inline const ParticipantState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ParticipantState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ParticipantState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ParticipantSummary& WithState(const ParticipantState& value) { SetState(value); return *this;}
    inline ParticipantSummary& WithState(ParticipantState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ISO 8601 timestamp (returned as a string) when the participant first joined
     * the stage session.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstJoinTime() const{ return m_firstJoinTime; }
    inline bool FirstJoinTimeHasBeenSet() const { return m_firstJoinTimeHasBeenSet; }
    inline void SetFirstJoinTime(const Aws::Utils::DateTime& value) { m_firstJoinTimeHasBeenSet = true; m_firstJoinTime = value; }
    inline void SetFirstJoinTime(Aws::Utils::DateTime&& value) { m_firstJoinTimeHasBeenSet = true; m_firstJoinTime = std::move(value); }
    inline ParticipantSummary& WithFirstJoinTime(const Aws::Utils::DateTime& value) { SetFirstJoinTime(value); return *this;}
    inline ParticipantSummary& WithFirstJoinTime(Aws::Utils::DateTime&& value) { SetFirstJoinTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the participant ever published to the stage session.</p>
     */
    inline bool GetPublished() const{ return m_published; }
    inline bool PublishedHasBeenSet() const { return m_publishedHasBeenSet; }
    inline void SetPublished(bool value) { m_publishedHasBeenSet = true; m_published = value; }
    inline ParticipantSummary& WithPublished(bool value) { SetPublished(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s recording state.</p>
     */
    inline const ParticipantRecordingState& GetRecordingState() const{ return m_recordingState; }
    inline bool RecordingStateHasBeenSet() const { return m_recordingStateHasBeenSet; }
    inline void SetRecordingState(const ParticipantRecordingState& value) { m_recordingStateHasBeenSet = true; m_recordingState = value; }
    inline void SetRecordingState(ParticipantRecordingState&& value) { m_recordingStateHasBeenSet = true; m_recordingState = std::move(value); }
    inline ParticipantSummary& WithRecordingState(const ParticipantRecordingState& value) { SetRecordingState(value); return *this;}
    inline ParticipantSummary& WithRecordingState(ParticipantRecordingState&& value) { SetRecordingState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    ParticipantState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_firstJoinTime;
    bool m_firstJoinTimeHasBeenSet = false;

    bool m_published;
    bool m_publishedHasBeenSet = false;

    ParticipantRecordingState m_recordingState;
    bool m_recordingStateHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
