/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/AudioConcatenationConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/VideoConcatenationConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/ContentConcatenationConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/DataChannelConcatenationConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/TranscriptionMessagesConcatenationConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/MeetingEventsConcatenationConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/CompositedVideoConcatenationConfiguration.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>The configuration for the artifacts concatenation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ArtifactsConcatenationConfiguration">AWS
   * API Reference</a></p>
   */
  class ArtifactsConcatenationConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ArtifactsConcatenationConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API ArtifactsConcatenationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API ArtifactsConcatenationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for the audio artifacts concatenation.</p>
     */
    inline const AudioConcatenationConfiguration& GetAudio() const { return m_audio; }
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }
    template<typename AudioT = AudioConcatenationConfiguration>
    void SetAudio(AudioT&& value) { m_audioHasBeenSet = true; m_audio = std::forward<AudioT>(value); }
    template<typename AudioT = AudioConcatenationConfiguration>
    ArtifactsConcatenationConfiguration& WithAudio(AudioT&& value) { SetAudio(std::forward<AudioT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the video artifacts concatenation.</p>
     */
    inline const VideoConcatenationConfiguration& GetVideo() const { return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    template<typename VideoT = VideoConcatenationConfiguration>
    void SetVideo(VideoT&& value) { m_videoHasBeenSet = true; m_video = std::forward<VideoT>(value); }
    template<typename VideoT = VideoConcatenationConfiguration>
    ArtifactsConcatenationConfiguration& WithVideo(VideoT&& value) { SetVideo(std::forward<VideoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the content artifacts concatenation.</p>
     */
    inline const ContentConcatenationConfiguration& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = ContentConcatenationConfiguration>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = ContentConcatenationConfiguration>
    ArtifactsConcatenationConfiguration& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the data channel artifacts concatenation.</p>
     */
    inline const DataChannelConcatenationConfiguration& GetDataChannel() const { return m_dataChannel; }
    inline bool DataChannelHasBeenSet() const { return m_dataChannelHasBeenSet; }
    template<typename DataChannelT = DataChannelConcatenationConfiguration>
    void SetDataChannel(DataChannelT&& value) { m_dataChannelHasBeenSet = true; m_dataChannel = std::forward<DataChannelT>(value); }
    template<typename DataChannelT = DataChannelConcatenationConfiguration>
    ArtifactsConcatenationConfiguration& WithDataChannel(DataChannelT&& value) { SetDataChannel(std::forward<DataChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the transcription messages artifacts concatenation.</p>
     */
    inline const TranscriptionMessagesConcatenationConfiguration& GetTranscriptionMessages() const { return m_transcriptionMessages; }
    inline bool TranscriptionMessagesHasBeenSet() const { return m_transcriptionMessagesHasBeenSet; }
    template<typename TranscriptionMessagesT = TranscriptionMessagesConcatenationConfiguration>
    void SetTranscriptionMessages(TranscriptionMessagesT&& value) { m_transcriptionMessagesHasBeenSet = true; m_transcriptionMessages = std::forward<TranscriptionMessagesT>(value); }
    template<typename TranscriptionMessagesT = TranscriptionMessagesConcatenationConfiguration>
    ArtifactsConcatenationConfiguration& WithTranscriptionMessages(TranscriptionMessagesT&& value) { SetTranscriptionMessages(std::forward<TranscriptionMessagesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the meeting events artifacts concatenation.</p>
     */
    inline const MeetingEventsConcatenationConfiguration& GetMeetingEvents() const { return m_meetingEvents; }
    inline bool MeetingEventsHasBeenSet() const { return m_meetingEventsHasBeenSet; }
    template<typename MeetingEventsT = MeetingEventsConcatenationConfiguration>
    void SetMeetingEvents(MeetingEventsT&& value) { m_meetingEventsHasBeenSet = true; m_meetingEvents = std::forward<MeetingEventsT>(value); }
    template<typename MeetingEventsT = MeetingEventsConcatenationConfiguration>
    ArtifactsConcatenationConfiguration& WithMeetingEvents(MeetingEventsT&& value) { SetMeetingEvents(std::forward<MeetingEventsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the composited video artifacts concatenation.</p>
     */
    inline const CompositedVideoConcatenationConfiguration& GetCompositedVideo() const { return m_compositedVideo; }
    inline bool CompositedVideoHasBeenSet() const { return m_compositedVideoHasBeenSet; }
    template<typename CompositedVideoT = CompositedVideoConcatenationConfiguration>
    void SetCompositedVideo(CompositedVideoT&& value) { m_compositedVideoHasBeenSet = true; m_compositedVideo = std::forward<CompositedVideoT>(value); }
    template<typename CompositedVideoT = CompositedVideoConcatenationConfiguration>
    ArtifactsConcatenationConfiguration& WithCompositedVideo(CompositedVideoT&& value) { SetCompositedVideo(std::forward<CompositedVideoT>(value)); return *this;}
    ///@}
  private:

    AudioConcatenationConfiguration m_audio;
    bool m_audioHasBeenSet = false;

    VideoConcatenationConfiguration m_video;
    bool m_videoHasBeenSet = false;

    ContentConcatenationConfiguration m_content;
    bool m_contentHasBeenSet = false;

    DataChannelConcatenationConfiguration m_dataChannel;
    bool m_dataChannelHasBeenSet = false;

    TranscriptionMessagesConcatenationConfiguration m_transcriptionMessages;
    bool m_transcriptionMessagesHasBeenSet = false;

    MeetingEventsConcatenationConfiguration m_meetingEvents;
    bool m_meetingEventsHasBeenSet = false;

    CompositedVideoConcatenationConfiguration m_compositedVideo;
    bool m_compositedVideoHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
