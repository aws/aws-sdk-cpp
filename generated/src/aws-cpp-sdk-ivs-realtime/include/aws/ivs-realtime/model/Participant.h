/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/ParticipantState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ivs-realtime/model/ParticipantRecordingState.h>
#include <aws/ivs-realtime/model/ParticipantProtocol.h>
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
   * <p>Object describing a participant that has joined a stage.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/Participant">AWS
   * API Reference</a></p>
   */
  class Participant
  {
  public:
    AWS_IVSREALTIME_API Participant() = default;
    AWS_IVSREALTIME_API Participant(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Participant& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    Participant& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
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
    Participant& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the participant is connected to or disconnected from the stage.</p>
     */
    inline ParticipantState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ParticipantState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Participant& WithState(ParticipantState value) { SetState(value); return *this;}
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
    Participant& WithFirstJoinTime(FirstJoinTimeT&& value) { SetFirstJoinTime(std::forward<FirstJoinTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    Participant& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    Participant& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Whether the participant ever published to the stage session.</p>
     */
    inline bool GetPublished() const { return m_published; }
    inline bool PublishedHasBeenSet() const { return m_publishedHasBeenSet; }
    inline void SetPublished(bool value) { m_publishedHasBeenSet = true; m_published = value; }
    inline Participant& WithPublished(bool value) { SetPublished(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s Internet Service Provider.</p>
     */
    inline const Aws::String& GetIspName() const { return m_ispName; }
    inline bool IspNameHasBeenSet() const { return m_ispNameHasBeenSet; }
    template<typename IspNameT = Aws::String>
    void SetIspName(IspNameT&& value) { m_ispNameHasBeenSet = true; m_ispName = std::forward<IspNameT>(value); }
    template<typename IspNameT = Aws::String>
    Participant& WithIspName(IspNameT&& value) { SetIspName(std::forward<IspNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s operating system.</p>
     */
    inline const Aws::String& GetOsName() const { return m_osName; }
    inline bool OsNameHasBeenSet() const { return m_osNameHasBeenSet; }
    template<typename OsNameT = Aws::String>
    void SetOsName(OsNameT&& value) { m_osNameHasBeenSet = true; m_osName = std::forward<OsNameT>(value); }
    template<typename OsNameT = Aws::String>
    Participant& WithOsName(OsNameT&& value) { SetOsName(std::forward<OsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s operating system version.</p>
     */
    inline const Aws::String& GetOsVersion() const { return m_osVersion; }
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }
    template<typename OsVersionT = Aws::String>
    void SetOsVersion(OsVersionT&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::forward<OsVersionT>(value); }
    template<typename OsVersionT = Aws::String>
    Participant& WithOsVersion(OsVersionT&& value) { SetOsVersion(std::forward<OsVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s browser.</p>
     */
    inline const Aws::String& GetBrowserName() const { return m_browserName; }
    inline bool BrowserNameHasBeenSet() const { return m_browserNameHasBeenSet; }
    template<typename BrowserNameT = Aws::String>
    void SetBrowserName(BrowserNameT&& value) { m_browserNameHasBeenSet = true; m_browserName = std::forward<BrowserNameT>(value); }
    template<typename BrowserNameT = Aws::String>
    Participant& WithBrowserName(BrowserNameT&& value) { SetBrowserName(std::forward<BrowserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s browser version.</p>
     */
    inline const Aws::String& GetBrowserVersion() const { return m_browserVersion; }
    inline bool BrowserVersionHasBeenSet() const { return m_browserVersionHasBeenSet; }
    template<typename BrowserVersionT = Aws::String>
    void SetBrowserVersion(BrowserVersionT&& value) { m_browserVersionHasBeenSet = true; m_browserVersion = std::forward<BrowserVersionT>(value); }
    template<typename BrowserVersionT = Aws::String>
    Participant& WithBrowserVersion(BrowserVersionT&& value) { SetBrowserVersion(std::forward<BrowserVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s SDK version.</p>
     */
    inline const Aws::String& GetSdkVersion() const { return m_sdkVersion; }
    inline bool SdkVersionHasBeenSet() const { return m_sdkVersionHasBeenSet; }
    template<typename SdkVersionT = Aws::String>
    void SetSdkVersion(SdkVersionT&& value) { m_sdkVersionHasBeenSet = true; m_sdkVersion = std::forward<SdkVersionT>(value); }
    template<typename SdkVersionT = Aws::String>
    Participant& WithSdkVersion(SdkVersionT&& value) { SetSdkVersion(std::forward<SdkVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the S3 bucket to where the participant is being recorded, if
     * individual participant recording is enabled, or <code>""</code> (empty string),
     * if recording is not enabled.</p>
     */
    inline const Aws::String& GetRecordingS3BucketName() const { return m_recordingS3BucketName; }
    inline bool RecordingS3BucketNameHasBeenSet() const { return m_recordingS3BucketNameHasBeenSet; }
    template<typename RecordingS3BucketNameT = Aws::String>
    void SetRecordingS3BucketName(RecordingS3BucketNameT&& value) { m_recordingS3BucketNameHasBeenSet = true; m_recordingS3BucketName = std::forward<RecordingS3BucketNameT>(value); }
    template<typename RecordingS3BucketNameT = Aws::String>
    Participant& WithRecordingS3BucketName(RecordingS3BucketNameT&& value) { SetRecordingS3BucketName(std::forward<RecordingS3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 prefix of the S3 bucket where the participant is being recorded, if
     * individual participant recording is enabled, or <code>""</code> (empty string),
     * if recording is not enabled. If individual participant recording merge is
     * enabled, and if a stage publisher disconnects from a stage and then reconnects,
     * IVS tries to record to the same S3 prefix as the previous session. See <a
     * href="/ivs/latest/RealTimeUserGuide/rt-individual-participant-recording.html#ind-part-rec-merge-frag">
     * Merge Fragmented Individual Participant Recordings</a>.</p>
     */
    inline const Aws::String& GetRecordingS3Prefix() const { return m_recordingS3Prefix; }
    inline bool RecordingS3PrefixHasBeenSet() const { return m_recordingS3PrefixHasBeenSet; }
    template<typename RecordingS3PrefixT = Aws::String>
    void SetRecordingS3Prefix(RecordingS3PrefixT&& value) { m_recordingS3PrefixHasBeenSet = true; m_recordingS3Prefix = std::forward<RecordingS3PrefixT>(value); }
    template<typename RecordingS3PrefixT = Aws::String>
    Participant& WithRecordingS3Prefix(RecordingS3PrefixT&& value) { SetRecordingS3Prefix(std::forward<RecordingS3PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s recording state.</p>
     */
    inline ParticipantRecordingState GetRecordingState() const { return m_recordingState; }
    inline bool RecordingStateHasBeenSet() const { return m_recordingStateHasBeenSet; }
    inline void SetRecordingState(ParticipantRecordingState value) { m_recordingStateHasBeenSet = true; m_recordingState = value; }
    inline Participant& WithRecordingState(ParticipantRecordingState value) { SetRecordingState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of ingest protocol that the participant employs for broadcasting.</p>
     */
    inline ParticipantProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(ParticipantProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline Participant& WithProtocol(ParticipantProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the participant has been replicated to another stage or is a
     * replica from another stage. Default: <code>NONE</code>. </p>
     */
    inline ReplicationType GetReplicationType() const { return m_replicationType; }
    inline bool ReplicationTypeHasBeenSet() const { return m_replicationTypeHasBeenSet; }
    inline void SetReplicationType(ReplicationType value) { m_replicationTypeHasBeenSet = true; m_replicationType = value; }
    inline Participant& WithReplicationType(ReplicationType value) { SetReplicationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant's replication state.</p>
     */
    inline ReplicationState GetReplicationState() const { return m_replicationState; }
    inline bool ReplicationStateHasBeenSet() const { return m_replicationStateHasBeenSet; }
    inline void SetReplicationState(ReplicationState value) { m_replicationStateHasBeenSet = true; m_replicationState = value; }
    inline Participant& WithReplicationState(ReplicationState value) { SetReplicationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source stage ARN from which this participant is replicated, if
     * <code>replicationType</code> is <code>REPLICA</code>. </p>
     */
    inline const Aws::String& GetSourceStageArn() const { return m_sourceStageArn; }
    inline bool SourceStageArnHasBeenSet() const { return m_sourceStageArnHasBeenSet; }
    template<typename SourceStageArnT = Aws::String>
    void SetSourceStageArn(SourceStageArnT&& value) { m_sourceStageArnHasBeenSet = true; m_sourceStageArn = std::forward<SourceStageArnT>(value); }
    template<typename SourceStageArnT = Aws::String>
    Participant& WithSourceStageArn(SourceStageArnT&& value) { SetSourceStageArn(std::forward<SourceStageArnT>(value)); return *this;}
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
    Participant& WithSourceSessionId(SourceSessionIdT&& value) { SetSourceSessionId(std::forward<SourceSessionIdT>(value)); return *this;}
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

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    bool m_published{false};
    bool m_publishedHasBeenSet = false;

    Aws::String m_ispName;
    bool m_ispNameHasBeenSet = false;

    Aws::String m_osName;
    bool m_osNameHasBeenSet = false;

    Aws::String m_osVersion;
    bool m_osVersionHasBeenSet = false;

    Aws::String m_browserName;
    bool m_browserNameHasBeenSet = false;

    Aws::String m_browserVersion;
    bool m_browserVersionHasBeenSet = false;

    Aws::String m_sdkVersion;
    bool m_sdkVersionHasBeenSet = false;

    Aws::String m_recordingS3BucketName;
    bool m_recordingS3BucketNameHasBeenSet = false;

    Aws::String m_recordingS3Prefix;
    bool m_recordingS3PrefixHasBeenSet = false;

    ParticipantRecordingState m_recordingState{ParticipantRecordingState::NOT_SET};
    bool m_recordingStateHasBeenSet = false;

    ParticipantProtocol m_protocol{ParticipantProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

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
