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
    AWS_IVS_API Stream() = default;
    AWS_IVS_API Stream(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Stream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    Stream& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stream’s health.</p>
     */
    inline StreamHealth GetHealth() const { return m_health; }
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
    inline void SetHealth(StreamHealth value) { m_healthHasBeenSet = true; m_health = value; }
    inline Stream& WithHealth(StreamHealth value) { SetHealth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>URL of the master playlist, required by the video player to play the HLS
     * stream.</p>
     */
    inline const Aws::String& GetPlaybackUrl() const { return m_playbackUrl; }
    inline bool PlaybackUrlHasBeenSet() const { return m_playbackUrlHasBeenSet; }
    template<typename PlaybackUrlT = Aws::String>
    void SetPlaybackUrl(PlaybackUrlT&& value) { m_playbackUrlHasBeenSet = true; m_playbackUrl = std::forward<PlaybackUrlT>(value); }
    template<typename PlaybackUrlT = Aws::String>
    Stream& WithPlaybackUrl(PlaybackUrlT&& value) { SetPlaybackUrl(std::forward<PlaybackUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time of the stream’s start. This is an ISO 8601 timestamp; <i>note that this
     * is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Stream& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stream’s state. Do not rely on the <code>OFFLINE</code> state, as the API
     * may not return it; instead, a "NotBroadcasting" error will indicate that the
     * stream is not live.</p>
     */
    inline StreamState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(StreamState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Stream& WithState(StreamState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline const Aws::String& GetStreamId() const { return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    template<typename StreamIdT = Aws::String>
    void SetStreamId(StreamIdT&& value) { m_streamIdHasBeenSet = true; m_streamId = std::forward<StreamIdT>(value); }
    template<typename StreamIdT = Aws::String>
    Stream& WithStreamId(StreamIdT&& value) { SetStreamId(std::forward<StreamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A count of concurrent views of the stream. Typically, a new view appears in
     * <code>viewerCount</code> within 15 seconds of when video playback starts and a
     * view is removed from <code>viewerCount</code> within 1 minute of when video
     * playback ends. A value of -1 indicates that the request timed out; in this case,
     * retry.</p>
     */
    inline long long GetViewerCount() const { return m_viewerCount; }
    inline bool ViewerCountHasBeenSet() const { return m_viewerCountHasBeenSet; }
    inline void SetViewerCount(long long value) { m_viewerCountHasBeenSet = true; m_viewerCount = value; }
    inline Stream& WithViewerCount(long long value) { SetViewerCount(value); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    StreamHealth m_health{StreamHealth::NOT_SET};
    bool m_healthHasBeenSet = false;

    Aws::String m_playbackUrl;
    bool m_playbackUrlHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    StreamState m_state{StreamState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    long long m_viewerCount{0};
    bool m_viewerCountHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
