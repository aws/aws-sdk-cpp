/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/alexaforbusiness/AlexaForBusinessErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/alexaforbusiness/AlexaForBusinessEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AlexaForBusinessClient header */
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
/* End of service model headers required in AlexaForBusinessClient header */

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
    using AlexaForBusinessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AlexaForBusinessEndpointProviderBase = Aws::AlexaForBusiness::Endpoint::AlexaForBusinessEndpointProviderBase;
    using AlexaForBusinessEndpointProvider = Aws::AlexaForBusiness::Endpoint::AlexaForBusinessEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AlexaForBusinessClient header */
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
      /* End of service model forward declarations required in AlexaForBusinessClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ApproveSkillResult, AlexaForBusinessError> ApproveSkillOutcome;
      typedef Aws::Utils::Outcome<AssociateContactWithAddressBookResult, AlexaForBusinessError> AssociateContactWithAddressBookOutcome;
      typedef Aws::Utils::Outcome<AssociateDeviceWithNetworkProfileResult, AlexaForBusinessError> AssociateDeviceWithNetworkProfileOutcome;
      typedef Aws::Utils::Outcome<AssociateDeviceWithRoomResult, AlexaForBusinessError> AssociateDeviceWithRoomOutcome;
      typedef Aws::Utils::Outcome<AssociateSkillGroupWithRoomResult, AlexaForBusinessError> AssociateSkillGroupWithRoomOutcome;
      typedef Aws::Utils::Outcome<AssociateSkillWithSkillGroupResult, AlexaForBusinessError> AssociateSkillWithSkillGroupOutcome;
      typedef Aws::Utils::Outcome<AssociateSkillWithUsersResult, AlexaForBusinessError> AssociateSkillWithUsersOutcome;
      typedef Aws::Utils::Outcome<CreateAddressBookResult, AlexaForBusinessError> CreateAddressBookOutcome;
      typedef Aws::Utils::Outcome<CreateBusinessReportScheduleResult, AlexaForBusinessError> CreateBusinessReportScheduleOutcome;
      typedef Aws::Utils::Outcome<CreateConferenceProviderResult, AlexaForBusinessError> CreateConferenceProviderOutcome;
      typedef Aws::Utils::Outcome<CreateContactResult, AlexaForBusinessError> CreateContactOutcome;
      typedef Aws::Utils::Outcome<CreateGatewayGroupResult, AlexaForBusinessError> CreateGatewayGroupOutcome;
      typedef Aws::Utils::Outcome<CreateNetworkProfileResult, AlexaForBusinessError> CreateNetworkProfileOutcome;
      typedef Aws::Utils::Outcome<CreateProfileResult, AlexaForBusinessError> CreateProfileOutcome;
      typedef Aws::Utils::Outcome<CreateRoomResult, AlexaForBusinessError> CreateRoomOutcome;
      typedef Aws::Utils::Outcome<CreateSkillGroupResult, AlexaForBusinessError> CreateSkillGroupOutcome;
      typedef Aws::Utils::Outcome<CreateUserResult, AlexaForBusinessError> CreateUserOutcome;
      typedef Aws::Utils::Outcome<DeleteAddressBookResult, AlexaForBusinessError> DeleteAddressBookOutcome;
      typedef Aws::Utils::Outcome<DeleteBusinessReportScheduleResult, AlexaForBusinessError> DeleteBusinessReportScheduleOutcome;
      typedef Aws::Utils::Outcome<DeleteConferenceProviderResult, AlexaForBusinessError> DeleteConferenceProviderOutcome;
      typedef Aws::Utils::Outcome<DeleteContactResult, AlexaForBusinessError> DeleteContactOutcome;
      typedef Aws::Utils::Outcome<DeleteDeviceResult, AlexaForBusinessError> DeleteDeviceOutcome;
      typedef Aws::Utils::Outcome<DeleteDeviceUsageDataResult, AlexaForBusinessError> DeleteDeviceUsageDataOutcome;
      typedef Aws::Utils::Outcome<DeleteGatewayGroupResult, AlexaForBusinessError> DeleteGatewayGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteNetworkProfileResult, AlexaForBusinessError> DeleteNetworkProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteProfileResult, AlexaForBusinessError> DeleteProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteRoomResult, AlexaForBusinessError> DeleteRoomOutcome;
      typedef Aws::Utils::Outcome<DeleteRoomSkillParameterResult, AlexaForBusinessError> DeleteRoomSkillParameterOutcome;
      typedef Aws::Utils::Outcome<DeleteSkillAuthorizationResult, AlexaForBusinessError> DeleteSkillAuthorizationOutcome;
      typedef Aws::Utils::Outcome<DeleteSkillGroupResult, AlexaForBusinessError> DeleteSkillGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteUserResult, AlexaForBusinessError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<DisassociateContactFromAddressBookResult, AlexaForBusinessError> DisassociateContactFromAddressBookOutcome;
      typedef Aws::Utils::Outcome<DisassociateDeviceFromRoomResult, AlexaForBusinessError> DisassociateDeviceFromRoomOutcome;
      typedef Aws::Utils::Outcome<DisassociateSkillFromSkillGroupResult, AlexaForBusinessError> DisassociateSkillFromSkillGroupOutcome;
      typedef Aws::Utils::Outcome<DisassociateSkillFromUsersResult, AlexaForBusinessError> DisassociateSkillFromUsersOutcome;
      typedef Aws::Utils::Outcome<DisassociateSkillGroupFromRoomResult, AlexaForBusinessError> DisassociateSkillGroupFromRoomOutcome;
      typedef Aws::Utils::Outcome<ForgetSmartHomeAppliancesResult, AlexaForBusinessError> ForgetSmartHomeAppliancesOutcome;
      typedef Aws::Utils::Outcome<GetAddressBookResult, AlexaForBusinessError> GetAddressBookOutcome;
      typedef Aws::Utils::Outcome<GetConferencePreferenceResult, AlexaForBusinessError> GetConferencePreferenceOutcome;
      typedef Aws::Utils::Outcome<GetConferenceProviderResult, AlexaForBusinessError> GetConferenceProviderOutcome;
      typedef Aws::Utils::Outcome<GetContactResult, AlexaForBusinessError> GetContactOutcome;
      typedef Aws::Utils::Outcome<GetDeviceResult, AlexaForBusinessError> GetDeviceOutcome;
      typedef Aws::Utils::Outcome<GetGatewayResult, AlexaForBusinessError> GetGatewayOutcome;
      typedef Aws::Utils::Outcome<GetGatewayGroupResult, AlexaForBusinessError> GetGatewayGroupOutcome;
      typedef Aws::Utils::Outcome<GetInvitationConfigurationResult, AlexaForBusinessError> GetInvitationConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetNetworkProfileResult, AlexaForBusinessError> GetNetworkProfileOutcome;
      typedef Aws::Utils::Outcome<GetProfileResult, AlexaForBusinessError> GetProfileOutcome;
      typedef Aws::Utils::Outcome<GetRoomResult, AlexaForBusinessError> GetRoomOutcome;
      typedef Aws::Utils::Outcome<GetRoomSkillParameterResult, AlexaForBusinessError> GetRoomSkillParameterOutcome;
      typedef Aws::Utils::Outcome<GetSkillGroupResult, AlexaForBusinessError> GetSkillGroupOutcome;
      typedef Aws::Utils::Outcome<ListBusinessReportSchedulesResult, AlexaForBusinessError> ListBusinessReportSchedulesOutcome;
      typedef Aws::Utils::Outcome<ListConferenceProvidersResult, AlexaForBusinessError> ListConferenceProvidersOutcome;
      typedef Aws::Utils::Outcome<ListDeviceEventsResult, AlexaForBusinessError> ListDeviceEventsOutcome;
      typedef Aws::Utils::Outcome<ListGatewayGroupsResult, AlexaForBusinessError> ListGatewayGroupsOutcome;
      typedef Aws::Utils::Outcome<ListGatewaysResult, AlexaForBusinessError> ListGatewaysOutcome;
      typedef Aws::Utils::Outcome<ListSkillsResult, AlexaForBusinessError> ListSkillsOutcome;
      typedef Aws::Utils::Outcome<ListSkillsStoreCategoriesResult, AlexaForBusinessError> ListSkillsStoreCategoriesOutcome;
      typedef Aws::Utils::Outcome<ListSkillsStoreSkillsByCategoryResult, AlexaForBusinessError> ListSkillsStoreSkillsByCategoryOutcome;
      typedef Aws::Utils::Outcome<ListSmartHomeAppliancesResult, AlexaForBusinessError> ListSmartHomeAppliancesOutcome;
      typedef Aws::Utils::Outcome<ListTagsResult, AlexaForBusinessError> ListTagsOutcome;
      typedef Aws::Utils::Outcome<PutConferencePreferenceResult, AlexaForBusinessError> PutConferencePreferenceOutcome;
      typedef Aws::Utils::Outcome<PutInvitationConfigurationResult, AlexaForBusinessError> PutInvitationConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutRoomSkillParameterResult, AlexaForBusinessError> PutRoomSkillParameterOutcome;
      typedef Aws::Utils::Outcome<PutSkillAuthorizationResult, AlexaForBusinessError> PutSkillAuthorizationOutcome;
      typedef Aws::Utils::Outcome<RegisterAVSDeviceResult, AlexaForBusinessError> RegisterAVSDeviceOutcome;
      typedef Aws::Utils::Outcome<RejectSkillResult, AlexaForBusinessError> RejectSkillOutcome;
      typedef Aws::Utils::Outcome<ResolveRoomResult, AlexaForBusinessError> ResolveRoomOutcome;
      typedef Aws::Utils::Outcome<RevokeInvitationResult, AlexaForBusinessError> RevokeInvitationOutcome;
      typedef Aws::Utils::Outcome<SearchAddressBooksResult, AlexaForBusinessError> SearchAddressBooksOutcome;
      typedef Aws::Utils::Outcome<SearchContactsResult, AlexaForBusinessError> SearchContactsOutcome;
      typedef Aws::Utils::Outcome<SearchDevicesResult, AlexaForBusinessError> SearchDevicesOutcome;
      typedef Aws::Utils::Outcome<SearchNetworkProfilesResult, AlexaForBusinessError> SearchNetworkProfilesOutcome;
      typedef Aws::Utils::Outcome<SearchProfilesResult, AlexaForBusinessError> SearchProfilesOutcome;
      typedef Aws::Utils::Outcome<SearchRoomsResult, AlexaForBusinessError> SearchRoomsOutcome;
      typedef Aws::Utils::Outcome<SearchSkillGroupsResult, AlexaForBusinessError> SearchSkillGroupsOutcome;
      typedef Aws::Utils::Outcome<SearchUsersResult, AlexaForBusinessError> SearchUsersOutcome;
      typedef Aws::Utils::Outcome<SendAnnouncementResult, AlexaForBusinessError> SendAnnouncementOutcome;
      typedef Aws::Utils::Outcome<SendInvitationResult, AlexaForBusinessError> SendInvitationOutcome;
      typedef Aws::Utils::Outcome<StartDeviceSyncResult, AlexaForBusinessError> StartDeviceSyncOutcome;
      typedef Aws::Utils::Outcome<StartSmartHomeApplianceDiscoveryResult, AlexaForBusinessError> StartSmartHomeApplianceDiscoveryOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, AlexaForBusinessError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, AlexaForBusinessError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAddressBookResult, AlexaForBusinessError> UpdateAddressBookOutcome;
      typedef Aws::Utils::Outcome<UpdateBusinessReportScheduleResult, AlexaForBusinessError> UpdateBusinessReportScheduleOutcome;
      typedef Aws::Utils::Outcome<UpdateConferenceProviderResult, AlexaForBusinessError> UpdateConferenceProviderOutcome;
      typedef Aws::Utils::Outcome<UpdateContactResult, AlexaForBusinessError> UpdateContactOutcome;
      typedef Aws::Utils::Outcome<UpdateDeviceResult, AlexaForBusinessError> UpdateDeviceOutcome;
      typedef Aws::Utils::Outcome<UpdateGatewayResult, AlexaForBusinessError> UpdateGatewayOutcome;
      typedef Aws::Utils::Outcome<UpdateGatewayGroupResult, AlexaForBusinessError> UpdateGatewayGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateNetworkProfileResult, AlexaForBusinessError> UpdateNetworkProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateProfileResult, AlexaForBusinessError> UpdateProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateRoomResult, AlexaForBusinessError> UpdateRoomOutcome;
      typedef Aws::Utils::Outcome<UpdateSkillGroupResult, AlexaForBusinessError> UpdateSkillGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AlexaForBusinessClient;

    /* Service model async handlers definitions */
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
    /* End of service model async handlers definitions */
  } // namespace AlexaForBusiness
} // namespace Aws
