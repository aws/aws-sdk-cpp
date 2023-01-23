/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/chime-sdk-voice/ChimeSDKVoiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ChimeSDKVoiceClient header */
#include <aws/chime-sdk-voice/model/AssociatePhoneNumbersWithVoiceConnectorResult.h>
#include <aws/chime-sdk-voice/model/AssociatePhoneNumbersWithVoiceConnectorGroupResult.h>
#include <aws/chime-sdk-voice/model/BatchDeletePhoneNumberResult.h>
#include <aws/chime-sdk-voice/model/BatchUpdatePhoneNumberResult.h>
#include <aws/chime-sdk-voice/model/CreatePhoneNumberOrderResult.h>
#include <aws/chime-sdk-voice/model/CreateProxySessionResult.h>
#include <aws/chime-sdk-voice/model/CreateSipMediaApplicationResult.h>
#include <aws/chime-sdk-voice/model/CreateSipMediaApplicationCallResult.h>
#include <aws/chime-sdk-voice/model/CreateSipRuleResult.h>
#include <aws/chime-sdk-voice/model/CreateVoiceConnectorResult.h>
#include <aws/chime-sdk-voice/model/CreateVoiceConnectorGroupResult.h>
#include <aws/chime-sdk-voice/model/DisassociatePhoneNumbersFromVoiceConnectorResult.h>
#include <aws/chime-sdk-voice/model/DisassociatePhoneNumbersFromVoiceConnectorGroupResult.h>
#include <aws/chime-sdk-voice/model/GetGlobalSettingsResult.h>
#include <aws/chime-sdk-voice/model/GetPhoneNumberResult.h>
#include <aws/chime-sdk-voice/model/GetPhoneNumberOrderResult.h>
#include <aws/chime-sdk-voice/model/GetPhoneNumberSettingsResult.h>
#include <aws/chime-sdk-voice/model/GetProxySessionResult.h>
#include <aws/chime-sdk-voice/model/GetSipMediaApplicationResult.h>
#include <aws/chime-sdk-voice/model/GetSipMediaApplicationAlexaSkillConfigurationResult.h>
#include <aws/chime-sdk-voice/model/GetSipMediaApplicationLoggingConfigurationResult.h>
#include <aws/chime-sdk-voice/model/GetSipRuleResult.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorResult.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorEmergencyCallingConfigurationResult.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorGroupResult.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorLoggingConfigurationResult.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorOriginationResult.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorProxyResult.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorStreamingConfigurationResult.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorTerminationResult.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorTerminationHealthResult.h>
#include <aws/chime-sdk-voice/model/ListAvailableVoiceConnectorRegionsResult.h>
#include <aws/chime-sdk-voice/model/ListPhoneNumberOrdersResult.h>
#include <aws/chime-sdk-voice/model/ListPhoneNumbersResult.h>
#include <aws/chime-sdk-voice/model/ListProxySessionsResult.h>
#include <aws/chime-sdk-voice/model/ListSipMediaApplicationsResult.h>
#include <aws/chime-sdk-voice/model/ListSipRulesResult.h>
#include <aws/chime-sdk-voice/model/ListSupportedPhoneNumberCountriesResult.h>
#include <aws/chime-sdk-voice/model/ListVoiceConnectorGroupsResult.h>
#include <aws/chime-sdk-voice/model/ListVoiceConnectorTerminationCredentialsResult.h>
#include <aws/chime-sdk-voice/model/ListVoiceConnectorsResult.h>
#include <aws/chime-sdk-voice/model/PutSipMediaApplicationAlexaSkillConfigurationResult.h>
#include <aws/chime-sdk-voice/model/PutSipMediaApplicationLoggingConfigurationResult.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorEmergencyCallingConfigurationResult.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorLoggingConfigurationResult.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorOriginationResult.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorProxyResult.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorStreamingConfigurationResult.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorTerminationResult.h>
#include <aws/chime-sdk-voice/model/RestorePhoneNumberResult.h>
#include <aws/chime-sdk-voice/model/SearchAvailablePhoneNumbersResult.h>
#include <aws/chime-sdk-voice/model/UpdatePhoneNumberResult.h>
#include <aws/chime-sdk-voice/model/UpdateProxySessionResult.h>
#include <aws/chime-sdk-voice/model/UpdateSipMediaApplicationResult.h>
#include <aws/chime-sdk-voice/model/UpdateSipMediaApplicationCallResult.h>
#include <aws/chime-sdk-voice/model/UpdateSipRuleResult.h>
#include <aws/chime-sdk-voice/model/UpdateVoiceConnectorResult.h>
#include <aws/chime-sdk-voice/model/UpdateVoiceConnectorGroupResult.h>
#include <aws/chime-sdk-voice/model/ValidateE911AddressResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ChimeSDKVoiceClient header */

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

  namespace ChimeSDKVoice
  {
    using ChimeSDKVoiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ChimeSDKVoiceEndpointProviderBase = Aws::ChimeSDKVoice::Endpoint::ChimeSDKVoiceEndpointProviderBase;
    using ChimeSDKVoiceEndpointProvider = Aws::ChimeSDKVoice::Endpoint::ChimeSDKVoiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ChimeSDKVoiceClient header */
      class AssociatePhoneNumbersWithVoiceConnectorRequest;
      class AssociatePhoneNumbersWithVoiceConnectorGroupRequest;
      class BatchDeletePhoneNumberRequest;
      class BatchUpdatePhoneNumberRequest;
      class CreatePhoneNumberOrderRequest;
      class CreateProxySessionRequest;
      class CreateSipMediaApplicationRequest;
      class CreateSipMediaApplicationCallRequest;
      class CreateSipRuleRequest;
      class CreateVoiceConnectorRequest;
      class CreateVoiceConnectorGroupRequest;
      class DeletePhoneNumberRequest;
      class DeleteProxySessionRequest;
      class DeleteSipMediaApplicationRequest;
      class DeleteSipRuleRequest;
      class DeleteVoiceConnectorRequest;
      class DeleteVoiceConnectorEmergencyCallingConfigurationRequest;
      class DeleteVoiceConnectorGroupRequest;
      class DeleteVoiceConnectorOriginationRequest;
      class DeleteVoiceConnectorProxyRequest;
      class DeleteVoiceConnectorStreamingConfigurationRequest;
      class DeleteVoiceConnectorTerminationRequest;
      class DeleteVoiceConnectorTerminationCredentialsRequest;
      class DisassociatePhoneNumbersFromVoiceConnectorRequest;
      class DisassociatePhoneNumbersFromVoiceConnectorGroupRequest;
      class GetPhoneNumberRequest;
      class GetPhoneNumberOrderRequest;
      class GetProxySessionRequest;
      class GetSipMediaApplicationRequest;
      class GetSipMediaApplicationAlexaSkillConfigurationRequest;
      class GetSipMediaApplicationLoggingConfigurationRequest;
      class GetSipRuleRequest;
      class GetVoiceConnectorRequest;
      class GetVoiceConnectorEmergencyCallingConfigurationRequest;
      class GetVoiceConnectorGroupRequest;
      class GetVoiceConnectorLoggingConfigurationRequest;
      class GetVoiceConnectorOriginationRequest;
      class GetVoiceConnectorProxyRequest;
      class GetVoiceConnectorStreamingConfigurationRequest;
      class GetVoiceConnectorTerminationRequest;
      class GetVoiceConnectorTerminationHealthRequest;
      class ListPhoneNumberOrdersRequest;
      class ListPhoneNumbersRequest;
      class ListProxySessionsRequest;
      class ListSipMediaApplicationsRequest;
      class ListSipRulesRequest;
      class ListSupportedPhoneNumberCountriesRequest;
      class ListVoiceConnectorGroupsRequest;
      class ListVoiceConnectorTerminationCredentialsRequest;
      class ListVoiceConnectorsRequest;
      class PutSipMediaApplicationAlexaSkillConfigurationRequest;
      class PutSipMediaApplicationLoggingConfigurationRequest;
      class PutVoiceConnectorEmergencyCallingConfigurationRequest;
      class PutVoiceConnectorLoggingConfigurationRequest;
      class PutVoiceConnectorOriginationRequest;
      class PutVoiceConnectorProxyRequest;
      class PutVoiceConnectorStreamingConfigurationRequest;
      class PutVoiceConnectorTerminationRequest;
      class PutVoiceConnectorTerminationCredentialsRequest;
      class RestorePhoneNumberRequest;
      class SearchAvailablePhoneNumbersRequest;
      class UpdateGlobalSettingsRequest;
      class UpdatePhoneNumberRequest;
      class UpdatePhoneNumberSettingsRequest;
      class UpdateProxySessionRequest;
      class UpdateSipMediaApplicationRequest;
      class UpdateSipMediaApplicationCallRequest;
      class UpdateSipRuleRequest;
      class UpdateVoiceConnectorRequest;
      class UpdateVoiceConnectorGroupRequest;
      class ValidateE911AddressRequest;
      /* End of service model forward declarations required in ChimeSDKVoiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociatePhoneNumbersWithVoiceConnectorResult, ChimeSDKVoiceError> AssociatePhoneNumbersWithVoiceConnectorOutcome;
      typedef Aws::Utils::Outcome<AssociatePhoneNumbersWithVoiceConnectorGroupResult, ChimeSDKVoiceError> AssociatePhoneNumbersWithVoiceConnectorGroupOutcome;
      typedef Aws::Utils::Outcome<BatchDeletePhoneNumberResult, ChimeSDKVoiceError> BatchDeletePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<BatchUpdatePhoneNumberResult, ChimeSDKVoiceError> BatchUpdatePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<CreatePhoneNumberOrderResult, ChimeSDKVoiceError> CreatePhoneNumberOrderOutcome;
      typedef Aws::Utils::Outcome<CreateProxySessionResult, ChimeSDKVoiceError> CreateProxySessionOutcome;
      typedef Aws::Utils::Outcome<CreateSipMediaApplicationResult, ChimeSDKVoiceError> CreateSipMediaApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateSipMediaApplicationCallResult, ChimeSDKVoiceError> CreateSipMediaApplicationCallOutcome;
      typedef Aws::Utils::Outcome<CreateSipRuleResult, ChimeSDKVoiceError> CreateSipRuleOutcome;
      typedef Aws::Utils::Outcome<CreateVoiceConnectorResult, ChimeSDKVoiceError> CreateVoiceConnectorOutcome;
      typedef Aws::Utils::Outcome<CreateVoiceConnectorGroupResult, ChimeSDKVoiceError> CreateVoiceConnectorGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> DeletePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> DeleteProxySessionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> DeleteSipMediaApplicationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> DeleteSipRuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> DeleteVoiceConnectorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> DeleteVoiceConnectorEmergencyCallingConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> DeleteVoiceConnectorGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> DeleteVoiceConnectorOriginationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> DeleteVoiceConnectorProxyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> DeleteVoiceConnectorStreamingConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> DeleteVoiceConnectorTerminationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> DeleteVoiceConnectorTerminationCredentialsOutcome;
      typedef Aws::Utils::Outcome<DisassociatePhoneNumbersFromVoiceConnectorResult, ChimeSDKVoiceError> DisassociatePhoneNumbersFromVoiceConnectorOutcome;
      typedef Aws::Utils::Outcome<DisassociatePhoneNumbersFromVoiceConnectorGroupResult, ChimeSDKVoiceError> DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome;
      typedef Aws::Utils::Outcome<GetGlobalSettingsResult, ChimeSDKVoiceError> GetGlobalSettingsOutcome;
      typedef Aws::Utils::Outcome<GetPhoneNumberResult, ChimeSDKVoiceError> GetPhoneNumberOutcome;
      typedef Aws::Utils::Outcome<GetPhoneNumberOrderResult, ChimeSDKVoiceError> GetPhoneNumberOrderOutcome;
      typedef Aws::Utils::Outcome<GetPhoneNumberSettingsResult, ChimeSDKVoiceError> GetPhoneNumberSettingsOutcome;
      typedef Aws::Utils::Outcome<GetProxySessionResult, ChimeSDKVoiceError> GetProxySessionOutcome;
      typedef Aws::Utils::Outcome<GetSipMediaApplicationResult, ChimeSDKVoiceError> GetSipMediaApplicationOutcome;
      typedef Aws::Utils::Outcome<GetSipMediaApplicationAlexaSkillConfigurationResult, ChimeSDKVoiceError> GetSipMediaApplicationAlexaSkillConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetSipMediaApplicationLoggingConfigurationResult, ChimeSDKVoiceError> GetSipMediaApplicationLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetSipRuleResult, ChimeSDKVoiceError> GetSipRuleOutcome;
      typedef Aws::Utils::Outcome<GetVoiceConnectorResult, ChimeSDKVoiceError> GetVoiceConnectorOutcome;
      typedef Aws::Utils::Outcome<GetVoiceConnectorEmergencyCallingConfigurationResult, ChimeSDKVoiceError> GetVoiceConnectorEmergencyCallingConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetVoiceConnectorGroupResult, ChimeSDKVoiceError> GetVoiceConnectorGroupOutcome;
      typedef Aws::Utils::Outcome<GetVoiceConnectorLoggingConfigurationResult, ChimeSDKVoiceError> GetVoiceConnectorLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetVoiceConnectorOriginationResult, ChimeSDKVoiceError> GetVoiceConnectorOriginationOutcome;
      typedef Aws::Utils::Outcome<GetVoiceConnectorProxyResult, ChimeSDKVoiceError> GetVoiceConnectorProxyOutcome;
      typedef Aws::Utils::Outcome<GetVoiceConnectorStreamingConfigurationResult, ChimeSDKVoiceError> GetVoiceConnectorStreamingConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetVoiceConnectorTerminationResult, ChimeSDKVoiceError> GetVoiceConnectorTerminationOutcome;
      typedef Aws::Utils::Outcome<GetVoiceConnectorTerminationHealthResult, ChimeSDKVoiceError> GetVoiceConnectorTerminationHealthOutcome;
      typedef Aws::Utils::Outcome<ListAvailableVoiceConnectorRegionsResult, ChimeSDKVoiceError> ListAvailableVoiceConnectorRegionsOutcome;
      typedef Aws::Utils::Outcome<ListPhoneNumberOrdersResult, ChimeSDKVoiceError> ListPhoneNumberOrdersOutcome;
      typedef Aws::Utils::Outcome<ListPhoneNumbersResult, ChimeSDKVoiceError> ListPhoneNumbersOutcome;
      typedef Aws::Utils::Outcome<ListProxySessionsResult, ChimeSDKVoiceError> ListProxySessionsOutcome;
      typedef Aws::Utils::Outcome<ListSipMediaApplicationsResult, ChimeSDKVoiceError> ListSipMediaApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListSipRulesResult, ChimeSDKVoiceError> ListSipRulesOutcome;
      typedef Aws::Utils::Outcome<ListSupportedPhoneNumberCountriesResult, ChimeSDKVoiceError> ListSupportedPhoneNumberCountriesOutcome;
      typedef Aws::Utils::Outcome<ListVoiceConnectorGroupsResult, ChimeSDKVoiceError> ListVoiceConnectorGroupsOutcome;
      typedef Aws::Utils::Outcome<ListVoiceConnectorTerminationCredentialsResult, ChimeSDKVoiceError> ListVoiceConnectorTerminationCredentialsOutcome;
      typedef Aws::Utils::Outcome<ListVoiceConnectorsResult, ChimeSDKVoiceError> ListVoiceConnectorsOutcome;
      typedef Aws::Utils::Outcome<PutSipMediaApplicationAlexaSkillConfigurationResult, ChimeSDKVoiceError> PutSipMediaApplicationAlexaSkillConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutSipMediaApplicationLoggingConfigurationResult, ChimeSDKVoiceError> PutSipMediaApplicationLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutVoiceConnectorEmergencyCallingConfigurationResult, ChimeSDKVoiceError> PutVoiceConnectorEmergencyCallingConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutVoiceConnectorLoggingConfigurationResult, ChimeSDKVoiceError> PutVoiceConnectorLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutVoiceConnectorOriginationResult, ChimeSDKVoiceError> PutVoiceConnectorOriginationOutcome;
      typedef Aws::Utils::Outcome<PutVoiceConnectorProxyResult, ChimeSDKVoiceError> PutVoiceConnectorProxyOutcome;
      typedef Aws::Utils::Outcome<PutVoiceConnectorStreamingConfigurationResult, ChimeSDKVoiceError> PutVoiceConnectorStreamingConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutVoiceConnectorTerminationResult, ChimeSDKVoiceError> PutVoiceConnectorTerminationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> PutVoiceConnectorTerminationCredentialsOutcome;
      typedef Aws::Utils::Outcome<RestorePhoneNumberResult, ChimeSDKVoiceError> RestorePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<SearchAvailablePhoneNumbersResult, ChimeSDKVoiceError> SearchAvailablePhoneNumbersOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> UpdateGlobalSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdatePhoneNumberResult, ChimeSDKVoiceError> UpdatePhoneNumberOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKVoiceError> UpdatePhoneNumberSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateProxySessionResult, ChimeSDKVoiceError> UpdateProxySessionOutcome;
      typedef Aws::Utils::Outcome<UpdateSipMediaApplicationResult, ChimeSDKVoiceError> UpdateSipMediaApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateSipMediaApplicationCallResult, ChimeSDKVoiceError> UpdateSipMediaApplicationCallOutcome;
      typedef Aws::Utils::Outcome<UpdateSipRuleResult, ChimeSDKVoiceError> UpdateSipRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateVoiceConnectorResult, ChimeSDKVoiceError> UpdateVoiceConnectorOutcome;
      typedef Aws::Utils::Outcome<UpdateVoiceConnectorGroupResult, ChimeSDKVoiceError> UpdateVoiceConnectorGroupOutcome;
      typedef Aws::Utils::Outcome<ValidateE911AddressResult, ChimeSDKVoiceError> ValidateE911AddressOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociatePhoneNumbersWithVoiceConnectorOutcome> AssociatePhoneNumbersWithVoiceConnectorOutcomeCallable;
      typedef std::future<AssociatePhoneNumbersWithVoiceConnectorGroupOutcome> AssociatePhoneNumbersWithVoiceConnectorGroupOutcomeCallable;
      typedef std::future<BatchDeletePhoneNumberOutcome> BatchDeletePhoneNumberOutcomeCallable;
      typedef std::future<BatchUpdatePhoneNumberOutcome> BatchUpdatePhoneNumberOutcomeCallable;
      typedef std::future<CreatePhoneNumberOrderOutcome> CreatePhoneNumberOrderOutcomeCallable;
      typedef std::future<CreateProxySessionOutcome> CreateProxySessionOutcomeCallable;
      typedef std::future<CreateSipMediaApplicationOutcome> CreateSipMediaApplicationOutcomeCallable;
      typedef std::future<CreateSipMediaApplicationCallOutcome> CreateSipMediaApplicationCallOutcomeCallable;
      typedef std::future<CreateSipRuleOutcome> CreateSipRuleOutcomeCallable;
      typedef std::future<CreateVoiceConnectorOutcome> CreateVoiceConnectorOutcomeCallable;
      typedef std::future<CreateVoiceConnectorGroupOutcome> CreateVoiceConnectorGroupOutcomeCallable;
      typedef std::future<DeletePhoneNumberOutcome> DeletePhoneNumberOutcomeCallable;
      typedef std::future<DeleteProxySessionOutcome> DeleteProxySessionOutcomeCallable;
      typedef std::future<DeleteSipMediaApplicationOutcome> DeleteSipMediaApplicationOutcomeCallable;
      typedef std::future<DeleteSipRuleOutcome> DeleteSipRuleOutcomeCallable;
      typedef std::future<DeleteVoiceConnectorOutcome> DeleteVoiceConnectorOutcomeCallable;
      typedef std::future<DeleteVoiceConnectorEmergencyCallingConfigurationOutcome> DeleteVoiceConnectorEmergencyCallingConfigurationOutcomeCallable;
      typedef std::future<DeleteVoiceConnectorGroupOutcome> DeleteVoiceConnectorGroupOutcomeCallable;
      typedef std::future<DeleteVoiceConnectorOriginationOutcome> DeleteVoiceConnectorOriginationOutcomeCallable;
      typedef std::future<DeleteVoiceConnectorProxyOutcome> DeleteVoiceConnectorProxyOutcomeCallable;
      typedef std::future<DeleteVoiceConnectorStreamingConfigurationOutcome> DeleteVoiceConnectorStreamingConfigurationOutcomeCallable;
      typedef std::future<DeleteVoiceConnectorTerminationOutcome> DeleteVoiceConnectorTerminationOutcomeCallable;
      typedef std::future<DeleteVoiceConnectorTerminationCredentialsOutcome> DeleteVoiceConnectorTerminationCredentialsOutcomeCallable;
      typedef std::future<DisassociatePhoneNumbersFromVoiceConnectorOutcome> DisassociatePhoneNumbersFromVoiceConnectorOutcomeCallable;
      typedef std::future<DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome> DisassociatePhoneNumbersFromVoiceConnectorGroupOutcomeCallable;
      typedef std::future<GetGlobalSettingsOutcome> GetGlobalSettingsOutcomeCallable;
      typedef std::future<GetPhoneNumberOutcome> GetPhoneNumberOutcomeCallable;
      typedef std::future<GetPhoneNumberOrderOutcome> GetPhoneNumberOrderOutcomeCallable;
      typedef std::future<GetPhoneNumberSettingsOutcome> GetPhoneNumberSettingsOutcomeCallable;
      typedef std::future<GetProxySessionOutcome> GetProxySessionOutcomeCallable;
      typedef std::future<GetSipMediaApplicationOutcome> GetSipMediaApplicationOutcomeCallable;
      typedef std::future<GetSipMediaApplicationAlexaSkillConfigurationOutcome> GetSipMediaApplicationAlexaSkillConfigurationOutcomeCallable;
      typedef std::future<GetSipMediaApplicationLoggingConfigurationOutcome> GetSipMediaApplicationLoggingConfigurationOutcomeCallable;
      typedef std::future<GetSipRuleOutcome> GetSipRuleOutcomeCallable;
      typedef std::future<GetVoiceConnectorOutcome> GetVoiceConnectorOutcomeCallable;
      typedef std::future<GetVoiceConnectorEmergencyCallingConfigurationOutcome> GetVoiceConnectorEmergencyCallingConfigurationOutcomeCallable;
      typedef std::future<GetVoiceConnectorGroupOutcome> GetVoiceConnectorGroupOutcomeCallable;
      typedef std::future<GetVoiceConnectorLoggingConfigurationOutcome> GetVoiceConnectorLoggingConfigurationOutcomeCallable;
      typedef std::future<GetVoiceConnectorOriginationOutcome> GetVoiceConnectorOriginationOutcomeCallable;
      typedef std::future<GetVoiceConnectorProxyOutcome> GetVoiceConnectorProxyOutcomeCallable;
      typedef std::future<GetVoiceConnectorStreamingConfigurationOutcome> GetVoiceConnectorStreamingConfigurationOutcomeCallable;
      typedef std::future<GetVoiceConnectorTerminationOutcome> GetVoiceConnectorTerminationOutcomeCallable;
      typedef std::future<GetVoiceConnectorTerminationHealthOutcome> GetVoiceConnectorTerminationHealthOutcomeCallable;
      typedef std::future<ListAvailableVoiceConnectorRegionsOutcome> ListAvailableVoiceConnectorRegionsOutcomeCallable;
      typedef std::future<ListPhoneNumberOrdersOutcome> ListPhoneNumberOrdersOutcomeCallable;
      typedef std::future<ListPhoneNumbersOutcome> ListPhoneNumbersOutcomeCallable;
      typedef std::future<ListProxySessionsOutcome> ListProxySessionsOutcomeCallable;
      typedef std::future<ListSipMediaApplicationsOutcome> ListSipMediaApplicationsOutcomeCallable;
      typedef std::future<ListSipRulesOutcome> ListSipRulesOutcomeCallable;
      typedef std::future<ListSupportedPhoneNumberCountriesOutcome> ListSupportedPhoneNumberCountriesOutcomeCallable;
      typedef std::future<ListVoiceConnectorGroupsOutcome> ListVoiceConnectorGroupsOutcomeCallable;
      typedef std::future<ListVoiceConnectorTerminationCredentialsOutcome> ListVoiceConnectorTerminationCredentialsOutcomeCallable;
      typedef std::future<ListVoiceConnectorsOutcome> ListVoiceConnectorsOutcomeCallable;
      typedef std::future<PutSipMediaApplicationAlexaSkillConfigurationOutcome> PutSipMediaApplicationAlexaSkillConfigurationOutcomeCallable;
      typedef std::future<PutSipMediaApplicationLoggingConfigurationOutcome> PutSipMediaApplicationLoggingConfigurationOutcomeCallable;
      typedef std::future<PutVoiceConnectorEmergencyCallingConfigurationOutcome> PutVoiceConnectorEmergencyCallingConfigurationOutcomeCallable;
      typedef std::future<PutVoiceConnectorLoggingConfigurationOutcome> PutVoiceConnectorLoggingConfigurationOutcomeCallable;
      typedef std::future<PutVoiceConnectorOriginationOutcome> PutVoiceConnectorOriginationOutcomeCallable;
      typedef std::future<PutVoiceConnectorProxyOutcome> PutVoiceConnectorProxyOutcomeCallable;
      typedef std::future<PutVoiceConnectorStreamingConfigurationOutcome> PutVoiceConnectorStreamingConfigurationOutcomeCallable;
      typedef std::future<PutVoiceConnectorTerminationOutcome> PutVoiceConnectorTerminationOutcomeCallable;
      typedef std::future<PutVoiceConnectorTerminationCredentialsOutcome> PutVoiceConnectorTerminationCredentialsOutcomeCallable;
      typedef std::future<RestorePhoneNumberOutcome> RestorePhoneNumberOutcomeCallable;
      typedef std::future<SearchAvailablePhoneNumbersOutcome> SearchAvailablePhoneNumbersOutcomeCallable;
      typedef std::future<UpdateGlobalSettingsOutcome> UpdateGlobalSettingsOutcomeCallable;
      typedef std::future<UpdatePhoneNumberOutcome> UpdatePhoneNumberOutcomeCallable;
      typedef std::future<UpdatePhoneNumberSettingsOutcome> UpdatePhoneNumberSettingsOutcomeCallable;
      typedef std::future<UpdateProxySessionOutcome> UpdateProxySessionOutcomeCallable;
      typedef std::future<UpdateSipMediaApplicationOutcome> UpdateSipMediaApplicationOutcomeCallable;
      typedef std::future<UpdateSipMediaApplicationCallOutcome> UpdateSipMediaApplicationCallOutcomeCallable;
      typedef std::future<UpdateSipRuleOutcome> UpdateSipRuleOutcomeCallable;
      typedef std::future<UpdateVoiceConnectorOutcome> UpdateVoiceConnectorOutcomeCallable;
      typedef std::future<UpdateVoiceConnectorGroupOutcome> UpdateVoiceConnectorGroupOutcomeCallable;
      typedef std::future<ValidateE911AddressOutcome> ValidateE911AddressOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ChimeSDKVoiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::AssociatePhoneNumbersWithVoiceConnectorRequest&, const Model::AssociatePhoneNumbersWithVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest&, const Model::AssociatePhoneNumbersWithVoiceConnectorGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePhoneNumbersWithVoiceConnectorGroupResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::BatchDeletePhoneNumberRequest&, const Model::BatchDeletePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeletePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::BatchUpdatePhoneNumberRequest&, const Model::BatchUpdatePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdatePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::CreatePhoneNumberOrderRequest&, const Model::CreatePhoneNumberOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePhoneNumberOrderResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::CreateProxySessionRequest&, const Model::CreateProxySessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProxySessionResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::CreateSipMediaApplicationRequest&, const Model::CreateSipMediaApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSipMediaApplicationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::CreateSipMediaApplicationCallRequest&, const Model::CreateSipMediaApplicationCallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSipMediaApplicationCallResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::CreateSipRuleRequest&, const Model::CreateSipRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSipRuleResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::CreateVoiceConnectorRequest&, const Model::CreateVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::CreateVoiceConnectorGroupRequest&, const Model::CreateVoiceConnectorGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVoiceConnectorGroupResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::DeletePhoneNumberRequest&, const Model::DeletePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::DeleteProxySessionRequest&, const Model::DeleteProxySessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProxySessionResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::DeleteSipMediaApplicationRequest&, const Model::DeleteSipMediaApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSipMediaApplicationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::DeleteSipRuleRequest&, const Model::DeleteSipRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSipRuleResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::DeleteVoiceConnectorRequest&, const Model::DeleteVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest&, const Model::DeleteVoiceConnectorEmergencyCallingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::DeleteVoiceConnectorGroupRequest&, const Model::DeleteVoiceConnectorGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorGroupResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::DeleteVoiceConnectorOriginationRequest&, const Model::DeleteVoiceConnectorOriginationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorOriginationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::DeleteVoiceConnectorProxyRequest&, const Model::DeleteVoiceConnectorProxyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorProxyResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::DeleteVoiceConnectorStreamingConfigurationRequest&, const Model::DeleteVoiceConnectorStreamingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorStreamingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::DeleteVoiceConnectorTerminationRequest&, const Model::DeleteVoiceConnectorTerminationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorTerminationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::DeleteVoiceConnectorTerminationCredentialsRequest&, const Model::DeleteVoiceConnectorTerminationCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorTerminationCredentialsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest&, const Model::DisassociatePhoneNumbersFromVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePhoneNumbersFromVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest&, const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePhoneNumbersFromVoiceConnectorGroupResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetGlobalSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGlobalSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetPhoneNumberRequest&, const Model::GetPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetPhoneNumberOrderRequest&, const Model::GetPhoneNumberOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPhoneNumberOrderResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetPhoneNumberSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPhoneNumberSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetProxySessionRequest&, const Model::GetProxySessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProxySessionResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetSipMediaApplicationRequest&, const Model::GetSipMediaApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSipMediaApplicationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetSipMediaApplicationAlexaSkillConfigurationRequest&, const Model::GetSipMediaApplicationAlexaSkillConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSipMediaApplicationAlexaSkillConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetSipMediaApplicationLoggingConfigurationRequest&, const Model::GetSipMediaApplicationLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSipMediaApplicationLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetSipRuleRequest&, const Model::GetSipRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSipRuleResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetVoiceConnectorRequest&, const Model::GetVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetVoiceConnectorEmergencyCallingConfigurationRequest&, const Model::GetVoiceConnectorEmergencyCallingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetVoiceConnectorGroupRequest&, const Model::GetVoiceConnectorGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorGroupResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetVoiceConnectorLoggingConfigurationRequest&, const Model::GetVoiceConnectorLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetVoiceConnectorOriginationRequest&, const Model::GetVoiceConnectorOriginationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorOriginationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetVoiceConnectorProxyRequest&, const Model::GetVoiceConnectorProxyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorProxyResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetVoiceConnectorStreamingConfigurationRequest&, const Model::GetVoiceConnectorStreamingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorStreamingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetVoiceConnectorTerminationRequest&, const Model::GetVoiceConnectorTerminationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorTerminationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::GetVoiceConnectorTerminationHealthRequest&, const Model::GetVoiceConnectorTerminationHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorTerminationHealthResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::ListAvailableVoiceConnectorRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableVoiceConnectorRegionsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::ListPhoneNumberOrdersRequest&, const Model::ListPhoneNumberOrdersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumberOrdersResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::ListPhoneNumbersRequest&, const Model::ListPhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::ListProxySessionsRequest&, const Model::ListProxySessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProxySessionsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::ListSipMediaApplicationsRequest&, const Model::ListSipMediaApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSipMediaApplicationsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::ListSipRulesRequest&, const Model::ListSipRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSipRulesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::ListSupportedPhoneNumberCountriesRequest&, const Model::ListSupportedPhoneNumberCountriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSupportedPhoneNumberCountriesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::ListVoiceConnectorGroupsRequest&, const Model::ListVoiceConnectorGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVoiceConnectorGroupsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::ListVoiceConnectorTerminationCredentialsRequest&, const Model::ListVoiceConnectorTerminationCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVoiceConnectorTerminationCredentialsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::ListVoiceConnectorsRequest&, const Model::ListVoiceConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVoiceConnectorsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::PutSipMediaApplicationAlexaSkillConfigurationRequest&, const Model::PutSipMediaApplicationAlexaSkillConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSipMediaApplicationAlexaSkillConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::PutSipMediaApplicationLoggingConfigurationRequest&, const Model::PutSipMediaApplicationLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSipMediaApplicationLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::PutVoiceConnectorEmergencyCallingConfigurationRequest&, const Model::PutVoiceConnectorEmergencyCallingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::PutVoiceConnectorLoggingConfigurationRequest&, const Model::PutVoiceConnectorLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::PutVoiceConnectorOriginationRequest&, const Model::PutVoiceConnectorOriginationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorOriginationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::PutVoiceConnectorProxyRequest&, const Model::PutVoiceConnectorProxyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorProxyResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::PutVoiceConnectorStreamingConfigurationRequest&, const Model::PutVoiceConnectorStreamingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorStreamingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::PutVoiceConnectorTerminationRequest&, const Model::PutVoiceConnectorTerminationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorTerminationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::PutVoiceConnectorTerminationCredentialsRequest&, const Model::PutVoiceConnectorTerminationCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorTerminationCredentialsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::RestorePhoneNumberRequest&, const Model::RestorePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestorePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::SearchAvailablePhoneNumbersRequest&, const Model::SearchAvailablePhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchAvailablePhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::UpdateGlobalSettingsRequest&, const Model::UpdateGlobalSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlobalSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::UpdatePhoneNumberRequest&, const Model::UpdatePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::UpdatePhoneNumberSettingsRequest&, const Model::UpdatePhoneNumberSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePhoneNumberSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::UpdateProxySessionRequest&, const Model::UpdateProxySessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProxySessionResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::UpdateSipMediaApplicationRequest&, const Model::UpdateSipMediaApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSipMediaApplicationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::UpdateSipMediaApplicationCallRequest&, const Model::UpdateSipMediaApplicationCallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSipMediaApplicationCallResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::UpdateSipRuleRequest&, const Model::UpdateSipRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSipRuleResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::UpdateVoiceConnectorRequest&, const Model::UpdateVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::UpdateVoiceConnectorGroupRequest&, const Model::UpdateVoiceConnectorGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVoiceConnectorGroupResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKVoiceClient*, const Model::ValidateE911AddressRequest&, const Model::ValidateE911AddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateE911AddressResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ChimeSDKVoice
} // namespace Aws
