/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connectparticipant/ConnectParticipantServiceClientModel.h>

namespace Aws
{
namespace ConnectParticipant
{
  /**
   * <p>Amazon Connect is a cloud-based contact center solution that makes it easy to
   * set up and manage a customer contact center. Amazon Connect enables customer
   * contacts through voice or chat. Use the Amazon Connect Participant Service to
   * manage chat participants, such as agents and customers.</p>
   */
  class AWS_CONNECTPARTICIPANT_API ConnectParticipantClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ConnectParticipantClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectParticipantClient(const Aws::ConnectParticipant::ConnectParticipantClientConfiguration& clientConfiguration = Aws::ConnectParticipant::ConnectParticipantClientConfiguration(),
                                 std::shared_ptr<ConnectParticipantEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectParticipantEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectParticipantClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<ConnectParticipantEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectParticipantEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::ConnectParticipant::ConnectParticipantClientConfiguration& clientConfiguration = Aws::ConnectParticipant::ConnectParticipantClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectParticipantClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<ConnectParticipantEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectParticipantEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::ConnectParticipant::ConnectParticipantClientConfiguration& clientConfiguration = Aws::ConnectParticipant::ConnectParticipantClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectParticipantClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectParticipantClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectParticipantClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ConnectParticipantClient();

        /**
         * <p>Allows you to confirm that the attachment has been uploaded using the
         * pre-signed URL provided in StartAttachmentUpload API. </p>  <p>
         * <code>ConnectionToken</code> is used for invoking this API instead of
         * <code>ParticipantToken</code>.</p>  <p>The Amazon Connect Participant
         * Service APIs do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/CompleteAttachmentUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteAttachmentUploadOutcome CompleteAttachmentUpload(const Model::CompleteAttachmentUploadRequest& request) const;

        /**
         * A Callable wrapper for CompleteAttachmentUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CompleteAttachmentUploadOutcomeCallable CompleteAttachmentUploadCallable(const Model::CompleteAttachmentUploadRequest& request) const;

        /**
         * An Async wrapper for CompleteAttachmentUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CompleteAttachmentUploadAsync(const Model::CompleteAttachmentUploadRequest& request, const CompleteAttachmentUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the participant's connection. </p>  <p>
         * <code>ParticipantToken</code> is used for invoking this API instead of
         * <code>ConnectionToken</code>.</p>  <p>The participant token is valid for
         * the lifetime of the participant – until they are part of a contact.</p> <p>The
         * response URL for <code>WEBSOCKET</code> Type has a connect expiry timeout of
         * 100s. Clients must manually connect to the returned websocket URL and subscribe
         * to the desired topic. </p> <p>For chat, you need to publish the following on the
         * established websocket connection:</p> <p>
         * <code>{"topic":"aws/subscribe","content":{"topics":["aws/chat"]}}</code> </p>
         * <p>Upon websocket URL expiry, as specified in the response ConnectionExpiry
         * parameter, clients need to call this API again to obtain a new websocket URL and
         * perform the same steps as before.</p> <p> <b>Message streaming support</b>: This
         * API can also be used together with the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartContactStreaming.html">StartContactStreaming</a>
         * API to create a participant connection for chat contacts that are not using a
         * websocket. For more information about message streaming, <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-message-streaming.html">Enable
         * real-time chat message streaming</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p> <p> <b>Feature specifications</b>: For information about feature
         * specifications, such as the allowed number of open websocket connections per
         * participant, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html#feature-limits">Feature
         * specifications</a> in the <i>Amazon Connect Administrator Guide</i>. </p> 
         * <p>The Amazon Connect Participant Service APIs do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/CreateParticipantConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateParticipantConnectionOutcome CreateParticipantConnection(const Model::CreateParticipantConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateParticipantConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateParticipantConnectionOutcomeCallable CreateParticipantConnectionCallable(const Model::CreateParticipantConnectionRequest& request) const;

        /**
         * An Async wrapper for CreateParticipantConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateParticipantConnectionAsync(const Model::CreateParticipantConnectionRequest& request, const CreateParticipantConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disconnects a participant. </p>  <p> <code>ConnectionToken</code> is
         * used for invoking this API instead of <code>ParticipantToken</code>.</p> 
         * <p>The Amazon Connect Participant Service APIs do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/DisconnectParticipant">AWS
         * API Reference</a></p>
         */
        virtual Model::DisconnectParticipantOutcome DisconnectParticipant(const Model::DisconnectParticipantRequest& request) const;

        /**
         * A Callable wrapper for DisconnectParticipant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisconnectParticipantOutcomeCallable DisconnectParticipantCallable(const Model::DisconnectParticipantRequest& request) const;

        /**
         * An Async wrapper for DisconnectParticipant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisconnectParticipantAsync(const Model::DisconnectParticipantRequest& request, const DisconnectParticipantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a pre-signed URL for download of a completed attachment. This is an
         * asynchronous API for use with active contacts.</p>  <p>
         * <code>ConnectionToken</code> is used for invoking this API instead of
         * <code>ParticipantToken</code>.</p>  <p>The Amazon Connect Participant
         * Service APIs do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/GetAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAttachmentOutcome GetAttachment(const Model::GetAttachmentRequest& request) const;

        /**
         * A Callable wrapper for GetAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAttachmentOutcomeCallable GetAttachmentCallable(const Model::GetAttachmentRequest& request) const;

        /**
         * An Async wrapper for GetAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAttachmentAsync(const Model::GetAttachmentRequest& request, const GetAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a transcript of the session, including details about any
         * attachments. </p>  <p> <code>ConnectionToken</code> is used for invoking
         * this API instead of <code>ParticipantToken</code>.</p>  <p>The Amazon
         * Connect Participant Service APIs do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/GetTranscript">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTranscriptOutcome GetTranscript(const Model::GetTranscriptRequest& request) const;

        /**
         * A Callable wrapper for GetTranscript that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTranscriptOutcomeCallable GetTranscriptCallable(const Model::GetTranscriptRequest& request) const;

        /**
         * An Async wrapper for GetTranscript that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTranscriptAsync(const Model::GetTranscriptRequest& request, const GetTranscriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends an event. </p>  <p> <code>ConnectionToken</code> is used for
         * invoking this API instead of <code>ParticipantToken</code>.</p>  <p>The
         * Amazon Connect Participant Service APIs do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/SendEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::SendEventOutcome SendEvent(const Model::SendEventRequest& request) const;

        /**
         * A Callable wrapper for SendEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendEventOutcomeCallable SendEventCallable(const Model::SendEventRequest& request) const;

        /**
         * An Async wrapper for SendEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendEventAsync(const Model::SendEventRequest& request, const SendEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a message.</p>  <p> <code>ConnectionToken</code> is used for
         * invoking this API instead of <code>ParticipantToken</code>.</p>  <p>The
         * Amazon Connect Participant Service APIs do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/SendMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendMessageOutcome SendMessage(const Model::SendMessageRequest& request) const;

        /**
         * A Callable wrapper for SendMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendMessageOutcomeCallable SendMessageCallable(const Model::SendMessageRequest& request) const;

        /**
         * An Async wrapper for SendMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendMessageAsync(const Model::SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a pre-signed Amazon S3 URL in response for uploading the file
         * directly to S3.</p>  <p> <code>ConnectionToken</code> is used for invoking
         * this API instead of <code>ParticipantToken</code>.</p>  <p>The Amazon
         * Connect Participant Service APIs do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/StartAttachmentUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAttachmentUploadOutcome StartAttachmentUpload(const Model::StartAttachmentUploadRequest& request) const;

        /**
         * A Callable wrapper for StartAttachmentUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAttachmentUploadOutcomeCallable StartAttachmentUploadCallable(const Model::StartAttachmentUploadRequest& request) const;

        /**
         * An Async wrapper for StartAttachmentUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAttachmentUploadAsync(const Model::StartAttachmentUploadRequest& request, const StartAttachmentUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConnectParticipantEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ConnectParticipantClient>;
      void init(const ConnectParticipantClientConfiguration& clientConfiguration);

      ConnectParticipantClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ConnectParticipantEndpointProviderBase> m_endpointProvider;
  };

} // namespace ConnectParticipant
} // namespace Aws
