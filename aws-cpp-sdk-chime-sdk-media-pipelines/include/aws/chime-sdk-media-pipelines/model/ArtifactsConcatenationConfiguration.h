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
    AWS_CHIMESDKMEDIAPIPELINES_API ArtifactsConcatenationConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API ArtifactsConcatenationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API ArtifactsConcatenationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for the audio artifacts concatenation.</p>
     */
    inline const AudioConcatenationConfiguration& GetAudio() const{ return m_audio; }

    /**
     * <p>The configuration for the audio artifacts concatenation.</p>
     */
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }

    /**
     * <p>The configuration for the audio artifacts concatenation.</p>
     */
    inline void SetAudio(const AudioConcatenationConfiguration& value) { m_audioHasBeenSet = true; m_audio = value; }

    /**
     * <p>The configuration for the audio artifacts concatenation.</p>
     */
    inline void SetAudio(AudioConcatenationConfiguration&& value) { m_audioHasBeenSet = true; m_audio = std::move(value); }

    /**
     * <p>The configuration for the audio artifacts concatenation.</p>
     */
    inline ArtifactsConcatenationConfiguration& WithAudio(const AudioConcatenationConfiguration& value) { SetAudio(value); return *this;}

    /**
     * <p>The configuration for the audio artifacts concatenation.</p>
     */
    inline ArtifactsConcatenationConfiguration& WithAudio(AudioConcatenationConfiguration&& value) { SetAudio(std::move(value)); return *this;}


    /**
     * <p>The configuration for the video artifacts concatenation.</p>
     */
    inline const VideoConcatenationConfiguration& GetVideo() const{ return m_video; }

    /**
     * <p>The configuration for the video artifacts concatenation.</p>
     */
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }

    /**
     * <p>The configuration for the video artifacts concatenation.</p>
     */
    inline void SetVideo(const VideoConcatenationConfiguration& value) { m_videoHasBeenSet = true; m_video = value; }

    /**
     * <p>The configuration for the video artifacts concatenation.</p>
     */
    inline void SetVideo(VideoConcatenationConfiguration&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }

    /**
     * <p>The configuration for the video artifacts concatenation.</p>
     */
    inline ArtifactsConcatenationConfiguration& WithVideo(const VideoConcatenationConfiguration& value) { SetVideo(value); return *this;}

    /**
     * <p>The configuration for the video artifacts concatenation.</p>
     */
    inline ArtifactsConcatenationConfiguration& WithVideo(VideoConcatenationConfiguration&& value) { SetVideo(std::move(value)); return *this;}


    /**
     * <p>The configuration for the content artifacts concatenation.</p>
     */
    inline const ContentConcatenationConfiguration& GetContent() const{ return m_content; }

    /**
     * <p>The configuration for the content artifacts concatenation.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The configuration for the content artifacts concatenation.</p>
     */
    inline void SetContent(const ContentConcatenationConfiguration& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The configuration for the content artifacts concatenation.</p>
     */
    inline void SetContent(ContentConcatenationConfiguration&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The configuration for the content artifacts concatenation.</p>
     */
    inline ArtifactsConcatenationConfiguration& WithContent(const ContentConcatenationConfiguration& value) { SetContent(value); return *this;}

    /**
     * <p>The configuration for the content artifacts concatenation.</p>
     */
    inline ArtifactsConcatenationConfiguration& WithContent(ContentConcatenationConfiguration&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>The configuration for the data channel artifacts concatenation.</p>
     */
    inline const DataChannelConcatenationConfiguration& GetDataChannel() const{ return m_dataChannel; }

    /**
     * <p>The configuration for the data channel artifacts concatenation.</p>
     */
    inline bool DataChannelHasBeenSet() const { return m_dataChannelHasBeenSet; }

    /**
     * <p>The configuration for the data channel artifacts concatenation.</p>
     */
    inline void SetDataChannel(const DataChannelConcatenationConfiguration& value) { m_dataChannelHasBeenSet = true; m_dataChannel = value; }

    /**
     * <p>The configuration for the data channel artifacts concatenation.</p>
     */
    inline void SetDataChannel(DataChannelConcatenationConfiguration&& value) { m_dataChannelHasBeenSet = true; m_dataChannel = std::move(value); }

    /**
     * <p>The configuration for the data channel artifacts concatenation.</p>
     */
    inline ArtifactsConcatenationConfiguration& WithDataChannel(const DataChannelConcatenationConfiguration& value) { SetDataChannel(value); return *this;}

    /**
     * <p>The configuration for the data channel artifacts concatenation.</p>
     */
    inline ArtifactsConcatenationConfiguration& WithDataChannel(DataChannelConcatenationConfiguration&& value) { SetDataChannel(std::move(value)); return *this;}


    /**
     * <p>The configuration for the transcription messages artifacts concatenation.</p>
     */
    inline const TranscriptionMessagesConcatenationConfiguration& GetTranscriptionMessages() const{ return m_transcriptionMessages; }

    /**
     * <p>The configuration for the transcription messages artifacts concatenation.</p>
     */
    inline bool TranscriptionMessagesHasBeenSet() const { return m_transcriptionMessagesHasBeenSet; }

    /**
     * <p>The configuration for the transcription messages artifacts concatenation.</p>
     */
    inline void SetTranscriptionMessages(const TranscriptionMessagesConcatenationConfiguration& value) { m_transcriptionMessagesHasBeenSet = true; m_transcriptionMessages = value; }

    /**
     * <p>The configuration for the transcription messages artifacts concatenation.</p>
     */
    inline void SetTranscriptionMessages(TranscriptionMessagesConcatenationConfiguration&& value) { m_transcriptionMessagesHasBeenSet = true; m_transcriptionMessages = std::move(value); }

    /**
     * <p>The configuration for the transcription messages artifacts concatenation.</p>
     */
    inline ArtifactsConcatenationConfiguration& WithTranscriptionMessages(const TranscriptionMessagesConcatenationConfiguration& value) { SetTranscriptionMessages(value); return *this;}

    /**
     * <p>The configuration for the transcription messages artifacts concatenation.</p>
     */
    inline ArtifactsConcatenationConfiguration& WithTranscriptionMessages(TranscriptionMessagesConcatenationConfiguration&& value) { SetTranscriptionMessages(std::move(value)); return *this;}


    /**
     * <p>The configuration for the meeting events artifacts concatenation.</p>
     */
    inline const MeetingEventsConcatenationConfiguration& GetMeetingEvents() const{ return m_meetingEvents; }

    /**
     * <p>The configuration for the meeting events artifacts concatenation.</p>
     */
    inline bool MeetingEventsHasBeenSet() const { return m_meetingEventsHasBeenSet; }

    /**
     * <p>The configuration for the meeting events artifacts concatenation.</p>
     */
    inline void SetMeetingEvents(const MeetingEventsConcatenationConfiguration& value) { m_meetingEventsHasBeenSet = true; m_meetingEvents = value; }

    /**
     * <p>The configuration for the meeting events artifacts concatenation.</p>
     */
    inline void SetMeetingEvents(MeetingEventsConcatenationConfiguration&& value) { m_meetingEventsHasBeenSet = true; m_meetingEvents = std::move(value); }

    /**
     * <p>The configuration for the meeting events artifacts concatenation.</p>
     */
    inline ArtifactsConcatenationConfiguration& WithMeetingEvents(const MeetingEventsConcatenationConfiguration& value) { SetMeetingEvents(value); return *this;}

    /**
     * <p>The configuration for the meeting events artifacts concatenation.</p>
     */
    inline ArtifactsConcatenationConfiguration& WithMeetingEvents(MeetingEventsConcatenationConfiguration&& value) { SetMeetingEvents(std::move(value)); return *this;}


    /**
     * <p>The configuration for the composited video artifacts concatenation.</p>
     */
    inline const CompositedVideoConcatenationConfiguration& GetCompositedVideo() const{ return m_compositedVideo; }

    /**
     * <p>The configuration for the composited video artifacts concatenation.</p>
     */
    inline bool CompositedVideoHasBeenSet() const { return m_compositedVideoHasBeenSet; }

    /**
     * <p>The configuration for the composited video artifacts concatenation.</p>
     */
    inline void SetCompositedVideo(const CompositedVideoConcatenationConfiguration& value) { m_compositedVideoHasBeenSet = true; m_compositedVideo = value; }

    /**
     * <p>The configuration for the composited video artifacts concatenation.</p>
     */
    inline void SetCompositedVideo(CompositedVideoConcatenationConfiguration&& value) { m_compositedVideoHasBeenSet = true; m_compositedVideo = std::move(value); }

    /**
     * <p>The configuration for the composited video artifacts concatenation.</p>
     */
    inline ArtifactsConcatenationConfiguration& WithCompositedVideo(const CompositedVideoConcatenationConfiguration& value) { SetCompositedVideo(value); return *this;}

    /**
     * <p>The configuration for the composited video artifacts concatenation.</p>
     */
    inline ArtifactsConcatenationConfiguration& WithCompositedVideo(CompositedVideoConcatenationConfiguration&& value) { SetCompositedVideo(std::move(value)); return *this;}

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
