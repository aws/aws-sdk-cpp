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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/chime/model/AssociatePhoneNumberWithUserResult.h>
#include <aws/chime/model/AssociatePhoneNumbersWithVoiceConnectorResult.h>
#include <aws/chime/model/BatchDeletePhoneNumberResult.h>
#include <aws/chime/model/BatchSuspendUserResult.h>
#include <aws/chime/model/BatchUnsuspendUserResult.h>
#include <aws/chime/model/BatchUpdatePhoneNumberResult.h>
#include <aws/chime/model/BatchUpdateUserResult.h>
#include <aws/chime/model/CreateAccountResult.h>
#include <aws/chime/model/CreateBotResult.h>
#include <aws/chime/model/CreatePhoneNumberOrderResult.h>
#include <aws/chime/model/CreateVoiceConnectorResult.h>
#include <aws/chime/model/DeleteAccountResult.h>
#include <aws/chime/model/DisassociatePhoneNumberFromUserResult.h>
#include <aws/chime/model/DisassociatePhoneNumbersFromVoiceConnectorResult.h>
#include <aws/chime/model/GetAccountResult.h>
#include <aws/chime/model/GetAccountSettingsResult.h>
#include <aws/chime/model/GetBotResult.h>
#include <aws/chime/model/GetEventsConfigurationResult.h>
#include <aws/chime/model/GetGlobalSettingsResult.h>
#include <aws/chime/model/GetPhoneNumberResult.h>
#include <aws/chime/model/GetPhoneNumberOrderResult.h>
#include <aws/chime/model/GetUserResult.h>
#include <aws/chime/model/GetUserSettingsResult.h>
#include <aws/chime/model/GetVoiceConnectorResult.h>
#include <aws/chime/model/GetVoiceConnectorOriginationResult.h>
#include <aws/chime/model/GetVoiceConnectorTerminationResult.h>
#include <aws/chime/model/GetVoiceConnectorTerminationHealthResult.h>
#include <aws/chime/model/InviteUsersResult.h>
#include <aws/chime/model/ListAccountsResult.h>
#include <aws/chime/model/ListBotsResult.h>
#include <aws/chime/model/ListPhoneNumberOrdersResult.h>
#include <aws/chime/model/ListPhoneNumbersResult.h>
#include <aws/chime/model/ListUsersResult.h>
#include <aws/chime/model/ListVoiceConnectorTerminationCredentialsResult.h>
#include <aws/chime/model/ListVoiceConnectorsResult.h>
#include <aws/chime/model/LogoutUserResult.h>
#include <aws/chime/model/PutEventsConfigurationResult.h>
#include <aws/chime/model/PutVoiceConnectorOriginationResult.h>
#include <aws/chime/model/PutVoiceConnectorTerminationResult.h>
#include <aws/chime/model/RegenerateSecurityTokenResult.h>
#include <aws/chime/model/ResetPersonalPINResult.h>
#include <aws/chime/model/RestorePhoneNumberResult.h>
#include <aws/chime/model/SearchAvailablePhoneNumbersResult.h>
#include <aws/chime/model/UpdateAccountResult.h>
#include <aws/chime/model/UpdateAccountSettingsResult.h>
#include <aws/chime/model/UpdateBotResult.h>
#include <aws/chime/model/UpdatePhoneNumberResult.h>
#include <aws/chime/model/UpdateUserResult.h>
#include <aws/chime/model/UpdateVoiceConnectorResult.h>
#include <aws/core/NoResult.h>
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

namespace Chime
{

namespace Model
{
        class AssociatePhoneNumberWithUserRequest;
        class AssociatePhoneNumbersWithVoiceConnectorRequest;
        class BatchDeletePhoneNumberRequest;
        class BatchSuspendUserRequest;
        class BatchUnsuspendUserRequest;
        class BatchUpdatePhoneNumberRequest;
        class BatchUpdateUserRequest;
        class CreateAccountRequest;
        class CreateBotRequest;
        class CreatePhoneNumberOrderRequest;
        class CreateVoiceConnectorRequest;
        class DeleteAccountRequest;
        class DeleteEventsConfigurationRequest;
        class DeletePhoneNumberRequest;
        class DeleteVoiceConnectorRequest;
        class DeleteVoiceConnectorOriginationRequest;
        class DeleteVoiceConnectorTerminationRequest;
        class DeleteVoiceConnectorTerminationCredentialsRequest;
        class DisassociatePhoneNumberFromUserRequest;
        class DisassociatePhoneNumbersFromVoiceConnectorRequest;
        class GetAccountRequest;
        class GetAccountSettingsRequest;
        class GetBotRequest;
        class GetEventsConfigurationRequest;
        class GetPhoneNumberRequest;
        class GetPhoneNumberOrderRequest;
        class GetUserRequest;
        class GetUserSettingsRequest;
        class GetVoiceConnectorRequest;
        class GetVoiceConnectorOriginationRequest;
        class GetVoiceConnectorTerminationRequest;
        class GetVoiceConnectorTerminationHealthRequest;
        class InviteUsersRequest;
        class ListAccountsRequest;
        class ListBotsRequest;
        class ListPhoneNumberOrdersRequest;
        class ListPhoneNumbersRequest;
        class ListUsersRequest;
        class ListVoiceConnectorTerminationCredentialsRequest;
        class ListVoiceConnectorsRequest;
        class LogoutUserRequest;
        class PutEventsConfigurationRequest;
        class PutVoiceConnectorOriginationRequest;
        class PutVoiceConnectorTerminationRequest;
        class PutVoiceConnectorTerminationCredentialsRequest;
        class RegenerateSecurityTokenRequest;
        class ResetPersonalPINRequest;
        class RestorePhoneNumberRequest;
        class SearchAvailablePhoneNumbersRequest;
        class UpdateAccountRequest;
        class UpdateAccountSettingsRequest;
        class UpdateBotRequest;
        class UpdateGlobalSettingsRequest;
        class UpdatePhoneNumberRequest;
        class UpdateUserRequest;
        class UpdateUserSettingsRequest;
        class UpdateVoiceConnectorRequest;

        typedef Aws::Utils::Outcome<AssociatePhoneNumberWithUserResult, Aws::Client::AWSError<ChimeErrors>> AssociatePhoneNumberWithUserOutcome;
        typedef Aws::Utils::Outcome<AssociatePhoneNumbersWithVoiceConnectorResult, Aws::Client::AWSError<ChimeErrors>> AssociatePhoneNumbersWithVoiceConnectorOutcome;
        typedef Aws::Utils::Outcome<BatchDeletePhoneNumberResult, Aws::Client::AWSError<ChimeErrors>> BatchDeletePhoneNumberOutcome;
        typedef Aws::Utils::Outcome<BatchSuspendUserResult, Aws::Client::AWSError<ChimeErrors>> BatchSuspendUserOutcome;
        typedef Aws::Utils::Outcome<BatchUnsuspendUserResult, Aws::Client::AWSError<ChimeErrors>> BatchUnsuspendUserOutcome;
        typedef Aws::Utils::Outcome<BatchUpdatePhoneNumberResult, Aws::Client::AWSError<ChimeErrors>> BatchUpdatePhoneNumberOutcome;
        typedef Aws::Utils::Outcome<BatchUpdateUserResult, Aws::Client::AWSError<ChimeErrors>> BatchUpdateUserOutcome;
        typedef Aws::Utils::Outcome<CreateAccountResult, Aws::Client::AWSError<ChimeErrors>> CreateAccountOutcome;
        typedef Aws::Utils::Outcome<CreateBotResult, Aws::Client::AWSError<ChimeErrors>> CreateBotOutcome;
        typedef Aws::Utils::Outcome<CreatePhoneNumberOrderResult, Aws::Client::AWSError<ChimeErrors>> CreatePhoneNumberOrderOutcome;
        typedef Aws::Utils::Outcome<CreateVoiceConnectorResult, Aws::Client::AWSError<ChimeErrors>> CreateVoiceConnectorOutcome;
        typedef Aws::Utils::Outcome<DeleteAccountResult, Aws::Client::AWSError<ChimeErrors>> DeleteAccountOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ChimeErrors>> DeleteEventsConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ChimeErrors>> DeletePhoneNumberOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ChimeErrors>> DeleteVoiceConnectorOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ChimeErrors>> DeleteVoiceConnectorOriginationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ChimeErrors>> DeleteVoiceConnectorTerminationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ChimeErrors>> DeleteVoiceConnectorTerminationCredentialsOutcome;
        typedef Aws::Utils::Outcome<DisassociatePhoneNumberFromUserResult, Aws::Client::AWSError<ChimeErrors>> DisassociatePhoneNumberFromUserOutcome;
        typedef Aws::Utils::Outcome<DisassociatePhoneNumbersFromVoiceConnectorResult, Aws::Client::AWSError<ChimeErrors>> DisassociatePhoneNumbersFromVoiceConnectorOutcome;
        typedef Aws::Utils::Outcome<GetAccountResult, Aws::Client::AWSError<ChimeErrors>> GetAccountOutcome;
        typedef Aws::Utils::Outcome<GetAccountSettingsResult, Aws::Client::AWSError<ChimeErrors>> GetAccountSettingsOutcome;
        typedef Aws::Utils::Outcome<GetBotResult, Aws::Client::AWSError<ChimeErrors>> GetBotOutcome;
        typedef Aws::Utils::Outcome<GetEventsConfigurationResult, Aws::Client::AWSError<ChimeErrors>> GetEventsConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetGlobalSettingsResult, Aws::Client::AWSError<ChimeErrors>> GetGlobalSettingsOutcome;
        typedef Aws::Utils::Outcome<GetPhoneNumberResult, Aws::Client::AWSError<ChimeErrors>> GetPhoneNumberOutcome;
        typedef Aws::Utils::Outcome<GetPhoneNumberOrderResult, Aws::Client::AWSError<ChimeErrors>> GetPhoneNumberOrderOutcome;
        typedef Aws::Utils::Outcome<GetUserResult, Aws::Client::AWSError<ChimeErrors>> GetUserOutcome;
        typedef Aws::Utils::Outcome<GetUserSettingsResult, Aws::Client::AWSError<ChimeErrors>> GetUserSettingsOutcome;
        typedef Aws::Utils::Outcome<GetVoiceConnectorResult, Aws::Client::AWSError<ChimeErrors>> GetVoiceConnectorOutcome;
        typedef Aws::Utils::Outcome<GetVoiceConnectorOriginationResult, Aws::Client::AWSError<ChimeErrors>> GetVoiceConnectorOriginationOutcome;
        typedef Aws::Utils::Outcome<GetVoiceConnectorTerminationResult, Aws::Client::AWSError<ChimeErrors>> GetVoiceConnectorTerminationOutcome;
        typedef Aws::Utils::Outcome<GetVoiceConnectorTerminationHealthResult, Aws::Client::AWSError<ChimeErrors>> GetVoiceConnectorTerminationHealthOutcome;
        typedef Aws::Utils::Outcome<InviteUsersResult, Aws::Client::AWSError<ChimeErrors>> InviteUsersOutcome;
        typedef Aws::Utils::Outcome<ListAccountsResult, Aws::Client::AWSError<ChimeErrors>> ListAccountsOutcome;
        typedef Aws::Utils::Outcome<ListBotsResult, Aws::Client::AWSError<ChimeErrors>> ListBotsOutcome;
        typedef Aws::Utils::Outcome<ListPhoneNumberOrdersResult, Aws::Client::AWSError<ChimeErrors>> ListPhoneNumberOrdersOutcome;
        typedef Aws::Utils::Outcome<ListPhoneNumbersResult, Aws::Client::AWSError<ChimeErrors>> ListPhoneNumbersOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, Aws::Client::AWSError<ChimeErrors>> ListUsersOutcome;
        typedef Aws::Utils::Outcome<ListVoiceConnectorTerminationCredentialsResult, Aws::Client::AWSError<ChimeErrors>> ListVoiceConnectorTerminationCredentialsOutcome;
        typedef Aws::Utils::Outcome<ListVoiceConnectorsResult, Aws::Client::AWSError<ChimeErrors>> ListVoiceConnectorsOutcome;
        typedef Aws::Utils::Outcome<LogoutUserResult, Aws::Client::AWSError<ChimeErrors>> LogoutUserOutcome;
        typedef Aws::Utils::Outcome<PutEventsConfigurationResult, Aws::Client::AWSError<ChimeErrors>> PutEventsConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutVoiceConnectorOriginationResult, Aws::Client::AWSError<ChimeErrors>> PutVoiceConnectorOriginationOutcome;
        typedef Aws::Utils::Outcome<PutVoiceConnectorTerminationResult, Aws::Client::AWSError<ChimeErrors>> PutVoiceConnectorTerminationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ChimeErrors>> PutVoiceConnectorTerminationCredentialsOutcome;
        typedef Aws::Utils::Outcome<RegenerateSecurityTokenResult, Aws::Client::AWSError<ChimeErrors>> RegenerateSecurityTokenOutcome;
        typedef Aws::Utils::Outcome<ResetPersonalPINResult, Aws::Client::AWSError<ChimeErrors>> ResetPersonalPINOutcome;
        typedef Aws::Utils::Outcome<RestorePhoneNumberResult, Aws::Client::AWSError<ChimeErrors>> RestorePhoneNumberOutcome;
        typedef Aws::Utils::Outcome<SearchAvailablePhoneNumbersResult, Aws::Client::AWSError<ChimeErrors>> SearchAvailablePhoneNumbersOutcome;
        typedef Aws::Utils::Outcome<UpdateAccountResult, Aws::Client::AWSError<ChimeErrors>> UpdateAccountOutcome;
        typedef Aws::Utils::Outcome<UpdateAccountSettingsResult, Aws::Client::AWSError<ChimeErrors>> UpdateAccountSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateBotResult, Aws::Client::AWSError<ChimeErrors>> UpdateBotOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ChimeErrors>> UpdateGlobalSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdatePhoneNumberResult, Aws::Client::AWSError<ChimeErrors>> UpdatePhoneNumberOutcome;
        typedef Aws::Utils::Outcome<UpdateUserResult, Aws::Client::AWSError<ChimeErrors>> UpdateUserOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ChimeErrors>> UpdateUserSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateVoiceConnectorResult, Aws::Client::AWSError<ChimeErrors>> UpdateVoiceConnectorOutcome;

        typedef std::future<AssociatePhoneNumberWithUserOutcome> AssociatePhoneNumberWithUserOutcomeCallable;
        typedef std::future<AssociatePhoneNumbersWithVoiceConnectorOutcome> AssociatePhoneNumbersWithVoiceConnectorOutcomeCallable;
        typedef std::future<BatchDeletePhoneNumberOutcome> BatchDeletePhoneNumberOutcomeCallable;
        typedef std::future<BatchSuspendUserOutcome> BatchSuspendUserOutcomeCallable;
        typedef std::future<BatchUnsuspendUserOutcome> BatchUnsuspendUserOutcomeCallable;
        typedef std::future<BatchUpdatePhoneNumberOutcome> BatchUpdatePhoneNumberOutcomeCallable;
        typedef std::future<BatchUpdateUserOutcome> BatchUpdateUserOutcomeCallable;
        typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
        typedef std::future<CreateBotOutcome> CreateBotOutcomeCallable;
        typedef std::future<CreatePhoneNumberOrderOutcome> CreatePhoneNumberOrderOutcomeCallable;
        typedef std::future<CreateVoiceConnectorOutcome> CreateVoiceConnectorOutcomeCallable;
        typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
        typedef std::future<DeleteEventsConfigurationOutcome> DeleteEventsConfigurationOutcomeCallable;
        typedef std::future<DeletePhoneNumberOutcome> DeletePhoneNumberOutcomeCallable;
        typedef std::future<DeleteVoiceConnectorOutcome> DeleteVoiceConnectorOutcomeCallable;
        typedef std::future<DeleteVoiceConnectorOriginationOutcome> DeleteVoiceConnectorOriginationOutcomeCallable;
        typedef std::future<DeleteVoiceConnectorTerminationOutcome> DeleteVoiceConnectorTerminationOutcomeCallable;
        typedef std::future<DeleteVoiceConnectorTerminationCredentialsOutcome> DeleteVoiceConnectorTerminationCredentialsOutcomeCallable;
        typedef std::future<DisassociatePhoneNumberFromUserOutcome> DisassociatePhoneNumberFromUserOutcomeCallable;
        typedef std::future<DisassociatePhoneNumbersFromVoiceConnectorOutcome> DisassociatePhoneNumbersFromVoiceConnectorOutcomeCallable;
        typedef std::future<GetAccountOutcome> GetAccountOutcomeCallable;
        typedef std::future<GetAccountSettingsOutcome> GetAccountSettingsOutcomeCallable;
        typedef std::future<GetBotOutcome> GetBotOutcomeCallable;
        typedef std::future<GetEventsConfigurationOutcome> GetEventsConfigurationOutcomeCallable;
        typedef std::future<GetGlobalSettingsOutcome> GetGlobalSettingsOutcomeCallable;
        typedef std::future<GetPhoneNumberOutcome> GetPhoneNumberOutcomeCallable;
        typedef std::future<GetPhoneNumberOrderOutcome> GetPhoneNumberOrderOutcomeCallable;
        typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
        typedef std::future<GetUserSettingsOutcome> GetUserSettingsOutcomeCallable;
        typedef std::future<GetVoiceConnectorOutcome> GetVoiceConnectorOutcomeCallable;
        typedef std::future<GetVoiceConnectorOriginationOutcome> GetVoiceConnectorOriginationOutcomeCallable;
        typedef std::future<GetVoiceConnectorTerminationOutcome> GetVoiceConnectorTerminationOutcomeCallable;
        typedef std::future<GetVoiceConnectorTerminationHealthOutcome> GetVoiceConnectorTerminationHealthOutcomeCallable;
        typedef std::future<InviteUsersOutcome> InviteUsersOutcomeCallable;
        typedef std::future<ListAccountsOutcome> ListAccountsOutcomeCallable;
        typedef std::future<ListBotsOutcome> ListBotsOutcomeCallable;
        typedef std::future<ListPhoneNumberOrdersOutcome> ListPhoneNumberOrdersOutcomeCallable;
        typedef std::future<ListPhoneNumbersOutcome> ListPhoneNumbersOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<ListVoiceConnectorTerminationCredentialsOutcome> ListVoiceConnectorTerminationCredentialsOutcomeCallable;
        typedef std::future<ListVoiceConnectorsOutcome> ListVoiceConnectorsOutcomeCallable;
        typedef std::future<LogoutUserOutcome> LogoutUserOutcomeCallable;
        typedef std::future<PutEventsConfigurationOutcome> PutEventsConfigurationOutcomeCallable;
        typedef std::future<PutVoiceConnectorOriginationOutcome> PutVoiceConnectorOriginationOutcomeCallable;
        typedef std::future<PutVoiceConnectorTerminationOutcome> PutVoiceConnectorTerminationOutcomeCallable;
        typedef std::future<PutVoiceConnectorTerminationCredentialsOutcome> PutVoiceConnectorTerminationCredentialsOutcomeCallable;
        typedef std::future<RegenerateSecurityTokenOutcome> RegenerateSecurityTokenOutcomeCallable;
        typedef std::future<ResetPersonalPINOutcome> ResetPersonalPINOutcomeCallable;
        typedef std::future<RestorePhoneNumberOutcome> RestorePhoneNumberOutcomeCallable;
        typedef std::future<SearchAvailablePhoneNumbersOutcome> SearchAvailablePhoneNumbersOutcomeCallable;
        typedef std::future<UpdateAccountOutcome> UpdateAccountOutcomeCallable;
        typedef std::future<UpdateAccountSettingsOutcome> UpdateAccountSettingsOutcomeCallable;
        typedef std::future<UpdateBotOutcome> UpdateBotOutcomeCallable;
        typedef std::future<UpdateGlobalSettingsOutcome> UpdateGlobalSettingsOutcomeCallable;
        typedef std::future<UpdatePhoneNumberOutcome> UpdatePhoneNumberOutcomeCallable;
        typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
        typedef std::future<UpdateUserSettingsOutcome> UpdateUserSettingsOutcomeCallable;
        typedef std::future<UpdateVoiceConnectorOutcome> UpdateVoiceConnectorOutcomeCallable;
} // namespace Model

  class ChimeClient;

    typedef std::function<void(const ChimeClient*, const Model::AssociatePhoneNumberWithUserRequest&, const Model::AssociatePhoneNumberWithUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePhoneNumberWithUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::AssociatePhoneNumbersWithVoiceConnectorRequest&, const Model::AssociatePhoneNumbersWithVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchDeletePhoneNumberRequest&, const Model::BatchDeletePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeletePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchSuspendUserRequest&, const Model::BatchSuspendUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchSuspendUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchUnsuspendUserRequest&, const Model::BatchUnsuspendUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUnsuspendUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchUpdatePhoneNumberRequest&, const Model::BatchUpdatePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdatePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchUpdateUserRequest&, const Model::BatchUpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateAccountRequest&, const Model::CreateAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateBotRequest&, const Model::CreateBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBotResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreatePhoneNumberOrderRequest&, const Model::CreatePhoneNumberOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePhoneNumberOrderResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateVoiceConnectorRequest&, const Model::CreateVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteAccountRequest&, const Model::DeleteAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteEventsConfigurationRequest&, const Model::DeleteEventsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventsConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeletePhoneNumberRequest&, const Model::DeletePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteVoiceConnectorRequest&, const Model::DeleteVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteVoiceConnectorOriginationRequest&, const Model::DeleteVoiceConnectorOriginationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorOriginationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteVoiceConnectorTerminationRequest&, const Model::DeleteVoiceConnectorTerminationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorTerminationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteVoiceConnectorTerminationCredentialsRequest&, const Model::DeleteVoiceConnectorTerminationCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorTerminationCredentialsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DisassociatePhoneNumberFromUserRequest&, const Model::DisassociatePhoneNumberFromUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePhoneNumberFromUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest&, const Model::DisassociatePhoneNumbersFromVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePhoneNumbersFromVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetAccountRequest&, const Model::GetAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetAccountSettingsRequest&, const Model::GetAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetBotRequest&, const Model::GetBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetEventsConfigurationRequest&, const Model::GetEventsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventsConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetGlobalSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGlobalSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetPhoneNumberRequest&, const Model::GetPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetPhoneNumberOrderRequest&, const Model::GetPhoneNumberOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPhoneNumberOrderResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetUserRequest&, const Model::GetUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetUserSettingsRequest&, const Model::GetUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetVoiceConnectorRequest&, const Model::GetVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetVoiceConnectorOriginationRequest&, const Model::GetVoiceConnectorOriginationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorOriginationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetVoiceConnectorTerminationRequest&, const Model::GetVoiceConnectorTerminationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorTerminationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetVoiceConnectorTerminationHealthRequest&, const Model::GetVoiceConnectorTerminationHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorTerminationHealthResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::InviteUsersRequest&, const Model::InviteUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InviteUsersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListAccountsRequest&, const Model::ListAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListBotsRequest&, const Model::ListBotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListPhoneNumberOrdersRequest&, const Model::ListPhoneNumberOrdersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumberOrdersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListPhoneNumbersRequest&, const Model::ListPhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListVoiceConnectorTerminationCredentialsRequest&, const Model::ListVoiceConnectorTerminationCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVoiceConnectorTerminationCredentialsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListVoiceConnectorsRequest&, const Model::ListVoiceConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVoiceConnectorsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::LogoutUserRequest&, const Model::LogoutUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LogoutUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutEventsConfigurationRequest&, const Model::PutEventsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventsConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutVoiceConnectorOriginationRequest&, const Model::PutVoiceConnectorOriginationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorOriginationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutVoiceConnectorTerminationRequest&, const Model::PutVoiceConnectorTerminationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorTerminationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutVoiceConnectorTerminationCredentialsRequest&, const Model::PutVoiceConnectorTerminationCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorTerminationCredentialsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::RegenerateSecurityTokenRequest&, const Model::RegenerateSecurityTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegenerateSecurityTokenResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ResetPersonalPINRequest&, const Model::ResetPersonalPINOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetPersonalPINResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::RestorePhoneNumberRequest&, const Model::RestorePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestorePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::SearchAvailablePhoneNumbersRequest&, const Model::SearchAvailablePhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchAvailablePhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateAccountRequest&, const Model::UpdateAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateAccountSettingsRequest&, const Model::UpdateAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateBotRequest&, const Model::UpdateBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBotResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateGlobalSettingsRequest&, const Model::UpdateGlobalSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlobalSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdatePhoneNumberRequest&, const Model::UpdatePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateUserSettingsRequest&, const Model::UpdateUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateVoiceConnectorRequest&, const Model::UpdateVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVoiceConnectorResponseReceivedHandler;

  /**
   * <p>The Amazon Chime API (application programming interface) is designed for
   * administrators to use to perform key tasks, such as creating and managing Amazon
   * Chime accounts and users. This guide provides detailed information about the
   * Amazon Chime API, including operations, types, inputs and outputs, and error
   * codes.</p> <p>You can use an AWS SDK, the AWS Command Line Interface (AWS CLI),
   * or the REST API to make API calls. We recommend using an AWS SDK or the AWS CLI.
   * Each API operation includes links to information about using it with a
   * language-specific AWS SDK or the AWS CLI.</p> <dl> <dt>Using an AWS SDK</dt>
   * <dd> <p>You don't need to write code to calculate a signature for request
   * authentication. The SDK clients authenticate your requests by using access keys
   * that you provide. For more information about AWS SDKs, see the <a
   * href="http://aws.amazon.com/developer/">AWS Developer Center</a>.</p> </dd>
   * <dt>Using the AWS CLI</dt> <dd> <p>Use your access keys with the AWS CLI to make
   * API calls. For information about setting up the AWS CLI, see <a
   * href="https://docs.aws.amazon.com/cli/latest/userguide/installing.html">Installing
   * the AWS Command Line Interface</a> in the <i>AWS Command Line Interface User
   * Guide</i>. For a list of available Amazon Chime commands, see the <a
   * href="https://docs.aws.amazon.com/cli/latest/reference/chime/index.html">Amazon
   * Chime commands</a> in the <i>AWS CLI Command Reference</i>.</p> </dd> <dt>Using
   * REST API</dt> <dd> <p>If you use REST to make API calls, you must authenticate
   * your request by providing a signature. Amazon Chime supports signature version
   * 4. For more information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4 Signing Process</a> in the <i>Amazon Web Services General
   * Reference</i>.</p> <p>When making REST API calls, use the service name
   * <code>chime</code> and REST endpoint
   * <code>https://service.chime.aws.amazon.com</code>.</p> </dd> </dl>
   * <p>Administrative permissions are controlled using AWS Identity and Access
   * Management (IAM). For more information, see <a
   * href="https://docs.aws.amazon.com/chime/latest/ag/control-access.html">Control
   * Access to the Amazon Chime Console</a> in the <i>Amazon Chime Administration
   * Guide</i>.</p>
   */
  class AWS_CHIME_API ChimeClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ChimeClient();

        inline virtual const char* GetServiceClientName() const override { return "Chime"; }


        /**
         * <p>Associates a phone number with the specified Amazon Chime user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumberWithUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePhoneNumberWithUserOutcome AssociatePhoneNumberWithUser(const Model::AssociatePhoneNumberWithUserRequest& request) const;

        /**
         * <p>Associates a phone number with the specified Amazon Chime user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumberWithUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociatePhoneNumberWithUserOutcomeCallable AssociatePhoneNumberWithUserCallable(const Model::AssociatePhoneNumberWithUserRequest& request) const;

        /**
         * <p>Associates a phone number with the specified Amazon Chime user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumberWithUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePhoneNumberWithUserAsync(const Model::AssociatePhoneNumberWithUserRequest& request, const AssociatePhoneNumberWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a phone number with the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumbersWithVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorOutcome AssociatePhoneNumbersWithVoiceConnector(const Model::AssociatePhoneNumbersWithVoiceConnectorRequest& request) const;

        /**
         * <p>Associates a phone number with the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumbersWithVoiceConnector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorOutcomeCallable AssociatePhoneNumbersWithVoiceConnectorCallable(const Model::AssociatePhoneNumbersWithVoiceConnectorRequest& request) const;

        /**
         * <p>Associates a phone number with the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumbersWithVoiceConnector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePhoneNumbersWithVoiceConnectorAsync(const Model::AssociatePhoneNumbersWithVoiceConnectorRequest& request, const AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves phone numbers into the <b>Deletion queue</b>. Phone numbers must be
         * disassociated from any users or Amazon Chime Voice Connectors before they can be
         * deleted.</p> <p>Phone numbers remain in the <b>Deletion queue</b> for 7 days
         * before they are deleted permanently.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchDeletePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeletePhoneNumberOutcome BatchDeletePhoneNumber(const Model::BatchDeletePhoneNumberRequest& request) const;

        /**
         * <p>Moves phone numbers into the <b>Deletion queue</b>. Phone numbers must be
         * disassociated from any users or Amazon Chime Voice Connectors before they can be
         * deleted.</p> <p>Phone numbers remain in the <b>Deletion queue</b> for 7 days
         * before they are deleted permanently.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchDeletePhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeletePhoneNumberOutcomeCallable BatchDeletePhoneNumberCallable(const Model::BatchDeletePhoneNumberRequest& request) const;

        /**
         * <p>Moves phone numbers into the <b>Deletion queue</b>. Phone numbers must be
         * disassociated from any users or Amazon Chime Voice Connectors before they can be
         * deleted.</p> <p>Phone numbers remain in the <b>Deletion queue</b> for 7 days
         * before they are deleted permanently.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchDeletePhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeletePhoneNumberAsync(const Model::BatchDeletePhoneNumberRequest& request, const BatchDeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Suspends up to 50 users from a <code>Team</code> or
         * <code>EnterpriseLWA</code> Amazon Chime account. For more information about
         * different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p> <p>Users suspended from a <code>Team</code> account are
         * dissasociated from the account, but they can continue to use Amazon Chime as
         * free users. To remove the suspension from suspended <code>Team</code> account
         * users, invite them to the <code>Team</code> account again. You can use the
         * <a>InviteUsers</a> action to do so.</p> <p>Users suspended from an
         * <code>EnterpriseLWA</code> account are immediately signed out of Amazon Chime
         * and can no longer sign in. To remove the suspension from suspended
         * <code>EnterpriseLWA</code> account users, use the <a>BatchUnsuspendUser</a>
         * action. </p> <p>To sign out users without suspending them, use the
         * <a>LogoutUser</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchSuspendUser">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchSuspendUserOutcome BatchSuspendUser(const Model::BatchSuspendUserRequest& request) const;

        /**
         * <p>Suspends up to 50 users from a <code>Team</code> or
         * <code>EnterpriseLWA</code> Amazon Chime account. For more information about
         * different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p> <p>Users suspended from a <code>Team</code> account are
         * dissasociated from the account, but they can continue to use Amazon Chime as
         * free users. To remove the suspension from suspended <code>Team</code> account
         * users, invite them to the <code>Team</code> account again. You can use the
         * <a>InviteUsers</a> action to do so.</p> <p>Users suspended from an
         * <code>EnterpriseLWA</code> account are immediately signed out of Amazon Chime
         * and can no longer sign in. To remove the suspension from suspended
         * <code>EnterpriseLWA</code> account users, use the <a>BatchUnsuspendUser</a>
         * action. </p> <p>To sign out users without suspending them, use the
         * <a>LogoutUser</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchSuspendUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchSuspendUserOutcomeCallable BatchSuspendUserCallable(const Model::BatchSuspendUserRequest& request) const;

        /**
         * <p>Suspends up to 50 users from a <code>Team</code> or
         * <code>EnterpriseLWA</code> Amazon Chime account. For more information about
         * different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p> <p>Users suspended from a <code>Team</code> account are
         * dissasociated from the account, but they can continue to use Amazon Chime as
         * free users. To remove the suspension from suspended <code>Team</code> account
         * users, invite them to the <code>Team</code> account again. You can use the
         * <a>InviteUsers</a> action to do so.</p> <p>Users suspended from an
         * <code>EnterpriseLWA</code> account are immediately signed out of Amazon Chime
         * and can no longer sign in. To remove the suspension from suspended
         * <code>EnterpriseLWA</code> account users, use the <a>BatchUnsuspendUser</a>
         * action. </p> <p>To sign out users without suspending them, use the
         * <a>LogoutUser</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchSuspendUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchSuspendUserAsync(const Model::BatchSuspendUserRequest& request, const BatchSuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the suspension from up to 50 previously suspended users for the
         * specified Amazon Chime <code>EnterpriseLWA</code> account. Only users on
         * <code>EnterpriseLWA</code> accounts can be unsuspended using this action. For
         * more information about different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p> <p>Previously suspended users who are unsuspended using this
         * action are returned to <code>Registered</code> status. Users who are not
         * previously suspended are ignored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUnsuspendUser">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUnsuspendUserOutcome BatchUnsuspendUser(const Model::BatchUnsuspendUserRequest& request) const;

        /**
         * <p>Removes the suspension from up to 50 previously suspended users for the
         * specified Amazon Chime <code>EnterpriseLWA</code> account. Only users on
         * <code>EnterpriseLWA</code> accounts can be unsuspended using this action. For
         * more information about different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p> <p>Previously suspended users who are unsuspended using this
         * action are returned to <code>Registered</code> status. Users who are not
         * previously suspended are ignored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUnsuspendUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUnsuspendUserOutcomeCallable BatchUnsuspendUserCallable(const Model::BatchUnsuspendUserRequest& request) const;

        /**
         * <p>Removes the suspension from up to 50 previously suspended users for the
         * specified Amazon Chime <code>EnterpriseLWA</code> account. Only users on
         * <code>EnterpriseLWA</code> accounts can be unsuspended using this action. For
         * more information about different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p> <p>Previously suspended users who are unsuspended using this
         * action are returned to <code>Registered</code> status. Users who are not
         * previously suspended are ignored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUnsuspendUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUnsuspendUserAsync(const Model::BatchUnsuspendUserRequest& request, const BatchUnsuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates phone number product types. Choose from Amazon Chime Business Calling
         * and Amazon Chime Voice Connector product types. For toll-free numbers, you can
         * use only the Amazon Chime Voice Connector product type.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUpdatePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdatePhoneNumberOutcome BatchUpdatePhoneNumber(const Model::BatchUpdatePhoneNumberRequest& request) const;

        /**
         * <p>Updates phone number product types. Choose from Amazon Chime Business Calling
         * and Amazon Chime Voice Connector product types. For toll-free numbers, you can
         * use only the Amazon Chime Voice Connector product type.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUpdatePhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdatePhoneNumberOutcomeCallable BatchUpdatePhoneNumberCallable(const Model::BatchUpdatePhoneNumberRequest& request) const;

        /**
         * <p>Updates phone number product types. Choose from Amazon Chime Business Calling
         * and Amazon Chime Voice Connector product types. For toll-free numbers, you can
         * use only the Amazon Chime Voice Connector product type.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUpdatePhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdatePhoneNumberAsync(const Model::BatchUpdatePhoneNumberRequest& request, const BatchUpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates user details within the <a>UpdateUserRequestItem</a> object for up to
         * 20 users for the specified Amazon Chime account. Currently, only
         * <code>LicenseType</code> updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateUserOutcome BatchUpdateUser(const Model::BatchUpdateUserRequest& request) const;

        /**
         * <p>Updates user details within the <a>UpdateUserRequestItem</a> object for up to
         * 20 users for the specified Amazon Chime account. Currently, only
         * <code>LicenseType</code> updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUpdateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdateUserOutcomeCallable BatchUpdateUserCallable(const Model::BatchUpdateUserRequest& request) const;

        /**
         * <p>Updates user details within the <a>UpdateUserRequestItem</a> object for up to
         * 20 users for the specified Amazon Chime account. Currently, only
         * <code>LicenseType</code> updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUpdateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateUserAsync(const Model::BatchUpdateUserRequest& request, const BatchUpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Chime account under the administrator's AWS account. Only
         * <code>Team</code> account types are currently supported for this action. For
         * more information about different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest& request) const;

        /**
         * <p>Creates an Amazon Chime account under the administrator's AWS account. Only
         * <code>Team</code> account types are currently supported for this action. For
         * more information about different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request) const;

        /**
         * <p>Creates an Amazon Chime account under the administrator's AWS account. Only
         * <code>Team</code> account types are currently supported for this action. For
         * more information about different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a bot for an Amazon Chime Enterprise account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateBot">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateBotOutcome CreateBot(const Model::CreateBotRequest& request) const;

        /**
         * <p>Creates a bot for an Amazon Chime Enterprise account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateBot">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBotOutcomeCallable CreateBotCallable(const Model::CreateBotRequest& request) const;

        /**
         * <p>Creates a bot for an Amazon Chime Enterprise account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateBot">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBotAsync(const Model::CreateBotRequest& request, const CreateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an order for phone numbers to be provisioned. Choose from Amazon
         * Chime Business Calling and Amazon Chime Voice Connector product types. For
         * toll-free numbers, you can use only the Amazon Chime Voice Connector product
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreatePhoneNumberOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePhoneNumberOrderOutcome CreatePhoneNumberOrder(const Model::CreatePhoneNumberOrderRequest& request) const;

        /**
         * <p>Creates an order for phone numbers to be provisioned. Choose from Amazon
         * Chime Business Calling and Amazon Chime Voice Connector product types. For
         * toll-free numbers, you can use only the Amazon Chime Voice Connector product
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreatePhoneNumberOrder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePhoneNumberOrderOutcomeCallable CreatePhoneNumberOrderCallable(const Model::CreatePhoneNumberOrderRequest& request) const;

        /**
         * <p>Creates an order for phone numbers to be provisioned. Choose from Amazon
         * Chime Business Calling and Amazon Chime Voice Connector product types. For
         * toll-free numbers, you can use only the Amazon Chime Voice Connector product
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreatePhoneNumberOrder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePhoneNumberOrderAsync(const Model::CreatePhoneNumberOrderRequest& request, const CreatePhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Chime Voice Connector under the administrator's AWS
         * account. Enabling <a>CreateVoiceConnectorRequest$RequireEncryption</a>
         * configures your Amazon Chime Voice Connector to use TLS transport for SIP
         * signaling and Secure RTP (SRTP) for media. Inbound calls use TLS transport, and
         * unencrypted outbound calls are blocked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVoiceConnectorOutcome CreateVoiceConnector(const Model::CreateVoiceConnectorRequest& request) const;

        /**
         * <p>Creates an Amazon Chime Voice Connector under the administrator's AWS
         * account. Enabling <a>CreateVoiceConnectorRequest$RequireEncryption</a>
         * configures your Amazon Chime Voice Connector to use TLS transport for SIP
         * signaling and Secure RTP (SRTP) for media. Inbound calls use TLS transport, and
         * unencrypted outbound calls are blocked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateVoiceConnector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVoiceConnectorOutcomeCallable CreateVoiceConnectorCallable(const Model::CreateVoiceConnectorRequest& request) const;

        /**
         * <p>Creates an Amazon Chime Voice Connector under the administrator's AWS
         * account. Enabling <a>CreateVoiceConnectorRequest$RequireEncryption</a>
         * configures your Amazon Chime Voice Connector to use TLS transport for SIP
         * signaling and Secure RTP (SRTP) for media. Inbound calls use TLS transport, and
         * unencrypted outbound calls are blocked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateVoiceConnector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVoiceConnectorAsync(const Model::CreateVoiceConnectorRequest& request, const CreateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon Chime account. You must suspend all users before
         * deleting a <code>Team</code> account. You can use the <a>BatchSuspendUser</a>
         * action to do so.</p> <p>For <code>EnterpriseLWA</code> and
         * <code>EnterpriseAD</code> accounts, you must release the claimed domains for
         * your Amazon Chime account before deletion. As soon as you release the domain,
         * all users under that account are suspended.</p> <p>Deleted accounts appear in
         * your <code>Disabled</code> accounts list for 90 days. To restore a deleted
         * account from your <code>Disabled</code> accounts list, you must contact AWS
         * Support.</p> <p>After 90 days, deleted accounts are permanently removed from
         * your <code>Disabled</code> accounts list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountOutcome DeleteAccount(const Model::DeleteAccountRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Chime account. You must suspend all users before
         * deleting a <code>Team</code> account. You can use the <a>BatchSuspendUser</a>
         * action to do so.</p> <p>For <code>EnterpriseLWA</code> and
         * <code>EnterpriseAD</code> accounts, you must release the claimed domains for
         * your Amazon Chime account before deletion. As soon as you release the domain,
         * all users under that account are suspended.</p> <p>Deleted accounts appear in
         * your <code>Disabled</code> accounts list for 90 days. To restore a deleted
         * account from your <code>Disabled</code> accounts list, you must contact AWS
         * Support.</p> <p>After 90 days, deleted accounts are permanently removed from
         * your <code>Disabled</code> accounts list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccountOutcomeCallable DeleteAccountCallable(const Model::DeleteAccountRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Chime account. You must suspend all users before
         * deleting a <code>Team</code> account. You can use the <a>BatchSuspendUser</a>
         * action to do so.</p> <p>For <code>EnterpriseLWA</code> and
         * <code>EnterpriseAD</code> accounts, you must release the claimed domains for
         * your Amazon Chime account before deletion. As soon as you release the domain,
         * all users under that account are suspended.</p> <p>Deleted accounts appear in
         * your <code>Disabled</code> accounts list for 90 days. To restore a deleted
         * account from your <code>Disabled</code> accounts list, you must contact AWS
         * Support.</p> <p>After 90 days, deleted accounts are permanently removed from
         * your <code>Disabled</code> accounts list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the events configuration that allows a bot to receive outgoing
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteEventsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventsConfigurationOutcome DeleteEventsConfiguration(const Model::DeleteEventsConfigurationRequest& request) const;

        /**
         * <p>Deletes the events configuration that allows a bot to receive outgoing
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteEventsConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventsConfigurationOutcomeCallable DeleteEventsConfigurationCallable(const Model::DeleteEventsConfigurationRequest& request) const;

        /**
         * <p>Deletes the events configuration that allows a bot to receive outgoing
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteEventsConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventsConfigurationAsync(const Model::DeleteEventsConfigurationRequest& request, const DeleteEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves the specified phone number into the <b>Deletion queue</b>. A phone
         * number must be disassociated from any users or Amazon Chime Voice Connectors
         * before it can be deleted.</p> <p>Deleted phone numbers remain in the <b>Deletion
         * queue</b> for 7 days before they are deleted permanently.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeletePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePhoneNumberOutcome DeletePhoneNumber(const Model::DeletePhoneNumberRequest& request) const;

        /**
         * <p>Moves the specified phone number into the <b>Deletion queue</b>. A phone
         * number must be disassociated from any users or Amazon Chime Voice Connectors
         * before it can be deleted.</p> <p>Deleted phone numbers remain in the <b>Deletion
         * queue</b> for 7 days before they are deleted permanently.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeletePhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePhoneNumberOutcomeCallable DeletePhoneNumberCallable(const Model::DeletePhoneNumberRequest& request) const;

        /**
         * <p>Moves the specified phone number into the <b>Deletion queue</b>. A phone
         * number must be disassociated from any users or Amazon Chime Voice Connectors
         * before it can be deleted.</p> <p>Deleted phone numbers remain in the <b>Deletion
         * queue</b> for 7 days before they are deleted permanently.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeletePhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePhoneNumberAsync(const Model::DeletePhoneNumberRequest& request, const DeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon Chime Voice Connector. Any phone numbers
         * assigned to the Amazon Chime Voice Connector must be unassigned from it before
         * it can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorOutcome DeleteVoiceConnector(const Model::DeleteVoiceConnectorRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Chime Voice Connector. Any phone numbers
         * assigned to the Amazon Chime Voice Connector must be unassigned from it before
         * it can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorOutcomeCallable DeleteVoiceConnectorCallable(const Model::DeleteVoiceConnectorRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Chime Voice Connector. Any phone numbers
         * assigned to the Amazon Chime Voice Connector must be unassigned from it before
         * it can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorAsync(const Model::DeleteVoiceConnectorRequest& request, const DeleteVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the origination settings for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorOriginationOutcome DeleteVoiceConnectorOrigination(const Model::DeleteVoiceConnectorOriginationRequest& request) const;

        /**
         * <p>Deletes the origination settings for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorOriginationOutcomeCallable DeleteVoiceConnectorOriginationCallable(const Model::DeleteVoiceConnectorOriginationRequest& request) const;

        /**
         * <p>Deletes the origination settings for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorOriginationAsync(const Model::DeleteVoiceConnectorOriginationRequest& request, const DeleteVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the termination settings for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorTermination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorTerminationOutcome DeleteVoiceConnectorTermination(const Model::DeleteVoiceConnectorTerminationRequest& request) const;

        /**
         * <p>Deletes the termination settings for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorTermination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorTerminationOutcomeCallable DeleteVoiceConnectorTerminationCallable(const Model::DeleteVoiceConnectorTerminationRequest& request) const;

        /**
         * <p>Deletes the termination settings for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorTermination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorTerminationAsync(const Model::DeleteVoiceConnectorTerminationRequest& request, const DeleteVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified SIP credentials used by your equipment to authenticate
         * during call termination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorTerminationCredentialsOutcome DeleteVoiceConnectorTerminationCredentials(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * <p>Deletes the specified SIP credentials used by your equipment to authenticate
         * during call termination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorTerminationCredentialsOutcomeCallable DeleteVoiceConnectorTerminationCredentialsCallable(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * <p>Deletes the specified SIP credentials used by your equipment to authenticate
         * during call termination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorTerminationCredentialsAsync(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request, const DeleteVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the primary provisioned phone number from the specified Amazon
         * Chime user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumberFromUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePhoneNumberFromUserOutcome DisassociatePhoneNumberFromUser(const Model::DisassociatePhoneNumberFromUserRequest& request) const;

        /**
         * <p>Disassociates the primary provisioned phone number from the specified Amazon
         * Chime user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumberFromUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociatePhoneNumberFromUserOutcomeCallable DisassociatePhoneNumberFromUserCallable(const Model::DisassociatePhoneNumberFromUserRequest& request) const;

        /**
         * <p>Disassociates the primary provisioned phone number from the specified Amazon
         * Chime user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumberFromUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePhoneNumberFromUserAsync(const Model::DisassociatePhoneNumberFromUserRequest& request, const DisassociatePhoneNumberFromUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified phone number from the specified Amazon Chime
         * Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumbersFromVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorOutcome DisassociatePhoneNumbersFromVoiceConnector(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const;

        /**
         * <p>Disassociates the specified phone number from the specified Amazon Chime
         * Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumbersFromVoiceConnector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorOutcomeCallable DisassociatePhoneNumbersFromVoiceConnectorCallable(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const;

        /**
         * <p>Disassociates the specified phone number from the specified Amazon Chime
         * Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumbersFromVoiceConnector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePhoneNumbersFromVoiceConnectorAsync(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime account, such as account
         * type and supported licenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountOutcome GetAccount(const Model::GetAccountRequest& request) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime account, such as account
         * type and supported licenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountOutcomeCallable GetAccountCallable(const Model::GetAccountRequest& request) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime account, such as account
         * type and supported licenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountAsync(const Model::GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves account settings for the specified Amazon Chime account ID, such as
         * remote control and dial out settings. For more information about these settings,
         * see <a href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
         * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;

        /**
         * <p>Retrieves account settings for the specified Amazon Chime account ID, such as
         * remote control and dial out settings. For more information about these settings,
         * see <a href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
         * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAccountSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const Model::GetAccountSettingsRequest& request) const;

        /**
         * <p>Retrieves account settings for the specified Amazon Chime account ID, such as
         * remote control and dial out settings. For more information about these settings,
         * see <a href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
         * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAccountSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountSettingsAsync(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details for the specified bot, such as bot email address, bot type,
         * status, and display name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetBot">AWS API
         * Reference</a></p>
         */
        virtual Model::GetBotOutcome GetBot(const Model::GetBotRequest& request) const;

        /**
         * <p>Retrieves details for the specified bot, such as bot email address, bot type,
         * status, and display name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetBot">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBotOutcomeCallable GetBotCallable(const Model::GetBotRequest& request) const;

        /**
         * <p>Retrieves details for the specified bot, such as bot email address, bot type,
         * status, and display name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetBot">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBotAsync(const Model::GetBotRequest& request, const GetBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details for an events configuration that allows a bot to receive
         * outgoing events, such as an HTTPS endpoint or Lambda function ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetEventsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventsConfigurationOutcome GetEventsConfiguration(const Model::GetEventsConfigurationRequest& request) const;

        /**
         * <p>Gets details for an events configuration that allows a bot to receive
         * outgoing events, such as an HTTPS endpoint or Lambda function ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetEventsConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventsConfigurationOutcomeCallable GetEventsConfigurationCallable(const Model::GetEventsConfigurationRequest& request) const;

        /**
         * <p>Gets details for an events configuration that allows a bot to receive
         * outgoing events, such as an HTTPS endpoint or Lambda function ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetEventsConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventsConfigurationAsync(const Model::GetEventsConfigurationRequest& request, const GetEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves global settings for the administrator's AWS account, such as Amazon
         * Chime Business Calling and Amazon Chime Voice Connector settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetGlobalSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGlobalSettingsOutcome GetGlobalSettings() const;

        /**
         * <p>Retrieves global settings for the administrator's AWS account, such as Amazon
         * Chime Business Calling and Amazon Chime Voice Connector settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetGlobalSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGlobalSettingsOutcomeCallable GetGlobalSettingsCallable() const;

        /**
         * <p>Retrieves global settings for the administrator's AWS account, such as Amazon
         * Chime Business Calling and Amazon Chime Voice Connector settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetGlobalSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGlobalSettingsAsync(const GetGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Retrieves details for the specified phone number ID, such as associations,
         * capabilities, and product type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPhoneNumberOutcome GetPhoneNumber(const Model::GetPhoneNumberRequest& request) const;

        /**
         * <p>Retrieves details for the specified phone number ID, such as associations,
         * capabilities, and product type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPhoneNumberOutcomeCallable GetPhoneNumberCallable(const Model::GetPhoneNumberRequest& request) const;

        /**
         * <p>Retrieves details for the specified phone number ID, such as associations,
         * capabilities, and product type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPhoneNumberAsync(const Model::GetPhoneNumberRequest& request, const GetPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details for the specified phone number order, such as order
         * creation timestamp, phone numbers in E.164 format, product type, and order
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumberOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPhoneNumberOrderOutcome GetPhoneNumberOrder(const Model::GetPhoneNumberOrderRequest& request) const;

        /**
         * <p>Retrieves details for the specified phone number order, such as order
         * creation timestamp, phone numbers in E.164 format, product type, and order
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumberOrder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPhoneNumberOrderOutcomeCallable GetPhoneNumberOrderCallable(const Model::GetPhoneNumberOrderRequest& request) const;

        /**
         * <p>Retrieves details for the specified phone number order, such as order
         * creation timestamp, phone numbers in E.164 format, product type, and order
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumberOrder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPhoneNumberOrderAsync(const Model::GetPhoneNumberOrderRequest& request, const GetPhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details for the specified user ID, such as primary email address,
         * license type, and personal meeting PIN.</p> <p>To retrieve user details with an
         * email address instead of a user ID, use the <a>ListUsers</a> action, and then
         * filter by email address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetUser">AWS API
         * Reference</a></p>
         */
        virtual Model::GetUserOutcome GetUser(const Model::GetUserRequest& request) const;

        /**
         * <p>Retrieves details for the specified user ID, such as primary email address,
         * license type, and personal meeting PIN.</p> <p>To retrieve user details with an
         * email address instead of a user ID, use the <a>ListUsers</a> action, and then
         * filter by email address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetUser">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserOutcomeCallable GetUserCallable(const Model::GetUserRequest& request) const;

        /**
         * <p>Retrieves details for the specified user ID, such as primary email address,
         * license type, and personal meeting PIN.</p> <p>To retrieve user details with an
         * email address instead of a user ID, use the <a>ListUsers</a> action, and then
         * filter by email address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetUser">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserAsync(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves settings for the specified user ID, such as any associated phone
         * number settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserSettingsOutcome GetUserSettings(const Model::GetUserSettingsRequest& request) const;

        /**
         * <p>Retrieves settings for the specified user ID, such as any associated phone
         * number settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetUserSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserSettingsOutcomeCallable GetUserSettingsCallable(const Model::GetUserSettingsRequest& request) const;

        /**
         * <p>Retrieves settings for the specified user ID, such as any associated phone
         * number settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetUserSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserSettingsAsync(const Model::GetUserSettingsRequest& request, const GetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime Voice Connector, such as
         * timestamps, name, outbound host, and encryption requirements.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorOutcome GetVoiceConnector(const Model::GetVoiceConnectorRequest& request) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime Voice Connector, such as
         * timestamps, name, outbound host, and encryption requirements.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorOutcomeCallable GetVoiceConnectorCallable(const Model::GetVoiceConnectorRequest& request) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime Voice Connector, such as
         * timestamps, name, outbound host, and encryption requirements.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorAsync(const Model::GetVoiceConnectorRequest& request, const GetVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves origination setting details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorOriginationOutcome GetVoiceConnectorOrigination(const Model::GetVoiceConnectorOriginationRequest& request) const;

        /**
         * <p>Retrieves origination setting details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorOriginationOutcomeCallable GetVoiceConnectorOriginationCallable(const Model::GetVoiceConnectorOriginationRequest& request) const;

        /**
         * <p>Retrieves origination setting details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorOriginationAsync(const Model::GetVoiceConnectorOriginationRequest& request, const GetVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves termination setting details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorTermination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorTerminationOutcome GetVoiceConnectorTermination(const Model::GetVoiceConnectorTerminationRequest& request) const;

        /**
         * <p>Retrieves termination setting details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorTermination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorTerminationOutcomeCallable GetVoiceConnectorTerminationCallable(const Model::GetVoiceConnectorTerminationRequest& request) const;

        /**
         * <p>Retrieves termination setting details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorTermination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorTerminationAsync(const Model::GetVoiceConnectorTerminationRequest& request, const GetVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the last time a SIP <code>OPTIONS</code> ping was
         * received from your SIP infrastructure for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorTerminationHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorTerminationHealthOutcome GetVoiceConnectorTerminationHealth(const Model::GetVoiceConnectorTerminationHealthRequest& request) const;

        /**
         * <p>Retrieves information about the last time a SIP <code>OPTIONS</code> ping was
         * received from your SIP infrastructure for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorTerminationHealth">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorTerminationHealthOutcomeCallable GetVoiceConnectorTerminationHealthCallable(const Model::GetVoiceConnectorTerminationHealthRequest& request) const;

        /**
         * <p>Retrieves information about the last time a SIP <code>OPTIONS</code> ping was
         * received from your SIP infrastructure for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorTerminationHealth">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorTerminationHealthAsync(const Model::GetVoiceConnectorTerminationHealthRequest& request, const GetVoiceConnectorTerminationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends email invites to as many as 50 users, inviting them to the specified
         * Amazon Chime <code>Team</code> account. Only <code>Team</code> account types are
         * currently supported for this action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/InviteUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteUsersOutcome InviteUsers(const Model::InviteUsersRequest& request) const;

        /**
         * <p>Sends email invites to as many as 50 users, inviting them to the specified
         * Amazon Chime <code>Team</code> account. Only <code>Team</code> account types are
         * currently supported for this action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/InviteUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InviteUsersOutcomeCallable InviteUsersCallable(const Model::InviteUsersRequest& request) const;

        /**
         * <p>Sends email invites to as many as 50 users, inviting them to the specified
         * Amazon Chime <code>Team</code> account. Only <code>Team</code> account types are
         * currently supported for this action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/InviteUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InviteUsersAsync(const Model::InviteUsersRequest& request, const InviteUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon Chime accounts under the administrator's AWS account. You
         * can filter accounts by account name prefix. To find out which Amazon Chime
         * account a user belongs to, you can filter by the user's email address, which
         * returns one account result.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountsOutcome ListAccounts(const Model::ListAccountsRequest& request) const;

        /**
         * <p>Lists the Amazon Chime accounts under the administrator's AWS account. You
         * can filter accounts by account name prefix. To find out which Amazon Chime
         * account a user belongs to, you can filter by the user's email address, which
         * returns one account result.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAccounts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountsOutcomeCallable ListAccountsCallable(const Model::ListAccountsRequest& request) const;

        /**
         * <p>Lists the Amazon Chime accounts under the administrator's AWS account. You
         * can filter accounts by account name prefix. To find out which Amazon Chime
         * account a user belongs to, you can filter by the user's email address, which
         * returns one account result.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAccounts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountsAsync(const Model::ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the bots associated with the administrator's Amazon Chime Enterprise
         * account ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListBots">AWS API
         * Reference</a></p>
         */
        virtual Model::ListBotsOutcome ListBots(const Model::ListBotsRequest& request) const;

        /**
         * <p>Lists the bots associated with the administrator's Amazon Chime Enterprise
         * account ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListBots">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBotsOutcomeCallable ListBotsCallable(const Model::ListBotsRequest& request) const;

        /**
         * <p>Lists the bots associated with the administrator's Amazon Chime Enterprise
         * account ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListBots">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBotsAsync(const Model::ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the phone number orders for the administrator's Amazon Chime
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListPhoneNumberOrders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumberOrdersOutcome ListPhoneNumberOrders(const Model::ListPhoneNumberOrdersRequest& request) const;

        /**
         * <p>Lists the phone number orders for the administrator's Amazon Chime
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListPhoneNumberOrders">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPhoneNumberOrdersOutcomeCallable ListPhoneNumberOrdersCallable(const Model::ListPhoneNumberOrdersRequest& request) const;

        /**
         * <p>Lists the phone number orders for the administrator's Amazon Chime
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListPhoneNumberOrders">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPhoneNumberOrdersAsync(const Model::ListPhoneNumberOrdersRequest& request, const ListPhoneNumberOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the phone numbers for the specified Amazon Chime account, Amazon Chime
         * user, or Amazon Chime Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListPhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumbersOutcome ListPhoneNumbers(const Model::ListPhoneNumbersRequest& request) const;

        /**
         * <p>Lists the phone numbers for the specified Amazon Chime account, Amazon Chime
         * user, or Amazon Chime Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListPhoneNumbers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPhoneNumbersOutcomeCallable ListPhoneNumbersCallable(const Model::ListPhoneNumbersRequest& request) const;

        /**
         * <p>Lists the phone numbers for the specified Amazon Chime account, Amazon Chime
         * user, or Amazon Chime Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListPhoneNumbers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPhoneNumbersAsync(const Model::ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the users that belong to the specified Amazon Chime account. You can
         * specify an email address to list only the user that the email address belongs
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListUsers">AWS API
         * Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * <p>Lists the users that belong to the specified Amazon Chime account. You can
         * specify an email address to list only the user that the email address belongs
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListUsers">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * <p>Lists the users that belong to the specified Amazon Chime account. You can
         * specify an email address to list only the user that the email address belongs
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListUsers">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the SIP credentials for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVoiceConnectorTerminationCredentialsOutcome ListVoiceConnectorTerminationCredentials(const Model::ListVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * <p>Lists the SIP credentials for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVoiceConnectorTerminationCredentialsOutcomeCallable ListVoiceConnectorTerminationCredentialsCallable(const Model::ListVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * <p>Lists the SIP credentials for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVoiceConnectorTerminationCredentialsAsync(const Model::ListVoiceConnectorTerminationCredentialsRequest& request, const ListVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon Chime Voice Connectors for the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVoiceConnectorsOutcome ListVoiceConnectors(const Model::ListVoiceConnectorsRequest& request) const;

        /**
         * <p>Lists the Amazon Chime Voice Connectors for the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVoiceConnectorsOutcomeCallable ListVoiceConnectorsCallable(const Model::ListVoiceConnectorsRequest& request) const;

        /**
         * <p>Lists the Amazon Chime Voice Connectors for the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVoiceConnectorsAsync(const Model::ListVoiceConnectorsRequest& request, const ListVoiceConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Logs out the specified user from all of the devices they are currently logged
         * into.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/LogoutUser">AWS
         * API Reference</a></p>
         */
        virtual Model::LogoutUserOutcome LogoutUser(const Model::LogoutUserRequest& request) const;

        /**
         * <p>Logs out the specified user from all of the devices they are currently logged
         * into.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/LogoutUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LogoutUserOutcomeCallable LogoutUserCallable(const Model::LogoutUserRequest& request) const;

        /**
         * <p>Logs out the specified user from all of the devices they are currently logged
         * into.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/LogoutUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LogoutUserAsync(const Model::LogoutUserRequest& request, const LogoutUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an events configuration that allows a bot to receive outgoing events
         * sent by Amazon Chime. Choose either an HTTPS endpoint or a Lambda function ARN.
         * For more information, see <a>Bot</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutEventsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsConfigurationOutcome PutEventsConfiguration(const Model::PutEventsConfigurationRequest& request) const;

        /**
         * <p>Creates an events configuration that allows a bot to receive outgoing events
         * sent by Amazon Chime. Choose either an HTTPS endpoint or a Lambda function ARN.
         * For more information, see <a>Bot</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutEventsConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventsConfigurationOutcomeCallable PutEventsConfigurationCallable(const Model::PutEventsConfigurationRequest& request) const;

        /**
         * <p>Creates an events configuration that allows a bot to receive outgoing events
         * sent by Amazon Chime. Choose either an HTTPS endpoint or a Lambda function ARN.
         * For more information, see <a>Bot</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutEventsConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventsConfigurationAsync(const Model::PutEventsConfigurationRequest& request, const PutEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds origination settings for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorOriginationOutcome PutVoiceConnectorOrigination(const Model::PutVoiceConnectorOriginationRequest& request) const;

        /**
         * <p>Adds origination settings for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorOriginationOutcomeCallable PutVoiceConnectorOriginationCallable(const Model::PutVoiceConnectorOriginationRequest& request) const;

        /**
         * <p>Adds origination settings for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorOriginationAsync(const Model::PutVoiceConnectorOriginationRequest& request, const PutVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds termination settings for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorTermination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorTerminationOutcome PutVoiceConnectorTermination(const Model::PutVoiceConnectorTerminationRequest& request) const;

        /**
         * <p>Adds termination settings for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorTermination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorTerminationOutcomeCallable PutVoiceConnectorTerminationCallable(const Model::PutVoiceConnectorTerminationRequest& request) const;

        /**
         * <p>Adds termination settings for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorTermination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorTerminationAsync(const Model::PutVoiceConnectorTerminationRequest& request, const PutVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds termination SIP credentials for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorTerminationCredentialsOutcome PutVoiceConnectorTerminationCredentials(const Model::PutVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * <p>Adds termination SIP credentials for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorTerminationCredentialsOutcomeCallable PutVoiceConnectorTerminationCredentialsCallable(const Model::PutVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * <p>Adds termination SIP credentials for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorTerminationCredentialsAsync(const Model::PutVoiceConnectorTerminationCredentialsRequest& request, const PutVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Regenerates the security token for a bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RegenerateSecurityToken">AWS
         * API Reference</a></p>
         */
        virtual Model::RegenerateSecurityTokenOutcome RegenerateSecurityToken(const Model::RegenerateSecurityTokenRequest& request) const;

        /**
         * <p>Regenerates the security token for a bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RegenerateSecurityToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegenerateSecurityTokenOutcomeCallable RegenerateSecurityTokenCallable(const Model::RegenerateSecurityTokenRequest& request) const;

        /**
         * <p>Regenerates the security token for a bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RegenerateSecurityToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegenerateSecurityTokenAsync(const Model::RegenerateSecurityTokenRequest& request, const RegenerateSecurityTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets the personal meeting PIN for the specified user on an Amazon Chime
         * account. Returns the <a>User</a> object with the updated personal meeting
         * PIN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ResetPersonalPIN">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetPersonalPINOutcome ResetPersonalPIN(const Model::ResetPersonalPINRequest& request) const;

        /**
         * <p>Resets the personal meeting PIN for the specified user on an Amazon Chime
         * account. Returns the <a>User</a> object with the updated personal meeting
         * PIN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ResetPersonalPIN">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetPersonalPINOutcomeCallable ResetPersonalPINCallable(const Model::ResetPersonalPINRequest& request) const;

        /**
         * <p>Resets the personal meeting PIN for the specified user on an Amazon Chime
         * account. Returns the <a>User</a> object with the updated personal meeting
         * PIN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ResetPersonalPIN">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetPersonalPINAsync(const Model::ResetPersonalPINRequest& request, const ResetPersonalPINResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves a phone number from the <b>Deletion queue</b> back into the phone
         * number <b>Inventory</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RestorePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::RestorePhoneNumberOutcome RestorePhoneNumber(const Model::RestorePhoneNumberRequest& request) const;

        /**
         * <p>Moves a phone number from the <b>Deletion queue</b> back into the phone
         * number <b>Inventory</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RestorePhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestorePhoneNumberOutcomeCallable RestorePhoneNumberCallable(const Model::RestorePhoneNumberRequest& request) const;

        /**
         * <p>Moves a phone number from the <b>Deletion queue</b> back into the phone
         * number <b>Inventory</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RestorePhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestorePhoneNumberAsync(const Model::RestorePhoneNumberRequest& request, const RestorePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches phone numbers that can be ordered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SearchAvailablePhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAvailablePhoneNumbersOutcome SearchAvailablePhoneNumbers(const Model::SearchAvailablePhoneNumbersRequest& request) const;

        /**
         * <p>Searches phone numbers that can be ordered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SearchAvailablePhoneNumbers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchAvailablePhoneNumbersOutcomeCallable SearchAvailablePhoneNumbersCallable(const Model::SearchAvailablePhoneNumbersRequest& request) const;

        /**
         * <p>Searches phone numbers that can be ordered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SearchAvailablePhoneNumbers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchAvailablePhoneNumbersAsync(const Model::SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates account details for the specified Amazon Chime account. Currently,
         * only account name updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountOutcome UpdateAccount(const Model::UpdateAccountRequest& request) const;

        /**
         * <p>Updates account details for the specified Amazon Chime account. Currently,
         * only account name updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountOutcomeCallable UpdateAccountCallable(const Model::UpdateAccountRequest& request) const;

        /**
         * <p>Updates account details for the specified Amazon Chime account. Currently,
         * only account name updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountAsync(const Model::UpdateAccountRequest& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for the specified Amazon Chime account. You can update
         * settings for remote control of shared screens, or for the dial-out option. For
         * more information about these settings, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
         * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountSettingsOutcome UpdateAccountSettings(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * <p>Updates the settings for the specified Amazon Chime account. You can update
         * settings for remote control of shared screens, or for the dial-out option. For
         * more information about these settings, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
         * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAccountSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountSettingsOutcomeCallable UpdateAccountSettingsCallable(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * <p>Updates the settings for the specified Amazon Chime account. You can update
         * settings for remote control of shared screens, or for the dial-out option. For
         * more information about these settings, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
         * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAccountSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountSettingsAsync(const Model::UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status of the specified bot, such as starting or stopping the bot
         * from running in your Amazon Chime Enterprise account.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBotOutcome UpdateBot(const Model::UpdateBotRequest& request) const;

        /**
         * <p>Updates the status of the specified bot, such as starting or stopping the bot
         * from running in your Amazon Chime Enterprise account.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateBot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBotOutcomeCallable UpdateBotCallable(const Model::UpdateBotRequest& request) const;

        /**
         * <p>Updates the status of the specified bot, such as starting or stopping the bot
         * from running in your Amazon Chime Enterprise account.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateBot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBotAsync(const Model::UpdateBotRequest& request, const UpdateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates global settings for the administrator's AWS account, such as Amazon
         * Chime Business Calling and Amazon Chime Voice Connector settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateGlobalSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalSettingsOutcome UpdateGlobalSettings(const Model::UpdateGlobalSettingsRequest& request) const;

        /**
         * <p>Updates global settings for the administrator's AWS account, such as Amazon
         * Chime Business Calling and Amazon Chime Voice Connector settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateGlobalSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGlobalSettingsOutcomeCallable UpdateGlobalSettingsCallable(const Model::UpdateGlobalSettingsRequest& request) const;

        /**
         * <p>Updates global settings for the administrator's AWS account, such as Amazon
         * Chime Business Calling and Amazon Chime Voice Connector settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateGlobalSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGlobalSettingsAsync(const Model::UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates phone number details, such as product type, for the specified phone
         * number ID. For toll-free numbers, you can use only the Amazon Chime Voice
         * Connector product type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePhoneNumberOutcome UpdatePhoneNumber(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * <p>Updates phone number details, such as product type, for the specified phone
         * number ID. For toll-free numbers, you can use only the Amazon Chime Voice
         * Connector product type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePhoneNumberOutcomeCallable UpdatePhoneNumberCallable(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * <p>Updates phone number details, such as product type, for the specified phone
         * number ID. For toll-free numbers, you can use only the Amazon Chime Voice
         * Connector product type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePhoneNumberAsync(const Model::UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates user details for a specified user ID. Currently, only
         * <code>LicenseType</code> updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Updates user details for a specified user ID. Currently, only
         * <code>LicenseType</code> updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Updates user details for a specified user ID. Currently, only
         * <code>LicenseType</code> updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for the specified user, such as phone number
         * settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserSettingsOutcome UpdateUserSettings(const Model::UpdateUserSettingsRequest& request) const;

        /**
         * <p>Updates the settings for the specified user, such as phone number
         * settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUserSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserSettingsOutcomeCallable UpdateUserSettingsCallable(const Model::UpdateUserSettingsRequest& request) const;

        /**
         * <p>Updates the settings for the specified user, such as phone number
         * settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUserSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserSettingsAsync(const Model::UpdateUserSettingsRequest& request, const UpdateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates details for the specified Amazon Chime Voice Connector.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceConnectorOutcome UpdateVoiceConnector(const Model::UpdateVoiceConnectorRequest& request) const;

        /**
         * <p>Updates details for the specified Amazon Chime Voice Connector.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateVoiceConnector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVoiceConnectorOutcomeCallable UpdateVoiceConnectorCallable(const Model::UpdateVoiceConnectorRequest& request) const;

        /**
         * <p>Updates details for the specified Amazon Chime Voice Connector.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateVoiceConnector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVoiceConnectorAsync(const Model::UpdateVoiceConnectorRequest& request, const UpdateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociatePhoneNumberWithUserAsyncHelper(const Model::AssociatePhoneNumberWithUserRequest& request, const AssociatePhoneNumberWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociatePhoneNumbersWithVoiceConnectorAsyncHelper(const Model::AssociatePhoneNumbersWithVoiceConnectorRequest& request, const AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeletePhoneNumberAsyncHelper(const Model::BatchDeletePhoneNumberRequest& request, const BatchDeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchSuspendUserAsyncHelper(const Model::BatchSuspendUserRequest& request, const BatchSuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUnsuspendUserAsyncHelper(const Model::BatchUnsuspendUserRequest& request, const BatchUnsuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUpdatePhoneNumberAsyncHelper(const Model::BatchUpdatePhoneNumberRequest& request, const BatchUpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUpdateUserAsyncHelper(const Model::BatchUpdateUserRequest& request, const BatchUpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAccountAsyncHelper(const Model::CreateAccountRequest& request, const CreateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBotAsyncHelper(const Model::CreateBotRequest& request, const CreateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePhoneNumberOrderAsyncHelper(const Model::CreatePhoneNumberOrderRequest& request, const CreatePhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVoiceConnectorAsyncHelper(const Model::CreateVoiceConnectorRequest& request, const CreateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccountAsyncHelper(const Model::DeleteAccountRequest& request, const DeleteAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventsConfigurationAsyncHelper(const Model::DeleteEventsConfigurationRequest& request, const DeleteEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePhoneNumberAsyncHelper(const Model::DeletePhoneNumberRequest& request, const DeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVoiceConnectorAsyncHelper(const Model::DeleteVoiceConnectorRequest& request, const DeleteVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVoiceConnectorOriginationAsyncHelper(const Model::DeleteVoiceConnectorOriginationRequest& request, const DeleteVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVoiceConnectorTerminationAsyncHelper(const Model::DeleteVoiceConnectorTerminationRequest& request, const DeleteVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVoiceConnectorTerminationCredentialsAsyncHelper(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request, const DeleteVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociatePhoneNumberFromUserAsyncHelper(const Model::DisassociatePhoneNumberFromUserRequest& request, const DisassociatePhoneNumberFromUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociatePhoneNumbersFromVoiceConnectorAsyncHelper(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountAsyncHelper(const Model::GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountSettingsAsyncHelper(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBotAsyncHelper(const Model::GetBotRequest& request, const GetBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEventsConfigurationAsyncHelper(const Model::GetEventsConfigurationRequest& request, const GetEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGlobalSettingsAsyncHelper(const GetGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPhoneNumberAsyncHelper(const Model::GetPhoneNumberRequest& request, const GetPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPhoneNumberOrderAsyncHelper(const Model::GetPhoneNumberOrderRequest& request, const GetPhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserAsyncHelper(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserSettingsAsyncHelper(const Model::GetUserSettingsRequest& request, const GetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVoiceConnectorAsyncHelper(const Model::GetVoiceConnectorRequest& request, const GetVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVoiceConnectorOriginationAsyncHelper(const Model::GetVoiceConnectorOriginationRequest& request, const GetVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVoiceConnectorTerminationAsyncHelper(const Model::GetVoiceConnectorTerminationRequest& request, const GetVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVoiceConnectorTerminationHealthAsyncHelper(const Model::GetVoiceConnectorTerminationHealthRequest& request, const GetVoiceConnectorTerminationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InviteUsersAsyncHelper(const Model::InviteUsersRequest& request, const InviteUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountsAsyncHelper(const Model::ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBotsAsyncHelper(const Model::ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPhoneNumberOrdersAsyncHelper(const Model::ListPhoneNumberOrdersRequest& request, const ListPhoneNumberOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPhoneNumbersAsyncHelper(const Model::ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVoiceConnectorTerminationCredentialsAsyncHelper(const Model::ListVoiceConnectorTerminationCredentialsRequest& request, const ListVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVoiceConnectorsAsyncHelper(const Model::ListVoiceConnectorsRequest& request, const ListVoiceConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void LogoutUserAsyncHelper(const Model::LogoutUserRequest& request, const LogoutUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEventsConfigurationAsyncHelper(const Model::PutEventsConfigurationRequest& request, const PutEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutVoiceConnectorOriginationAsyncHelper(const Model::PutVoiceConnectorOriginationRequest& request, const PutVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutVoiceConnectorTerminationAsyncHelper(const Model::PutVoiceConnectorTerminationRequest& request, const PutVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutVoiceConnectorTerminationCredentialsAsyncHelper(const Model::PutVoiceConnectorTerminationCredentialsRequest& request, const PutVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegenerateSecurityTokenAsyncHelper(const Model::RegenerateSecurityTokenRequest& request, const RegenerateSecurityTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetPersonalPINAsyncHelper(const Model::ResetPersonalPINRequest& request, const ResetPersonalPINResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestorePhoneNumberAsyncHelper(const Model::RestorePhoneNumberRequest& request, const RestorePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchAvailablePhoneNumbersAsyncHelper(const Model::SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccountAsyncHelper(const Model::UpdateAccountRequest& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccountSettingsAsyncHelper(const Model::UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBotAsyncHelper(const Model::UpdateBotRequest& request, const UpdateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGlobalSettingsAsyncHelper(const Model::UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePhoneNumberAsyncHelper(const Model::UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAsyncHelper(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserSettingsAsyncHelper(const Model::UpdateUserSettingsRequest& request, const UpdateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVoiceConnectorAsyncHelper(const Model::UpdateVoiceConnectorRequest& request, const UpdateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Chime
} // namespace Aws
