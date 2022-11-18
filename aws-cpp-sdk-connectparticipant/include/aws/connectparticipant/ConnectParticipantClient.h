/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connectparticipant/ConnectParticipantServiceClientModel.h>
#include <aws/connectparticipant/ConnectParticipantLegacyAsyncMacros.h>

namespace Aws
{
namespace ConnectParticipant
{
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
         * <p>Allows you to confirm that the attachment has been uploaded using the
         * pre-signed URL provided in StartAttachmentUpload API. </p> <p>The Amazon Connect
         * Participant Service APIs do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/CompleteAttachmentUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteAttachmentUploadOutcome CompleteAttachmentUpload(const Model::CompleteAttachmentUploadRequest& request) const;


        /**
         * <p>Creates the participant's connection. Note that ParticipantToken is used for
         * invoking this API instead of ConnectionToken.</p> <p>The participant token is
         * valid for the lifetime of the participant – until they are part of a
         * contact.</p> <p>The response URL for <code>WEBSOCKET</code> Type has a connect
         * expiry timeout of 100s. Clients must manually connect to the returned websocket
         * URL and subscribe to the desired topic. </p> <p>For chat, you need to publish
         * the following on the established websocket connection:</p> <p>
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
         * <p>Disconnects a participant. Note that ConnectionToken is used for invoking
         * this API instead of ParticipantToken.</p> <p>The Amazon Connect Participant
         * Service APIs do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/DisconnectParticipant">AWS
         * API Reference</a></p>
         */
        virtual Model::DisconnectParticipantOutcome DisconnectParticipant(const Model::DisconnectParticipantRequest& request) const;


        /**
         * <p>Provides a pre-signed URL for download of a completed attachment. This is an
         * asynchronous API for use with active contacts.</p> <p>The Amazon Connect
         * Participant Service APIs do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/GetAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAttachmentOutcome GetAttachment(const Model::GetAttachmentRequest& request) const;


        /**
         * <p>Retrieves a transcript of the session, including details about any
         * attachments. Note that ConnectionToken is used for invoking this API instead of
         * ParticipantToken.</p> <p>The Amazon Connect Participant Service APIs do not use
         * <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/GetTranscript">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTranscriptOutcome GetTranscript(const Model::GetTranscriptRequest& request) const;


        /**
         * <p>Sends an event. Note that ConnectionToken is used for invoking this API
         * instead of ParticipantToken.</p> <p>The Amazon Connect Participant Service APIs
         * do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/SendEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::SendEventOutcome SendEvent(const Model::SendEventRequest& request) const;


        /**
         * <p>Sends a message. Note that ConnectionToken is used for invoking this API
         * instead of ParticipantToken.</p> <p>The Amazon Connect Participant Service APIs
         * do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/SendMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendMessageOutcome SendMessage(const Model::SendMessageRequest& request) const;


        /**
         * <p>Provides a pre-signed Amazon S3 URL in response for uploading the file
         * directly to S3.</p> <p>The Amazon Connect Participant Service APIs do not use <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4 authentication</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/StartAttachmentUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAttachmentUploadOutcome StartAttachmentUpload(const Model::StartAttachmentUploadRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConnectParticipantEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ConnectParticipantClientConfiguration& clientConfiguration);

      ConnectParticipantClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ConnectParticipantEndpointProviderBase> m_endpointProvider;
  };

} // namespace ConnectParticipant
} // namespace Aws
