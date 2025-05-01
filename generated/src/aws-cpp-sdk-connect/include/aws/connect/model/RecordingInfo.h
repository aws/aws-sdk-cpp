/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/StorageType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/MediaStreamType.h>
#include <aws/connect/model/ParticipantType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/RecordingStatus.h>
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
   * <p>Information about a voice recording, chat transcript, or screen
   * recording.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RecordingInfo">AWS
   * API Reference</a></p>
   */
  class RecordingInfo
  {
  public:
    AWS_CONNECT_API RecordingInfo() = default;
    AWS_CONNECT_API RecordingInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RecordingInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Where the recording/transcript is stored.</p>
     */
    inline StorageType GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(StorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline RecordingInfo& WithStorageType(StorageType value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location, in Amazon S3, for the recording/transcript.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    RecordingInfo& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the media stream used during the conversation.</p>
     */
    inline MediaStreamType GetMediaStreamType() const { return m_mediaStreamType; }
    inline bool MediaStreamTypeHasBeenSet() const { return m_mediaStreamTypeHasBeenSet; }
    inline void SetMediaStreamType(MediaStreamType value) { m_mediaStreamTypeHasBeenSet = true; m_mediaStreamType = value; }
    inline RecordingInfo& WithMediaStreamType(MediaStreamType value) { SetMediaStreamType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the conversation participant, whether they are an agent or
     * contact. The participant types are as follows:</p> <ul> <li> <p>All</p> </li>
     * <li> <p>Manager</p> </li> <li> <p>Agent</p> </li> <li> <p>Customer</p> </li>
     * <li> <p>Thirdparty</p> </li> <li> <p>Supervisor</p> </li> </ul>
     */
    inline ParticipantType GetParticipantType() const { return m_participantType; }
    inline bool ParticipantTypeHasBeenSet() const { return m_participantTypeHasBeenSet; }
    inline void SetParticipantType(ParticipantType value) { m_participantTypeHasBeenSet = true; m_participantType = value; }
    inline RecordingInfo& WithParticipantType(ParticipantType value) { SetParticipantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number that identifies the Kinesis Video Streams fragment where the
     * customer audio stream started.</p>
     */
    inline const Aws::String& GetFragmentStartNumber() const { return m_fragmentStartNumber; }
    inline bool FragmentStartNumberHasBeenSet() const { return m_fragmentStartNumberHasBeenSet; }
    template<typename FragmentStartNumberT = Aws::String>
    void SetFragmentStartNumber(FragmentStartNumberT&& value) { m_fragmentStartNumberHasBeenSet = true; m_fragmentStartNumber = std::forward<FragmentStartNumberT>(value); }
    template<typename FragmentStartNumberT = Aws::String>
    RecordingInfo& WithFragmentStartNumber(FragmentStartNumberT&& value) { SetFragmentStartNumber(std::forward<FragmentStartNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number that identifies the Kinesis Video Streams fragment where the
     * customer audio stream stopped.</p>
     */
    inline const Aws::String& GetFragmentStopNumber() const { return m_fragmentStopNumber; }
    inline bool FragmentStopNumberHasBeenSet() const { return m_fragmentStopNumberHasBeenSet; }
    template<typename FragmentStopNumberT = Aws::String>
    void SetFragmentStopNumber(FragmentStopNumberT&& value) { m_fragmentStopNumberHasBeenSet = true; m_fragmentStopNumber = std::forward<FragmentStopNumberT>(value); }
    template<typename FragmentStopNumberT = Aws::String>
    RecordingInfo& WithFragmentStopNumber(FragmentStopNumberT&& value) { SetFragmentStopNumber(std::forward<FragmentStopNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the conversation of the last leg of the recording started in UTC
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    RecordingInfo& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the conversation of the last leg of recording stopped in UTC time.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTimestamp() const { return m_stopTimestamp; }
    inline bool StopTimestampHasBeenSet() const { return m_stopTimestampHasBeenSet; }
    template<typename StopTimestampT = Aws::Utils::DateTime>
    void SetStopTimestamp(StopTimestampT&& value) { m_stopTimestampHasBeenSet = true; m_stopTimestamp = std::forward<StopTimestampT>(value); }
    template<typename StopTimestampT = Aws::Utils::DateTime>
    RecordingInfo& WithStopTimestamp(StopTimestampT&& value) { SetStopTimestamp(std::forward<StopTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the recording/transcript.</p>
     */
    inline RecordingStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RecordingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RecordingInfo& WithStatus(RecordingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the recording/transcript was deleted, this is the reason entered for the
     * deletion.</p>
     */
    inline const Aws::String& GetDeletionReason() const { return m_deletionReason; }
    inline bool DeletionReasonHasBeenSet() const { return m_deletionReasonHasBeenSet; }
    template<typename DeletionReasonT = Aws::String>
    void SetDeletionReason(DeletionReasonT&& value) { m_deletionReasonHasBeenSet = true; m_deletionReason = std::forward<DeletionReasonT>(value); }
    template<typename DeletionReasonT = Aws::String>
    RecordingInfo& WithDeletionReason(DeletionReasonT&& value) { SetDeletionReason(std::forward<DeletionReasonT>(value)); return *this;}
    ///@}
  private:

    StorageType m_storageType{StorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    MediaStreamType m_mediaStreamType{MediaStreamType::NOT_SET};
    bool m_mediaStreamTypeHasBeenSet = false;

    ParticipantType m_participantType{ParticipantType::NOT_SET};
    bool m_participantTypeHasBeenSet = false;

    Aws::String m_fragmentStartNumber;
    bool m_fragmentStartNumberHasBeenSet = false;

    Aws::String m_fragmentStopNumber;
    bool m_fragmentStopNumberHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp{};
    bool m_startTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_stopTimestamp{};
    bool m_stopTimestampHasBeenSet = false;

    RecordingStatus m_status{RecordingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_deletionReason;
    bool m_deletionReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
