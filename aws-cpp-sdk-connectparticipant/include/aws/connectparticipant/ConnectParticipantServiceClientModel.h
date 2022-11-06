/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/connectparticipant/ConnectParticipantErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/connectparticipant/ConnectParticipantEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ConnectParticipantClient header */
#include <aws/connectparticipant/model/CompleteAttachmentUploadResult.h>
#include <aws/connectparticipant/model/CreateParticipantConnectionResult.h>
#include <aws/connectparticipant/model/DisconnectParticipantResult.h>
#include <aws/connectparticipant/model/GetAttachmentResult.h>
#include <aws/connectparticipant/model/GetTranscriptResult.h>
#include <aws/connectparticipant/model/SendEventResult.h>
#include <aws/connectparticipant/model/SendMessageResult.h>
#include <aws/connectparticipant/model/StartAttachmentUploadResult.h>
/* End of service model headers required in ConnectParticipantClient header */

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
    using ConnectParticipantClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ConnectParticipantEndpointProviderBase = Aws::ConnectParticipant::Endpoint::ConnectParticipantEndpointProviderBase;
    using ConnectParticipantEndpointProvider = Aws::ConnectParticipant::Endpoint::ConnectParticipantEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ConnectParticipantClient header */
      class CompleteAttachmentUploadRequest;
      class CreateParticipantConnectionRequest;
      class DisconnectParticipantRequest;
      class GetAttachmentRequest;
      class GetTranscriptRequest;
      class SendEventRequest;
      class SendMessageRequest;
      class StartAttachmentUploadRequest;
      /* End of service model forward declarations required in ConnectParticipantClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CompleteAttachmentUploadResult, ConnectParticipantError> CompleteAttachmentUploadOutcome;
      typedef Aws::Utils::Outcome<CreateParticipantConnectionResult, ConnectParticipantError> CreateParticipantConnectionOutcome;
      typedef Aws::Utils::Outcome<DisconnectParticipantResult, ConnectParticipantError> DisconnectParticipantOutcome;
      typedef Aws::Utils::Outcome<GetAttachmentResult, ConnectParticipantError> GetAttachmentOutcome;
      typedef Aws::Utils::Outcome<GetTranscriptResult, ConnectParticipantError> GetTranscriptOutcome;
      typedef Aws::Utils::Outcome<SendEventResult, ConnectParticipantError> SendEventOutcome;
      typedef Aws::Utils::Outcome<SendMessageResult, ConnectParticipantError> SendMessageOutcome;
      typedef Aws::Utils::Outcome<StartAttachmentUploadResult, ConnectParticipantError> StartAttachmentUploadOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CompleteAttachmentUploadOutcome> CompleteAttachmentUploadOutcomeCallable;
      typedef std::future<CreateParticipantConnectionOutcome> CreateParticipantConnectionOutcomeCallable;
      typedef std::future<DisconnectParticipantOutcome> DisconnectParticipantOutcomeCallable;
      typedef std::future<GetAttachmentOutcome> GetAttachmentOutcomeCallable;
      typedef std::future<GetTranscriptOutcome> GetTranscriptOutcomeCallable;
      typedef std::future<SendEventOutcome> SendEventOutcomeCallable;
      typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
      typedef std::future<StartAttachmentUploadOutcome> StartAttachmentUploadOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ConnectParticipantClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ConnectParticipantClient*, const Model::CompleteAttachmentUploadRequest&, const Model::CompleteAttachmentUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompleteAttachmentUploadResponseReceivedHandler;
    typedef std::function<void(const ConnectParticipantClient*, const Model::CreateParticipantConnectionRequest&, const Model::CreateParticipantConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateParticipantConnectionResponseReceivedHandler;
    typedef std::function<void(const ConnectParticipantClient*, const Model::DisconnectParticipantRequest&, const Model::DisconnectParticipantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisconnectParticipantResponseReceivedHandler;
    typedef std::function<void(const ConnectParticipantClient*, const Model::GetAttachmentRequest&, const Model::GetAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAttachmentResponseReceivedHandler;
    typedef std::function<void(const ConnectParticipantClient*, const Model::GetTranscriptRequest&, const Model::GetTranscriptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTranscriptResponseReceivedHandler;
    typedef std::function<void(const ConnectParticipantClient*, const Model::SendEventRequest&, const Model::SendEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendEventResponseReceivedHandler;
    typedef std::function<void(const ConnectParticipantClient*, const Model::SendMessageRequest&, const Model::SendMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendMessageResponseReceivedHandler;
    typedef std::function<void(const ConnectParticipantClient*, const Model::StartAttachmentUploadRequest&, const Model::StartAttachmentUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAttachmentUploadResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ConnectParticipant
} // namespace Aws
