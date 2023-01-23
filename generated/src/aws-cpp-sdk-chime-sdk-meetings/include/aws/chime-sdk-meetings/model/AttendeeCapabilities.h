/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/MediaCapabilities.h>
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
   * <p>The media capabilities of an attendee: audio, video, or content. </p> 
   * <p>You use the capabilities with a set of values that control what the
   * capabilities can do, such as <code>SendReceive</code> data. For more information
   * about those values, see .</p>  <p>When using capabilities, be aware of
   * these corner cases:</p> <ul> <li> <p>You can't set <code>content</code>
   * capabilities to <code>SendReceive</code> or <code>Receive</code> unless you also
   * set <code>video</code> capabilities to <code>SendReceive</code> or
   * <code>Receive</code>. If you don't set the <code>video</code> capability to
   * receive, the response will contain an HTTP 400 Bad Request status code. However,
   * you can set your <code>video</code> capability to receive and you set your
   * <code>content</code> capability to not receive.</p> </li> <li> <p>When you
   * change an <code>audio</code> capability from <code>None</code> or
   * <code>Receive</code> to <code>Send</code> or <code>SendReceive</code> , and if
   * the attendee left their microphone unmuted, audio will flow from the attendee to
   * the other meeting participants.</p> </li> <li> <p>When you change a
   * <code>video</code> or <code>content</code> capability from <code>None</code> or
   * <code>Receive</code> to <code>Send</code> or <code>SendReceive</code> , and if
   * the attendee turned on their video or content streams, remote attendess can
   * receive those streams, but only after media renegotiation between the client and
   * the Amazon Chime back-end server.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/AttendeeCapabilities">AWS
   * API Reference</a></p>
   */
  class AttendeeCapabilities
  {
  public:
    AWS_CHIMESDKMEETINGS_API AttendeeCapabilities();
    AWS_CHIMESDKMEETINGS_API AttendeeCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API AttendeeCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The audio capability assigned to an attendee.</p>
     */
    inline const MediaCapabilities& GetAudio() const{ return m_audio; }

    /**
     * <p>The audio capability assigned to an attendee.</p>
     */
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }

    /**
     * <p>The audio capability assigned to an attendee.</p>
     */
    inline void SetAudio(const MediaCapabilities& value) { m_audioHasBeenSet = true; m_audio = value; }

    /**
     * <p>The audio capability assigned to an attendee.</p>
     */
    inline void SetAudio(MediaCapabilities&& value) { m_audioHasBeenSet = true; m_audio = std::move(value); }

    /**
     * <p>The audio capability assigned to an attendee.</p>
     */
    inline AttendeeCapabilities& WithAudio(const MediaCapabilities& value) { SetAudio(value); return *this;}

    /**
     * <p>The audio capability assigned to an attendee.</p>
     */
    inline AttendeeCapabilities& WithAudio(MediaCapabilities&& value) { SetAudio(std::move(value)); return *this;}


    /**
     * <p>The video capability assigned to an attendee.</p>
     */
    inline const MediaCapabilities& GetVideo() const{ return m_video; }

    /**
     * <p>The video capability assigned to an attendee.</p>
     */
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }

    /**
     * <p>The video capability assigned to an attendee.</p>
     */
    inline void SetVideo(const MediaCapabilities& value) { m_videoHasBeenSet = true; m_video = value; }

    /**
     * <p>The video capability assigned to an attendee.</p>
     */
    inline void SetVideo(MediaCapabilities&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }

    /**
     * <p>The video capability assigned to an attendee.</p>
     */
    inline AttendeeCapabilities& WithVideo(const MediaCapabilities& value) { SetVideo(value); return *this;}

    /**
     * <p>The video capability assigned to an attendee.</p>
     */
    inline AttendeeCapabilities& WithVideo(MediaCapabilities&& value) { SetVideo(std::move(value)); return *this;}


    /**
     * <p>The content capability assigned to an attendee.</p>
     */
    inline const MediaCapabilities& GetContent() const{ return m_content; }

    /**
     * <p>The content capability assigned to an attendee.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content capability assigned to an attendee.</p>
     */
    inline void SetContent(const MediaCapabilities& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content capability assigned to an attendee.</p>
     */
    inline void SetContent(MediaCapabilities&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content capability assigned to an attendee.</p>
     */
    inline AttendeeCapabilities& WithContent(const MediaCapabilities& value) { SetContent(value); return *this;}

    /**
     * <p>The content capability assigned to an attendee.</p>
     */
    inline AttendeeCapabilities& WithContent(MediaCapabilities&& value) { SetContent(std::move(value)); return *this;}

  private:

    MediaCapabilities m_audio;
    bool m_audioHasBeenSet = false;

    MediaCapabilities m_video;
    bool m_videoHasBeenSet = false;

    MediaCapabilities m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
