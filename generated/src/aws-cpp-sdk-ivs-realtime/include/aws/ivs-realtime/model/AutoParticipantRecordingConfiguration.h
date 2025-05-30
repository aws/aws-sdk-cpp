/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs-realtime/model/ParticipantThumbnailConfiguration.h>
#include <aws/ivs-realtime/model/ParticipantRecordingHlsConfiguration.h>
#include <aws/ivs-realtime/model/ParticipantRecordingMediaType.h>
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
   * <p>Object specifying a configuration for individual participant
   * recording.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/AutoParticipantRecordingConfiguration">AWS
   * API Reference</a></p>
   */
  class AutoParticipantRecordingConfiguration
  {
  public:
    AWS_IVSREALTIME_API AutoParticipantRecordingConfiguration() = default;
    AWS_IVSREALTIME_API AutoParticipantRecordingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API AutoParticipantRecordingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the <a>StorageConfiguration</a> resource to use for individual
     * participant recording. Default: <code>""</code> (empty string, no storage
     * configuration is specified). Individual participant recording cannot be started
     * unless a storage configuration is specified, when a <a>Stage</a> is created or
     * updated. To disable individual participant recording, set this to
     * <code>""</code>; other fields in this object will get reset to their defaults
     * when sending <code>""</code>. </p>
     */
    inline const Aws::String& GetStorageConfigurationArn() const { return m_storageConfigurationArn; }
    inline bool StorageConfigurationArnHasBeenSet() const { return m_storageConfigurationArnHasBeenSet; }
    template<typename StorageConfigurationArnT = Aws::String>
    void SetStorageConfigurationArn(StorageConfigurationArnT&& value) { m_storageConfigurationArnHasBeenSet = true; m_storageConfigurationArn = std::forward<StorageConfigurationArnT>(value); }
    template<typename StorageConfigurationArnT = Aws::String>
    AutoParticipantRecordingConfiguration& WithStorageConfigurationArn(StorageConfigurationArnT&& value) { SetStorageConfigurationArn(std::forward<StorageConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Types of media to be recorded. Default: <code>AUDIO_VIDEO</code>.</p>
     */
    inline const Aws::Vector<ParticipantRecordingMediaType>& GetMediaTypes() const { return m_mediaTypes; }
    inline bool MediaTypesHasBeenSet() const { return m_mediaTypesHasBeenSet; }
    template<typename MediaTypesT = Aws::Vector<ParticipantRecordingMediaType>>
    void SetMediaTypes(MediaTypesT&& value) { m_mediaTypesHasBeenSet = true; m_mediaTypes = std::forward<MediaTypesT>(value); }
    template<typename MediaTypesT = Aws::Vector<ParticipantRecordingMediaType>>
    AutoParticipantRecordingConfiguration& WithMediaTypes(MediaTypesT&& value) { SetMediaTypes(std::forward<MediaTypesT>(value)); return *this;}
    inline AutoParticipantRecordingConfiguration& AddMediaTypes(ParticipantRecordingMediaType value) { m_mediaTypesHasBeenSet = true; m_mediaTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A complex type that allows you to enable/disable the recording of thumbnails
     * for individual participant recording and modify the interval at which thumbnails
     * are generated for the live session.</p>
     */
    inline const ParticipantThumbnailConfiguration& GetThumbnailConfiguration() const { return m_thumbnailConfiguration; }
    inline bool ThumbnailConfigurationHasBeenSet() const { return m_thumbnailConfigurationHasBeenSet; }
    template<typename ThumbnailConfigurationT = ParticipantThumbnailConfiguration>
    void SetThumbnailConfiguration(ThumbnailConfigurationT&& value) { m_thumbnailConfigurationHasBeenSet = true; m_thumbnailConfiguration = std::forward<ThumbnailConfigurationT>(value); }
    template<typename ThumbnailConfigurationT = ParticipantThumbnailConfiguration>
    AutoParticipantRecordingConfiguration& WithThumbnailConfiguration(ThumbnailConfigurationT&& value) { SetThumbnailConfiguration(std::forward<ThumbnailConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a stage publisher disconnects and then reconnects within the specified
     * interval, the multiple recordings will be considered a single recording and
     * merged together.</p> <p>The default value is 0, which disables merging.</p>
     */
    inline int GetRecordingReconnectWindowSeconds() const { return m_recordingReconnectWindowSeconds; }
    inline bool RecordingReconnectWindowSecondsHasBeenSet() const { return m_recordingReconnectWindowSecondsHasBeenSet; }
    inline void SetRecordingReconnectWindowSeconds(int value) { m_recordingReconnectWindowSecondsHasBeenSet = true; m_recordingReconnectWindowSeconds = value; }
    inline AutoParticipantRecordingConfiguration& WithRecordingReconnectWindowSeconds(int value) { SetRecordingReconnectWindowSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>HLS configuration object for individual participant recording.</p>
     */
    inline const ParticipantRecordingHlsConfiguration& GetHlsConfiguration() const { return m_hlsConfiguration; }
    inline bool HlsConfigurationHasBeenSet() const { return m_hlsConfigurationHasBeenSet; }
    template<typename HlsConfigurationT = ParticipantRecordingHlsConfiguration>
    void SetHlsConfiguration(HlsConfigurationT&& value) { m_hlsConfigurationHasBeenSet = true; m_hlsConfiguration = std::forward<HlsConfigurationT>(value); }
    template<typename HlsConfigurationT = ParticipantRecordingHlsConfiguration>
    AutoParticipantRecordingConfiguration& WithHlsConfiguration(HlsConfigurationT&& value) { SetHlsConfiguration(std::forward<HlsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional field to disable replica participant recording. If this is set to
     * <code>false</code> when a participant is a replica, replica participants are not
     * recorded. Default: <code>true</code>.</p>
     */
    inline bool GetRecordParticipantReplicas() const { return m_recordParticipantReplicas; }
    inline bool RecordParticipantReplicasHasBeenSet() const { return m_recordParticipantReplicasHasBeenSet; }
    inline void SetRecordParticipantReplicas(bool value) { m_recordParticipantReplicasHasBeenSet = true; m_recordParticipantReplicas = value; }
    inline AutoParticipantRecordingConfiguration& WithRecordParticipantReplicas(bool value) { SetRecordParticipantReplicas(value); return *this;}
    ///@}
  private:

    Aws::String m_storageConfigurationArn;
    bool m_storageConfigurationArnHasBeenSet = false;

    Aws::Vector<ParticipantRecordingMediaType> m_mediaTypes;
    bool m_mediaTypesHasBeenSet = false;

    ParticipantThumbnailConfiguration m_thumbnailConfiguration;
    bool m_thumbnailConfigurationHasBeenSet = false;

    int m_recordingReconnectWindowSeconds{0};
    bool m_recordingReconnectWindowSecondsHasBeenSet = false;

    ParticipantRecordingHlsConfiguration m_hlsConfiguration;
    bool m_hlsConfigurationHasBeenSet = false;

    bool m_recordParticipantReplicas{false};
    bool m_recordParticipantReplicasHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
