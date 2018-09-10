﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis-video-archived-media/model/PlaybackMode.h>
#include <aws/kinesis-video-archived-media/model/HLSFragmentSelector.h>
#include <aws/kinesis-video-archived-media/model/DiscontinuityMode.h>
#include <utility>

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Model
{

  /**
   */
  class AWS_KINESISVIDEOARCHIVEDMEDIA_API GetHLSStreamingSessionURLRequest : public KinesisVideoArchivedMediaRequest
  {
  public:
    GetHLSStreamingSessionURLRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHLSStreamingSessionURL"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the stream for which to retrieve the HLS master playlist URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream for which to retrieve the HLS master playlist URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream for which to retrieve the HLS master playlist URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream for which to retrieve the HLS master playlist URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream for which to retrieve the HLS master playlist URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline GetHLSStreamingSessionURLRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream for which to retrieve the HLS master playlist URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline GetHLSStreamingSessionURLRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream for which to retrieve the HLS master playlist URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline GetHLSStreamingSessionURLRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the HLS
     * master playlist URL.</p> <p>You must specify either the <code>StreamName</code>
     * or the <code>StreamARN</code>.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the HLS
     * master playlist URL.</p> <p>You must specify either the <code>StreamName</code>
     * or the <code>StreamARN</code>.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the HLS
     * master playlist URL.</p> <p>You must specify either the <code>StreamName</code>
     * or the <code>StreamARN</code>.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the HLS
     * master playlist URL.</p> <p>You must specify either the <code>StreamName</code>
     * or the <code>StreamARN</code>.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the HLS
     * master playlist URL.</p> <p>You must specify either the <code>StreamName</code>
     * or the <code>StreamARN</code>.</p>
     */
    inline GetHLSStreamingSessionURLRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the HLS
     * master playlist URL.</p> <p>You must specify either the <code>StreamName</code>
     * or the <code>StreamARN</code>.</p>
     */
    inline GetHLSStreamingSessionURLRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the HLS
     * master playlist URL.</p> <p>You must specify either the <code>StreamName</code>
     * or the <code>StreamARN</code>.</p>
     */
    inline GetHLSStreamingSessionURLRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>Whether to retrieve live or archived, on-demand data.</p> <p>Features of the
     * two types of session include the following:</p> <ul> <li> <p> <b>
     * <code>LIVE</code> </b>: For sessions of this type, the HLS media playlist is
     * continually updated with the latest fragments as they become available. We
     * recommend that the media player retrieve a new playlist on a one-second
     * interval. When this type of session is played in a media player, the user
     * interface typically displays a "live" notification, with no scrubber control for
     * choosing the position in the playback window to display.</p> <note> <p>In
     * <code>LIVE</code> mode, the newest available fragments are included in an HLS
     * media playlist, even if there is a gap between fragments (that is, if a fragment
     * is missing). A gap like this might cause a media player to halt or cause a jump
     * in playback. In this mode, fragments are not added to the HLS media playlist if
     * they are older than the newest fragment in the playlist. If the missing fragment
     * becomes available after a subsequent fragment is added to the playlist, the
     * older fragment is not added, and the gap is not filled.</p> </note> </li> <li>
     * <p> <b> <code>ON_DEMAND</code> </b>: For sessions of this type, the HLS media
     * playlist contains all the fragments for the session, up to the number that is
     * specified in <code>MaxMediaPlaylistFragmentResults</code>. The playlist must be
     * retrieved only once for each session. When this type of session is played in a
     * media player, the user interface typically displays a scrubber control for
     * choosing the position in the playback window to display.</p> </li> </ul> <p>In
     * both playback modes, if <code>FragmentSelectorType</code> is
     * <code>PRODUCER_TIMESTAMP</code>, and if there are multiple fragments with the
     * same start time stamp, the fragment that has the larger fragment number (that
     * is, the newer fragment) is included in the HLS media playlist. The other
     * fragments are not included. Fragments that have different time stamps but have
     * overlapping durations are still included in the HLS media playlist. This can
     * lead to unexpected behavior in the media player.</p> <p>The default is
     * <code>LIVE</code>.</p>
     */
    inline const PlaybackMode& GetPlaybackMode() const{ return m_playbackMode; }

    /**
     * <p>Whether to retrieve live or archived, on-demand data.</p> <p>Features of the
     * two types of session include the following:</p> <ul> <li> <p> <b>
     * <code>LIVE</code> </b>: For sessions of this type, the HLS media playlist is
     * continually updated with the latest fragments as they become available. We
     * recommend that the media player retrieve a new playlist on a one-second
     * interval. When this type of session is played in a media player, the user
     * interface typically displays a "live" notification, with no scrubber control for
     * choosing the position in the playback window to display.</p> <note> <p>In
     * <code>LIVE</code> mode, the newest available fragments are included in an HLS
     * media playlist, even if there is a gap between fragments (that is, if a fragment
     * is missing). A gap like this might cause a media player to halt or cause a jump
     * in playback. In this mode, fragments are not added to the HLS media playlist if
     * they are older than the newest fragment in the playlist. If the missing fragment
     * becomes available after a subsequent fragment is added to the playlist, the
     * older fragment is not added, and the gap is not filled.</p> </note> </li> <li>
     * <p> <b> <code>ON_DEMAND</code> </b>: For sessions of this type, the HLS media
     * playlist contains all the fragments for the session, up to the number that is
     * specified in <code>MaxMediaPlaylistFragmentResults</code>. The playlist must be
     * retrieved only once for each session. When this type of session is played in a
     * media player, the user interface typically displays a scrubber control for
     * choosing the position in the playback window to display.</p> </li> </ul> <p>In
     * both playback modes, if <code>FragmentSelectorType</code> is
     * <code>PRODUCER_TIMESTAMP</code>, and if there are multiple fragments with the
     * same start time stamp, the fragment that has the larger fragment number (that
     * is, the newer fragment) is included in the HLS media playlist. The other
     * fragments are not included. Fragments that have different time stamps but have
     * overlapping durations are still included in the HLS media playlist. This can
     * lead to unexpected behavior in the media player.</p> <p>The default is
     * <code>LIVE</code>.</p>
     */
    inline void SetPlaybackMode(const PlaybackMode& value) { m_playbackModeHasBeenSet = true; m_playbackMode = value; }

    /**
     * <p>Whether to retrieve live or archived, on-demand data.</p> <p>Features of the
     * two types of session include the following:</p> <ul> <li> <p> <b>
     * <code>LIVE</code> </b>: For sessions of this type, the HLS media playlist is
     * continually updated with the latest fragments as they become available. We
     * recommend that the media player retrieve a new playlist on a one-second
     * interval. When this type of session is played in a media player, the user
     * interface typically displays a "live" notification, with no scrubber control for
     * choosing the position in the playback window to display.</p> <note> <p>In
     * <code>LIVE</code> mode, the newest available fragments are included in an HLS
     * media playlist, even if there is a gap between fragments (that is, if a fragment
     * is missing). A gap like this might cause a media player to halt or cause a jump
     * in playback. In this mode, fragments are not added to the HLS media playlist if
     * they are older than the newest fragment in the playlist. If the missing fragment
     * becomes available after a subsequent fragment is added to the playlist, the
     * older fragment is not added, and the gap is not filled.</p> </note> </li> <li>
     * <p> <b> <code>ON_DEMAND</code> </b>: For sessions of this type, the HLS media
     * playlist contains all the fragments for the session, up to the number that is
     * specified in <code>MaxMediaPlaylistFragmentResults</code>. The playlist must be
     * retrieved only once for each session. When this type of session is played in a
     * media player, the user interface typically displays a scrubber control for
     * choosing the position in the playback window to display.</p> </li> </ul> <p>In
     * both playback modes, if <code>FragmentSelectorType</code> is
     * <code>PRODUCER_TIMESTAMP</code>, and if there are multiple fragments with the
     * same start time stamp, the fragment that has the larger fragment number (that
     * is, the newer fragment) is included in the HLS media playlist. The other
     * fragments are not included. Fragments that have different time stamps but have
     * overlapping durations are still included in the HLS media playlist. This can
     * lead to unexpected behavior in the media player.</p> <p>The default is
     * <code>LIVE</code>.</p>
     */
    inline void SetPlaybackMode(PlaybackMode&& value) { m_playbackModeHasBeenSet = true; m_playbackMode = std::move(value); }

    /**
     * <p>Whether to retrieve live or archived, on-demand data.</p> <p>Features of the
     * two types of session include the following:</p> <ul> <li> <p> <b>
     * <code>LIVE</code> </b>: For sessions of this type, the HLS media playlist is
     * continually updated with the latest fragments as they become available. We
     * recommend that the media player retrieve a new playlist on a one-second
     * interval. When this type of session is played in a media player, the user
     * interface typically displays a "live" notification, with no scrubber control for
     * choosing the position in the playback window to display.</p> <note> <p>In
     * <code>LIVE</code> mode, the newest available fragments are included in an HLS
     * media playlist, even if there is a gap between fragments (that is, if a fragment
     * is missing). A gap like this might cause a media player to halt or cause a jump
     * in playback. In this mode, fragments are not added to the HLS media playlist if
     * they are older than the newest fragment in the playlist. If the missing fragment
     * becomes available after a subsequent fragment is added to the playlist, the
     * older fragment is not added, and the gap is not filled.</p> </note> </li> <li>
     * <p> <b> <code>ON_DEMAND</code> </b>: For sessions of this type, the HLS media
     * playlist contains all the fragments for the session, up to the number that is
     * specified in <code>MaxMediaPlaylistFragmentResults</code>. The playlist must be
     * retrieved only once for each session. When this type of session is played in a
     * media player, the user interface typically displays a scrubber control for
     * choosing the position in the playback window to display.</p> </li> </ul> <p>In
     * both playback modes, if <code>FragmentSelectorType</code> is
     * <code>PRODUCER_TIMESTAMP</code>, and if there are multiple fragments with the
     * same start time stamp, the fragment that has the larger fragment number (that
     * is, the newer fragment) is included in the HLS media playlist. The other
     * fragments are not included. Fragments that have different time stamps but have
     * overlapping durations are still included in the HLS media playlist. This can
     * lead to unexpected behavior in the media player.</p> <p>The default is
     * <code>LIVE</code>.</p>
     */
    inline GetHLSStreamingSessionURLRequest& WithPlaybackMode(const PlaybackMode& value) { SetPlaybackMode(value); return *this;}

    /**
     * <p>Whether to retrieve live or archived, on-demand data.</p> <p>Features of the
     * two types of session include the following:</p> <ul> <li> <p> <b>
     * <code>LIVE</code> </b>: For sessions of this type, the HLS media playlist is
     * continually updated with the latest fragments as they become available. We
     * recommend that the media player retrieve a new playlist on a one-second
     * interval. When this type of session is played in a media player, the user
     * interface typically displays a "live" notification, with no scrubber control for
     * choosing the position in the playback window to display.</p> <note> <p>In
     * <code>LIVE</code> mode, the newest available fragments are included in an HLS
     * media playlist, even if there is a gap between fragments (that is, if a fragment
     * is missing). A gap like this might cause a media player to halt or cause a jump
     * in playback. In this mode, fragments are not added to the HLS media playlist if
     * they are older than the newest fragment in the playlist. If the missing fragment
     * becomes available after a subsequent fragment is added to the playlist, the
     * older fragment is not added, and the gap is not filled.</p> </note> </li> <li>
     * <p> <b> <code>ON_DEMAND</code> </b>: For sessions of this type, the HLS media
     * playlist contains all the fragments for the session, up to the number that is
     * specified in <code>MaxMediaPlaylistFragmentResults</code>. The playlist must be
     * retrieved only once for each session. When this type of session is played in a
     * media player, the user interface typically displays a scrubber control for
     * choosing the position in the playback window to display.</p> </li> </ul> <p>In
     * both playback modes, if <code>FragmentSelectorType</code> is
     * <code>PRODUCER_TIMESTAMP</code>, and if there are multiple fragments with the
     * same start time stamp, the fragment that has the larger fragment number (that
     * is, the newer fragment) is included in the HLS media playlist. The other
     * fragments are not included. Fragments that have different time stamps but have
     * overlapping durations are still included in the HLS media playlist. This can
     * lead to unexpected behavior in the media player.</p> <p>The default is
     * <code>LIVE</code>.</p>
     */
    inline GetHLSStreamingSessionURLRequest& WithPlaybackMode(PlaybackMode&& value) { SetPlaybackMode(std::move(value)); return *this;}


    /**
     * <p>The time range of the requested fragment, and the source of the time
     * stamps.</p> <p>This parameter is required if <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code>. This parameter is optional if <code>PlaybackMode</code>
     * is <code>LIVE</code>. If <code>PlaybackMode</code> is <code>LIVE</code>, the
     * <code>FragmentSelectorType</code> can be set, but the
     * <code>TimestampRange</code> should not be set. If <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code>, both <code>FragmentSelectorType</code> and
     * <code>TimestampRange</code> must be set.</p>
     */
    inline const HLSFragmentSelector& GetHLSFragmentSelector() const{ return m_hLSFragmentSelector; }

    /**
     * <p>The time range of the requested fragment, and the source of the time
     * stamps.</p> <p>This parameter is required if <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code>. This parameter is optional if <code>PlaybackMode</code>
     * is <code>LIVE</code>. If <code>PlaybackMode</code> is <code>LIVE</code>, the
     * <code>FragmentSelectorType</code> can be set, but the
     * <code>TimestampRange</code> should not be set. If <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code>, both <code>FragmentSelectorType</code> and
     * <code>TimestampRange</code> must be set.</p>
     */
    inline void SetHLSFragmentSelector(const HLSFragmentSelector& value) { m_hLSFragmentSelectorHasBeenSet = true; m_hLSFragmentSelector = value; }

    /**
     * <p>The time range of the requested fragment, and the source of the time
     * stamps.</p> <p>This parameter is required if <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code>. This parameter is optional if <code>PlaybackMode</code>
     * is <code>LIVE</code>. If <code>PlaybackMode</code> is <code>LIVE</code>, the
     * <code>FragmentSelectorType</code> can be set, but the
     * <code>TimestampRange</code> should not be set. If <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code>, both <code>FragmentSelectorType</code> and
     * <code>TimestampRange</code> must be set.</p>
     */
    inline void SetHLSFragmentSelector(HLSFragmentSelector&& value) { m_hLSFragmentSelectorHasBeenSet = true; m_hLSFragmentSelector = std::move(value); }

    /**
     * <p>The time range of the requested fragment, and the source of the time
     * stamps.</p> <p>This parameter is required if <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code>. This parameter is optional if <code>PlaybackMode</code>
     * is <code>LIVE</code>. If <code>PlaybackMode</code> is <code>LIVE</code>, the
     * <code>FragmentSelectorType</code> can be set, but the
     * <code>TimestampRange</code> should not be set. If <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code>, both <code>FragmentSelectorType</code> and
     * <code>TimestampRange</code> must be set.</p>
     */
    inline GetHLSStreamingSessionURLRequest& WithHLSFragmentSelector(const HLSFragmentSelector& value) { SetHLSFragmentSelector(value); return *this;}

    /**
     * <p>The time range of the requested fragment, and the source of the time
     * stamps.</p> <p>This parameter is required if <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code>. This parameter is optional if <code>PlaybackMode</code>
     * is <code>LIVE</code>. If <code>PlaybackMode</code> is <code>LIVE</code>, the
     * <code>FragmentSelectorType</code> can be set, but the
     * <code>TimestampRange</code> should not be set. If <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code>, both <code>FragmentSelectorType</code> and
     * <code>TimestampRange</code> must be set.</p>
     */
    inline GetHLSStreamingSessionURLRequest& WithHLSFragmentSelector(HLSFragmentSelector&& value) { SetHLSFragmentSelector(std::move(value)); return *this;}


    /**
     * <p>Specifies when flags marking discontinuities between fragments will be added
     * to the media playlists. The default is <code>ALWAYS</code> when
     * <a>HLSFragmentSelector</a> is <code>SERVER_TIMESTAMP</code>, and
     * <code>NEVER</code> when it is <code>PRODUCER_TIMESTAMP</code>.</p> <p>Media
     * players typically build a timeline of media content to play, based on the time
     * stamps of each fragment. This means that if there is any overlap between
     * fragments (as is typical if <a>HLSFragmentSelector</a> is
     * <code>SERVER_TIMESTAMP</code>), the media player timeline has small gaps between
     * fragments in some places, and overwrites frames in other places. When there are
     * discontinuity flags between fragments, the media player is expected to reset the
     * timeline, resulting in the fragment being played immediately after the previous
     * fragment. We recommend that you always have discontinuity flags between
     * fragments if the fragment time stamps are not accurate or if fragments might be
     * missing. You should not place discontinuity flags between fragments for the
     * player timeline to accurately map to the producer time stamps.</p>
     */
    inline const DiscontinuityMode& GetDiscontinuityMode() const{ return m_discontinuityMode; }

    /**
     * <p>Specifies when flags marking discontinuities between fragments will be added
     * to the media playlists. The default is <code>ALWAYS</code> when
     * <a>HLSFragmentSelector</a> is <code>SERVER_TIMESTAMP</code>, and
     * <code>NEVER</code> when it is <code>PRODUCER_TIMESTAMP</code>.</p> <p>Media
     * players typically build a timeline of media content to play, based on the time
     * stamps of each fragment. This means that if there is any overlap between
     * fragments (as is typical if <a>HLSFragmentSelector</a> is
     * <code>SERVER_TIMESTAMP</code>), the media player timeline has small gaps between
     * fragments in some places, and overwrites frames in other places. When there are
     * discontinuity flags between fragments, the media player is expected to reset the
     * timeline, resulting in the fragment being played immediately after the previous
     * fragment. We recommend that you always have discontinuity flags between
     * fragments if the fragment time stamps are not accurate or if fragments might be
     * missing. You should not place discontinuity flags between fragments for the
     * player timeline to accurately map to the producer time stamps.</p>
     */
    inline void SetDiscontinuityMode(const DiscontinuityMode& value) { m_discontinuityModeHasBeenSet = true; m_discontinuityMode = value; }

    /**
     * <p>Specifies when flags marking discontinuities between fragments will be added
     * to the media playlists. The default is <code>ALWAYS</code> when
     * <a>HLSFragmentSelector</a> is <code>SERVER_TIMESTAMP</code>, and
     * <code>NEVER</code> when it is <code>PRODUCER_TIMESTAMP</code>.</p> <p>Media
     * players typically build a timeline of media content to play, based on the time
     * stamps of each fragment. This means that if there is any overlap between
     * fragments (as is typical if <a>HLSFragmentSelector</a> is
     * <code>SERVER_TIMESTAMP</code>), the media player timeline has small gaps between
     * fragments in some places, and overwrites frames in other places. When there are
     * discontinuity flags between fragments, the media player is expected to reset the
     * timeline, resulting in the fragment being played immediately after the previous
     * fragment. We recommend that you always have discontinuity flags between
     * fragments if the fragment time stamps are not accurate or if fragments might be
     * missing. You should not place discontinuity flags between fragments for the
     * player timeline to accurately map to the producer time stamps.</p>
     */
    inline void SetDiscontinuityMode(DiscontinuityMode&& value) { m_discontinuityModeHasBeenSet = true; m_discontinuityMode = std::move(value); }

    /**
     * <p>Specifies when flags marking discontinuities between fragments will be added
     * to the media playlists. The default is <code>ALWAYS</code> when
     * <a>HLSFragmentSelector</a> is <code>SERVER_TIMESTAMP</code>, and
     * <code>NEVER</code> when it is <code>PRODUCER_TIMESTAMP</code>.</p> <p>Media
     * players typically build a timeline of media content to play, based on the time
     * stamps of each fragment. This means that if there is any overlap between
     * fragments (as is typical if <a>HLSFragmentSelector</a> is
     * <code>SERVER_TIMESTAMP</code>), the media player timeline has small gaps between
     * fragments in some places, and overwrites frames in other places. When there are
     * discontinuity flags between fragments, the media player is expected to reset the
     * timeline, resulting in the fragment being played immediately after the previous
     * fragment. We recommend that you always have discontinuity flags between
     * fragments if the fragment time stamps are not accurate or if fragments might be
     * missing. You should not place discontinuity flags between fragments for the
     * player timeline to accurately map to the producer time stamps.</p>
     */
    inline GetHLSStreamingSessionURLRequest& WithDiscontinuityMode(const DiscontinuityMode& value) { SetDiscontinuityMode(value); return *this;}

    /**
     * <p>Specifies when flags marking discontinuities between fragments will be added
     * to the media playlists. The default is <code>ALWAYS</code> when
     * <a>HLSFragmentSelector</a> is <code>SERVER_TIMESTAMP</code>, and
     * <code>NEVER</code> when it is <code>PRODUCER_TIMESTAMP</code>.</p> <p>Media
     * players typically build a timeline of media content to play, based on the time
     * stamps of each fragment. This means that if there is any overlap between
     * fragments (as is typical if <a>HLSFragmentSelector</a> is
     * <code>SERVER_TIMESTAMP</code>), the media player timeline has small gaps between
     * fragments in some places, and overwrites frames in other places. When there are
     * discontinuity flags between fragments, the media player is expected to reset the
     * timeline, resulting in the fragment being played immediately after the previous
     * fragment. We recommend that you always have discontinuity flags between
     * fragments if the fragment time stamps are not accurate or if fragments might be
     * missing. You should not place discontinuity flags between fragments for the
     * player timeline to accurately map to the producer time stamps.</p>
     */
    inline GetHLSStreamingSessionURLRequest& WithDiscontinuityMode(DiscontinuityMode&& value) { SetDiscontinuityMode(std::move(value)); return *this;}


    /**
     * <p>The time in seconds until the requested session expires. This value can be
     * between 300 (5 minutes) and 43200 (12 hours).</p> <p>When a session expires, no
     * new calls to <code>GetHLSMasterPlaylist</code>,
     * <code>GetHLSMediaPlaylist</code>, <code>GetMP4InitFragment</code>, or
     * <code>GetMP4MediaFragment</code> can be made for that session.</p> <p>The
     * default is 300 (5 minutes).</p>
     */
    inline int GetExpires() const{ return m_expires; }

    /**
     * <p>The time in seconds until the requested session expires. This value can be
     * between 300 (5 minutes) and 43200 (12 hours).</p> <p>When a session expires, no
     * new calls to <code>GetHLSMasterPlaylist</code>,
     * <code>GetHLSMediaPlaylist</code>, <code>GetMP4InitFragment</code>, or
     * <code>GetMP4MediaFragment</code> can be made for that session.</p> <p>The
     * default is 300 (5 minutes).</p>
     */
    inline void SetExpires(int value) { m_expiresHasBeenSet = true; m_expires = value; }

    /**
     * <p>The time in seconds until the requested session expires. This value can be
     * between 300 (5 minutes) and 43200 (12 hours).</p> <p>When a session expires, no
     * new calls to <code>GetHLSMasterPlaylist</code>,
     * <code>GetHLSMediaPlaylist</code>, <code>GetMP4InitFragment</code>, or
     * <code>GetMP4MediaFragment</code> can be made for that session.</p> <p>The
     * default is 300 (5 minutes).</p>
     */
    inline GetHLSStreamingSessionURLRequest& WithExpires(int value) { SetExpires(value); return *this;}


    /**
     * <p>The maximum number of fragments that are returned in the HLS media
     * playlists.</p> <p>When the <code>PlaybackMode</code> is <code>LIVE</code>, the
     * most recent fragments are returned up to this value. When the
     * <code>PlaybackMode</code> is <code>ON_DEMAND</code>, the oldest fragments are
     * returned, up to this maximum number.</p> <p>When there are a higher number of
     * fragments available in a live HLS media playlist, video players often buffer
     * content before starting playback. Increasing the buffer size increases the
     * playback latency, but it decreases the likelihood that rebuffering will occur
     * during playback. We recommend that a live HLS media playlist have a minimum of 3
     * fragments and a maximum of 10 fragments.</p> <p>The default is 5 fragments if
     * <code>PlaybackMode</code> is <code>LIVE</code>, and 1,000 if
     * <code>PlaybackMode</code> is <code>ON_DEMAND</code>. </p> <p>The maximum value
     * of 1,000 fragments corresponds to more than 16 minutes of video on streams with
     * 1-second fragments, and more than 2 1/2 hours of video on streams with 10-second
     * fragments.</p>
     */
    inline long long GetMaxMediaPlaylistFragmentResults() const{ return m_maxMediaPlaylistFragmentResults; }

    /**
     * <p>The maximum number of fragments that are returned in the HLS media
     * playlists.</p> <p>When the <code>PlaybackMode</code> is <code>LIVE</code>, the
     * most recent fragments are returned up to this value. When the
     * <code>PlaybackMode</code> is <code>ON_DEMAND</code>, the oldest fragments are
     * returned, up to this maximum number.</p> <p>When there are a higher number of
     * fragments available in a live HLS media playlist, video players often buffer
     * content before starting playback. Increasing the buffer size increases the
     * playback latency, but it decreases the likelihood that rebuffering will occur
     * during playback. We recommend that a live HLS media playlist have a minimum of 3
     * fragments and a maximum of 10 fragments.</p> <p>The default is 5 fragments if
     * <code>PlaybackMode</code> is <code>LIVE</code>, and 1,000 if
     * <code>PlaybackMode</code> is <code>ON_DEMAND</code>. </p> <p>The maximum value
     * of 1,000 fragments corresponds to more than 16 minutes of video on streams with
     * 1-second fragments, and more than 2 1/2 hours of video on streams with 10-second
     * fragments.</p>
     */
    inline void SetMaxMediaPlaylistFragmentResults(long long value) { m_maxMediaPlaylistFragmentResultsHasBeenSet = true; m_maxMediaPlaylistFragmentResults = value; }

    /**
     * <p>The maximum number of fragments that are returned in the HLS media
     * playlists.</p> <p>When the <code>PlaybackMode</code> is <code>LIVE</code>, the
     * most recent fragments are returned up to this value. When the
     * <code>PlaybackMode</code> is <code>ON_DEMAND</code>, the oldest fragments are
     * returned, up to this maximum number.</p> <p>When there are a higher number of
     * fragments available in a live HLS media playlist, video players often buffer
     * content before starting playback. Increasing the buffer size increases the
     * playback latency, but it decreases the likelihood that rebuffering will occur
     * during playback. We recommend that a live HLS media playlist have a minimum of 3
     * fragments and a maximum of 10 fragments.</p> <p>The default is 5 fragments if
     * <code>PlaybackMode</code> is <code>LIVE</code>, and 1,000 if
     * <code>PlaybackMode</code> is <code>ON_DEMAND</code>. </p> <p>The maximum value
     * of 1,000 fragments corresponds to more than 16 minutes of video on streams with
     * 1-second fragments, and more than 2 1/2 hours of video on streams with 10-second
     * fragments.</p>
     */
    inline GetHLSStreamingSessionURLRequest& WithMaxMediaPlaylistFragmentResults(long long value) { SetMaxMediaPlaylistFragmentResults(value); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet;

    PlaybackMode m_playbackMode;
    bool m_playbackModeHasBeenSet;

    HLSFragmentSelector m_hLSFragmentSelector;
    bool m_hLSFragmentSelectorHasBeenSet;

    DiscontinuityMode m_discontinuityMode;
    bool m_discontinuityModeHasBeenSet;

    int m_expires;
    bool m_expiresHasBeenSet;

    long long m_maxMediaPlaylistFragmentResults;
    bool m_maxMediaPlaylistFragmentResultsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
