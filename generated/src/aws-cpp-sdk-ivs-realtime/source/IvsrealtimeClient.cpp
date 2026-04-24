/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

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
#include <aws/ivs-realtime/IvsrealtimeClient.h>
#include <aws/ivs-realtime/IvsrealtimeEndpointProvider.h>
#include <aws/ivs-realtime/IvsrealtimeErrorMarshaller.h>
#include <aws/ivs-realtime/model/CreateEncoderConfigurationRequest.h>
#include <aws/ivs-realtime/model/CreateIngestConfigurationRequest.h>
#include <aws/ivs-realtime/model/CreateParticipantTokenRequest.h>
#include <aws/ivs-realtime/model/CreateStageRequest.h>
#include <aws/ivs-realtime/model/CreateStorageConfigurationRequest.h>
#include <aws/ivs-realtime/model/DeleteEncoderConfigurationRequest.h>
#include <aws/ivs-realtime/model/DeleteIngestConfigurationRequest.h>
#include <aws/ivs-realtime/model/DeletePublicKeyRequest.h>
#include <aws/ivs-realtime/model/DeleteStageRequest.h>
#include <aws/ivs-realtime/model/DeleteStorageConfigurationRequest.h>
#include <aws/ivs-realtime/model/DisconnectParticipantRequest.h>
#include <aws/ivs-realtime/model/GetCompositionRequest.h>
#include <aws/ivs-realtime/model/GetEncoderConfigurationRequest.h>
#include <aws/ivs-realtime/model/GetIngestConfigurationRequest.h>
#include <aws/ivs-realtime/model/GetParticipantRequest.h>
#include <aws/ivs-realtime/model/GetPublicKeyRequest.h>
#include <aws/ivs-realtime/model/GetStageRequest.h>
#include <aws/ivs-realtime/model/GetStageSessionRequest.h>
#include <aws/ivs-realtime/model/GetStorageConfigurationRequest.h>
#include <aws/ivs-realtime/model/ImportPublicKeyRequest.h>
#include <aws/ivs-realtime/model/ListCompositionsRequest.h>
#include <aws/ivs-realtime/model/ListEncoderConfigurationsRequest.h>
#include <aws/ivs-realtime/model/ListIngestConfigurationsRequest.h>
#include <aws/ivs-realtime/model/ListParticipantEventsRequest.h>
#include <aws/ivs-realtime/model/ListParticipantReplicasRequest.h>
#include <aws/ivs-realtime/model/ListParticipantsRequest.h>
#include <aws/ivs-realtime/model/ListPublicKeysRequest.h>
#include <aws/ivs-realtime/model/ListStageSessionsRequest.h>
#include <aws/ivs-realtime/model/ListStagesRequest.h>
#include <aws/ivs-realtime/model/ListStorageConfigurationsRequest.h>
#include <aws/ivs-realtime/model/ListTagsForResourceRequest.h>
#include <aws/ivs-realtime/model/StartCompositionRequest.h>
#include <aws/ivs-realtime/model/StartParticipantReplicationRequest.h>
#include <aws/ivs-realtime/model/StopCompositionRequest.h>
#include <aws/ivs-realtime/model/StopParticipantReplicationRequest.h>
#include <aws/ivs-realtime/model/TagResourceRequest.h>
#include <aws/ivs-realtime/model/UntagResourceRequest.h>
#include <aws/ivs-realtime/model/UpdateIngestConfigurationRequest.h>
#include <aws/ivs-realtime/model/UpdateStageRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ivsrealtime;
using namespace Aws::ivsrealtime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ivsrealtime {
const char SERVICE_NAME[] = "ivs";
const char ALLOCATION_TAG[] = "IvsrealtimeClient";
}  // namespace ivsrealtime
}  // namespace Aws
const char* IvsrealtimeClient::GetServiceName() { return SERVICE_NAME; }
const char* IvsrealtimeClient::GetAllocationTag() { return ALLOCATION_TAG; }

IvsrealtimeClient::IvsrealtimeClient(const ivsrealtime::IvsrealtimeClientConfiguration& clientConfiguration,
                                     std::shared_ptr<IvsrealtimeEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IvsrealtimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IvsrealtimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IvsrealtimeClient::IvsrealtimeClient(const AWSCredentials& credentials, std::shared_ptr<IvsrealtimeEndpointProviderBase> endpointProvider,
                                     const ivsrealtime::IvsrealtimeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IvsrealtimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IvsrealtimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IvsrealtimeClient::IvsrealtimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<IvsrealtimeEndpointProviderBase> endpointProvider,
                                     const ivsrealtime::IvsrealtimeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IvsrealtimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IvsrealtimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
IvsrealtimeClient::IvsrealtimeClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IvsrealtimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IvsrealtimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IvsrealtimeClient::IvsrealtimeClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IvsrealtimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IvsrealtimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IvsrealtimeClient::IvsrealtimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IvsrealtimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IvsrealtimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
IvsrealtimeClient::~IvsrealtimeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<IvsrealtimeEndpointProviderBase>& IvsrealtimeClient::accessEndpointProvider() { return m_endpointProvider; }

void IvsrealtimeClient::init(const ivsrealtime::IvsrealtimeClientConfiguration& config) {
  AWSClient::SetServiceClientName("IVS RealTime");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ivs");
}

void IvsrealtimeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
IvsrealtimeClient::InvokeOperationOutcome IvsrealtimeClient::InvokeServiceOperation(
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

CreateEncoderConfigurationOutcome IvsrealtimeClient::CreateEncoderConfiguration(const CreateEncoderConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateEncoderConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEncoderConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateEncoderConfigurationOutcome(std::move(result.GetError()));
}

CreateIngestConfigurationOutcome IvsrealtimeClient::CreateIngestConfiguration(const CreateIngestConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateIngestConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIngestConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateIngestConfigurationOutcome(std::move(result.GetError()));
}

CreateParticipantTokenOutcome IvsrealtimeClient::CreateParticipantToken(const CreateParticipantTokenRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateParticipantToken");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateParticipantTokenOutcome(result.GetResultWithOwnership())
                            : CreateParticipantTokenOutcome(std::move(result.GetError()));
}

CreateStageOutcome IvsrealtimeClient::CreateStage(const CreateStageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateStage");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStageOutcome(result.GetResultWithOwnership()) : CreateStageOutcome(std::move(result.GetError()));
}

CreateStorageConfigurationOutcome IvsrealtimeClient::CreateStorageConfiguration(const CreateStorageConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateStorageConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStorageConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateStorageConfigurationOutcome(std::move(result.GetError()));
}

DeleteEncoderConfigurationOutcome IvsrealtimeClient::DeleteEncoderConfiguration(const DeleteEncoderConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteEncoderConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEncoderConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteEncoderConfigurationOutcome(std::move(result.GetError()));
}

DeleteIngestConfigurationOutcome IvsrealtimeClient::DeleteIngestConfiguration(const DeleteIngestConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteIngestConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIngestConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteIngestConfigurationOutcome(std::move(result.GetError()));
}

DeletePublicKeyOutcome IvsrealtimeClient::DeletePublicKey(const DeletePublicKeyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeletePublicKey");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePublicKeyOutcome(result.GetResultWithOwnership())
                            : DeletePublicKeyOutcome(std::move(result.GetError()));
}

DeleteStageOutcome IvsrealtimeClient::DeleteStage(const DeleteStageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteStage");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteStageOutcome(result.GetResultWithOwnership()) : DeleteStageOutcome(std::move(result.GetError()));
}

DeleteStorageConfigurationOutcome IvsrealtimeClient::DeleteStorageConfiguration(const DeleteStorageConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteStorageConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteStorageConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteStorageConfigurationOutcome(std::move(result.GetError()));
}

DisconnectParticipantOutcome IvsrealtimeClient::DisconnectParticipant(const DisconnectParticipantRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DisconnectParticipant");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisconnectParticipantOutcome(result.GetResultWithOwnership())
                            : DisconnectParticipantOutcome(std::move(result.GetError()));
}

GetCompositionOutcome IvsrealtimeClient::GetComposition(const GetCompositionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetComposition");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCompositionOutcome(result.GetResultWithOwnership()) : GetCompositionOutcome(std::move(result.GetError()));
}

GetEncoderConfigurationOutcome IvsrealtimeClient::GetEncoderConfiguration(const GetEncoderConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetEncoderConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEncoderConfigurationOutcome(result.GetResultWithOwnership())
                            : GetEncoderConfigurationOutcome(std::move(result.GetError()));
}

GetIngestConfigurationOutcome IvsrealtimeClient::GetIngestConfiguration(const GetIngestConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetIngestConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIngestConfigurationOutcome(result.GetResultWithOwnership())
                            : GetIngestConfigurationOutcome(std::move(result.GetError()));
}

GetParticipantOutcome IvsrealtimeClient::GetParticipant(const GetParticipantRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetParticipant");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetParticipantOutcome(result.GetResultWithOwnership()) : GetParticipantOutcome(std::move(result.GetError()));
}

GetPublicKeyOutcome IvsrealtimeClient::GetPublicKey(const GetPublicKeyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetPublicKey");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPublicKeyOutcome(result.GetResultWithOwnership()) : GetPublicKeyOutcome(std::move(result.GetError()));
}

GetStageOutcome IvsrealtimeClient::GetStage(const GetStageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetStage");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetStageOutcome(result.GetResultWithOwnership()) : GetStageOutcome(std::move(result.GetError()));
}

GetStageSessionOutcome IvsrealtimeClient::GetStageSession(const GetStageSessionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetStageSession");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetStageSessionOutcome(result.GetResultWithOwnership())
                            : GetStageSessionOutcome(std::move(result.GetError()));
}

GetStorageConfigurationOutcome IvsrealtimeClient::GetStorageConfiguration(const GetStorageConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetStorageConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetStorageConfigurationOutcome(result.GetResultWithOwnership())
                            : GetStorageConfigurationOutcome(std::move(result.GetError()));
}

ImportPublicKeyOutcome IvsrealtimeClient::ImportPublicKey(const ImportPublicKeyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ImportPublicKey");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportPublicKeyOutcome(result.GetResultWithOwnership())
                            : ImportPublicKeyOutcome(std::move(result.GetError()));
}

ListCompositionsOutcome IvsrealtimeClient::ListCompositions(const ListCompositionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListCompositions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCompositionsOutcome(result.GetResultWithOwnership())
                            : ListCompositionsOutcome(std::move(result.GetError()));
}

ListEncoderConfigurationsOutcome IvsrealtimeClient::ListEncoderConfigurations(const ListEncoderConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListEncoderConfigurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEncoderConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListEncoderConfigurationsOutcome(std::move(result.GetError()));
}

ListIngestConfigurationsOutcome IvsrealtimeClient::ListIngestConfigurations(const ListIngestConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListIngestConfigurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIngestConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListIngestConfigurationsOutcome(std::move(result.GetError()));
}

ListParticipantEventsOutcome IvsrealtimeClient::ListParticipantEvents(const ListParticipantEventsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListParticipantEvents");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListParticipantEventsOutcome(result.GetResultWithOwnership())
                            : ListParticipantEventsOutcome(std::move(result.GetError()));
}

ListParticipantReplicasOutcome IvsrealtimeClient::ListParticipantReplicas(const ListParticipantReplicasRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListParticipantReplicas");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListParticipantReplicasOutcome(result.GetResultWithOwnership())
                            : ListParticipantReplicasOutcome(std::move(result.GetError()));
}

ListParticipantsOutcome IvsrealtimeClient::ListParticipants(const ListParticipantsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListParticipants");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListParticipantsOutcome(result.GetResultWithOwnership())
                            : ListParticipantsOutcome(std::move(result.GetError()));
}

ListPublicKeysOutcome IvsrealtimeClient::ListPublicKeys(const ListPublicKeysRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListPublicKeys");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPublicKeysOutcome(result.GetResultWithOwnership()) : ListPublicKeysOutcome(std::move(result.GetError()));
}

ListStageSessionsOutcome IvsrealtimeClient::ListStageSessions(const ListStageSessionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListStageSessions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStageSessionsOutcome(result.GetResultWithOwnership())
                            : ListStageSessionsOutcome(std::move(result.GetError()));
}

ListStagesOutcome IvsrealtimeClient::ListStages(const ListStagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListStages");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStagesOutcome(result.GetResultWithOwnership()) : ListStagesOutcome(std::move(result.GetError()));
}

ListStorageConfigurationsOutcome IvsrealtimeClient::ListStorageConfigurations(const ListStorageConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListStorageConfigurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStorageConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListStorageConfigurationsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome IvsrealtimeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IvsrealtimeErrors>(IvsrealtimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

StartCompositionOutcome IvsrealtimeClient::StartComposition(const StartCompositionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartComposition");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartCompositionOutcome(result.GetResultWithOwnership())
                            : StartCompositionOutcome(std::move(result.GetError()));
}

StartParticipantReplicationOutcome IvsrealtimeClient::StartParticipantReplication(const StartParticipantReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartParticipantReplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartParticipantReplicationOutcome(result.GetResultWithOwnership())
                            : StartParticipantReplicationOutcome(std::move(result.GetError()));
}

StopCompositionOutcome IvsrealtimeClient::StopComposition(const StopCompositionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopComposition");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopCompositionOutcome(result.GetResultWithOwnership())
                            : StopCompositionOutcome(std::move(result.GetError()));
}

StopParticipantReplicationOutcome IvsrealtimeClient::StopParticipantReplication(const StopParticipantReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopParticipantReplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopParticipantReplicationOutcome(result.GetResultWithOwnership())
                            : StopParticipantReplicationOutcome(std::move(result.GetError()));
}

TagResourceOutcome IvsrealtimeClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IvsrealtimeErrors>(IvsrealtimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome IvsrealtimeClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IvsrealtimeErrors>(IvsrealtimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IvsrealtimeErrors>(IvsrealtimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateIngestConfigurationOutcome IvsrealtimeClient::UpdateIngestConfiguration(const UpdateIngestConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateIngestConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateIngestConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateIngestConfigurationOutcome(std::move(result.GetError()));
}

UpdateStageOutcome IvsrealtimeClient::UpdateStage(const UpdateStageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateStage");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateStageOutcome(result.GetResultWithOwnership()) : UpdateStageOutcome(std::move(result.GetError()));
}
