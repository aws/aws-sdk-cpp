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
#include <aws/chime-sdk-voice/model/DisassociatePhoneNumbersFromVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/DisassociatePhoneNumbersFromVoiceConnectorGroupRequest.h>
#include <aws/chime-sdk-voice/model/GetPhoneNumberRequest.h>
#include <aws/chime-sdk-voice/model/GetPhoneNumberOrderRequest.h>
#include <aws/chime-sdk-voice/model/GetProxySessionRequest.h>
#include <aws/chime-sdk-voice/model/GetSipMediaApplicationRequest.h>
#include <aws/chime-sdk-voice/model/GetSipMediaApplicationAlexaSkillConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetSipMediaApplicationLoggingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetSipRuleRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorEmergencyCallingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorGroupRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorLoggingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorOriginationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorProxyRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorStreamingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorTerminationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorTerminationHealthRequest.h>
#include <aws/chime-sdk-voice/model/ListPhoneNumberOrdersRequest.h>
#include <aws/chime-sdk-voice/model/ListPhoneNumbersRequest.h>
#include <aws/chime-sdk-voice/model/ListProxySessionsRequest.h>
#include <aws/chime-sdk-voice/model/ListSipMediaApplicationsRequest.h>
#include <aws/chime-sdk-voice/model/ListSipRulesRequest.h>
#include <aws/chime-sdk-voice/model/ListSupportedPhoneNumberCountriesRequest.h>
#include <aws/chime-sdk-voice/model/ListVoiceConnectorGroupsRequest.h>
#include <aws/chime-sdk-voice/model/ListVoiceConnectorTerminationCredentialsRequest.h>
#include <aws/chime-sdk-voice/model/ListVoiceConnectorsRequest.h>
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
#include <aws/chime-sdk-voice/model/UpdateGlobalSettingsRequest.h>
#include <aws/chime-sdk-voice/model/UpdatePhoneNumberRequest.h>
#include <aws/chime-sdk-voice/model/UpdatePhoneNumberSettingsRequest.h>
#include <aws/chime-sdk-voice/model/UpdateProxySessionRequest.h>
#include <aws/chime-sdk-voice/model/UpdateSipMediaApplicationRequest.h>
#include <aws/chime-sdk-voice/model/UpdateSipMediaApplicationCallRequest.h>
#include <aws/chime-sdk-voice/model/UpdateSipRuleRequest.h>
#include <aws/chime-sdk-voice/model/UpdateVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/UpdateVoiceConnectorGroupRequest.h>
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

AssociatePhoneNumbersWithVoiceConnectorOutcomeCallable ChimeSDKVoiceClient::AssociatePhoneNumbersWithVoiceConnectorCallable(const AssociatePhoneNumbersWithVoiceConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePhoneNumbersWithVoiceConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePhoneNumbersWithVoiceConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::AssociatePhoneNumbersWithVoiceConnectorAsync(const AssociatePhoneNumbersWithVoiceConnectorRequest& request, const AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociatePhoneNumbersWithVoiceConnector(request), context);
    } );
}

AssociatePhoneNumbersWithVoiceConnectorGroupOutcome ChimeSDKVoiceClient::AssociatePhoneNumbersWithVoiceConnectorGroup(const AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request) const
{
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

AssociatePhoneNumbersWithVoiceConnectorGroupOutcomeCallable ChimeSDKVoiceClient::AssociatePhoneNumbersWithVoiceConnectorGroupCallable(const AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePhoneNumbersWithVoiceConnectorGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePhoneNumbersWithVoiceConnectorGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::AssociatePhoneNumbersWithVoiceConnectorGroupAsync(const AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request, const AssociatePhoneNumbersWithVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociatePhoneNumbersWithVoiceConnectorGroup(request), context);
    } );
}

BatchDeletePhoneNumberOutcome ChimeSDKVoiceClient::BatchDeletePhoneNumber(const BatchDeletePhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeletePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeletePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
  ss.str("?operation=batch-delete");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return BatchDeletePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeletePhoneNumberOutcomeCallable ChimeSDKVoiceClient::BatchDeletePhoneNumberCallable(const BatchDeletePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeletePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeletePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::BatchDeletePhoneNumberAsync(const BatchDeletePhoneNumberRequest& request, const BatchDeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDeletePhoneNumber(request), context);
    } );
}

BatchUpdatePhoneNumberOutcome ChimeSDKVoiceClient::BatchUpdatePhoneNumber(const BatchUpdatePhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUpdatePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpdatePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
  ss.str("?operation=batch-update");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return BatchUpdatePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchUpdatePhoneNumberOutcomeCallable ChimeSDKVoiceClient::BatchUpdatePhoneNumberCallable(const BatchUpdatePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdatePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdatePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::BatchUpdatePhoneNumberAsync(const BatchUpdatePhoneNumberRequest& request, const BatchUpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchUpdatePhoneNumber(request), context);
    } );
}

CreatePhoneNumberOrderOutcome ChimeSDKVoiceClient::CreatePhoneNumberOrder(const CreatePhoneNumberOrderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePhoneNumberOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePhoneNumberOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-orders");
  return CreatePhoneNumberOrderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePhoneNumberOrderOutcomeCallable ChimeSDKVoiceClient::CreatePhoneNumberOrderCallable(const CreatePhoneNumberOrderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePhoneNumberOrderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePhoneNumberOrder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::CreatePhoneNumberOrderAsync(const CreatePhoneNumberOrderRequest& request, const CreatePhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePhoneNumberOrder(request), context);
    } );
}

CreateProxySessionOutcome ChimeSDKVoiceClient::CreateProxySession(const CreateProxySessionRequest& request) const
{
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

CreateProxySessionOutcomeCallable ChimeSDKVoiceClient::CreateProxySessionCallable(const CreateProxySessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProxySessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProxySession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::CreateProxySessionAsync(const CreateProxySessionRequest& request, const CreateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProxySession(request), context);
    } );
}

CreateSipMediaApplicationOutcome ChimeSDKVoiceClient::CreateSipMediaApplication(const CreateSipMediaApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications");
  return CreateSipMediaApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSipMediaApplicationOutcomeCallable ChimeSDKVoiceClient::CreateSipMediaApplicationCallable(const CreateSipMediaApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSipMediaApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSipMediaApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::CreateSipMediaApplicationAsync(const CreateSipMediaApplicationRequest& request, const CreateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSipMediaApplication(request), context);
    } );
}

CreateSipMediaApplicationCallOutcome ChimeSDKVoiceClient::CreateSipMediaApplicationCall(const CreateSipMediaApplicationCallRequest& request) const
{
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

CreateSipMediaApplicationCallOutcomeCallable ChimeSDKVoiceClient::CreateSipMediaApplicationCallCallable(const CreateSipMediaApplicationCallRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSipMediaApplicationCallOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSipMediaApplicationCall(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::CreateSipMediaApplicationCallAsync(const CreateSipMediaApplicationCallRequest& request, const CreateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSipMediaApplicationCall(request), context);
    } );
}

CreateSipRuleOutcome ChimeSDKVoiceClient::CreateSipRule(const CreateSipRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules");
  return CreateSipRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSipRuleOutcomeCallable ChimeSDKVoiceClient::CreateSipRuleCallable(const CreateSipRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSipRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSipRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::CreateSipRuleAsync(const CreateSipRuleRequest& request, const CreateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSipRule(request), context);
    } );
}

CreateVoiceConnectorOutcome ChimeSDKVoiceClient::CreateVoiceConnector(const CreateVoiceConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors");
  return CreateVoiceConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVoiceConnectorOutcomeCallable ChimeSDKVoiceClient::CreateVoiceConnectorCallable(const CreateVoiceConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVoiceConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVoiceConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::CreateVoiceConnectorAsync(const CreateVoiceConnectorRequest& request, const CreateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVoiceConnector(request), context);
    } );
}

CreateVoiceConnectorGroupOutcome ChimeSDKVoiceClient::CreateVoiceConnectorGroup(const CreateVoiceConnectorGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups");
  return CreateVoiceConnectorGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVoiceConnectorGroupOutcomeCallable ChimeSDKVoiceClient::CreateVoiceConnectorGroupCallable(const CreateVoiceConnectorGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVoiceConnectorGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVoiceConnectorGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::CreateVoiceConnectorGroupAsync(const CreateVoiceConnectorGroupRequest& request, const CreateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVoiceConnectorGroup(request), context);
    } );
}

DeletePhoneNumberOutcome ChimeSDKVoiceClient::DeletePhoneNumber(const DeletePhoneNumberRequest& request) const
{
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

DeletePhoneNumberOutcomeCallable ChimeSDKVoiceClient::DeletePhoneNumberCallable(const DeletePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::DeletePhoneNumberAsync(const DeletePhoneNumberRequest& request, const DeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePhoneNumber(request), context);
    } );
}

DeleteProxySessionOutcome ChimeSDKVoiceClient::DeleteProxySession(const DeleteProxySessionRequest& request) const
{
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

DeleteProxySessionOutcomeCallable ChimeSDKVoiceClient::DeleteProxySessionCallable(const DeleteProxySessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProxySessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProxySession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::DeleteProxySessionAsync(const DeleteProxySessionRequest& request, const DeleteProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProxySession(request), context);
    } );
}

DeleteSipMediaApplicationOutcome ChimeSDKVoiceClient::DeleteSipMediaApplication(const DeleteSipMediaApplicationRequest& request) const
{
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

DeleteSipMediaApplicationOutcomeCallable ChimeSDKVoiceClient::DeleteSipMediaApplicationCallable(const DeleteSipMediaApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSipMediaApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSipMediaApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::DeleteSipMediaApplicationAsync(const DeleteSipMediaApplicationRequest& request, const DeleteSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSipMediaApplication(request), context);
    } );
}

DeleteSipRuleOutcome ChimeSDKVoiceClient::DeleteSipRule(const DeleteSipRuleRequest& request) const
{
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

DeleteSipRuleOutcomeCallable ChimeSDKVoiceClient::DeleteSipRuleCallable(const DeleteSipRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSipRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSipRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::DeleteSipRuleAsync(const DeleteSipRuleRequest& request, const DeleteSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSipRule(request), context);
    } );
}

DeleteVoiceConnectorOutcome ChimeSDKVoiceClient::DeleteVoiceConnector(const DeleteVoiceConnectorRequest& request) const
{
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

DeleteVoiceConnectorOutcomeCallable ChimeSDKVoiceClient::DeleteVoiceConnectorCallable(const DeleteVoiceConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::DeleteVoiceConnectorAsync(const DeleteVoiceConnectorRequest& request, const DeleteVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnector(request), context);
    } );
}

DeleteVoiceConnectorEmergencyCallingConfigurationOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorEmergencyCallingConfiguration(const DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
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

DeleteVoiceConnectorEmergencyCallingConfigurationOutcomeCallable ChimeSDKVoiceClient::DeleteVoiceConnectorEmergencyCallingConfigurationCallable(const DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorEmergencyCallingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnectorEmergencyCallingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::DeleteVoiceConnectorEmergencyCallingConfigurationAsync(const DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request, const DeleteVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnectorEmergencyCallingConfiguration(request), context);
    } );
}

DeleteVoiceConnectorGroupOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorGroup(const DeleteVoiceConnectorGroupRequest& request) const
{
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

DeleteVoiceConnectorGroupOutcomeCallable ChimeSDKVoiceClient::DeleteVoiceConnectorGroupCallable(const DeleteVoiceConnectorGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnectorGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::DeleteVoiceConnectorGroupAsync(const DeleteVoiceConnectorGroupRequest& request, const DeleteVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnectorGroup(request), context);
    } );
}

DeleteVoiceConnectorOriginationOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorOrigination(const DeleteVoiceConnectorOriginationRequest& request) const
{
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

DeleteVoiceConnectorOriginationOutcomeCallable ChimeSDKVoiceClient::DeleteVoiceConnectorOriginationCallable(const DeleteVoiceConnectorOriginationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorOriginationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnectorOrigination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::DeleteVoiceConnectorOriginationAsync(const DeleteVoiceConnectorOriginationRequest& request, const DeleteVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnectorOrigination(request), context);
    } );
}

DeleteVoiceConnectorProxyOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorProxy(const DeleteVoiceConnectorProxyRequest& request) const
{
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

DeleteVoiceConnectorProxyOutcomeCallable ChimeSDKVoiceClient::DeleteVoiceConnectorProxyCallable(const DeleteVoiceConnectorProxyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorProxyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnectorProxy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::DeleteVoiceConnectorProxyAsync(const DeleteVoiceConnectorProxyRequest& request, const DeleteVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnectorProxy(request), context);
    } );
}

DeleteVoiceConnectorStreamingConfigurationOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorStreamingConfiguration(const DeleteVoiceConnectorStreamingConfigurationRequest& request) const
{
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

DeleteVoiceConnectorStreamingConfigurationOutcomeCallable ChimeSDKVoiceClient::DeleteVoiceConnectorStreamingConfigurationCallable(const DeleteVoiceConnectorStreamingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorStreamingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnectorStreamingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::DeleteVoiceConnectorStreamingConfigurationAsync(const DeleteVoiceConnectorStreamingConfigurationRequest& request, const DeleteVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnectorStreamingConfiguration(request), context);
    } );
}

DeleteVoiceConnectorTerminationOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorTermination(const DeleteVoiceConnectorTerminationRequest& request) const
{
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

DeleteVoiceConnectorTerminationOutcomeCallable ChimeSDKVoiceClient::DeleteVoiceConnectorTerminationCallable(const DeleteVoiceConnectorTerminationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorTerminationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnectorTermination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::DeleteVoiceConnectorTerminationAsync(const DeleteVoiceConnectorTerminationRequest& request, const DeleteVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnectorTermination(request), context);
    } );
}

DeleteVoiceConnectorTerminationCredentialsOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorTerminationCredentials(const DeleteVoiceConnectorTerminationCredentialsRequest& request) const
{
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

DeleteVoiceConnectorTerminationCredentialsOutcomeCallable ChimeSDKVoiceClient::DeleteVoiceConnectorTerminationCredentialsCallable(const DeleteVoiceConnectorTerminationCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorTerminationCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnectorTerminationCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::DeleteVoiceConnectorTerminationCredentialsAsync(const DeleteVoiceConnectorTerminationCredentialsRequest& request, const DeleteVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnectorTerminationCredentials(request), context);
    } );
}

DisassociatePhoneNumbersFromVoiceConnectorOutcome ChimeSDKVoiceClient::DisassociatePhoneNumbersFromVoiceConnector(const DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const
{
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

DisassociatePhoneNumbersFromVoiceConnectorOutcomeCallable ChimeSDKVoiceClient::DisassociatePhoneNumbersFromVoiceConnectorCallable(const DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociatePhoneNumbersFromVoiceConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociatePhoneNumbersFromVoiceConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::DisassociatePhoneNumbersFromVoiceConnectorAsync(const DisassociatePhoneNumbersFromVoiceConnectorRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociatePhoneNumbersFromVoiceConnector(request), context);
    } );
}

DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome ChimeSDKVoiceClient::DisassociatePhoneNumbersFromVoiceConnectorGroup(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request) const
{
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

DisassociatePhoneNumbersFromVoiceConnectorGroupOutcomeCallable ChimeSDKVoiceClient::DisassociatePhoneNumbersFromVoiceConnectorGroupCallable(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociatePhoneNumbersFromVoiceConnectorGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::DisassociatePhoneNumbersFromVoiceConnectorGroupAsync(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociatePhoneNumbersFromVoiceConnectorGroup(request), context);
    } );
}

GetGlobalSettingsOutcome ChimeSDKVoiceClient::GetGlobalSettings() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return GetGlobalSettingsOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "GetGlobalSettings"));
}

GetGlobalSettingsOutcomeCallable ChimeSDKVoiceClient::GetGlobalSettingsCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGlobalSettingsOutcome() > >(ALLOCATION_TAG, [this](){ return this->GetGlobalSettings(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetGlobalSettingsAsync(const GetGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, GetGlobalSettings(), context);
    } );
}

GetPhoneNumberOutcome ChimeSDKVoiceClient::GetPhoneNumber(const GetPhoneNumberRequest& request) const
{
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

GetPhoneNumberOutcomeCallable ChimeSDKVoiceClient::GetPhoneNumberCallable(const GetPhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetPhoneNumberAsync(const GetPhoneNumberRequest& request, const GetPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPhoneNumber(request), context);
    } );
}

GetPhoneNumberOrderOutcome ChimeSDKVoiceClient::GetPhoneNumberOrder(const GetPhoneNumberOrderRequest& request) const
{
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

GetPhoneNumberOrderOutcomeCallable ChimeSDKVoiceClient::GetPhoneNumberOrderCallable(const GetPhoneNumberOrderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPhoneNumberOrderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPhoneNumberOrder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetPhoneNumberOrderAsync(const GetPhoneNumberOrderRequest& request, const GetPhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPhoneNumberOrder(request), context);
    } );
}

GetPhoneNumberSettingsOutcome ChimeSDKVoiceClient::GetPhoneNumberSettings() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPhoneNumberSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPhoneNumberSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings/phone-number");
  return GetPhoneNumberSettingsOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "GetPhoneNumberSettings"));
}

GetPhoneNumberSettingsOutcomeCallable ChimeSDKVoiceClient::GetPhoneNumberSettingsCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPhoneNumberSettingsOutcome() > >(ALLOCATION_TAG, [this](){ return this->GetPhoneNumberSettings(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetPhoneNumberSettingsAsync(const GetPhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, GetPhoneNumberSettings(), context);
    } );
}

GetProxySessionOutcome ChimeSDKVoiceClient::GetProxySession(const GetProxySessionRequest& request) const
{
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

GetProxySessionOutcomeCallable ChimeSDKVoiceClient::GetProxySessionCallable(const GetProxySessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProxySessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProxySession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetProxySessionAsync(const GetProxySessionRequest& request, const GetProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetProxySession(request), context);
    } );
}

GetSipMediaApplicationOutcome ChimeSDKVoiceClient::GetSipMediaApplication(const GetSipMediaApplicationRequest& request) const
{
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

GetSipMediaApplicationOutcomeCallable ChimeSDKVoiceClient::GetSipMediaApplicationCallable(const GetSipMediaApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSipMediaApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSipMediaApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetSipMediaApplicationAsync(const GetSipMediaApplicationRequest& request, const GetSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSipMediaApplication(request), context);
    } );
}

GetSipMediaApplicationAlexaSkillConfigurationOutcome ChimeSDKVoiceClient::GetSipMediaApplicationAlexaSkillConfiguration(const GetSipMediaApplicationAlexaSkillConfigurationRequest& request) const
{
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

GetSipMediaApplicationAlexaSkillConfigurationOutcomeCallable ChimeSDKVoiceClient::GetSipMediaApplicationAlexaSkillConfigurationCallable(const GetSipMediaApplicationAlexaSkillConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSipMediaApplicationAlexaSkillConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSipMediaApplicationAlexaSkillConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetSipMediaApplicationAlexaSkillConfigurationAsync(const GetSipMediaApplicationAlexaSkillConfigurationRequest& request, const GetSipMediaApplicationAlexaSkillConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSipMediaApplicationAlexaSkillConfiguration(request), context);
    } );
}

GetSipMediaApplicationLoggingConfigurationOutcome ChimeSDKVoiceClient::GetSipMediaApplicationLoggingConfiguration(const GetSipMediaApplicationLoggingConfigurationRequest& request) const
{
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

GetSipMediaApplicationLoggingConfigurationOutcomeCallable ChimeSDKVoiceClient::GetSipMediaApplicationLoggingConfigurationCallable(const GetSipMediaApplicationLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSipMediaApplicationLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSipMediaApplicationLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetSipMediaApplicationLoggingConfigurationAsync(const GetSipMediaApplicationLoggingConfigurationRequest& request, const GetSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSipMediaApplicationLoggingConfiguration(request), context);
    } );
}

GetSipRuleOutcome ChimeSDKVoiceClient::GetSipRule(const GetSipRuleRequest& request) const
{
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

GetSipRuleOutcomeCallable ChimeSDKVoiceClient::GetSipRuleCallable(const GetSipRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSipRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSipRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetSipRuleAsync(const GetSipRuleRequest& request, const GetSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSipRule(request), context);
    } );
}

GetVoiceConnectorOutcome ChimeSDKVoiceClient::GetVoiceConnector(const GetVoiceConnectorRequest& request) const
{
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

GetVoiceConnectorOutcomeCallable ChimeSDKVoiceClient::GetVoiceConnectorCallable(const GetVoiceConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetVoiceConnectorAsync(const GetVoiceConnectorRequest& request, const GetVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnector(request), context);
    } );
}

GetVoiceConnectorEmergencyCallingConfigurationOutcome ChimeSDKVoiceClient::GetVoiceConnectorEmergencyCallingConfiguration(const GetVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
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

GetVoiceConnectorEmergencyCallingConfigurationOutcomeCallable ChimeSDKVoiceClient::GetVoiceConnectorEmergencyCallingConfigurationCallable(const GetVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorEmergencyCallingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorEmergencyCallingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetVoiceConnectorEmergencyCallingConfigurationAsync(const GetVoiceConnectorEmergencyCallingConfigurationRequest& request, const GetVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorEmergencyCallingConfiguration(request), context);
    } );
}

GetVoiceConnectorGroupOutcome ChimeSDKVoiceClient::GetVoiceConnectorGroup(const GetVoiceConnectorGroupRequest& request) const
{
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

GetVoiceConnectorGroupOutcomeCallable ChimeSDKVoiceClient::GetVoiceConnectorGroupCallable(const GetVoiceConnectorGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetVoiceConnectorGroupAsync(const GetVoiceConnectorGroupRequest& request, const GetVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorGroup(request), context);
    } );
}

GetVoiceConnectorLoggingConfigurationOutcome ChimeSDKVoiceClient::GetVoiceConnectorLoggingConfiguration(const GetVoiceConnectorLoggingConfigurationRequest& request) const
{
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

GetVoiceConnectorLoggingConfigurationOutcomeCallable ChimeSDKVoiceClient::GetVoiceConnectorLoggingConfigurationCallable(const GetVoiceConnectorLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetVoiceConnectorLoggingConfigurationAsync(const GetVoiceConnectorLoggingConfigurationRequest& request, const GetVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorLoggingConfiguration(request), context);
    } );
}

GetVoiceConnectorOriginationOutcome ChimeSDKVoiceClient::GetVoiceConnectorOrigination(const GetVoiceConnectorOriginationRequest& request) const
{
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

GetVoiceConnectorOriginationOutcomeCallable ChimeSDKVoiceClient::GetVoiceConnectorOriginationCallable(const GetVoiceConnectorOriginationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorOriginationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorOrigination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetVoiceConnectorOriginationAsync(const GetVoiceConnectorOriginationRequest& request, const GetVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorOrigination(request), context);
    } );
}

GetVoiceConnectorProxyOutcome ChimeSDKVoiceClient::GetVoiceConnectorProxy(const GetVoiceConnectorProxyRequest& request) const
{
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

GetVoiceConnectorProxyOutcomeCallable ChimeSDKVoiceClient::GetVoiceConnectorProxyCallable(const GetVoiceConnectorProxyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorProxyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorProxy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetVoiceConnectorProxyAsync(const GetVoiceConnectorProxyRequest& request, const GetVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorProxy(request), context);
    } );
}

GetVoiceConnectorStreamingConfigurationOutcome ChimeSDKVoiceClient::GetVoiceConnectorStreamingConfiguration(const GetVoiceConnectorStreamingConfigurationRequest& request) const
{
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

GetVoiceConnectorStreamingConfigurationOutcomeCallable ChimeSDKVoiceClient::GetVoiceConnectorStreamingConfigurationCallable(const GetVoiceConnectorStreamingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorStreamingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorStreamingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetVoiceConnectorStreamingConfigurationAsync(const GetVoiceConnectorStreamingConfigurationRequest& request, const GetVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorStreamingConfiguration(request), context);
    } );
}

GetVoiceConnectorTerminationOutcome ChimeSDKVoiceClient::GetVoiceConnectorTermination(const GetVoiceConnectorTerminationRequest& request) const
{
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

GetVoiceConnectorTerminationOutcomeCallable ChimeSDKVoiceClient::GetVoiceConnectorTerminationCallable(const GetVoiceConnectorTerminationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorTerminationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorTermination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetVoiceConnectorTerminationAsync(const GetVoiceConnectorTerminationRequest& request, const GetVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorTermination(request), context);
    } );
}

GetVoiceConnectorTerminationHealthOutcome ChimeSDKVoiceClient::GetVoiceConnectorTerminationHealth(const GetVoiceConnectorTerminationHealthRequest& request) const
{
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

GetVoiceConnectorTerminationHealthOutcomeCallable ChimeSDKVoiceClient::GetVoiceConnectorTerminationHealthCallable(const GetVoiceConnectorTerminationHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorTerminationHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorTerminationHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::GetVoiceConnectorTerminationHealthAsync(const GetVoiceConnectorTerminationHealthRequest& request, const GetVoiceConnectorTerminationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorTerminationHealth(request), context);
    } );
}

ListAvailableVoiceConnectorRegionsOutcome ChimeSDKVoiceClient::ListAvailableVoiceConnectorRegions() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAvailableVoiceConnectorRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAvailableVoiceConnectorRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-regions");
  return ListAvailableVoiceConnectorRegionsOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "ListAvailableVoiceConnectorRegions"));
}

ListAvailableVoiceConnectorRegionsOutcomeCallable ChimeSDKVoiceClient::ListAvailableVoiceConnectorRegionsCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAvailableVoiceConnectorRegionsOutcome() > >(ALLOCATION_TAG, [this](){ return this->ListAvailableVoiceConnectorRegions(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::ListAvailableVoiceConnectorRegionsAsync(const ListAvailableVoiceConnectorRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, ListAvailableVoiceConnectorRegions(), context);
    } );
}

ListPhoneNumberOrdersOutcome ChimeSDKVoiceClient::ListPhoneNumberOrders(const ListPhoneNumberOrdersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPhoneNumberOrders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPhoneNumberOrders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-orders");
  return ListPhoneNumberOrdersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPhoneNumberOrdersOutcomeCallable ChimeSDKVoiceClient::ListPhoneNumberOrdersCallable(const ListPhoneNumberOrdersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPhoneNumberOrdersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPhoneNumberOrders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::ListPhoneNumberOrdersAsync(const ListPhoneNumberOrdersRequest& request, const ListPhoneNumberOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPhoneNumberOrders(request), context);
    } );
}

ListPhoneNumbersOutcome ChimeSDKVoiceClient::ListPhoneNumbers(const ListPhoneNumbersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
  return ListPhoneNumbersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPhoneNumbersOutcomeCallable ChimeSDKVoiceClient::ListPhoneNumbersCallable(const ListPhoneNumbersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPhoneNumbersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPhoneNumbers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::ListPhoneNumbersAsync(const ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPhoneNumbers(request), context);
    } );
}

ListProxySessionsOutcome ChimeSDKVoiceClient::ListProxySessions(const ListProxySessionsRequest& request) const
{
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

ListProxySessionsOutcomeCallable ChimeSDKVoiceClient::ListProxySessionsCallable(const ListProxySessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProxySessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProxySessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::ListProxySessionsAsync(const ListProxySessionsRequest& request, const ListProxySessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProxySessions(request), context);
    } );
}

ListSipMediaApplicationsOutcome ChimeSDKVoiceClient::ListSipMediaApplications(const ListSipMediaApplicationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSipMediaApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSipMediaApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications");
  return ListSipMediaApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSipMediaApplicationsOutcomeCallable ChimeSDKVoiceClient::ListSipMediaApplicationsCallable(const ListSipMediaApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSipMediaApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSipMediaApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::ListSipMediaApplicationsAsync(const ListSipMediaApplicationsRequest& request, const ListSipMediaApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSipMediaApplications(request), context);
    } );
}

ListSipRulesOutcome ChimeSDKVoiceClient::ListSipRules(const ListSipRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSipRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSipRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules");
  return ListSipRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSipRulesOutcomeCallable ChimeSDKVoiceClient::ListSipRulesCallable(const ListSipRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSipRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSipRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::ListSipRulesAsync(const ListSipRulesRequest& request, const ListSipRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSipRules(request), context);
    } );
}

ListSupportedPhoneNumberCountriesOutcome ChimeSDKVoiceClient::ListSupportedPhoneNumberCountries(const ListSupportedPhoneNumberCountriesRequest& request) const
{
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

ListSupportedPhoneNumberCountriesOutcomeCallable ChimeSDKVoiceClient::ListSupportedPhoneNumberCountriesCallable(const ListSupportedPhoneNumberCountriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSupportedPhoneNumberCountriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSupportedPhoneNumberCountries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::ListSupportedPhoneNumberCountriesAsync(const ListSupportedPhoneNumberCountriesRequest& request, const ListSupportedPhoneNumberCountriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSupportedPhoneNumberCountries(request), context);
    } );
}

ListVoiceConnectorGroupsOutcome ChimeSDKVoiceClient::ListVoiceConnectorGroups(const ListVoiceConnectorGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVoiceConnectorGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVoiceConnectorGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups");
  return ListVoiceConnectorGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVoiceConnectorGroupsOutcomeCallable ChimeSDKVoiceClient::ListVoiceConnectorGroupsCallable(const ListVoiceConnectorGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVoiceConnectorGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVoiceConnectorGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::ListVoiceConnectorGroupsAsync(const ListVoiceConnectorGroupsRequest& request, const ListVoiceConnectorGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVoiceConnectorGroups(request), context);
    } );
}

ListVoiceConnectorTerminationCredentialsOutcome ChimeSDKVoiceClient::ListVoiceConnectorTerminationCredentials(const ListVoiceConnectorTerminationCredentialsRequest& request) const
{
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

ListVoiceConnectorTerminationCredentialsOutcomeCallable ChimeSDKVoiceClient::ListVoiceConnectorTerminationCredentialsCallable(const ListVoiceConnectorTerminationCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVoiceConnectorTerminationCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVoiceConnectorTerminationCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::ListVoiceConnectorTerminationCredentialsAsync(const ListVoiceConnectorTerminationCredentialsRequest& request, const ListVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVoiceConnectorTerminationCredentials(request), context);
    } );
}

ListVoiceConnectorsOutcome ChimeSDKVoiceClient::ListVoiceConnectors(const ListVoiceConnectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVoiceConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVoiceConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors");
  return ListVoiceConnectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVoiceConnectorsOutcomeCallable ChimeSDKVoiceClient::ListVoiceConnectorsCallable(const ListVoiceConnectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVoiceConnectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVoiceConnectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::ListVoiceConnectorsAsync(const ListVoiceConnectorsRequest& request, const ListVoiceConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVoiceConnectors(request), context);
    } );
}

PutSipMediaApplicationAlexaSkillConfigurationOutcome ChimeSDKVoiceClient::PutSipMediaApplicationAlexaSkillConfiguration(const PutSipMediaApplicationAlexaSkillConfigurationRequest& request) const
{
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

PutSipMediaApplicationAlexaSkillConfigurationOutcomeCallable ChimeSDKVoiceClient::PutSipMediaApplicationAlexaSkillConfigurationCallable(const PutSipMediaApplicationAlexaSkillConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSipMediaApplicationAlexaSkillConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSipMediaApplicationAlexaSkillConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::PutSipMediaApplicationAlexaSkillConfigurationAsync(const PutSipMediaApplicationAlexaSkillConfigurationRequest& request, const PutSipMediaApplicationAlexaSkillConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutSipMediaApplicationAlexaSkillConfiguration(request), context);
    } );
}

PutSipMediaApplicationLoggingConfigurationOutcome ChimeSDKVoiceClient::PutSipMediaApplicationLoggingConfiguration(const PutSipMediaApplicationLoggingConfigurationRequest& request) const
{
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

PutSipMediaApplicationLoggingConfigurationOutcomeCallable ChimeSDKVoiceClient::PutSipMediaApplicationLoggingConfigurationCallable(const PutSipMediaApplicationLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSipMediaApplicationLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSipMediaApplicationLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::PutSipMediaApplicationLoggingConfigurationAsync(const PutSipMediaApplicationLoggingConfigurationRequest& request, const PutSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutSipMediaApplicationLoggingConfiguration(request), context);
    } );
}

PutVoiceConnectorEmergencyCallingConfigurationOutcome ChimeSDKVoiceClient::PutVoiceConnectorEmergencyCallingConfiguration(const PutVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
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

PutVoiceConnectorEmergencyCallingConfigurationOutcomeCallable ChimeSDKVoiceClient::PutVoiceConnectorEmergencyCallingConfigurationCallable(const PutVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVoiceConnectorEmergencyCallingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVoiceConnectorEmergencyCallingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::PutVoiceConnectorEmergencyCallingConfigurationAsync(const PutVoiceConnectorEmergencyCallingConfigurationRequest& request, const PutVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVoiceConnectorEmergencyCallingConfiguration(request), context);
    } );
}

PutVoiceConnectorLoggingConfigurationOutcome ChimeSDKVoiceClient::PutVoiceConnectorLoggingConfiguration(const PutVoiceConnectorLoggingConfigurationRequest& request) const
{
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

PutVoiceConnectorLoggingConfigurationOutcomeCallable ChimeSDKVoiceClient::PutVoiceConnectorLoggingConfigurationCallable(const PutVoiceConnectorLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVoiceConnectorLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVoiceConnectorLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::PutVoiceConnectorLoggingConfigurationAsync(const PutVoiceConnectorLoggingConfigurationRequest& request, const PutVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVoiceConnectorLoggingConfiguration(request), context);
    } );
}

PutVoiceConnectorOriginationOutcome ChimeSDKVoiceClient::PutVoiceConnectorOrigination(const PutVoiceConnectorOriginationRequest& request) const
{
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

PutVoiceConnectorOriginationOutcomeCallable ChimeSDKVoiceClient::PutVoiceConnectorOriginationCallable(const PutVoiceConnectorOriginationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVoiceConnectorOriginationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVoiceConnectorOrigination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::PutVoiceConnectorOriginationAsync(const PutVoiceConnectorOriginationRequest& request, const PutVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVoiceConnectorOrigination(request), context);
    } );
}

PutVoiceConnectorProxyOutcome ChimeSDKVoiceClient::PutVoiceConnectorProxy(const PutVoiceConnectorProxyRequest& request) const
{
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

PutVoiceConnectorProxyOutcomeCallable ChimeSDKVoiceClient::PutVoiceConnectorProxyCallable(const PutVoiceConnectorProxyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVoiceConnectorProxyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVoiceConnectorProxy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::PutVoiceConnectorProxyAsync(const PutVoiceConnectorProxyRequest& request, const PutVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVoiceConnectorProxy(request), context);
    } );
}

PutVoiceConnectorStreamingConfigurationOutcome ChimeSDKVoiceClient::PutVoiceConnectorStreamingConfiguration(const PutVoiceConnectorStreamingConfigurationRequest& request) const
{
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

PutVoiceConnectorStreamingConfigurationOutcomeCallable ChimeSDKVoiceClient::PutVoiceConnectorStreamingConfigurationCallable(const PutVoiceConnectorStreamingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVoiceConnectorStreamingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVoiceConnectorStreamingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::PutVoiceConnectorStreamingConfigurationAsync(const PutVoiceConnectorStreamingConfigurationRequest& request, const PutVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVoiceConnectorStreamingConfiguration(request), context);
    } );
}

PutVoiceConnectorTerminationOutcome ChimeSDKVoiceClient::PutVoiceConnectorTermination(const PutVoiceConnectorTerminationRequest& request) const
{
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

PutVoiceConnectorTerminationOutcomeCallable ChimeSDKVoiceClient::PutVoiceConnectorTerminationCallable(const PutVoiceConnectorTerminationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVoiceConnectorTerminationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVoiceConnectorTermination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::PutVoiceConnectorTerminationAsync(const PutVoiceConnectorTerminationRequest& request, const PutVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVoiceConnectorTermination(request), context);
    } );
}

PutVoiceConnectorTerminationCredentialsOutcome ChimeSDKVoiceClient::PutVoiceConnectorTerminationCredentials(const PutVoiceConnectorTerminationCredentialsRequest& request) const
{
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

PutVoiceConnectorTerminationCredentialsOutcomeCallable ChimeSDKVoiceClient::PutVoiceConnectorTerminationCredentialsCallable(const PutVoiceConnectorTerminationCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVoiceConnectorTerminationCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVoiceConnectorTerminationCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::PutVoiceConnectorTerminationCredentialsAsync(const PutVoiceConnectorTerminationCredentialsRequest& request, const PutVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVoiceConnectorTerminationCredentials(request), context);
    } );
}

RestorePhoneNumberOutcome ChimeSDKVoiceClient::RestorePhoneNumber(const RestorePhoneNumberRequest& request) const
{
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

RestorePhoneNumberOutcomeCallable ChimeSDKVoiceClient::RestorePhoneNumberCallable(const RestorePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestorePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestorePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::RestorePhoneNumberAsync(const RestorePhoneNumberRequest& request, const RestorePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestorePhoneNumber(request), context);
    } );
}

SearchAvailablePhoneNumbersOutcome ChimeSDKVoiceClient::SearchAvailablePhoneNumbers(const SearchAvailablePhoneNumbersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchAvailablePhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchAvailablePhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/search");
  ss.str("?type=phone-numbers");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return SearchAvailablePhoneNumbersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

SearchAvailablePhoneNumbersOutcomeCallable ChimeSDKVoiceClient::SearchAvailablePhoneNumbersCallable(const SearchAvailablePhoneNumbersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchAvailablePhoneNumbersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchAvailablePhoneNumbers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::SearchAvailablePhoneNumbersAsync(const SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchAvailablePhoneNumbers(request), context);
    } );
}

UpdateGlobalSettingsOutcome ChimeSDKVoiceClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return UpdateGlobalSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateGlobalSettingsOutcomeCallable ChimeSDKVoiceClient::UpdateGlobalSettingsCallable(const UpdateGlobalSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGlobalSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGlobalSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::UpdateGlobalSettingsAsync(const UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateGlobalSettings(request), context);
    } );
}

UpdatePhoneNumberOutcome ChimeSDKVoiceClient::UpdatePhoneNumber(const UpdatePhoneNumberRequest& request) const
{
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

UpdatePhoneNumberOutcomeCallable ChimeSDKVoiceClient::UpdatePhoneNumberCallable(const UpdatePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::UpdatePhoneNumberAsync(const UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePhoneNumber(request), context);
    } );
}

UpdatePhoneNumberSettingsOutcome ChimeSDKVoiceClient::UpdatePhoneNumberSettings(const UpdatePhoneNumberSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePhoneNumberSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePhoneNumberSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings/phone-number");
  return UpdatePhoneNumberSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePhoneNumberSettingsOutcomeCallable ChimeSDKVoiceClient::UpdatePhoneNumberSettingsCallable(const UpdatePhoneNumberSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePhoneNumberSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePhoneNumberSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::UpdatePhoneNumberSettingsAsync(const UpdatePhoneNumberSettingsRequest& request, const UpdatePhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePhoneNumberSettings(request), context);
    } );
}

UpdateProxySessionOutcome ChimeSDKVoiceClient::UpdateProxySession(const UpdateProxySessionRequest& request) const
{
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

UpdateProxySessionOutcomeCallable ChimeSDKVoiceClient::UpdateProxySessionCallable(const UpdateProxySessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProxySessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProxySession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::UpdateProxySessionAsync(const UpdateProxySessionRequest& request, const UpdateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateProxySession(request), context);
    } );
}

UpdateSipMediaApplicationOutcome ChimeSDKVoiceClient::UpdateSipMediaApplication(const UpdateSipMediaApplicationRequest& request) const
{
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

UpdateSipMediaApplicationOutcomeCallable ChimeSDKVoiceClient::UpdateSipMediaApplicationCallable(const UpdateSipMediaApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSipMediaApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSipMediaApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::UpdateSipMediaApplicationAsync(const UpdateSipMediaApplicationRequest& request, const UpdateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSipMediaApplication(request), context);
    } );
}

UpdateSipMediaApplicationCallOutcome ChimeSDKVoiceClient::UpdateSipMediaApplicationCall(const UpdateSipMediaApplicationCallRequest& request) const
{
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

UpdateSipMediaApplicationCallOutcomeCallable ChimeSDKVoiceClient::UpdateSipMediaApplicationCallCallable(const UpdateSipMediaApplicationCallRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSipMediaApplicationCallOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSipMediaApplicationCall(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::UpdateSipMediaApplicationCallAsync(const UpdateSipMediaApplicationCallRequest& request, const UpdateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSipMediaApplicationCall(request), context);
    } );
}

UpdateSipRuleOutcome ChimeSDKVoiceClient::UpdateSipRule(const UpdateSipRuleRequest& request) const
{
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

UpdateSipRuleOutcomeCallable ChimeSDKVoiceClient::UpdateSipRuleCallable(const UpdateSipRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSipRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSipRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::UpdateSipRuleAsync(const UpdateSipRuleRequest& request, const UpdateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSipRule(request), context);
    } );
}

UpdateVoiceConnectorOutcome ChimeSDKVoiceClient::UpdateVoiceConnector(const UpdateVoiceConnectorRequest& request) const
{
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

UpdateVoiceConnectorOutcomeCallable ChimeSDKVoiceClient::UpdateVoiceConnectorCallable(const UpdateVoiceConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVoiceConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVoiceConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::UpdateVoiceConnectorAsync(const UpdateVoiceConnectorRequest& request, const UpdateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVoiceConnector(request), context);
    } );
}

UpdateVoiceConnectorGroupOutcome ChimeSDKVoiceClient::UpdateVoiceConnectorGroup(const UpdateVoiceConnectorGroupRequest& request) const
{
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

UpdateVoiceConnectorGroupOutcomeCallable ChimeSDKVoiceClient::UpdateVoiceConnectorGroupCallable(const UpdateVoiceConnectorGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVoiceConnectorGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVoiceConnectorGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::UpdateVoiceConnectorGroupAsync(const UpdateVoiceConnectorGroupRequest& request, const UpdateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVoiceConnectorGroup(request), context);
    } );
}

ValidateE911AddressOutcome ChimeSDKVoiceClient::ValidateE911Address(const ValidateE911AddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidateE911Address, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ValidateE911Address, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/emergency-calling/address");
  return ValidateE911AddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ValidateE911AddressOutcomeCallable ChimeSDKVoiceClient::ValidateE911AddressCallable(const ValidateE911AddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateE911AddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateE911Address(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKVoiceClient::ValidateE911AddressAsync(const ValidateE911AddressRequest& request, const ValidateE911AddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ValidateE911Address(request), context);
    } );
}

