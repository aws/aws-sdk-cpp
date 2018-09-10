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
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis-video-archived-media/model/GetHLSStreamingSessionURLResult.h>
#include <aws/kinesis-video-archived-media/model/GetMediaForFragmentListResult.h>
#include <aws/kinesis-video-archived-media/model/ListFragmentsResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace KinesisVideoArchivedMedia
{

namespace Model
{
        class GetHLSStreamingSessionURLRequest;
        class GetMediaForFragmentListRequest;
        class ListFragmentsRequest;

        typedef Aws::Utils::Outcome<GetHLSStreamingSessionURLResult, Aws::Client::AWSError<KinesisVideoArchivedMediaErrors>> GetHLSStreamingSessionURLOutcome;
        typedef Aws::Utils::Outcome<GetMediaForFragmentListResult, Aws::Client::AWSError<KinesisVideoArchivedMediaErrors>> GetMediaForFragmentListOutcome;
        typedef Aws::Utils::Outcome<ListFragmentsResult, Aws::Client::AWSError<KinesisVideoArchivedMediaErrors>> ListFragmentsOutcome;

        typedef std::future<GetHLSStreamingSessionURLOutcome> GetHLSStreamingSessionURLOutcomeCallable;
        typedef std::future<GetMediaForFragmentListOutcome> GetMediaForFragmentListOutcomeCallable;
        typedef std::future<ListFragmentsOutcome> ListFragmentsOutcomeCallable;
} // namespace Model

  class KinesisVideoArchivedMediaClient;

    typedef std::function<void(const KinesisVideoArchivedMediaClient*, const Model::GetHLSStreamingSessionURLRequest&, const Model::GetHLSStreamingSessionURLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHLSStreamingSessionURLResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoArchivedMediaClient*, const Model::GetMediaForFragmentListRequest&, const Model::GetMediaForFragmentListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMediaForFragmentListResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoArchivedMediaClient*, const Model::ListFragmentsRequest&, const Model::ListFragmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFragmentsResponseReceivedHandler;

  /**
   * <p/>
   */
  class AWS_KINESISVIDEOARCHIVEDMEDIA_API KinesisVideoArchivedMediaClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoArchivedMediaClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoArchivedMediaClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoArchivedMediaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~KinesisVideoArchivedMediaClient();

        inline virtual const char* GetServiceClientName() const override { return "Kinesis Video Archived Media"; }


        /**
         * <p>Retrieves an HTTP Live Streaming (HLS) URL for the stream. You can then open
         * the URL in a browser or media player to view the stream contents.</p> <p>You
         * must specify either the <code>StreamName</code> or the
         * <code>StreamARN</code>.</p> <p>An Amazon Kinesis video stream has the following
         * requirements for providing data through HLS:</p> <ul> <li> <p>The media type
         * must be <code>video/h264</code>.</p> </li> <li> <p>Data retention must be
         * greater than 0.</p> </li> <li> <p>The fragments must contain codec private data
         * in the AVC (Advanced Video Coding) for H.264 format (<a
         * href="https://www.iso.org/standard/55980.html">MPEG-4 specification ISO/IEC
         * 14496-15</a>). For information about adapting stream data to a given format, see
         * <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/latest/dg/producer-reference-nal.html">NAL
         * Adaptation Flags</a>.</p> </li> </ul> <p>Kinesis Video Streams HLS sessions
         * contain fragments in the fragmented MPEG-4 form (also called fMP4 or CMAF),
         * rather than the MPEG-2 form (also called TS chunks, which the HLS specification
         * also supports). For more information about HLS fragment types, see the <a
         * href="https://tools.ietf.org/html/draft-pantos-http-live-streaming-23">HLS
         * specification</a>.</p> <p>The following procedure shows how to use HLS with
         * Kinesis Video Streams:</p> <ol> <li> <p>Get an endpoint using <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/API_GetDataEndpoint.html">GetDataEndpoint</a>,
         * specifying <code>GET_HLS_STREAMING_SESSION_URL</code> for the
         * <code>APIName</code> parameter.</p> </li> <li> <p>Retrieve the HLS URL using
         * <code>GetHLSStreamingSessionURL</code>. Kinesis Video Streams creates an HLS
         * streaming session to be used for accessing content in a stream using the HLS
         * protocol. <code>GetHLSStreamingSessionURL</code> returns an authenticated URL
         * (that includes an encrypted session token) for the session's HLS <i>master
         * playlist</i> (the root resource needed for streaming with HLS).</p> <note>
         * <p>Don't share or store this token where an unauthorized entity could access it.
         * The token provides access to the content of the stream. Safeguard the token with
         * the same measures that you would use with your AWS credentials.</p> </note>
         * <p>The media that is made available through the playlist consists only of the
         * requested stream, time range, and format. No other media data (such as frames
         * outside the requested window or alternate bit rates) is made available.</p>
         * </li> <li> <p>Provide the URL (containing the encrypted session token) for the
         * HLS master playlist to a media player that supports the HLS protocol. Kinesis
         * Video Streams makes the HLS media playlist, initialization fragment, and media
         * fragments available through the master playlist URL. The initialization fragment
         * contains the codec private data for the stream, and other data needed to set up
         * the video decoder and renderer. The media fragments contain H.264-encoded video
         * frames and time stamps.</p> </li> <li> <p>The media player receives the
         * authenticated URL and requests stream metadata and media data normally. When the
         * media player requests data, it calls the following actions:</p> <ul> <li> <p>
         * <b>GetHLSMasterPlaylist:</b> Retrieves an HLS master playlist, which contains a
         * URL for the <code>GetHLSMediaPlaylist</code> action, and additional metadata for
         * the media player, including estimated bit rate and resolution.</p> </li> <li>
         * <p> <b>GetHLSMediaPlaylist:</b> Retrieves an HLS media playlist, which contains
         * a URL to access the MP4 initialization fragment with the
         * <code>GetMP4InitFragment</code> action, and URLs to access the MP4 media
         * fragments with the <code>GetMP4MediaFragment</code> actions. The HLS media
         * playlist also contains metadata about the stream that the player needs to play
         * it, such as whether the <code>PlaybackMode</code> is <code>LIVE</code> or
         * <code>ON_DEMAND</code>. The HLS media playlist is typically static for sessions
         * with a <code>PlaybackType</code> of <code>ON_DEMAND</code>. The HLS media
         * playlist is continually updated with new fragments for sessions with a
         * <code>PlaybackType</code> of <code>LIVE</code>.</p> </li> <li> <p>
         * <b>GetMP4InitFragment:</b> Retrieves the MP4 initialization fragment. The media
         * player typically loads the initialization fragment before loading any media
         * fragments. This fragment contains the "<code>fytp</code>" and
         * "<code>moov</code>" MP4 atoms, and the child atoms that are needed to initialize
         * the media player decoder.</p> <p>The initialization fragment does not correspond
         * to a fragment in a Kinesis video stream. It contains only the codec private data
         * for the stream, which the media player needs to decode video frames.</p> </li>
         * <li> <p> <b>GetMP4MediaFragment:</b> Retrieves MP4 media fragments. These
         * fragments contain the "<code>moof</code>" and "<code>mdat</code>" MP4 atoms and
         * their child atoms, containing the encoded fragment's video frames and their time
         * stamps. </p> <note> <p>After the first media fragment is made available in a
         * streaming session, any fragments that don't contain the same codec private data
         * are excluded in the HLS media playlist. Therefore, the codec private data does
         * not change between fragments in a session.</p> </note> <p>Data retrieved with
         * this action is billable. See <a
         * href="aws.amazon.comkinesis/video-streams/pricing/">Pricing</a> for details.</p>
         * </li> </ul> </li> </ol> <note> <p>The following restrictions apply to HLS
         * sessions:</p> <ul> <li> <p>A streaming session URL should not be shared between
         * players. The service might throttle a session if multiple media players are
         * sharing it. For connection limits, see <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/limits.html">Kinesis
         * Video Streams Limits</a>.</p> </li> <li> <p>A Kinesis video stream can have a
         * maximum of five active HLS streaming sessions. If a new session is created when
         * the maximum number of sessions is already active, the oldest (earliest created)
         * session is closed. The number of active <code>GetMedia</code> connections on a
         * Kinesis video stream does not count against this limit, and the number of active
         * HLS sessions does not count against the active <code>GetMedia</code> connection
         * limit.</p> </li> </ul> </note> <p>You can monitor the amount of data that the
         * media player consumes by monitoring the
         * <code>GetMP4MediaFragment.OutgoingBytes</code> Amazon CloudWatch metric. For
         * information about using CloudWatch to monitor Kinesis Video Streams, see <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/monitoring.html">Monitoring
         * Kinesis Video Streams</a>. For pricing information, see <a
         * href="https://aws.amazon.com/kinesis/video-streams/pricing/">Amazon Kinesis
         * Video Streams Pricing</a> and <a href="https://aws.amazon.com/pricing/">AWS
         * Pricing</a>. Charges for both HLS sessions and outgoing AWS data apply.</p>
         * <p>For more information about HLS, see <a
         * href="https://developer.apple.com/streaming/">HTTP Live Streaming</a> on the <a
         * href="https://developer.apple.com">Apple Developer site</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/GetHLSStreamingSessionURL">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHLSStreamingSessionURLOutcome GetHLSStreamingSessionURL(const Model::GetHLSStreamingSessionURLRequest& request) const;

        /**
         * <p>Retrieves an HTTP Live Streaming (HLS) URL for the stream. You can then open
         * the URL in a browser or media player to view the stream contents.</p> <p>You
         * must specify either the <code>StreamName</code> or the
         * <code>StreamARN</code>.</p> <p>An Amazon Kinesis video stream has the following
         * requirements for providing data through HLS:</p> <ul> <li> <p>The media type
         * must be <code>video/h264</code>.</p> </li> <li> <p>Data retention must be
         * greater than 0.</p> </li> <li> <p>The fragments must contain codec private data
         * in the AVC (Advanced Video Coding) for H.264 format (<a
         * href="https://www.iso.org/standard/55980.html">MPEG-4 specification ISO/IEC
         * 14496-15</a>). For information about adapting stream data to a given format, see
         * <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/latest/dg/producer-reference-nal.html">NAL
         * Adaptation Flags</a>.</p> </li> </ul> <p>Kinesis Video Streams HLS sessions
         * contain fragments in the fragmented MPEG-4 form (also called fMP4 or CMAF),
         * rather than the MPEG-2 form (also called TS chunks, which the HLS specification
         * also supports). For more information about HLS fragment types, see the <a
         * href="https://tools.ietf.org/html/draft-pantos-http-live-streaming-23">HLS
         * specification</a>.</p> <p>The following procedure shows how to use HLS with
         * Kinesis Video Streams:</p> <ol> <li> <p>Get an endpoint using <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/API_GetDataEndpoint.html">GetDataEndpoint</a>,
         * specifying <code>GET_HLS_STREAMING_SESSION_URL</code> for the
         * <code>APIName</code> parameter.</p> </li> <li> <p>Retrieve the HLS URL using
         * <code>GetHLSStreamingSessionURL</code>. Kinesis Video Streams creates an HLS
         * streaming session to be used for accessing content in a stream using the HLS
         * protocol. <code>GetHLSStreamingSessionURL</code> returns an authenticated URL
         * (that includes an encrypted session token) for the session's HLS <i>master
         * playlist</i> (the root resource needed for streaming with HLS).</p> <note>
         * <p>Don't share or store this token where an unauthorized entity could access it.
         * The token provides access to the content of the stream. Safeguard the token with
         * the same measures that you would use with your AWS credentials.</p> </note>
         * <p>The media that is made available through the playlist consists only of the
         * requested stream, time range, and format. No other media data (such as frames
         * outside the requested window or alternate bit rates) is made available.</p>
         * </li> <li> <p>Provide the URL (containing the encrypted session token) for the
         * HLS master playlist to a media player that supports the HLS protocol. Kinesis
         * Video Streams makes the HLS media playlist, initialization fragment, and media
         * fragments available through the master playlist URL. The initialization fragment
         * contains the codec private data for the stream, and other data needed to set up
         * the video decoder and renderer. The media fragments contain H.264-encoded video
         * frames and time stamps.</p> </li> <li> <p>The media player receives the
         * authenticated URL and requests stream metadata and media data normally. When the
         * media player requests data, it calls the following actions:</p> <ul> <li> <p>
         * <b>GetHLSMasterPlaylist:</b> Retrieves an HLS master playlist, which contains a
         * URL for the <code>GetHLSMediaPlaylist</code> action, and additional metadata for
         * the media player, including estimated bit rate and resolution.</p> </li> <li>
         * <p> <b>GetHLSMediaPlaylist:</b> Retrieves an HLS media playlist, which contains
         * a URL to access the MP4 initialization fragment with the
         * <code>GetMP4InitFragment</code> action, and URLs to access the MP4 media
         * fragments with the <code>GetMP4MediaFragment</code> actions. The HLS media
         * playlist also contains metadata about the stream that the player needs to play
         * it, such as whether the <code>PlaybackMode</code> is <code>LIVE</code> or
         * <code>ON_DEMAND</code>. The HLS media playlist is typically static for sessions
         * with a <code>PlaybackType</code> of <code>ON_DEMAND</code>. The HLS media
         * playlist is continually updated with new fragments for sessions with a
         * <code>PlaybackType</code> of <code>LIVE</code>.</p> </li> <li> <p>
         * <b>GetMP4InitFragment:</b> Retrieves the MP4 initialization fragment. The media
         * player typically loads the initialization fragment before loading any media
         * fragments. This fragment contains the "<code>fytp</code>" and
         * "<code>moov</code>" MP4 atoms, and the child atoms that are needed to initialize
         * the media player decoder.</p> <p>The initialization fragment does not correspond
         * to a fragment in a Kinesis video stream. It contains only the codec private data
         * for the stream, which the media player needs to decode video frames.</p> </li>
         * <li> <p> <b>GetMP4MediaFragment:</b> Retrieves MP4 media fragments. These
         * fragments contain the "<code>moof</code>" and "<code>mdat</code>" MP4 atoms and
         * their child atoms, containing the encoded fragment's video frames and their time
         * stamps. </p> <note> <p>After the first media fragment is made available in a
         * streaming session, any fragments that don't contain the same codec private data
         * are excluded in the HLS media playlist. Therefore, the codec private data does
         * not change between fragments in a session.</p> </note> <p>Data retrieved with
         * this action is billable. See <a
         * href="aws.amazon.comkinesis/video-streams/pricing/">Pricing</a> for details.</p>
         * </li> </ul> </li> </ol> <note> <p>The following restrictions apply to HLS
         * sessions:</p> <ul> <li> <p>A streaming session URL should not be shared between
         * players. The service might throttle a session if multiple media players are
         * sharing it. For connection limits, see <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/limits.html">Kinesis
         * Video Streams Limits</a>.</p> </li> <li> <p>A Kinesis video stream can have a
         * maximum of five active HLS streaming sessions. If a new session is created when
         * the maximum number of sessions is already active, the oldest (earliest created)
         * session is closed. The number of active <code>GetMedia</code> connections on a
         * Kinesis video stream does not count against this limit, and the number of active
         * HLS sessions does not count against the active <code>GetMedia</code> connection
         * limit.</p> </li> </ul> </note> <p>You can monitor the amount of data that the
         * media player consumes by monitoring the
         * <code>GetMP4MediaFragment.OutgoingBytes</code> Amazon CloudWatch metric. For
         * information about using CloudWatch to monitor Kinesis Video Streams, see <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/monitoring.html">Monitoring
         * Kinesis Video Streams</a>. For pricing information, see <a
         * href="https://aws.amazon.com/kinesis/video-streams/pricing/">Amazon Kinesis
         * Video Streams Pricing</a> and <a href="https://aws.amazon.com/pricing/">AWS
         * Pricing</a>. Charges for both HLS sessions and outgoing AWS data apply.</p>
         * <p>For more information about HLS, see <a
         * href="https://developer.apple.com/streaming/">HTTP Live Streaming</a> on the <a
         * href="https://developer.apple.com">Apple Developer site</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/GetHLSStreamingSessionURL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHLSStreamingSessionURLOutcomeCallable GetHLSStreamingSessionURLCallable(const Model::GetHLSStreamingSessionURLRequest& request) const;

        /**
         * <p>Retrieves an HTTP Live Streaming (HLS) URL for the stream. You can then open
         * the URL in a browser or media player to view the stream contents.</p> <p>You
         * must specify either the <code>StreamName</code> or the
         * <code>StreamARN</code>.</p> <p>An Amazon Kinesis video stream has the following
         * requirements for providing data through HLS:</p> <ul> <li> <p>The media type
         * must be <code>video/h264</code>.</p> </li> <li> <p>Data retention must be
         * greater than 0.</p> </li> <li> <p>The fragments must contain codec private data
         * in the AVC (Advanced Video Coding) for H.264 format (<a
         * href="https://www.iso.org/standard/55980.html">MPEG-4 specification ISO/IEC
         * 14496-15</a>). For information about adapting stream data to a given format, see
         * <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/latest/dg/producer-reference-nal.html">NAL
         * Adaptation Flags</a>.</p> </li> </ul> <p>Kinesis Video Streams HLS sessions
         * contain fragments in the fragmented MPEG-4 form (also called fMP4 or CMAF),
         * rather than the MPEG-2 form (also called TS chunks, which the HLS specification
         * also supports). For more information about HLS fragment types, see the <a
         * href="https://tools.ietf.org/html/draft-pantos-http-live-streaming-23">HLS
         * specification</a>.</p> <p>The following procedure shows how to use HLS with
         * Kinesis Video Streams:</p> <ol> <li> <p>Get an endpoint using <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/API_GetDataEndpoint.html">GetDataEndpoint</a>,
         * specifying <code>GET_HLS_STREAMING_SESSION_URL</code> for the
         * <code>APIName</code> parameter.</p> </li> <li> <p>Retrieve the HLS URL using
         * <code>GetHLSStreamingSessionURL</code>. Kinesis Video Streams creates an HLS
         * streaming session to be used for accessing content in a stream using the HLS
         * protocol. <code>GetHLSStreamingSessionURL</code> returns an authenticated URL
         * (that includes an encrypted session token) for the session's HLS <i>master
         * playlist</i> (the root resource needed for streaming with HLS).</p> <note>
         * <p>Don't share or store this token where an unauthorized entity could access it.
         * The token provides access to the content of the stream. Safeguard the token with
         * the same measures that you would use with your AWS credentials.</p> </note>
         * <p>The media that is made available through the playlist consists only of the
         * requested stream, time range, and format. No other media data (such as frames
         * outside the requested window or alternate bit rates) is made available.</p>
         * </li> <li> <p>Provide the URL (containing the encrypted session token) for the
         * HLS master playlist to a media player that supports the HLS protocol. Kinesis
         * Video Streams makes the HLS media playlist, initialization fragment, and media
         * fragments available through the master playlist URL. The initialization fragment
         * contains the codec private data for the stream, and other data needed to set up
         * the video decoder and renderer. The media fragments contain H.264-encoded video
         * frames and time stamps.</p> </li> <li> <p>The media player receives the
         * authenticated URL and requests stream metadata and media data normally. When the
         * media player requests data, it calls the following actions:</p> <ul> <li> <p>
         * <b>GetHLSMasterPlaylist:</b> Retrieves an HLS master playlist, which contains a
         * URL for the <code>GetHLSMediaPlaylist</code> action, and additional metadata for
         * the media player, including estimated bit rate and resolution.</p> </li> <li>
         * <p> <b>GetHLSMediaPlaylist:</b> Retrieves an HLS media playlist, which contains
         * a URL to access the MP4 initialization fragment with the
         * <code>GetMP4InitFragment</code> action, and URLs to access the MP4 media
         * fragments with the <code>GetMP4MediaFragment</code> actions. The HLS media
         * playlist also contains metadata about the stream that the player needs to play
         * it, such as whether the <code>PlaybackMode</code> is <code>LIVE</code> or
         * <code>ON_DEMAND</code>. The HLS media playlist is typically static for sessions
         * with a <code>PlaybackType</code> of <code>ON_DEMAND</code>. The HLS media
         * playlist is continually updated with new fragments for sessions with a
         * <code>PlaybackType</code> of <code>LIVE</code>.</p> </li> <li> <p>
         * <b>GetMP4InitFragment:</b> Retrieves the MP4 initialization fragment. The media
         * player typically loads the initialization fragment before loading any media
         * fragments. This fragment contains the "<code>fytp</code>" and
         * "<code>moov</code>" MP4 atoms, and the child atoms that are needed to initialize
         * the media player decoder.</p> <p>The initialization fragment does not correspond
         * to a fragment in a Kinesis video stream. It contains only the codec private data
         * for the stream, which the media player needs to decode video frames.</p> </li>
         * <li> <p> <b>GetMP4MediaFragment:</b> Retrieves MP4 media fragments. These
         * fragments contain the "<code>moof</code>" and "<code>mdat</code>" MP4 atoms and
         * their child atoms, containing the encoded fragment's video frames and their time
         * stamps. </p> <note> <p>After the first media fragment is made available in a
         * streaming session, any fragments that don't contain the same codec private data
         * are excluded in the HLS media playlist. Therefore, the codec private data does
         * not change between fragments in a session.</p> </note> <p>Data retrieved with
         * this action is billable. See <a
         * href="aws.amazon.comkinesis/video-streams/pricing/">Pricing</a> for details.</p>
         * </li> </ul> </li> </ol> <note> <p>The following restrictions apply to HLS
         * sessions:</p> <ul> <li> <p>A streaming session URL should not be shared between
         * players. The service might throttle a session if multiple media players are
         * sharing it. For connection limits, see <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/limits.html">Kinesis
         * Video Streams Limits</a>.</p> </li> <li> <p>A Kinesis video stream can have a
         * maximum of five active HLS streaming sessions. If a new session is created when
         * the maximum number of sessions is already active, the oldest (earliest created)
         * session is closed. The number of active <code>GetMedia</code> connections on a
         * Kinesis video stream does not count against this limit, and the number of active
         * HLS sessions does not count against the active <code>GetMedia</code> connection
         * limit.</p> </li> </ul> </note> <p>You can monitor the amount of data that the
         * media player consumes by monitoring the
         * <code>GetMP4MediaFragment.OutgoingBytes</code> Amazon CloudWatch metric. For
         * information about using CloudWatch to monitor Kinesis Video Streams, see <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/monitoring.html">Monitoring
         * Kinesis Video Streams</a>. For pricing information, see <a
         * href="https://aws.amazon.com/kinesis/video-streams/pricing/">Amazon Kinesis
         * Video Streams Pricing</a> and <a href="https://aws.amazon.com/pricing/">AWS
         * Pricing</a>. Charges for both HLS sessions and outgoing AWS data apply.</p>
         * <p>For more information about HLS, see <a
         * href="https://developer.apple.com/streaming/">HTTP Live Streaming</a> on the <a
         * href="https://developer.apple.com">Apple Developer site</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/GetHLSStreamingSessionURL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHLSStreamingSessionURLAsync(const Model::GetHLSStreamingSessionURLRequest& request, const GetHLSStreamingSessionURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets media for a list of fragments (specified by fragment number) from the
         * archived data in an Amazon Kinesis video stream.</p> <p>The following limits
         * apply when using the <code>GetMediaForFragmentList</code> API:</p> <ul> <li>
         * <p>A client can call <code>GetMediaForFragmentList</code> up to five times per
         * second per stream. </p> </li> <li> <p>Kinesis Video Streams sends media data at
         * a rate of up to 25 megabytes per second (or 200 megabits per second) during a
         * <code>GetMediaForFragmentList</code> session. </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/GetMediaForFragmentList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaForFragmentListOutcome GetMediaForFragmentList(const Model::GetMediaForFragmentListRequest& request) const;

        /**
         * <p>Gets media for a list of fragments (specified by fragment number) from the
         * archived data in an Amazon Kinesis video stream.</p> <p>The following limits
         * apply when using the <code>GetMediaForFragmentList</code> API:</p> <ul> <li>
         * <p>A client can call <code>GetMediaForFragmentList</code> up to five times per
         * second per stream. </p> </li> <li> <p>Kinesis Video Streams sends media data at
         * a rate of up to 25 megabytes per second (or 200 megabits per second) during a
         * <code>GetMediaForFragmentList</code> session. </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/GetMediaForFragmentList">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMediaForFragmentListOutcomeCallable GetMediaForFragmentListCallable(const Model::GetMediaForFragmentListRequest& request) const;

        /**
         * <p>Gets media for a list of fragments (specified by fragment number) from the
         * archived data in an Amazon Kinesis video stream.</p> <p>The following limits
         * apply when using the <code>GetMediaForFragmentList</code> API:</p> <ul> <li>
         * <p>A client can call <code>GetMediaForFragmentList</code> up to five times per
         * second per stream. </p> </li> <li> <p>Kinesis Video Streams sends media data at
         * a rate of up to 25 megabytes per second (or 200 megabits per second) during a
         * <code>GetMediaForFragmentList</code> session. </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/GetMediaForFragmentList">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMediaForFragmentListAsync(const Model::GetMediaForFragmentListRequest& request, const GetMediaForFragmentListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <a>Fragment</a> objects from the specified stream and start
         * location within the archived data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/ListFragments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFragmentsOutcome ListFragments(const Model::ListFragmentsRequest& request) const;

        /**
         * <p>Returns a list of <a>Fragment</a> objects from the specified stream and start
         * location within the archived data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/ListFragments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFragmentsOutcomeCallable ListFragmentsCallable(const Model::ListFragmentsRequest& request) const;

        /**
         * <p>Returns a list of <a>Fragment</a> objects from the specified stream and start
         * location within the archived data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/ListFragments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFragmentsAsync(const Model::ListFragmentsRequest& request, const ListFragmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void GetHLSStreamingSessionURLAsyncHelper(const Model::GetHLSStreamingSessionURLRequest& request, const GetHLSStreamingSessionURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMediaForFragmentListAsyncHelper(const Model::GetMediaForFragmentListRequest& request, const GetMediaForFragmentListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFragmentsAsyncHelper(const Model::ListFragmentsRequest& request, const ListFragmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace KinesisVideoArchivedMedia
} // namespace Aws
