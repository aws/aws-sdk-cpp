/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/ChimeSDKVoiceClient.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceEndpointProvider.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceErrorMarshaller.h>
#include <aws/chime-sdk-voice/model/AssociatePhoneNumbersWithVoiceConnectorGroupRequest.h>
#include <aws/chime-sdk-voice/model/AssociatePhoneNumbersWithVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/BatchDeletePhoneNumberRequest.h>
#include <aws/chime-sdk-voice/model/BatchUpdatePhoneNumberRequest.h>
#include <aws/chime-sdk-voice/model/CreatePhoneNumberOrderRequest.h>
#include <aws/chime-sdk-voice/model/CreateProxySessionRequest.h>
#include <aws/chime-sdk-voice/model/CreateSipMediaApplicationCallRequest.h>
#include <aws/chime-sdk-voice/model/CreateSipMediaApplicationRequest.h>
#include <aws/chime-sdk-voice/model/CreateSipRuleRequest.h>
#include <aws/chime-sdk-voice/model/CreateVoiceConnectorGroupRequest.h>
#include <aws/chime-sdk-voice/model/CreateVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/CreateVoiceProfileDomainRequest.h>
#include <aws/chime-sdk-voice/model/CreateVoiceProfileRequest.h>
#include <aws/chime-sdk-voice/model/DeletePhoneNumberRequest.h>
#include <aws/chime-sdk-voice/model/DeleteProxySessionRequest.h>
#include <aws/chime-sdk-voice/model/DeleteSipMediaApplicationRequest.h>
#include <aws/chime-sdk-voice/model/DeleteSipRuleRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorEmergencyCallingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorExternalSystemsConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorGroupRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorOriginationRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorProxyRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorStreamingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorTerminationCredentialsRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorTerminationRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceProfileDomainRequest.h>
#include <aws/chime-sdk-voice/model/DeleteVoiceProfileRequest.h>
#include <aws/chime-sdk-voice/model/DisassociatePhoneNumbersFromVoiceConnectorGroupRequest.h>
#include <aws/chime-sdk-voice/model/DisassociatePhoneNumbersFromVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/GetGlobalSettingsRequest.h>
#include <aws/chime-sdk-voice/model/GetPhoneNumberOrderRequest.h>
#include <aws/chime-sdk-voice/model/GetPhoneNumberRequest.h>
#include <aws/chime-sdk-voice/model/GetPhoneNumberSettingsRequest.h>
#include <aws/chime-sdk-voice/model/GetProxySessionRequest.h>
#include <aws/chime-sdk-voice/model/GetSipMediaApplicationLoggingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetSipMediaApplicationRequest.h>
#include <aws/chime-sdk-voice/model/GetSipRuleRequest.h>
#include <aws/chime-sdk-voice/model/GetSpeakerSearchTaskRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorEmergencyCallingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorExternalSystemsConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorGroupRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorLoggingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorOriginationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorProxyRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorStreamingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorTerminationHealthRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceConnectorTerminationRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceProfileDomainRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceProfileRequest.h>
#include <aws/chime-sdk-voice/model/GetVoiceToneAnalysisTaskRequest.h>
#include <aws/chime-sdk-voice/model/ListAvailableVoiceConnectorRegionsRequest.h>
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
#include <aws/chime-sdk-voice/model/PutSipMediaApplicationLoggingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorEmergencyCallingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorExternalSystemsConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorLoggingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorOriginationRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorProxyRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorStreamingConfigurationRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorTerminationCredentialsRequest.h>
#include <aws/chime-sdk-voice/model/PutVoiceConnectorTerminationRequest.h>
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
#include <aws/chime-sdk-voice/model/UpdateSipMediaApplicationCallRequest.h>
#include <aws/chime-sdk-voice/model/UpdateSipMediaApplicationRequest.h>
#include <aws/chime-sdk-voice/model/UpdateSipRuleRequest.h>
#include <aws/chime-sdk-voice/model/UpdateVoiceConnectorGroupRequest.h>
#include <aws/chime-sdk-voice/model/UpdateVoiceConnectorRequest.h>
#include <aws/chime-sdk-voice/model/UpdateVoiceProfileDomainRequest.h>
#include <aws/chime-sdk-voice/model/UpdateVoiceProfileRequest.h>
#include <aws/chime-sdk-voice/model/ValidateE911AddressRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ChimeSDKVoice;
using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ChimeSDKVoice {
const char SERVICE_NAME[] = "chime";
const char ALLOCATION_TAG[] = "ChimeSDKVoiceClient";
}  // namespace ChimeSDKVoice
}  // namespace Aws
const char* ChimeSDKVoiceClient::GetServiceName() { return SERVICE_NAME; }
const char* ChimeSDKVoiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

ChimeSDKVoiceClient::ChimeSDKVoiceClient(const ChimeSDKVoice::ChimeSDKVoiceClientConfiguration& clientConfiguration,
                                         std::shared_ptr<ChimeSDKVoiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKVoiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ChimeSDKVoiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKVoiceClient::ChimeSDKVoiceClient(const AWSCredentials& credentials,
                                         std::shared_ptr<ChimeSDKVoiceEndpointProviderBase> endpointProvider,
                                         const ChimeSDKVoice::ChimeSDKVoiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKVoiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ChimeSDKVoiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKVoiceClient::ChimeSDKVoiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<ChimeSDKVoiceEndpointProviderBase> endpointProvider,
                                         const ChimeSDKVoice::ChimeSDKVoiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKVoiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ChimeSDKVoiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ChimeSDKVoiceClient::ChimeSDKVoiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKVoiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeSDKVoiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKVoiceClient::ChimeSDKVoiceClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKVoiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeSDKVoiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKVoiceClient::ChimeSDKVoiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKVoiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeSDKVoiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ChimeSDKVoiceClient::~ChimeSDKVoiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ChimeSDKVoiceEndpointProviderBase>& ChimeSDKVoiceClient::accessEndpointProvider() { return m_endpointProvider; }

void ChimeSDKVoiceClient::init(const ChimeSDKVoice::ChimeSDKVoiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("Chime SDK Voice");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "chime");
}

void ChimeSDKVoiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ChimeSDKVoiceClient::InvokeOperationOutcome ChimeSDKVoiceClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociatePhoneNumbersWithVoiceConnectorOutcome ChimeSDKVoiceClient::AssociatePhoneNumbersWithVoiceConnector(
    const AssociatePhoneNumbersWithVoiceConnectorRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumbersWithVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return AssociatePhoneNumbersWithVoiceConnectorOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    ss.str("?operation=associate-phone-numbers");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return AssociatePhoneNumbersWithVoiceConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociatePhoneNumbersWithVoiceConnectorGroupOutcome ChimeSDKVoiceClient::AssociatePhoneNumbersWithVoiceConnectorGroup(
    const AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request) const {
  if (!request.VoiceConnectorGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumbersWithVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return AssociatePhoneNumbersWithVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
    ss.str("?operation=associate-phone-numbers");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return AssociatePhoneNumbersWithVoiceConnectorGroupOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeletePhoneNumberOutcome ChimeSDKVoiceClient::BatchDeletePhoneNumber(const BatchDeletePhoneNumberRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
    ss.str("?operation=batch-delete");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return BatchDeletePhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdatePhoneNumberOutcome ChimeSDKVoiceClient::BatchUpdatePhoneNumber(const BatchUpdatePhoneNumberRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
    ss.str("?operation=batch-update");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return BatchUpdatePhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePhoneNumberOrderOutcome ChimeSDKVoiceClient::CreatePhoneNumberOrder(const CreatePhoneNumberOrderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-orders");
  };

  return CreatePhoneNumberOrderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProxySessionOutcome ChimeSDKVoiceClient::CreateProxySession(const CreateProxySessionRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProxySession", "Required field: VoiceConnectorId, is not set");
    return CreateProxySessionOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions");
  };

  return CreateProxySessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSipMediaApplicationOutcome ChimeSDKVoiceClient::CreateSipMediaApplication(const CreateSipMediaApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications");
  };

  return CreateSipMediaApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSipMediaApplicationCallOutcome ChimeSDKVoiceClient::CreateSipMediaApplicationCall(
    const CreateSipMediaApplicationCallRequest& request) const {
  if (!request.SipMediaApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSipMediaApplicationCall", "Required field: SipMediaApplicationId, is not set");
    return CreateSipMediaApplicationCallOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/calls");
  };

  return CreateSipMediaApplicationCallOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSipRuleOutcome ChimeSDKVoiceClient::CreateSipRule(const CreateSipRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules");
  };

  return CreateSipRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVoiceConnectorOutcome ChimeSDKVoiceClient::CreateVoiceConnector(const CreateVoiceConnectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors");
  };

  return CreateVoiceConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVoiceConnectorGroupOutcome ChimeSDKVoiceClient::CreateVoiceConnectorGroup(const CreateVoiceConnectorGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups");
  };

  return CreateVoiceConnectorGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVoiceProfileOutcome ChimeSDKVoiceClient::CreateVoiceProfile(const CreateVoiceProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profiles");
  };

  return CreateVoiceProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVoiceProfileDomainOutcome ChimeSDKVoiceClient::CreateVoiceProfileDomain(const CreateVoiceProfileDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profile-domains");
  };

  return CreateVoiceProfileDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePhoneNumberOutcome ChimeSDKVoiceClient::DeletePhoneNumber(const DeletePhoneNumberRequest& request) const {
  if (!request.PhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePhoneNumber", "Required field: PhoneNumberId, is not set");
    return DeletePhoneNumberOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PhoneNumberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  };

  return DeletePhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteProxySessionOutcome ChimeSDKVoiceClient::DeleteProxySession(const DeleteProxySessionRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProxySession", "Required field: VoiceConnectorId, is not set");
    return DeleteProxySessionOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.ProxySessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProxySession", "Required field: ProxySessionId, is not set");
    return DeleteProxySessionOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ProxySessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProxySessionId());
  };

  return DeleteProxySessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSipMediaApplicationOutcome ChimeSDKVoiceClient::DeleteSipMediaApplication(const DeleteSipMediaApplicationRequest& request) const {
  if (!request.SipMediaApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSipMediaApplication", "Required field: SipMediaApplicationId, is not set");
    return DeleteSipMediaApplicationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  };

  return DeleteSipMediaApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSipRuleOutcome ChimeSDKVoiceClient::DeleteSipRule(const DeleteSipRuleRequest& request) const {
  if (!request.SipRuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSipRule", "Required field: SipRuleId, is not set");
    return DeleteSipRuleOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SipRuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipRuleId());
  };

  return DeleteSipRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVoiceConnectorOutcome ChimeSDKVoiceClient::DeleteVoiceConnector(const DeleteVoiceConnectorRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  };

  return DeleteVoiceConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVoiceConnectorEmergencyCallingConfigurationOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorEmergencyCallingConfiguration(
    const DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorEmergencyCallingConfiguration", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorEmergencyCallingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/emergency-calling-configuration");
  };

  return DeleteVoiceConnectorEmergencyCallingConfigurationOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVoiceConnectorExternalSystemsConfigurationOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorExternalSystemsConfiguration(
    const DeleteVoiceConnectorExternalSystemsConfigurationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorExternalSystemsConfiguration", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorExternalSystemsConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/external-systems-configuration");
  };

  return DeleteVoiceConnectorExternalSystemsConfigurationOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVoiceConnectorGroupOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorGroup(const DeleteVoiceConnectorGroupRequest& request) const {
  if (!request.VoiceConnectorGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return DeleteVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
  };

  return DeleteVoiceConnectorGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVoiceConnectorOriginationOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorOrigination(
    const DeleteVoiceConnectorOriginationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorOrigination", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorOriginationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/origination");
  };

  return DeleteVoiceConnectorOriginationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVoiceConnectorProxyOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorProxy(const DeleteVoiceConnectorProxyRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorProxy", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorProxyOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/programmable-numbers/proxy");
  };

  return DeleteVoiceConnectorProxyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVoiceConnectorStreamingConfigurationOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorStreamingConfiguration(
    const DeleteVoiceConnectorStreamingConfigurationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configuration");
  };

  return DeleteVoiceConnectorStreamingConfigurationOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVoiceConnectorTerminationOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorTermination(
    const DeleteVoiceConnectorTerminationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorTermination", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorTerminationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/termination");
  };

  return DeleteVoiceConnectorTerminationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVoiceConnectorTerminationCredentialsOutcome ChimeSDKVoiceClient::DeleteVoiceConnectorTerminationCredentials(
    const DeleteVoiceConnectorTerminationCredentialsRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorTerminationCredentials", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorTerminationCredentialsOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/termination/credentials");
    ss.str("?operation=delete");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return DeleteVoiceConnectorTerminationCredentialsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVoiceProfileOutcome ChimeSDKVoiceClient::DeleteVoiceProfile(const DeleteVoiceProfileRequest& request) const {
  if (!request.VoiceProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVoiceProfile", "Required field: VoiceProfileId, is not set");
    return DeleteVoiceProfileOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [VoiceProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceProfileId());
  };

  return DeleteVoiceProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVoiceProfileDomainOutcome ChimeSDKVoiceClient::DeleteVoiceProfileDomain(const DeleteVoiceProfileDomainRequest& request) const {
  if (!request.VoiceProfileDomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVoiceProfileDomain", "Required field: VoiceProfileDomainId, is not set");
    return DeleteVoiceProfileDomainOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceProfileDomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profile-domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceProfileDomainId());
  };

  return DeleteVoiceProfileDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociatePhoneNumbersFromVoiceConnectorOutcome ChimeSDKVoiceClient::DisassociatePhoneNumbersFromVoiceConnector(
    const DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumbersFromVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return DisassociatePhoneNumbersFromVoiceConnectorOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    ss.str("?operation=disassociate-phone-numbers");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return DisassociatePhoneNumbersFromVoiceConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome ChimeSDKVoiceClient::DisassociatePhoneNumbersFromVoiceConnectorGroup(
    const DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request) const {
  if (!request.VoiceConnectorGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumbersFromVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
    ss.str("?operation=disassociate-phone-numbers");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGlobalSettingsOutcome ChimeSDKVoiceClient::GetGlobalSettings(const GetGlobalSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return GetGlobalSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPhoneNumberOutcome ChimeSDKVoiceClient::GetPhoneNumber(const GetPhoneNumberRequest& request) const {
  if (!request.PhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPhoneNumber", "Required field: PhoneNumberId, is not set");
    return GetPhoneNumberOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [PhoneNumberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  };

  return GetPhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPhoneNumberOrderOutcome ChimeSDKVoiceClient::GetPhoneNumberOrder(const GetPhoneNumberOrderRequest& request) const {
  if (!request.PhoneNumberOrderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPhoneNumberOrder", "Required field: PhoneNumberOrderId, is not set");
    return GetPhoneNumberOrderOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberOrderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-orders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberOrderId());
  };

  return GetPhoneNumberOrderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPhoneNumberSettingsOutcome ChimeSDKVoiceClient::GetPhoneNumberSettings(const GetPhoneNumberSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings/phone-number");
  };

  return GetPhoneNumberSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProxySessionOutcome ChimeSDKVoiceClient::GetProxySession(const GetProxySessionRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProxySession", "Required field: VoiceConnectorId, is not set");
    return GetProxySessionOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.ProxySessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProxySession", "Required field: ProxySessionId, is not set");
    return GetProxySessionOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ProxySessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProxySessionId());
  };

  return GetProxySessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSipMediaApplicationOutcome ChimeSDKVoiceClient::GetSipMediaApplication(const GetSipMediaApplicationRequest& request) const {
  if (!request.SipMediaApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSipMediaApplication", "Required field: SipMediaApplicationId, is not set");
    return GetSipMediaApplicationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  };

  return GetSipMediaApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSipMediaApplicationLoggingConfigurationOutcome ChimeSDKVoiceClient::GetSipMediaApplicationLoggingConfiguration(
    const GetSipMediaApplicationLoggingConfigurationRequest& request) const {
  if (!request.SipMediaApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSipMediaApplicationLoggingConfiguration", "Required field: SipMediaApplicationId, is not set");
    return GetSipMediaApplicationLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  };

  return GetSipMediaApplicationLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSipRuleOutcome ChimeSDKVoiceClient::GetSipRule(const GetSipRuleRequest& request) const {
  if (!request.SipRuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSipRule", "Required field: SipRuleId, is not set");
    return GetSipRuleOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [SipRuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipRuleId());
  };

  return GetSipRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSpeakerSearchTaskOutcome ChimeSDKVoiceClient::GetSpeakerSearchTask(const GetSpeakerSearchTaskRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSpeakerSearchTask", "Required field: VoiceConnectorId, is not set");
    return GetSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.SpeakerSearchTaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSpeakerSearchTask", "Required field: SpeakerSearchTaskId, is not set");
    return GetSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpeakerSearchTaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/speaker-search-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpeakerSearchTaskId());
  };

  return GetSpeakerSearchTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceConnectorOutcome ChimeSDKVoiceClient::GetVoiceConnector(const GetVoiceConnectorRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  };

  return GetVoiceConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceConnectorEmergencyCallingConfigurationOutcome ChimeSDKVoiceClient::GetVoiceConnectorEmergencyCallingConfiguration(
    const GetVoiceConnectorEmergencyCallingConfigurationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorEmergencyCallingConfiguration", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorEmergencyCallingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/emergency-calling-configuration");
  };

  return GetVoiceConnectorEmergencyCallingConfigurationOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceConnectorExternalSystemsConfigurationOutcome ChimeSDKVoiceClient::GetVoiceConnectorExternalSystemsConfiguration(
    const GetVoiceConnectorExternalSystemsConfigurationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorExternalSystemsConfiguration", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorExternalSystemsConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/external-systems-configuration");
  };

  return GetVoiceConnectorExternalSystemsConfigurationOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceConnectorGroupOutcome ChimeSDKVoiceClient::GetVoiceConnectorGroup(const GetVoiceConnectorGroupRequest& request) const {
  if (!request.VoiceConnectorGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return GetVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
  };

  return GetVoiceConnectorGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceConnectorLoggingConfigurationOutcome ChimeSDKVoiceClient::GetVoiceConnectorLoggingConfiguration(
    const GetVoiceConnectorLoggingConfigurationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorLoggingConfiguration", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  };

  return GetVoiceConnectorLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceConnectorOriginationOutcome ChimeSDKVoiceClient::GetVoiceConnectorOrigination(
    const GetVoiceConnectorOriginationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorOrigination", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorOriginationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/origination");
  };

  return GetVoiceConnectorOriginationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceConnectorProxyOutcome ChimeSDKVoiceClient::GetVoiceConnectorProxy(const GetVoiceConnectorProxyRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorProxy", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorProxyOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/programmable-numbers/proxy");
  };

  return GetVoiceConnectorProxyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceConnectorStreamingConfigurationOutcome ChimeSDKVoiceClient::GetVoiceConnectorStreamingConfiguration(
    const GetVoiceConnectorStreamingConfigurationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configuration");
  };

  return GetVoiceConnectorStreamingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceConnectorTerminationOutcome ChimeSDKVoiceClient::GetVoiceConnectorTermination(
    const GetVoiceConnectorTerminationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorTermination", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorTerminationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/termination");
  };

  return GetVoiceConnectorTerminationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceConnectorTerminationHealthOutcome ChimeSDKVoiceClient::GetVoiceConnectorTerminationHealth(
    const GetVoiceConnectorTerminationHealthRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorTerminationHealth", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorTerminationHealthOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/termination/health");
  };

  return GetVoiceConnectorTerminationHealthOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceProfileOutcome ChimeSDKVoiceClient::GetVoiceProfile(const GetVoiceProfileRequest& request) const {
  if (!request.VoiceProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceProfile", "Required field: VoiceProfileId, is not set");
    return GetVoiceProfileOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [VoiceProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceProfileId());
  };

  return GetVoiceProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceProfileDomainOutcome ChimeSDKVoiceClient::GetVoiceProfileDomain(const GetVoiceProfileDomainRequest& request) const {
  if (!request.VoiceProfileDomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceProfileDomain", "Required field: VoiceProfileDomainId, is not set");
    return GetVoiceProfileDomainOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceProfileDomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profile-domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceProfileDomainId());
  };

  return GetVoiceProfileDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceToneAnalysisTaskOutcome ChimeSDKVoiceClient::GetVoiceToneAnalysisTask(const GetVoiceToneAnalysisTaskRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceToneAnalysisTask", "Required field: VoiceConnectorId, is not set");
    return GetVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.VoiceToneAnalysisTaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceToneAnalysisTask", "Required field: VoiceToneAnalysisTaskId, is not set");
    return GetVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceToneAnalysisTaskId]", false));
  }
  if (!request.IsCallerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceToneAnalysisTask", "Required field: IsCaller, is not set");
    return GetVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IsCaller]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-tone-analysis-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceToneAnalysisTaskId());
  };

  return GetVoiceToneAnalysisTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAvailableVoiceConnectorRegionsOutcome ChimeSDKVoiceClient::ListAvailableVoiceConnectorRegions(
    const ListAvailableVoiceConnectorRegionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-regions");
  };

  return ListAvailableVoiceConnectorRegionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPhoneNumberOrdersOutcome ChimeSDKVoiceClient::ListPhoneNumberOrders(const ListPhoneNumberOrdersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-orders");
  };

  return ListPhoneNumberOrdersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPhoneNumbersOutcome ChimeSDKVoiceClient::ListPhoneNumbers(const ListPhoneNumbersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
  };

  return ListPhoneNumbersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProxySessionsOutcome ChimeSDKVoiceClient::ListProxySessions(const ListProxySessionsRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProxySessions", "Required field: VoiceConnectorId, is not set");
    return ListProxySessionsOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions");
  };

  return ListProxySessionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSipMediaApplicationsOutcome ChimeSDKVoiceClient::ListSipMediaApplications(const ListSipMediaApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications");
  };

  return ListSipMediaApplicationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSipRulesOutcome ChimeSDKVoiceClient::ListSipRules(const ListSipRulesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules");
  };

  return ListSipRulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSupportedPhoneNumberCountriesOutcome ChimeSDKVoiceClient::ListSupportedPhoneNumberCountries(
    const ListSupportedPhoneNumberCountriesRequest& request) const {
  if (!request.ProductTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSupportedPhoneNumberCountries", "Required field: ProductType, is not set");
    return ListSupportedPhoneNumberCountriesOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProductType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-countries");
  };

  return ListSupportedPhoneNumberCountriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome ChimeSDKVoiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVoiceConnectorGroupsOutcome ChimeSDKVoiceClient::ListVoiceConnectorGroups(const ListVoiceConnectorGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups");
  };

  return ListVoiceConnectorGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVoiceConnectorTerminationCredentialsOutcome ChimeSDKVoiceClient::ListVoiceConnectorTerminationCredentials(
    const ListVoiceConnectorTerminationCredentialsRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVoiceConnectorTerminationCredentials", "Required field: VoiceConnectorId, is not set");
    return ListVoiceConnectorTerminationCredentialsOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/termination/credentials");
  };

  return ListVoiceConnectorTerminationCredentialsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVoiceConnectorsOutcome ChimeSDKVoiceClient::ListVoiceConnectors(const ListVoiceConnectorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors");
  };

  return ListVoiceConnectorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVoiceProfileDomainsOutcome ChimeSDKVoiceClient::ListVoiceProfileDomains(const ListVoiceProfileDomainsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profile-domains");
  };

  return ListVoiceProfileDomainsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVoiceProfilesOutcome ChimeSDKVoiceClient::ListVoiceProfiles(const ListVoiceProfilesRequest& request) const {
  if (!request.VoiceProfileDomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVoiceProfiles", "Required field: VoiceProfileDomainId, is not set");
    return ListVoiceProfilesOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [VoiceProfileDomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profiles");
  };

  return ListVoiceProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutSipMediaApplicationLoggingConfigurationOutcome ChimeSDKVoiceClient::PutSipMediaApplicationLoggingConfiguration(
    const PutSipMediaApplicationLoggingConfigurationRequest& request) const {
  if (!request.SipMediaApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSipMediaApplicationLoggingConfiguration", "Required field: SipMediaApplicationId, is not set");
    return PutSipMediaApplicationLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  };

  return PutSipMediaApplicationLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutVoiceConnectorEmergencyCallingConfigurationOutcome ChimeSDKVoiceClient::PutVoiceConnectorEmergencyCallingConfiguration(
    const PutVoiceConnectorEmergencyCallingConfigurationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorEmergencyCallingConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorEmergencyCallingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/emergency-calling-configuration");
  };

  return PutVoiceConnectorEmergencyCallingConfigurationOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutVoiceConnectorExternalSystemsConfigurationOutcome ChimeSDKVoiceClient::PutVoiceConnectorExternalSystemsConfiguration(
    const PutVoiceConnectorExternalSystemsConfigurationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorExternalSystemsConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorExternalSystemsConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/external-systems-configuration");
  };

  return PutVoiceConnectorExternalSystemsConfigurationOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutVoiceConnectorLoggingConfigurationOutcome ChimeSDKVoiceClient::PutVoiceConnectorLoggingConfiguration(
    const PutVoiceConnectorLoggingConfigurationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorLoggingConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  };

  return PutVoiceConnectorLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutVoiceConnectorOriginationOutcome ChimeSDKVoiceClient::PutVoiceConnectorOrigination(
    const PutVoiceConnectorOriginationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorOrigination", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorOriginationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/origination");
  };

  return PutVoiceConnectorOriginationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutVoiceConnectorProxyOutcome ChimeSDKVoiceClient::PutVoiceConnectorProxy(const PutVoiceConnectorProxyRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorProxy", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorProxyOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/programmable-numbers/proxy");
  };

  return PutVoiceConnectorProxyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutVoiceConnectorStreamingConfigurationOutcome ChimeSDKVoiceClient::PutVoiceConnectorStreamingConfiguration(
    const PutVoiceConnectorStreamingConfigurationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configuration");
  };

  return PutVoiceConnectorStreamingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutVoiceConnectorTerminationOutcome ChimeSDKVoiceClient::PutVoiceConnectorTermination(
    const PutVoiceConnectorTerminationRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorTermination", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorTerminationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/termination");
  };

  return PutVoiceConnectorTerminationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutVoiceConnectorTerminationCredentialsOutcome ChimeSDKVoiceClient::PutVoiceConnectorTerminationCredentials(
    const PutVoiceConnectorTerminationCredentialsRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorTerminationCredentials", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorTerminationCredentialsOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/termination/credentials");
    ss.str("?operation=put");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return PutVoiceConnectorTerminationCredentialsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RestorePhoneNumberOutcome ChimeSDKVoiceClient::RestorePhoneNumber(const RestorePhoneNumberRequest& request) const {
  if (!request.PhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestorePhoneNumber", "Required field: PhoneNumberId, is not set");
    return RestorePhoneNumberOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [PhoneNumberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
    ss.str("?operation=restore");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return RestorePhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchAvailablePhoneNumbersOutcome ChimeSDKVoiceClient::SearchAvailablePhoneNumbers(
    const SearchAvailablePhoneNumbersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search");
    ss.str("?type=phone-numbers");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return SearchAvailablePhoneNumbersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

StartSpeakerSearchTaskOutcome ChimeSDKVoiceClient::StartSpeakerSearchTask(const StartSpeakerSearchTaskRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartSpeakerSearchTask", "Required field: VoiceConnectorId, is not set");
    return StartSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/speaker-search-tasks");
  };

  return StartSpeakerSearchTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartVoiceToneAnalysisTaskOutcome ChimeSDKVoiceClient::StartVoiceToneAnalysisTask(const StartVoiceToneAnalysisTaskRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartVoiceToneAnalysisTask", "Required field: VoiceConnectorId, is not set");
    return StartVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-tone-analysis-tasks");
  };

  return StartVoiceToneAnalysisTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopSpeakerSearchTaskOutcome ChimeSDKVoiceClient::StopSpeakerSearchTask(const StopSpeakerSearchTaskRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopSpeakerSearchTask", "Required field: VoiceConnectorId, is not set");
    return StopSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.SpeakerSearchTaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopSpeakerSearchTask", "Required field: SpeakerSearchTaskId, is not set");
    return StopSpeakerSearchTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SpeakerSearchTaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/speaker-search-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpeakerSearchTaskId());
    ss.str("?operation=stop");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return StopSpeakerSearchTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopVoiceToneAnalysisTaskOutcome ChimeSDKVoiceClient::StopVoiceToneAnalysisTask(const StopVoiceToneAnalysisTaskRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopVoiceToneAnalysisTask", "Required field: VoiceConnectorId, is not set");
    return StopVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.VoiceToneAnalysisTaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopVoiceToneAnalysisTask", "Required field: VoiceToneAnalysisTaskId, is not set");
    return StopVoiceToneAnalysisTaskOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceToneAnalysisTaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-tone-analysis-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceToneAnalysisTaskId());
    ss.str("?operation=stop");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return StopVoiceToneAnalysisTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ChimeSDKVoiceClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
    ss.str("?operation=tag-resource");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ChimeSDKVoiceClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
    ss.str("?operation=untag-resource");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGlobalSettingsOutcome ChimeSDKVoiceClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return UpdateGlobalSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdatePhoneNumberOutcome ChimeSDKVoiceClient::UpdatePhoneNumber(const UpdatePhoneNumberRequest& request) const {
  if (!request.PhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePhoneNumber", "Required field: PhoneNumberId, is not set");
    return UpdatePhoneNumberOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PhoneNumberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  };

  return UpdatePhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePhoneNumberSettingsOutcome ChimeSDKVoiceClient::UpdatePhoneNumberSettings(const UpdatePhoneNumberSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings/phone-number");
  };

  return UpdatePhoneNumberSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateProxySessionOutcome ChimeSDKVoiceClient::UpdateProxySession(const UpdateProxySessionRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProxySession", "Required field: VoiceConnectorId, is not set");
    return UpdateProxySessionOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.ProxySessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProxySession", "Required field: ProxySessionId, is not set");
    return UpdateProxySessionOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ProxySessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProxySessionId());
  };

  return UpdateProxySessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSipMediaApplicationOutcome ChimeSDKVoiceClient::UpdateSipMediaApplication(const UpdateSipMediaApplicationRequest& request) const {
  if (!request.SipMediaApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSipMediaApplication", "Required field: SipMediaApplicationId, is not set");
    return UpdateSipMediaApplicationOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  };

  return UpdateSipMediaApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateSipMediaApplicationCallOutcome ChimeSDKVoiceClient::UpdateSipMediaApplicationCall(
    const UpdateSipMediaApplicationCallRequest& request) const {
  if (!request.SipMediaApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSipMediaApplicationCall", "Required field: SipMediaApplicationId, is not set");
    return UpdateSipMediaApplicationCallOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  if (!request.TransactionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSipMediaApplicationCall", "Required field: TransactionId, is not set");
    return UpdateSipMediaApplicationCallOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TransactionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/calls/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTransactionId());
  };

  return UpdateSipMediaApplicationCallOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSipRuleOutcome ChimeSDKVoiceClient::UpdateSipRule(const UpdateSipRuleRequest& request) const {
  if (!request.SipRuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSipRule", "Required field: SipRuleId, is not set");
    return UpdateSipRuleOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SipRuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipRuleId());
  };

  return UpdateSipRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateVoiceConnectorOutcome ChimeSDKVoiceClient::UpdateVoiceConnector(const UpdateVoiceConnectorRequest& request) const {
  if (!request.VoiceConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return UpdateVoiceConnectorOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  };

  return UpdateVoiceConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateVoiceConnectorGroupOutcome ChimeSDKVoiceClient::UpdateVoiceConnectorGroup(const UpdateVoiceConnectorGroupRequest& request) const {
  if (!request.VoiceConnectorGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return UpdateVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
  };

  return UpdateVoiceConnectorGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateVoiceProfileOutcome ChimeSDKVoiceClient::UpdateVoiceProfile(const UpdateVoiceProfileRequest& request) const {
  if (!request.VoiceProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVoiceProfile", "Required field: VoiceProfileId, is not set");
    return UpdateVoiceProfileOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [VoiceProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceProfileId());
  };

  return UpdateVoiceProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateVoiceProfileDomainOutcome ChimeSDKVoiceClient::UpdateVoiceProfileDomain(const UpdateVoiceProfileDomainRequest& request) const {
  if (!request.VoiceProfileDomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVoiceProfileDomain", "Required field: VoiceProfileDomainId, is not set");
    return UpdateVoiceProfileDomainOutcome(Aws::Client::AWSError<ChimeSDKVoiceErrors>(
        ChimeSDKVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceProfileDomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice-profile-domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceProfileDomainId());
  };

  return UpdateVoiceProfileDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ValidateE911AddressOutcome ChimeSDKVoiceClient::ValidateE911Address(const ValidateE911AddressRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/emergency-calling/address");
  };

  return ValidateE911AddressOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
