/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ChimeSDKMeetingsClient header */
#include <aws/chime-sdk-meetings/model/BatchCreateAttendeeResult.h>
#include <aws/chime-sdk-meetings/model/CreateAttendeeResult.h>
#include <aws/chime-sdk-meetings/model/CreateMeetingResult.h>
#include <aws/chime-sdk-meetings/model/CreateMeetingWithAttendeesResult.h>
#include <aws/chime-sdk-meetings/model/GetAttendeeResult.h>
#include <aws/chime-sdk-meetings/model/GetMeetingResult.h>
#include <aws/chime-sdk-meetings/model/ListAttendeesResult.h>
#include <aws/chime-sdk-meetings/model/ListTagsForResourceResult.h>
#include <aws/chime-sdk-meetings/model/TagResourceResult.h>
#include <aws/chime-sdk-meetings/model/UntagResourceResult.h>
#include <aws/chime-sdk-meetings/model/UpdateAttendeeCapabilitiesResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ChimeSDKMeetingsClient header */

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

  namespace ChimeSDKMeetings
  {
    using ChimeSDKMeetingsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ChimeSDKMeetingsEndpointProviderBase = Aws::ChimeSDKMeetings::Endpoint::ChimeSDKMeetingsEndpointProviderBase;
    using ChimeSDKMeetingsEndpointProvider = Aws::ChimeSDKMeetings::Endpoint::ChimeSDKMeetingsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ChimeSDKMeetingsClient header */
      class BatchCreateAttendeeRequest;
      class BatchUpdateAttendeeCapabilitiesExceptRequest;
      class CreateAttendeeRequest;
      class CreateMeetingRequest;
      class CreateMeetingWithAttendeesRequest;
      class DeleteAttendeeRequest;
      class DeleteMeetingRequest;
      class GetAttendeeRequest;
      class GetMeetingRequest;
      class ListAttendeesRequest;
      class ListTagsForResourceRequest;
      class StartMeetingTranscriptionRequest;
      class StopMeetingTranscriptionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAttendeeCapabilitiesRequest;
      /* End of service model forward declarations required in ChimeSDKMeetingsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchCreateAttendeeResult, ChimeSDKMeetingsError> BatchCreateAttendeeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMeetingsError> BatchUpdateAttendeeCapabilitiesExceptOutcome;
      typedef Aws::Utils::Outcome<CreateAttendeeResult, ChimeSDKMeetingsError> CreateAttendeeOutcome;
      typedef Aws::Utils::Outcome<CreateMeetingResult, ChimeSDKMeetingsError> CreateMeetingOutcome;
      typedef Aws::Utils::Outcome<CreateMeetingWithAttendeesResult, ChimeSDKMeetingsError> CreateMeetingWithAttendeesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMeetingsError> DeleteAttendeeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMeetingsError> DeleteMeetingOutcome;
      typedef Aws::Utils::Outcome<GetAttendeeResult, ChimeSDKMeetingsError> GetAttendeeOutcome;
      typedef Aws::Utils::Outcome<GetMeetingResult, ChimeSDKMeetingsError> GetMeetingOutcome;
      typedef Aws::Utils::Outcome<ListAttendeesResult, ChimeSDKMeetingsError> ListAttendeesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ChimeSDKMeetingsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMeetingsError> StartMeetingTranscriptionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMeetingsError> StopMeetingTranscriptionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ChimeSDKMeetingsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ChimeSDKMeetingsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAttendeeCapabilitiesResult, ChimeSDKMeetingsError> UpdateAttendeeCapabilitiesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchCreateAttendeeOutcome> BatchCreateAttendeeOutcomeCallable;
      typedef std::future<BatchUpdateAttendeeCapabilitiesExceptOutcome> BatchUpdateAttendeeCapabilitiesExceptOutcomeCallable;
      typedef std::future<CreateAttendeeOutcome> CreateAttendeeOutcomeCallable;
      typedef std::future<CreateMeetingOutcome> CreateMeetingOutcomeCallable;
      typedef std::future<CreateMeetingWithAttendeesOutcome> CreateMeetingWithAttendeesOutcomeCallable;
      typedef std::future<DeleteAttendeeOutcome> DeleteAttendeeOutcomeCallable;
      typedef std::future<DeleteMeetingOutcome> DeleteMeetingOutcomeCallable;
      typedef std::future<GetAttendeeOutcome> GetAttendeeOutcomeCallable;
      typedef std::future<GetMeetingOutcome> GetMeetingOutcomeCallable;
      typedef std::future<ListAttendeesOutcome> ListAttendeesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartMeetingTranscriptionOutcome> StartMeetingTranscriptionOutcomeCallable;
      typedef std::future<StopMeetingTranscriptionOutcome> StopMeetingTranscriptionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAttendeeCapabilitiesOutcome> UpdateAttendeeCapabilitiesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ChimeSDKMeetingsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::BatchCreateAttendeeRequest&, const Model::BatchCreateAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::BatchUpdateAttendeeCapabilitiesExceptRequest&, const Model::BatchUpdateAttendeeCapabilitiesExceptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateAttendeeCapabilitiesExceptResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::CreateAttendeeRequest&, const Model::CreateAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::CreateMeetingRequest&, const Model::CreateMeetingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMeetingResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::CreateMeetingWithAttendeesRequest&, const Model::CreateMeetingWithAttendeesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMeetingWithAttendeesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::DeleteAttendeeRequest&, const Model::DeleteAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::DeleteMeetingRequest&, const Model::DeleteMeetingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMeetingResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::GetAttendeeRequest&, const Model::GetAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::GetMeetingRequest&, const Model::GetMeetingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMeetingResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::ListAttendeesRequest&, const Model::ListAttendeesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttendeesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::StartMeetingTranscriptionRequest&, const Model::StartMeetingTranscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMeetingTranscriptionResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::StopMeetingTranscriptionRequest&, const Model::StopMeetingTranscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopMeetingTranscriptionResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::UpdateAttendeeCapabilitiesRequest&, const Model::UpdateAttendeeCapabilitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAttendeeCapabilitiesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ChimeSDKMeetings
} // namespace Aws
