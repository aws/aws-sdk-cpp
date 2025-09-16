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
#include <aws/ivs-realtime/model/ReplicationType.h>
#include <aws/ivs-realtime/model/ReplicationState.h>
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
    AWS_IVSREALTIME_API ParticipantSummary() = default;
    AWS_IVSREALTIME_API ParticipantSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API ParticipantSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for this participant, assigned by IVS.</p>
     */
    inline const Aws::String& GetParticipantId() const { return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    template<typename ParticipantIdT = Aws::String>
    void SetParticipantId(ParticipantIdT&& value) { m_participantIdHasBeenSet = true; m_participantId = std::forward<ParticipantIdT>(value); }
    template<typename ParticipantIdT = Aws::String>
    ParticipantSummary& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer-assigned name to help identify the token; this can be used to link a
     * participant to a user in the customer’s own systems. This can be any UTF-8
     * encoded text. <i>This field is exposed to all stage participants and should not
     * be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    ParticipantSummary& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the participant is connected to or disconnected from the stage.</p>
     */
    inline ParticipantState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ParticipantState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ParticipantSummary& WithState(ParticipantState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ISO 8601 timestamp (returned as a string) when the participant first joined
     * the stage session.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstJoinTime() const { return m_firstJoinTime; }
    inline bool FirstJoinTimeHasBeenSet() const { return m_firstJoinTimeHasBeenSet; }
    template<typename FirstJoinTimeT = Aws::Utils::DateTime>
    void SetFirstJoinTime(FirstJoinTimeT&& value) { m_firstJoinTimeHasBeenSet = true; m_firstJoinTime = std::forward<FirstJoinTimeT>(value); }
    template<typename FirstJoinTimeT = Aws::Utils::DateTime>
    ParticipantSummary& WithFirstJoinTime(FirstJoinTimeT&& value) { SetFirstJoinTime(std::forward<FirstJoinTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the participant ever published to the stage session.</p>
     */
    inline bool GetPublished() const { return m_published; }
    inline bool PublishedHasBeenSet() const { return m_publishedHasBeenSet; }
    inline void SetPublished(bool value) { m_publishedHasBeenSet = true; m_published = value; }
    inline ParticipantSummary& WithPublished(bool value) { SetPublished(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s recording state.</p>
     */
    inline ParticipantRecordingState GetRecordingState() const { return m_recordingState; }
    inline bool RecordingStateHasBeenSet() const { return m_recordingStateHasBeenSet; }
    inline void SetRecordingState(ParticipantRecordingState value) { m_recordingStateHasBeenSet = true; m_recordingState = value; }
    inline ParticipantSummary& WithRecordingState(ParticipantRecordingState value) { SetRecordingState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the participant has been replicated to another stage or is a
     * replica from another stage. Default: <code>NONE</code>. </p>
     */
    inline ReplicationType GetReplicationType() const { return m_replicationType; }
    inline bool ReplicationTypeHasBeenSet() const { return m_replicationTypeHasBeenSet; }
    inline void SetReplicationType(ReplicationType value) { m_replicationTypeHasBeenSet = true; m_replicationType = value; }
    inline ParticipantSummary& WithReplicationType(ReplicationType value) { SetReplicationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant's replication state.</p>
     */
    inline ReplicationState GetReplicationState() const { return m_replicationState; }
    inline bool ReplicationStateHasBeenSet() const { return m_replicationStateHasBeenSet; }
    inline void SetReplicationState(ReplicationState value) { m_replicationStateHasBeenSet = true; m_replicationState = value; }
    inline ParticipantSummary& WithReplicationState(ReplicationState value) { SetReplicationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source stage ARN from which this participant is replicated, if
     * <code>replicationType</code> is <code>REPLICA</code>.</p>
     */
    inline const Aws::String& GetSourceStageArn() const { return m_sourceStageArn; }
    inline bool SourceStageArnHasBeenSet() const { return m_sourceStageArnHasBeenSet; }
    template<typename SourceStageArnT = Aws::String>
    void SetSourceStageArn(SourceStageArnT&& value) { m_sourceStageArnHasBeenSet = true; m_sourceStageArn = std::forward<SourceStageArnT>(value); }
    template<typename SourceStageArnT = Aws::String>
    ParticipantSummary& WithSourceStageArn(SourceStageArnT&& value) { SetSourceStageArn(std::forward<SourceStageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the session within the source stage, if <code>replicationType</code> is
     * <code>REPLICA</code>.</p>
     */
    inline const Aws::String& GetSourceSessionId() const { return m_sourceSessionId; }
    inline bool SourceSessionIdHasBeenSet() const { return m_sourceSessionIdHasBeenSet; }
    template<typename SourceSessionIdT = Aws::String>
    void SetSourceSessionId(SourceSessionIdT&& value) { m_sourceSessionIdHasBeenSet = true; m_sourceSessionId = std::forward<SourceSessionIdT>(value); }
    template<typename SourceSessionIdT = Aws::String>
    ParticipantSummary& WithSourceSessionId(SourceSessionIdT&& value) { SetSourceSessionId(std::forward<SourceSessionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    ParticipantState m_state{ParticipantState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_firstJoinTime{};
    bool m_firstJoinTimeHasBeenSet = false;

    bool m_published{false};
    bool m_publishedHasBeenSet = false;

    ParticipantRecordingState m_recordingState{ParticipantRecordingState::NOT_SET};
    bool m_recordingStateHasBeenSet = false;

    ReplicationType m_replicationType{ReplicationType::NOT_SET};
    bool m_replicationTypeHasBeenSet = false;

    ReplicationState m_replicationState{ReplicationState::NOT_SET};
    bool m_replicationStateHasBeenSet = false;

    Aws::String m_sourceStageArn;
    bool m_sourceStageArnHasBeenSet = false;

    Aws::String m_sourceSessionId;
    bool m_sourceSessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
