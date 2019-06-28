/*
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
#include <aws/alexaforbusiness/model/ApproveSkillResult.h>
#include <aws/alexaforbusiness/model/AssociateContactWithAddressBookResult.h>
#include <aws/alexaforbusiness/model/AssociateDeviceWithNetworkProfileResult.h>
#include <aws/alexaforbusiness/model/AssociateDeviceWithRoomResult.h>
#include <aws/alexaforbusiness/model/AssociateSkillGroupWithRoomResult.h>
#include <aws/alexaforbusiness/model/AssociateSkillWithSkillGroupResult.h>
#include <aws/alexaforbusiness/model/AssociateSkillWithUsersResult.h>
#include <aws/alexaforbusiness/model/CreateAddressBookResult.h>
#include <aws/alexaforbusiness/model/CreateBusinessReportScheduleResult.h>
#include <aws/alexaforbusiness/model/CreateConferenceProviderResult.h>
#include <aws/alexaforbusiness/model/CreateContactResult.h>
#include <aws/alexaforbusiness/model/CreateGatewayGroupResult.h>
#include <aws/alexaforbusiness/model/CreateNetworkProfileResult.h>
#include <aws/alexaforbusiness/model/CreateProfileResult.h>
#include <aws/alexaforbusiness/model/CreateRoomResult.h>
#include <aws/alexaforbusiness/model/CreateSkillGroupResult.h>
#include <aws/alexaforbusiness/model/CreateUserResult.h>
#include <aws/alexaforbusiness/model/DeleteAddressBookResult.h>
#include <aws/alexaforbusiness/model/DeleteBusinessReportScheduleResult.h>
#include <aws/alexaforbusiness/model/DeleteConferenceProviderResult.h>
#include <aws/alexaforbusiness/model/DeleteContactResult.h>
#include <aws/alexaforbusiness/model/DeleteDeviceResult.h>
#include <aws/alexaforbusiness/model/DeleteDeviceUsageDataResult.h>
#include <aws/alexaforbusiness/model/DeleteGatewayGroupResult.h>
#include <aws/alexaforbusiness/model/DeleteNetworkProfileResult.h>
#include <aws/alexaforbusiness/model/DeleteProfileResult.h>
#include <aws/alexaforbusiness/model/DeleteRoomResult.h>
#include <aws/alexaforbusiness/model/DeleteRoomSkillParameterResult.h>
#include <aws/alexaforbusiness/model/DeleteSkillAuthorizationResult.h>
#include <aws/alexaforbusiness/model/DeleteSkillGroupResult.h>
#include <aws/alexaforbusiness/model/DeleteUserResult.h>
#include <aws/alexaforbusiness/model/DisassociateContactFromAddressBookResult.h>
#include <aws/alexaforbusiness/model/DisassociateDeviceFromRoomResult.h>
#include <aws/alexaforbusiness/model/DisassociateSkillFromSkillGroupResult.h>
#include <aws/alexaforbusiness/model/DisassociateSkillFromUsersResult.h>
#include <aws/alexaforbusiness/model/DisassociateSkillGroupFromRoomResult.h>
#include <aws/alexaforbusiness/model/ForgetSmartHomeAppliancesResult.h>
#include <aws/alexaforbusiness/model/GetAddressBookResult.h>
#include <aws/alexaforbusiness/model/GetConferencePreferenceResult.h>
#include <aws/alexaforbusiness/model/GetConferenceProviderResult.h>
#include <aws/alexaforbusiness/model/GetContactResult.h>
#include <aws/alexaforbusiness/model/GetDeviceResult.h>
#include <aws/alexaforbusiness/model/GetGatewayResult.h>
#include <aws/alexaforbusiness/model/GetGatewayGroupResult.h>
#include <aws/alexaforbusiness/model/GetInvitationConfigurationResult.h>
#include <aws/alexaforbusiness/model/GetNetworkProfileResult.h>
#include <aws/alexaforbusiness/model/GetProfileResult.h>
#include <aws/alexaforbusiness/model/GetRoomResult.h>
#include <aws/alexaforbusiness/model/GetRoomSkillParameterResult.h>
#include <aws/alexaforbusiness/model/GetSkillGroupResult.h>
#include <aws/alexaforbusiness/model/ListBusinessReportSchedulesResult.h>
#include <aws/alexaforbusiness/model/ListConferenceProvidersResult.h>
#include <aws/alexaforbusiness/model/ListDeviceEventsResult.h>
#include <aws/alexaforbusiness/model/ListGatewayGroupsResult.h>
#include <aws/alexaforbusiness/model/ListGatewaysResult.h>
#include <aws/alexaforbusiness/model/ListSkillsResult.h>
#include <aws/alexaforbusiness/model/ListSkillsStoreCategoriesResult.h>
#include <aws/alexaforbusiness/model/ListSkillsStoreSkillsByCategoryResult.h>
#include <aws/alexaforbusiness/model/ListSmartHomeAppliancesResult.h>
#include <aws/alexaforbusiness/model/ListTagsResult.h>
#include <aws/alexaforbusiness/model/PutConferencePreferenceResult.h>
#include <aws/alexaforbusiness/model/PutInvitationConfigurationResult.h>
#include <aws/alexaforbusiness/model/PutRoomSkillParameterResult.h>
#include <aws/alexaforbusiness/model/PutSkillAuthorizationResult.h>
#include <aws/alexaforbusiness/model/RegisterAVSDeviceResult.h>
#include <aws/alexaforbusiness/model/RejectSkillResult.h>
#include <aws/alexaforbusiness/model/ResolveRoomResult.h>
#include <aws/alexaforbusiness/model/RevokeInvitationResult.h>
#include <aws/alexaforbusiness/model/SearchAddressBooksResult.h>
#include <aws/alexaforbusiness/model/SearchContactsResult.h>
#include <aws/alexaforbusiness/model/SearchDevicesResult.h>
#include <aws/alexaforbusiness/model/SearchNetworkProfilesResult.h>
#include <aws/alexaforbusiness/model/SearchProfilesResult.h>
#include <aws/alexaforbusiness/model/SearchRoomsResult.h>
#include <aws/alexaforbusiness/model/SearchSkillGroupsResult.h>
#include <aws/alexaforbusiness/model/SearchUsersResult.h>
#include <aws/alexaforbusiness/model/SendAnnouncementResult.h>
#include <aws/alexaforbusiness/model/SendInvitationResult.h>
#include <aws/alexaforbusiness/model/StartDeviceSyncResult.h>
#include <aws/alexaforbusiness/model/StartSmartHomeApplianceDiscoveryResult.h>
#include <aws/alexaforbusiness/model/TagResourceResult.h>
#include <aws/alexaforbusiness/model/UntagResourceResult.h>
#include <aws/alexaforbusiness/model/UpdateAddressBookResult.h>
#include <aws/alexaforbusiness/model/UpdateBusinessReportScheduleResult.h>
#include <aws/alexaforbusiness/model/UpdateConferenceProviderResult.h>
#include <aws/alexaforbusiness/model/UpdateContactResult.h>
#include <aws/alexaforbusiness/model/UpdateDeviceResult.h>
#include <aws/alexaforbusiness/model/UpdateGatewayResult.h>
#include <aws/alexaforbusiness/model/UpdateGatewayGroupResult.h>
#include <aws/alexaforbusiness/model/UpdateNetworkProfileResult.h>
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
        class ApproveSkillRequest;
        class AssociateContactWithAddressBookRequest;
        class AssociateDeviceWithNetworkProfileRequest;
        class AssociateDeviceWithRoomRequest;
        class AssociateSkillGroupWithRoomRequest;
        class AssociateSkillWithSkillGroupRequest;
        class AssociateSkillWithUsersRequest;
        class CreateAddressBookRequest;
        class CreateBusinessReportScheduleRequest;
        class CreateConferenceProviderRequest;
        class CreateContactRequest;
        class CreateGatewayGroupRequest;
        class CreateNetworkProfileRequest;
        class CreateProfileRequest;
        class CreateRoomRequest;
        class CreateSkillGroupRequest;
        class CreateUserRequest;
        class DeleteAddressBookRequest;
        class DeleteBusinessReportScheduleRequest;
        class DeleteConferenceProviderRequest;
        class DeleteContactRequest;
        class DeleteDeviceRequest;
        class DeleteDeviceUsageDataRequest;
        class DeleteGatewayGroupRequest;
        class DeleteNetworkProfileRequest;
        class DeleteProfileRequest;
        class DeleteRoomRequest;
        class DeleteRoomSkillParameterRequest;
        class DeleteSkillAuthorizationRequest;
        class DeleteSkillGroupRequest;
        class DeleteUserRequest;
        class DisassociateContactFromAddressBookRequest;
        class DisassociateDeviceFromRoomRequest;
        class DisassociateSkillFromSkillGroupRequest;
        class DisassociateSkillFromUsersRequest;
        class DisassociateSkillGroupFromRoomRequest;
        class ForgetSmartHomeAppliancesRequest;
        class GetAddressBookRequest;
        class GetConferencePreferenceRequest;
        class GetConferenceProviderRequest;
        class GetContactRequest;
        class GetDeviceRequest;
        class GetGatewayRequest;
        class GetGatewayGroupRequest;
        class GetInvitationConfigurationRequest;
        class GetNetworkProfileRequest;
        class GetProfileRequest;
        class GetRoomRequest;
        class GetRoomSkillParameterRequest;
        class GetSkillGroupRequest;
        class ListBusinessReportSchedulesRequest;
        class ListConferenceProvidersRequest;
        class ListDeviceEventsRequest;
        class ListGatewayGroupsRequest;
        class ListGatewaysRequest;
        class ListSkillsRequest;
        class ListSkillsStoreCategoriesRequest;
        class ListSkillsStoreSkillsByCategoryRequest;
        class ListSmartHomeAppliancesRequest;
        class ListTagsRequest;
        class PutConferencePreferenceRequest;
        class PutInvitationConfigurationRequest;
        class PutRoomSkillParameterRequest;
        class PutSkillAuthorizationRequest;
        class RegisterAVSDeviceRequest;
        class RejectSkillRequest;
        class ResolveRoomRequest;
        class RevokeInvitationRequest;
        class SearchAddressBooksRequest;
        class SearchContactsRequest;
        class SearchDevicesRequest;
        class SearchNetworkProfilesRequest;
        class SearchProfilesRequest;
        class SearchRoomsRequest;
        class SearchSkillGroupsRequest;
        class SearchUsersRequest;
        class SendAnnouncementRequest;
        class SendInvitationRequest;
        class StartDeviceSyncRequest;
        class StartSmartHomeApplianceDiscoveryRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAddressBookRequest;
        class UpdateBusinessReportScheduleRequest;
        class UpdateConferenceProviderRequest;
        class UpdateContactRequest;
        class UpdateDeviceRequest;
        class UpdateGatewayRequest;
        class UpdateGatewayGroupRequest;
        class UpdateNetworkProfileRequest;
        class UpdateProfileRequest;
        class UpdateRoomRequest;
        class UpdateSkillGroupRequest;

        typedef Aws::Utils::Outcome<ApproveSkillResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ApproveSkillOutcome;
        typedef Aws::Utils::Outcome<AssociateContactWithAddressBookResult, Aws::Client::AWSError<AlexaForBusinessErrors>> AssociateContactWithAddressBookOutcome;
        typedef Aws::Utils::Outcome<AssociateDeviceWithNetworkProfileResult, Aws::Client::AWSError<AlexaForBusinessErrors>> AssociateDeviceWithNetworkProfileOutcome;
        typedef Aws::Utils::Outcome<AssociateDeviceWithRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> AssociateDeviceWithRoomOutcome;
        typedef Aws::Utils::Outcome<AssociateSkillGroupWithRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> AssociateSkillGroupWithRoomOutcome;
        typedef Aws::Utils::Outcome<AssociateSkillWithSkillGroupResult, Aws::Client::AWSError<AlexaForBusinessErrors>> AssociateSkillWithSkillGroupOutcome;
        typedef Aws::Utils::Outcome<AssociateSkillWithUsersResult, Aws::Client::AWSError<AlexaForBusinessErrors>> AssociateSkillWithUsersOutcome;
        typedef Aws::Utils::Outcome<CreateAddressBookResult, Aws::Client::AWSError<AlexaForBusinessErrors>> CreateAddressBookOutcome;
        typedef Aws::Utils::Outcome<CreateBusinessReportScheduleResult, Aws::Client::AWSError<AlexaForBusinessErrors>> CreateBusinessReportScheduleOutcome;
        typedef Aws::Utils::Outcome<CreateConferenceProviderResult, Aws::Client::AWSError<AlexaForBusinessErrors>> CreateConferenceProviderOutcome;
        typedef Aws::Utils::Outcome<CreateContactResult, Aws::Client::AWSError<AlexaForBusinessErrors>> CreateContactOutcome;
        typedef Aws::Utils::Outcome<CreateGatewayGroupResult, Aws::Client::AWSError<AlexaForBusinessErrors>> CreateGatewayGroupOutcome;
        typedef Aws::Utils::Outcome<CreateNetworkProfileResult, Aws::Client::AWSError<AlexaForBusinessErrors>> CreateNetworkProfileOutcome;
        typedef Aws::Utils::Outcome<CreateProfileResult, Aws::Client::AWSError<AlexaForBusinessErrors>> CreateProfileOutcome;
        typedef Aws::Utils::Outcome<CreateRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> CreateRoomOutcome;
        typedef Aws::Utils::Outcome<CreateSkillGroupResult, Aws::Client::AWSError<AlexaForBusinessErrors>> CreateSkillGroupOutcome;
        typedef Aws::Utils::Outcome<CreateUserResult, Aws::Client::AWSError<AlexaForBusinessErrors>> CreateUserOutcome;
        typedef Aws::Utils::Outcome<DeleteAddressBookResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteAddressBookOutcome;
        typedef Aws::Utils::Outcome<DeleteBusinessReportScheduleResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteBusinessReportScheduleOutcome;
        typedef Aws::Utils::Outcome<DeleteConferenceProviderResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteConferenceProviderOutcome;
        typedef Aws::Utils::Outcome<DeleteContactResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteContactOutcome;
        typedef Aws::Utils::Outcome<DeleteDeviceResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteDeviceOutcome;
        typedef Aws::Utils::Outcome<DeleteDeviceUsageDataResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteDeviceUsageDataOutcome;
        typedef Aws::Utils::Outcome<DeleteGatewayGroupResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteGatewayGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteNetworkProfileResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteNetworkProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteProfileResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteRoomOutcome;
        typedef Aws::Utils::Outcome<DeleteRoomSkillParameterResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteRoomSkillParameterOutcome;
        typedef Aws::Utils::Outcome<DeleteSkillAuthorizationResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteSkillAuthorizationOutcome;
        typedef Aws::Utils::Outcome<DeleteSkillGroupResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteSkillGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteUserResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<DisassociateContactFromAddressBookResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DisassociateContactFromAddressBookOutcome;
        typedef Aws::Utils::Outcome<DisassociateDeviceFromRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DisassociateDeviceFromRoomOutcome;
        typedef Aws::Utils::Outcome<DisassociateSkillFromSkillGroupResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DisassociateSkillFromSkillGroupOutcome;
        typedef Aws::Utils::Outcome<DisassociateSkillFromUsersResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DisassociateSkillFromUsersOutcome;
        typedef Aws::Utils::Outcome<DisassociateSkillGroupFromRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> DisassociateSkillGroupFromRoomOutcome;
        typedef Aws::Utils::Outcome<ForgetSmartHomeAppliancesResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ForgetSmartHomeAppliancesOutcome;
        typedef Aws::Utils::Outcome<GetAddressBookResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetAddressBookOutcome;
        typedef Aws::Utils::Outcome<GetConferencePreferenceResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetConferencePreferenceOutcome;
        typedef Aws::Utils::Outcome<GetConferenceProviderResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetConferenceProviderOutcome;
        typedef Aws::Utils::Outcome<GetContactResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetContactOutcome;
        typedef Aws::Utils::Outcome<GetDeviceResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetDeviceOutcome;
        typedef Aws::Utils::Outcome<GetGatewayResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetGatewayOutcome;
        typedef Aws::Utils::Outcome<GetGatewayGroupResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetGatewayGroupOutcome;
        typedef Aws::Utils::Outcome<GetInvitationConfigurationResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetInvitationConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetNetworkProfileResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetNetworkProfileOutcome;
        typedef Aws::Utils::Outcome<GetProfileResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetProfileOutcome;
        typedef Aws::Utils::Outcome<GetRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetRoomOutcome;
        typedef Aws::Utils::Outcome<GetRoomSkillParameterResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetRoomSkillParameterOutcome;
        typedef Aws::Utils::Outcome<GetSkillGroupResult, Aws::Client::AWSError<AlexaForBusinessErrors>> GetSkillGroupOutcome;
        typedef Aws::Utils::Outcome<ListBusinessReportSchedulesResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ListBusinessReportSchedulesOutcome;
        typedef Aws::Utils::Outcome<ListConferenceProvidersResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ListConferenceProvidersOutcome;
        typedef Aws::Utils::Outcome<ListDeviceEventsResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ListDeviceEventsOutcome;
        typedef Aws::Utils::Outcome<ListGatewayGroupsResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ListGatewayGroupsOutcome;
        typedef Aws::Utils::Outcome<ListGatewaysResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ListGatewaysOutcome;
        typedef Aws::Utils::Outcome<ListSkillsResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ListSkillsOutcome;
        typedef Aws::Utils::Outcome<ListSkillsStoreCategoriesResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ListSkillsStoreCategoriesOutcome;
        typedef Aws::Utils::Outcome<ListSkillsStoreSkillsByCategoryResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ListSkillsStoreSkillsByCategoryOutcome;
        typedef Aws::Utils::Outcome<ListSmartHomeAppliancesResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ListSmartHomeAppliancesOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ListTagsOutcome;
        typedef Aws::Utils::Outcome<PutConferencePreferenceResult, Aws::Client::AWSError<AlexaForBusinessErrors>> PutConferencePreferenceOutcome;
        typedef Aws::Utils::Outcome<PutInvitationConfigurationResult, Aws::Client::AWSError<AlexaForBusinessErrors>> PutInvitationConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutRoomSkillParameterResult, Aws::Client::AWSError<AlexaForBusinessErrors>> PutRoomSkillParameterOutcome;
        typedef Aws::Utils::Outcome<PutSkillAuthorizationResult, Aws::Client::AWSError<AlexaForBusinessErrors>> PutSkillAuthorizationOutcome;
        typedef Aws::Utils::Outcome<RegisterAVSDeviceResult, Aws::Client::AWSError<AlexaForBusinessErrors>> RegisterAVSDeviceOutcome;
        typedef Aws::Utils::Outcome<RejectSkillResult, Aws::Client::AWSError<AlexaForBusinessErrors>> RejectSkillOutcome;
        typedef Aws::Utils::Outcome<ResolveRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> ResolveRoomOutcome;
        typedef Aws::Utils::Outcome<RevokeInvitationResult, Aws::Client::AWSError<AlexaForBusinessErrors>> RevokeInvitationOutcome;
        typedef Aws::Utils::Outcome<SearchAddressBooksResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SearchAddressBooksOutcome;
        typedef Aws::Utils::Outcome<SearchContactsResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SearchContactsOutcome;
        typedef Aws::Utils::Outcome<SearchDevicesResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SearchDevicesOutcome;
        typedef Aws::Utils::Outcome<SearchNetworkProfilesResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SearchNetworkProfilesOutcome;
        typedef Aws::Utils::Outcome<SearchProfilesResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SearchProfilesOutcome;
        typedef Aws::Utils::Outcome<SearchRoomsResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SearchRoomsOutcome;
        typedef Aws::Utils::Outcome<SearchSkillGroupsResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SearchSkillGroupsOutcome;
        typedef Aws::Utils::Outcome<SearchUsersResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SearchUsersOutcome;
        typedef Aws::Utils::Outcome<SendAnnouncementResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SendAnnouncementOutcome;
        typedef Aws::Utils::Outcome<SendInvitationResult, Aws::Client::AWSError<AlexaForBusinessErrors>> SendInvitationOutcome;
        typedef Aws::Utils::Outcome<StartDeviceSyncResult, Aws::Client::AWSError<AlexaForBusinessErrors>> StartDeviceSyncOutcome;
        typedef Aws::Utils::Outcome<StartSmartHomeApplianceDiscoveryResult, Aws::Client::AWSError<AlexaForBusinessErrors>> StartSmartHomeApplianceDiscoveryOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<AlexaForBusinessErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAddressBookResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateAddressBookOutcome;
        typedef Aws::Utils::Outcome<UpdateBusinessReportScheduleResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateBusinessReportScheduleOutcome;
        typedef Aws::Utils::Outcome<UpdateConferenceProviderResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateConferenceProviderOutcome;
        typedef Aws::Utils::Outcome<UpdateContactResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateContactOutcome;
        typedef Aws::Utils::Outcome<UpdateDeviceResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateDeviceOutcome;
        typedef Aws::Utils::Outcome<UpdateGatewayResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateGatewayOutcome;
        typedef Aws::Utils::Outcome<UpdateGatewayGroupResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateGatewayGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateNetworkProfileResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateNetworkProfileOutcome;
        typedef Aws::Utils::Outcome<UpdateProfileResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateProfileOutcome;
        typedef Aws::Utils::Outcome<UpdateRoomResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateRoomOutcome;
        typedef Aws::Utils::Outcome<UpdateSkillGroupResult, Aws::Client::AWSError<AlexaForBusinessErrors>> UpdateSkillGroupOutcome;

        typedef std::future<ApproveSkillOutcome> ApproveSkillOutcomeCallable;
        typedef std::future<AssociateContactWithAddressBookOutcome> AssociateContactWithAddressBookOutcomeCallable;
        typedef std::future<AssociateDeviceWithNetworkProfileOutcome> AssociateDeviceWithNetworkProfileOutcomeCallable;
        typedef std::future<AssociateDeviceWithRoomOutcome> AssociateDeviceWithRoomOutcomeCallable;
        typedef std::future<AssociateSkillGroupWithRoomOutcome> AssociateSkillGroupWithRoomOutcomeCallable;
        typedef std::future<AssociateSkillWithSkillGroupOutcome> AssociateSkillWithSkillGroupOutcomeCallable;
        typedef std::future<AssociateSkillWithUsersOutcome> AssociateSkillWithUsersOutcomeCallable;
        typedef std::future<CreateAddressBookOutcome> CreateAddressBookOutcomeCallable;
        typedef std::future<CreateBusinessReportScheduleOutcome> CreateBusinessReportScheduleOutcomeCallable;
        typedef std::future<CreateConferenceProviderOutcome> CreateConferenceProviderOutcomeCallable;
        typedef std::future<CreateContactOutcome> CreateContactOutcomeCallable;
        typedef std::future<CreateGatewayGroupOutcome> CreateGatewayGroupOutcomeCallable;
        typedef std::future<CreateNetworkProfileOutcome> CreateNetworkProfileOutcomeCallable;
        typedef std::future<CreateProfileOutcome> CreateProfileOutcomeCallable;
        typedef std::future<CreateRoomOutcome> CreateRoomOutcomeCallable;
        typedef std::future<CreateSkillGroupOutcome> CreateSkillGroupOutcomeCallable;
        typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
        typedef std::future<DeleteAddressBookOutcome> DeleteAddressBookOutcomeCallable;
        typedef std::future<DeleteBusinessReportScheduleOutcome> DeleteBusinessReportScheduleOutcomeCallable;
        typedef std::future<DeleteConferenceProviderOutcome> DeleteConferenceProviderOutcomeCallable;
        typedef std::future<DeleteContactOutcome> DeleteContactOutcomeCallable;
        typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
        typedef std::future<DeleteDeviceUsageDataOutcome> DeleteDeviceUsageDataOutcomeCallable;
        typedef std::future<DeleteGatewayGroupOutcome> DeleteGatewayGroupOutcomeCallable;
        typedef std::future<DeleteNetworkProfileOutcome> DeleteNetworkProfileOutcomeCallable;
        typedef std::future<DeleteProfileOutcome> DeleteProfileOutcomeCallable;
        typedef std::future<DeleteRoomOutcome> DeleteRoomOutcomeCallable;
        typedef std::future<DeleteRoomSkillParameterOutcome> DeleteRoomSkillParameterOutcomeCallable;
        typedef std::future<DeleteSkillAuthorizationOutcome> DeleteSkillAuthorizationOutcomeCallable;
        typedef std::future<DeleteSkillGroupOutcome> DeleteSkillGroupOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DisassociateContactFromAddressBookOutcome> DisassociateContactFromAddressBookOutcomeCallable;
        typedef std::future<DisassociateDeviceFromRoomOutcome> DisassociateDeviceFromRoomOutcomeCallable;
        typedef std::future<DisassociateSkillFromSkillGroupOutcome> DisassociateSkillFromSkillGroupOutcomeCallable;
        typedef std::future<DisassociateSkillFromUsersOutcome> DisassociateSkillFromUsersOutcomeCallable;
        typedef std::future<DisassociateSkillGroupFromRoomOutcome> DisassociateSkillGroupFromRoomOutcomeCallable;
        typedef std::future<ForgetSmartHomeAppliancesOutcome> ForgetSmartHomeAppliancesOutcomeCallable;
        typedef std::future<GetAddressBookOutcome> GetAddressBookOutcomeCallable;
        typedef std::future<GetConferencePreferenceOutcome> GetConferencePreferenceOutcomeCallable;
        typedef std::future<GetConferenceProviderOutcome> GetConferenceProviderOutcomeCallable;
        typedef std::future<GetContactOutcome> GetContactOutcomeCallable;
        typedef std::future<GetDeviceOutcome> GetDeviceOutcomeCallable;
        typedef std::future<GetGatewayOutcome> GetGatewayOutcomeCallable;
        typedef std::future<GetGatewayGroupOutcome> GetGatewayGroupOutcomeCallable;
        typedef std::future<GetInvitationConfigurationOutcome> GetInvitationConfigurationOutcomeCallable;
        typedef std::future<GetNetworkProfileOutcome> GetNetworkProfileOutcomeCallable;
        typedef std::future<GetProfileOutcome> GetProfileOutcomeCallable;
        typedef std::future<GetRoomOutcome> GetRoomOutcomeCallable;
        typedef std::future<GetRoomSkillParameterOutcome> GetRoomSkillParameterOutcomeCallable;
        typedef std::future<GetSkillGroupOutcome> GetSkillGroupOutcomeCallable;
        typedef std::future<ListBusinessReportSchedulesOutcome> ListBusinessReportSchedulesOutcomeCallable;
        typedef std::future<ListConferenceProvidersOutcome> ListConferenceProvidersOutcomeCallable;
        typedef std::future<ListDeviceEventsOutcome> ListDeviceEventsOutcomeCallable;
        typedef std::future<ListGatewayGroupsOutcome> ListGatewayGroupsOutcomeCallable;
        typedef std::future<ListGatewaysOutcome> ListGatewaysOutcomeCallable;
        typedef std::future<ListSkillsOutcome> ListSkillsOutcomeCallable;
        typedef std::future<ListSkillsStoreCategoriesOutcome> ListSkillsStoreCategoriesOutcomeCallable;
        typedef std::future<ListSkillsStoreSkillsByCategoryOutcome> ListSkillsStoreSkillsByCategoryOutcomeCallable;
        typedef std::future<ListSmartHomeAppliancesOutcome> ListSmartHomeAppliancesOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<PutConferencePreferenceOutcome> PutConferencePreferenceOutcomeCallable;
        typedef std::future<PutInvitationConfigurationOutcome> PutInvitationConfigurationOutcomeCallable;
        typedef std::future<PutRoomSkillParameterOutcome> PutRoomSkillParameterOutcomeCallable;
        typedef std::future<PutSkillAuthorizationOutcome> PutSkillAuthorizationOutcomeCallable;
        typedef std::future<RegisterAVSDeviceOutcome> RegisterAVSDeviceOutcomeCallable;
        typedef std::future<RejectSkillOutcome> RejectSkillOutcomeCallable;
        typedef std::future<ResolveRoomOutcome> ResolveRoomOutcomeCallable;
        typedef std::future<RevokeInvitationOutcome> RevokeInvitationOutcomeCallable;
        typedef std::future<SearchAddressBooksOutcome> SearchAddressBooksOutcomeCallable;
        typedef std::future<SearchContactsOutcome> SearchContactsOutcomeCallable;
        typedef std::future<SearchDevicesOutcome> SearchDevicesOutcomeCallable;
        typedef std::future<SearchNetworkProfilesOutcome> SearchNetworkProfilesOutcomeCallable;
        typedef std::future<SearchProfilesOutcome> SearchProfilesOutcomeCallable;
        typedef std::future<SearchRoomsOutcome> SearchRoomsOutcomeCallable;
        typedef std::future<SearchSkillGroupsOutcome> SearchSkillGroupsOutcomeCallable;
        typedef std::future<SearchUsersOutcome> SearchUsersOutcomeCallable;
        typedef std::future<SendAnnouncementOutcome> SendAnnouncementOutcomeCallable;
        typedef std::future<SendInvitationOutcome> SendInvitationOutcomeCallable;
        typedef std::future<StartDeviceSyncOutcome> StartDeviceSyncOutcomeCallable;
        typedef std::future<StartSmartHomeApplianceDiscoveryOutcome> StartSmartHomeApplianceDiscoveryOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAddressBookOutcome> UpdateAddressBookOutcomeCallable;
        typedef std::future<UpdateBusinessReportScheduleOutcome> UpdateBusinessReportScheduleOutcomeCallable;
        typedef std::future<UpdateConferenceProviderOutcome> UpdateConferenceProviderOutcomeCallable;
        typedef std::future<UpdateContactOutcome> UpdateContactOutcomeCallable;
        typedef std::future<UpdateDeviceOutcome> UpdateDeviceOutcomeCallable;
        typedef std::future<UpdateGatewayOutcome> UpdateGatewayOutcomeCallable;
        typedef std::future<UpdateGatewayGroupOutcome> UpdateGatewayGroupOutcomeCallable;
        typedef std::future<UpdateNetworkProfileOutcome> UpdateNetworkProfileOutcomeCallable;
        typedef std::future<UpdateProfileOutcome> UpdateProfileOutcomeCallable;
        typedef std::future<UpdateRoomOutcome> UpdateRoomOutcomeCallable;
        typedef std::future<UpdateSkillGroupOutcome> UpdateSkillGroupOutcomeCallable;
} // namespace Model

  class AlexaForBusinessClient;

    typedef std::function<void(const AlexaForBusinessClient*, const Model::ApproveSkillRequest&, const Model::ApproveSkillOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApproveSkillResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::AssociateContactWithAddressBookRequest&, const Model::AssociateContactWithAddressBookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateContactWithAddressBookResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::AssociateDeviceWithNetworkProfileRequest&, const Model::AssociateDeviceWithNetworkProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDeviceWithNetworkProfileResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::AssociateDeviceWithRoomRequest&, const Model::AssociateDeviceWithRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDeviceWithRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::AssociateSkillGroupWithRoomRequest&, const Model::AssociateSkillGroupWithRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSkillGroupWithRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::AssociateSkillWithSkillGroupRequest&, const Model::AssociateSkillWithSkillGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSkillWithSkillGroupResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::AssociateSkillWithUsersRequest&, const Model::AssociateSkillWithUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSkillWithUsersResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::CreateAddressBookRequest&, const Model::CreateAddressBookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAddressBookResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::CreateBusinessReportScheduleRequest&, const Model::CreateBusinessReportScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBusinessReportScheduleResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::CreateConferenceProviderRequest&, const Model::CreateConferenceProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConferenceProviderResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::CreateContactRequest&, const Model::CreateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::CreateGatewayGroupRequest&, const Model::CreateGatewayGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGatewayGroupResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::CreateNetworkProfileRequest&, const Model::CreateNetworkProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkProfileResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::CreateProfileRequest&, const Model::CreateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProfileResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::CreateRoomRequest&, const Model::CreateRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::CreateSkillGroupRequest&, const Model::CreateSkillGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSkillGroupResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteAddressBookRequest&, const Model::DeleteAddressBookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAddressBookResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteBusinessReportScheduleRequest&, const Model::DeleteBusinessReportScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBusinessReportScheduleResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteConferenceProviderRequest&, const Model::DeleteConferenceProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConferenceProviderResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteContactRequest&, const Model::DeleteContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteDeviceRequest&, const Model::DeleteDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeviceResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteDeviceUsageDataRequest&, const Model::DeleteDeviceUsageDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeviceUsageDataResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteGatewayGroupRequest&, const Model::DeleteGatewayGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGatewayGroupResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteNetworkProfileRequest&, const Model::DeleteNetworkProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkProfileResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteProfileRequest&, const Model::DeleteProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteRoomRequest&, const Model::DeleteRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteRoomSkillParameterRequest&, const Model::DeleteRoomSkillParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoomSkillParameterResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteSkillAuthorizationRequest&, const Model::DeleteSkillAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSkillAuthorizationResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteSkillGroupRequest&, const Model::DeleteSkillGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSkillGroupResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DisassociateContactFromAddressBookRequest&, const Model::DisassociateContactFromAddressBookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateContactFromAddressBookResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DisassociateDeviceFromRoomRequest&, const Model::DisassociateDeviceFromRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDeviceFromRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DisassociateSkillFromSkillGroupRequest&, const Model::DisassociateSkillFromSkillGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSkillFromSkillGroupResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DisassociateSkillFromUsersRequest&, const Model::DisassociateSkillFromUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSkillFromUsersResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::DisassociateSkillGroupFromRoomRequest&, const Model::DisassociateSkillGroupFromRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSkillGroupFromRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ForgetSmartHomeAppliancesRequest&, const Model::ForgetSmartHomeAppliancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ForgetSmartHomeAppliancesResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetAddressBookRequest&, const Model::GetAddressBookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAddressBookResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetConferencePreferenceRequest&, const Model::GetConferencePreferenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConferencePreferenceResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetConferenceProviderRequest&, const Model::GetConferenceProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConferenceProviderResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetContactRequest&, const Model::GetContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetDeviceRequest&, const Model::GetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetGatewayRequest&, const Model::GetGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGatewayResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetGatewayGroupRequest&, const Model::GetGatewayGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGatewayGroupResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetInvitationConfigurationRequest&, const Model::GetInvitationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvitationConfigurationResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetNetworkProfileRequest&, const Model::GetNetworkProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkProfileResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetProfileRequest&, const Model::GetProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetRoomRequest&, const Model::GetRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetRoomSkillParameterRequest&, const Model::GetRoomSkillParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoomSkillParameterResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::GetSkillGroupRequest&, const Model::GetSkillGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSkillGroupResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ListBusinessReportSchedulesRequest&, const Model::ListBusinessReportSchedulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBusinessReportSchedulesResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ListConferenceProvidersRequest&, const Model::ListConferenceProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConferenceProvidersResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ListDeviceEventsRequest&, const Model::ListDeviceEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeviceEventsResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ListGatewayGroupsRequest&, const Model::ListGatewayGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGatewayGroupsResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ListGatewaysRequest&, const Model::ListGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGatewaysResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ListSkillsRequest&, const Model::ListSkillsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSkillsResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ListSkillsStoreCategoriesRequest&, const Model::ListSkillsStoreCategoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSkillsStoreCategoriesResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ListSkillsStoreSkillsByCategoryRequest&, const Model::ListSkillsStoreSkillsByCategoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSkillsStoreSkillsByCategoryResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ListSmartHomeAppliancesRequest&, const Model::ListSmartHomeAppliancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSmartHomeAppliancesResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::PutConferencePreferenceRequest&, const Model::PutConferencePreferenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConferencePreferenceResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::PutInvitationConfigurationRequest&, const Model::PutInvitationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInvitationConfigurationResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::PutRoomSkillParameterRequest&, const Model::PutRoomSkillParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRoomSkillParameterResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::PutSkillAuthorizationRequest&, const Model::PutSkillAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSkillAuthorizationResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::RegisterAVSDeviceRequest&, const Model::RegisterAVSDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterAVSDeviceResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::RejectSkillRequest&, const Model::RejectSkillOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectSkillResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::ResolveRoomRequest&, const Model::ResolveRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResolveRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::RevokeInvitationRequest&, const Model::RevokeInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeInvitationResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SearchAddressBooksRequest&, const Model::SearchAddressBooksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchAddressBooksResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SearchContactsRequest&, const Model::SearchContactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchContactsResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SearchDevicesRequest&, const Model::SearchDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchDevicesResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SearchNetworkProfilesRequest&, const Model::SearchNetworkProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchNetworkProfilesResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SearchProfilesRequest&, const Model::SearchProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchProfilesResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SearchRoomsRequest&, const Model::SearchRoomsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchRoomsResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SearchSkillGroupsRequest&, const Model::SearchSkillGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchSkillGroupsResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SearchUsersRequest&, const Model::SearchUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchUsersResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SendAnnouncementRequest&, const Model::SendAnnouncementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendAnnouncementResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SendInvitationRequest&, const Model::SendInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendInvitationResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::StartDeviceSyncRequest&, const Model::StartDeviceSyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDeviceSyncResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::StartSmartHomeApplianceDiscoveryRequest&, const Model::StartSmartHomeApplianceDiscoveryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSmartHomeApplianceDiscoveryResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateAddressBookRequest&, const Model::UpdateAddressBookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAddressBookResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateBusinessReportScheduleRequest&, const Model::UpdateBusinessReportScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBusinessReportScheduleResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateConferenceProviderRequest&, const Model::UpdateConferenceProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConferenceProviderResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateContactRequest&, const Model::UpdateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateDeviceRequest&, const Model::UpdateDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeviceResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateGatewayRequest&, const Model::UpdateGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGatewayResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateGatewayGroupRequest&, const Model::UpdateGatewayGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGatewayGroupResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateNetworkProfileRequest&, const Model::UpdateNetworkProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNetworkProfileResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateProfileRequest&, const Model::UpdateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProfileResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateRoomRequest&, const Model::UpdateRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoomResponseReceivedHandler;
    typedef std::function<void(const AlexaForBusinessClient*, const Model::UpdateSkillGroupRequest&, const Model::UpdateSkillGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSkillGroupResponseReceivedHandler;

  /**
   * <p>Alexa for Business helps you use Alexa in your organization. Alexa for
   * Business provides you with the tools to manage Alexa devices, enroll your users,
   * and assign skills, at scale. You can build your own context-aware voice skills
   * using the Alexa Skills Kit and the Alexa for Business API operations. You can
   * also make these available as private skills for your organization. Alexa for
   * Business makes it efficient to voice-enable your products and services, thus
   * providing context-aware voice experiences for your customers. Device makers
   * building with the Alexa Voice Service (AVS) can create fully integrated
   * solutions, register their products with Alexa for Business, and manage them as
   * shared devices in their organization. </p>
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

        inline virtual const char* GetServiceClientName() const override { return "Alexa For Business"; }


        /**
         * <p>Associates a skill with the organization under the customer's AWS account. If
         * a skill is private, the user implicitly accepts access to this skill during
         * enablement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ApproveSkill">AWS
         * API Reference</a></p>
         */
        virtual Model::ApproveSkillOutcome ApproveSkill(const Model::ApproveSkillRequest& request) const;

        /**
         * <p>Associates a skill with the organization under the customer's AWS account. If
         * a skill is private, the user implicitly accepts access to this skill during
         * enablement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ApproveSkill">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ApproveSkillOutcomeCallable ApproveSkillCallable(const Model::ApproveSkillRequest& request) const;

        /**
         * <p>Associates a skill with the organization under the customer's AWS account. If
         * a skill is private, the user implicitly accepts access to this skill during
         * enablement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ApproveSkill">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ApproveSkillAsync(const Model::ApproveSkillRequest& request, const ApproveSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a contact with a given address book.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateContactWithAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateContactWithAddressBookOutcome AssociateContactWithAddressBook(const Model::AssociateContactWithAddressBookRequest& request) const;

        /**
         * <p>Associates a contact with a given address book.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateContactWithAddressBook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateContactWithAddressBookOutcomeCallable AssociateContactWithAddressBookCallable(const Model::AssociateContactWithAddressBookRequest& request) const;

        /**
         * <p>Associates a contact with a given address book.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateContactWithAddressBook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateContactWithAddressBookAsync(const Model::AssociateContactWithAddressBookRequest& request, const AssociateContactWithAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a device with the specified network profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateDeviceWithNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDeviceWithNetworkProfileOutcome AssociateDeviceWithNetworkProfile(const Model::AssociateDeviceWithNetworkProfileRequest& request) const;

        /**
         * <p>Associates a device with the specified network profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateDeviceWithNetworkProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDeviceWithNetworkProfileOutcomeCallable AssociateDeviceWithNetworkProfileCallable(const Model::AssociateDeviceWithNetworkProfileRequest& request) const;

        /**
         * <p>Associates a device with the specified network profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateDeviceWithNetworkProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDeviceWithNetworkProfileAsync(const Model::AssociateDeviceWithNetworkProfileRequest& request, const AssociateDeviceWithNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a device with a given room. This applies all the settings from the
         * room profile to the device, and all the skills in any skill groups added to that
         * room. This operation requires the device to be online, or else a manual sync is
         * required. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateDeviceWithRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDeviceWithRoomOutcome AssociateDeviceWithRoom(const Model::AssociateDeviceWithRoomRequest& request) const;

        /**
         * <p>Associates a device with a given room. This applies all the settings from the
         * room profile to the device, and all the skills in any skill groups added to that
         * room. This operation requires the device to be online, or else a manual sync is
         * required. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateDeviceWithRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDeviceWithRoomOutcomeCallable AssociateDeviceWithRoomCallable(const Model::AssociateDeviceWithRoomRequest& request) const;

        /**
         * <p>Associates a device with a given room. This applies all the settings from the
         * room profile to the device, and all the skills in any skill groups added to that
         * room. This operation requires the device to be online, or else a manual sync is
         * required. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateDeviceWithRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDeviceWithRoomAsync(const Model::AssociateDeviceWithRoomRequest& request, const AssociateDeviceWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a skill group with a given room. This enables all skills in the
         * associated skill group on all devices in the room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillGroupWithRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSkillGroupWithRoomOutcome AssociateSkillGroupWithRoom(const Model::AssociateSkillGroupWithRoomRequest& request) const;

        /**
         * <p>Associates a skill group with a given room. This enables all skills in the
         * associated skill group on all devices in the room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillGroupWithRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSkillGroupWithRoomOutcomeCallable AssociateSkillGroupWithRoomCallable(const Model::AssociateSkillGroupWithRoomRequest& request) const;

        /**
         * <p>Associates a skill group with a given room. This enables all skills in the
         * associated skill group on all devices in the room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillGroupWithRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSkillGroupWithRoomAsync(const Model::AssociateSkillGroupWithRoomRequest& request, const AssociateSkillGroupWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a skill with a skill group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillWithSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSkillWithSkillGroupOutcome AssociateSkillWithSkillGroup(const Model::AssociateSkillWithSkillGroupRequest& request) const;

        /**
         * <p>Associates a skill with a skill group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillWithSkillGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSkillWithSkillGroupOutcomeCallable AssociateSkillWithSkillGroupCallable(const Model::AssociateSkillWithSkillGroupRequest& request) const;

        /**
         * <p>Associates a skill with a skill group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillWithSkillGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSkillWithSkillGroupAsync(const Model::AssociateSkillWithSkillGroupRequest& request, const AssociateSkillWithSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Makes a private skill available for enrolled users to enable on their
         * devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillWithUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSkillWithUsersOutcome AssociateSkillWithUsers(const Model::AssociateSkillWithUsersRequest& request) const;

        /**
         * <p>Makes a private skill available for enrolled users to enable on their
         * devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillWithUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSkillWithUsersOutcomeCallable AssociateSkillWithUsersCallable(const Model::AssociateSkillWithUsersRequest& request) const;

        /**
         * <p>Makes a private skill available for enrolled users to enable on their
         * devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillWithUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSkillWithUsersAsync(const Model::AssociateSkillWithUsersRequest& request, const AssociateSkillWithUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an address book with the specified details.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAddressBookOutcome CreateAddressBook(const Model::CreateAddressBookRequest& request) const;

        /**
         * <p>Creates an address book with the specified details.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateAddressBook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAddressBookOutcomeCallable CreateAddressBookCallable(const Model::CreateAddressBookRequest& request) const;

        /**
         * <p>Creates an address book with the specified details.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateAddressBook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAddressBookAsync(const Model::CreateAddressBookRequest& request, const CreateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a recurring schedule for usage reports to deliver to the specified S3
         * location with a specified daily or weekly interval.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateBusinessReportSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBusinessReportScheduleOutcome CreateBusinessReportSchedule(const Model::CreateBusinessReportScheduleRequest& request) const;

        /**
         * <p>Creates a recurring schedule for usage reports to deliver to the specified S3
         * location with a specified daily or weekly interval.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateBusinessReportSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBusinessReportScheduleOutcomeCallable CreateBusinessReportScheduleCallable(const Model::CreateBusinessReportScheduleRequest& request) const;

        /**
         * <p>Creates a recurring schedule for usage reports to deliver to the specified S3
         * location with a specified daily or weekly interval.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateBusinessReportSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBusinessReportScheduleAsync(const Model::CreateBusinessReportScheduleRequest& request, const CreateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a new conference provider under the user's AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateConferenceProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConferenceProviderOutcome CreateConferenceProvider(const Model::CreateConferenceProviderRequest& request) const;

        /**
         * <p>Adds a new conference provider under the user's AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateConferenceProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConferenceProviderOutcomeCallable CreateConferenceProviderCallable(const Model::CreateConferenceProviderRequest& request) const;

        /**
         * <p>Adds a new conference provider under the user's AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateConferenceProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConferenceProviderAsync(const Model::CreateConferenceProviderRequest& request, const CreateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a contact with the specified details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactOutcome CreateContact(const Model::CreateContactRequest& request) const;

        /**
         * <p>Creates a contact with the specified details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContactOutcomeCallable CreateContactCallable(const Model::CreateContactRequest& request) const;

        /**
         * <p>Creates a contact with the specified details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContactAsync(const Model::CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a gateway group with the specified details.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateGatewayGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGatewayGroupOutcome CreateGatewayGroup(const Model::CreateGatewayGroupRequest& request) const;

        /**
         * <p>Creates a gateway group with the specified details.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateGatewayGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGatewayGroupOutcomeCallable CreateGatewayGroupCallable(const Model::CreateGatewayGroupRequest& request) const;

        /**
         * <p>Creates a gateway group with the specified details.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateGatewayGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGatewayGroupAsync(const Model::CreateGatewayGroupRequest& request, const CreateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a network profile with the specified details.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkProfileOutcome CreateNetworkProfile(const Model::CreateNetworkProfileRequest& request) const;

        /**
         * <p>Creates a network profile with the specified details.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateNetworkProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkProfileOutcomeCallable CreateNetworkProfileCallable(const Model::CreateNetworkProfileRequest& request) const;

        /**
         * <p>Creates a network profile with the specified details.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateNetworkProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkProfileAsync(const Model::CreateNetworkProfileRequest& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Deletes an address book by the address book ARN.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAddressBookOutcome DeleteAddressBook(const Model::DeleteAddressBookRequest& request) const;

        /**
         * <p>Deletes an address book by the address book ARN.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteAddressBook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAddressBookOutcomeCallable DeleteAddressBookCallable(const Model::DeleteAddressBookRequest& request) const;

        /**
         * <p>Deletes an address book by the address book ARN.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteAddressBook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAddressBookAsync(const Model::DeleteAddressBookRequest& request, const DeleteAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the recurring report delivery schedule with the specified schedule
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteBusinessReportSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBusinessReportScheduleOutcome DeleteBusinessReportSchedule(const Model::DeleteBusinessReportScheduleRequest& request) const;

        /**
         * <p>Deletes the recurring report delivery schedule with the specified schedule
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteBusinessReportSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBusinessReportScheduleOutcomeCallable DeleteBusinessReportScheduleCallable(const Model::DeleteBusinessReportScheduleRequest& request) const;

        /**
         * <p>Deletes the recurring report delivery schedule with the specified schedule
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteBusinessReportSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBusinessReportScheduleAsync(const Model::DeleteBusinessReportScheduleRequest& request, const DeleteBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a conference provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteConferenceProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConferenceProviderOutcome DeleteConferenceProvider(const Model::DeleteConferenceProviderRequest& request) const;

        /**
         * <p>Deletes a conference provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteConferenceProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConferenceProviderOutcomeCallable DeleteConferenceProviderCallable(const Model::DeleteConferenceProviderRequest& request) const;

        /**
         * <p>Deletes a conference provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteConferenceProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConferenceProviderAsync(const Model::DeleteConferenceProviderRequest& request, const DeleteConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a contact by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactOutcome DeleteContact(const Model::DeleteContactRequest& request) const;

        /**
         * <p>Deletes a contact by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContactOutcomeCallable DeleteContactCallable(const Model::DeleteContactRequest& request) const;

        /**
         * <p>Deletes a contact by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContactAsync(const Model::DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a device from Alexa For Business.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest& request) const;

        /**
         * <p>Removes a device from Alexa For Business.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request) const;

        /**
         * <p>Removes a device from Alexa For Business.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>When this action is called for a specified shared device, it allows
         * authorized users to delete the device's entire previous history of voice input
         * data and associated response data. This action can be called once every 24 hours
         * for a specific shared device.</p> <p>When this action is called for a specified
         * shared device, it allows authorized users to delete the device's entire previous
         * history of voice input data. This action can be called once every 24 hours for a
         * specific shared device. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteDeviceUsageData">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceUsageDataOutcome DeleteDeviceUsageData(const Model::DeleteDeviceUsageDataRequest& request) const;

        /**
         * <p>When this action is called for a specified shared device, it allows
         * authorized users to delete the device's entire previous history of voice input
         * data and associated response data. This action can be called once every 24 hours
         * for a specific shared device.</p> <p>When this action is called for a specified
         * shared device, it allows authorized users to delete the device's entire previous
         * history of voice input data. This action can be called once every 24 hours for a
         * specific shared device. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteDeviceUsageData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeviceUsageDataOutcomeCallable DeleteDeviceUsageDataCallable(const Model::DeleteDeviceUsageDataRequest& request) const;

        /**
         * <p>When this action is called for a specified shared device, it allows
         * authorized users to delete the device's entire previous history of voice input
         * data and associated response data. This action can be called once every 24 hours
         * for a specific shared device.</p> <p>When this action is called for a specified
         * shared device, it allows authorized users to delete the device's entire previous
         * history of voice input data. This action can be called once every 24 hours for a
         * specific shared device. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteDeviceUsageData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeviceUsageDataAsync(const Model::DeleteDeviceUsageDataRequest& request, const DeleteDeviceUsageDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteGatewayGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayGroupOutcome DeleteGatewayGroup(const Model::DeleteGatewayGroupRequest& request) const;

        /**
         * <p>Deletes a gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteGatewayGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGatewayGroupOutcomeCallable DeleteGatewayGroupCallable(const Model::DeleteGatewayGroupRequest& request) const;

        /**
         * <p>Deletes a gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteGatewayGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGatewayGroupAsync(const Model::DeleteGatewayGroupRequest& request, const DeleteGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a network profile by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkProfileOutcome DeleteNetworkProfile(const Model::DeleteNetworkProfileRequest& request) const;

        /**
         * <p>Deletes a network profile by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteNetworkProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkProfileOutcomeCallable DeleteNetworkProfileCallable(const Model::DeleteNetworkProfileRequest& request) const;

        /**
         * <p>Deletes a network profile by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteNetworkProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkProfileAsync(const Model::DeleteNetworkProfileRequest& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Unlinks a third-party account from a skill.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteSkillAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSkillAuthorizationOutcome DeleteSkillAuthorization(const Model::DeleteSkillAuthorizationRequest& request) const;

        /**
         * <p>Unlinks a third-party account from a skill.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteSkillAuthorization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSkillAuthorizationOutcomeCallable DeleteSkillAuthorizationCallable(const Model::DeleteSkillAuthorizationRequest& request) const;

        /**
         * <p>Unlinks a third-party account from a skill.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteSkillAuthorization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSkillAuthorizationAsync(const Model::DeleteSkillAuthorizationRequest& request, const DeleteSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Disassociates a contact from a given address book.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateContactFromAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateContactFromAddressBookOutcome DisassociateContactFromAddressBook(const Model::DisassociateContactFromAddressBookRequest& request) const;

        /**
         * <p>Disassociates a contact from a given address book.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateContactFromAddressBook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateContactFromAddressBookOutcomeCallable DisassociateContactFromAddressBookCallable(const Model::DisassociateContactFromAddressBookRequest& request) const;

        /**
         * <p>Disassociates a contact from a given address book.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateContactFromAddressBook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateContactFromAddressBookAsync(const Model::DisassociateContactFromAddressBookRequest& request, const DisassociateContactFromAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Disassociates a skill from a skill group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillFromSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSkillFromSkillGroupOutcome DisassociateSkillFromSkillGroup(const Model::DisassociateSkillFromSkillGroupRequest& request) const;

        /**
         * <p>Disassociates a skill from a skill group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillFromSkillGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateSkillFromSkillGroupOutcomeCallable DisassociateSkillFromSkillGroupCallable(const Model::DisassociateSkillFromSkillGroupRequest& request) const;

        /**
         * <p>Disassociates a skill from a skill group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillFromSkillGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateSkillFromSkillGroupAsync(const Model::DisassociateSkillFromSkillGroupRequest& request, const DisassociateSkillFromSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Makes a private skill unavailable for enrolled users and prevents them from
         * enabling it on their devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillFromUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSkillFromUsersOutcome DisassociateSkillFromUsers(const Model::DisassociateSkillFromUsersRequest& request) const;

        /**
         * <p>Makes a private skill unavailable for enrolled users and prevents them from
         * enabling it on their devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillFromUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateSkillFromUsersOutcomeCallable DisassociateSkillFromUsersCallable(const Model::DisassociateSkillFromUsersRequest& request) const;

        /**
         * <p>Makes a private skill unavailable for enrolled users and prevents them from
         * enabling it on their devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillFromUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateSkillFromUsersAsync(const Model::DisassociateSkillFromUsersRequest& request, const DisassociateSkillFromUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Forgets smart home appliances associated to a room.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ForgetSmartHomeAppliances">AWS
         * API Reference</a></p>
         */
        virtual Model::ForgetSmartHomeAppliancesOutcome ForgetSmartHomeAppliances(const Model::ForgetSmartHomeAppliancesRequest& request) const;

        /**
         * <p>Forgets smart home appliances associated to a room.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ForgetSmartHomeAppliances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ForgetSmartHomeAppliancesOutcomeCallable ForgetSmartHomeAppliancesCallable(const Model::ForgetSmartHomeAppliancesRequest& request) const;

        /**
         * <p>Forgets smart home appliances associated to a room.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ForgetSmartHomeAppliances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ForgetSmartHomeAppliancesAsync(const Model::ForgetSmartHomeAppliancesRequest& request, const ForgetSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets address the book details by the address book ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAddressBookOutcome GetAddressBook(const Model::GetAddressBookRequest& request) const;

        /**
         * <p>Gets address the book details by the address book ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetAddressBook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAddressBookOutcomeCallable GetAddressBookCallable(const Model::GetAddressBookRequest& request) const;

        /**
         * <p>Gets address the book details by the address book ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetAddressBook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAddressBookAsync(const Model::GetAddressBookRequest& request, const GetAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the existing conference preferences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetConferencePreference">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConferencePreferenceOutcome GetConferencePreference(const Model::GetConferencePreferenceRequest& request) const;

        /**
         * <p>Retrieves the existing conference preferences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetConferencePreference">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConferencePreferenceOutcomeCallable GetConferencePreferenceCallable(const Model::GetConferencePreferenceRequest& request) const;

        /**
         * <p>Retrieves the existing conference preferences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetConferencePreference">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConferencePreferenceAsync(const Model::GetConferencePreferenceRequest& request, const GetConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details about a specific conference provider.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetConferenceProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConferenceProviderOutcome GetConferenceProvider(const Model::GetConferenceProviderRequest& request) const;

        /**
         * <p>Gets details about a specific conference provider.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetConferenceProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConferenceProviderOutcomeCallable GetConferenceProviderCallable(const Model::GetConferenceProviderRequest& request) const;

        /**
         * <p>Gets details about a specific conference provider.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetConferenceProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConferenceProviderAsync(const Model::GetConferenceProviderRequest& request, const GetConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the contact details by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetContact">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactOutcome GetContact(const Model::GetContactRequest& request) const;

        /**
         * <p>Gets the contact details by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactOutcomeCallable GetContactCallable(const Model::GetContactRequest& request) const;

        /**
         * <p>Gets the contact details by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactAsync(const Model::GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Retrieves the details of a gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGatewayOutcome GetGateway(const Model::GetGatewayRequest& request) const;

        /**
         * <p>Retrieves the details of a gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGatewayOutcomeCallable GetGatewayCallable(const Model::GetGatewayRequest& request) const;

        /**
         * <p>Retrieves the details of a gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGatewayAsync(const Model::GetGatewayRequest& request, const GetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details of a gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetGatewayGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGatewayGroupOutcome GetGatewayGroup(const Model::GetGatewayGroupRequest& request) const;

        /**
         * <p>Retrieves the details of a gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetGatewayGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGatewayGroupOutcomeCallable GetGatewayGroupCallable(const Model::GetGatewayGroupRequest& request) const;

        /**
         * <p>Retrieves the details of a gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetGatewayGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGatewayGroupAsync(const Model::GetGatewayGroupRequest& request, const GetGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configured values for the user enrollment invitation email
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetInvitationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationConfigurationOutcome GetInvitationConfiguration(const Model::GetInvitationConfigurationRequest& request) const;

        /**
         * <p>Retrieves the configured values for the user enrollment invitation email
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetInvitationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvitationConfigurationOutcomeCallable GetInvitationConfigurationCallable(const Model::GetInvitationConfigurationRequest& request) const;

        /**
         * <p>Retrieves the configured values for the user enrollment invitation email
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetInvitationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInvitationConfigurationAsync(const Model::GetInvitationConfigurationRequest& request, const GetInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the network profile details by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkProfileOutcome GetNetworkProfile(const Model::GetNetworkProfileRequest& request) const;

        /**
         * <p>Gets the network profile details by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetNetworkProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkProfileOutcomeCallable GetNetworkProfileCallable(const Model::GetNetworkProfileRequest& request) const;

        /**
         * <p>Gets the network profile details by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetNetworkProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkProfileAsync(const Model::GetNetworkProfileRequest& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists the details of the schedules that a user configured.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListBusinessReportSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBusinessReportSchedulesOutcome ListBusinessReportSchedules(const Model::ListBusinessReportSchedulesRequest& request) const;

        /**
         * <p>Lists the details of the schedules that a user configured.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListBusinessReportSchedules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBusinessReportSchedulesOutcomeCallable ListBusinessReportSchedulesCallable(const Model::ListBusinessReportSchedulesRequest& request) const;

        /**
         * <p>Lists the details of the schedules that a user configured.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListBusinessReportSchedules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBusinessReportSchedulesAsync(const Model::ListBusinessReportSchedulesRequest& request, const ListBusinessReportSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists conference providers under a specific AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListConferenceProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConferenceProvidersOutcome ListConferenceProviders(const Model::ListConferenceProvidersRequest& request) const;

        /**
         * <p>Lists conference providers under a specific AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListConferenceProviders">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConferenceProvidersOutcomeCallable ListConferenceProvidersCallable(const Model::ListConferenceProvidersRequest& request) const;

        /**
         * <p>Lists conference providers under a specific AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListConferenceProviders">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConferenceProvidersAsync(const Model::ListConferenceProvidersRequest& request, const ListConferenceProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the device event history, including device connection status, for up to
         * 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListDeviceEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceEventsOutcome ListDeviceEvents(const Model::ListDeviceEventsRequest& request) const;

        /**
         * <p>Lists the device event history, including device connection status, for up to
         * 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListDeviceEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceEventsOutcomeCallable ListDeviceEventsCallable(const Model::ListDeviceEventsRequest& request) const;

        /**
         * <p>Lists the device event history, including device connection status, for up to
         * 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListDeviceEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeviceEventsAsync(const Model::ListDeviceEventsRequest& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of gateway group summaries. Use GetGatewayGroup to retrieve
         * details of a specific gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListGatewayGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewayGroupsOutcome ListGatewayGroups(const Model::ListGatewayGroupsRequest& request) const;

        /**
         * <p>Retrieves a list of gateway group summaries. Use GetGatewayGroup to retrieve
         * details of a specific gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListGatewayGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGatewayGroupsOutcomeCallable ListGatewayGroupsCallable(const Model::ListGatewayGroupsRequest& request) const;

        /**
         * <p>Retrieves a list of gateway group summaries. Use GetGatewayGroup to retrieve
         * details of a specific gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListGatewayGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGatewayGroupsAsync(const Model::ListGatewayGroupsRequest& request, const ListGatewayGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of gateway summaries. Use GetGateway to retrieve details of
         * a specific gateway. An optional gateway group ARN can be provided to only
         * retrieve gateway summaries of gateways that are associated with that gateway
         * group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewaysOutcome ListGateways(const Model::ListGatewaysRequest& request) const;

        /**
         * <p>Retrieves a list of gateway summaries. Use GetGateway to retrieve details of
         * a specific gateway. An optional gateway group ARN can be provided to only
         * retrieve gateway summaries of gateways that are associated with that gateway
         * group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListGateways">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGatewaysOutcomeCallable ListGatewaysCallable(const Model::ListGatewaysRequest& request) const;

        /**
         * <p>Retrieves a list of gateway summaries. Use GetGateway to retrieve details of
         * a specific gateway. An optional gateway group ARN can be provided to only
         * retrieve gateway summaries of gateways that are associated with that gateway
         * group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListGateways">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGatewaysAsync(const Model::ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists all categories in the Alexa skill store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkillsStoreCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSkillsStoreCategoriesOutcome ListSkillsStoreCategories(const Model::ListSkillsStoreCategoriesRequest& request) const;

        /**
         * <p>Lists all categories in the Alexa skill store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkillsStoreCategories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSkillsStoreCategoriesOutcomeCallable ListSkillsStoreCategoriesCallable(const Model::ListSkillsStoreCategoriesRequest& request) const;

        /**
         * <p>Lists all categories in the Alexa skill store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkillsStoreCategories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSkillsStoreCategoriesAsync(const Model::ListSkillsStoreCategoriesRequest& request, const ListSkillsStoreCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all skills in the Alexa skill store by category.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkillsStoreSkillsByCategory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSkillsStoreSkillsByCategoryOutcome ListSkillsStoreSkillsByCategory(const Model::ListSkillsStoreSkillsByCategoryRequest& request) const;

        /**
         * <p>Lists all skills in the Alexa skill store by category.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkillsStoreSkillsByCategory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSkillsStoreSkillsByCategoryOutcomeCallable ListSkillsStoreSkillsByCategoryCallable(const Model::ListSkillsStoreSkillsByCategoryRequest& request) const;

        /**
         * <p>Lists all skills in the Alexa skill store by category.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkillsStoreSkillsByCategory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSkillsStoreSkillsByCategoryAsync(const Model::ListSkillsStoreSkillsByCategoryRequest& request, const ListSkillsStoreSkillsByCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the smart home appliances associated with a room.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSmartHomeAppliances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSmartHomeAppliancesOutcome ListSmartHomeAppliances(const Model::ListSmartHomeAppliancesRequest& request) const;

        /**
         * <p>Lists all of the smart home appliances associated with a room.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSmartHomeAppliances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSmartHomeAppliancesOutcomeCallable ListSmartHomeAppliancesCallable(const Model::ListSmartHomeAppliancesRequest& request) const;

        /**
         * <p>Lists all of the smart home appliances associated with a room.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSmartHomeAppliances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSmartHomeAppliancesAsync(const Model::ListSmartHomeAppliancesRequest& request, const ListSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * <p>Lists all tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * <p>Lists all tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the conference preferences on a specific conference provider at the
         * account level.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutConferencePreference">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConferencePreferenceOutcome PutConferencePreference(const Model::PutConferencePreferenceRequest& request) const;

        /**
         * <p>Sets the conference preferences on a specific conference provider at the
         * account level.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutConferencePreference">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConferencePreferenceOutcomeCallable PutConferencePreferenceCallable(const Model::PutConferencePreferenceRequest& request) const;

        /**
         * <p>Sets the conference preferences on a specific conference provider at the
         * account level.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutConferencePreference">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConferencePreferenceAsync(const Model::PutConferencePreferenceRequest& request, const PutConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures the email template for the user enrollment invitation with the
         * specified attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutInvitationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInvitationConfigurationOutcome PutInvitationConfiguration(const Model::PutInvitationConfigurationRequest& request) const;

        /**
         * <p>Configures the email template for the user enrollment invitation with the
         * specified attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutInvitationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutInvitationConfigurationOutcomeCallable PutInvitationConfigurationCallable(const Model::PutInvitationConfigurationRequest& request) const;

        /**
         * <p>Configures the email template for the user enrollment invitation with the
         * specified attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutInvitationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutInvitationConfigurationAsync(const Model::PutInvitationConfigurationRequest& request, const PutInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Links a user's account to a third-party skill provider. If this API operation
         * is called by an assumed IAM role, the skill being linked must be a private
         * skill. Also, the skill must be owned by the AWS account that assumed the IAM
         * role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutSkillAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSkillAuthorizationOutcome PutSkillAuthorization(const Model::PutSkillAuthorizationRequest& request) const;

        /**
         * <p>Links a user's account to a third-party skill provider. If this API operation
         * is called by an assumed IAM role, the skill being linked must be a private
         * skill. Also, the skill must be owned by the AWS account that assumed the IAM
         * role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutSkillAuthorization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSkillAuthorizationOutcomeCallable PutSkillAuthorizationCallable(const Model::PutSkillAuthorizationRequest& request) const;

        /**
         * <p>Links a user's account to a third-party skill provider. If this API operation
         * is called by an assumed IAM role, the skill being linked must be a private
         * skill. Also, the skill must be owned by the AWS account that assumed the IAM
         * role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutSkillAuthorization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSkillAuthorizationAsync(const Model::PutSkillAuthorizationRequest& request, const PutSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an Alexa-enabled device built by an Original Equipment Manufacturer
         * (OEM) using Alexa Voice Service (AVS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RegisterAVSDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterAVSDeviceOutcome RegisterAVSDevice(const Model::RegisterAVSDeviceRequest& request) const;

        /**
         * <p>Registers an Alexa-enabled device built by an Original Equipment Manufacturer
         * (OEM) using Alexa Voice Service (AVS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RegisterAVSDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterAVSDeviceOutcomeCallable RegisterAVSDeviceCallable(const Model::RegisterAVSDeviceRequest& request) const;

        /**
         * <p>Registers an Alexa-enabled device built by an Original Equipment Manufacturer
         * (OEM) using Alexa Voice Service (AVS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RegisterAVSDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterAVSDeviceAsync(const Model::RegisterAVSDeviceRequest& request, const RegisterAVSDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a skill from the organization under a user's AWS account. If
         * the skill is a private skill, it moves to an AcceptStatus of PENDING. Any
         * private or public skill that is rejected can be added later by calling the
         * ApproveSkill API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RejectSkill">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectSkillOutcome RejectSkill(const Model::RejectSkillRequest& request) const;

        /**
         * <p>Disassociates a skill from the organization under a user's AWS account. If
         * the skill is a private skill, it moves to an AcceptStatus of PENDING. Any
         * private or public skill that is rejected can be added later by calling the
         * ApproveSkill API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RejectSkill">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectSkillOutcomeCallable RejectSkillCallable(const Model::RejectSkillRequest& request) const;

        /**
         * <p>Disassociates a skill from the organization under a user's AWS account. If
         * the skill is a private skill, it moves to an AcceptStatus of PENDING. Any
         * private or public skill that is rejected can be added later by calling the
         * ApproveSkill API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RejectSkill">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectSkillAsync(const Model::RejectSkillRequest& request, const RejectSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Searches address books and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchAddressBooks">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAddressBooksOutcome SearchAddressBooks(const Model::SearchAddressBooksRequest& request) const;

        /**
         * <p>Searches address books and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchAddressBooks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchAddressBooksOutcomeCallable SearchAddressBooksCallable(const Model::SearchAddressBooksRequest& request) const;

        /**
         * <p>Searches address books and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchAddressBooks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchAddressBooksAsync(const Model::SearchAddressBooksRequest& request, const SearchAddressBooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches contacts and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchContactsOutcome SearchContacts(const Model::SearchContactsRequest& request) const;

        /**
         * <p>Searches contacts and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchContacts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchContactsOutcomeCallable SearchContactsCallable(const Model::SearchContactsRequest& request) const;

        /**
         * <p>Searches contacts and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchContacts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchContactsAsync(const Model::SearchContactsRequest& request, const SearchContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Searches network profiles and lists the ones that meet a set of filter and
         * sort criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchNetworkProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchNetworkProfilesOutcome SearchNetworkProfiles(const Model::SearchNetworkProfilesRequest& request) const;

        /**
         * <p>Searches network profiles and lists the ones that meet a set of filter and
         * sort criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchNetworkProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchNetworkProfilesOutcomeCallable SearchNetworkProfilesCallable(const Model::SearchNetworkProfilesRequest& request) const;

        /**
         * <p>Searches network profiles and lists the ones that meet a set of filter and
         * sort criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchNetworkProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchNetworkProfilesAsync(const Model::SearchNetworkProfilesRequest& request, const SearchNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Triggers an asynchronous flow to send text, SSML, or audio announcements to
         * rooms that are identified by a search or filter. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SendAnnouncement">AWS
         * API Reference</a></p>
         */
        virtual Model::SendAnnouncementOutcome SendAnnouncement(const Model::SendAnnouncementRequest& request) const;

        /**
         * <p>Triggers an asynchronous flow to send text, SSML, or audio announcements to
         * rooms that are identified by a search or filter. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SendAnnouncement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendAnnouncementOutcomeCallable SendAnnouncementCallable(const Model::SendAnnouncementRequest& request) const;

        /**
         * <p>Triggers an asynchronous flow to send text, SSML, or audio announcements to
         * rooms that are identified by a search or filter. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SendAnnouncement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendAnnouncementAsync(const Model::SendAnnouncementRequest& request, const SendAnnouncementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends an enrollment invitation email with a URL to a user. The URL is valid
         * for 30 days or until you call this operation again, whichever comes first.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SendInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::SendInvitationOutcome SendInvitation(const Model::SendInvitationRequest& request) const;

        /**
         * <p>Sends an enrollment invitation email with a URL to a user. The URL is valid
         * for 30 days or until you call this operation again, whichever comes first.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SendInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendInvitationOutcomeCallable SendInvitationCallable(const Model::SendInvitationRequest& request) const;

        /**
         * <p>Sends an enrollment invitation email with a URL to a user. The URL is valid
         * for 30 days or until you call this operation again, whichever comes first.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SendInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendInvitationAsync(const Model::SendInvitationRequest& request, const SendInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets a device and its account to the known default settings. This clears
         * all information and settings set by previous users in the following ways:</p>
         * <ul> <li> <p>Bluetooth - This unpairs all bluetooth devices paired with your
         * echo device.</p> </li> <li> <p>Volume - This resets the echo device's volume to
         * the default value.</p> </li> <li> <p>Notifications - This clears all
         * notifications from your echo device.</p> </li> <li> <p>Lists - This clears all
         * to-do items from your echo device.</p> </li> <li> <p>Settings - This internally
         * syncs the room's profile (if the device is assigned to a room), contacts,
         * address books, delegation access for account linking, and communications (if
         * enabled on the room profile).</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/StartDeviceSync">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDeviceSyncOutcome StartDeviceSync(const Model::StartDeviceSyncRequest& request) const;

        /**
         * <p>Resets a device and its account to the known default settings. This clears
         * all information and settings set by previous users in the following ways:</p>
         * <ul> <li> <p>Bluetooth - This unpairs all bluetooth devices paired with your
         * echo device.</p> </li> <li> <p>Volume - This resets the echo device's volume to
         * the default value.</p> </li> <li> <p>Notifications - This clears all
         * notifications from your echo device.</p> </li> <li> <p>Lists - This clears all
         * to-do items from your echo device.</p> </li> <li> <p>Settings - This internally
         * syncs the room's profile (if the device is assigned to a room), contacts,
         * address books, delegation access for account linking, and communications (if
         * enabled on the room profile).</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/StartDeviceSync">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDeviceSyncOutcomeCallable StartDeviceSyncCallable(const Model::StartDeviceSyncRequest& request) const;

        /**
         * <p>Resets a device and its account to the known default settings. This clears
         * all information and settings set by previous users in the following ways:</p>
         * <ul> <li> <p>Bluetooth - This unpairs all bluetooth devices paired with your
         * echo device.</p> </li> <li> <p>Volume - This resets the echo device's volume to
         * the default value.</p> </li> <li> <p>Notifications - This clears all
         * notifications from your echo device.</p> </li> <li> <p>Lists - This clears all
         * to-do items from your echo device.</p> </li> <li> <p>Settings - This internally
         * syncs the room's profile (if the device is assigned to a room), contacts,
         * address books, delegation access for account linking, and communications (if
         * enabled on the room profile).</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/StartDeviceSync">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDeviceSyncAsync(const Model::StartDeviceSyncRequest& request, const StartDeviceSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates the discovery of any smart home appliances associated with the
         * room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/StartSmartHomeApplianceDiscovery">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSmartHomeApplianceDiscoveryOutcome StartSmartHomeApplianceDiscovery(const Model::StartSmartHomeApplianceDiscoveryRequest& request) const;

        /**
         * <p>Initiates the discovery of any smart home appliances associated with the
         * room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/StartSmartHomeApplianceDiscovery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSmartHomeApplianceDiscoveryOutcomeCallable StartSmartHomeApplianceDiscoveryCallable(const Model::StartSmartHomeApplianceDiscoveryRequest& request) const;

        /**
         * <p>Initiates the discovery of any smart home appliances associated with the
         * room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/StartSmartHomeApplianceDiscovery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSmartHomeApplianceDiscoveryAsync(const Model::StartSmartHomeApplianceDiscoveryRequest& request, const StartSmartHomeApplianceDiscoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Updates address book details by the address book ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAddressBookOutcome UpdateAddressBook(const Model::UpdateAddressBookRequest& request) const;

        /**
         * <p>Updates address book details by the address book ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateAddressBook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAddressBookOutcomeCallable UpdateAddressBookCallable(const Model::UpdateAddressBookRequest& request) const;

        /**
         * <p>Updates address book details by the address book ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateAddressBook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAddressBookAsync(const Model::UpdateAddressBookRequest& request, const UpdateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration of the report delivery schedule with the specified
         * schedule ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateBusinessReportSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBusinessReportScheduleOutcome UpdateBusinessReportSchedule(const Model::UpdateBusinessReportScheduleRequest& request) const;

        /**
         * <p>Updates the configuration of the report delivery schedule with the specified
         * schedule ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateBusinessReportSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBusinessReportScheduleOutcomeCallable UpdateBusinessReportScheduleCallable(const Model::UpdateBusinessReportScheduleRequest& request) const;

        /**
         * <p>Updates the configuration of the report delivery schedule with the specified
         * schedule ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateBusinessReportSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBusinessReportScheduleAsync(const Model::UpdateBusinessReportScheduleRequest& request, const UpdateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing conference provider's settings.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateConferenceProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConferenceProviderOutcome UpdateConferenceProvider(const Model::UpdateConferenceProviderRequest& request) const;

        /**
         * <p>Updates an existing conference provider's settings.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateConferenceProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConferenceProviderOutcomeCallable UpdateConferenceProviderCallable(const Model::UpdateConferenceProviderRequest& request) const;

        /**
         * <p>Updates an existing conference provider's settings.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateConferenceProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConferenceProviderAsync(const Model::UpdateConferenceProviderRequest& request, const UpdateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the contact details by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactOutcome UpdateContact(const Model::UpdateContactRequest& request) const;

        /**
         * <p>Updates the contact details by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactOutcomeCallable UpdateContactCallable(const Model::UpdateContactRequest& request) const;

        /**
         * <p>Updates the contact details by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactAsync(const Model::UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Updates the details of a gateway. If any optional field is not provided, the
         * existing corresponding value is left unmodified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayOutcome UpdateGateway(const Model::UpdateGatewayRequest& request) const;

        /**
         * <p>Updates the details of a gateway. If any optional field is not provided, the
         * existing corresponding value is left unmodified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewayOutcomeCallable UpdateGatewayCallable(const Model::UpdateGatewayRequest& request) const;

        /**
         * <p>Updates the details of a gateway. If any optional field is not provided, the
         * existing corresponding value is left unmodified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewayAsync(const Model::UpdateGatewayRequest& request, const UpdateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the details of a gateway group. If any optional field is not
         * provided, the existing corresponding value is left unmodified.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateGatewayGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayGroupOutcome UpdateGatewayGroup(const Model::UpdateGatewayGroupRequest& request) const;

        /**
         * <p>Updates the details of a gateway group. If any optional field is not
         * provided, the existing corresponding value is left unmodified.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateGatewayGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewayGroupOutcomeCallable UpdateGatewayGroupCallable(const Model::UpdateGatewayGroupRequest& request) const;

        /**
         * <p>Updates the details of a gateway group. If any optional field is not
         * provided, the existing corresponding value is left unmodified.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateGatewayGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewayGroupAsync(const Model::UpdateGatewayGroupRequest& request, const UpdateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a network profile by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkProfileOutcome UpdateNetworkProfile(const Model::UpdateNetworkProfileRequest& request) const;

        /**
         * <p>Updates a network profile by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateNetworkProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNetworkProfileOutcomeCallable UpdateNetworkProfileCallable(const Model::UpdateNetworkProfileRequest& request) const;

        /**
         * <p>Updates a network profile by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateNetworkProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNetworkProfileAsync(const Model::UpdateNetworkProfileRequest& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void ApproveSkillAsyncHelper(const Model::ApproveSkillRequest& request, const ApproveSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateContactWithAddressBookAsyncHelper(const Model::AssociateContactWithAddressBookRequest& request, const AssociateContactWithAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateDeviceWithNetworkProfileAsyncHelper(const Model::AssociateDeviceWithNetworkProfileRequest& request, const AssociateDeviceWithNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateDeviceWithRoomAsyncHelper(const Model::AssociateDeviceWithRoomRequest& request, const AssociateDeviceWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateSkillGroupWithRoomAsyncHelper(const Model::AssociateSkillGroupWithRoomRequest& request, const AssociateSkillGroupWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateSkillWithSkillGroupAsyncHelper(const Model::AssociateSkillWithSkillGroupRequest& request, const AssociateSkillWithSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateSkillWithUsersAsyncHelper(const Model::AssociateSkillWithUsersRequest& request, const AssociateSkillWithUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAddressBookAsyncHelper(const Model::CreateAddressBookRequest& request, const CreateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBusinessReportScheduleAsyncHelper(const Model::CreateBusinessReportScheduleRequest& request, const CreateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConferenceProviderAsyncHelper(const Model::CreateConferenceProviderRequest& request, const CreateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateContactAsyncHelper(const Model::CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGatewayGroupAsyncHelper(const Model::CreateGatewayGroupRequest& request, const CreateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNetworkProfileAsyncHelper(const Model::CreateNetworkProfileRequest& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProfileAsyncHelper(const Model::CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRoomAsyncHelper(const Model::CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSkillGroupAsyncHelper(const Model::CreateSkillGroupRequest& request, const CreateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAddressBookAsyncHelper(const Model::DeleteAddressBookRequest& request, const DeleteAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBusinessReportScheduleAsyncHelper(const Model::DeleteBusinessReportScheduleRequest& request, const DeleteBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConferenceProviderAsyncHelper(const Model::DeleteConferenceProviderRequest& request, const DeleteConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteContactAsyncHelper(const Model::DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeviceAsyncHelper(const Model::DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeviceUsageDataAsyncHelper(const Model::DeleteDeviceUsageDataRequest& request, const DeleteDeviceUsageDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGatewayGroupAsyncHelper(const Model::DeleteGatewayGroupRequest& request, const DeleteGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNetworkProfileAsyncHelper(const Model::DeleteNetworkProfileRequest& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProfileAsyncHelper(const Model::DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRoomAsyncHelper(const Model::DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRoomSkillParameterAsyncHelper(const Model::DeleteRoomSkillParameterRequest& request, const DeleteRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSkillAuthorizationAsyncHelper(const Model::DeleteSkillAuthorizationRequest& request, const DeleteSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSkillGroupAsyncHelper(const Model::DeleteSkillGroupRequest& request, const DeleteSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateContactFromAddressBookAsyncHelper(const Model::DisassociateContactFromAddressBookRequest& request, const DisassociateContactFromAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateDeviceFromRoomAsyncHelper(const Model::DisassociateDeviceFromRoomRequest& request, const DisassociateDeviceFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateSkillFromSkillGroupAsyncHelper(const Model::DisassociateSkillFromSkillGroupRequest& request, const DisassociateSkillFromSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateSkillFromUsersAsyncHelper(const Model::DisassociateSkillFromUsersRequest& request, const DisassociateSkillFromUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateSkillGroupFromRoomAsyncHelper(const Model::DisassociateSkillGroupFromRoomRequest& request, const DisassociateSkillGroupFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ForgetSmartHomeAppliancesAsyncHelper(const Model::ForgetSmartHomeAppliancesRequest& request, const ForgetSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAddressBookAsyncHelper(const Model::GetAddressBookRequest& request, const GetAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConferencePreferenceAsyncHelper(const Model::GetConferencePreferenceRequest& request, const GetConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConferenceProviderAsyncHelper(const Model::GetConferenceProviderRequest& request, const GetConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContactAsyncHelper(const Model::GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeviceAsyncHelper(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGatewayAsyncHelper(const Model::GetGatewayRequest& request, const GetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGatewayGroupAsyncHelper(const Model::GetGatewayGroupRequest& request, const GetGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInvitationConfigurationAsyncHelper(const Model::GetInvitationConfigurationRequest& request, const GetInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNetworkProfileAsyncHelper(const Model::GetNetworkProfileRequest& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProfileAsyncHelper(const Model::GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRoomAsyncHelper(const Model::GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRoomSkillParameterAsyncHelper(const Model::GetRoomSkillParameterRequest& request, const GetRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSkillGroupAsyncHelper(const Model::GetSkillGroupRequest& request, const GetSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBusinessReportSchedulesAsyncHelper(const Model::ListBusinessReportSchedulesRequest& request, const ListBusinessReportSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConferenceProvidersAsyncHelper(const Model::ListConferenceProvidersRequest& request, const ListConferenceProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeviceEventsAsyncHelper(const Model::ListDeviceEventsRequest& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGatewayGroupsAsyncHelper(const Model::ListGatewayGroupsRequest& request, const ListGatewayGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGatewaysAsyncHelper(const Model::ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSkillsAsyncHelper(const Model::ListSkillsRequest& request, const ListSkillsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSkillsStoreCategoriesAsyncHelper(const Model::ListSkillsStoreCategoriesRequest& request, const ListSkillsStoreCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSkillsStoreSkillsByCategoryAsyncHelper(const Model::ListSkillsStoreSkillsByCategoryRequest& request, const ListSkillsStoreSkillsByCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSmartHomeAppliancesAsyncHelper(const Model::ListSmartHomeAppliancesRequest& request, const ListSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutConferencePreferenceAsyncHelper(const Model::PutConferencePreferenceRequest& request, const PutConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutInvitationConfigurationAsyncHelper(const Model::PutInvitationConfigurationRequest& request, const PutInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRoomSkillParameterAsyncHelper(const Model::PutRoomSkillParameterRequest& request, const PutRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutSkillAuthorizationAsyncHelper(const Model::PutSkillAuthorizationRequest& request, const PutSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterAVSDeviceAsyncHelper(const Model::RegisterAVSDeviceRequest& request, const RegisterAVSDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectSkillAsyncHelper(const Model::RejectSkillRequest& request, const RejectSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResolveRoomAsyncHelper(const Model::ResolveRoomRequest& request, const ResolveRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeInvitationAsyncHelper(const Model::RevokeInvitationRequest& request, const RevokeInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchAddressBooksAsyncHelper(const Model::SearchAddressBooksRequest& request, const SearchAddressBooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchContactsAsyncHelper(const Model::SearchContactsRequest& request, const SearchContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchDevicesAsyncHelper(const Model::SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchNetworkProfilesAsyncHelper(const Model::SearchNetworkProfilesRequest& request, const SearchNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchProfilesAsyncHelper(const Model::SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchRoomsAsyncHelper(const Model::SearchRoomsRequest& request, const SearchRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchSkillGroupsAsyncHelper(const Model::SearchSkillGroupsRequest& request, const SearchSkillGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchUsersAsyncHelper(const Model::SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendAnnouncementAsyncHelper(const Model::SendAnnouncementRequest& request, const SendAnnouncementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendInvitationAsyncHelper(const Model::SendInvitationRequest& request, const SendInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDeviceSyncAsyncHelper(const Model::StartDeviceSyncRequest& request, const StartDeviceSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartSmartHomeApplianceDiscoveryAsyncHelper(const Model::StartSmartHomeApplianceDiscoveryRequest& request, const StartSmartHomeApplianceDiscoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAddressBookAsyncHelper(const Model::UpdateAddressBookRequest& request, const UpdateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBusinessReportScheduleAsyncHelper(const Model::UpdateBusinessReportScheduleRequest& request, const UpdateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConferenceProviderAsyncHelper(const Model::UpdateConferenceProviderRequest& request, const UpdateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactAsyncHelper(const Model::UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDeviceAsyncHelper(const Model::UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGatewayAsyncHelper(const Model::UpdateGatewayRequest& request, const UpdateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGatewayGroupAsyncHelper(const Model::UpdateGatewayGroupRequest& request, const UpdateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNetworkProfileAsyncHelper(const Model::UpdateNetworkProfileRequest& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProfileAsyncHelper(const Model::UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoomAsyncHelper(const Model::UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSkillGroupAsyncHelper(const Model::UpdateSkillGroupRequest& request, const UpdateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AlexaForBusiness
} // namespace Aws
