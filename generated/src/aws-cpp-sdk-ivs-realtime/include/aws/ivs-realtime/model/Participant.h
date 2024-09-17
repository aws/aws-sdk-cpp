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
    AWS_IVSREALTIME_API Participant();
    AWS_IVSREALTIME_API Participant(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Participant& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline Participant& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}
    inline Participant& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}
    inline Participant& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}
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
    inline Participant& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline Participant& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline Participant& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the participant is connected to or disconnected from the stage.</p>
     */
    inline const ParticipantState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ParticipantState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ParticipantState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Participant& WithState(const ParticipantState& value) { SetState(value); return *this;}
    inline Participant& WithState(ParticipantState&& value) { SetState(std::move(value)); return *this;}
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
    inline Participant& WithFirstJoinTime(const Aws::Utils::DateTime& value) { SetFirstJoinTime(value); return *this;}
    inline Participant& WithFirstJoinTime(Aws::Utils::DateTime&& value) { SetFirstJoinTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application-provided attributes to encode into the token and attach to a
     * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
     * this field is 1 KB total. <i>This field is exposed to all stage participants and
     * should not be used for personally identifying, confidential, or sensitive
     * information</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline Participant& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline Participant& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline Participant& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline Participant& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline Participant& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline Participant& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline Participant& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline Participant& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline Participant& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the participant ever published to the stage session.</p>
     */
    inline bool GetPublished() const{ return m_published; }
    inline bool PublishedHasBeenSet() const { return m_publishedHasBeenSet; }
    inline void SetPublished(bool value) { m_publishedHasBeenSet = true; m_published = value; }
    inline Participant& WithPublished(bool value) { SetPublished(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s Internet Service Provider.</p>
     */
    inline const Aws::String& GetIspName() const{ return m_ispName; }
    inline bool IspNameHasBeenSet() const { return m_ispNameHasBeenSet; }
    inline void SetIspName(const Aws::String& value) { m_ispNameHasBeenSet = true; m_ispName = value; }
    inline void SetIspName(Aws::String&& value) { m_ispNameHasBeenSet = true; m_ispName = std::move(value); }
    inline void SetIspName(const char* value) { m_ispNameHasBeenSet = true; m_ispName.assign(value); }
    inline Participant& WithIspName(const Aws::String& value) { SetIspName(value); return *this;}
    inline Participant& WithIspName(Aws::String&& value) { SetIspName(std::move(value)); return *this;}
    inline Participant& WithIspName(const char* value) { SetIspName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s operating system.</p>
     */
    inline const Aws::String& GetOsName() const{ return m_osName; }
    inline bool OsNameHasBeenSet() const { return m_osNameHasBeenSet; }
    inline void SetOsName(const Aws::String& value) { m_osNameHasBeenSet = true; m_osName = value; }
    inline void SetOsName(Aws::String&& value) { m_osNameHasBeenSet = true; m_osName = std::move(value); }
    inline void SetOsName(const char* value) { m_osNameHasBeenSet = true; m_osName.assign(value); }
    inline Participant& WithOsName(const Aws::String& value) { SetOsName(value); return *this;}
    inline Participant& WithOsName(Aws::String&& value) { SetOsName(std::move(value)); return *this;}
    inline Participant& WithOsName(const char* value) { SetOsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s operating system version.</p>
     */
    inline const Aws::String& GetOsVersion() const{ return m_osVersion; }
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }
    inline void SetOsVersion(const Aws::String& value) { m_osVersionHasBeenSet = true; m_osVersion = value; }
    inline void SetOsVersion(Aws::String&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::move(value); }
    inline void SetOsVersion(const char* value) { m_osVersionHasBeenSet = true; m_osVersion.assign(value); }
    inline Participant& WithOsVersion(const Aws::String& value) { SetOsVersion(value); return *this;}
    inline Participant& WithOsVersion(Aws::String&& value) { SetOsVersion(std::move(value)); return *this;}
    inline Participant& WithOsVersion(const char* value) { SetOsVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s browser.</p>
     */
    inline const Aws::String& GetBrowserName() const{ return m_browserName; }
    inline bool BrowserNameHasBeenSet() const { return m_browserNameHasBeenSet; }
    inline void SetBrowserName(const Aws::String& value) { m_browserNameHasBeenSet = true; m_browserName = value; }
    inline void SetBrowserName(Aws::String&& value) { m_browserNameHasBeenSet = true; m_browserName = std::move(value); }
    inline void SetBrowserName(const char* value) { m_browserNameHasBeenSet = true; m_browserName.assign(value); }
    inline Participant& WithBrowserName(const Aws::String& value) { SetBrowserName(value); return *this;}
    inline Participant& WithBrowserName(Aws::String&& value) { SetBrowserName(std::move(value)); return *this;}
    inline Participant& WithBrowserName(const char* value) { SetBrowserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s browser version.</p>
     */
    inline const Aws::String& GetBrowserVersion() const{ return m_browserVersion; }
    inline bool BrowserVersionHasBeenSet() const { return m_browserVersionHasBeenSet; }
    inline void SetBrowserVersion(const Aws::String& value) { m_browserVersionHasBeenSet = true; m_browserVersion = value; }
    inline void SetBrowserVersion(Aws::String&& value) { m_browserVersionHasBeenSet = true; m_browserVersion = std::move(value); }
    inline void SetBrowserVersion(const char* value) { m_browserVersionHasBeenSet = true; m_browserVersion.assign(value); }
    inline Participant& WithBrowserVersion(const Aws::String& value) { SetBrowserVersion(value); return *this;}
    inline Participant& WithBrowserVersion(Aws::String&& value) { SetBrowserVersion(std::move(value)); return *this;}
    inline Participant& WithBrowserVersion(const char* value) { SetBrowserVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s SDK version.</p>
     */
    inline const Aws::String& GetSdkVersion() const{ return m_sdkVersion; }
    inline bool SdkVersionHasBeenSet() const { return m_sdkVersionHasBeenSet; }
    inline void SetSdkVersion(const Aws::String& value) { m_sdkVersionHasBeenSet = true; m_sdkVersion = value; }
    inline void SetSdkVersion(Aws::String&& value) { m_sdkVersionHasBeenSet = true; m_sdkVersion = std::move(value); }
    inline void SetSdkVersion(const char* value) { m_sdkVersionHasBeenSet = true; m_sdkVersion.assign(value); }
    inline Participant& WithSdkVersion(const Aws::String& value) { SetSdkVersion(value); return *this;}
    inline Participant& WithSdkVersion(Aws::String&& value) { SetSdkVersion(std::move(value)); return *this;}
    inline Participant& WithSdkVersion(const char* value) { SetSdkVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the S3 bucket to where the participant is being recorded, if
     * individual participant recording is enabled, or <code>""</code> (empty string),
     * if recording is not enabled.</p>
     */
    inline const Aws::String& GetRecordingS3BucketName() const{ return m_recordingS3BucketName; }
    inline bool RecordingS3BucketNameHasBeenSet() const { return m_recordingS3BucketNameHasBeenSet; }
    inline void SetRecordingS3BucketName(const Aws::String& value) { m_recordingS3BucketNameHasBeenSet = true; m_recordingS3BucketName = value; }
    inline void SetRecordingS3BucketName(Aws::String&& value) { m_recordingS3BucketNameHasBeenSet = true; m_recordingS3BucketName = std::move(value); }
    inline void SetRecordingS3BucketName(const char* value) { m_recordingS3BucketNameHasBeenSet = true; m_recordingS3BucketName.assign(value); }
    inline Participant& WithRecordingS3BucketName(const Aws::String& value) { SetRecordingS3BucketName(value); return *this;}
    inline Participant& WithRecordingS3BucketName(Aws::String&& value) { SetRecordingS3BucketName(std::move(value)); return *this;}
    inline Participant& WithRecordingS3BucketName(const char* value) { SetRecordingS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 prefix of the S3 bucket where the participant is being recorded, if
     * individual participant recording is enabled, or <code>""</code> (empty string),
     * if recording is not enabled.</p>
     */
    inline const Aws::String& GetRecordingS3Prefix() const{ return m_recordingS3Prefix; }
    inline bool RecordingS3PrefixHasBeenSet() const { return m_recordingS3PrefixHasBeenSet; }
    inline void SetRecordingS3Prefix(const Aws::String& value) { m_recordingS3PrefixHasBeenSet = true; m_recordingS3Prefix = value; }
    inline void SetRecordingS3Prefix(Aws::String&& value) { m_recordingS3PrefixHasBeenSet = true; m_recordingS3Prefix = std::move(value); }
    inline void SetRecordingS3Prefix(const char* value) { m_recordingS3PrefixHasBeenSet = true; m_recordingS3Prefix.assign(value); }
    inline Participant& WithRecordingS3Prefix(const Aws::String& value) { SetRecordingS3Prefix(value); return *this;}
    inline Participant& WithRecordingS3Prefix(Aws::String&& value) { SetRecordingS3Prefix(std::move(value)); return *this;}
    inline Participant& WithRecordingS3Prefix(const char* value) { SetRecordingS3Prefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant’s recording state.</p>
     */
    inline const ParticipantRecordingState& GetRecordingState() const{ return m_recordingState; }
    inline bool RecordingStateHasBeenSet() const { return m_recordingStateHasBeenSet; }
    inline void SetRecordingState(const ParticipantRecordingState& value) { m_recordingStateHasBeenSet = true; m_recordingState = value; }
    inline void SetRecordingState(ParticipantRecordingState&& value) { m_recordingStateHasBeenSet = true; m_recordingState = std::move(value); }
    inline Participant& WithRecordingState(const ParticipantRecordingState& value) { SetRecordingState(value); return *this;}
    inline Participant& WithRecordingState(ParticipantRecordingState&& value) { SetRecordingState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of ingest protocol that the participant employs for broadcasting.</p>
     */
    inline const ParticipantProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const ParticipantProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(ParticipantProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline Participant& WithProtocol(const ParticipantProtocol& value) { SetProtocol(value); return *this;}
    inline Participant& WithProtocol(ParticipantProtocol&& value) { SetProtocol(std::move(value)); return *this;}
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

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    bool m_published;
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

    ParticipantRecordingState m_recordingState;
    bool m_recordingStateHasBeenSet = false;

    ParticipantProtocol m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
