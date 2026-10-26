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
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2ProtocolClient.h>
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2ProtocolEndpointProvider.h>
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2ProtocolErrorMarshaller.h>
#include <aws/non-query-compatible-rpcv2-protocol/model/NonQueryCompatibleOperationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::NonQueryCompatibleRpcV2Protocol;
using namespace Aws::NonQueryCompatibleRpcV2Protocol::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace NonQueryCompatibleRpcV2Protocol {
const char SERVICE_NAME[] = "nonquerycompatiblerpcv2protocol";
const char ALLOCATION_TAG[] = "NonQueryCompatibleRpcV2ProtocolClient";
}  // namespace NonQueryCompatibleRpcV2Protocol
}  // namespace Aws
const char* NonQueryCompatibleRpcV2ProtocolClient::GetServiceName() { return SERVICE_NAME; }
const char* NonQueryCompatibleRpcV2ProtocolClient::GetAllocationTag() { return ALLOCATION_TAG; }

NonQueryCompatibleRpcV2ProtocolClient::NonQueryCompatibleRpcV2ProtocolClient(
    const NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolClientConfiguration& clientConfiguration,
    std::shared_ptr<NonQueryCompatibleRpcV2ProtocolEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NonQueryCompatibleRpcV2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<NonQueryCompatibleRpcV2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NonQueryCompatibleRpcV2ProtocolClient::NonQueryCompatibleRpcV2ProtocolClient(
    const AWSCredentials& credentials, std::shared_ptr<NonQueryCompatibleRpcV2ProtocolEndpointProviderBase> endpointProvider,
    const NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NonQueryCompatibleRpcV2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<NonQueryCompatibleRpcV2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NonQueryCompatibleRpcV2ProtocolClient::NonQueryCompatibleRpcV2ProtocolClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<NonQueryCompatibleRpcV2ProtocolEndpointProviderBase> endpointProvider,
    const NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NonQueryCompatibleRpcV2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<NonQueryCompatibleRpcV2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
NonQueryCompatibleRpcV2ProtocolClient::NonQueryCompatibleRpcV2ProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NonQueryCompatibleRpcV2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NonQueryCompatibleRpcV2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NonQueryCompatibleRpcV2ProtocolClient::NonQueryCompatibleRpcV2ProtocolClient(const AWSCredentials& credentials,
                                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NonQueryCompatibleRpcV2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NonQueryCompatibleRpcV2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NonQueryCompatibleRpcV2ProtocolClient::NonQueryCompatibleRpcV2ProtocolClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NonQueryCompatibleRpcV2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NonQueryCompatibleRpcV2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
NonQueryCompatibleRpcV2ProtocolClient::~NonQueryCompatibleRpcV2ProtocolClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<NonQueryCompatibleRpcV2ProtocolEndpointProviderBase>& NonQueryCompatibleRpcV2ProtocolClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void NonQueryCompatibleRpcV2ProtocolClient::init(
    const NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolClientConfiguration& config) {
  AWSClient::SetServiceClientName("Non Query Compatible RpcV2 Protocol");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "nonquerycompatiblerpcv2protocol");
}

void NonQueryCompatibleRpcV2ProtocolClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
NonQueryCompatibleRpcV2ProtocolClient::InvokeOperationOutcome NonQueryCompatibleRpcV2ProtocolClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
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

        endpointResolutionOutcome.GetResult().AddPathSegments("/service/NonQueryCompatibleRpcV2Protocol/operation/");
        endpointResolutionOutcome.GetResult().AddPathSegment(operationName);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

NonQueryCompatibleOperationOutcome NonQueryCompatibleRpcV2ProtocolClient::NonQueryCompatibleOperation(
    const NonQueryCompatibleOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NonQueryCompatibleOperationOutcome(result.GetResultWithOwnership())
                            : NonQueryCompatibleOperationOutcome(std::move(result.GetError()));
}
