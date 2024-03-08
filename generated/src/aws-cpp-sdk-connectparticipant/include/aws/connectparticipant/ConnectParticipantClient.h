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
   * <p>Amazon Connect is an easy-to-use omnichannel cloud contact center service
   * that enables companies of any size to deliver superior customer service at a
   * lower cost. Amazon Connect communications capabilities make it easy for
   * companies to deliver personalized interactions across communication channels,
   * including chat. </p> <p>Use the Amazon Connect Participant Service to manage
   * participants (for example, agents, customers, and managers listening in), and to
   * send messages and events within a chat contact. The APIs in the service enable
   * the following: sending chat messages, attachment sharing, managing a
   * participant's connection state and message events, and retrieving chat
   * transcripts.</p>
   */
  class AWS_CONNECTPARTICIPANT_API ConnectParticipantClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ConnectParticipantClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ConnectParticipantClientConfiguration ClientConfigurationType;
      typedef ConnectParticipantEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectParticipantClient(const Aws::ConnectParticipant::ConnectParticipantClientConfiguration& clientConfiguration = Aws::ConnectParticipant::ConnectParticipantClientConfiguration(),
                                 std::shared_ptr<ConnectParticipantEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectParticipantClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<ConnectParticipantEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::ConnectParticipant::ConnectParticipantClientConfiguration& clientConfiguration = Aws::ConnectParticipant::ConnectParticipantClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectParticipantClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<ConnectParticipantEndpointProviderBase> endpointProvider = nullptr,
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
         * pre-signed URL provided in StartAttachmentUpload API. A conflict exception is
         * thrown when an attachment with that identifier is already being uploaded.</p>
         *  <p> <code>ConnectionToken</code> is used for invoking this API instead of
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
        template<typename CompleteAttachmentUploadRequestT = Model::CompleteAttachmentUploadRequest>
        Model::CompleteAttachmentUploadOutcomeCallable CompleteAttachmentUploadCallable(const CompleteAttachmentUploadRequestT& request) const
        {
            return SubmitCallable(&ConnectParticipantClient::CompleteAttachmentUpload, request);
        }

        /**
         * An Async wrapper for CompleteAttachmentUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CompleteAttachmentUploadRequestT = Model::CompleteAttachmentUploadRequest>
        void CompleteAttachmentUploadAsync(const CompleteAttachmentUploadRequestT& request, const CompleteAttachmentUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectParticipantClient::CompleteAttachmentUpload, request, handler, context);
        }

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
        template<typename CreateParticipantConnectionRequestT = Model::CreateParticipantConnectionRequest>
        Model::CreateParticipantConnectionOutcomeCallable CreateParticipantConnectionCallable(const CreateParticipantConnectionRequestT& request) const
        {
            return SubmitCallable(&ConnectParticipantClient::CreateParticipantConnection, request);
        }

        /**
         * An Async wrapper for CreateParticipantConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateParticipantConnectionRequestT = Model::CreateParticipantConnectionRequest>
        void CreateParticipantConnectionAsync(const CreateParticipantConnectionRequestT& request, const CreateParticipantConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectParticipantClient::CreateParticipantConnection, request, handler, context);
        }

        /**
         * <p>Retrieves the view for the specified view token.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/DescribeView">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeViewOutcome DescribeView(const Model::DescribeViewRequest& request) const;

        /**
         * A Callable wrapper for DescribeView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeViewRequestT = Model::DescribeViewRequest>
        Model::DescribeViewOutcomeCallable DescribeViewCallable(const DescribeViewRequestT& request) const
        {
            return SubmitCallable(&ConnectParticipantClient::DescribeView, request);
        }

        /**
         * An Async wrapper for DescribeView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeViewRequestT = Model::DescribeViewRequest>
        void DescribeViewAsync(const DescribeViewRequestT& request, const DescribeViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectParticipantClient::DescribeView, request, handler, context);
        }

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
        template<typename DisconnectParticipantRequestT = Model::DisconnectParticipantRequest>
        Model::DisconnectParticipantOutcomeCallable DisconnectParticipantCallable(const DisconnectParticipantRequestT& request) const
        {
            return SubmitCallable(&ConnectParticipantClient::DisconnectParticipant, request);
        }

        /**
         * An Async wrapper for DisconnectParticipant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisconnectParticipantRequestT = Model::DisconnectParticipantRequest>
        void DisconnectParticipantAsync(const DisconnectParticipantRequestT& request, const DisconnectParticipantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectParticipantClient::DisconnectParticipant, request, handler, context);
        }

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
        template<typename GetAttachmentRequestT = Model::GetAttachmentRequest>
        Model::GetAttachmentOutcomeCallable GetAttachmentCallable(const GetAttachmentRequestT& request) const
        {
            return SubmitCallable(&ConnectParticipantClient::GetAttachment, request);
        }

        /**
         * An Async wrapper for GetAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAttachmentRequestT = Model::GetAttachmentRequest>
        void GetAttachmentAsync(const GetAttachmentRequestT& request, const GetAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectParticipantClient::GetAttachment, request, handler, context);
        }

        /**
         * <p>Retrieves a transcript of the session, including details about any
         * attachments. For information about accessing past chat contact transcripts for a
         * persistent chat, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html">Enable
         * persistent chat</a>. </p> <p>If you have a process that consumes events in the
         * transcript of an chat that has ended, note that chat transcripts contain the
         * following event content types if the event has occurred during the chat
         * session:</p> <ul> <li> <p>
         * <code>application/vnd.amazonaws.connect.event.participant.left</code> </p> </li>
         * <li> <p> <code>application/vnd.amazonaws.connect.event.participant.joined</code>
         * </p> </li> <li> <p>
         * <code>application/vnd.amazonaws.connect.event.chat.ended</code> </p> </li> <li>
         * <p> <code>application/vnd.amazonaws.connect.event.transfer.succeeded</code> </p>
         * </li> <li> <p>
         * <code>application/vnd.amazonaws.connect.event.transfer.failed</code> </p> </li>
         * </ul>  <p> <code>ConnectionToken</code> is used for invoking this API
         * instead of <code>ParticipantToken</code>.</p>  <p>The Amazon Connect
         * Participant Service APIs do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/GetTranscript">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTranscriptOutcome GetTranscript(const Model::GetTranscriptRequest& request) const;

        /**
         * A Callable wrapper for GetTranscript that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTranscriptRequestT = Model::GetTranscriptRequest>
        Model::GetTranscriptOutcomeCallable GetTranscriptCallable(const GetTranscriptRequestT& request) const
        {
            return SubmitCallable(&ConnectParticipantClient::GetTranscript, request);
        }

        /**
         * An Async wrapper for GetTranscript that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTranscriptRequestT = Model::GetTranscriptRequest>
        void GetTranscriptAsync(const GetTranscriptRequestT& request, const GetTranscriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectParticipantClient::GetTranscript, request, handler, context);
        }

        /**
         *  <p>The
         * <code>application/vnd.amazonaws.connect.event.connection.acknowledged</code>
         * ContentType will no longer be supported starting December 31, 2024. This event
         * has been migrated to the <a
         * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
         * API using the <code>ConnectParticipant</code> field.</p>  <p>Sends an
         * event. Message receipts are not supported when there are more than two active
         * participants in the chat. Using the SendEvent API for message receipts when a
         * supervisor is barged-in will result in a conflict exception.</p>  <p>
         * <code>ConnectionToken</code> is used for invoking this API instead of
         * <code>ParticipantToken</code>.</p>  <p>The Amazon Connect Participant
         * Service APIs do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/SendEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::SendEventOutcome SendEvent(const Model::SendEventRequest& request) const;

        /**
         * A Callable wrapper for SendEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendEventRequestT = Model::SendEventRequest>
        Model::SendEventOutcomeCallable SendEventCallable(const SendEventRequestT& request) const
        {
            return SubmitCallable(&ConnectParticipantClient::SendEvent, request);
        }

        /**
         * An Async wrapper for SendEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendEventRequestT = Model::SendEventRequest>
        void SendEventAsync(const SendEventRequestT& request, const SendEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectParticipantClient::SendEvent, request, handler, context);
        }

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
        template<typename SendMessageRequestT = Model::SendMessageRequest>
        Model::SendMessageOutcomeCallable SendMessageCallable(const SendMessageRequestT& request) const
        {
            return SubmitCallable(&ConnectParticipantClient::SendMessage, request);
        }

        /**
         * An Async wrapper for SendMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendMessageRequestT = Model::SendMessageRequest>
        void SendMessageAsync(const SendMessageRequestT& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectParticipantClient::SendMessage, request, handler, context);
        }

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
        template<typename StartAttachmentUploadRequestT = Model::StartAttachmentUploadRequest>
        Model::StartAttachmentUploadOutcomeCallable StartAttachmentUploadCallable(const StartAttachmentUploadRequestT& request) const
        {
            return SubmitCallable(&ConnectParticipantClient::StartAttachmentUpload, request);
        }

        /**
         * An Async wrapper for StartAttachmentUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAttachmentUploadRequestT = Model::StartAttachmentUploadRequest>
        void StartAttachmentUploadAsync(const StartAttachmentUploadRequestT& request, const StartAttachmentUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectParticipantClient::StartAttachmentUpload, request, handler, context);
        }


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
