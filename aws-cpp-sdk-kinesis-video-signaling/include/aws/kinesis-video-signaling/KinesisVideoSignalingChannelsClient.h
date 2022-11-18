/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannels_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsServiceClientModel.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsLegacyAsyncMacros.h>

namespace Aws
{
namespace KinesisVideoSignalingChannels
{
  /**
   * <p>Kinesis Video Streams Signaling Service is a intermediate service that
   * establishes a communication channel for discovering peers, transmitting offers
   * and answers in order to establish peer-to-peer connection in webRTC
   * technology.</p>
   */
  class AWS_KINESISVIDEOSIGNALINGCHANNELS_API KinesisVideoSignalingChannelsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoSignalingChannelsClient(const Aws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsClientConfiguration& clientConfiguration = Aws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsClientConfiguration(),
                                            std::shared_ptr<KinesisVideoSignalingChannelsEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoSignalingChannelsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoSignalingChannelsClient(const Aws::Auth::AWSCredentials& credentials,
                                            std::shared_ptr<KinesisVideoSignalingChannelsEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoSignalingChannelsEndpointProvider>(ALLOCATION_TAG),
                                            const Aws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsClientConfiguration& clientConfiguration = Aws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoSignalingChannelsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                            std::shared_ptr<KinesisVideoSignalingChannelsEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoSignalingChannelsEndpointProvider>(ALLOCATION_TAG),
                                            const Aws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsClientConfiguration& clientConfiguration = Aws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoSignalingChannelsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoSignalingChannelsClient(const Aws::Auth::AWSCredentials& credentials,
                                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoSignalingChannelsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KinesisVideoSignalingChannelsClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Gets the Interactive Connectivity Establishment (ICE) server configuration
         * information, including URIs, username, and password which can be used to
         * configure the WebRTC connection. The ICE component uses this configuration
         * information to setup the WebRTC connection, including authenticating with the
         * Traversal Using Relays around NAT (TURN) relay server. </p> <p>TURN is a
         * protocol that is used to improve the connectivity of peer-to-peer applications.
         * By providing a cloud-based relay service, TURN ensures that a connection can be
         * established even when one or more peers are incapable of a direct peer-to-peer
         * connection. For more information, see <a
         * href="https://tools.ietf.org/html/draft-uberti-rtcweb-turn-rest-00">A REST API
         * For Access To TURN Services</a>.</p> <p> You can invoke this API to establish a
         * fallback mechanism in case either of the peers is unable to establish a direct
         * peer-to-peer connection over a signaling channel. You must specify either a
         * signaling channel ARN or the client ID in order to invoke this
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-signaling-2019-12-04/GetIceServerConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIceServerConfigOutcome GetIceServerConfig(const Model::GetIceServerConfigRequest& request) const;


        /**
         * <p>This API allows you to connect WebRTC-enabled devices with Alexa display
         * devices. When invoked, it sends the Alexa Session Description Protocol (SDP)
         * offer to the master peer. The offer is delivered as soon as the master is
         * connected to the specified signaling channel. This API returns the SDP answer
         * from the connected master. If the master is not connected to the signaling
         * channel, redelivery requests are made until the message expires.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-signaling-2019-12-04/SendAlexaOfferToMaster">AWS
         * API Reference</a></p>
         */
        virtual Model::SendAlexaOfferToMasterOutcome SendAlexaOfferToMaster(const Model::SendAlexaOfferToMasterRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KinesisVideoSignalingChannelsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const KinesisVideoSignalingChannelsClientConfiguration& clientConfiguration);

      KinesisVideoSignalingChannelsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<KinesisVideoSignalingChannelsEndpointProviderBase> m_endpointProvider;
  };

} // namespace KinesisVideoSignalingChannels
} // namespace Aws
