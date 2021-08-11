﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/nimble/model/GetStreamingSessionStreamResult.h>
#include <aws/nimble/model/GetStudioResult.h>
#include <aws/nimble/model/GetStudioComponentResult.h>
#include <aws/nimble/model/GetStudioMemberResult.h>
#include <aws/nimble/model/ListEulaAcceptancesResult.h>
#include <aws/nimble/model/ListEulasResult.h>
#include <aws/nimble/model/ListLaunchProfileMembersResult.h>
#include <aws/nimble/model/ListLaunchProfilesResult.h>
#include <aws/nimble/model/ListStreamingImagesResult.h>
#include <aws/nimble/model/ListStreamingSessionsResult.h>
#include <aws/nimble/model/ListStudioComponentsResult.h>
#include <aws/nimble/model/ListStudioMembersResult.h>
#include <aws/nimble/model/ListStudiosResult.h>
#include <aws/nimble/model/ListTagsForResourceResult.h>
#include <aws/nimble/model/PutLaunchProfileMembersResult.h>
#include <aws/nimble/model/PutStudioMembersResult.h>
#include <aws/nimble/model/StartStudioSSOConfigurationRepairResult.h>
#include <aws/nimble/model/TagResourceResult.h>
#include <aws/nimble/model/UntagResourceResult.h>
#include <aws/nimble/model/UpdateLaunchProfileResult.h>
#include <aws/nimble/model/UpdateLaunchProfileMemberResult.h>
#include <aws/nimble/model/UpdateStreamingImageResult.h>
#include <aws/nimble/model/UpdateStudioResult.h>
#include <aws/nimble/model/UpdateStudioComponentResult.h>
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

namespace NimbleStudio
{

namespace Model
{
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
        class GetStreamingSessionStreamRequest;
        class GetStudioRequest;
        class GetStudioComponentRequest;
        class GetStudioMemberRequest;
        class ListEulaAcceptancesRequest;
        class ListEulasRequest;
        class ListLaunchProfileMembersRequest;
        class ListLaunchProfilesRequest;
        class ListStreamingImagesRequest;
        class ListStreamingSessionsRequest;
        class ListStudioComponentsRequest;
        class ListStudioMembersRequest;
        class ListStudiosRequest;
        class ListTagsForResourceRequest;
        class PutLaunchProfileMembersRequest;
        class PutStudioMembersRequest;
        class StartStudioSSOConfigurationRepairRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateLaunchProfileRequest;
        class UpdateLaunchProfileMemberRequest;
        class UpdateStreamingImageRequest;
        class UpdateStudioRequest;
        class UpdateStudioComponentRequest;

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
        typedef Aws::Utils::Outcome<GetStreamingSessionStreamResult, NimbleStudioError> GetStreamingSessionStreamOutcome;
        typedef Aws::Utils::Outcome<GetStudioResult, NimbleStudioError> GetStudioOutcome;
        typedef Aws::Utils::Outcome<GetStudioComponentResult, NimbleStudioError> GetStudioComponentOutcome;
        typedef Aws::Utils::Outcome<GetStudioMemberResult, NimbleStudioError> GetStudioMemberOutcome;
        typedef Aws::Utils::Outcome<ListEulaAcceptancesResult, NimbleStudioError> ListEulaAcceptancesOutcome;
        typedef Aws::Utils::Outcome<ListEulasResult, NimbleStudioError> ListEulasOutcome;
        typedef Aws::Utils::Outcome<ListLaunchProfileMembersResult, NimbleStudioError> ListLaunchProfileMembersOutcome;
        typedef Aws::Utils::Outcome<ListLaunchProfilesResult, NimbleStudioError> ListLaunchProfilesOutcome;
        typedef Aws::Utils::Outcome<ListStreamingImagesResult, NimbleStudioError> ListStreamingImagesOutcome;
        typedef Aws::Utils::Outcome<ListStreamingSessionsResult, NimbleStudioError> ListStreamingSessionsOutcome;
        typedef Aws::Utils::Outcome<ListStudioComponentsResult, NimbleStudioError> ListStudioComponentsOutcome;
        typedef Aws::Utils::Outcome<ListStudioMembersResult, NimbleStudioError> ListStudioMembersOutcome;
        typedef Aws::Utils::Outcome<ListStudiosResult, NimbleStudioError> ListStudiosOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, NimbleStudioError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutLaunchProfileMembersResult, NimbleStudioError> PutLaunchProfileMembersOutcome;
        typedef Aws::Utils::Outcome<PutStudioMembersResult, NimbleStudioError> PutStudioMembersOutcome;
        typedef Aws::Utils::Outcome<StartStudioSSOConfigurationRepairResult, NimbleStudioError> StartStudioSSOConfigurationRepairOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, NimbleStudioError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, NimbleStudioError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateLaunchProfileResult, NimbleStudioError> UpdateLaunchProfileOutcome;
        typedef Aws::Utils::Outcome<UpdateLaunchProfileMemberResult, NimbleStudioError> UpdateLaunchProfileMemberOutcome;
        typedef Aws::Utils::Outcome<UpdateStreamingImageResult, NimbleStudioError> UpdateStreamingImageOutcome;
        typedef Aws::Utils::Outcome<UpdateStudioResult, NimbleStudioError> UpdateStudioOutcome;
        typedef Aws::Utils::Outcome<UpdateStudioComponentResult, NimbleStudioError> UpdateStudioComponentOutcome;

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
        typedef std::future<GetStreamingSessionStreamOutcome> GetStreamingSessionStreamOutcomeCallable;
        typedef std::future<GetStudioOutcome> GetStudioOutcomeCallable;
        typedef std::future<GetStudioComponentOutcome> GetStudioComponentOutcomeCallable;
        typedef std::future<GetStudioMemberOutcome> GetStudioMemberOutcomeCallable;
        typedef std::future<ListEulaAcceptancesOutcome> ListEulaAcceptancesOutcomeCallable;
        typedef std::future<ListEulasOutcome> ListEulasOutcomeCallable;
        typedef std::future<ListLaunchProfileMembersOutcome> ListLaunchProfileMembersOutcomeCallable;
        typedef std::future<ListLaunchProfilesOutcome> ListLaunchProfilesOutcomeCallable;
        typedef std::future<ListStreamingImagesOutcome> ListStreamingImagesOutcomeCallable;
        typedef std::future<ListStreamingSessionsOutcome> ListStreamingSessionsOutcomeCallable;
        typedef std::future<ListStudioComponentsOutcome> ListStudioComponentsOutcomeCallable;
        typedef std::future<ListStudioMembersOutcome> ListStudioMembersOutcomeCallable;
        typedef std::future<ListStudiosOutcome> ListStudiosOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutLaunchProfileMembersOutcome> PutLaunchProfileMembersOutcomeCallable;
        typedef std::future<PutStudioMembersOutcome> PutStudioMembersOutcomeCallable;
        typedef std::future<StartStudioSSOConfigurationRepairOutcome> StartStudioSSOConfigurationRepairOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateLaunchProfileOutcome> UpdateLaunchProfileOutcomeCallable;
        typedef std::future<UpdateLaunchProfileMemberOutcome> UpdateLaunchProfileMemberOutcomeCallable;
        typedef std::future<UpdateStreamingImageOutcome> UpdateStreamingImageOutcomeCallable;
        typedef std::future<UpdateStudioOutcome> UpdateStudioOutcomeCallable;
        typedef std::future<UpdateStudioComponentOutcome> UpdateStudioComponentOutcomeCallable;
} // namespace Model

  class NimbleStudioClient;

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
    typedef std::function<void(const NimbleStudioClient*, const Model::GetStreamingSessionStreamRequest&, const Model::GetStreamingSessionStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingSessionStreamResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetStudioRequest&, const Model::GetStudioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStudioResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetStudioComponentRequest&, const Model::GetStudioComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStudioComponentResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::GetStudioMemberRequest&, const Model::GetStudioMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStudioMemberResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListEulaAcceptancesRequest&, const Model::ListEulaAcceptancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEulaAcceptancesResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListEulasRequest&, const Model::ListEulasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEulasResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListLaunchProfileMembersRequest&, const Model::ListLaunchProfileMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLaunchProfileMembersResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListLaunchProfilesRequest&, const Model::ListLaunchProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLaunchProfilesResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListStreamingImagesRequest&, const Model::ListStreamingImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamingImagesResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListStreamingSessionsRequest&, const Model::ListStreamingSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamingSessionsResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListStudioComponentsRequest&, const Model::ListStudioComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStudioComponentsResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListStudioMembersRequest&, const Model::ListStudioMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStudioMembersResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListStudiosRequest&, const Model::ListStudiosOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStudiosResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::PutLaunchProfileMembersRequest&, const Model::PutLaunchProfileMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLaunchProfileMembersResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::PutStudioMembersRequest&, const Model::PutStudioMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutStudioMembersResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::StartStudioSSOConfigurationRepairRequest&, const Model::StartStudioSSOConfigurationRepairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartStudioSSOConfigurationRepairResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::UpdateLaunchProfileRequest&, const Model::UpdateLaunchProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLaunchProfileResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::UpdateLaunchProfileMemberRequest&, const Model::UpdateLaunchProfileMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLaunchProfileMemberResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::UpdateStreamingImageRequest&, const Model::UpdateStreamingImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStreamingImageResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::UpdateStudioRequest&, const Model::UpdateStudioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStudioResponseReceivedHandler;
    typedef std::function<void(const NimbleStudioClient*, const Model::UpdateStudioComponentRequest&, const Model::UpdateStudioComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStudioComponentResponseReceivedHandler;

  class AWS_NIMBLESTUDIO_API NimbleStudioClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NimbleStudioClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NimbleStudioClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NimbleStudioClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~NimbleStudioClient();


        /**
         * <p>Accept EULAs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/AcceptEulas">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptEulasOutcome AcceptEulas(const Model::AcceptEulasRequest& request) const;

        /**
         * <p>Accept EULAs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/AcceptEulas">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptEulasOutcomeCallable AcceptEulasCallable(const Model::AcceptEulasRequest& request) const;

        /**
         * <p>Accept EULAs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/AcceptEulas">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptEulasAsync(const Model::AcceptEulasRequest& request, const AcceptEulasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLaunchProfileOutcome CreateLaunchProfile(const Model::CreateLaunchProfileRequest& request) const;

        /**
         * <p>Create a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateLaunchProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLaunchProfileOutcomeCallable CreateLaunchProfileCallable(const Model::CreateLaunchProfileRequest& request) const;

        /**
         * <p>Create a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateLaunchProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLaunchProfileAsync(const Model::CreateLaunchProfileRequest& request, const CreateLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a streaming image resource in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingImageOutcome CreateStreamingImage(const Model::CreateStreamingImageRequest& request) const;

        /**
         * <p>Creates a streaming image resource in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingImageOutcomeCallable CreateStreamingImageCallable(const Model::CreateStreamingImageRequest& request) const;

        /**
         * <p>Creates a streaming image resource in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingImageAsync(const Model::CreateStreamingImageRequest& request, const CreateStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a streaming session in a studio.</p> <p>After invoking this
         * operation, you must poll GetStreamingSession until the streaming session is in
         * state READY.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingSessionOutcome CreateStreamingSession(const Model::CreateStreamingSessionRequest& request) const;

        /**
         * <p>Creates a streaming session in a studio.</p> <p>After invoking this
         * operation, you must poll GetStreamingSession until the streaming session is in
         * state READY.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingSessionOutcomeCallable CreateStreamingSessionCallable(const Model::CreateStreamingSessionRequest& request) const;

        /**
         * <p>Creates a streaming session in a studio.</p> <p>After invoking this
         * operation, you must poll GetStreamingSession until the streaming session is in
         * state READY.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingSessionAsync(const Model::CreateStreamingSessionRequest& request, const CreateStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a streaming session stream for a streaming session.</p> <p>After
         * invoking this API, invoke GetStreamingSessionStream with the returned streamId
         * to poll the resource until it is in state READY.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingSessionStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingSessionStreamOutcome CreateStreamingSessionStream(const Model::CreateStreamingSessionStreamRequest& request) const;

        /**
         * <p>Creates a streaming session stream for a streaming session.</p> <p>After
         * invoking this API, invoke GetStreamingSessionStream with the returned streamId
         * to poll the resource until it is in state READY.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingSessionStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingSessionStreamOutcomeCallable CreateStreamingSessionStreamCallable(const Model::CreateStreamingSessionStreamRequest& request) const;

        /**
         * <p>Creates a streaming session stream for a streaming session.</p> <p>After
         * invoking this API, invoke GetStreamingSessionStream with the returned streamId
         * to poll the resource until it is in state READY.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingSessionStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingSessionStreamAsync(const Model::CreateStreamingSessionStreamRequest& request, const CreateStreamingSessionStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new Studio.</p> <p>When creating a Studio, two IAM roles must be
         * provided: the admin role and the user Role. These roles are assumed by your
         * users when they log in to the Nimble Studio portal.</p> <p>The user role must
         * have the AmazonNimbleStudio-StudioUser managed policy attached for the portal to
         * function properly.</p> <p>The Admin Role must have the
         * AmazonNimbleStudio-StudioAdmin managed policy attached for the portal to
         * function properly.</p> <p>You may optionally specify a KMS key in the
         * StudioEncryptionConfiguration.</p> <p>In Nimble Studio, resource names,
         * descriptions, initialization scripts, and other data you provide are always
         * encrypted at rest using an KMS key. By default, this key is owned by Amazon Web
         * Services and managed on your behalf. You may provide your own KMS key when
         * calling CreateStudio to encrypt this data using a key you own and manage.</p>
         * <p>When providing an KMS key during studio creation, Nimble Studio creates KMS
         * grants in your account to provide your studio user and admin roles access to
         * these KMS keys.</p> <p>If you delete this grant, the studio will no longer be
         * accessible to your portal users.</p> <p>If you delete the studio KMS key, your
         * studio will no longer be accessible.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioOutcome CreateStudio(const Model::CreateStudioRequest& request) const;

        /**
         * <p>Create a new Studio.</p> <p>When creating a Studio, two IAM roles must be
         * provided: the admin role and the user Role. These roles are assumed by your
         * users when they log in to the Nimble Studio portal.</p> <p>The user role must
         * have the AmazonNimbleStudio-StudioUser managed policy attached for the portal to
         * function properly.</p> <p>The Admin Role must have the
         * AmazonNimbleStudio-StudioAdmin managed policy attached for the portal to
         * function properly.</p> <p>You may optionally specify a KMS key in the
         * StudioEncryptionConfiguration.</p> <p>In Nimble Studio, resource names,
         * descriptions, initialization scripts, and other data you provide are always
         * encrypted at rest using an KMS key. By default, this key is owned by Amazon Web
         * Services and managed on your behalf. You may provide your own KMS key when
         * calling CreateStudio to encrypt this data using a key you own and manage.</p>
         * <p>When providing an KMS key during studio creation, Nimble Studio creates KMS
         * grants in your account to provide your studio user and admin roles access to
         * these KMS keys.</p> <p>If you delete this grant, the studio will no longer be
         * accessible to your portal users.</p> <p>If you delete the studio KMS key, your
         * studio will no longer be accessible.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStudio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStudioOutcomeCallable CreateStudioCallable(const Model::CreateStudioRequest& request) const;

        /**
         * <p>Create a new Studio.</p> <p>When creating a Studio, two IAM roles must be
         * provided: the admin role and the user Role. These roles are assumed by your
         * users when they log in to the Nimble Studio portal.</p> <p>The user role must
         * have the AmazonNimbleStudio-StudioUser managed policy attached for the portal to
         * function properly.</p> <p>The Admin Role must have the
         * AmazonNimbleStudio-StudioAdmin managed policy attached for the portal to
         * function properly.</p> <p>You may optionally specify a KMS key in the
         * StudioEncryptionConfiguration.</p> <p>In Nimble Studio, resource names,
         * descriptions, initialization scripts, and other data you provide are always
         * encrypted at rest using an KMS key. By default, this key is owned by Amazon Web
         * Services and managed on your behalf. You may provide your own KMS key when
         * calling CreateStudio to encrypt this data using a key you own and manage.</p>
         * <p>When providing an KMS key during studio creation, Nimble Studio creates KMS
         * grants in your account to provide your studio user and admin roles access to
         * these KMS keys.</p> <p>If you delete this grant, the studio will no longer be
         * accessible to your portal users.</p> <p>If you delete the studio KMS key, your
         * studio will no longer be accessible.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStudio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStudioAsync(const Model::CreateStudioRequest& request, const CreateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioComponentOutcome CreateStudioComponent(const Model::CreateStudioComponentRequest& request) const;

        /**
         * <p>Creates a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStudioComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStudioComponentOutcomeCallable CreateStudioComponentCallable(const Model::CreateStudioComponentRequest& request) const;

        /**
         * <p>Creates a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStudioComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStudioComponentAsync(const Model::CreateStudioComponentRequest& request, const CreateStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently delete a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchProfileOutcome DeleteLaunchProfile(const Model::DeleteLaunchProfileRequest& request) const;

        /**
         * <p>Permanently delete a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteLaunchProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLaunchProfileOutcomeCallable DeleteLaunchProfileCallable(const Model::DeleteLaunchProfileRequest& request) const;

        /**
         * <p>Permanently delete a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteLaunchProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLaunchProfileAsync(const Model::DeleteLaunchProfileRequest& request, const DeleteLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a user from launch profile membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteLaunchProfileMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchProfileMemberOutcome DeleteLaunchProfileMember(const Model::DeleteLaunchProfileMemberRequest& request) const;

        /**
         * <p>Delete a user from launch profile membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteLaunchProfileMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLaunchProfileMemberOutcomeCallable DeleteLaunchProfileMemberCallable(const Model::DeleteLaunchProfileMemberRequest& request) const;

        /**
         * <p>Delete a user from launch profile membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteLaunchProfileMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLaunchProfileMemberAsync(const Model::DeleteLaunchProfileMemberRequest& request, const DeleteLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamingImageOutcome DeleteStreamingImage(const Model::DeleteStreamingImageRequest& request) const;

        /**
         * <p>Delete streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStreamingImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamingImageOutcomeCallable DeleteStreamingImageCallable(const Model::DeleteStreamingImageRequest& request) const;

        /**
         * <p>Delete streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStreamingImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamingImageAsync(const Model::DeleteStreamingImageRequest& request, const DeleteStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes streaming session resource.</p> <p>After invoking this operation, use
         * GetStreamingSession to poll the resource until it transitions to a DELETED
         * state.</p> <p>A streaming session will count against your streaming session
         * quota until it is marked DELETED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamingSessionOutcome DeleteStreamingSession(const Model::DeleteStreamingSessionRequest& request) const;

        /**
         * <p>Deletes streaming session resource.</p> <p>After invoking this operation, use
         * GetStreamingSession to poll the resource until it transitions to a DELETED
         * state.</p> <p>A streaming session will count against your streaming session
         * quota until it is marked DELETED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStreamingSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamingSessionOutcomeCallable DeleteStreamingSessionCallable(const Model::DeleteStreamingSessionRequest& request) const;

        /**
         * <p>Deletes streaming session resource.</p> <p>After invoking this operation, use
         * GetStreamingSession to poll the resource until it transitions to a DELETED
         * state.</p> <p>A streaming session will count against your streaming session
         * quota until it is marked DELETED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStreamingSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamingSessionAsync(const Model::DeleteStreamingSessionRequest& request, const DeleteStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a studio resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioOutcome DeleteStudio(const Model::DeleteStudioRequest& request) const;

        /**
         * <p>Delete a studio resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStudioOutcomeCallable DeleteStudioCallable(const Model::DeleteStudioRequest& request) const;

        /**
         * <p>Delete a studio resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStudioAsync(const Model::DeleteStudioRequest& request, const DeleteStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioComponentOutcome DeleteStudioComponent(const Model::DeleteStudioComponentRequest& request) const;

        /**
         * <p>Deletes a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudioComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStudioComponentOutcomeCallable DeleteStudioComponentCallable(const Model::DeleteStudioComponentRequest& request) const;

        /**
         * <p>Deletes a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudioComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStudioComponentAsync(const Model::DeleteStudioComponentRequest& request, const DeleteStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a user from studio membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudioMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioMemberOutcome DeleteStudioMember(const Model::DeleteStudioMemberRequest& request) const;

        /**
         * <p>Delete a user from studio membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudioMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStudioMemberOutcomeCallable DeleteStudioMemberCallable(const Model::DeleteStudioMemberRequest& request) const;

        /**
         * <p>Delete a user from studio membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudioMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStudioMemberAsync(const Model::DeleteStudioMemberRequest& request, const DeleteStudioMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get Eula.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetEula">AWS API
         * Reference</a></p>
         */
        virtual Model::GetEulaOutcome GetEula(const Model::GetEulaRequest& request) const;

        /**
         * <p>Get Eula.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetEula">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEulaOutcomeCallable GetEulaCallable(const Model::GetEulaRequest& request) const;

        /**
         * <p>Get Eula.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetEula">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEulaAsync(const Model::GetEulaRequest& request, const GetEulaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileOutcome GetLaunchProfile(const Model::GetLaunchProfileRequest& request) const;

        /**
         * <p>Get a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLaunchProfileOutcomeCallable GetLaunchProfileCallable(const Model::GetLaunchProfileRequest& request) const;

        /**
         * <p>Get a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLaunchProfileAsync(const Model::GetLaunchProfileRequest& request, const GetLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Launch profile details include the launch profile resource and summary
         * information of resources that are used by, or available to, the launch profile.
         * This includes the name and description of all studio components used by the
         * launch profiles, and the name and description of streaming images that can be
         * used with this launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileDetailsOutcome GetLaunchProfileDetails(const Model::GetLaunchProfileDetailsRequest& request) const;

        /**
         * <p>Launch profile details include the launch profile resource and summary
         * information of resources that are used by, or available to, the launch profile.
         * This includes the name and description of all studio components used by the
         * launch profiles, and the name and description of streaming images that can be
         * used with this launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileDetails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLaunchProfileDetailsOutcomeCallable GetLaunchProfileDetailsCallable(const Model::GetLaunchProfileDetailsRequest& request) const;

        /**
         * <p>Launch profile details include the launch profile resource and summary
         * information of resources that are used by, or available to, the launch profile.
         * This includes the name and description of all studio components used by the
         * launch profiles, and the name and description of streaming images that can be
         * used with this launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileDetails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLaunchProfileDetailsAsync(const Model::GetLaunchProfileDetailsRequest& request, const GetLaunchProfileDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a launch profile initialization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileInitialization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileInitializationOutcome GetLaunchProfileInitialization(const Model::GetLaunchProfileInitializationRequest& request) const;

        /**
         * <p>Get a launch profile initialization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileInitialization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLaunchProfileInitializationOutcomeCallable GetLaunchProfileInitializationCallable(const Model::GetLaunchProfileInitializationRequest& request) const;

        /**
         * <p>Get a launch profile initialization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileInitialization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLaunchProfileInitializationAsync(const Model::GetLaunchProfileInitializationRequest& request, const GetLaunchProfileInitializationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a user persona in launch profile membership.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileMemberOutcome GetLaunchProfileMember(const Model::GetLaunchProfileMemberRequest& request) const;

        /**
         * <p>Get a user persona in launch profile membership.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLaunchProfileMemberOutcomeCallable GetLaunchProfileMemberCallable(const Model::GetLaunchProfileMemberRequest& request) const;

        /**
         * <p>Get a user persona in launch profile membership.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLaunchProfileMemberAsync(const Model::GetLaunchProfileMemberRequest& request, const GetLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingImageOutcome GetStreamingImage(const Model::GetStreamingImageRequest& request) const;

        /**
         * <p>Get streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingImageOutcomeCallable GetStreamingImageCallable(const Model::GetStreamingImageRequest& request) const;

        /**
         * <p>Get streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingImageAsync(const Model::GetStreamingImageRequest& request, const GetStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets StreamingSession resource.</p> <p>Invoke this operation to poll for a
         * streaming session state while creating or deleting a session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingSessionOutcome GetStreamingSession(const Model::GetStreamingSessionRequest& request) const;

        /**
         * <p>Gets StreamingSession resource.</p> <p>Invoke this operation to poll for a
         * streaming session state while creating or deleting a session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingSessionOutcomeCallable GetStreamingSessionCallable(const Model::GetStreamingSessionRequest& request) const;

        /**
         * <p>Gets StreamingSession resource.</p> <p>Invoke this operation to poll for a
         * streaming session state while creating or deleting a session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingSessionAsync(const Model::GetStreamingSessionRequest& request, const GetStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a StreamingSessionStream for a streaming session.</p> <p>Invoke this
         * operation to poll the resource after invoking CreateStreamingSessionStream.</p>
         * <p>After the StreamingSessionStream changes to the state READY, the url property
         * will contain a stream to be used with the DCV streaming client.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingSessionStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingSessionStreamOutcome GetStreamingSessionStream(const Model::GetStreamingSessionStreamRequest& request) const;

        /**
         * <p>Gets a StreamingSessionStream for a streaming session.</p> <p>Invoke this
         * operation to poll the resource after invoking CreateStreamingSessionStream.</p>
         * <p>After the StreamingSessionStream changes to the state READY, the url property
         * will contain a stream to be used with the DCV streaming client.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingSessionStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingSessionStreamOutcomeCallable GetStreamingSessionStreamCallable(const Model::GetStreamingSessionStreamRequest& request) const;

        /**
         * <p>Gets a StreamingSessionStream for a streaming session.</p> <p>Invoke this
         * operation to poll the resource after invoking CreateStreamingSessionStream.</p>
         * <p>After the StreamingSessionStream changes to the state READY, the url property
         * will contain a stream to be used with the DCV streaming client.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingSessionStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingSessionStreamAsync(const Model::GetStreamingSessionStreamRequest& request, const GetStreamingSessionStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a Studio resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioOutcome GetStudio(const Model::GetStudioRequest& request) const;

        /**
         * <p>Get a Studio resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStudioOutcomeCallable GetStudioCallable(const Model::GetStudioRequest& request) const;

        /**
         * <p>Get a Studio resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStudioAsync(const Model::GetStudioRequest& request, const GetStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioComponentOutcome GetStudioComponent(const Model::GetStudioComponentRequest& request) const;

        /**
         * <p>Gets a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudioComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStudioComponentOutcomeCallable GetStudioComponentCallable(const Model::GetStudioComponentRequest& request) const;

        /**
         * <p>Gets a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudioComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStudioComponentAsync(const Model::GetStudioComponentRequest& request, const GetStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a user's membership in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudioMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioMemberOutcome GetStudioMember(const Model::GetStudioMemberRequest& request) const;

        /**
         * <p>Get a user's membership in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudioMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStudioMemberOutcomeCallable GetStudioMemberCallable(const Model::GetStudioMemberRequest& request) const;

        /**
         * <p>Get a user's membership in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudioMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStudioMemberAsync(const Model::GetStudioMemberRequest& request, const GetStudioMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List Eula Acceptances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListEulaAcceptances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEulaAcceptancesOutcome ListEulaAcceptances(const Model::ListEulaAcceptancesRequest& request) const;

        /**
         * <p>List Eula Acceptances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListEulaAcceptances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEulaAcceptancesOutcomeCallable ListEulaAcceptancesCallable(const Model::ListEulaAcceptancesRequest& request) const;

        /**
         * <p>List Eula Acceptances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListEulaAcceptances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEulaAcceptancesAsync(const Model::ListEulaAcceptancesRequest& request, const ListEulaAcceptancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List Eulas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListEulas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEulasOutcome ListEulas(const Model::ListEulasRequest& request) const;

        /**
         * <p>List Eulas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListEulas">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEulasOutcomeCallable ListEulasCallable(const Model::ListEulasRequest& request) const;

        /**
         * <p>List Eulas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListEulas">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEulasAsync(const Model::ListEulasRequest& request, const ListEulasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get all users in a given launch profile membership.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListLaunchProfileMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLaunchProfileMembersOutcome ListLaunchProfileMembers(const Model::ListLaunchProfileMembersRequest& request) const;

        /**
         * <p>Get all users in a given launch profile membership.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListLaunchProfileMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLaunchProfileMembersOutcomeCallable ListLaunchProfileMembersCallable(const Model::ListLaunchProfileMembersRequest& request) const;

        /**
         * <p>Get all users in a given launch profile membership.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListLaunchProfileMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLaunchProfileMembersAsync(const Model::ListLaunchProfileMembersRequest& request, const ListLaunchProfileMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all the launch profiles a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListLaunchProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLaunchProfilesOutcome ListLaunchProfiles(const Model::ListLaunchProfilesRequest& request) const;

        /**
         * <p>List all the launch profiles a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListLaunchProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLaunchProfilesOutcomeCallable ListLaunchProfilesCallable(const Model::ListLaunchProfilesRequest& request) const;

        /**
         * <p>List all the launch profiles a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListLaunchProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLaunchProfilesAsync(const Model::ListLaunchProfilesRequest& request, const ListLaunchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the streaming image resources available to this studio.</p> <p>This list
         * will contain both images provided by Amazon Web Services, as well as streaming
         * images that you have created in your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStreamingImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingImagesOutcome ListStreamingImages(const Model::ListStreamingImagesRequest& request) const;

        /**
         * <p>List the streaming image resources available to this studio.</p> <p>This list
         * will contain both images provided by Amazon Web Services, as well as streaming
         * images that you have created in your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStreamingImages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamingImagesOutcomeCallable ListStreamingImagesCallable(const Model::ListStreamingImagesRequest& request) const;

        /**
         * <p>List the streaming image resources available to this studio.</p> <p>This list
         * will contain both images provided by Amazon Web Services, as well as streaming
         * images that you have created in your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStreamingImages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamingImagesAsync(const Model::ListStreamingImagesRequest& request, const ListStreamingImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the streaming image resources in a studio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStreamingSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingSessionsOutcome ListStreamingSessions(const Model::ListStreamingSessionsRequest& request) const;

        /**
         * <p>Lists the streaming image resources in a studio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStreamingSessions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamingSessionsOutcomeCallable ListStreamingSessionsCallable(const Model::ListStreamingSessionsRequest& request) const;

        /**
         * <p>Lists the streaming image resources in a studio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStreamingSessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamingSessionsAsync(const Model::ListStreamingSessionsRequest& request, const ListStreamingSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the StudioComponents in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudioComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudioComponentsOutcome ListStudioComponents(const Model::ListStudioComponentsRequest& request) const;

        /**
         * <p>Lists the StudioComponents in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudioComponents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStudioComponentsOutcomeCallable ListStudioComponentsCallable(const Model::ListStudioComponentsRequest& request) const;

        /**
         * <p>Lists the StudioComponents in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudioComponents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStudioComponentsAsync(const Model::ListStudioComponentsRequest& request, const ListStudioComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get all users in a given studio membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudioMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudioMembersOutcome ListStudioMembers(const Model::ListStudioMembersRequest& request) const;

        /**
         * <p>Get all users in a given studio membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudioMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStudioMembersOutcomeCallable ListStudioMembersCallable(const Model::ListStudioMembersRequest& request) const;

        /**
         * <p>Get all users in a given studio membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudioMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStudioMembersAsync(const Model::ListStudioMembersRequest& request, const ListStudioMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List studios in your Amazon Web Services account in the requested Amazon Web
         * Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudios">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudiosOutcome ListStudios(const Model::ListStudiosRequest& request) const;

        /**
         * <p>List studios in your Amazon Web Services account in the requested Amazon Web
         * Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudios">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStudiosOutcomeCallable ListStudiosCallable(const Model::ListStudiosRequest& request) const;

        /**
         * <p>List studios in your Amazon Web Services account in the requested Amazon Web
         * Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudios">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStudiosAsync(const Model::ListStudiosRequest& request, const ListStudiosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the tags for a resource, given its Amazon Resource Names (ARN).</p>
         * <p>This operation supports ARNs for all resource types in Nimble Studio that
         * support tags, including studio, studio component, launch profile, streaming
         * image, and streaming session. All resources that can be tagged will contain an
         * ARN property, so you do not have to create this ARN yourself.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets the tags for a resource, given its Amazon Resource Names (ARN).</p>
         * <p>This operation supports ARNs for all resource types in Nimble Studio that
         * support tags, including studio, studio component, launch profile, streaming
         * image, and streaming session. All resources that can be tagged will contain an
         * ARN property, so you do not have to create this ARN yourself.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets the tags for a resource, given its Amazon Resource Names (ARN).</p>
         * <p>This operation supports ARNs for all resource types in Nimble Studio that
         * support tags, including studio, studio component, launch profile, streaming
         * image, and streaming session. All resources that can be tagged will contain an
         * ARN property, so you do not have to create this ARN yourself.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add/update users with given persona to launch profile
         * membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/PutLaunchProfileMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLaunchProfileMembersOutcome PutLaunchProfileMembers(const Model::PutLaunchProfileMembersRequest& request) const;

        /**
         * <p>Add/update users with given persona to launch profile
         * membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/PutLaunchProfileMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLaunchProfileMembersOutcomeCallable PutLaunchProfileMembersCallable(const Model::PutLaunchProfileMembersRequest& request) const;

        /**
         * <p>Add/update users with given persona to launch profile
         * membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/PutLaunchProfileMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLaunchProfileMembersAsync(const Model::PutLaunchProfileMembersRequest& request, const PutLaunchProfileMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add/update users with given persona to studio membership.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/PutStudioMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutStudioMembersOutcome PutStudioMembers(const Model::PutStudioMembersRequest& request) const;

        /**
         * <p>Add/update users with given persona to studio membership.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/PutStudioMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutStudioMembersOutcomeCallable PutStudioMembersCallable(const Model::PutStudioMembersRequest& request) const;

        /**
         * <p>Add/update users with given persona to studio membership.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/PutStudioMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutStudioMembersAsync(const Model::PutStudioMembersRequest& request, const PutStudioMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Repairs the SSO configuration for a given studio.</p> <p>If the studio has a
         * valid Amazon Web Services SSO configuration currently associated with it, this
         * operation will fail with a validation error.</p> <p>If the studio does not have
         * a valid Amazon Web Services SSO configuration currently associated with it, then
         * a new Amazon Web Services SSO application is created for the studio and the
         * studio is changed to the READY state.</p> <p>After the Amazon Web Services SSO
         * application is repaired, you must use the Amazon Nimble Studio console to add
         * administrators and users to your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StartStudioSSOConfigurationRepair">AWS
         * API Reference</a></p>
         */
        virtual Model::StartStudioSSOConfigurationRepairOutcome StartStudioSSOConfigurationRepair(const Model::StartStudioSSOConfigurationRepairRequest& request) const;

        /**
         * <p>Repairs the SSO configuration for a given studio.</p> <p>If the studio has a
         * valid Amazon Web Services SSO configuration currently associated with it, this
         * operation will fail with a validation error.</p> <p>If the studio does not have
         * a valid Amazon Web Services SSO configuration currently associated with it, then
         * a new Amazon Web Services SSO application is created for the studio and the
         * studio is changed to the READY state.</p> <p>After the Amazon Web Services SSO
         * application is repaired, you must use the Amazon Nimble Studio console to add
         * administrators and users to your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StartStudioSSOConfigurationRepair">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartStudioSSOConfigurationRepairOutcomeCallable StartStudioSSOConfigurationRepairCallable(const Model::StartStudioSSOConfigurationRepairRequest& request) const;

        /**
         * <p>Repairs the SSO configuration for a given studio.</p> <p>If the studio has a
         * valid Amazon Web Services SSO configuration currently associated with it, this
         * operation will fail with a validation error.</p> <p>If the studio does not have
         * a valid Amazon Web Services SSO configuration currently associated with it, then
         * a new Amazon Web Services SSO application is created for the studio and the
         * studio is changed to the READY state.</p> <p>After the Amazon Web Services SSO
         * application is repaired, you must use the Amazon Nimble Studio console to add
         * administrators and users to your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StartStudioSSOConfigurationRepair">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartStudioSSOConfigurationRepairAsync(const Model::StartStudioSSOConfigurationRepairRequest& request, const StartStudioSSOConfigurationRepairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates tags for a resource, given its ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Creates tags for a resource, given its ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Creates tags for a resource, given its ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchProfileOutcome UpdateLaunchProfile(const Model::UpdateLaunchProfileRequest& request) const;

        /**
         * <p>Update a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateLaunchProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLaunchProfileOutcomeCallable UpdateLaunchProfileCallable(const Model::UpdateLaunchProfileRequest& request) const;

        /**
         * <p>Update a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateLaunchProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLaunchProfileAsync(const Model::UpdateLaunchProfileRequest& request, const UpdateLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a user persona in launch profile membership.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateLaunchProfileMember">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchProfileMemberOutcome UpdateLaunchProfileMember(const Model::UpdateLaunchProfileMemberRequest& request) const;

        /**
         * <p>Update a user persona in launch profile membership.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateLaunchProfileMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLaunchProfileMemberOutcomeCallable UpdateLaunchProfileMemberCallable(const Model::UpdateLaunchProfileMemberRequest& request) const;

        /**
         * <p>Update a user persona in launch profile membership.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateLaunchProfileMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLaunchProfileMemberAsync(const Model::UpdateLaunchProfileMemberRequest& request, const UpdateLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamingImageOutcome UpdateStreamingImage(const Model::UpdateStreamingImageRequest& request) const;

        /**
         * <p>Update streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStreamingImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStreamingImageOutcomeCallable UpdateStreamingImageCallable(const Model::UpdateStreamingImageRequest& request) const;

        /**
         * <p>Update streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStreamingImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStreamingImageAsync(const Model::UpdateStreamingImageRequest& request, const UpdateStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a Studio resource.</p> <p>Currently, this operation only supports
         * updating the displayName of your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStudioOutcome UpdateStudio(const Model::UpdateStudioRequest& request) const;

        /**
         * <p>Update a Studio resource.</p> <p>Currently, this operation only supports
         * updating the displayName of your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStudio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStudioOutcomeCallable UpdateStudioCallable(const Model::UpdateStudioRequest& request) const;

        /**
         * <p>Update a Studio resource.</p> <p>Currently, this operation only supports
         * updating the displayName of your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStudio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStudioAsync(const Model::UpdateStudioRequest& request, const UpdateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStudioComponentOutcome UpdateStudioComponent(const Model::UpdateStudioComponentRequest& request) const;

        /**
         * <p>Updates a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStudioComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStudioComponentOutcomeCallable UpdateStudioComponentCallable(const Model::UpdateStudioComponentRequest& request) const;

        /**
         * <p>Updates a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStudioComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStudioComponentAsync(const Model::UpdateStudioComponentRequest& request, const UpdateStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptEulasAsyncHelper(const Model::AcceptEulasRequest& request, const AcceptEulasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLaunchProfileAsyncHelper(const Model::CreateLaunchProfileRequest& request, const CreateLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamingImageAsyncHelper(const Model::CreateStreamingImageRequest& request, const CreateStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamingSessionAsyncHelper(const Model::CreateStreamingSessionRequest& request, const CreateStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamingSessionStreamAsyncHelper(const Model::CreateStreamingSessionStreamRequest& request, const CreateStreamingSessionStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStudioAsyncHelper(const Model::CreateStudioRequest& request, const CreateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStudioComponentAsyncHelper(const Model::CreateStudioComponentRequest& request, const CreateStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLaunchProfileAsyncHelper(const Model::DeleteLaunchProfileRequest& request, const DeleteLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLaunchProfileMemberAsyncHelper(const Model::DeleteLaunchProfileMemberRequest& request, const DeleteLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStreamingImageAsyncHelper(const Model::DeleteStreamingImageRequest& request, const DeleteStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStreamingSessionAsyncHelper(const Model::DeleteStreamingSessionRequest& request, const DeleteStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStudioAsyncHelper(const Model::DeleteStudioRequest& request, const DeleteStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStudioComponentAsyncHelper(const Model::DeleteStudioComponentRequest& request, const DeleteStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStudioMemberAsyncHelper(const Model::DeleteStudioMemberRequest& request, const DeleteStudioMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEulaAsyncHelper(const Model::GetEulaRequest& request, const GetEulaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLaunchProfileAsyncHelper(const Model::GetLaunchProfileRequest& request, const GetLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLaunchProfileDetailsAsyncHelper(const Model::GetLaunchProfileDetailsRequest& request, const GetLaunchProfileDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLaunchProfileInitializationAsyncHelper(const Model::GetLaunchProfileInitializationRequest& request, const GetLaunchProfileInitializationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLaunchProfileMemberAsyncHelper(const Model::GetLaunchProfileMemberRequest& request, const GetLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingImageAsyncHelper(const Model::GetStreamingImageRequest& request, const GetStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingSessionAsyncHelper(const Model::GetStreamingSessionRequest& request, const GetStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingSessionStreamAsyncHelper(const Model::GetStreamingSessionStreamRequest& request, const GetStreamingSessionStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStudioAsyncHelper(const Model::GetStudioRequest& request, const GetStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStudioComponentAsyncHelper(const Model::GetStudioComponentRequest& request, const GetStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStudioMemberAsyncHelper(const Model::GetStudioMemberRequest& request, const GetStudioMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEulaAcceptancesAsyncHelper(const Model::ListEulaAcceptancesRequest& request, const ListEulaAcceptancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEulasAsyncHelper(const Model::ListEulasRequest& request, const ListEulasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLaunchProfileMembersAsyncHelper(const Model::ListLaunchProfileMembersRequest& request, const ListLaunchProfileMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLaunchProfilesAsyncHelper(const Model::ListLaunchProfilesRequest& request, const ListLaunchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamingImagesAsyncHelper(const Model::ListStreamingImagesRequest& request, const ListStreamingImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamingSessionsAsyncHelper(const Model::ListStreamingSessionsRequest& request, const ListStreamingSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStudioComponentsAsyncHelper(const Model::ListStudioComponentsRequest& request, const ListStudioComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStudioMembersAsyncHelper(const Model::ListStudioMembersRequest& request, const ListStudioMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStudiosAsyncHelper(const Model::ListStudiosRequest& request, const ListStudiosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLaunchProfileMembersAsyncHelper(const Model::PutLaunchProfileMembersRequest& request, const PutLaunchProfileMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutStudioMembersAsyncHelper(const Model::PutStudioMembersRequest& request, const PutStudioMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartStudioSSOConfigurationRepairAsyncHelper(const Model::StartStudioSSOConfigurationRepairRequest& request, const StartStudioSSOConfigurationRepairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLaunchProfileAsyncHelper(const Model::UpdateLaunchProfileRequest& request, const UpdateLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLaunchProfileMemberAsyncHelper(const Model::UpdateLaunchProfileMemberRequest& request, const UpdateLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStreamingImageAsyncHelper(const Model::UpdateStreamingImageRequest& request, const UpdateStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStudioAsyncHelper(const Model::UpdateStudioRequest& request, const UpdateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStudioComponentAsyncHelper(const Model::UpdateStudioComponentRequest& request, const UpdateStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace NimbleStudio
} // namespace Aws
