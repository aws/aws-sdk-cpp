/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/StreamHealth.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ivs/model/StreamState.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Specifies a live video stream that has been ingested and
   * distributed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/Stream">AWS API
   * Reference</a></p>
   */
  class Stream
  {
  public:
    AWS_IVS_API Stream();
    AWS_IVS_API Stream(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Stream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline Stream& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline Stream& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline Stream& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The stream’s health.</p>
     */
    inline const StreamHealth& GetHealth() const{ return m_health; }

    /**
     * <p>The stream’s health.</p>
     */
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }

    /**
     * <p>The stream’s health.</p>
     */
    inline void SetHealth(const StreamHealth& value) { m_healthHasBeenSet = true; m_health = value; }

    /**
     * <p>The stream’s health.</p>
     */
    inline void SetHealth(StreamHealth&& value) { m_healthHasBeenSet = true; m_health = std::move(value); }

    /**
     * <p>The stream’s health.</p>
     */
    inline Stream& WithHealth(const StreamHealth& value) { SetHealth(value); return *this;}

    /**
     * <p>The stream’s health.</p>
     */
    inline Stream& WithHealth(StreamHealth&& value) { SetHealth(std::move(value)); return *this;}


    /**
     * <p>URL of the master playlist, required by the video player to play the HLS
     * stream.</p>
     */
    inline const Aws::String& GetPlaybackUrl() const{ return m_playbackUrl; }

    /**
     * <p>URL of the master playlist, required by the video player to play the HLS
     * stream.</p>
     */
    inline bool PlaybackUrlHasBeenSet() const { return m_playbackUrlHasBeenSet; }

    /**
     * <p>URL of the master playlist, required by the video player to play the HLS
     * stream.</p>
     */
    inline void SetPlaybackUrl(const Aws::String& value) { m_playbackUrlHasBeenSet = true; m_playbackUrl = value; }

    /**
     * <p>URL of the master playlist, required by the video player to play the HLS
     * stream.</p>
     */
    inline void SetPlaybackUrl(Aws::String&& value) { m_playbackUrlHasBeenSet = true; m_playbackUrl = std::move(value); }

    /**
     * <p>URL of the master playlist, required by the video player to play the HLS
     * stream.</p>
     */
    inline void SetPlaybackUrl(const char* value) { m_playbackUrlHasBeenSet = true; m_playbackUrl.assign(value); }

    /**
     * <p>URL of the master playlist, required by the video player to play the HLS
     * stream.</p>
     */
    inline Stream& WithPlaybackUrl(const Aws::String& value) { SetPlaybackUrl(value); return *this;}

    /**
     * <p>URL of the master playlist, required by the video player to play the HLS
     * stream.</p>
     */
    inline Stream& WithPlaybackUrl(Aws::String&& value) { SetPlaybackUrl(std::move(value)); return *this;}

    /**
     * <p>URL of the master playlist, required by the video player to play the HLS
     * stream.</p>
     */
    inline Stream& WithPlaybackUrl(const char* value) { SetPlaybackUrl(value); return *this;}


    /**
     * <p>Time of the stream’s start. This is an ISO 8601 timestamp; <i>note that this
     * is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Time of the stream’s start. This is an ISO 8601 timestamp; <i>note that this
     * is returned as a string</i>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Time of the stream’s start. This is an ISO 8601 timestamp; <i>note that this
     * is returned as a string</i>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Time of the stream’s start. This is an ISO 8601 timestamp; <i>note that this
     * is returned as a string</i>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Time of the stream’s start. This is an ISO 8601 timestamp; <i>note that this
     * is returned as a string</i>.</p>
     */
    inline Stream& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Time of the stream’s start. This is an ISO 8601 timestamp; <i>note that this
     * is returned as a string</i>.</p>
     */
    inline Stream& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The stream’s state.</p>
     */
    inline const StreamState& GetState() const{ return m_state; }

    /**
     * <p>The stream’s state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The stream’s state.</p>
     */
    inline void SetState(const StreamState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The stream’s state.</p>
     */
    inline void SetState(StreamState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The stream’s state.</p>
     */
    inline Stream& WithState(const StreamState& value) { SetState(value); return *this;}

    /**
     * <p>The stream’s state.</p>
     */
    inline Stream& WithState(StreamState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline Stream& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline Stream& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline Stream& WithStreamId(const char* value) { SetStreamId(value); return *this;}


    /**
     * <p>A count of concurrent views of the stream. Typically, a new view appears in
     * <code>viewerCount</code> within 15 seconds of when video playback starts and a
     * view is removed from <code>viewerCount</code> within 1 minute of when video
     * playback ends. A value of -1 indicates that the request timed out; in this case,
     * retry.</p>
     */
    inline long long GetViewerCount() const{ return m_viewerCount; }

    /**
     * <p>A count of concurrent views of the stream. Typically, a new view appears in
     * <code>viewerCount</code> within 15 seconds of when video playback starts and a
     * view is removed from <code>viewerCount</code> within 1 minute of when video
     * playback ends. A value of -1 indicates that the request timed out; in this case,
     * retry.</p>
     */
    inline bool ViewerCountHasBeenSet() const { return m_viewerCountHasBeenSet; }

    /**
     * <p>A count of concurrent views of the stream. Typically, a new view appears in
     * <code>viewerCount</code> within 15 seconds of when video playback starts and a
     * view is removed from <code>viewerCount</code> within 1 minute of when video
     * playback ends. A value of -1 indicates that the request timed out; in this case,
     * retry.</p>
     */
    inline void SetViewerCount(long long value) { m_viewerCountHasBeenSet = true; m_viewerCount = value; }

    /**
     * <p>A count of concurrent views of the stream. Typically, a new view appears in
     * <code>viewerCount</code> within 15 seconds of when video playback starts and a
     * view is removed from <code>viewerCount</code> within 1 minute of when video
     * playback ends. A value of -1 indicates that the request timed out; in this case,
     * retry.</p>
     */
    inline Stream& WithViewerCount(long long value) { SetViewerCount(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    StreamHealth m_health;
    bool m_healthHasBeenSet = false;

    Aws::String m_playbackUrl;
    bool m_playbackUrlHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    StreamState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    long long m_viewerCount;
    bool m_viewerCountHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
