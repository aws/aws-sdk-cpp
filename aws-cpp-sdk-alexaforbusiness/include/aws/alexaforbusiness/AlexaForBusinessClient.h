﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/alexaforbusiness/model/AssociateDeviceWithRoomResult.h>
#include <aws/alexaforbusiness/model/AssociateSkillGroupWithRoomResult.h>
#include <aws/alexaforbusiness/model/CreateProfileResult.h>
#include <aws/alexaforbusiness/model/CreateRoomResult.h>
#include <aws/alexaforbusiness/model/CreateSkillGroupResult.h>
#include <aws/alexaforbusiness/model/CreateUserResult.h>
#include <aws/alexaforbusiness/model/DeleteProfileResult.h>
#include <aws/alexaforbusiness/model/DeleteRoomResult.h>
#include <aws/alexaforbusiness/model/DeleteRoomSkillParameterResult.h>
#include <aws/alexaforbusiness/model/DeleteSkillGroupResult.h>
#include <aws/alexaforbusiness/model/DeleteUserResult.h>
#include <aws/alexaforbusiness/model/DisassociateDeviceFromRoomResult.h>
#include <aws/alexaforbusiness/model/DisassociateSkillGroupFromRoomResult.h>
#include <aws/alexaforbusiness/model/GetDeviceResult.h>
#include <aws/alexaforbusiness/model/GetProfileResult.h>
#include <aws/alexaforbusiness/model/GetRoomResult.h>
#include <aws/alexaforbusiness/model/GetRoomSkillParameterResult.h>
#include <aws/alexaforbusiness/model/GetSkillGroupResult.h>
#include <aws/alexaforbusiness/model/ListSkillsResult.h>
#include <aws/alexaforbusiness/model/ListTagsResult.h>
#include <aws/alexaforbusiness/model/PutRoomSkillParameterResult.h>
#include <aws/alexaforbusiness/model/ResolveRoomResult.h>
#include <aws/alexaforbusiness/model/RevokeInvitationResult.h>
#include <aws/alexaforbusiness/model/SearchDevicesResult.h>
#include <aws/alexaforbusiness/model/SearchProfilesResult.h>
#include <aws/alexaforbusiness/model/SearchRoomsResult.h>
#include <aws/alexaforbusiness/model/SearchSkillGroupsResult.h>
#include <aws/alexaforbusiness/model/SearchUsersResult.h>
#include <aws/alexaforbusiness/model/SendInvitationResult.h>
#include <aws/alexaforbusiness/model/StartDeviceSyncResult.h>
#include <aws/alexaforbusiness/model/TagResourceResult.h>
#include <aws/alexaforbusiness/model/UntagResourceResult.h>
#include <aws/alexaforbusiness/model/UpdateDeviceResult.h>
#include <aws/alexaforbusiness/model/UpdateProfileResult.h>
#include <aws/alexaforbusiness/model/UpdateRoomResult.h>
#include <aws/alexaforbusiness/model/UpdateSkillGroupResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace AlexaForBusiness
{

namespace Model
{
        class AssociateDeviceWithRoomRequest;
        class AssociateSkillGroupWithRoomRequest;
        class CreateProfileRequest;
        class CreateRoomRequest;
        class CreateSkillGroupRequest;
        class CreateUserRequest;
        class DeleteProfileRequest;
        class DeleteRoomRequest;
        class DeleteRoomSkillParameterRequest;
        class DeleteSkillGroupRequest;
        class DeleteUserRequest;
        class DisassociateDeviceFromRoomRequest;
        class DisassociateSkillGroupFromRoomRequest;
        class GetDeviceRequest;
        class GetProfileRequest;
        class GetRoomRequest;
        class GetRoomSkillParameterRequest;
        class GetSkillGroupRequest;
        class ListSkillsRequest;
        class ListTagsRequest;
        class PutRoomSkillParameterRequest;
        class ResolveRoomRequest;
        class RevokeInvitationRequest;
        class SearchDevicesRequest;
        class SearchProfilesRequest;
        class SearchRoomsRequest;
        class SearchSkillGroupsRequest;
        class SearchUsersRequest;
        class SendInvitationRequest;
        class StartDeviceSyncRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDeviceRequest;
        class UpdateProfileRequest;
        class UpdateRoomRequest;
        class UpdateSkillGroupRequest;

        typedef Aws::Utils::Outcome<AssociateDeviceWithRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> AssociateDeviceWithRoomOutcome;
        typedef Aws::Utils::Outcome<AssociateSkillGroupWithRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> AssociateSkillGroupWithRoomOutcome;
        typedef Aws::Utils::Outcome<CreateProfileResult, Aws::Client::AWSError<AlexaForBusinessErrors>> CreateProfileOutcome;
        typedef Aws::Utils::Outcome<CreateRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> CreateRoomOutcome;
        typedef Aws::Utils::Outcome<CreateSkillGroupResult, Aws::Client::AWSError<AlexaForBusinessErrors>> CreateSkillGroupOutcome;
        typedef Aws::Utils::Outcome<CreateUserResult, Aws::Client::AWSError<AlexaForBusinessErrors>> CreateUserOutcome;
        typedef Aws::Utils::Outcome<DeleteProfileResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteRoomOutcome;
        typedef Aws::Utils::Outcome<DeleteRoomSkillParameterResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteRoomSkillParameterOutcome;
        typedef Aws::Utils::Outcome<DeleteSkillGroupResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteSkillGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteUserResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<DisassociateDeviceFromRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DisassociateDeviceFromRoomOutcome;
        typedef Aws::Utils::Outcome<DisassociateSkillGroupFromRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DisassociateSkillGroupFromRoomOutcome;
        typedef Aws::Utils::Outcome<GetDeviceResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetDeviceOutcome;
        typedef Aws::Utils::Outcome<GetProfileResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetProfileOutcome;
        typedef Aws::Utils::Outcome<GetRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetRoomOutcome;
        typedef Aws::Utils::Outcome<GetRoomSkillParameterResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetRoomSkillParameterOutcome;
        typedef Aws::Utils::Outcome<GetSkillGroupResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetSkillGroupOutcome;
        typedef Aws::Utils::Outcome<ListSkillsResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ListSkillsOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ListTagsOutcome;
        typedef Aws::Utils::Outcome<PutRoomSkillParameterResult, Aws::Client::AWSError<AlexaForBusinessErrors>> PutRoomSkillParameterOutcome;
        typedef Aws::Utils::Outcome<ResolveRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ResolveRoomOutcome;
        typedef Aws::Utils::Outcome<RevokeInvitationResult, Aws::Client::AWSError<AlexaForBusinessErrors>> RevokeInvitationOutcome;
        typedef Aws::Utils::Outcome<SearchDevicesResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SearchDevicesOutcome;
        typedef Aws::Utils::Outcome<SearchProfilesResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SearchProfilesOutcome;
        typedef Aws::Utils::Outcome<SearchRoomsResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SearchRoomsOutcome;
        typedef Aws::Utils::Outcome<SearchSkillGroupsResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SearchSkillGroupsOutcome;
        typedef Aws::Utils::Outcome<SearchUsersResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SearchUsersOutcome;
        typedef Aws::Utils::Outcome<SendInvitationResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SendInvitationOutcome;
        typedef Aws::Utils::Outcome<StartDeviceSyncResult, Aws::Client::AWSError<AlexaForBusinessErrors>> StartDeviceSyncOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<AlexaForBusinessErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDeviceResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateDeviceOutcome;
        typedef Aws::Utils::Outcome<UpdateProfileResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateProfileOutcome;
        typedef Aws::Utils::Outcome<UpdateRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateRoomOutcome;
        typedef Aws::Utils::Outcome<UpdateSkillGroupResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateSkillGroupOutcome;

        typedef std::future<AssociateDeviceWithRoomOutcome> AssociateDeviceWithRoomOutcomeCallable;
        typedef std::future<AssociateSkillGroupWithRoomOutcome> AssociateSkillGroupWithRoomOutcomeCallable;
        typedef std::future<CreateProfileOutcome> CreateProfileOutcomeCallable;
        typedef std::future<CreateRoomOutcome> CreateRoomOutcomeCallable;
        typedef std::future<CreateSkillGroupOutcome> CreateSkillGroupOutcomeCallable;
        typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
        typedef std::future<DeleteProfileOutcome> DeleteProfileOutcomeCallable;
        typedef std::future<DeleteRoomOutcome> DeleteRoomOutcomeCallable;
        typedef std::future<DeleteRoomSkillParameterOutcome> DeleteRoomSkillParameterOutcomeCallable;
        typedef std::future<DeleteSkillGroupOutcome> DeleteSkillGroupOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DisassociateDeviceFromRoomOutcome> DisassociateDeviceFromRoomOutcomeCallable;
        typedef std::future<DisassociateSkillGroupFromRoomOutcome> DisassociateSkillGroupFromRoomOutcomeCallable;
        typedef std::future<GetDeviceOutcome> GetDeviceOutcomeCallable;
        typedef std::future<GetProfileOutcome> GetProfileOutcomeCallable;
        typedef std::future<GetRoomOutcome> GetRoomOutcomeCallable;
        typedef std::future<GetRoomSkillParameterOutcome> GetRoomSkillParameterOutcomeCallable;
        typedef std::future<GetSkillGroupOutcome> GetSkillGroupOutcomeCallable;
        typedef std::future<ListSkillsOutcome> ListSkillsOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<PutRoomSkillParameterOutcome> PutRoomSkillParameterOutcomeCallable;
        typedef std::future<ResolveRoomOutcome> ResolveRoomOutcomeCallable;
        typedef std::future<RevokeInvitationOutcome> RevokeInvitationOutcomeCallable;
        typedef std::future<SearchDevicesOutcome> SearchDevicesOutcomeCallable;
        typedef std::future<SearchProfilesOutcome> SearchProfilesOutcomeCallable;
        typedef std::future<SearchRoomsOutcome> SearchRoomsOutcomeCallable;
        typedef std::future<SearchSkillGroupsOutcome> SearchSkillGroupsOutcomeCallable;
        typedef std::future<SearchUsersOutcome> SearchUsersOutcomeCallable;
        typedef std::future<SendInvitationOutcome> SendInvitationOutcomeCallable;
        typedef std::future<StartDeviceSyncOutcome> StartDeviceSyncOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDeviceOutcome> UpdateDeviceOutcomeCallable;
        typedef std::future<UpdateProfileOutcome> UpdateProfileOutcomeCallable;
        typedef std::future<UpdateRoomOutcome> UpdateRoomOutcomeCallable;
        typedef std::future<UpdateSkillGroupOutcome> UpdateSkillGroupOutcomeCallable;
} // namespace Model

  class AlexaForBusinessClient;

    typedef std::function<void(const AlexaForBusinessClient*, const Model::AssociateDeviceWithRoomRequest&, const Model::AssociateDeviceWithRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDeviceWithRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::AssociateSkillGroupWithRoomRequest&, const Model::AssociateSkillGroupWithRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSkillGroupWithRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::CreateProfileRequest&, const Model::CreateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProfileResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::CreateRoomRequest&, const Model::CreateRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::CreateSkillGroupRequest&, const Model::CreateSkillGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSkillGroupResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteProfileRequest&, const Model::DeleteProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteRoomRequest&, const Model::DeleteRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteRoomSkillParameterRequest&, const Model::DeleteRoomSkillParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoomSkillParameterResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteSkillGroupRequest&, const Model::DeleteSkillGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSkillGroupResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DisassociateDeviceFromRoomRequest&, const Model::DisassociateDeviceFromRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDeviceFromRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DisassociateSkillGroupFromRoomRequest&, const Model::DisassociateSkillGroupFromRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSkillGroupFromRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetDeviceRequest&, const Model::GetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetProfileRequest&, const Model::GetProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetRoomRequest&, const Model::GetRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetRoomSkillParameterRequest&, const Model::GetRoomSkillParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoomSkillParameterResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetSkillGroupRequest&, const Model::GetSkillGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSkillGroupResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ListSkillsRequest&, const Model::ListSkillsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSkillsResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::PutRoomSkillParameterRequest&, const Model::PutRoomSkillParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRoomSkillParameterResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ResolveRoomRequest&, const Model::ResolveRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResolveRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::RevokeInvitationRequest&, const Model::RevokeInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeInvitationResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SearchDevicesRequest&, const Model::SearchDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchDevicesResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SearchProfilesRequest&, const Model::SearchProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchProfilesResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SearchRoomsRequest&, const Model::SearchRoomsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchRoomsResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SearchSkillGroupsRequest&, const Model::SearchSkillGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchSkillGroupsResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SearchUsersRequest&, const Model::SearchUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchUsersResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SendInvitationRequest&, const Model::SendInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendInvitationResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::StartDeviceSyncRequest&, const Model::StartDeviceSyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDeviceSyncResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateDeviceRequest&, const Model::UpdateDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeviceResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateProfileRequest&, const Model::UpdateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProfileResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateRoomRequest&, const Model::UpdateRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateSkillGroupRequest&, const Model::UpdateSkillGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSkillGroupResponseReceivedHandler;

  /**
   * <p>Alexa for Business makes it easy for you to use Alexa in your organization.
   * Alexa for Business gives you the tools you need to manage Alexa devices, enroll
   * your users, and assign skills, at scale. You can build your own context-aware
   * voice skills using the Alexa Skills Kit, and the Alexa for Business APIs, and
   * you can make these available as private skills for your organization. Alexa for
   * Business also makes it easy to voice-enable your products and services,
   * providing context-aware voice experiences for your customers.</p>
   */
  class AWS_ALEXAFORBUSINESS_API AlexaForBusinessClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AlexaForBusinessClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AlexaForBusinessClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AlexaForBusinessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AlexaForBusinessClient();

        inline virtual const char* GetServiceClientName() const override { return "a4b"; }


        /**
         * <p>Associates a device to a given room. This applies all the settings from the
         * room profile to the device, and all the skills in any skill groups added to that
         * room. This operation requires the device to be online, or a manual sync is
         * required. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateDeviceWithRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDeviceWithRoomOutcome AssociateDeviceWithRoom(const Model::AssociateDeviceWithRoomRequest& request) const;

        /**
         * <p>Associates a device to a given room. This applies all the settings from the
         * room profile to the device, and all the skills in any skill groups added to that
         * room. This operation requires the device to be online, or a manual sync is
         * required. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateDeviceWithRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDeviceWithRoomOutcomeCallable AssociateDeviceWithRoomCallable(const Model::AssociateDeviceWithRoomRequest& request) const;

        /**
         * <p>Associates a device to a given room. This applies all the settings from the
         * room profile to the device, and all the skills in any skill groups added to that
         * room. This operation requires the device to be online, or a manual sync is
         * required. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateDeviceWithRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDeviceWithRoomAsync(const Model::AssociateDeviceWithRoomRequest& request, const AssociateDeviceWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a skill group to a given room. This enables all skills in the
         * associated skill group on all devices in the room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillGroupWithRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSkillGroupWithRoomOutcome AssociateSkillGroupWithRoom(const Model::AssociateSkillGroupWithRoomRequest& request) const;

        /**
         * <p>Associates a skill group to a given room. This enables all skills in the
         * associated skill group on all devices in the room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillGroupWithRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSkillGroupWithRoomOutcomeCallable AssociateSkillGroupWithRoomCallable(const Model::AssociateSkillGroupWithRoomRequest& request) const;

        /**
         * <p>Associates a skill group to a given room. This enables all skills in the
         * associated skill group on all devices in the room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillGroupWithRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSkillGroupWithRoomAsync(const Model::AssociateSkillGroupWithRoomRequest& request, const AssociateSkillGroupWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new room profile with the specified details.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileOutcome CreateProfile(const Model::CreateProfileRequest& request) const;

        /**
         * <p>Creates a new room profile with the specified details.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProfileOutcomeCallable CreateProfileCallable(const Model::CreateProfileRequest& request) const;

        /**
         * <p>Creates a new room profile with the specified details.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProfileAsync(const Model::CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a room with the specified details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoomOutcome CreateRoom(const Model::CreateRoomRequest& request) const;

        /**
         * <p>Creates a room with the specified details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRoomOutcomeCallable CreateRoomCallable(const Model::CreateRoomRequest& request) const;

        /**
         * <p>Creates a room with the specified details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoomAsync(const Model::CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a skill group with a specified name and description.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSkillGroupOutcome CreateSkillGroup(const Model::CreateSkillGroupRequest& request) const;

        /**
         * <p>Creates a skill group with a specified name and description.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateSkillGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSkillGroupOutcomeCallable CreateSkillGroupCallable(const Model::CreateSkillGroupRequest& request) const;

        /**
         * <p>Creates a skill group with a specified name and description.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateSkillGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSkillGroupAsync(const Model::CreateSkillGroupRequest& request, const CreateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a room profile by the profile ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileOutcome DeleteProfile(const Model::DeleteProfileRequest& request) const;

        /**
         * <p>Deletes a room profile by the profile ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProfileOutcomeCallable DeleteProfileCallable(const Model::DeleteProfileRequest& request) const;

        /**
         * <p>Deletes a room profile by the profile ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProfileAsync(const Model::DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a room by the room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoomOutcome DeleteRoom(const Model::DeleteRoomRequest& request) const;

        /**
         * <p>Deletes a room by the room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRoomOutcomeCallable DeleteRoomCallable(const Model::DeleteRoomRequest& request) const;

        /**
         * <p>Deletes a room by the room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoomAsync(const Model::DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes room skill parameter details by room, skill, and parameter key
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteRoomSkillParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoomSkillParameterOutcome DeleteRoomSkillParameter(const Model::DeleteRoomSkillParameterRequest& request) const;

        /**
         * <p>Deletes room skill parameter details by room, skill, and parameter key
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteRoomSkillParameter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRoomSkillParameterOutcomeCallable DeleteRoomSkillParameterCallable(const Model::DeleteRoomSkillParameterRequest& request) const;

        /**
         * <p>Deletes room skill parameter details by room, skill, and parameter key
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteRoomSkillParameter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoomSkillParameterAsync(const Model::DeleteRoomSkillParameterRequest& request, const DeleteRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a skill group by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSkillGroupOutcome DeleteSkillGroup(const Model::DeleteSkillGroupRequest& request) const;

        /**
         * <p>Deletes a skill group by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteSkillGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSkillGroupOutcomeCallable DeleteSkillGroupCallable(const Model::DeleteSkillGroupRequest& request) const;

        /**
         * <p>Deletes a skill group by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteSkillGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSkillGroupAsync(const Model::DeleteSkillGroupRequest& request, const DeleteSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified user by user ARN and enrollment ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes a specified user by user ARN and enrollment ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes a specified user by user ARN and enrollment ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a device from its current room. The device continues to be
         * connected to the Wi-Fi network and is still registered to the account. The
         * device settings and skills are removed from the room.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateDeviceFromRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDeviceFromRoomOutcome DisassociateDeviceFromRoom(const Model::DisassociateDeviceFromRoomRequest& request) const;

        /**
         * <p>Disassociates a device from its current room. The device continues to be
         * connected to the Wi-Fi network and is still registered to the account. The
         * device settings and skills are removed from the room.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateDeviceFromRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateDeviceFromRoomOutcomeCallable DisassociateDeviceFromRoomCallable(const Model::DisassociateDeviceFromRoomRequest& request) const;

        /**
         * <p>Disassociates a device from its current room. The device continues to be
         * connected to the Wi-Fi network and is still registered to the account. The
         * device settings and skills are removed from the room.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateDeviceFromRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateDeviceFromRoomAsync(const Model::DisassociateDeviceFromRoomRequest& request, const DisassociateDeviceFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a skill group from a specified room. This disables all skills
         * in the skill group on all devices in the room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillGroupFromRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSkillGroupFromRoomOutcome DisassociateSkillGroupFromRoom(const Model::DisassociateSkillGroupFromRoomRequest& request) const;

        /**
         * <p>Disassociates a skill group from a specified room. This disables all skills
         * in the skill group on all devices in the room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillGroupFromRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateSkillGroupFromRoomOutcomeCallable DisassociateSkillGroupFromRoomCallable(const Model::DisassociateSkillGroupFromRoomRequest& request) const;

        /**
         * <p>Disassociates a skill group from a specified room. This disables all skills
         * in the skill group on all devices in the room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillGroupFromRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateSkillGroupFromRoomAsync(const Model::DisassociateSkillGroupFromRoomRequest& request, const DisassociateSkillGroupFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details of a device by device ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;

        /**
         * <p>Gets the details of a device by device ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceOutcomeCallable GetDeviceCallable(const Model::GetDeviceRequest& request) const;

        /**
         * <p>Gets the details of a device by device ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceAsync(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details of a room profile by profile ARN.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileOutcome GetProfile(const Model::GetProfileRequest& request) const;

        /**
         * <p>Gets the details of a room profile by profile ARN.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProfileOutcomeCallable GetProfileCallable(const Model::GetProfileRequest& request) const;

        /**
         * <p>Gets the details of a room profile by profile ARN.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProfileAsync(const Model::GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets room details by room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRoomOutcome GetRoom(const Model::GetRoomRequest& request) const;

        /**
         * <p>Gets room details by room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRoomOutcomeCallable GetRoomCallable(const Model::GetRoomRequest& request) const;

        /**
         * <p>Gets room details by room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRoomAsync(const Model::GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets room skill parameter details by room, skill, and parameter key
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetRoomSkillParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRoomSkillParameterOutcome GetRoomSkillParameter(const Model::GetRoomSkillParameterRequest& request) const;

        /**
         * <p>Gets room skill parameter details by room, skill, and parameter key
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetRoomSkillParameter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRoomSkillParameterOutcomeCallable GetRoomSkillParameterCallable(const Model::GetRoomSkillParameterRequest& request) const;

        /**
         * <p>Gets room skill parameter details by room, skill, and parameter key
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetRoomSkillParameter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRoomSkillParameterAsync(const Model::GetRoomSkillParameterRequest& request, const GetRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets skill group details by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSkillGroupOutcome GetSkillGroup(const Model::GetSkillGroupRequest& request) const;

        /**
         * <p>Gets skill group details by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetSkillGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSkillGroupOutcomeCallable GetSkillGroupCallable(const Model::GetSkillGroupRequest& request) const;

        /**
         * <p>Gets skill group details by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetSkillGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSkillGroupAsync(const Model::GetSkillGroupRequest& request, const GetSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all enabled skills in a specific skill group.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkills">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSkillsOutcome ListSkills(const Model::ListSkillsRequest& request) const;

        /**
         * <p>Lists all enabled skills in a specific skill group.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkills">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSkillsOutcomeCallable ListSkillsCallable(const Model::ListSkillsRequest& request) const;

        /**
         * <p>Lists all enabled skills in a specific skill group.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkills">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSkillsAsync(const Model::ListSkillsRequest& request, const ListSkillsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags for a specific resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * <p>Lists all tags for a specific resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * <p>Lists all tags for a specific resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates room skill parameter details by room, skill, and parameter key ID.
         * Not all skills have a room skill parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutRoomSkillParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRoomSkillParameterOutcome PutRoomSkillParameter(const Model::PutRoomSkillParameterRequest& request) const;

        /**
         * <p>Updates room skill parameter details by room, skill, and parameter key ID.
         * Not all skills have a room skill parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutRoomSkillParameter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRoomSkillParameterOutcomeCallable PutRoomSkillParameterCallable(const Model::PutRoomSkillParameterRequest& request) const;

        /**
         * <p>Updates room skill parameter details by room, skill, and parameter key ID.
         * Not all skills have a room skill parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutRoomSkillParameter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRoomSkillParameterAsync(const Model::PutRoomSkillParameterRequest& request, const PutRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Determines the details for the room from which a skill request was invoked.
         * This operation is used by skill developers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ResolveRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::ResolveRoomOutcome ResolveRoom(const Model::ResolveRoomRequest& request) const;

        /**
         * <p>Determines the details for the room from which a skill request was invoked.
         * This operation is used by skill developers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ResolveRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResolveRoomOutcomeCallable ResolveRoomCallable(const Model::ResolveRoomRequest& request) const;

        /**
         * <p>Determines the details for the room from which a skill request was invoked.
         * This operation is used by skill developers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ResolveRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResolveRoomAsync(const Model::ResolveRoomRequest& request, const ResolveRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes an invitation and invalidates the enrollment URL.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RevokeInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeInvitationOutcome RevokeInvitation(const Model::RevokeInvitationRequest& request) const;

        /**
         * <p>Revokes an invitation and invalidates the enrollment URL.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RevokeInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeInvitationOutcomeCallable RevokeInvitationCallable(const Model::RevokeInvitationRequest& request) const;

        /**
         * <p>Revokes an invitation and invalidates the enrollment URL.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RevokeInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeInvitationAsync(const Model::RevokeInvitationRequest& request, const RevokeInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches devices and lists the ones that meet a set of filter
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchDevicesOutcome SearchDevices(const Model::SearchDevicesRequest& request) const;

        /**
         * <p>Searches devices and lists the ones that meet a set of filter
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchDevices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchDevicesOutcomeCallable SearchDevicesCallable(const Model::SearchDevicesRequest& request) const;

        /**
         * <p>Searches devices and lists the ones that meet a set of filter
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchDevices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchDevicesAsync(const Model::SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches room profiles and lists the ones that meet a set of filter
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProfilesOutcome SearchProfiles(const Model::SearchProfilesRequest& request) const;

        /**
         * <p>Searches room profiles and lists the ones that meet a set of filter
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchProfilesOutcomeCallable SearchProfilesCallable(const Model::SearchProfilesRequest& request) const;

        /**
         * <p>Searches room profiles and lists the ones that meet a set of filter
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchProfilesAsync(const Model::SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches rooms and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchRooms">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchRoomsOutcome SearchRooms(const Model::SearchRoomsRequest& request) const;

        /**
         * <p>Searches rooms and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchRooms">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchRoomsOutcomeCallable SearchRoomsCallable(const Model::SearchRoomsRequest& request) const;

        /**
         * <p>Searches rooms and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchRooms">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchRoomsAsync(const Model::SearchRoomsRequest& request, const SearchRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches skill groups and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchSkillGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSkillGroupsOutcome SearchSkillGroups(const Model::SearchSkillGroupsRequest& request) const;

        /**
         * <p>Searches skill groups and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchSkillGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchSkillGroupsOutcomeCallable SearchSkillGroupsCallable(const Model::SearchSkillGroupsRequest& request) const;

        /**
         * <p>Searches skill groups and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchSkillGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchSkillGroupsAsync(const Model::SearchSkillGroupsRequest& request, const SearchSkillGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches users and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchUsersOutcome SearchUsers(const Model::SearchUsersRequest& request) const;

        /**
         * <p>Searches users and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchUsersOutcomeCallable SearchUsersCallable(const Model::SearchUsersRequest& request) const;

        /**
         * <p>Searches users and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchUsersAsync(const Model::SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends an enrollment invitation email with a URL to a user. The URL is valid
         * for 72 hours or until you call this operation again, whichever comes first.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SendInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::SendInvitationOutcome SendInvitation(const Model::SendInvitationRequest& request) const;

        /**
         * <p>Sends an enrollment invitation email with a URL to a user. The URL is valid
         * for 72 hours or until you call this operation again, whichever comes first.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SendInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendInvitationOutcomeCallable SendInvitationCallable(const Model::SendInvitationRequest& request) const;

        /**
         * <p>Sends an enrollment invitation email with a URL to a user. The URL is valid
         * for 72 hours or until you call this operation again, whichever comes first.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SendInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendInvitationAsync(const Model::SendInvitationRequest& request, const SendInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets a device and its account to the known default settings by clearing all
         * information and settings set by previous users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/StartDeviceSync">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDeviceSyncOutcome StartDeviceSync(const Model::StartDeviceSyncRequest& request) const;

        /**
         * <p>Resets a device and its account to the known default settings by clearing all
         * information and settings set by previous users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/StartDeviceSync">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDeviceSyncOutcomeCallable StartDeviceSyncCallable(const Model::StartDeviceSyncRequest& request) const;

        /**
         * <p>Resets a device and its account to the known default settings by clearing all
         * information and settings set by previous users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/StartDeviceSync">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDeviceSyncAsync(const Model::StartDeviceSyncRequest& request, const StartDeviceSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds metadata tags to a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds metadata tags to a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds metadata tags to a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes metadata tags from a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes metadata tags from a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes metadata tags from a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the device name by device ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceOutcome UpdateDevice(const Model::UpdateDeviceRequest& request) const;

        /**
         * <p>Updates the device name by device ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceOutcomeCallable UpdateDeviceCallable(const Model::UpdateDeviceRequest& request) const;

        /**
         * <p>Updates the device name by device ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceAsync(const Model::UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing room profile by room profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfileOutcome UpdateProfile(const Model::UpdateProfileRequest& request) const;

        /**
         * <p>Updates an existing room profile by room profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProfileOutcomeCallable UpdateProfileCallable(const Model::UpdateProfileRequest& request) const;

        /**
         * <p>Updates an existing room profile by room profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProfileAsync(const Model::UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates room details by room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoomOutcome UpdateRoom(const Model::UpdateRoomRequest& request) const;

        /**
         * <p>Updates room details by room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoomOutcomeCallable UpdateRoomCallable(const Model::UpdateRoomRequest& request) const;

        /**
         * <p>Updates room details by room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoomAsync(const Model::UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates skill group details by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSkillGroupOutcome UpdateSkillGroup(const Model::UpdateSkillGroupRequest& request) const;

        /**
         * <p>Updates skill group details by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateSkillGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSkillGroupOutcomeCallable UpdateSkillGroupCallable(const Model::UpdateSkillGroupRequest& request) const;

        /**
         * <p>Updates skill group details by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateSkillGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSkillGroupAsync(const Model::UpdateSkillGroupRequest& request, const UpdateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AssociateDeviceWithRoomAsyncHelper(const Model::AssociateDeviceWithRoomRequest& request, const AssociateDeviceWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateSkillGroupWithRoomAsyncHelper(const Model::AssociateSkillGroupWithRoomRequest& request, const AssociateSkillGroupWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProfileAsyncHelper(const Model::CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRoomAsyncHelper(const Model::CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSkillGroupAsyncHelper(const Model::CreateSkillGroupRequest& request, const CreateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProfileAsyncHelper(const Model::DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRoomAsyncHelper(const Model::DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRoomSkillParameterAsyncHelper(const Model::DeleteRoomSkillParameterRequest& request, const DeleteRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSkillGroupAsyncHelper(const Model::DeleteSkillGroupRequest& request, const DeleteSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateDeviceFromRoomAsyncHelper(const Model::DisassociateDeviceFromRoomRequest& request, const DisassociateDeviceFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateSkillGroupFromRoomAsyncHelper(const Model::DisassociateSkillGroupFromRoomRequest& request, const DisassociateSkillGroupFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeviceAsyncHelper(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProfileAsyncHelper(const Model::GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRoomAsyncHelper(const Model::GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRoomSkillParameterAsyncHelper(const Model::GetRoomSkillParameterRequest& request, const GetRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSkillGroupAsyncHelper(const Model::GetSkillGroupRequest& request, const GetSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSkillsAsyncHelper(const Model::ListSkillsRequest& request, const ListSkillsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRoomSkillParameterAsyncHelper(const Model::PutRoomSkillParameterRequest& request, const PutRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResolveRoomAsyncHelper(const Model::ResolveRoomRequest& request, const ResolveRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeInvitationAsyncHelper(const Model::RevokeInvitationRequest& request, const RevokeInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchDevicesAsyncHelper(const Model::SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchProfilesAsyncHelper(const Model::SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchRoomsAsyncHelper(const Model::SearchRoomsRequest& request, const SearchRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchSkillGroupsAsyncHelper(const Model::SearchSkillGroupsRequest& request, const SearchSkillGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchUsersAsyncHelper(const Model::SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendInvitationAsyncHelper(const Model::SendInvitationRequest& request, const SendInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDeviceSyncAsyncHelper(const Model::StartDeviceSyncRequest& request, const StartDeviceSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDeviceAsyncHelper(const Model::UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProfileAsyncHelper(const Model::UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoomAsyncHelper(const Model::UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSkillGroupAsyncHelper(const Model::UpdateSkillGroupRequest& request, const UpdateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AlexaForBusiness
} // namespace Aws
