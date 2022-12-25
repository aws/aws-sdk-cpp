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
   * <p> </p>
   */
  class AWS_KINESISVIDEOWEBRTCSTORAGE_API KinesisVideoWebRTCStorageClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<KinesisVideoWebRTCStorageClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoWebRTCStorageClient(const Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration& clientConfiguration = Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration(),
                                        std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoWebRTCStorageClient(const Aws::Auth::AWSCredentials& credentials,
                                        std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG),
                                        const Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration& clientConfiguration = Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoWebRTCStorageClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                        std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG),
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
         * <p> Join the ongoing one way-video and/or multi-way audio WebRTC session as a
         * video producing device for an input channel. If there’s no existing session for
         * the channel, a new streaming session needs to be created, and the Amazon
         * Resource Name (ARN) of the signaling channel must be provided. </p> <p>Currently
         * for the <code>SINGLE_MASTER</code> type, a video producing device is able to
         * ingest both audio and video media into a stream, while viewers can only ingest
         * audio. Both a video producing device and viewers can join the session first, and
         * wait for other participants.</p> <p>While participants are having peer to peer
         * conversations through webRTC, the ingested media session will be stored into the
         * Kinesis Video Stream. Multiple viewers are able to playback real-time media.</p>
         * <p>Customers can also use existing Kinesis Video Streams features like
         * <code>HLS</code> or <code>DASH</code> playback, Image generation, and more with
         * ingested WebRTC media.</p>  <p>Assume that only one video producing device
         * client can be associated with a session for the channel. If more than one client
         * joins the session of a specific channel as a video producing device, the most
         * recent client request takes precedence. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-webrtc-storage-2018-05-10/JoinStorageSession">AWS
         * API Reference</a></p>
         */
        virtual Model::JoinStorageSessionOutcome JoinStorageSession(const Model::JoinStorageSessionRequest& request) const;

        /**
         * A Callable wrapper for JoinStorageSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::JoinStorageSessionOutcomeCallable JoinStorageSessionCallable(const Model::JoinStorageSessionRequest& request) const;

        /**
         * An Async wrapper for JoinStorageSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void JoinStorageSessionAsync(const Model::JoinStorageSessionRequest& request, const JoinStorageSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KinesisVideoWebRTCStorageClient>;
      void init(const KinesisVideoWebRTCStorageClientConfiguration& clientConfiguration);

      KinesisVideoWebRTCStorageClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase> m_endpointProvider;
  };

} // namespace KinesisVideoWebRTCStorage
} // namespace Aws
