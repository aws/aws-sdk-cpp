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
#include <aws/lambda-core/LambdaCoreClient.h>
#include <aws/lambda-core/LambdaCoreEndpointProvider.h>
#include <aws/lambda-core/LambdaCoreErrorMarshaller.h>
#include <aws/lambda-core/model/CreateNetworkConnectorRequest.h>
#include <aws/lambda-core/model/DeleteNetworkConnectorRequest.h>
#include <aws/lambda-core/model/GetNetworkConnectorRequest.h>
#include <aws/lambda-core/model/ListNetworkConnectorsRequest.h>
#include <aws/lambda-core/model/UpdateNetworkConnectorRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LambdaCore;
using namespace Aws::LambdaCore::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace LambdaCore {
const char SERVICE_NAME[] = "lambda";
const char ALLOCATION_TAG[] = "LambdaCoreClient";
}  // namespace LambdaCore
}  // namespace Aws
const char* LambdaCoreClient::GetServiceName() { return SERVICE_NAME; }
const char* LambdaCoreClient::GetAllocationTag() { return ALLOCATION_TAG; }

LambdaCoreClient::LambdaCoreClient(const LambdaCore::LambdaCoreClientConfiguration& clientConfiguration,
                                   std::shared_ptr<LambdaCoreEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaCoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LambdaCoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaCoreClient::LambdaCoreClient(const AWSCredentials& credentials, std::shared_ptr<LambdaCoreEndpointProviderBase> endpointProvider,
                                   const LambdaCore::LambdaCoreClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaCoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LambdaCoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaCoreClient::LambdaCoreClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<LambdaCoreEndpointProviderBase> endpointProvider,
                                   const LambdaCore::LambdaCoreClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaCoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LambdaCoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
LambdaCoreClient::LambdaCoreClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaCoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LambdaCoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaCoreClient::LambdaCoreClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaCoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LambdaCoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LambdaCoreClient::LambdaCoreClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LambdaCoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LambdaCoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
LambdaCoreClient::~LambdaCoreClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<LambdaCoreEndpointProviderBase>& LambdaCoreClient::accessEndpointProvider() { return m_endpointProvider; }

void LambdaCoreClient::init(const LambdaCore::LambdaCoreClientConfiguration& config) {
  AWSClient::SetServiceClientName("Lambda Core");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "lambda");
}

void LambdaCoreClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
LambdaCoreClient::InvokeOperationOutcome LambdaCoreClient::InvokeServiceOperation(
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

CreateNetworkConnectorOutcome LambdaCoreClient::CreateNetworkConnector(const CreateNetworkConnectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2026-04-04/network-connectors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNetworkConnectorOutcome(result.GetResultWithOwnership())
                            : CreateNetworkConnectorOutcome(std::move(result.GetError()));
}

DeleteNetworkConnectorOutcome LambdaCoreClient::DeleteNetworkConnector(const DeleteNetworkConnectorRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNetworkConnector", "Required field: Identifier, is not set");
    return DeleteNetworkConnectorOutcome(Aws::Client::AWSError<LambdaCoreErrors>(LambdaCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2026-04-04/network-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteNetworkConnectorOutcome(result.GetResultWithOwnership())
                            : DeleteNetworkConnectorOutcome(std::move(result.GetError()));
}

GetNetworkConnectorOutcome LambdaCoreClient::GetNetworkConnector(const GetNetworkConnectorRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNetworkConnector", "Required field: Identifier, is not set");
    return GetNetworkConnectorOutcome(Aws::Client::AWSError<LambdaCoreErrors>(LambdaCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2026-04-04/network-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetNetworkConnectorOutcome(result.GetResultWithOwnership())
                            : GetNetworkConnectorOutcome(std::move(result.GetError()));
}

ListNetworkConnectorsOutcome LambdaCoreClient::ListNetworkConnectors(const ListNetworkConnectorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2026-04-04/network-connectors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListNetworkConnectorsOutcome(result.GetResultWithOwnership())
                            : ListNetworkConnectorsOutcome(std::move(result.GetError()));
}

UpdateNetworkConnectorOutcome LambdaCoreClient::UpdateNetworkConnector(const UpdateNetworkConnectorRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNetworkConnector", "Required field: Identifier, is not set");
    return UpdateNetworkConnectorOutcome(Aws::Client::AWSError<LambdaCoreErrors>(LambdaCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2026-04-04/network-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateNetworkConnectorOutcome(result.GetResultWithOwnership())
                            : UpdateNetworkConnectorOutcome(std::move(result.GetError()));
}
