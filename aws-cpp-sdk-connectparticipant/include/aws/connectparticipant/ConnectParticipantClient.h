/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/ConnectParticipantErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connectparticipant/model/CreateParticipantConnectionResult.h>
#include <aws/connectparticipant/model/DisconnectParticipantResult.h>
#include <aws/connectparticipant/model/GetTranscriptResult.h>
#include <aws/connectparticipant/model/SendEventResult.h>
#include <aws/connectparticipant/model/SendMessageResult.h>
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

namespace ConnectParticipant
{

namespace Model
{
        class CreateParticipantConnectionRequest;
        class DisconnectParticipantRequest;
        class GetTranscriptRequest;
        class SendEventRequest;
        class SendMessageRequest;

        typedef Aws::Utils::Outcome<CreateParticipantConnectionResult, ConnectParticipantError> CreateParticipantConnectionOutcome;
        typedef Aws::Utils::Outcome<DisconnectParticipantResult, ConnectParticipantError> DisconnectParticipantOutcome;
        typedef Aws::Utils::Outcome<GetTranscriptResult, ConnectParticipantError> GetTranscriptOutcome;
        typedef Aws::Utils::Outcome<SendEventResult, ConnectParticipantError> SendEventOutcome;
        typedef Aws::Utils::Outcome<SendMessageResult, ConnectParticipantError> SendMessageOutcome;

        typedef std::future<CreateParticipantConnectionOutcome> CreateParticipantConnectionOutcomeCallable;
        typedef std::future<DisconnectParticipantOutcome> DisconnectParticipantOutcomeCallable;
        typedef std::future<GetTranscriptOutcome> GetTranscriptOutcomeCallable;
        typedef std::future<SendEventOutcome> SendEventOutcomeCallable;
        typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
} // namespace Model

  class ConnectParticipantClient;

    typedef std::function<void(const ConnectParticipantClient*, const Model::CreateParticipantConnectionRequest&, const Model::CreateParticipantConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateParticipantConnectionResponseReceivedHandler;
    typedef std::function<void(const ConnectParticipantClient*, const Model::DisconnectParticipantRequest&, const Model::DisconnectParticipantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisconnectParticipantResponseReceivedHandler;
    typedef std::function<void(const ConnectParticipantClient*, const Model::GetTranscriptRequest&, const Model::GetTranscriptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTranscriptResponseReceivedHandler;
    typedef std::function<void(const ConnectParticipantClient*, const Model::SendEventRequest&, const Model::SendEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendEventResponseReceivedHandler;
    typedef std::function<void(const ConnectParticipantClient*, const Model::SendMessageRequest&, const Model::SendMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendMessageResponseReceivedHandler;

  /**
   * <p>Amazon Connect is a cloud-based contact center solution that makes it easy to
   * set up and manage a customer contact center and provide reliable customer
   * engagement at any scale.</p> <p>Amazon Connect enables customer contacts through
   * voice or chat.</p> <p>The APIs described here are used by chat participants,
   * such as agents and customers.</p>
   */
  class AWS_CONNECTPARTICIPANT_API ConnectParticipantClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectParticipantClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectParticipantClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectParticipantClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ConnectParticipantClient();


        /**
         * <p>Creates the participant's connection. Note that ParticipantToken is used for
         * invoking this API instead of ConnectionToken.</p> <p>The participant token is
         * valid for the lifetime of the participant – until the they are part of a
         * contact.</p> <p>The response URL for <code>WEBSOCKET</code> Type has a connect
         * expiry timeout of 100s. Clients must manually connect to the returned websocket
         * URL and subscribe to the desired topic. </p> <p>For chat, you need to publish
         * the following on the established websocket connection:</p> <p>
         * <code>{"topic":"aws/subscribe","content":{"topics":["aws/chat"]}}</code> </p>
         * <p>Upon websocket URL expiry, as specified in the response ConnectionExpiry
         * parameter, clients need to call this API again to obtain a new websocket URL and
         * perform the same steps as before.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/CreateParticipantConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateParticipantConnectionOutcome CreateParticipantConnection(const Model::CreateParticipantConnectionRequest& request) const;

        /**
         * <p>Creates the participant's connection. Note that ParticipantToken is used for
         * invoking this API instead of ConnectionToken.</p> <p>The participant token is
         * valid for the lifetime of the participant – until the they are part of a
         * contact.</p> <p>The response URL for <code>WEBSOCKET</code> Type has a connect
         * expiry timeout of 100s. Clients must manually connect to the returned websocket
         * URL and subscribe to the desired topic. </p> <p>For chat, you need to publish
         * the following on the established websocket connection:</p> <p>
         * <code>{"topic":"aws/subscribe","content":{"topics":["aws/chat"]}}</code> </p>
         * <p>Upon websocket URL expiry, as specified in the response ConnectionExpiry
         * parameter, clients need to call this API again to obtain a new websocket URL and
         * perform the same steps as before.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/CreateParticipantConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateParticipantConnectionOutcomeCallable CreateParticipantConnectionCallable(const Model::CreateParticipantConnectionRequest& request) const;

        /**
         * <p>Creates the participant's connection. Note that ParticipantToken is used for
         * invoking this API instead of ConnectionToken.</p> <p>The participant token is
         * valid for the lifetime of the participant – until the they are part of a
         * contact.</p> <p>The response URL for <code>WEBSOCKET</code> Type has a connect
         * expiry timeout of 100s. Clients must manually connect to the returned websocket
         * URL and subscribe to the desired topic. </p> <p>For chat, you need to publish
         * the following on the established websocket connection:</p> <p>
         * <code>{"topic":"aws/subscribe","content":{"topics":["aws/chat"]}}</code> </p>
         * <p>Upon websocket URL expiry, as specified in the response ConnectionExpiry
         * parameter, clients need to call this API again to obtain a new websocket URL and
         * perform the same steps as before.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/CreateParticipantConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateParticipantConnectionAsync(const Model::CreateParticipantConnectionRequest& request, const CreateParticipantConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disconnects a participant. Note that ConnectionToken is used for invoking
         * this API instead of ParticipantToken.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/DisconnectParticipant">AWS
         * API Reference</a></p>
         */
        virtual Model::DisconnectParticipantOutcome DisconnectParticipant(const Model::DisconnectParticipantRequest& request) const;

        /**
         * <p>Disconnects a participant. Note that ConnectionToken is used for invoking
         * this API instead of ParticipantToken.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/DisconnectParticipant">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisconnectParticipantOutcomeCallable DisconnectParticipantCallable(const Model::DisconnectParticipantRequest& request) const;

        /**
         * <p>Disconnects a participant. Note that ConnectionToken is used for invoking
         * this API instead of ParticipantToken.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/DisconnectParticipant">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisconnectParticipantAsync(const Model::DisconnectParticipantRequest& request, const DisconnectParticipantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a transcript of the session. Note that ConnectionToken is used for
         * invoking this API instead of ParticipantToken.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/GetTranscript">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTranscriptOutcome GetTranscript(const Model::GetTranscriptRequest& request) const;

        /**
         * <p>Retrieves a transcript of the session. Note that ConnectionToken is used for
         * invoking this API instead of ParticipantToken.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/GetTranscript">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTranscriptOutcomeCallable GetTranscriptCallable(const Model::GetTranscriptRequest& request) const;

        /**
         * <p>Retrieves a transcript of the session. Note that ConnectionToken is used for
         * invoking this API instead of ParticipantToken.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/GetTranscript">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTranscriptAsync(const Model::GetTranscriptRequest& request, const GetTranscriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends an event. Note that ConnectionToken is used for invoking this API
         * instead of ParticipantToken.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/SendEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::SendEventOutcome SendEvent(const Model::SendEventRequest& request) const;

        /**
         * <p>Sends an event. Note that ConnectionToken is used for invoking this API
         * instead of ParticipantToken.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/SendEvent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendEventOutcomeCallable SendEventCallable(const Model::SendEventRequest& request) const;

        /**
         * <p>Sends an event. Note that ConnectionToken is used for invoking this API
         * instead of ParticipantToken.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/SendEvent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendEventAsync(const Model::SendEventRequest& request, const SendEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a message. Note that ConnectionToken is used for invoking this API
         * instead of ParticipantToken.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/SendMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendMessageOutcome SendMessage(const Model::SendMessageRequest& request) const;

        /**
         * <p>Sends a message. Note that ConnectionToken is used for invoking this API
         * instead of ParticipantToken.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/SendMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendMessageOutcomeCallable SendMessageCallable(const Model::SendMessageRequest& request) const;

        /**
         * <p>Sends a message. Note that ConnectionToken is used for invoking this API
         * instead of ParticipantToken.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/SendMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendMessageAsync(const Model::SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateParticipantConnectionAsyncHelper(const Model::CreateParticipantConnectionRequest& request, const CreateParticipantConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisconnectParticipantAsyncHelper(const Model::DisconnectParticipantRequest& request, const DisconnectParticipantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTranscriptAsyncHelper(const Model::GetTranscriptRequest& request, const GetTranscriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendEventAsyncHelper(const Model::SendEventRequest& request, const SendEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendMessageAsyncHelper(const Model::SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ConnectParticipant
} // namespace Aws
