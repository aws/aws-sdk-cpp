/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorage_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageServiceClientModel.h>

namespace Aws
{
namespace KinesisVideoWebRTCStorage
{
  /**
   * <p><fullname>webrtc</fullname> <p> </p></p>
   */
  class AWS_KINESISVIDEOWEBRTCSTORAGE_API KinesisVideoWebRTCStorageClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<KinesisVideoWebRTCStorageClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef KinesisVideoWebRTCStorageClientConfiguration ClientConfigurationType;
      typedef KinesisVideoWebRTCStorageEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoWebRTCStorageClient(const Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration& clientConfiguration = Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration(),
                                        std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoWebRTCStorageClient(const Aws::Auth::AWSCredentials& credentials,
                                        std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase> endpointProvider = nullptr,
                                        const Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration& clientConfiguration = Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoWebRTCStorageClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                        std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase> endpointProvider = nullptr,
                                        const Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration& clientConfiguration = Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoWebRTCStorageClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoWebRTCStorageClient(const Aws::Auth::AWSCredentials& credentials,
                                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoWebRTCStorageClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KinesisVideoWebRTCStorageClient();

        /**
         *  <p>Before using this API, you must call the
         * <code>GetSignalingChannelEndpoint</code> API to request the WEBRTC endpoint. You
         * then specify the endpoint and region in your <code>JoinStorageSession</code> API
         * request.</p>  <p>Join the ongoing one way-video and/or multi-way audio
         * WebRTC session as a video producing device for an input channel. If there’s no
         * existing session for the channel, a new streaming session needs to be created,
         * and the Amazon Resource Name (ARN) of the signaling channel must be provided.
         * </p> <p>Currently for the <code>SINGLE_MASTER</code> type, a video producing
         * device is able to ingest both audio and video media into a stream. Only video
         * producing devices can join the session and record media.</p>  <p>Both
         * audio and video tracks are currently required for WebRTC ingestion.</p>
         * <p>Current requirements:</p> <ul> <li> <p>Video track: H.264</p> </li> <li>
         * <p>Audio track: Opus</p> </li> </ul>  <p>The resulting ingested
         * video in the Kinesis video stream will have the following parameters: H.264
         * video and AAC audio.</p> <p>Once a master participant has negotiated a
         * connection through WebRTC, the ingested media session will be stored in the
         * Kinesis video stream. Multiple viewers are then able to play back real-time
         * media through our Playback APIs.</p> <p>You can also use existing Kinesis Video
         * Streams features like <code>HLS</code> or <code>DASH</code> playback, image
         * generation via <a
         * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/gs-getImages.html">GetImages</a>,
         * and more with ingested WebRTC media.</p>  <p>S3 image delivery and
         * notifications are not currently supported.</p>   <p>Assume that
         * only one video producing device client can be associated with a session for the
         * channel. If more than one client joins the session of a specific channel as a
         * video producing device, the most recent client request takes precedence. </p>
         *  <p> <b>Additional information</b> </p> <ul> <li> <p> <b>Idempotent</b> -
         * This API is not idempotent.</p> </li> <li> <p> <b>Retry behavior</b> - This is
         * counted as a new API call.</p> </li> <li> <p> <b>Concurrent calls</b> -
         * Concurrent calls are allowed. An offer is sent once per each call.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-webrtc-storage-2018-05-10/JoinStorageSession">AWS
         * API Reference</a></p>
         */
        virtual Model::JoinStorageSessionOutcome JoinStorageSession(const Model::JoinStorageSessionRequest& request) const;

        /**
         * A Callable wrapper for JoinStorageSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename JoinStorageSessionRequestT = Model::JoinStorageSessionRequest>
        Model::JoinStorageSessionOutcomeCallable JoinStorageSessionCallable(const JoinStorageSessionRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoWebRTCStorageClient::JoinStorageSession, request);
        }

        /**
         * An Async wrapper for JoinStorageSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename JoinStorageSessionRequestT = Model::JoinStorageSessionRequest>
        void JoinStorageSessionAsync(const JoinStorageSessionRequestT& request, const JoinStorageSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoWebRTCStorageClient::JoinStorageSession, request, handler, context);
        }

        /**
         * <p> Join the ongoing one way-video and/or multi-way audio WebRTC session as a
         * viewer for an input channel. If there’s no existing session for the channel,
         * create a new streaming session and provide the Amazon Resource Name (ARN) of the
         * signaling channel (<code>channelArn</code>) and client id
         * (<code>clientId</code>). </p> <p>Currently for <code>SINGLE_MASTER</code> type,
         * a video producing device is able to ingest both audio and video media into a
         * stream, while viewers can only ingest audio. Both a video producing device and
         * viewers can join a session first and wait for other participants. While
         * participants are having peer to peer conversations through WebRTC, the ingested
         * media session will be stored into the Kinesis Video Stream. Multiple viewers are
         * able to playback real-time media. </p> <p>Customers can also use existing
         * Kinesis Video Streams features like <code>HLS</code> or <code>DASH</code>
         * playback, Image generation, and more with ingested WebRTC media. If there’s an
         * existing session with the same <code>clientId</code> that's found in the join
         * session request, the new request takes precedence.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-webrtc-storage-2018-05-10/JoinStorageSessionAsViewer">AWS
         * API Reference</a></p>
         */
        virtual Model::JoinStorageSessionAsViewerOutcome JoinStorageSessionAsViewer(const Model::JoinStorageSessionAsViewerRequest& request) const;

        /**
         * A Callable wrapper for JoinStorageSessionAsViewer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename JoinStorageSessionAsViewerRequestT = Model::JoinStorageSessionAsViewerRequest>
        Model::JoinStorageSessionAsViewerOutcomeCallable JoinStorageSessionAsViewerCallable(const JoinStorageSessionAsViewerRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoWebRTCStorageClient::JoinStorageSessionAsViewer, request);
        }

        /**
         * An Async wrapper for JoinStorageSessionAsViewer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename JoinStorageSessionAsViewerRequestT = Model::JoinStorageSessionAsViewerRequest>
        void JoinStorageSessionAsViewerAsync(const JoinStorageSessionAsViewerRequestT& request, const JoinStorageSessionAsViewerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoWebRTCStorageClient::JoinStorageSessionAsViewer, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KinesisVideoWebRTCStorageClient>;
      void init(const KinesisVideoWebRTCStorageClientConfiguration& clientConfiguration);

      KinesisVideoWebRTCStorageClientConfiguration m_clientConfiguration;
      std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase> m_endpointProvider;
  };

} // namespace KinesisVideoWebRTCStorage
} // namespace Aws
