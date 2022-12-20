/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/nimble/NimbleStudioErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/nimble/NimbleStudioEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in NimbleStudioClient header */
#include <aws/nimble/model/AcceptEulasResult.h>
#include <aws/nimble/model/CreateLaunchProfileResult.h>
#include <aws/nimble/model/CreateStreamingImageResult.h>
#include <aws/nimble/model/CreateStreamingSessionResult.h>
#include <aws/nimble/model/CreateStreamingSessionStreamResult.h>
#include <aws/nimble/model/CreateStudioResult.h>
#include <aws/nimble/model/CreateStudioComponentResult.h>
#include <aws/nimble/model/DeleteLaunchProfileResult.h>
#include <aws/nimble/model/DeleteLaunchProfileMemberResult.h>
#include <aws/nimble/model/DeleteStreamingImageResult.h>
#include <aws/nimble/model/DeleteStreamingSessionResult.h>
#include <aws/nimble/model/DeleteStudioResult.h>
#include <aws/nimble/model/DeleteStudioComponentResult.h>
#include <aws/nimble/model/DeleteStudioMemberResult.h>
#include <aws/nimble/model/GetEulaResult.h>
#include <aws/nimble/model/GetLaunchProfileResult.h>
#include <aws/nimble/model/GetLaunchProfileDetailsResult.h>
#include <aws/nimble/model/GetLaunchProfileInitializationResult.h>
#include <aws/nimble/model/GetLaunchProfileMemberResult.h>
#include <aws/nimble/model/GetStreamingImageResult.h>
#include <aws/nimble/model/GetStreamingSessionResult.h>
#include <aws/nimble/model/GetStreamingSessionBackupResult.h>
#include <aws/nimble/model/GetStreamingSessionStreamResult.h>
#include <aws/nimble/model/GetStudioResult.h>
#include <aws/nimble/model/GetStudioComponentResult.h>
#include <aws/nimble/model/GetStudioMemberResult.h>
#include <aws/nimble/model/ListEulaAcceptancesResult.h>
#include <aws/nimble/model/ListEulasResult.h>
#include <aws/nimble/model/ListLaunchProfileMembersResult.h>
#include <aws/nimble/model/ListLaunchProfilesResult.h>
#include <aws/nimble/model/ListStreamingImagesResult.h>
#include <aws/nimble/model/ListStreamingSessionBackupsResult.h>
#include <aws/nimble/model/ListStreamingSessionsResult.h>
#include <aws/nimble/model/ListStudioComponentsResult.h>
#include <aws/nimble/model/ListStudioMembersResult.h>
#include <aws/nimble/model/ListStudiosResult.h>
#include <aws/nimble/model/ListTagsForResourceResult.h>
#include <aws/nimble/model/PutLaunchProfileMembersResult.h>
#include <aws/nimble/model/PutStudioMembersResult.h>
#include <aws/nimble/model/StartStreamingSessionResult.h>
#include <aws/nimble/model/StartStudioSSOConfigurationRepairResult.h>
#include <aws/nimble/model/StopStreamingSessionResult.h>
#include <aws/nimble/model/TagResourceResult.h>
#include <aws/nimble/model/UntagResourceResult.h>
#include <aws/nimble/model/UpdateLaunchProfileResult.h>
#include <aws/nimble/model/UpdateLaunchProfileMemberResult.h>
#include <aws/nimble/model/UpdateStreamingImageResult.h>
#include <aws/nimble/model/UpdateStudioResult.h>
#include <aws/nimble/model/UpdateStudioComponentResult.h>
/* End of service model headers required in NimbleStudioClient header */

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

  namespace NimbleStudio
  {
    using NimbleStudioClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using NimbleStudioEndpointProviderBase = Aws::NimbleStudio::Endpoint::NimbleStudioEndpointProviderBase;
    using NimbleStudioEndpointProvider = Aws::NimbleStudio::Endpoint::NimbleStudioEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in NimbleStudioClient header */
      class AcceptEulasRequest;
      class CreateLaunchProfileRequest;
      class CreateStreamingImageRequest;
      class CreateStreamingSessionRequest;
      class CreateStreamingSessionStreamRequest;
      class CreateStudioRequest;
      class CreateStudioComponentRequest;
      class DeleteLaunchProfileRequest;
      class DeleteLaunchProfileMemberRequest;
      class DeleteStreamingImageRequest;
      class DeleteStreamingSessionRequest;
      class DeleteStudioRequest;
      class DeleteStudioComponentRequest;
      class DeleteStudioMemberRequest;
      class GetEulaRequest;
      class GetLaunchProfileRequest;
      class GetLaunchProfileDetailsRequest;
      class GetLaunchProfileInitializationRequest;
      class GetLaunchProfileMemberRequest;
      class GetStreamingImageRequest;
      class GetStreamingSessionRequest;
      class GetStreamingSessionBackupRequest;
      class GetStreamingSessionStreamRequest;
      class GetStudioRequest;
      class GetStudioComponentRequest;
      class GetStudioMemberRequest;
      class ListEulaAcceptancesRequest;
      class ListEulasRequest;
      class ListLaunchProfileMembersRequest;
      class ListLaunchProfilesRequest;
      class ListStreamingImagesRequest;
      class ListStreamingSessionBackupsRequest;
      class ListStreamingSessionsRequest;
      class ListStudioComponentsRequest;
      class ListStudioMembersRequest;
      class ListStudiosRequest;
      class ListTagsForResourceRequest;
      class PutLaunchProfileMembersRequest;
      class PutStudioMembersRequest;
      class StartStreamingSessionRequest;
      class StartStudioSSOConfigurationRepairRequest;
      class StopStreamingSessionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateLaunchProfileRequest;
      class UpdateLaunchProfileMemberRequest;
      class UpdateStreamingImageRequest;
      class UpdateStudioRequest;
      class UpdateStudioComponentRequest;
      /* End of service model forward declarations required in NimbleStudioClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptEulasResult, NimbleStudioError> AcceptEulasOutcome;
      typedef Aws::Utils::Outcome<CreateLaunchProfileResult, NimbleStudioError> CreateLaunchProfileOutcome;
      typedef Aws::Utils::Outcome<CreateStreamingImageResult, NimbleStudioError> CreateStreamingImageOutcome;
      typedef Aws::Utils::Outcome<CreateStreamingSessionResult, NimbleStudioError> CreateStreamingSessionOutcome;
      typedef Aws::Utils::Outcome<CreateStreamingSessionStreamResult, NimbleStudioError> CreateStreamingSessionStreamOutcome;
      typedef Aws::Utils::Outcome<CreateStudioResult, NimbleStudioError> CreateStudioOutcome;
      typedef Aws::Utils::Outcome<CreateStudioComponentResult, NimbleStudioError> CreateStudioComponentOutcome;
      typedef Aws::Utils::Outcome<DeleteLaunchProfileResult, NimbleStudioError> DeleteLaunchProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteLaunchProfileMemberResult, NimbleStudioError> DeleteLaunchProfileMemberOutcome;
      typedef Aws::Utils::Outcome<DeleteStreamingImageResult, NimbleStudioError> DeleteStreamingImageOutcome;
      typedef Aws::Utils::Outcome<DeleteStreamingSessionResult, NimbleStudioError> DeleteStreamingSessionOutcome;
      typedef Aws::Utils::Outcome<DeleteStudioResult, NimbleStudioError> DeleteStudioOutcome;
      typedef Aws::Utils::Outcome<DeleteStudioComponentResult, NimbleStudioError> DeleteStudioComponentOutcome;
      typedef Aws::Utils::Outcome<DeleteStudioMemberResult, NimbleStudioError> DeleteStudioMemberOutcome;
      typedef Aws::Utils::Outcome<GetEulaResult, NimbleStudioError> GetEulaOutcome;
      typedef Aws::Utils::Outcome<GetLaunchProfileResult, NimbleStudioError> GetLaunchProfileOutcome;
      typedef Aws::Utils::Outcome<GetLaunchProfileDetailsResult, NimbleStudioError> GetLaunchProfileDetailsOutcome;
      typedef Aws::Utils::Outcome<GetLaunchProfileInitializationResult, NimbleStudioError> GetLaunchProfileInitializationOutcome;
      typedef Aws::Utils::Outcome<GetLaunchProfileMemberResult, NimbleStudioError> GetLaunchProfileMemberOutcome;
      typedef Aws::Utils::Outcome<GetStreamingImageResult, NimbleStudioError> GetStreamingImageOutcome;
      typedef Aws::Utils::Outcome<GetStreamingSessionResult, NimbleStudioError> GetStreamingSessionOutcome;
      typedef Aws::Utils::Outcome<GetStreamingSessionBackupResult, NimbleStudioError> GetStreamingSessionBackupOutcome;
      typedef Aws::Utils::Outcome<GetStreamingSessionStreamResult, NimbleStudioError> GetStreamingSessionStreamOutcome;
      typedef Aws::Utils::Outcome<GetStudioResult, NimbleStudioError> GetStudioOutcome;
      typedef Aws::Utils::Outcome<GetStudioComponentResult, NimbleStudioError> GetStudioComponentOutcome;
      typedef Aws::Utils::Outcome<GetStudioMemberResult, NimbleStudioError> GetStudioMemberOutcome;
      typedef Aws::Utils::Outcome<ListEulaAcceptancesResult, NimbleStudioError> ListEulaAcceptancesOutcome;
      typedef Aws::Utils::Outcome<ListEulasResult, NimbleStudioError> ListEulasOutcome;
      typedef Aws::Utils::Outcome<ListLaunchProfileMembersResult, NimbleStudioError> ListLaunchProfileMembersOutcome;
      typedef Aws::Utils::Outcome<ListLaunchProfilesResult, NimbleStudioError> ListLaunchProfilesOutcome;
      typedef Aws::Utils::Outcome<ListStreamingImagesResult, NimbleStudioError> ListStreamingImagesOutcome;
      typedef Aws::Utils::Outcome<ListStreamingSessionBackupsResult, NimbleStudioError> ListStreamingSessionBackupsOutcome;
      typedef Aws::Utils::Outcome<ListStreamingSessionsResult, NimbleStudioError> ListStreamingSessionsOutcome;
      typedef Aws::Utils::Outcome<ListStudioComponentsResult, NimbleStudioError> ListStudioComponentsOutcome;
      typedef Aws::Utils::Outcome<ListStudioMembersResult, NimbleStudioError> ListStudioMembersOutcome;
      typedef Aws::Utils::Outcome<ListStudiosResult, NimbleStudioError> ListStudiosOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, NimbleStudioError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutLaunchProfileMembersResult, NimbleStudioError> PutLaunchProfileMembersOutcome;
      typedef Aws::Utils::Outcome<PutStudioMembersResult, NimbleStudioError> PutStudioMembersOutcome;
      typedef Aws::Utils::Outcome<StartStreamingSessionResult, NimbleStudioError> StartStreamingSessionOutcome;
      typedef Aws::Utils::Outcome<StartStudioSSOConfigurationRepairResult, NimbleStudioError> StartStudioSSOConfigurationRepairOutcome;
      typedef Aws::Utils::Outcome<StopStreamingSessionResult, NimbleStudioError> StopStreamingSessionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, NimbleStudioError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, NimbleStudioError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateLaunchProfileResult, NimbleStudioError> UpdateLaunchProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateLaunchProfileMemberResult, NimbleStudioError> UpdateLaunchProfileMemberOutcome;
      typedef Aws::Utils::Outcome<UpdateStreamingImageResult, NimbleStudioError> UpdateStreamingImageOutcome;
      typedef Aws::Utils::Outcome<UpdateStudioResult, NimbleStudioError> UpdateStudioOutcome;
      typedef Aws::Utils::Outcome<UpdateStudioComponentResult, NimbleStudioError> UpdateStudioComponentOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptEulasOutcome> AcceptEulasOutcomeCallable;
      typedef std::future<CreateLaunchProfileOutcome> CreateLaunchProfileOutcomeCallable;
      typedef std::future<CreateStreamingImageOutcome> CreateStreamingImageOutcomeCallable;
      typedef std::future<CreateStreamingSessionOutcome> CreateStreamingSessionOutcomeCallable;
      typedef std::future<CreateStreamingSessionStreamOutcome> CreateStreamingSessionStreamOutcomeCallable;
      typedef std::future<CreateStudioOutcome> CreateStudioOutcomeCallable;
      typedef std::future<CreateStudioComponentOutcome> CreateStudioComponentOutcomeCallable;
      typedef std::future<DeleteLaunchProfileOutcome> DeleteLaunchProfileOutcomeCallable;
      typedef std::future<DeleteLaunchProfileMemberOutcome> DeleteLaunchProfileMemberOutcomeCallable;
      typedef std::future<DeleteStreamingImageOutcome> DeleteStreamingImageOutcomeCallable;
      typedef std::future<DeleteStreamingSessionOutcome> DeleteStreamingSessionOutcomeCallable;
      typedef std::future<DeleteStudioOutcome> DeleteStudioOutcomeCallable;
      typedef std::future<DeleteStudioComponentOutcome> DeleteStudioComponentOutcomeCallable;
      typedef std::future<DeleteStudioMemberOutcome> DeleteStudioMemberOutcomeCallable;
      typedef std::future<GetEulaOutcome> GetEulaOutcomeCallable;
      typedef std::future<GetLaunchProfileOutcome> GetLaunchProfileOutcomeCallable;
      typedef std::future<GetLaunchProfileDetailsOutcome> GetLaunchProfileDetailsOutcomeCallable;
      typedef std::future<GetLaunchProfileInitializationOutcome> GetLaunchProfileInitializationOutcomeCallable;
      typedef std::future<GetLaunchProfileMemberOutcome> GetLaunchProfileMemberOutcomeCallable;
      typedef std::future<GetStreamingImageOutcome> GetStreamingImageOutcomeCallable;
      typedef std::future<GetStreamingSessionOutcome> GetStreamingSessionOutcomeCallable;
      typedef std::future<GetStreamingSessionBackupOutcome> GetStreamingSessionBackupOutcomeCallable;
      typedef std::future<GetStreamingSessionStreamOutcome> GetStreamingSessionStreamOutcomeCallable;
      typedef std::future<GetStudioOutcome> GetStudioOutcomeCallable;
      typedef std::future<GetStudioComponentOutcome> GetStudioComponentOutcomeCallable;
      typedef std::future<GetStudioMemberOutcome> GetStudioMemberOutcomeCallable;
      typedef std::future<ListEulaAcceptancesOutcome> ListEulaAcceptancesOutcomeCallable;
      typedef std::future<ListEulasOutcome> ListEulasOutcomeCallable;
      typedef std::future<ListLaunchProfileMembersOutcome> ListLaunchProfileMembersOutcomeCallable;
      typedef std::future<ListLaunchProfilesOutcome> ListLaunchProfilesOutcomeCallable;
      typedef std::future<ListStreamingImagesOutcome> ListStreamingImagesOutcomeCallable;
      typedef std::future<ListStreamingSessionBackupsOutcome> ListStreamingSessionBackupsOutcomeCallable;
      typedef std::future<ListStreamingSessionsOutcome> ListStreamingSessionsOutcomeCallable;
      typedef std::future<ListStudioComponentsOutcome> ListStudioComponentsOutcomeCallable;
      typedef std::future<ListStudioMembersOutcome> ListStudioMembersOutcomeCallable;
      typedef std::future<ListStudiosOutcome> ListStudiosOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutLaunchProfileMembersOutcome> PutLaunchProfileMembersOutcomeCallable;
      typedef std::future<PutStudioMembersOutcome> PutStudioMembersOutcomeCallable;
      typedef std::future<StartStreamingSessionOutcome> StartStreamingSessionOutcomeCallable;
      typedef std::future<StartStudioSSOConfigurationRepairOutcome> StartStudioSSOConfigurationRepairOutcomeCallable;
      typedef std::future<StopStreamingSessionOutcome> StopStreamingSessionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateLaunchProfileOutcome> UpdateLaunchProfileOutcomeCallable;
      typedef std::future<UpdateLaunchProfileMemberOutcome> UpdateLaunchProfileMemberOutcomeCallable;
      typedef std::future<UpdateStreamingImageOutcome> UpdateStreamingImageOutcomeCallable;
      typedef std::future<UpdateStudioOutcome> UpdateStudioOutcomeCallable;
      typedef std::future<UpdateStudioComponentOutcome> UpdateStudioComponentOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class NimbleStudioClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const NimbleStudioClient*, const Model::AcceptEulasRequest&, const Model::AcceptEulasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptEulasResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::CreateLaunchProfileRequest&, const Model::CreateLaunchProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLaunchProfileResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::CreateStreamingImageRequest&, const Model::CreateStreamingImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingImageResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::CreateStreamingSessionRequest&, const Model::CreateStreamingSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingSessionResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::CreateStreamingSessionStreamRequest&, const Model::CreateStreamingSessionStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingSessionStreamResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::CreateStudioRequest&, const Model::CreateStudioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStudioResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::CreateStudioComponentRequest&, const Model::CreateStudioComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStudioComponentResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::DeleteLaunchProfileRequest&, const Model::DeleteLaunchProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLaunchProfileResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::DeleteLaunchProfileMemberRequest&, const Model::DeleteLaunchProfileMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLaunchProfileMemberResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::DeleteStreamingImageRequest&, const Model::DeleteStreamingImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamingImageResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::DeleteStreamingSessionRequest&, const Model::DeleteStreamingSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamingSessionResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::DeleteStudioRequest&, const Model::DeleteStudioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStudioResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::DeleteStudioComponentRequest&, const Model::DeleteStudioComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStudioComponentResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::DeleteStudioMemberRequest&, const Model::DeleteStudioMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStudioMemberResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetEulaRequest&, const Model::GetEulaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEulaResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetLaunchProfileRequest&, const Model::GetLaunchProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLaunchProfileResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetLaunchProfileDetailsRequest&, const Model::GetLaunchProfileDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLaunchProfileDetailsResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetLaunchProfileInitializationRequest&, const Model::GetLaunchProfileInitializationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLaunchProfileInitializationResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetLaunchProfileMemberRequest&, const Model::GetLaunchProfileMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLaunchProfileMemberResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetStreamingImageRequest&, const Model::GetStreamingImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingImageResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetStreamingSessionRequest&, const Model::GetStreamingSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingSessionResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetStreamingSessionBackupRequest&, const Model::GetStreamingSessionBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingSessionBackupResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetStreamingSessionStreamRequest&, const Model::GetStreamingSessionStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingSessionStreamResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetStudioRequest&, const Model::GetStudioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStudioResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetStudioComponentRequest&, const Model::GetStudioComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStudioComponentResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetStudioMemberRequest&, const Model::GetStudioMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStudioMemberResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListEulaAcceptancesRequest&, const Model::ListEulaAcceptancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEulaAcceptancesResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListEulasRequest&, const Model::ListEulasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEulasResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListLaunchProfileMembersRequest&, const Model::ListLaunchProfileMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLaunchProfileMembersResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListLaunchProfilesRequest&, const Model::ListLaunchProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLaunchProfilesResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListStreamingImagesRequest&, const Model::ListStreamingImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamingImagesResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListStreamingSessionBackupsRequest&, const Model::ListStreamingSessionBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamingSessionBackupsResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListStreamingSessionsRequest&, const Model::ListStreamingSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamingSessionsResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListStudioComponentsRequest&, const Model::ListStudioComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStudioComponentsResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListStudioMembersRequest&, const Model::ListStudioMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStudioMembersResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListStudiosRequest&, const Model::ListStudiosOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStudiosResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::PutLaunchProfileMembersRequest&, const Model::PutLaunchProfileMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLaunchProfileMembersResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::PutStudioMembersRequest&, const Model::PutStudioMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutStudioMembersResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::StartStreamingSessionRequest&, const Model::StartStreamingSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartStreamingSessionResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::StartStudioSSOConfigurationRepairRequest&, const Model::StartStudioSSOConfigurationRepairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartStudioSSOConfigurationRepairResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::StopStreamingSessionRequest&, const Model::StopStreamingSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopStreamingSessionResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::UpdateLaunchProfileRequest&, const Model::UpdateLaunchProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLaunchProfileResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::UpdateLaunchProfileMemberRequest&, const Model::UpdateLaunchProfileMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLaunchProfileMemberResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::UpdateStreamingImageRequest&, const Model::UpdateStreamingImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStreamingImageResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::UpdateStudioRequest&, const Model::UpdateStudioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStudioResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::UpdateStudioComponentRequest&, const Model::UpdateStudioComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStudioComponentResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace NimbleStudio
} // namespace Aws
