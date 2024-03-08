/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/AudioFeatures.h>
#include <aws/chime-sdk-meetings/model/VideoFeatures.h>
#include <aws/chime-sdk-meetings/model/ContentFeatures.h>
#include <aws/chime-sdk-meetings/model/AttendeeFeatures.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>The configuration settings of the features available to a
   * meeting.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/MeetingFeaturesConfiguration">AWS
   * API Reference</a></p>
   */
  class MeetingFeaturesConfiguration
  {
  public:
    AWS_CHIMESDKMEETINGS_API MeetingFeaturesConfiguration();
    AWS_CHIMESDKMEETINGS_API MeetingFeaturesConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API MeetingFeaturesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration settings for the audio features available to a meeting.</p>
     */
    inline const AudioFeatures& GetAudio() const{ return m_audio; }

    /**
     * <p>The configuration settings for the audio features available to a meeting.</p>
     */
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }

    /**
     * <p>The configuration settings for the audio features available to a meeting.</p>
     */
    inline void SetAudio(const AudioFeatures& value) { m_audioHasBeenSet = true; m_audio = value; }

    /**
     * <p>The configuration settings for the audio features available to a meeting.</p>
     */
    inline void SetAudio(AudioFeatures&& value) { m_audioHasBeenSet = true; m_audio = std::move(value); }

    /**
     * <p>The configuration settings for the audio features available to a meeting.</p>
     */
    inline MeetingFeaturesConfiguration& WithAudio(const AudioFeatures& value) { SetAudio(value); return *this;}

    /**
     * <p>The configuration settings for the audio features available to a meeting.</p>
     */
    inline MeetingFeaturesConfiguration& WithAudio(AudioFeatures&& value) { SetAudio(std::move(value)); return *this;}


    /**
     * <p>The configuration settings for the video features available to a meeting.</p>
     */
    inline const VideoFeatures& GetVideo() const{ return m_video; }

    /**
     * <p>The configuration settings for the video features available to a meeting.</p>
     */
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }

    /**
     * <p>The configuration settings for the video features available to a meeting.</p>
     */
    inline void SetVideo(const VideoFeatures& value) { m_videoHasBeenSet = true; m_video = value; }

    /**
     * <p>The configuration settings for the video features available to a meeting.</p>
     */
    inline void SetVideo(VideoFeatures&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }

    /**
     * <p>The configuration settings for the video features available to a meeting.</p>
     */
    inline MeetingFeaturesConfiguration& WithVideo(const VideoFeatures& value) { SetVideo(value); return *this;}

    /**
     * <p>The configuration settings for the video features available to a meeting.</p>
     */
    inline MeetingFeaturesConfiguration& WithVideo(VideoFeatures&& value) { SetVideo(std::move(value)); return *this;}


    /**
     * <p>The configuration settings for the content features available to a
     * meeting.</p>
     */
    inline const ContentFeatures& GetContent() const{ return m_content; }

    /**
     * <p>The configuration settings for the content features available to a
     * meeting.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The configuration settings for the content features available to a
     * meeting.</p>
     */
    inline void SetContent(const ContentFeatures& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The configuration settings for the content features available to a
     * meeting.</p>
     */
    inline void SetContent(ContentFeatures&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The configuration settings for the content features available to a
     * meeting.</p>
     */
    inline MeetingFeaturesConfiguration& WithContent(const ContentFeatures& value) { SetContent(value); return *this;}

    /**
     * <p>The configuration settings for the content features available to a
     * meeting.</p>
     */
    inline MeetingFeaturesConfiguration& WithContent(ContentFeatures&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>The configuration settings for the attendee features available to a
     * meeting.</p>
     */
    inline const AttendeeFeatures& GetAttendee() const{ return m_attendee; }

    /**
     * <p>The configuration settings for the attendee features available to a
     * meeting.</p>
     */
    inline bool AttendeeHasBeenSet() const { return m_attendeeHasBeenSet; }

    /**
     * <p>The configuration settings for the attendee features available to a
     * meeting.</p>
     */
    inline void SetAttendee(const AttendeeFeatures& value) { m_attendeeHasBeenSet = true; m_attendee = value; }

    /**
     * <p>The configuration settings for the attendee features available to a
     * meeting.</p>
     */
    inline void SetAttendee(AttendeeFeatures&& value) { m_attendeeHasBeenSet = true; m_attendee = std::move(value); }

    /**
     * <p>The configuration settings for the attendee features available to a
     * meeting.</p>
     */
    inline MeetingFeaturesConfiguration& WithAttendee(const AttendeeFeatures& value) { SetAttendee(value); return *this;}

    /**
     * <p>The configuration settings for the attendee features available to a
     * meeting.</p>
     */
    inline MeetingFeaturesConfiguration& WithAttendee(AttendeeFeatures&& value) { SetAttendee(std::move(value)); return *this;}

  private:

    AudioFeatures m_audio;
    bool m_audioHasBeenSet = false;

    VideoFeatures m_video;
    bool m_videoHasBeenSet = false;

    ContentFeatures m_content;
    bool m_contentHasBeenSet = false;

    AttendeeFeatures m_attendee;
    bool m_attendeeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
