/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaServiceClientModel.h>

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
  /**
   * <p/>
   */
  class AWS_KINESISVIDEOARCHIVEDMEDIA_API KinesisVideoArchivedMediaClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<KinesisVideoArchivedMediaClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoArchivedMediaClient(const Aws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaClientConfiguration& clientConfiguration = Aws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaClientConfiguration(),
                                        std::shared_ptr<KinesisVideoArchivedMediaEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoArchivedMediaEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoArchivedMediaClient(const Aws::Auth::AWSCredentials& credentials,
                                        std::shared_ptr<KinesisVideoArchivedMediaEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoArchivedMediaEndpointProvider>(ALLOCATION_TAG),
                                        const Aws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaClientConfiguration& clientConfiguration = Aws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoArchivedMediaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                        std::shared_ptr<KinesisVideoArchivedMediaEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoArchivedMediaEndpointProvider>(ALLOCATION_TAG),
                                        const Aws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaClientConfiguration& clientConfiguration = Aws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoArchivedMediaClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoArchivedMediaClient(const Aws::Auth::AWSCredentials& credentials,
                                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoArchivedMediaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KinesisVideoArchivedMediaClient();

        /**
         * <p>Downloads an MP4 file (clip) containing the archived, on-demand media from
         * the specified video stream over the specified time range. </p> <p>Both the
         * StreamName and the StreamARN parameters are optional, but you must specify
         * either the StreamName or the StreamARN when invoking this API operation. </p>
         * <p>As a prerequisite to using GetCLip API, you must obtain an endpoint using
         * <code>GetDataEndpoint</code>, specifying GET_CLIP for<code/> the
         * <code>APIName</code> parameter. </p> <p>An Amazon Kinesis video stream has the
         * following requirements for providing data through MP4:</p> <ul> <li> <p>The
         * media must contain h.264 or h.265 encoded video and, optionally, AAC or G.711
         * encoded audio. Specifically, the codec ID of track 1 should be
         * <code>V_MPEG/ISO/AVC</code> (for h.264) or V_MPEGH/ISO/HEVC (for H.265).
         * Optionally, the codec ID of track 2 should be <code>A_AAC</code> (for AAC) or
         * A_MS/ACM (for G.711).</p> </li> <li> <p>Data retention must be greater than
         * 0.</p> </li> <li> <p>The video track of each fragment must contain codec private
         * data in the Advanced Video Coding (AVC) for H.264 format and HEVC for H.265
         * format. For more information, see <a
         * href="https://www.iso.org/standard/55980.html">MPEG-4 specification ISO/IEC
         * 14496-15</a>. For information about adapting stream data to a given format, see
         * <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/producer-reference-nal.html">NAL
         * Adaptation Flags</a>.</p> </li> <li> <p>The audio track (if present) of each
         * fragment must contain codec private data in the AAC format (<a
         * href="https://www.iso.org/standard/43345.html">AAC specification ISO/IEC
         * 13818-7</a>) or the <a
         * href="http://www-mmsp.ece.mcgill.ca/Documents/AudioFormats/WAVE/WAVE.html">MS
         * Wave format</a>.</p> </li> </ul> <p>You can monitor the amount of outgoing data
         * by monitoring the <code>GetClip.OutgoingBytes</code> Amazon CloudWatch metric.
         * For information about using CloudWatch to monitor Kinesis Video Streams, see <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/monitoring.html">Monitoring
         * Kinesis Video Streams</a>. For pricing information, see <a
         * href="https://aws.amazon.com/kinesis/video-streams/pricing/">Amazon Kinesis
         * Video Streams Pricing</a> and <a href="https://aws.amazon.com/pricing/">AWS
         * Pricing</a>. Charges for outgoing AWS data apply.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/GetClip">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClipOutcome GetClip(const Model::GetClipRequest& request) const;

        /**
         * A Callable wrapper for GetClip that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetClipOutcomeCallable GetClipCallable(const Model::GetClipRequest& request) const;

        /**
         * An Async wrapper for GetClip that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetClipAsync(const Model::GetClipRequest& request, const GetClipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an MPEG Dynamic Adaptive Streaming over HTTP (DASH) URL for the
         * stream. You can then open the URL in a media player to view the stream
         * contents.</p> <p>Both the <code>StreamName</code> and the <code>StreamARN</code>
         * parameters are optional, but you must specify either the <code>StreamName</code>
         * or the <code>StreamARN</code> when invoking this API operation.</p> <p>An Amazon
         * Kinesis video stream has the following requirements for providing data through
         * MPEG-DASH:</p> <ul> <li> <p>The media must contain h.264 or h.265 encoded video
         * and, optionally, AAC or G.711 encoded audio. Specifically, the codec ID of track
         * 1 should be <code>V_MPEG/ISO/AVC</code> (for h.264) or V_MPEGH/ISO/HEVC (for
         * H.265). Optionally, the codec ID of track 2 should be <code>A_AAC</code> (for
         * AAC) or A_MS/ACM (for G.711).</p> </li> <li> <p>Data retention must be greater
         * than 0.</p> </li> <li> <p>The video track of each fragment must contain codec
         * private data in the Advanced Video Coding (AVC) for H.264 format and HEVC for
         * H.265 format. For more information, see <a
         * href="https://www.iso.org/standard/55980.html">MPEG-4 specification ISO/IEC
         * 14496-15</a>. For information about adapting stream data to a given format, see
         * <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/producer-reference-nal.html">NAL
         * Adaptation Flags</a>.</p> </li> <li> <p>The audio track (if present) of each
         * fragment must contain codec private data in the AAC format (<a
         * href="https://www.iso.org/standard/43345.html">AAC specification ISO/IEC
         * 13818-7</a>) or the <a
         * href="http://www-mmsp.ece.mcgill.ca/Documents/AudioFormats/WAVE/WAVE.html">MS
         * Wave format</a>.</p> </li> </ul> <p>The following procedure shows how to use
         * MPEG-DASH with Kinesis Video Streams:</p> <ol> <li> <p>Get an endpoint using <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/API_GetDataEndpoint.html">GetDataEndpoint</a>,
         * specifying <code>GET_DASH_STREAMING_SESSION_URL</code> for the
         * <code>APIName</code> parameter.</p> </li> <li> <p>Retrieve the MPEG-DASH URL
         * using <code>GetDASHStreamingSessionURL</code>. Kinesis Video Streams creates an
         * MPEG-DASH streaming session to be used for accessing content in a stream using
         * the MPEG-DASH protocol. <code>GetDASHStreamingSessionURL</code> returns an
         * authenticated URL (that includes an encrypted session token) for the session's
         * MPEG-DASH <i>manifest</i> (the root resource needed for streaming with
         * MPEG-DASH).</p>  <p>Don't share or store this token where an unauthorized
         * entity can access it. The token provides access to the content of the stream.
         * Safeguard the token with the same measures that you use with your AWS
         * credentials.</p>  <p>The media that is made available through the
         * manifest consists only of the requested stream, time range, and format. No other
         * media data (such as frames outside the requested window or alternate bitrates)
         * is made available.</p> </li> <li> <p>Provide the URL (containing the encrypted
         * session token) for the MPEG-DASH manifest to a media player that supports the
         * MPEG-DASH protocol. Kinesis Video Streams makes the initialization fragment and
         * media fragments available through the manifest URL. The initialization fragment
         * contains the codec private data for the stream, and other data needed to set up
         * the video or audio decoder and renderer. The media fragments contain encoded
         * video frames or encoded audio samples.</p> </li> <li> <p>The media player
         * receives the authenticated URL and requests stream metadata and media data
         * normally. When the media player requests data, it calls the following
         * actions:</p> <ul> <li> <p> <b>GetDASHManifest:</b> Retrieves an MPEG DASH
         * manifest, which contains the metadata for the media that you want to
         * playback.</p> </li> <li> <p> <b>GetMP4InitFragment:</b> Retrieves the MP4
         * initialization fragment. The media player typically loads the initialization
         * fragment before loading any media fragments. This fragment contains the
         * "<code>fytp</code>" and "<code>moov</code>" MP4 atoms, and the child atoms that
         * are needed to initialize the media player decoder.</p> <p>The initialization
         * fragment does not correspond to a fragment in a Kinesis video stream. It
         * contains only the codec private data for the stream and respective track, which
         * the media player needs to decode the media frames.</p> </li> <li> <p>
         * <b>GetMP4MediaFragment:</b> Retrieves MP4 media fragments. These fragments
         * contain the "<code>moof</code>" and "<code>mdat</code>" MP4 atoms and their
         * child atoms, containing the encoded fragment's media frames and their
         * timestamps. </p>  <p>After the first media fragment is made available in a
         * streaming session, any fragments that don't contain the same codec private data
         * cause an error to be returned when those different media fragments are loaded.
         * Therefore, the codec private data should not change between fragments in a
         * session. This also means that the session fails if the fragments in a stream
         * change from having only video to having both audio and video.</p> 
         * <p>Data retrieved with this action is billable. See <a
         * href="https://aws.amazon.com/kinesis/video-streams/pricing/">Pricing</a> for
         * details.</p> </li> </ul> </li> </ol>  <p>For restrictions that apply to
         * MPEG-DASH sessions, see <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/limits.html">Kinesis
         * Video Streams Limits</a>.</p>  <p>You can monitor the amount of data that
         * the media player consumes by monitoring the
         * <code>GetMP4MediaFragment.OutgoingBytes</code> Amazon CloudWatch metric. For
         * information about using CloudWatch to monitor Kinesis Video Streams, see <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/monitoring.html">Monitoring
         * Kinesis Video Streams</a>. For pricing information, see <a
         * href="https://aws.amazon.com/kinesis/video-streams/pricing/">Amazon Kinesis
         * Video Streams Pricing</a> and <a href="https://aws.amazon.com/pricing/">AWS
         * Pricing</a>. Charges for both HLS sessions and outgoing AWS data apply.</p>
         * <p>For more information about HLS, see <a
         * href="https://developer.apple.com/streaming/">HTTP Live Streaming</a> on the <a
         * href="https://developer.apple.com">Apple Developer site</a>.</p> 
         * <p>If an error is thrown after invoking a Kinesis Video Streams archived media
         * API, in addition to the HTTP status code and the response body, it includes the
         * following pieces of information: </p> <ul> <li> <p> <code>x-amz-ErrorType</code>
         * HTTP header – contains a more specific error type in addition to what the HTTP
         * status code provides. </p> </li> <li> <p> <code>x-amz-RequestId</code> HTTP
         * header – if you want to report an issue to AWS, the support team can better
         * diagnose the problem if given the Request Id.</p> </li> </ul> <p>Both the HTTP
         * status code and the ErrorType header can be utilized to make programmatic
         * decisions about whether errors are retry-able and under what conditions, as well
         * as provide information on what actions the client programmer might need to take
         * in order to successfully try again.</p> <p>For more information, see the
         * <b>Errors</b> section at the bottom of this topic, as well as <a
         * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/CommonErrors.html">Common
         * Errors</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/GetDASHStreamingSessionURL">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDASHStreamingSessionURLOutcome GetDASHStreamingSessionURL(const Model::GetDASHStreamingSessionURLRequest& request) const;

        /**
         * A Callable wrapper for GetDASHStreamingSessionURL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDASHStreamingSessionURLOutcomeCallable GetDASHStreamingSessionURLCallable(const Model::GetDASHStreamingSessionURLRequest& request) const;

        /**
         * An Async wrapper for GetDASHStreamingSessionURL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDASHStreamingSessionURLAsync(const Model::GetDASHStreamingSessionURLRequest& request, const GetDASHStreamingSessionURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an HTTP Live Streaming (HLS) URL for the stream. You can then open
         * the URL in a browser or media player to view the stream contents.</p> <p>Both
         * the <code>StreamName</code> and the <code>StreamARN</code> parameters are
         * optional, but you must specify either the <code>StreamName</code> or the
         * <code>StreamARN</code> when invoking this API operation.</p> <p>An Amazon
         * Kinesis video stream has the following requirements for providing data through
         * HLS:</p> <ul> <li> <p>The media must contain h.264 or h.265 encoded video and,
         * optionally, AAC encoded audio. Specifically, the codec ID of track 1 should be
         * <code>V_MPEG/ISO/AVC</code> (for h.264) or <code>V_MPEG/ISO/HEVC</code> (for
         * h.265). Optionally, the codec ID of track 2 should be <code>A_AAC</code>.</p>
         * </li> <li> <p>Data retention must be greater than 0.</p> </li> <li> <p>The video
         * track of each fragment must contain codec private data in the Advanced Video
         * Coding (AVC) for H.264 format or HEVC for H.265 format (<a
         * href="https://www.iso.org/standard/55980.html">MPEG-4 specification ISO/IEC
         * 14496-15</a>). For information about adapting stream data to a given format, see
         * <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/producer-reference-nal.html">NAL
         * Adaptation Flags</a>.</p> </li> <li> <p>The audio track (if present) of each
         * fragment must contain codec private data in the AAC format (<a
         * href="https://www.iso.org/standard/43345.html">AAC specification ISO/IEC
         * 13818-7</a>).</p> </li> </ul> <p>Kinesis Video Streams HLS sessions contain
         * fragments in the fragmented MPEG-4 form (also called fMP4 or CMAF) or the MPEG-2
         * form (also called TS chunks, which the HLS specification also supports). For
         * more information about HLS fragment types, see the <a
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
         * playlist</i> (the root resource needed for streaming with HLS).</p> 
         * <p>Don't share or store this token where an unauthorized entity could access it.
         * The token provides access to the content of the stream. Safeguard the token with
         * the same measures that you would use with your AWS credentials.</p> 
         * <p>The media that is made available through the playlist consists only of the
         * requested stream, time range, and format. No other media data (such as frames
         * outside the requested window or alternate bitrates) is made available.</p> </li>
         * <li> <p>Provide the URL (containing the encrypted session token) for the HLS
         * master playlist to a media player that supports the HLS protocol. Kinesis Video
         * Streams makes the HLS media playlist, initialization fragment, and media
         * fragments available through the master playlist URL. The initialization fragment
         * contains the codec private data for the stream, and other data needed to set up
         * the video or audio decoder and renderer. The media fragments contain
         * H.264-encoded video frames or AAC-encoded audio samples.</p> </li> <li> <p>The
         * media player receives the authenticated URL and requests stream metadata and
         * media data normally. When the media player requests data, it calls the following
         * actions:</p> <ul> <li> <p> <b>GetHLSMasterPlaylist:</b> Retrieves an HLS master
         * playlist, which contains a URL for the <code>GetHLSMediaPlaylist</code> action
         * for each track, and additional metadata for the media player, including
         * estimated bitrate and resolution.</p> </li> <li> <p> <b>GetHLSMediaPlaylist:</b>
         * Retrieves an HLS media playlist, which contains a URL to access the MP4
         * initialization fragment with the <code>GetMP4InitFragment</code> action, and
         * URLs to access the MP4 media fragments with the <code>GetMP4MediaFragment</code>
         * actions. The HLS media playlist also contains metadata about the stream that the
         * player needs to play it, such as whether the <code>PlaybackMode</code> is
         * <code>LIVE</code> or <code>ON_DEMAND</code>. The HLS media playlist is typically
         * static for sessions with a <code>PlaybackType</code> of <code>ON_DEMAND</code>.
         * The HLS media playlist is continually updated with new fragments for sessions
         * with a <code>PlaybackType</code> of <code>LIVE</code>. There is a distinct HLS
         * media playlist for the video track and the audio track (if applicable) that
         * contains MP4 media URLs for the specific track. </p> </li> <li> <p>
         * <b>GetMP4InitFragment:</b> Retrieves the MP4 initialization fragment. The media
         * player typically loads the initialization fragment before loading any media
         * fragments. This fragment contains the "<code>fytp</code>" and
         * "<code>moov</code>" MP4 atoms, and the child atoms that are needed to initialize
         * the media player decoder.</p> <p>The initialization fragment does not correspond
         * to a fragment in a Kinesis video stream. It contains only the codec private data
         * for the stream and respective track, which the media player needs to decode the
         * media frames.</p> </li> <li> <p> <b>GetMP4MediaFragment:</b> Retrieves MP4 media
         * fragments. These fragments contain the "<code>moof</code>" and
         * "<code>mdat</code>" MP4 atoms and their child atoms, containing the encoded
         * fragment's media frames and their timestamps. </p>  <p>After the first
         * media fragment is made available in a streaming session, any fragments that
         * don't contain the same codec private data cause an error to be returned when
         * those different media fragments are loaded. Therefore, the codec private data
         * should not change between fragments in a session. This also means that the
         * session fails if the fragments in a stream change from having only video to
         * having both audio and video.</p>  <p>Data retrieved with this action is
         * billable. See <a
         * href="https://aws.amazon.com/kinesis/video-streams/pricing/">Pricing</a> for
         * details.</p> </li> <li> <p> <b>GetTSFragment:</b> Retrieves MPEG TS fragments
         * containing both initialization and media data for all tracks in the stream.</p>
         *  <p>If the <code>ContainerFormat</code> is <code>MPEG_TS</code>, this API
         * is used instead of <code>GetMP4InitFragment</code> and
         * <code>GetMP4MediaFragment</code> to retrieve stream media.</p>  <p>Data
         * retrieved with this action is billable. For more information, see <a
         * href="https://aws.amazon.com/kinesis/video-streams/pricing/">Kinesis Video
         * Streams pricing</a>.</p> </li> </ul> </li> </ol> <p>A streaming session URL must
         * not be shared between players. The service might throttle a session if multiple
         * media players are sharing it. For connection limits, see <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/limits.html">Kinesis
         * Video Streams Limits</a>.</p> <p>You can monitor the amount of data that the
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
         * href="https://developer.apple.com">Apple Developer site</a>.</p> 
         * <p>If an error is thrown after invoking a Kinesis Video Streams archived media
         * API, in addition to the HTTP status code and the response body, it includes the
         * following pieces of information: </p> <ul> <li> <p> <code>x-amz-ErrorType</code>
         * HTTP header – contains a more specific error type in addition to what the HTTP
         * status code provides. </p> </li> <li> <p> <code>x-amz-RequestId</code> HTTP
         * header – if you want to report an issue to AWS, the support team can better
         * diagnose the problem if given the Request Id.</p> </li> </ul> <p>Both the HTTP
         * status code and the ErrorType header can be utilized to make programmatic
         * decisions about whether errors are retry-able and under what conditions, as well
         * as provide information on what actions the client programmer might need to take
         * in order to successfully try again.</p> <p>For more information, see the
         * <b>Errors</b> section at the bottom of this topic, as well as <a
         * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/CommonErrors.html">Common
         * Errors</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/GetHLSStreamingSessionURL">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHLSStreamingSessionURLOutcome GetHLSStreamingSessionURL(const Model::GetHLSStreamingSessionURLRequest& request) const;

        /**
         * A Callable wrapper for GetHLSStreamingSessionURL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHLSStreamingSessionURLOutcomeCallable GetHLSStreamingSessionURLCallable(const Model::GetHLSStreamingSessionURLRequest& request) const;

        /**
         * An Async wrapper for GetHLSStreamingSessionURL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHLSStreamingSessionURLAsync(const Model::GetHLSStreamingSessionURLRequest& request, const GetHLSStreamingSessionURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of Images corresponding to each timestamp for a given time
         * range, sampling interval, and image format configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/GetImages">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImagesOutcome GetImages(const Model::GetImagesRequest& request) const;

        /**
         * A Callable wrapper for GetImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImagesOutcomeCallable GetImagesCallable(const Model::GetImagesRequest& request) const;

        /**
         * An Async wrapper for GetImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImagesAsync(const Model::GetImagesRequest& request, const GetImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets media for a list of fragments (specified by fragment number) from the
         * archived data in an Amazon Kinesis video stream.</p>  <p>You must first
         * call the <code>GetDataEndpoint</code> API to get an endpoint. Then send the
         * <code>GetMediaForFragmentList</code> requests to this endpoint using the <a
         * href="https://docs.aws.amazon.com/cli/latest/reference/">--endpoint-url
         * parameter</a>. </p>  <p>For limits, see <a
         * href="http://docs.aws.amazon.com/kinesisvideostreams/latest/dg/limits.html">Kinesis
         * Video Streams Limits</a>.</p>  <p>If an error is thrown after
         * invoking a Kinesis Video Streams archived media API, in addition to the HTTP
         * status code and the response body, it includes the following pieces of
         * information: </p> <ul> <li> <p> <code>x-amz-ErrorType</code> HTTP header –
         * contains a more specific error type in addition to what the HTTP status code
         * provides. </p> </li> <li> <p> <code>x-amz-RequestId</code> HTTP header – if you
         * want to report an issue to AWS, the support team can better diagnose the problem
         * if given the Request Id.</p> </li> </ul> <p>Both the HTTP status code and the
         * ErrorType header can be utilized to make programmatic decisions about whether
         * errors are retry-able and under what conditions, as well as provide information
         * on what actions the client programmer might need to take in order to
         * successfully try again.</p> <p>For more information, see the <b>Errors</b>
         * section at the bottom of this topic, as well as <a
         * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/CommonErrors.html">Common
         * Errors</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/GetMediaForFragmentList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaForFragmentListOutcome GetMediaForFragmentList(const Model::GetMediaForFragmentListRequest& request) const;

        /**
         * A Callable wrapper for GetMediaForFragmentList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMediaForFragmentListOutcomeCallable GetMediaForFragmentListCallable(const Model::GetMediaForFragmentListRequest& request) const;

        /**
         * An Async wrapper for GetMediaForFragmentList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMediaForFragmentListAsync(const Model::GetMediaForFragmentListRequest& request, const GetMediaForFragmentListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <a>Fragment</a> objects from the specified stream and
         * timestamp range within the archived data.</p> <p>Listing fragments is eventually
         * consistent. This means that even if the producer receives an acknowledgment that
         * a fragment is persisted, the result might not be returned immediately from a
         * request to <code>ListFragments</code>. However, results are typically available
         * in less than one second.</p>  <p>You must first call the
         * <code>GetDataEndpoint</code> API to get an endpoint. Then send the
         * <code>ListFragments</code> requests to this endpoint using the <a
         * href="https://docs.aws.amazon.com/cli/latest/reference/">--endpoint-url
         * parameter</a>. </p>   <p>If an error is thrown after invoking
         * a Kinesis Video Streams archived media API, in addition to the HTTP status code
         * and the response body, it includes the following pieces of information: </p>
         * <ul> <li> <p> <code>x-amz-ErrorType</code> HTTP header – contains a more
         * specific error type in addition to what the HTTP status code provides. </p>
         * </li> <li> <p> <code>x-amz-RequestId</code> HTTP header – if you want to report
         * an issue to AWS, the support team can better diagnose the problem if given the
         * Request Id.</p> </li> </ul> <p>Both the HTTP status code and the ErrorType
         * header can be utilized to make programmatic decisions about whether errors are
         * retry-able and under what conditions, as well as provide information on what
         * actions the client programmer might need to take in order to successfully try
         * again.</p> <p>For more information, see the <b>Errors</b> section at the bottom
         * of this topic, as well as <a
         * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/CommonErrors.html">Common
         * Errors</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/ListFragments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFragmentsOutcome ListFragments(const Model::ListFragmentsRequest& request) const;

        /**
         * A Callable wrapper for ListFragments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFragmentsOutcomeCallable ListFragmentsCallable(const Model::ListFragmentsRequest& request) const;

        /**
         * An Async wrapper for ListFragments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFragmentsAsync(const Model::ListFragmentsRequest& request, const ListFragmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KinesisVideoArchivedMediaEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KinesisVideoArchivedMediaClient>;
      void init(const KinesisVideoArchivedMediaClientConfiguration& clientConfiguration);

      KinesisVideoArchivedMediaClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<KinesisVideoArchivedMediaEndpointProviderBase> m_endpointProvider;
  };

} // namespace KinesisVideoArchivedMedia
} // namespace Aws
