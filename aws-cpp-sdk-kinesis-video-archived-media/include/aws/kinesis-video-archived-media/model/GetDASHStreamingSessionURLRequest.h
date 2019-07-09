/*
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
#include <aws/kinesis-video-archived-media/model/DASHPlaybackMode.h>
#include <aws/kinesis-video-archived-media/model/DASHDisplayFragmentTimestamp.h>
#include <aws/kinesis-video-archived-media/model/DASHDisplayFragmentNumber.h>
#include <aws/kinesis-video-archived-media/model/DASHFragmentSelector.h>
#include <utility>

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Model
{

  /**
   */
  class AWS_KINESISVIDEOARCHIVEDMEDIA_API GetDASHStreamingSessionURLRequest : public KinesisVideoArchivedMediaRequest
  {
  public:
    GetDASHStreamingSessionURLRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDASHStreamingSessionURL"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the stream for which to retrieve the MPEG-DASH manifest URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream for which to retrieve the MPEG-DASH manifest URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream for which to retrieve the MPEG-DASH manifest URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream for which to retrieve the MPEG-DASH manifest URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream for which to retrieve the MPEG-DASH manifest URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream for which to retrieve the MPEG-DASH manifest URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline GetDASHStreamingSessionURLRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream for which to retrieve the MPEG-DASH manifest URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline GetDASHStreamingSessionURLRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream for which to retrieve the MPEG-DASH manifest URL.</p>
     * <p>You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline GetDASHStreamingSessionURLRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the
     * MPEG-DASH manifest URL.</p> <p>You must specify either the
     * <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the
     * MPEG-DASH manifest URL.</p> <p>You must specify either the
     * <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the
     * MPEG-DASH manifest URL.</p> <p>You must specify either the
     * <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the
     * MPEG-DASH manifest URL.</p> <p>You must specify either the
     * <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the
     * MPEG-DASH manifest URL.</p> <p>You must specify either the
     * <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the
     * MPEG-DASH manifest URL.</p> <p>You must specify either the
     * <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline GetDASHStreamingSessionURLRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the
     * MPEG-DASH manifest URL.</p> <p>You must specify either the
     * <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline GetDASHStreamingSessionURLRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream for which to retrieve the
     * MPEG-DASH manifest URL.</p> <p>You must specify either the
     * <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline GetDASHStreamingSessionURLRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>Whether to retrieve live, live replay, or archived, on-demand data.</p>
     * <p>Features of the three types of sessions include the following:</p> <ul> <li>
     * <p> <b> <code>LIVE</code> </b>: For sessions of this type, the MPEG-DASH
     * manifest is continually updated with the latest fragments as they become
     * available. We recommend that the media player retrieve a new manifest on a
     * one-second interval. When this type of session is played in a media player, the
     * user interface typically displays a "live" notification, with no scrubber
     * control for choosing the position in the playback window to display.</p> <note>
     * <p>In <code>LIVE</code> mode, the newest available fragments are included in an
     * MPEG-DASH manifest, even if there is a gap between fragments (that is, if a
     * fragment is missing). A gap like this might cause a media player to halt or
     * cause a jump in playback. In this mode, fragments are not added to the MPEG-DASH
     * manifest if they are older than the newest fragment in the playlist. If the
     * missing fragment becomes available after a subsequent fragment is added to the
     * manifest, the older fragment is not added, and the gap is not filled.</p>
     * </note> </li> <li> <p> <b> <code>LIVE_REPLAY</code> </b>: For sessions of this
     * type, the MPEG-DASH manifest is updated similarly to how it is updated for
     * <code>LIVE</code> mode except that it starts by including fragments from a given
     * start time. Instead of fragments being added as they are ingested, fragments are
     * added as the duration of the next fragment elapses. For example, if the
     * fragments in the session are two seconds long, then a new fragment is added to
     * the manifest every two seconds. This mode is useful to be able to start playback
     * from when an event is detected and continue live streaming media that has not
     * yet been ingested as of the time of the session creation. This mode is also
     * useful to stream previously archived media without being limited by the 1,000
     * fragment limit in the <code>ON_DEMAND</code> mode. </p> </li> <li> <p> <b>
     * <code>ON_DEMAND</code> </b>: For sessions of this type, the MPEG-DASH manifest
     * contains all the fragments for the session, up to the number that is specified
     * in <code>MaxMediaPlaylistFragmentResults</code>. The manifest must be retrieved
     * only once for each session. When this type of session is played in a media
     * player, the user interface typically displays a scrubber control for choosing
     * the position in the playback window to display.</p> </li> </ul> <p>In all
     * playback modes, if <code>FragmentSelectorType</code> is
     * <code>PRODUCER_TIMESTAMP</code>, and if there are multiple fragments with the
     * same start timestamp, the fragment that has the larger fragment number (that is,
     * the newer fragment) is included in the MPEG-DASH manifest. The other fragments
     * are not included. Fragments that have different timestamps but have overlapping
     * durations are still included in the MPEG-DASH manifest. This can lead to
     * unexpected behavior in the media player.</p> <p>The default is
     * <code>LIVE</code>.</p>
     */
    inline const DASHPlaybackMode& GetPlaybackMode() const{ return m_playbackMode; }

    /**
     * <p>Whether to retrieve live, live replay, or archived, on-demand data.</p>
     * <p>Features of the three types of sessions include the following:</p> <ul> <li>
     * <p> <b> <code>LIVE</code> </b>: For sessions of this type, the MPEG-DASH
     * manifest is continually updated with the latest fragments as they become
     * available. We recommend that the media player retrieve a new manifest on a
     * one-second interval. When this type of session is played in a media player, the
     * user interface typically displays a "live" notification, with no scrubber
     * control for choosing the position in the playback window to display.</p> <note>
     * <p>In <code>LIVE</code> mode, the newest available fragments are included in an
     * MPEG-DASH manifest, even if there is a gap between fragments (that is, if a
     * fragment is missing). A gap like this might cause a media player to halt or
     * cause a jump in playback. In this mode, fragments are not added to the MPEG-DASH
     * manifest if they are older than the newest fragment in the playlist. If the
     * missing fragment becomes available after a subsequent fragment is added to the
     * manifest, the older fragment is not added, and the gap is not filled.</p>
     * </note> </li> <li> <p> <b> <code>LIVE_REPLAY</code> </b>: For sessions of this
     * type, the MPEG-DASH manifest is updated similarly to how it is updated for
     * <code>LIVE</code> mode except that it starts by including fragments from a given
     * start time. Instead of fragments being added as they are ingested, fragments are
     * added as the duration of the next fragment elapses. For example, if the
     * fragments in the session are two seconds long, then a new fragment is added to
     * the manifest every two seconds. This mode is useful to be able to start playback
     * from when an event is detected and continue live streaming media that has not
     * yet been ingested as of the time of the session creation. This mode is also
     * useful to stream previously archived media without being limited by the 1,000
     * fragment limit in the <code>ON_DEMAND</code> mode. </p> </li> <li> <p> <b>
     * <code>ON_DEMAND</code> </b>: For sessions of this type, the MPEG-DASH manifest
     * contains all the fragments for the session, up to the number that is specified
     * in <code>MaxMediaPlaylistFragmentResults</code>. The manifest must be retrieved
     * only once for each session. When this type of session is played in a media
     * player, the user interface typically displays a scrubber control for choosing
     * the position in the playback window to display.</p> </li> </ul> <p>In all
     * playback modes, if <code>FragmentSelectorType</code> is
     * <code>PRODUCER_TIMESTAMP</code>, and if there are multiple fragments with the
     * same start timestamp, the fragment that has the larger fragment number (that is,
     * the newer fragment) is included in the MPEG-DASH manifest. The other fragments
     * are not included. Fragments that have different timestamps but have overlapping
     * durations are still included in the MPEG-DASH manifest. This can lead to
     * unexpected behavior in the media player.</p> <p>The default is
     * <code>LIVE</code>.</p>
     */
    inline bool PlaybackModeHasBeenSet() const { return m_playbackModeHasBeenSet; }

    /**
     * <p>Whether to retrieve live, live replay, or archived, on-demand data.</p>
     * <p>Features of the three types of sessions include the following:</p> <ul> <li>
     * <p> <b> <code>LIVE</code> </b>: For sessions of this type, the MPEG-DASH
     * manifest is continually updated with the latest fragments as they become
     * available. We recommend that the media player retrieve a new manifest on a
     * one-second interval. When this type of session is played in a media player, the
     * user interface typically displays a "live" notification, with no scrubber
     * control for choosing the position in the playback window to display.</p> <note>
     * <p>In <code>LIVE</code> mode, the newest available fragments are included in an
     * MPEG-DASH manifest, even if there is a gap between fragments (that is, if a
     * fragment is missing). A gap like this might cause a media player to halt or
     * cause a jump in playback. In this mode, fragments are not added to the MPEG-DASH
     * manifest if they are older than the newest fragment in the playlist. If the
     * missing fragment becomes available after a subsequent fragment is added to the
     * manifest, the older fragment is not added, and the gap is not filled.</p>
     * </note> </li> <li> <p> <b> <code>LIVE_REPLAY</code> </b>: For sessions of this
     * type, the MPEG-DASH manifest is updated similarly to how it is updated for
     * <code>LIVE</code> mode except that it starts by including fragments from a given
     * start time. Instead of fragments being added as they are ingested, fragments are
     * added as the duration of the next fragment elapses. For example, if the
     * fragments in the session are two seconds long, then a new fragment is added to
     * the manifest every two seconds. This mode is useful to be able to start playback
     * from when an event is detected and continue live streaming media that has not
     * yet been ingested as of the time of the session creation. This mode is also
     * useful to stream previously archived media without being limited by the 1,000
     * fragment limit in the <code>ON_DEMAND</code> mode. </p> </li> <li> <p> <b>
     * <code>ON_DEMAND</code> </b>: For sessions of this type, the MPEG-DASH manifest
     * contains all the fragments for the session, up to the number that is specified
     * in <code>MaxMediaPlaylistFragmentResults</code>. The manifest must be retrieved
     * only once for each session. When this type of session is played in a media
     * player, the user interface typically displays a scrubber control for choosing
     * the position in the playback window to display.</p> </li> </ul> <p>In all
     * playback modes, if <code>FragmentSelectorType</code> is
     * <code>PRODUCER_TIMESTAMP</code>, and if there are multiple fragments with the
     * same start timestamp, the fragment that has the larger fragment number (that is,
     * the newer fragment) is included in the MPEG-DASH manifest. The other fragments
     * are not included. Fragments that have different timestamps but have overlapping
     * durations are still included in the MPEG-DASH manifest. This can lead to
     * unexpected behavior in the media player.</p> <p>The default is
     * <code>LIVE</code>.</p>
     */
    inline void SetPlaybackMode(const DASHPlaybackMode& value) { m_playbackModeHasBeenSet = true; m_playbackMode = value; }

    /**
     * <p>Whether to retrieve live, live replay, or archived, on-demand data.</p>
     * <p>Features of the three types of sessions include the following:</p> <ul> <li>
     * <p> <b> <code>LIVE</code> </b>: For sessions of this type, the MPEG-DASH
     * manifest is continually updated with the latest fragments as they become
     * available. We recommend that the media player retrieve a new manifest on a
     * one-second interval. When this type of session is played in a media player, the
     * user interface typically displays a "live" notification, with no scrubber
     * control for choosing the position in the playback window to display.</p> <note>
     * <p>In <code>LIVE</code> mode, the newest available fragments are included in an
     * MPEG-DASH manifest, even if there is a gap between fragments (that is, if a
     * fragment is missing). A gap like this might cause a media player to halt or
     * cause a jump in playback. In this mode, fragments are not added to the MPEG-DASH
     * manifest if they are older than the newest fragment in the playlist. If the
     * missing fragment becomes available after a subsequent fragment is added to the
     * manifest, the older fragment is not added, and the gap is not filled.</p>
     * </note> </li> <li> <p> <b> <code>LIVE_REPLAY</code> </b>: For sessions of this
     * type, the MPEG-DASH manifest is updated similarly to how it is updated for
     * <code>LIVE</code> mode except that it starts by including fragments from a given
     * start time. Instead of fragments being added as they are ingested, fragments are
     * added as the duration of the next fragment elapses. For example, if the
     * fragments in the session are two seconds long, then a new fragment is added to
     * the manifest every two seconds. This mode is useful to be able to start playback
     * from when an event is detected and continue live streaming media that has not
     * yet been ingested as of the time of the session creation. This mode is also
     * useful to stream previously archived media without being limited by the 1,000
     * fragment limit in the <code>ON_DEMAND</code> mode. </p> </li> <li> <p> <b>
     * <code>ON_DEMAND</code> </b>: For sessions of this type, the MPEG-DASH manifest
     * contains all the fragments for the session, up to the number that is specified
     * in <code>MaxMediaPlaylistFragmentResults</code>. The manifest must be retrieved
     * only once for each session. When this type of session is played in a media
     * player, the user interface typically displays a scrubber control for choosing
     * the position in the playback window to display.</p> </li> </ul> <p>In all
     * playback modes, if <code>FragmentSelectorType</code> is
     * <code>PRODUCER_TIMESTAMP</code>, and if there are multiple fragments with the
     * same start timestamp, the fragment that has the larger fragment number (that is,
     * the newer fragment) is included in the MPEG-DASH manifest. The other fragments
     * are not included. Fragments that have different timestamps but have overlapping
     * durations are still included in the MPEG-DASH manifest. This can lead to
     * unexpected behavior in the media player.</p> <p>The default is
     * <code>LIVE</code>.</p>
     */
    inline void SetPlaybackMode(DASHPlaybackMode&& value) { m_playbackModeHasBeenSet = true; m_playbackMode = std::move(value); }

    /**
     * <p>Whether to retrieve live, live replay, or archived, on-demand data.</p>
     * <p>Features of the three types of sessions include the following:</p> <ul> <li>
     * <p> <b> <code>LIVE</code> </b>: For sessions of this type, the MPEG-DASH
     * manifest is continually updated with the latest fragments as they become
     * available. We recommend that the media player retrieve a new manifest on a
     * one-second interval. When this type of session is played in a media player, the
     * user interface typically displays a "live" notification, with no scrubber
     * control for choosing the position in the playback window to display.</p> <note>
     * <p>In <code>LIVE</code> mode, the newest available fragments are included in an
     * MPEG-DASH manifest, even if there is a gap between fragments (that is, if a
     * fragment is missing). A gap like this might cause a media player to halt or
     * cause a jump in playback. In this mode, fragments are not added to the MPEG-DASH
     * manifest if they are older than the newest fragment in the playlist. If the
     * missing fragment becomes available after a subsequent fragment is added to the
     * manifest, the older fragment is not added, and the gap is not filled.</p>
     * </note> </li> <li> <p> <b> <code>LIVE_REPLAY</code> </b>: For sessions of this
     * type, the MPEG-DASH manifest is updated similarly to how it is updated for
     * <code>LIVE</code> mode except that it starts by including fragments from a given
     * start time. Instead of fragments being added as they are ingested, fragments are
     * added as the duration of the next fragment elapses. For example, if the
     * fragments in the session are two seconds long, then a new fragment is added to
     * the manifest every two seconds. This mode is useful to be able to start playback
     * from when an event is detected and continue live streaming media that has not
     * yet been ingested as of the time of the session creation. This mode is also
     * useful to stream previously archived media without being limited by the 1,000
     * fragment limit in the <code>ON_DEMAND</code> mode. </p> </li> <li> <p> <b>
     * <code>ON_DEMAND</code> </b>: For sessions of this type, the MPEG-DASH manifest
     * contains all the fragments for the session, up to the number that is specified
     * in <code>MaxMediaPlaylistFragmentResults</code>. The manifest must be retrieved
     * only once for each session. When this type of session is played in a media
     * player, the user interface typically displays a scrubber control for choosing
     * the position in the playback window to display.</p> </li> </ul> <p>In all
     * playback modes, if <code>FragmentSelectorType</code> is
     * <code>PRODUCER_TIMESTAMP</code>, and if there are multiple fragments with the
     * same start timestamp, the fragment that has the larger fragment number (that is,
     * the newer fragment) is included in the MPEG-DASH manifest. The other fragments
     * are not included. Fragments that have different timestamps but have overlapping
     * durations are still included in the MPEG-DASH manifest. This can lead to
     * unexpected behavior in the media player.</p> <p>The default is
     * <code>LIVE</code>.</p>
     */
    inline GetDASHStreamingSessionURLRequest& WithPlaybackMode(const DASHPlaybackMode& value) { SetPlaybackMode(value); return *this;}

    /**
     * <p>Whether to retrieve live, live replay, or archived, on-demand data.</p>
     * <p>Features of the three types of sessions include the following:</p> <ul> <li>
     * <p> <b> <code>LIVE</code> </b>: For sessions of this type, the MPEG-DASH
     * manifest is continually updated with the latest fragments as they become
     * available. We recommend that the media player retrieve a new manifest on a
     * one-second interval. When this type of session is played in a media player, the
     * user interface typically displays a "live" notification, with no scrubber
     * control for choosing the position in the playback window to display.</p> <note>
     * <p>In <code>LIVE</code> mode, the newest available fragments are included in an
     * MPEG-DASH manifest, even if there is a gap between fragments (that is, if a
     * fragment is missing). A gap like this might cause a media player to halt or
     * cause a jump in playback. In this mode, fragments are not added to the MPEG-DASH
     * manifest if they are older than the newest fragment in the playlist. If the
     * missing fragment becomes available after a subsequent fragment is added to the
     * manifest, the older fragment is not added, and the gap is not filled.</p>
     * </note> </li> <li> <p> <b> <code>LIVE_REPLAY</code> </b>: For sessions of this
     * type, the MPEG-DASH manifest is updated similarly to how it is updated for
     * <code>LIVE</code> mode except that it starts by including fragments from a given
     * start time. Instead of fragments being added as they are ingested, fragments are
     * added as the duration of the next fragment elapses. For example, if the
     * fragments in the session are two seconds long, then a new fragment is added to
     * the manifest every two seconds. This mode is useful to be able to start playback
     * from when an event is detected and continue live streaming media that has not
     * yet been ingested as of the time of the session creation. This mode is also
     * useful to stream previously archived media without being limited by the 1,000
     * fragment limit in the <code>ON_DEMAND</code> mode. </p> </li> <li> <p> <b>
     * <code>ON_DEMAND</code> </b>: For sessions of this type, the MPEG-DASH manifest
     * contains all the fragments for the session, up to the number that is specified
     * in <code>MaxMediaPlaylistFragmentResults</code>. The manifest must be retrieved
     * only once for each session. When this type of session is played in a media
     * player, the user interface typically displays a scrubber control for choosing
     * the position in the playback window to display.</p> </li> </ul> <p>In all
     * playback modes, if <code>FragmentSelectorType</code> is
     * <code>PRODUCER_TIMESTAMP</code>, and if there are multiple fragments with the
     * same start timestamp, the fragment that has the larger fragment number (that is,
     * the newer fragment) is included in the MPEG-DASH manifest. The other fragments
     * are not included. Fragments that have different timestamps but have overlapping
     * durations are still included in the MPEG-DASH manifest. This can lead to
     * unexpected behavior in the media player.</p> <p>The default is
     * <code>LIVE</code>.</p>
     */
    inline GetDASHStreamingSessionURLRequest& WithPlaybackMode(DASHPlaybackMode&& value) { SetPlaybackMode(std::move(value)); return *this;}


    /**
     * <p>Per the MPEG-DASH specification, the wall-clock time of fragments in the
     * manifest file can be derived using attributes in the manifest itself. However,
     * typically, MPEG-DASH compatible media players do not properly handle gaps in the
     * media timeline. Kinesis Video Streams adjusts the media timeline in the manifest
     * file to enable playback of media with discontinuities. Therefore, the wall-clock
     * time derived from the manifest file may be inaccurate. If
     * DisplayFragmentTimestamp is set to <code>ALWAYS</code>, the accurate fragment
     * timestamp is added to each S element in the manifest file with the attribute
     * name “kvs:ts”. A custom MPEG-DASH media player is necessary to leverage this
     * custom attribute.</p> <p>The default value is <code>NEVER</code>. When
     * <a>DASHFragmentSelector</a> is <code>SERVER_TIMESTAMP</code>, the timestamps
     * will be the server start timestamps. Similarly, when <a>DASHFragmentSelector</a>
     * is <code>PRODUCER_TIMESTAMP</code>, the timestamps will be the producer start
     * timestamps. </p>
     */
    inline const DASHDisplayFragmentTimestamp& GetDisplayFragmentTimestamp() const{ return m_displayFragmentTimestamp; }

    /**
     * <p>Per the MPEG-DASH specification, the wall-clock time of fragments in the
     * manifest file can be derived using attributes in the manifest itself. However,
     * typically, MPEG-DASH compatible media players do not properly handle gaps in the
     * media timeline. Kinesis Video Streams adjusts the media timeline in the manifest
     * file to enable playback of media with discontinuities. Therefore, the wall-clock
     * time derived from the manifest file may be inaccurate. If
     * DisplayFragmentTimestamp is set to <code>ALWAYS</code>, the accurate fragment
     * timestamp is added to each S element in the manifest file with the attribute
     * name “kvs:ts”. A custom MPEG-DASH media player is necessary to leverage this
     * custom attribute.</p> <p>The default value is <code>NEVER</code>. When
     * <a>DASHFragmentSelector</a> is <code>SERVER_TIMESTAMP</code>, the timestamps
     * will be the server start timestamps. Similarly, when <a>DASHFragmentSelector</a>
     * is <code>PRODUCER_TIMESTAMP</code>, the timestamps will be the producer start
     * timestamps. </p>
     */
    inline bool DisplayFragmentTimestampHasBeenSet() const { return m_displayFragmentTimestampHasBeenSet; }

    /**
     * <p>Per the MPEG-DASH specification, the wall-clock time of fragments in the
     * manifest file can be derived using attributes in the manifest itself. However,
     * typically, MPEG-DASH compatible media players do not properly handle gaps in the
     * media timeline. Kinesis Video Streams adjusts the media timeline in the manifest
     * file to enable playback of media with discontinuities. Therefore, the wall-clock
     * time derived from the manifest file may be inaccurate. If
     * DisplayFragmentTimestamp is set to <code>ALWAYS</code>, the accurate fragment
     * timestamp is added to each S element in the manifest file with the attribute
     * name “kvs:ts”. A custom MPEG-DASH media player is necessary to leverage this
     * custom attribute.</p> <p>The default value is <code>NEVER</code>. When
     * <a>DASHFragmentSelector</a> is <code>SERVER_TIMESTAMP</code>, the timestamps
     * will be the server start timestamps. Similarly, when <a>DASHFragmentSelector</a>
     * is <code>PRODUCER_TIMESTAMP</code>, the timestamps will be the producer start
     * timestamps. </p>
     */
    inline void SetDisplayFragmentTimestamp(const DASHDisplayFragmentTimestamp& value) { m_displayFragmentTimestampHasBeenSet = true; m_displayFragmentTimestamp = value; }

    /**
     * <p>Per the MPEG-DASH specification, the wall-clock time of fragments in the
     * manifest file can be derived using attributes in the manifest itself. However,
     * typically, MPEG-DASH compatible media players do not properly handle gaps in the
     * media timeline. Kinesis Video Streams adjusts the media timeline in the manifest
     * file to enable playback of media with discontinuities. Therefore, the wall-clock
     * time derived from the manifest file may be inaccurate. If
     * DisplayFragmentTimestamp is set to <code>ALWAYS</code>, the accurate fragment
     * timestamp is added to each S element in the manifest file with the attribute
     * name “kvs:ts”. A custom MPEG-DASH media player is necessary to leverage this
     * custom attribute.</p> <p>The default value is <code>NEVER</code>. When
     * <a>DASHFragmentSelector</a> is <code>SERVER_TIMESTAMP</code>, the timestamps
     * will be the server start timestamps. Similarly, when <a>DASHFragmentSelector</a>
     * is <code>PRODUCER_TIMESTAMP</code>, the timestamps will be the producer start
     * timestamps. </p>
     */
    inline void SetDisplayFragmentTimestamp(DASHDisplayFragmentTimestamp&& value) { m_displayFragmentTimestampHasBeenSet = true; m_displayFragmentTimestamp = std::move(value); }

    /**
     * <p>Per the MPEG-DASH specification, the wall-clock time of fragments in the
     * manifest file can be derived using attributes in the manifest itself. However,
     * typically, MPEG-DASH compatible media players do not properly handle gaps in the
     * media timeline. Kinesis Video Streams adjusts the media timeline in the manifest
     * file to enable playback of media with discontinuities. Therefore, the wall-clock
     * time derived from the manifest file may be inaccurate. If
     * DisplayFragmentTimestamp is set to <code>ALWAYS</code>, the accurate fragment
     * timestamp is added to each S element in the manifest file with the attribute
     * name “kvs:ts”. A custom MPEG-DASH media player is necessary to leverage this
     * custom attribute.</p> <p>The default value is <code>NEVER</code>. When
     * <a>DASHFragmentSelector</a> is <code>SERVER_TIMESTAMP</code>, the timestamps
     * will be the server start timestamps. Similarly, when <a>DASHFragmentSelector</a>
     * is <code>PRODUCER_TIMESTAMP</code>, the timestamps will be the producer start
     * timestamps. </p>
     */
    inline GetDASHStreamingSessionURLRequest& WithDisplayFragmentTimestamp(const DASHDisplayFragmentTimestamp& value) { SetDisplayFragmentTimestamp(value); return *this;}

    /**
     * <p>Per the MPEG-DASH specification, the wall-clock time of fragments in the
     * manifest file can be derived using attributes in the manifest itself. However,
     * typically, MPEG-DASH compatible media players do not properly handle gaps in the
     * media timeline. Kinesis Video Streams adjusts the media timeline in the manifest
     * file to enable playback of media with discontinuities. Therefore, the wall-clock
     * time derived from the manifest file may be inaccurate. If
     * DisplayFragmentTimestamp is set to <code>ALWAYS</code>, the accurate fragment
     * timestamp is added to each S element in the manifest file with the attribute
     * name “kvs:ts”. A custom MPEG-DASH media player is necessary to leverage this
     * custom attribute.</p> <p>The default value is <code>NEVER</code>. When
     * <a>DASHFragmentSelector</a> is <code>SERVER_TIMESTAMP</code>, the timestamps
     * will be the server start timestamps. Similarly, when <a>DASHFragmentSelector</a>
     * is <code>PRODUCER_TIMESTAMP</code>, the timestamps will be the producer start
     * timestamps. </p>
     */
    inline GetDASHStreamingSessionURLRequest& WithDisplayFragmentTimestamp(DASHDisplayFragmentTimestamp&& value) { SetDisplayFragmentTimestamp(std::move(value)); return *this;}


    /**
     * <p>Fragments are identified in the manifest file based on their sequence number
     * in the session. If DisplayFragmentNumber is set to <code>ALWAYS</code>, the
     * Kinesis Video Streams fragment number is added to each S element in the manifest
     * file with the attribute name “kvs:fn”. These fragment numbers can be used for
     * logging or for use with other APIs (e.g. <code>GetMedia</code> and
     * <code>GetMediaForFragmentList</code>). A custom MPEG-DASH media player is
     * necessary to leverage these this custom attribute.</p> <p>The default value is
     * <code>NEVER</code>.</p>
     */
    inline const DASHDisplayFragmentNumber& GetDisplayFragmentNumber() const{ return m_displayFragmentNumber; }

    /**
     * <p>Fragments are identified in the manifest file based on their sequence number
     * in the session. If DisplayFragmentNumber is set to <code>ALWAYS</code>, the
     * Kinesis Video Streams fragment number is added to each S element in the manifest
     * file with the attribute name “kvs:fn”. These fragment numbers can be used for
     * logging or for use with other APIs (e.g. <code>GetMedia</code> and
     * <code>GetMediaForFragmentList</code>). A custom MPEG-DASH media player is
     * necessary to leverage these this custom attribute.</p> <p>The default value is
     * <code>NEVER</code>.</p>
     */
    inline bool DisplayFragmentNumberHasBeenSet() const { return m_displayFragmentNumberHasBeenSet; }

    /**
     * <p>Fragments are identified in the manifest file based on their sequence number
     * in the session. If DisplayFragmentNumber is set to <code>ALWAYS</code>, the
     * Kinesis Video Streams fragment number is added to each S element in the manifest
     * file with the attribute name “kvs:fn”. These fragment numbers can be used for
     * logging or for use with other APIs (e.g. <code>GetMedia</code> and
     * <code>GetMediaForFragmentList</code>). A custom MPEG-DASH media player is
     * necessary to leverage these this custom attribute.</p> <p>The default value is
     * <code>NEVER</code>.</p>
     */
    inline void SetDisplayFragmentNumber(const DASHDisplayFragmentNumber& value) { m_displayFragmentNumberHasBeenSet = true; m_displayFragmentNumber = value; }

    /**
     * <p>Fragments are identified in the manifest file based on their sequence number
     * in the session. If DisplayFragmentNumber is set to <code>ALWAYS</code>, the
     * Kinesis Video Streams fragment number is added to each S element in the manifest
     * file with the attribute name “kvs:fn”. These fragment numbers can be used for
     * logging or for use with other APIs (e.g. <code>GetMedia</code> and
     * <code>GetMediaForFragmentList</code>). A custom MPEG-DASH media player is
     * necessary to leverage these this custom attribute.</p> <p>The default value is
     * <code>NEVER</code>.</p>
     */
    inline void SetDisplayFragmentNumber(DASHDisplayFragmentNumber&& value) { m_displayFragmentNumberHasBeenSet = true; m_displayFragmentNumber = std::move(value); }

    /**
     * <p>Fragments are identified in the manifest file based on their sequence number
     * in the session. If DisplayFragmentNumber is set to <code>ALWAYS</code>, the
     * Kinesis Video Streams fragment number is added to each S element in the manifest
     * file with the attribute name “kvs:fn”. These fragment numbers can be used for
     * logging or for use with other APIs (e.g. <code>GetMedia</code> and
     * <code>GetMediaForFragmentList</code>). A custom MPEG-DASH media player is
     * necessary to leverage these this custom attribute.</p> <p>The default value is
     * <code>NEVER</code>.</p>
     */
    inline GetDASHStreamingSessionURLRequest& WithDisplayFragmentNumber(const DASHDisplayFragmentNumber& value) { SetDisplayFragmentNumber(value); return *this;}

    /**
     * <p>Fragments are identified in the manifest file based on their sequence number
     * in the session. If DisplayFragmentNumber is set to <code>ALWAYS</code>, the
     * Kinesis Video Streams fragment number is added to each S element in the manifest
     * file with the attribute name “kvs:fn”. These fragment numbers can be used for
     * logging or for use with other APIs (e.g. <code>GetMedia</code> and
     * <code>GetMediaForFragmentList</code>). A custom MPEG-DASH media player is
     * necessary to leverage these this custom attribute.</p> <p>The default value is
     * <code>NEVER</code>.</p>
     */
    inline GetDASHStreamingSessionURLRequest& WithDisplayFragmentNumber(DASHDisplayFragmentNumber&& value) { SetDisplayFragmentNumber(std::move(value)); return *this;}


    /**
     * <p>The time range of the requested fragment, and the source of the
     * timestamps.</p> <p>This parameter is required if <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code> or <code>LIVE_REPLAY</code>. This parameter is optional
     * if PlaybackMode is<code/> <code>LIVE</code>. If <code>PlaybackMode</code> is
     * <code>LIVE</code>, the <code>FragmentSelectorType</code> can be set, but the
     * <code>TimestampRange</code> should not be set. If <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code> or <code>LIVE_REPLAY</code>, both
     * <code>FragmentSelectorType</code> and <code>TimestampRange</code> must be
     * set.</p>
     */
    inline const DASHFragmentSelector& GetDASHFragmentSelector() const{ return m_dASHFragmentSelector; }

    /**
     * <p>The time range of the requested fragment, and the source of the
     * timestamps.</p> <p>This parameter is required if <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code> or <code>LIVE_REPLAY</code>. This parameter is optional
     * if PlaybackMode is<code/> <code>LIVE</code>. If <code>PlaybackMode</code> is
     * <code>LIVE</code>, the <code>FragmentSelectorType</code> can be set, but the
     * <code>TimestampRange</code> should not be set. If <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code> or <code>LIVE_REPLAY</code>, both
     * <code>FragmentSelectorType</code> and <code>TimestampRange</code> must be
     * set.</p>
     */
    inline bool DASHFragmentSelectorHasBeenSet() const { return m_dASHFragmentSelectorHasBeenSet; }

    /**
     * <p>The time range of the requested fragment, and the source of the
     * timestamps.</p> <p>This parameter is required if <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code> or <code>LIVE_REPLAY</code>. This parameter is optional
     * if PlaybackMode is<code/> <code>LIVE</code>. If <code>PlaybackMode</code> is
     * <code>LIVE</code>, the <code>FragmentSelectorType</code> can be set, but the
     * <code>TimestampRange</code> should not be set. If <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code> or <code>LIVE_REPLAY</code>, both
     * <code>FragmentSelectorType</code> and <code>TimestampRange</code> must be
     * set.</p>
     */
    inline void SetDASHFragmentSelector(const DASHFragmentSelector& value) { m_dASHFragmentSelectorHasBeenSet = true; m_dASHFragmentSelector = value; }

    /**
     * <p>The time range of the requested fragment, and the source of the
     * timestamps.</p> <p>This parameter is required if <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code> or <code>LIVE_REPLAY</code>. This parameter is optional
     * if PlaybackMode is<code/> <code>LIVE</code>. If <code>PlaybackMode</code> is
     * <code>LIVE</code>, the <code>FragmentSelectorType</code> can be set, but the
     * <code>TimestampRange</code> should not be set. If <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code> or <code>LIVE_REPLAY</code>, both
     * <code>FragmentSelectorType</code> and <code>TimestampRange</code> must be
     * set.</p>
     */
    inline void SetDASHFragmentSelector(DASHFragmentSelector&& value) { m_dASHFragmentSelectorHasBeenSet = true; m_dASHFragmentSelector = std::move(value); }

    /**
     * <p>The time range of the requested fragment, and the source of the
     * timestamps.</p> <p>This parameter is required if <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code> or <code>LIVE_REPLAY</code>. This parameter is optional
     * if PlaybackMode is<code/> <code>LIVE</code>. If <code>PlaybackMode</code> is
     * <code>LIVE</code>, the <code>FragmentSelectorType</code> can be set, but the
     * <code>TimestampRange</code> should not be set. If <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code> or <code>LIVE_REPLAY</code>, both
     * <code>FragmentSelectorType</code> and <code>TimestampRange</code> must be
     * set.</p>
     */
    inline GetDASHStreamingSessionURLRequest& WithDASHFragmentSelector(const DASHFragmentSelector& value) { SetDASHFragmentSelector(value); return *this;}

    /**
     * <p>The time range of the requested fragment, and the source of the
     * timestamps.</p> <p>This parameter is required if <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code> or <code>LIVE_REPLAY</code>. This parameter is optional
     * if PlaybackMode is<code/> <code>LIVE</code>. If <code>PlaybackMode</code> is
     * <code>LIVE</code>, the <code>FragmentSelectorType</code> can be set, but the
     * <code>TimestampRange</code> should not be set. If <code>PlaybackMode</code> is
     * <code>ON_DEMAND</code> or <code>LIVE_REPLAY</code>, both
     * <code>FragmentSelectorType</code> and <code>TimestampRange</code> must be
     * set.</p>
     */
    inline GetDASHStreamingSessionURLRequest& WithDASHFragmentSelector(DASHFragmentSelector&& value) { SetDASHFragmentSelector(std::move(value)); return *this;}


    /**
     * <p>The time in seconds until the requested session expires. This value can be
     * between 300 (5 minutes) and 43200 (12 hours).</p> <p>When a session expires, no
     * new calls to <code>GetDashManifest</code>, <code>GetMP4InitFragment</code>, or
     * <code>GetMP4MediaFragment</code> can be made for that session.</p> <p>The
     * default is 300 (5 minutes).</p>
     */
    inline int GetExpires() const{ return m_expires; }

    /**
     * <p>The time in seconds until the requested session expires. This value can be
     * between 300 (5 minutes) and 43200 (12 hours).</p> <p>When a session expires, no
     * new calls to <code>GetDashManifest</code>, <code>GetMP4InitFragment</code>, or
     * <code>GetMP4MediaFragment</code> can be made for that session.</p> <p>The
     * default is 300 (5 minutes).</p>
     */
    inline bool ExpiresHasBeenSet() const { return m_expiresHasBeenSet; }

    /**
     * <p>The time in seconds until the requested session expires. This value can be
     * between 300 (5 minutes) and 43200 (12 hours).</p> <p>When a session expires, no
     * new calls to <code>GetDashManifest</code>, <code>GetMP4InitFragment</code>, or
     * <code>GetMP4MediaFragment</code> can be made for that session.</p> <p>The
     * default is 300 (5 minutes).</p>
     */
    inline void SetExpires(int value) { m_expiresHasBeenSet = true; m_expires = value; }

    /**
     * <p>The time in seconds until the requested session expires. This value can be
     * between 300 (5 minutes) and 43200 (12 hours).</p> <p>When a session expires, no
     * new calls to <code>GetDashManifest</code>, <code>GetMP4InitFragment</code>, or
     * <code>GetMP4MediaFragment</code> can be made for that session.</p> <p>The
     * default is 300 (5 minutes).</p>
     */
    inline GetDASHStreamingSessionURLRequest& WithExpires(int value) { SetExpires(value); return *this;}


    /**
     * <p>The maximum number of fragments that are returned in the MPEG-DASH
     * manifest.</p> <p>When the <code>PlaybackMode</code> is <code>LIVE</code>, the
     * most recent fragments are returned up to this value. When the
     * <code>PlaybackMode</code> is <code>ON_DEMAND</code>, the oldest fragments are
     * returned, up to this maximum number.</p> <p>When there are a higher number of
     * fragments available in a live MPEG-DASH manifest, video players often buffer
     * content before starting playback. Increasing the buffer size increases the
     * playback latency, but it decreases the likelihood that rebuffering will occur
     * during playback. We recommend that a live MPEG-DASH manifest have a minimum of 3
     * fragments and a maximum of 10 fragments.</p> <p>The default is 5 fragments if
     * <code>PlaybackMode</code> is <code>LIVE</code> or <code>LIVE_REPLAY</code>, and
     * 1,000 if <code>PlaybackMode</code> is <code>ON_DEMAND</code>. </p> <p>The
     * maximum value of 1,000 fragments corresponds to more than 16 minutes of video on
     * streams with 1-second fragments, and more than 2 1/2 hours of video on streams
     * with 10-second fragments.</p>
     */
    inline long long GetMaxManifestFragmentResults() const{ return m_maxManifestFragmentResults; }

    /**
     * <p>The maximum number of fragments that are returned in the MPEG-DASH
     * manifest.</p> <p>When the <code>PlaybackMode</code> is <code>LIVE</code>, the
     * most recent fragments are returned up to this value. When the
     * <code>PlaybackMode</code> is <code>ON_DEMAND</code>, the oldest fragments are
     * returned, up to this maximum number.</p> <p>When there are a higher number of
     * fragments available in a live MPEG-DASH manifest, video players often buffer
     * content before starting playback. Increasing the buffer size increases the
     * playback latency, but it decreases the likelihood that rebuffering will occur
     * during playback. We recommend that a live MPEG-DASH manifest have a minimum of 3
     * fragments and a maximum of 10 fragments.</p> <p>The default is 5 fragments if
     * <code>PlaybackMode</code> is <code>LIVE</code> or <code>LIVE_REPLAY</code>, and
     * 1,000 if <code>PlaybackMode</code> is <code>ON_DEMAND</code>. </p> <p>The
     * maximum value of 1,000 fragments corresponds to more than 16 minutes of video on
     * streams with 1-second fragments, and more than 2 1/2 hours of video on streams
     * with 10-second fragments.</p>
     */
    inline bool MaxManifestFragmentResultsHasBeenSet() const { return m_maxManifestFragmentResultsHasBeenSet; }

    /**
     * <p>The maximum number of fragments that are returned in the MPEG-DASH
     * manifest.</p> <p>When the <code>PlaybackMode</code> is <code>LIVE</code>, the
     * most recent fragments are returned up to this value. When the
     * <code>PlaybackMode</code> is <code>ON_DEMAND</code>, the oldest fragments are
     * returned, up to this maximum number.</p> <p>When there are a higher number of
     * fragments available in a live MPEG-DASH manifest, video players often buffer
     * content before starting playback. Increasing the buffer size increases the
     * playback latency, but it decreases the likelihood that rebuffering will occur
     * during playback. We recommend that a live MPEG-DASH manifest have a minimum of 3
     * fragments and a maximum of 10 fragments.</p> <p>The default is 5 fragments if
     * <code>PlaybackMode</code> is <code>LIVE</code> or <code>LIVE_REPLAY</code>, and
     * 1,000 if <code>PlaybackMode</code> is <code>ON_DEMAND</code>. </p> <p>The
     * maximum value of 1,000 fragments corresponds to more than 16 minutes of video on
     * streams with 1-second fragments, and more than 2 1/2 hours of video on streams
     * with 10-second fragments.</p>
     */
    inline void SetMaxManifestFragmentResults(long long value) { m_maxManifestFragmentResultsHasBeenSet = true; m_maxManifestFragmentResults = value; }

    /**
     * <p>The maximum number of fragments that are returned in the MPEG-DASH
     * manifest.</p> <p>When the <code>PlaybackMode</code> is <code>LIVE</code>, the
     * most recent fragments are returned up to this value. When the
     * <code>PlaybackMode</code> is <code>ON_DEMAND</code>, the oldest fragments are
     * returned, up to this maximum number.</p> <p>When there are a higher number of
     * fragments available in a live MPEG-DASH manifest, video players often buffer
     * content before starting playback. Increasing the buffer size increases the
     * playback latency, but it decreases the likelihood that rebuffering will occur
     * during playback. We recommend that a live MPEG-DASH manifest have a minimum of 3
     * fragments and a maximum of 10 fragments.</p> <p>The default is 5 fragments if
     * <code>PlaybackMode</code> is <code>LIVE</code> or <code>LIVE_REPLAY</code>, and
     * 1,000 if <code>PlaybackMode</code> is <code>ON_DEMAND</code>. </p> <p>The
     * maximum value of 1,000 fragments corresponds to more than 16 minutes of video on
     * streams with 1-second fragments, and more than 2 1/2 hours of video on streams
     * with 10-second fragments.</p>
     */
    inline GetDASHStreamingSessionURLRequest& WithMaxManifestFragmentResults(long long value) { SetMaxManifestFragmentResults(value); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet;

    DASHPlaybackMode m_playbackMode;
    bool m_playbackModeHasBeenSet;

    DASHDisplayFragmentTimestamp m_displayFragmentTimestamp;
    bool m_displayFragmentTimestampHasBeenSet;

    DASHDisplayFragmentNumber m_displayFragmentNumber;
    bool m_displayFragmentNumberHasBeenSet;

    DASHFragmentSelector m_dASHFragmentSelector;
    bool m_dASHFragmentSelectorHasBeenSet;

    int m_expires;
    bool m_expiresHasBeenSet;

    long long m_maxManifestFragmentResults;
    bool m_maxManifestFragmentResultsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
