/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannels_EXPORTS.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis-video-signaling/model/GetIceServerConfigResult.h>
#include <aws/kinesis-video-signaling/model/SendAlexaOfferToMasterResult.h>
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

namespace KinesisVideoSignalingChannels
{

namespace Model
{
        class GetIceServerConfigRequest;
        class SendAlexaOfferToMasterRequest;

        typedef Aws::Utils::Outcome<GetIceServerConfigResult, KinesisVideoSignalingChannelsError> GetIceServerConfigOutcome;
        typedef Aws::Utils::Outcome<SendAlexaOfferToMasterResult, KinesisVideoSignalingChannelsError> SendAlexaOfferToMasterOutcome;

        typedef std::future<GetIceServerConfigOutcome> GetIceServerConfigOutcomeCallable;
        typedef std::future<SendAlexaOfferToMasterOutcome> SendAlexaOfferToMasterOutcomeCallable;
} // namespace Model

  class KinesisVideoSignalingChannelsClient;

    typedef std::function<void(const KinesisVideoSignalingChannelsClient*, const Model::GetIceServerConfigRequest&, const Model::GetIceServerConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIceServerConfigResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoSignalingChannelsClient*, const Model::SendAlexaOfferToMasterRequest&, const Model::SendAlexaOfferToMasterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendAlexaOfferToMasterResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoSignalingChannelsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoSignalingChannelsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoSignalingChannelsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~KinesisVideoSignalingChannelsClient();


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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIceServerConfigOutcomeCallable GetIceServerConfigCallable(const Model::GetIceServerConfigRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIceServerConfigAsync(const Model::GetIceServerConfigRequest& request, const GetIceServerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendAlexaOfferToMasterOutcomeCallable SendAlexaOfferToMasterCallable(const Model::SendAlexaOfferToMasterRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendAlexaOfferToMasterAsync(const Model::SendAlexaOfferToMasterRequest& request, const SendAlexaOfferToMasterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void GetIceServerConfigAsyncHelper(const Model::GetIceServerConfigRequest& request, const GetIceServerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendAlexaOfferToMasterAsyncHelper(const Model::SendAlexaOfferToMasterRequest& request, const SendAlexaOfferToMasterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace KinesisVideoSignalingChannels
} // namespace Aws
