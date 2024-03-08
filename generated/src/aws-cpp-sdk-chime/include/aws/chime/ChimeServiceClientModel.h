/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/chime/ChimeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/chime/ChimeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ChimeClient header */
#include <aws/chime/model/AssociatePhoneNumberWithUserResult.h>
#include <aws/chime/model/AssociateSigninDelegateGroupsWithAccountResult.h>
#include <aws/chime/model/BatchCreateRoomMembershipResult.h>
#include <aws/chime/model/BatchDeletePhoneNumberResult.h>
#include <aws/chime/model/BatchSuspendUserResult.h>
#include <aws/chime/model/BatchUnsuspendUserResult.h>
#include <aws/chime/model/BatchUpdatePhoneNumberResult.h>
#include <aws/chime/model/BatchUpdateUserResult.h>
#include <aws/chime/model/CreateAccountResult.h>
#include <aws/chime/model/CreateBotResult.h>
#include <aws/chime/model/CreateMeetingDialOutResult.h>
#include <aws/chime/model/CreatePhoneNumberOrderResult.h>
#include <aws/chime/model/CreateRoomResult.h>
#include <aws/chime/model/CreateRoomMembershipResult.h>
#include <aws/chime/model/CreateUserResult.h>
#include <aws/chime/model/DeleteAccountResult.h>
#include <aws/chime/model/DisassociatePhoneNumberFromUserResult.h>
#include <aws/chime/model/DisassociateSigninDelegateGroupsFromAccountResult.h>
#include <aws/chime/model/GetAccountResult.h>
#include <aws/chime/model/GetAccountSettingsResult.h>
#include <aws/chime/model/GetBotResult.h>
#include <aws/chime/model/GetEventsConfigurationResult.h>
#include <aws/chime/model/GetGlobalSettingsResult.h>
#include <aws/chime/model/GetPhoneNumberResult.h>
#include <aws/chime/model/GetPhoneNumberOrderResult.h>
#include <aws/chime/model/GetPhoneNumberSettingsResult.h>
#include <aws/chime/model/GetRetentionSettingsResult.h>
#include <aws/chime/model/GetRoomResult.h>
#include <aws/chime/model/GetUserResult.h>
#include <aws/chime/model/GetUserSettingsResult.h>
#include <aws/chime/model/InviteUsersResult.h>
#include <aws/chime/model/ListAccountsResult.h>
#include <aws/chime/model/ListBotsResult.h>
#include <aws/chime/model/ListPhoneNumberOrdersResult.h>
#include <aws/chime/model/ListPhoneNumbersResult.h>
#include <aws/chime/model/ListRoomMembershipsResult.h>
#include <aws/chime/model/ListRoomsResult.h>
#include <aws/chime/model/ListSupportedPhoneNumberCountriesResult.h>
#include <aws/chime/model/ListUsersResult.h>
#include <aws/chime/model/LogoutUserResult.h>
#include <aws/chime/model/PutEventsConfigurationResult.h>
#include <aws/chime/model/PutRetentionSettingsResult.h>
#include <aws/chime/model/RedactConversationMessageResult.h>
#include <aws/chime/model/RedactRoomMessageResult.h>
#include <aws/chime/model/RegenerateSecurityTokenResult.h>
#include <aws/chime/model/ResetPersonalPINResult.h>
#include <aws/chime/model/RestorePhoneNumberResult.h>
#include <aws/chime/model/SearchAvailablePhoneNumbersResult.h>
#include <aws/chime/model/UpdateAccountResult.h>
#include <aws/chime/model/UpdateAccountSettingsResult.h>
#include <aws/chime/model/UpdateBotResult.h>
#include <aws/chime/model/UpdatePhoneNumberResult.h>
#include <aws/chime/model/UpdateRoomResult.h>
#include <aws/chime/model/UpdateRoomMembershipResult.h>
#include <aws/chime/model/UpdateUserResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ChimeClient header */

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

  namespace Chime
  {
    using ChimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ChimeEndpointProviderBase = Aws::Chime::Endpoint::ChimeEndpointProviderBase;
    using ChimeEndpointProvider = Aws::Chime::Endpoint::ChimeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ChimeClient header */
      class AssociatePhoneNumberWithUserRequest;
      class AssociateSigninDelegateGroupsWithAccountRequest;
      class BatchCreateRoomMembershipRequest;
      class BatchDeletePhoneNumberRequest;
      class BatchSuspendUserRequest;
      class BatchUnsuspendUserRequest;
      class BatchUpdatePhoneNumberRequest;
      class BatchUpdateUserRequest;
      class CreateAccountRequest;
      class CreateBotRequest;
      class CreateMeetingDialOutRequest;
      class CreatePhoneNumberOrderRequest;
      class CreateRoomRequest;
      class CreateRoomMembershipRequest;
      class CreateUserRequest;
      class DeleteAccountRequest;
      class DeleteEventsConfigurationRequest;
      class DeletePhoneNumberRequest;
      class DeleteRoomRequest;
      class DeleteRoomMembershipRequest;
      class DisassociatePhoneNumberFromUserRequest;
      class DisassociateSigninDelegateGroupsFromAccountRequest;
      class GetAccountRequest;
      class GetAccountSettingsRequest;
      class GetBotRequest;
      class GetEventsConfigurationRequest;
      class GetGlobalSettingsRequest;
      class GetPhoneNumberRequest;
      class GetPhoneNumberOrderRequest;
      class GetPhoneNumberSettingsRequest;
      class GetRetentionSettingsRequest;
      class GetRoomRequest;
      class GetUserRequest;
      class GetUserSettingsRequest;
      class InviteUsersRequest;
      class ListAccountsRequest;
      class ListBotsRequest;
      class ListPhoneNumberOrdersRequest;
      class ListPhoneNumbersRequest;
      class ListRoomMembershipsRequest;
      class ListRoomsRequest;
      class ListSupportedPhoneNumberCountriesRequest;
      class ListUsersRequest;
      class LogoutUserRequest;
      class PutEventsConfigurationRequest;
      class PutRetentionSettingsRequest;
      class RedactConversationMessageRequest;
      class RedactRoomMessageRequest;
      class RegenerateSecurityTokenRequest;
      class ResetPersonalPINRequest;
      class RestorePhoneNumberRequest;
      class SearchAvailablePhoneNumbersRequest;
      class UpdateAccountRequest;
      class UpdateAccountSettingsRequest;
      class UpdateBotRequest;
      class UpdateGlobalSettingsRequest;
      class UpdatePhoneNumberRequest;
      class UpdatePhoneNumberSettingsRequest;
      class UpdateRoomRequest;
      class UpdateRoomMembershipRequest;
      class UpdateUserRequest;
      class UpdateUserSettingsRequest;
      /* End of service model forward declarations required in ChimeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociatePhoneNumberWithUserResult, ChimeError> AssociatePhoneNumberWithUserOutcome;
      typedef Aws::Utils::Outcome<AssociateSigninDelegateGroupsWithAccountResult, ChimeError> AssociateSigninDelegateGroupsWithAccountOutcome;
      typedef Aws::Utils::Outcome<BatchCreateRoomMembershipResult, ChimeError> BatchCreateRoomMembershipOutcome;
      typedef Aws::Utils::Outcome<BatchDeletePhoneNumberResult, ChimeError> BatchDeletePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<BatchSuspendUserResult, ChimeError> BatchSuspendUserOutcome;
      typedef Aws::Utils::Outcome<BatchUnsuspendUserResult, ChimeError> BatchUnsuspendUserOutcome;
      typedef Aws::Utils::Outcome<BatchUpdatePhoneNumberResult, ChimeError> BatchUpdatePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateUserResult, ChimeError> BatchUpdateUserOutcome;
      typedef Aws::Utils::Outcome<CreateAccountResult, ChimeError> CreateAccountOutcome;
      typedef Aws::Utils::Outcome<CreateBotResult, ChimeError> CreateBotOutcome;
      typedef Aws::Utils::Outcome<CreateMeetingDialOutResult, ChimeError> CreateMeetingDialOutOutcome;
      typedef Aws::Utils::Outcome<CreatePhoneNumberOrderResult, ChimeError> CreatePhoneNumberOrderOutcome;
      typedef Aws::Utils::Outcome<CreateRoomResult, ChimeError> CreateRoomOutcome;
      typedef Aws::Utils::Outcome<CreateRoomMembershipResult, ChimeError> CreateRoomMembershipOutcome;
      typedef Aws::Utils::Outcome<CreateUserResult, ChimeError> CreateUserOutcome;
      typedef Aws::Utils::Outcome<DeleteAccountResult, ChimeError> DeleteAccountOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteEventsConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeletePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteRoomOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteRoomMembershipOutcome;
      typedef Aws::Utils::Outcome<DisassociatePhoneNumberFromUserResult, ChimeError> DisassociatePhoneNumberFromUserOutcome;
      typedef Aws::Utils::Outcome<DisassociateSigninDelegateGroupsFromAccountResult, ChimeError> DisassociateSigninDelegateGroupsFromAccountOutcome;
      typedef Aws::Utils::Outcome<GetAccountResult, ChimeError> GetAccountOutcome;
      typedef Aws::Utils::Outcome<GetAccountSettingsResult, ChimeError> GetAccountSettingsOutcome;
      typedef Aws::Utils::Outcome<GetBotResult, ChimeError> GetBotOutcome;
      typedef Aws::Utils::Outcome<GetEventsConfigurationResult, ChimeError> GetEventsConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetGlobalSettingsResult, ChimeError> GetGlobalSettingsOutcome;
      typedef Aws::Utils::Outcome<GetPhoneNumberResult, ChimeError> GetPhoneNumberOutcome;
      typedef Aws::Utils::Outcome<GetPhoneNumberOrderResult, ChimeError> GetPhoneNumberOrderOutcome;
      typedef Aws::Utils::Outcome<GetPhoneNumberSettingsResult, ChimeError> GetPhoneNumberSettingsOutcome;
      typedef Aws::Utils::Outcome<GetRetentionSettingsResult, ChimeError> GetRetentionSettingsOutcome;
      typedef Aws::Utils::Outcome<GetRoomResult, ChimeError> GetRoomOutcome;
      typedef Aws::Utils::Outcome<GetUserResult, ChimeError> GetUserOutcome;
      typedef Aws::Utils::Outcome<GetUserSettingsResult, ChimeError> GetUserSettingsOutcome;
      typedef Aws::Utils::Outcome<InviteUsersResult, ChimeError> InviteUsersOutcome;
      typedef Aws::Utils::Outcome<ListAccountsResult, ChimeError> ListAccountsOutcome;
      typedef Aws::Utils::Outcome<ListBotsResult, ChimeError> ListBotsOutcome;
      typedef Aws::Utils::Outcome<ListPhoneNumberOrdersResult, ChimeError> ListPhoneNumberOrdersOutcome;
      typedef Aws::Utils::Outcome<ListPhoneNumbersResult, ChimeError> ListPhoneNumbersOutcome;
      typedef Aws::Utils::Outcome<ListRoomMembershipsResult, ChimeError> ListRoomMembershipsOutcome;
      typedef Aws::Utils::Outcome<ListRoomsResult, ChimeError> ListRoomsOutcome;
      typedef Aws::Utils::Outcome<ListSupportedPhoneNumberCountriesResult, ChimeError> ListSupportedPhoneNumberCountriesOutcome;
      typedef Aws::Utils::Outcome<ListUsersResult, ChimeError> ListUsersOutcome;
      typedef Aws::Utils::Outcome<LogoutUserResult, ChimeError> LogoutUserOutcome;
      typedef Aws::Utils::Outcome<PutEventsConfigurationResult, ChimeError> PutEventsConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutRetentionSettingsResult, ChimeError> PutRetentionSettingsOutcome;
      typedef Aws::Utils::Outcome<RedactConversationMessageResult, ChimeError> RedactConversationMessageOutcome;
      typedef Aws::Utils::Outcome<RedactRoomMessageResult, ChimeError> RedactRoomMessageOutcome;
      typedef Aws::Utils::Outcome<RegenerateSecurityTokenResult, ChimeError> RegenerateSecurityTokenOutcome;
      typedef Aws::Utils::Outcome<ResetPersonalPINResult, ChimeError> ResetPersonalPINOutcome;
      typedef Aws::Utils::Outcome<RestorePhoneNumberResult, ChimeError> RestorePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<SearchAvailablePhoneNumbersResult, ChimeError> SearchAvailablePhoneNumbersOutcome;
      typedef Aws::Utils::Outcome<UpdateAccountResult, ChimeError> UpdateAccountOutcome;
      typedef Aws::Utils::Outcome<UpdateAccountSettingsResult, ChimeError> UpdateAccountSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateBotResult, ChimeError> UpdateBotOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> UpdateGlobalSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdatePhoneNumberResult, ChimeError> UpdatePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> UpdatePhoneNumberSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateRoomResult, ChimeError> UpdateRoomOutcome;
      typedef Aws::Utils::Outcome<UpdateRoomMembershipResult, ChimeError> UpdateRoomMembershipOutcome;
      typedef Aws::Utils::Outcome<UpdateUserResult, ChimeError> UpdateUserOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> UpdateUserSettingsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociatePhoneNumberWithUserOutcome> AssociatePhoneNumberWithUserOutcomeCallable;
      typedef std::future<AssociateSigninDelegateGroupsWithAccountOutcome> AssociateSigninDelegateGroupsWithAccountOutcomeCallable;
      typedef std::future<BatchCreateRoomMembershipOutcome> BatchCreateRoomMembershipOutcomeCallable;
      typedef std::future<BatchDeletePhoneNumberOutcome> BatchDeletePhoneNumberOutcomeCallable;
      typedef std::future<BatchSuspendUserOutcome> BatchSuspendUserOutcomeCallable;
      typedef std::future<BatchUnsuspendUserOutcome> BatchUnsuspendUserOutcomeCallable;
      typedef std::future<BatchUpdatePhoneNumberOutcome> BatchUpdatePhoneNumberOutcomeCallable;
      typedef std::future<BatchUpdateUserOutcome> BatchUpdateUserOutcomeCallable;
      typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
      typedef std::future<CreateBotOutcome> CreateBotOutcomeCallable;
      typedef std::future<CreateMeetingDialOutOutcome> CreateMeetingDialOutOutcomeCallable;
      typedef std::future<CreatePhoneNumberOrderOutcome> CreatePhoneNumberOrderOutcomeCallable;
      typedef std::future<CreateRoomOutcome> CreateRoomOutcomeCallable;
      typedef std::future<CreateRoomMembershipOutcome> CreateRoomMembershipOutcomeCallable;
      typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
      typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
      typedef std::future<DeleteEventsConfigurationOutcome> DeleteEventsConfigurationOutcomeCallable;
      typedef std::future<DeletePhoneNumberOutcome> DeletePhoneNumberOutcomeCallable;
      typedef std::future<DeleteRoomOutcome> DeleteRoomOutcomeCallable;
      typedef std::future<DeleteRoomMembershipOutcome> DeleteRoomMembershipOutcomeCallable;
      typedef std::future<DisassociatePhoneNumberFromUserOutcome> DisassociatePhoneNumberFromUserOutcomeCallable;
      typedef std::future<DisassociateSigninDelegateGroupsFromAccountOutcome> DisassociateSigninDelegateGroupsFromAccountOutcomeCallable;
      typedef std::future<GetAccountOutcome> GetAccountOutcomeCallable;
      typedef std::future<GetAccountSettingsOutcome> GetAccountSettingsOutcomeCallable;
      typedef std::future<GetBotOutcome> GetBotOutcomeCallable;
      typedef std::future<GetEventsConfigurationOutcome> GetEventsConfigurationOutcomeCallable;
      typedef std::future<GetGlobalSettingsOutcome> GetGlobalSettingsOutcomeCallable;
      typedef std::future<GetPhoneNumberOutcome> GetPhoneNumberOutcomeCallable;
      typedef std::future<GetPhoneNumberOrderOutcome> GetPhoneNumberOrderOutcomeCallable;
      typedef std::future<GetPhoneNumberSettingsOutcome> GetPhoneNumberSettingsOutcomeCallable;
      typedef std::future<GetRetentionSettingsOutcome> GetRetentionSettingsOutcomeCallable;
      typedef std::future<GetRoomOutcome> GetRoomOutcomeCallable;
      typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
      typedef std::future<GetUserSettingsOutcome> GetUserSettingsOutcomeCallable;
      typedef std::future<InviteUsersOutcome> InviteUsersOutcomeCallable;
      typedef std::future<ListAccountsOutcome> ListAccountsOutcomeCallable;
      typedef std::future<ListBotsOutcome> ListBotsOutcomeCallable;
      typedef std::future<ListPhoneNumberOrdersOutcome> ListPhoneNumberOrdersOutcomeCallable;
      typedef std::future<ListPhoneNumbersOutcome> ListPhoneNumbersOutcomeCallable;
      typedef std::future<ListRoomMembershipsOutcome> ListRoomMembershipsOutcomeCallable;
      typedef std::future<ListRoomsOutcome> ListRoomsOutcomeCallable;
      typedef std::future<ListSupportedPhoneNumberCountriesOutcome> ListSupportedPhoneNumberCountriesOutcomeCallable;
      typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
      typedef std::future<LogoutUserOutcome> LogoutUserOutcomeCallable;
      typedef std::future<PutEventsConfigurationOutcome> PutEventsConfigurationOutcomeCallable;
      typedef std::future<PutRetentionSettingsOutcome> PutRetentionSettingsOutcomeCallable;
      typedef std::future<RedactConversationMessageOutcome> RedactConversationMessageOutcomeCallable;
      typedef std::future<RedactRoomMessageOutcome> RedactRoomMessageOutcomeCallable;
      typedef std::future<RegenerateSecurityTokenOutcome> RegenerateSecurityTokenOutcomeCallable;
      typedef std::future<ResetPersonalPINOutcome> ResetPersonalPINOutcomeCallable;
      typedef std::future<RestorePhoneNumberOutcome> RestorePhoneNumberOutcomeCallable;
      typedef std::future<SearchAvailablePhoneNumbersOutcome> SearchAvailablePhoneNumbersOutcomeCallable;
      typedef std::future<UpdateAccountOutcome> UpdateAccountOutcomeCallable;
      typedef std::future<UpdateAccountSettingsOutcome> UpdateAccountSettingsOutcomeCallable;
      typedef std::future<UpdateBotOutcome> UpdateBotOutcomeCallable;
      typedef std::future<UpdateGlobalSettingsOutcome> UpdateGlobalSettingsOutcomeCallable;
      typedef std::future<UpdatePhoneNumberOutcome> UpdatePhoneNumberOutcomeCallable;
      typedef std::future<UpdatePhoneNumberSettingsOutcome> UpdatePhoneNumberSettingsOutcomeCallable;
      typedef std::future<UpdateRoomOutcome> UpdateRoomOutcomeCallable;
      typedef std::future<UpdateRoomMembershipOutcome> UpdateRoomMembershipOutcomeCallable;
      typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
      typedef std::future<UpdateUserSettingsOutcome> UpdateUserSettingsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ChimeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ChimeClient*, const Model::AssociatePhoneNumberWithUserRequest&, const Model::AssociatePhoneNumberWithUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePhoneNumberWithUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::AssociateSigninDelegateGroupsWithAccountRequest&, const Model::AssociateSigninDelegateGroupsWithAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSigninDelegateGroupsWithAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchCreateRoomMembershipRequest&, const Model::BatchCreateRoomMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateRoomMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchDeletePhoneNumberRequest&, const Model::BatchDeletePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeletePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchSuspendUserRequest&, const Model::BatchSuspendUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchSuspendUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchUnsuspendUserRequest&, const Model::BatchUnsuspendUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUnsuspendUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchUpdatePhoneNumberRequest&, const Model::BatchUpdatePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdatePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchUpdateUserRequest&, const Model::BatchUpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateAccountRequest&, const Model::CreateAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateBotRequest&, const Model::CreateBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBotResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateMeetingDialOutRequest&, const Model::CreateMeetingDialOutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMeetingDialOutResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreatePhoneNumberOrderRequest&, const Model::CreatePhoneNumberOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePhoneNumberOrderResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateRoomRequest&, const Model::CreateRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoomResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateRoomMembershipRequest&, const Model::CreateRoomMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoomMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteAccountRequest&, const Model::DeleteAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteEventsConfigurationRequest&, const Model::DeleteEventsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventsConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeletePhoneNumberRequest&, const Model::DeletePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteRoomRequest&, const Model::DeleteRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoomResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteRoomMembershipRequest&, const Model::DeleteRoomMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoomMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DisassociatePhoneNumberFromUserRequest&, const Model::DisassociatePhoneNumberFromUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePhoneNumberFromUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DisassociateSigninDelegateGroupsFromAccountRequest&, const Model::DisassociateSigninDelegateGroupsFromAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSigninDelegateGroupsFromAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetAccountRequest&, const Model::GetAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetAccountSettingsRequest&, const Model::GetAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetBotRequest&, const Model::GetBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetEventsConfigurationRequest&, const Model::GetEventsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventsConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetGlobalSettingsRequest&, const Model::GetGlobalSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGlobalSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetPhoneNumberRequest&, const Model::GetPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetPhoneNumberOrderRequest&, const Model::GetPhoneNumberOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPhoneNumberOrderResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetPhoneNumberSettingsRequest&, const Model::GetPhoneNumberSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPhoneNumberSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetRetentionSettingsRequest&, const Model::GetRetentionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRetentionSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetRoomRequest&, const Model::GetRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoomResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetUserRequest&, const Model::GetUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetUserSettingsRequest&, const Model::GetUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::InviteUsersRequest&, const Model::InviteUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InviteUsersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListAccountsRequest&, const Model::ListAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListBotsRequest&, const Model::ListBotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListPhoneNumberOrdersRequest&, const Model::ListPhoneNumberOrdersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumberOrdersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListPhoneNumbersRequest&, const Model::ListPhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListRoomMembershipsRequest&, const Model::ListRoomMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoomMembershipsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListRoomsRequest&, const Model::ListRoomsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoomsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListSupportedPhoneNumberCountriesRequest&, const Model::ListSupportedPhoneNumberCountriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSupportedPhoneNumberCountriesResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::LogoutUserRequest&, const Model::LogoutUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LogoutUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutEventsConfigurationRequest&, const Model::PutEventsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventsConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutRetentionSettingsRequest&, const Model::PutRetentionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRetentionSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::RedactConversationMessageRequest&, const Model::RedactConversationMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RedactConversationMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::RedactRoomMessageRequest&, const Model::RedactRoomMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RedactRoomMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::RegenerateSecurityTokenRequest&, const Model::RegenerateSecurityTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegenerateSecurityTokenResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ResetPersonalPINRequest&, const Model::ResetPersonalPINOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetPersonalPINResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::RestorePhoneNumberRequest&, const Model::RestorePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestorePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::SearchAvailablePhoneNumbersRequest&, const Model::SearchAvailablePhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchAvailablePhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateAccountRequest&, const Model::UpdateAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateAccountSettingsRequest&, const Model::UpdateAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateBotRequest&, const Model::UpdateBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBotResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateGlobalSettingsRequest&, const Model::UpdateGlobalSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlobalSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdatePhoneNumberRequest&, const Model::UpdatePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdatePhoneNumberSettingsRequest&, const Model::UpdatePhoneNumberSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePhoneNumberSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateRoomRequest&, const Model::UpdateRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoomResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateRoomMembershipRequest&, const Model::UpdateRoomMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoomMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateUserSettingsRequest&, const Model::UpdateUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserSettingsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Chime
} // namespace Aws
