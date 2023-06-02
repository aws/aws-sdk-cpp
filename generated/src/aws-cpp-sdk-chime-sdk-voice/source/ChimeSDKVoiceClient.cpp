/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/chime-sdk-voice/ChimeSDKVoiceClient.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceErrorMarshaller.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceEndpointProvider.h>
#include <aws/chime-sdk-voice/model/AssociatePhoneNumbersWithVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/AssociatePhoneNumbersWithVoiceConnectorGroupRequest.h>
#include <aws/chime-sdk-voice/model/BatchDeletePhoneNumberRequest.h>
#include <aws/chime-sdk-voice/model/BatchUpdatePhoneNumberRequest.h>
#include <aws/chime-sdk-voice/model/CreatePhoneNumberOrderRequest.h>
#include <aws/chime-sdk-voice/model/CreateProxySessionRequest.h>
#include <aws/chime-sdk-voice/model/CreateSipMediaApplicationRequest.h>
#include <aws/chime-sdk-voice/model/CreateSipMediaApplicationCallRequest.h>
#include <aws/chime-sdk-voice/model/CreateSipRuleRequest.h>
#include <aws/chime-sdk-voice/model/CreateVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/CreateVoiceConnectorGroupRequest.h>
#include <aws/chime-sdk-voice/model/CreateVoiceProfileRequest.h>
#include <aws/chime-sdk-voice/model/CreateVoiceProfileDomainRequest.h>
#include <aws/chime-sdk-voice/model/DeletePhoneNumberRequest.h>
#include <aws/chime-sdk-voice/model/DeleteProxySessionRequest.h>
#include <aws/chime-sdk-voice/model/DeleteSipMediaApplicationRequest.h>
#include <aws/chime-sdk-voice/model/DeleteSipRuleRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorEmergencyCallingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorGroupRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorOriginationRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorProxyRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorStreamingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorTerminationRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorTerminationCredentialsRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceProfileRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceProfileDomainRequest.h>
#include <aws/chime-sdk-voice/model/DisassociatePhoneNumbersFromVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/DisassociatePhoneNumbersFromVoiceConnectorGroupRequest.h>
#include <aws/chime-sdk-voice/model/GetPhoneNumberRequest.h>
#include <aws/chime-sdk-voice/model/GetPhoneNumberOrderRequest.h>
#include <aws/chime-sdk-voice/model/GetProxySessionRequest.h>
#include <aws/chime-sdk-voice/model/GetSipMediaApplicationRequest.h>
#include <aws/chime-sdk-voice/model/GetSipMediaApplicationAlexaSkillConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetSipMediaApplicationLoggingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetSipRuleRequest.h>
#include <aws/chime-sdk-voice/model/GetSpeakerSearchTaskRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorEmergencyCallingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorGroupRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorLoggingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorOriginationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorProxyRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorStreamingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorTerminationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorTerminationHealthRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceProfileRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceProfileDomainRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceToneAnalysisTaskRequest.h>
#include <aws/chime-sdk-voice/model/ListPhoneNumberOrdersRequest.h>
#include <aws/chime-sdk-voice/model/ListPhoneNumbersRequest.h>
#include <aws/chime-sdk-voice/model/ListProxySessionsRequest.h>
#include <aws/chime-sdk-voice/model/ListSipMediaApplicationsRequest.h>
#include <aws/chime-sdk-voice/model/ListSipRulesRequest.h>
#include <aws/chime-sdk-voice/model/ListSupportedPhoneNumberCountriesRequest.h>
#include <aws/chime-sdk-voice/model/ListTagsForResourceRequest.h>
#include <aws/chime-sdk-voice/model/ListVoiceConnectorGroupsRequest.h>
#include <aws/chime-sdk-voice/model/ListVoiceConnectorTerminationCredentialsRequest.h>
#include <aws/chime-sdk-voice/model/ListVoiceConnectorsRequest.h>
#include <aws/chime-sdk-voice/model/ListVoiceProfileDomainsRequest.h>
#include <aws/chime-sdk-voice/model/ListVoiceProfilesRequest.h>
#include <aws/chime-sdk-voice/model/PutSipMediaApplicationAlexaSkillConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/PutSipMediaApplicationLoggingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorEmergencyCallingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorLoggingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorOriginationRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorProxyRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorStreamingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorTerminationRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorTerminationCredentialsRequest.h>
#include <aws/chime-sdk-voice/model/RestorePhoneNumberRequest.h>
#include <aws/chime-sdk-voice/model/SearchAvailablePhoneNumbersRequest.h>
#include <aws/chime-sdk-voice/model/StartSpeakerSearchTaskRequest.h>
#include <aws/chime-sdk-voice/model/StartVoiceToneAnalysisTaskRequest.h>
#include <aws/chime-sdk-voice/model/StopSpeakerSearchTaskRequest.h>
#include <aws/chime-sdk-voice/model/StopVoiceToneAnalysisTaskRequest.h>
#include <aws/chime-sdk-voice/model/TagResourceRequest.h>
#include <aws/chime-sdk-voice/model/UntagResourceRequest.h>
#include <aws/chime-sdk-voice/model/UpdateGlobalSettingsRequest.h>
#include <aws/chime-sdk-voice/model/UpdatePhoneNumberRequest.h>
#include <aws/chime-sdk-voice/model/UpdatePhoneNumberSettingsRequest.h>
#include <aws/chime-sdk-voice/model/UpdateProxySessionRequest.h>
#include <aws/chime-sdk-voice/model/UpdateSipMediaApplicationRequest.h>
#include <aws/chime-sdk-voice/model/UpdateSipMediaApplicationCallRequest.h>
#include <aws/chime-sdk-voice/model/UpdateSipRuleRequest.h>
#include <aws/chime-sdk-voice/model/UpdateVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/UpdateVoiceConnectorGroupRequest.h>
#include <aws/chime-sdk-voice/model/UpdateVoiceProfileRequest.h>
#include <aws/chime-sdk-voice/model/UpdateVoiceProfileDomainRequest.h>
#include <aws/chime-sdk-voice/model/ValidateE911AddressRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ChimeSDKVoice;
using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ChimeSDKVoiceClient::SERVICE_NAME = "chime";
const char* ChimeSDKVoiceClient::ALLOCATION_TAG = "ChimeSDKVoiceClient";

ChimeSDKVoiceClient::ChimeSDKVoiceClient(const ChimeSDKVoice::ChimeSDKVoiceClientConfiguration& clientConfiguration,
                                         std::shared_ptr<ChimeSDKVoiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKVoiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ChimeSDKVoiceClient::ChimeSDKVoiceClient(const AWSCredentials& credentials,
                                         std::shared_ptr<ChimeSDKVoiceEndpointProviderBase> endpointProvider,
                                         const ChimeSDKVoice::ChimeSDKVoiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKVoiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ChimeSDKVoiceClient::ChimeSDKVoiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<ChimeSDKVoiceEndpointProviderBase> endpointProvider,
                                         const ChimeSDKVoice::ChimeSDKVoiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKVoiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ChimeSDKVoiceClient::ChimeSDKVoiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKVoiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ChimeSDKVoiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ChimeSDKVoiceClient::ChimeSDKVoiceClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKVoiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ChimeSDKVoiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ChimeSDKVoiceClient::ChimeSDKVoiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKVoiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ChimeSDKVoiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ChimeSDKVoiceClient::~ChimeSDKVoiceClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<ChimeSDKVoiceEndpointProviderBase>& ChimeSDKVoiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ChimeSDKVoiceClient::init(const ChimeSDKVoice::ChimeSDKVoiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Chime SDK Voice");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ChimeSDKVoiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociatePhoneNumbersWithVoiceConnectorOutcome ChimeSDKVoiceClient::AssociatePhoneNumbersWithVoiceConnector(const AssociatePhoneNumbersWithVoiceConnectorRequest& request) const
{
  AWS_OPERATION_GUARD(AssociatePhoneNumbersWithVoiceConnector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociatePhoneNumbersWithVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumbersWithVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return AssociatePhoneNumbersWithVoiceConnectorOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociatePhoneNumbersWithVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  ss.str("?operation=associate-phone-numbers");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return AssociatePhoneNumbersWithVoiceConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociatePhoneNumbersWithVoiceConnectorGroupOutcome ChimeSDKVoiceClient::AssociatePhoneNumbersWithVoiceConnectorGroup(const AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request) const
{
  AWS_OPERATION_GUARD(AssociatePhoneNumbersWithVoiceConnectorGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociatePhoneNumbersWithVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumbersWithVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return AssociatePhoneNumbersWithVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociatePhoneNumbersWithVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
  ss.str("?operation=associate-phone-numbers");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return AssociatePhoneNumbersWithVoiceConnectorGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeletePhoneNumberOutcome ChimeSDKVoiceClient::BatchDeletePhoneNumber(const BatchDeletePhoneNumberRequest& request) const
{
  AWS_OPERATION_GUARD(BatchDeletePhoneNumber);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeletePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeletePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
  ss.str("?operation=batch-delete");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return BatchDeletePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchUpdatePhoneNumberOutcome ChimeSDKVoiceClient::BatchUpdatePhoneNumber(const BatchUpdatePhoneNumberRequest& request) const
{
  AWS_OPERATION_GUARD(BatchUpdatePhoneNumber);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUpdatePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpdatePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
  ss.str("?operation=batch-update");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return BatchUpdatePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePhoneNumberOrderOutcome ChimeSDKVoiceClient::CreatePhoneNumberOrder(const CreatePhoneNumberOrderRequest& request) const
{
  AWS_OPERATION_GUARD(CreatePhoneNumberOrder);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePhoneNumberOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePhoneNumberOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-orders");
  return CreatePhoneNumberOrderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProxySessionOutcome ChimeSDKVoiceClient::CreateProxySession(const CreateProxySessionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateProxySession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProxySession", "Required field: VoiceConnectorId, is not set");
    return CreateProxySessionOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions");
  return CreateProxySessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSipMediaApplicationOutcome ChimeSDKVoiceClient::CreateSipMediaApplication(const CreateSipMediaApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSipMediaApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications");
  return CreateSipMediaApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSipMediaApplicationCallOutcome ChimeSDKVoiceClient::CreateSipMediaApplicationCall(const CreateSipMediaApplicationCallRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSipMediaApplicationCall);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSipMediaApplicationCall, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSipMediaApplicationCall", "Required field: SipMediaApplicationId, is not set");
    return CreateSipMediaApplicationCallOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSipMediaApplicationCall, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/calls");
  return CreateSipMediaApplicationCallOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSipRuleOutcome ChimeSDKVoiceClient::CreateSipRule(const CreateSipRuleRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSipRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules");
  return CreateSipRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVoiceConnectorOutcome ChimeSDKVoiceClient::CreateVoiceConnector(const CreateVoiceConnectorRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVoiceConnector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors");
  return CreateVoiceConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVoiceConnectorGroupOutcome ChimeSDKVoiceClient::CreateVoiceConnectorGroup(const CreateVoiceConnectorGroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVoiceConnectorGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups");
  return CreateVoiceConnectorGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVoiceProfileOutcome ChimeSDKVoiceClient::CreateVoiceProfile(const CreateVoiceProfileRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVoiceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVoiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVoiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profiles");
  return CreateVoiceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVoiceProfileDomainOutcome ChimeSDKVoiceClient::CreateVoiceProfileDomain(const CreateVoiceProfileDomainRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVoiceProfileDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVoiceProfileDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVoiceProfileDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profile-domains");
  return CreateVoiceProfileDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePhoneNumberOutcome ChimeSDKVoiceClient::DeletePhoneNumber(const DeletePhoneNumberRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePhoneNumber);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePhoneNumber", "Required field: PhoneNumberId, is not set");
    return DeletePhoneNumberOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  return DeletePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProxySessionOutcome ChimeSDKVoiceClient::DeleteProxySession(const DeleteProxySessionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteProxySession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProxySession", "Required field: VoiceConnectorId, is not set");
    return DeleteProxySessionOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.ProxySessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProxySession", "Required field: ProxySessionId, is not set");
    return DeleteProxySessionOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProxySessionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProxySessionId());
  return DeleteProxySessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSipMediaApplicationOutcome ChimeSDKVoiceClient::DeleteSipMediaApplication(const DeleteSipMediaApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSipMediaApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSipMediaApplication", "Required field: SipMediaApplicationId, is not set");
    return DeleteSipMediaApplicationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  return DeleteSipMediaApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSipRuleOutcome ChimeSDKVoiceClient::DeleteSipRule(const DeleteSipRuleRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSipRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipRuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSipRule", "Required field: SipRuleId, is not set");
    return DeleteSipRuleOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipRuleId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipRuleId());
  return DeleteSipRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceConnectorOutcome ChimeSDKVoiceClient::DeleteVoiceConnector(const DeleteVoiceConnectorRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVoiceConnector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  return DeleteVoiceConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceConnectorEmergencyCallingConfigurationOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorEmergencyCallingConfiguration(const DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVoiceConnectorEmergencyCallingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnectorEmergencyCallingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorEmergencyCallingConfiguration", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorEmergencyCallingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnectorEmergencyCallingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/emergency-calling-configuration");
  return DeleteVoiceConnectorEmergencyCallingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceConnectorGroupOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorGroup(const DeleteVoiceConnectorGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVoiceConnectorGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return DeleteVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
  return DeleteVoiceConnectorGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceConnectorOriginationOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorOrigination(const DeleteVoiceConnectorOriginationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVoiceConnectorOrigination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnectorOrigination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorOrigination", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorOriginationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnectorOrigination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/origination");
  return DeleteVoiceConnectorOriginationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceConnectorProxyOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorProxy(const DeleteVoiceConnectorProxyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVoiceConnectorProxy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnectorProxy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorProxy", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorProxyOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnectorProxy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/programmable-numbers/proxy");
  return DeleteVoiceConnectorProxyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceConnectorStreamingConfigurationOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorStreamingConfiguration(const DeleteVoiceConnectorStreamingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVoiceConnectorStreamingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnectorStreamingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnectorStreamingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configuration");
  return DeleteVoiceConnectorStreamingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceConnectorTerminationOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorTermination(const DeleteVoiceConnectorTerminationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVoiceConnectorTermination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnectorTermination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorTermination", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorTerminationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnectorTermination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/termination");
  return DeleteVoiceConnectorTerminationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceConnectorTerminationCredentialsOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorTerminationCredentials(const DeleteVoiceConnectorTerminationCredentialsRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVoiceConnectorTerminationCredentials);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnectorTerminationCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorTerminationCredentials", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorTerminationCredentialsOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnectorTerminationCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/termination/credentials");
  ss.str("?operation=delete");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteVoiceConnectorTerminationCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceProfileOutcome ChimeSDKVoiceClient::DeleteVoiceProfile(const DeleteVoiceProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVoiceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceProfile", "Required field: VoiceProfileId, is not set");
    return DeleteVoiceProfileOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceProfileId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceProfileId());
  return DeleteVoiceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceProfileDomainOutcome ChimeSDKVoiceClient::DeleteVoiceProfileDomain(const DeleteVoiceProfileDomainRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVoiceProfileDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceProfileDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceProfileDomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceProfileDomain", "Required field: VoiceProfileDomainId, is not set");
    return DeleteVoiceProfileDomainOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceProfileDomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceProfileDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profile-domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceProfileDomainId());
  return DeleteVoiceProfileDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociatePhoneNumbersFromVoiceConnectorOutcome ChimeSDKVoiceClient::DisassociatePhoneNumbersFromVoiceConnector(const DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociatePhoneNumbersFromVoiceConnector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociatePhoneNumbersFromVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumbersFromVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return DisassociatePhoneNumbersFromVoiceConnectorOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociatePhoneNumbersFromVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  ss.str("?operation=disassociate-phone-numbers");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DisassociatePhoneNumbersFromVoiceConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome ChimeSDKVoiceClient::DisassociatePhoneNumbersFromVoiceConnectorGroup(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociatePhoneNumbersFromVoiceConnectorGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociatePhoneNumbersFromVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumbersFromVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociatePhoneNumbersFromVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
  ss.str("?operation=disassociate-phone-numbers");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGlobalSettingsOutcome ChimeSDKVoiceClient::GetGlobalSettings() const
{
AWS_OPERATION_GUARD(GetGlobalSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return GetGlobalSettingsOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "GetGlobalSettings"));
}

GetPhoneNumberOutcome ChimeSDKVoiceClient::GetPhoneNumber(const GetPhoneNumberRequest& request) const
{
  AWS_OPERATION_GUARD(GetPhoneNumber);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPhoneNumber", "Required field: PhoneNumberId, is not set");
    return GetPhoneNumberOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  return GetPhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPhoneNumberOrderOutcome ChimeSDKVoiceClient::GetPhoneNumberOrder(const GetPhoneNumberOrderRequest& request) const
{
  AWS_OPERATION_GUARD(GetPhoneNumberOrder);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPhoneNumberOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberOrderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPhoneNumberOrder", "Required field: PhoneNumberOrderId, is not set");
    return GetPhoneNumberOrderOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberOrderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPhoneNumberOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-orders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberOrderId());
  return GetPhoneNumberOrderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPhoneNumberSettingsOutcome ChimeSDKVoiceClient::GetPhoneNumberSettings() const
{
AWS_OPERATION_GUARD(GetPhoneNumberSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPhoneNumberSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPhoneNumberSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings/phone-number");
  return GetPhoneNumberSettingsOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "GetPhoneNumberSettings"));
}

GetProxySessionOutcome ChimeSDKVoiceClient::GetProxySession(const GetProxySessionRequest& request) const
{
  AWS_OPERATION_GUARD(GetProxySession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProxySession", "Required field: VoiceConnectorId, is not set");
    return GetProxySessionOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.ProxySessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProxySession", "Required field: ProxySessionId, is not set");
    return GetProxySessionOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProxySessionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProxySessionId());
  return GetProxySessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSipMediaApplicationOutcome ChimeSDKVoiceClient::GetSipMediaApplication(const GetSipMediaApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(GetSipMediaApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSipMediaApplication", "Required field: SipMediaApplicationId, is not set");
    return GetSipMediaApplicationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  return GetSipMediaApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSipMediaApplicationAlexaSkillConfigurationOutcome ChimeSDKVoiceClient::GetSipMediaApplicationAlexaSkillConfiguration(const GetSipMediaApplicationAlexaSkillConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetSipMediaApplicationAlexaSkillConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSipMediaApplicationAlexaSkillConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSipMediaApplicationAlexaSkillConfiguration", "Required field: SipMediaApplicationId, is not set");
    return GetSipMediaApplicationAlexaSkillConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSipMediaApplicationAlexaSkillConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/alexa-skill-configuration");
  return GetSipMediaApplicationAlexaSkillConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSipMediaApplicationLoggingConfigurationOutcome ChimeSDKVoiceClient::GetSipMediaApplicationLoggingConfiguration(const GetSipMediaApplicationLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetSipMediaApplicationLoggingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSipMediaApplicationLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSipMediaApplicationLoggingConfiguration", "Required field: SipMediaApplicationId, is not set");
    return GetSipMediaApplicationLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSipMediaApplicationLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  return GetSipMediaApplicationLoggingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSipRuleOutcome ChimeSDKVoiceClient::GetSipRule(const GetSipRuleRequest& request) const
{
  AWS_OPERATION_GUARD(GetSipRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipRuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSipRule", "Required field: SipRuleId, is not set");
    return GetSipRuleOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipRuleId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipRuleId());
  return GetSipRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSpeakerSearchTaskOutcome ChimeSDKVoiceClient::GetSpeakerSearchTask(const GetSpeakerSearchTaskRequest& request) const
{
  AWS_OPERATION_GUARD(GetSpeakerSearchTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSpeakerSearchTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSpeakerSearchTask", "Required field: VoiceConnectorId, is not set");
    return GetSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.SpeakerSearchTaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSpeakerSearchTask", "Required field: SpeakerSearchTaskId, is not set");
    return GetSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpeakerSearchTaskId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSpeakerSearchTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/speaker-search-tasks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpeakerSearchTaskId());
  return GetSpeakerSearchTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceConnectorOutcome ChimeSDKVoiceClient::GetVoiceConnector(const GetVoiceConnectorRequest& request) const
{
  AWS_OPERATION_GUARD(GetVoiceConnector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  return GetVoiceConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceConnectorEmergencyCallingConfigurationOutcome ChimeSDKVoiceClient::GetVoiceConnectorEmergencyCallingConfiguration(const GetVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetVoiceConnectorEmergencyCallingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorEmergencyCallingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorEmergencyCallingConfiguration", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorEmergencyCallingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorEmergencyCallingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/emergency-calling-configuration");
  return GetVoiceConnectorEmergencyCallingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceConnectorGroupOutcome ChimeSDKVoiceClient::GetVoiceConnectorGroup(const GetVoiceConnectorGroupRequest& request) const
{
  AWS_OPERATION_GUARD(GetVoiceConnectorGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return GetVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
  return GetVoiceConnectorGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceConnectorLoggingConfigurationOutcome ChimeSDKVoiceClient::GetVoiceConnectorLoggingConfiguration(const GetVoiceConnectorLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetVoiceConnectorLoggingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorLoggingConfiguration", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  return GetVoiceConnectorLoggingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceConnectorOriginationOutcome ChimeSDKVoiceClient::GetVoiceConnectorOrigination(const GetVoiceConnectorOriginationRequest& request) const
{
  AWS_OPERATION_GUARD(GetVoiceConnectorOrigination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorOrigination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorOrigination", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorOriginationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorOrigination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/origination");
  return GetVoiceConnectorOriginationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceConnectorProxyOutcome ChimeSDKVoiceClient::GetVoiceConnectorProxy(const GetVoiceConnectorProxyRequest& request) const
{
  AWS_OPERATION_GUARD(GetVoiceConnectorProxy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorProxy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorProxy", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorProxyOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorProxy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/programmable-numbers/proxy");
  return GetVoiceConnectorProxyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceConnectorStreamingConfigurationOutcome ChimeSDKVoiceClient::GetVoiceConnectorStreamingConfiguration(const GetVoiceConnectorStreamingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetVoiceConnectorStreamingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorStreamingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorStreamingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configuration");
  return GetVoiceConnectorStreamingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceConnectorTerminationOutcome ChimeSDKVoiceClient::GetVoiceConnectorTermination(const GetVoiceConnectorTerminationRequest& request) const
{
  AWS_OPERATION_GUARD(GetVoiceConnectorTermination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorTermination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorTermination", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorTerminationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorTermination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/termination");
  return GetVoiceConnectorTerminationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceConnectorTerminationHealthOutcome ChimeSDKVoiceClient::GetVoiceConnectorTerminationHealth(const GetVoiceConnectorTerminationHealthRequest& request) const
{
  AWS_OPERATION_GUARD(GetVoiceConnectorTerminationHealth);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorTerminationHealth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorTerminationHealth", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorTerminationHealthOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorTerminationHealth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/termination/health");
  return GetVoiceConnectorTerminationHealthOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceProfileOutcome ChimeSDKVoiceClient::GetVoiceProfile(const GetVoiceProfileRequest& request) const
{
  AWS_OPERATION_GUARD(GetVoiceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceProfile", "Required field: VoiceProfileId, is not set");
    return GetVoiceProfileOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceProfileId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceProfileId());
  return GetVoiceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceProfileDomainOutcome ChimeSDKVoiceClient::GetVoiceProfileDomain(const GetVoiceProfileDomainRequest& request) const
{
  AWS_OPERATION_GUARD(GetVoiceProfileDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceProfileDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceProfileDomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceProfileDomain", "Required field: VoiceProfileDomainId, is not set");
    return GetVoiceProfileDomainOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceProfileDomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceProfileDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profile-domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceProfileDomainId());
  return GetVoiceProfileDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceToneAnalysisTaskOutcome ChimeSDKVoiceClient::GetVoiceToneAnalysisTask(const GetVoiceToneAnalysisTaskRequest& request) const
{
  AWS_OPERATION_GUARD(GetVoiceToneAnalysisTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceToneAnalysisTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceToneAnalysisTask", "Required field: VoiceConnectorId, is not set");
    return GetVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.VoiceToneAnalysisTaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceToneAnalysisTask", "Required field: VoiceToneAnalysisTaskId, is not set");
    return GetVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceToneAnalysisTaskId]", false));
  }
  if (!request.IsCallerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceToneAnalysisTask", "Required field: IsCaller, is not set");
    return GetVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IsCaller]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceToneAnalysisTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-tone-analysis-tasks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceToneAnalysisTaskId());
  return GetVoiceToneAnalysisTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAvailableVoiceConnectorRegionsOutcome ChimeSDKVoiceClient::ListAvailableVoiceConnectorRegions() const
{
AWS_OPERATION_GUARD(ListAvailableVoiceConnectorRegions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAvailableVoiceConnectorRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAvailableVoiceConnectorRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-regions");
  return ListAvailableVoiceConnectorRegionsOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "ListAvailableVoiceConnectorRegions"));
}

ListPhoneNumberOrdersOutcome ChimeSDKVoiceClient::ListPhoneNumberOrders(const ListPhoneNumberOrdersRequest& request) const
{
  AWS_OPERATION_GUARD(ListPhoneNumberOrders);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPhoneNumberOrders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPhoneNumberOrders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-orders");
  return ListPhoneNumberOrdersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPhoneNumbersOutcome ChimeSDKVoiceClient::ListPhoneNumbers(const ListPhoneNumbersRequest& request) const
{
  AWS_OPERATION_GUARD(ListPhoneNumbers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
  return ListPhoneNumbersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProxySessionsOutcome ChimeSDKVoiceClient::ListProxySessions(const ListProxySessionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListProxySessions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProxySessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProxySessions", "Required field: VoiceConnectorId, is not set");
    return ListProxySessionsOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProxySessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions");
  return ListProxySessionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSipMediaApplicationsOutcome ChimeSDKVoiceClient::ListSipMediaApplications(const ListSipMediaApplicationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSipMediaApplications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSipMediaApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSipMediaApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications");
  return ListSipMediaApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSipRulesOutcome ChimeSDKVoiceClient::ListSipRules(const ListSipRulesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSipRules);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSipRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSipRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules");
  return ListSipRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSupportedPhoneNumberCountriesOutcome ChimeSDKVoiceClient::ListSupportedPhoneNumberCountries(const ListSupportedPhoneNumberCountriesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSupportedPhoneNumberCountries);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSupportedPhoneNumberCountries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProductTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSupportedPhoneNumberCountries", "Required field: ProductType, is not set");
    return ListSupportedPhoneNumberCountriesOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProductType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSupportedPhoneNumberCountries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-countries");
  return ListSupportedPhoneNumberCountriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome ChimeSDKVoiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVoiceConnectorGroupsOutcome ChimeSDKVoiceClient::ListVoiceConnectorGroups(const ListVoiceConnectorGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListVoiceConnectorGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVoiceConnectorGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVoiceConnectorGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups");
  return ListVoiceConnectorGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVoiceConnectorTerminationCredentialsOutcome ChimeSDKVoiceClient::ListVoiceConnectorTerminationCredentials(const ListVoiceConnectorTerminationCredentialsRequest& request) const
{
  AWS_OPERATION_GUARD(ListVoiceConnectorTerminationCredentials);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVoiceConnectorTerminationCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVoiceConnectorTerminationCredentials", "Required field: VoiceConnectorId, is not set");
    return ListVoiceConnectorTerminationCredentialsOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVoiceConnectorTerminationCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/termination/credentials");
  return ListVoiceConnectorTerminationCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVoiceConnectorsOutcome ChimeSDKVoiceClient::ListVoiceConnectors(const ListVoiceConnectorsRequest& request) const
{
  AWS_OPERATION_GUARD(ListVoiceConnectors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVoiceConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVoiceConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors");
  return ListVoiceConnectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVoiceProfileDomainsOutcome ChimeSDKVoiceClient::ListVoiceProfileDomains(const ListVoiceProfileDomainsRequest& request) const
{
  AWS_OPERATION_GUARD(ListVoiceProfileDomains);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVoiceProfileDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVoiceProfileDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profile-domains");
  return ListVoiceProfileDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVoiceProfilesOutcome ChimeSDKVoiceClient::ListVoiceProfiles(const ListVoiceProfilesRequest& request) const
{
  AWS_OPERATION_GUARD(ListVoiceProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVoiceProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceProfileDomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVoiceProfiles", "Required field: VoiceProfileDomainId, is not set");
    return ListVoiceProfilesOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceProfileDomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVoiceProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profiles");
  return ListVoiceProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

PutSipMediaApplicationAlexaSkillConfigurationOutcome ChimeSDKVoiceClient::PutSipMediaApplicationAlexaSkillConfiguration(const PutSipMediaApplicationAlexaSkillConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutSipMediaApplicationAlexaSkillConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSipMediaApplicationAlexaSkillConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSipMediaApplicationAlexaSkillConfiguration", "Required field: SipMediaApplicationId, is not set");
    return PutSipMediaApplicationAlexaSkillConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutSipMediaApplicationAlexaSkillConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/alexa-skill-configuration");
  return PutSipMediaApplicationAlexaSkillConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutSipMediaApplicationLoggingConfigurationOutcome ChimeSDKVoiceClient::PutSipMediaApplicationLoggingConfiguration(const PutSipMediaApplicationLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutSipMediaApplicationLoggingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSipMediaApplicationLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSipMediaApplicationLoggingConfiguration", "Required field: SipMediaApplicationId, is not set");
    return PutSipMediaApplicationLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutSipMediaApplicationLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  return PutSipMediaApplicationLoggingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutVoiceConnectorEmergencyCallingConfigurationOutcome ChimeSDKVoiceClient::PutVoiceConnectorEmergencyCallingConfiguration(const PutVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutVoiceConnectorEmergencyCallingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutVoiceConnectorEmergencyCallingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorEmergencyCallingConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorEmergencyCallingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutVoiceConnectorEmergencyCallingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/emergency-calling-configuration");
  return PutVoiceConnectorEmergencyCallingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutVoiceConnectorLoggingConfigurationOutcome ChimeSDKVoiceClient::PutVoiceConnectorLoggingConfiguration(const PutVoiceConnectorLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutVoiceConnectorLoggingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutVoiceConnectorLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorLoggingConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutVoiceConnectorLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  return PutVoiceConnectorLoggingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutVoiceConnectorOriginationOutcome ChimeSDKVoiceClient::PutVoiceConnectorOrigination(const PutVoiceConnectorOriginationRequest& request) const
{
  AWS_OPERATION_GUARD(PutVoiceConnectorOrigination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutVoiceConnectorOrigination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorOrigination", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorOriginationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutVoiceConnectorOrigination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/origination");
  return PutVoiceConnectorOriginationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutVoiceConnectorProxyOutcome ChimeSDKVoiceClient::PutVoiceConnectorProxy(const PutVoiceConnectorProxyRequest& request) const
{
  AWS_OPERATION_GUARD(PutVoiceConnectorProxy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutVoiceConnectorProxy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorProxy", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorProxyOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutVoiceConnectorProxy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/programmable-numbers/proxy");
  return PutVoiceConnectorProxyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutVoiceConnectorStreamingConfigurationOutcome ChimeSDKVoiceClient::PutVoiceConnectorStreamingConfiguration(const PutVoiceConnectorStreamingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutVoiceConnectorStreamingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutVoiceConnectorStreamingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutVoiceConnectorStreamingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configuration");
  return PutVoiceConnectorStreamingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutVoiceConnectorTerminationOutcome ChimeSDKVoiceClient::PutVoiceConnectorTermination(const PutVoiceConnectorTerminationRequest& request) const
{
  AWS_OPERATION_GUARD(PutVoiceConnectorTermination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutVoiceConnectorTermination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorTermination", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorTerminationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutVoiceConnectorTermination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/termination");
  return PutVoiceConnectorTerminationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutVoiceConnectorTerminationCredentialsOutcome ChimeSDKVoiceClient::PutVoiceConnectorTerminationCredentials(const PutVoiceConnectorTerminationCredentialsRequest& request) const
{
  AWS_OPERATION_GUARD(PutVoiceConnectorTerminationCredentials);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutVoiceConnectorTerminationCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorTerminationCredentials", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorTerminationCredentialsOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutVoiceConnectorTerminationCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/termination/credentials");
  ss.str("?operation=put");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutVoiceConnectorTerminationCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestorePhoneNumberOutcome ChimeSDKVoiceClient::RestorePhoneNumber(const RestorePhoneNumberRequest& request) const
{
  AWS_OPERATION_GUARD(RestorePhoneNumber);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestorePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestorePhoneNumber", "Required field: PhoneNumberId, is not set");
    return RestorePhoneNumberOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestorePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  ss.str("?operation=restore");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return RestorePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchAvailablePhoneNumbersOutcome ChimeSDKVoiceClient::SearchAvailablePhoneNumbers(const SearchAvailablePhoneNumbersRequest& request) const
{
  AWS_OPERATION_GUARD(SearchAvailablePhoneNumbers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchAvailablePhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchAvailablePhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/search");
  ss.str("?type=phone-numbers");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return SearchAvailablePhoneNumbersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

StartSpeakerSearchTaskOutcome ChimeSDKVoiceClient::StartSpeakerSearchTask(const StartSpeakerSearchTaskRequest& request) const
{
  AWS_OPERATION_GUARD(StartSpeakerSearchTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSpeakerSearchTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartSpeakerSearchTask", "Required field: VoiceConnectorId, is not set");
    return StartSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartSpeakerSearchTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/speaker-search-tasks");
  return StartSpeakerSearchTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartVoiceToneAnalysisTaskOutcome ChimeSDKVoiceClient::StartVoiceToneAnalysisTask(const StartVoiceToneAnalysisTaskRequest& request) const
{
  AWS_OPERATION_GUARD(StartVoiceToneAnalysisTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartVoiceToneAnalysisTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartVoiceToneAnalysisTask", "Required field: VoiceConnectorId, is not set");
    return StartVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartVoiceToneAnalysisTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-tone-analysis-tasks");
  return StartVoiceToneAnalysisTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopSpeakerSearchTaskOutcome ChimeSDKVoiceClient::StopSpeakerSearchTask(const StopSpeakerSearchTaskRequest& request) const
{
  AWS_OPERATION_GUARD(StopSpeakerSearchTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopSpeakerSearchTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopSpeakerSearchTask", "Required field: VoiceConnectorId, is not set");
    return StopSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.SpeakerSearchTaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopSpeakerSearchTask", "Required field: SpeakerSearchTaskId, is not set");
    return StopSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpeakerSearchTaskId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopSpeakerSearchTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/speaker-search-tasks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpeakerSearchTaskId());
  ss.str("?operation=stop");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return StopSpeakerSearchTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopVoiceToneAnalysisTaskOutcome ChimeSDKVoiceClient::StopVoiceToneAnalysisTask(const StopVoiceToneAnalysisTaskRequest& request) const
{
  AWS_OPERATION_GUARD(StopVoiceToneAnalysisTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopVoiceToneAnalysisTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopVoiceToneAnalysisTask", "Required field: VoiceConnectorId, is not set");
    return StopVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.VoiceToneAnalysisTaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopVoiceToneAnalysisTask", "Required field: VoiceToneAnalysisTaskId, is not set");
    return StopVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceToneAnalysisTaskId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopVoiceToneAnalysisTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-tone-analysis-tasks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceToneAnalysisTaskId());
  ss.str("?operation=stop");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return StopVoiceToneAnalysisTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome ChimeSDKVoiceClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  ss.str("?operation=tag-resource");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome ChimeSDKVoiceClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  ss.str("?operation=untag-resource");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGlobalSettingsOutcome ChimeSDKVoiceClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateGlobalSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return UpdateGlobalSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePhoneNumberOutcome ChimeSDKVoiceClient::UpdatePhoneNumber(const UpdatePhoneNumberRequest& request) const
{
  AWS_OPERATION_GUARD(UpdatePhoneNumber);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePhoneNumber", "Required field: PhoneNumberId, is not set");
    return UpdatePhoneNumberOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  return UpdatePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePhoneNumberSettingsOutcome ChimeSDKVoiceClient::UpdatePhoneNumberSettings(const UpdatePhoneNumberSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdatePhoneNumberSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePhoneNumberSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePhoneNumberSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings/phone-number");
  return UpdatePhoneNumberSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateProxySessionOutcome ChimeSDKVoiceClient::UpdateProxySession(const UpdateProxySessionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateProxySession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProxySession", "Required field: VoiceConnectorId, is not set");
    return UpdateProxySessionOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.ProxySessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProxySession", "Required field: ProxySessionId, is not set");
    return UpdateProxySessionOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProxySessionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProxySessionId());
  return UpdateProxySessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSipMediaApplicationOutcome ChimeSDKVoiceClient::UpdateSipMediaApplication(const UpdateSipMediaApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSipMediaApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSipMediaApplication", "Required field: SipMediaApplicationId, is not set");
    return UpdateSipMediaApplicationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  return UpdateSipMediaApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSipMediaApplicationCallOutcome ChimeSDKVoiceClient::UpdateSipMediaApplicationCall(const UpdateSipMediaApplicationCallRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSipMediaApplicationCall);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSipMediaApplicationCall, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSipMediaApplicationCall", "Required field: SipMediaApplicationId, is not set");
    return UpdateSipMediaApplicationCallOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  if (!request.TransactionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSipMediaApplicationCall", "Required field: TransactionId, is not set");
    return UpdateSipMediaApplicationCallOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TransactionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSipMediaApplicationCall, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/calls/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTransactionId());
  return UpdateSipMediaApplicationCallOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSipRuleOutcome ChimeSDKVoiceClient::UpdateSipRule(const UpdateSipRuleRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSipRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipRuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSipRule", "Required field: SipRuleId, is not set");
    return UpdateSipRuleOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipRuleId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipRuleId());
  return UpdateSipRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVoiceConnectorOutcome ChimeSDKVoiceClient::UpdateVoiceConnector(const UpdateVoiceConnectorRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateVoiceConnector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return UpdateVoiceConnectorOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  return UpdateVoiceConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVoiceConnectorGroupOutcome ChimeSDKVoiceClient::UpdateVoiceConnectorGroup(const UpdateVoiceConnectorGroupRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateVoiceConnectorGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return UpdateVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
  return UpdateVoiceConnectorGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVoiceProfileOutcome ChimeSDKVoiceClient::UpdateVoiceProfile(const UpdateVoiceProfileRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateVoiceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVoiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVoiceProfile", "Required field: VoiceProfileId, is not set");
    return UpdateVoiceProfileOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceProfileId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVoiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceProfileId());
  return UpdateVoiceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVoiceProfileDomainOutcome ChimeSDKVoiceClient::UpdateVoiceProfileDomain(const UpdateVoiceProfileDomainRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateVoiceProfileDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVoiceProfileDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceProfileDomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVoiceProfileDomain", "Required field: VoiceProfileDomainId, is not set");
    return UpdateVoiceProfileDomainOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceProfileDomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVoiceProfileDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profile-domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceProfileDomainId());
  return UpdateVoiceProfileDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ValidateE911AddressOutcome ChimeSDKVoiceClient::ValidateE911Address(const ValidateE911AddressRequest& request) const
{
  AWS_OPERATION_GUARD(ValidateE911Address);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidateE911Address, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ValidateE911Address, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/emergency-calling/address");
  return ValidateE911AddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

