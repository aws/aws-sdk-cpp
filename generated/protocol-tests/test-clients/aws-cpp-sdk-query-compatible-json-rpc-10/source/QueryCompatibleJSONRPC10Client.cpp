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
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10Client.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10EndpointProvider.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10ErrorMarshaller.h>
#include <aws/query-compatible-json-rpc-10/model/QueryCompatibleOperationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::QueryCompatibleJSONRPC10;
using namespace Aws::QueryCompatibleJSONRPC10::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace QueryCompatibleJSONRPC10 {
const char SERVICE_NAME[] = "query-compatible-jsonrpc10";
const char ALLOCATION_TAG[] = "QueryCompatibleJSONRPC10Client";
}  // namespace QueryCompatibleJSONRPC10
}  // namespace Aws
const char* QueryCompatibleJSONRPC10Client::GetServiceName() { return SERVICE_NAME; }
const char* QueryCompatibleJSONRPC10Client::GetAllocationTag() { return ALLOCATION_TAG; }

QueryCompatibleJSONRPC10Client::QueryCompatibleJSONRPC10Client(
    const QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration& clientConfiguration,
    std::shared_ptr<QueryCompatibleJSONRPC10EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QueryCompatibleJSONRPC10ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<QueryCompatibleJSONRPC10EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QueryCompatibleJSONRPC10Client::QueryCompatibleJSONRPC10Client(
    const AWSCredentials& credentials, std::shared_ptr<QueryCompatibleJSONRPC10EndpointProviderBase> endpointProvider,
    const QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QueryCompatibleJSONRPC10ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<QueryCompatibleJSONRPC10EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QueryCompatibleJSONRPC10Client::QueryCompatibleJSONRPC10Client(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<QueryCompatibleJSONRPC10EndpointProviderBase> endpointProvider,
    const QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QueryCompatibleJSONRPC10ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<QueryCompatibleJSONRPC10EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
QueryCompatibleJSONRPC10Client::QueryCompatibleJSONRPC10Client(const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QueryCompatibleJSONRPC10ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QueryCompatibleJSONRPC10EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QueryCompatibleJSONRPC10Client::QueryCompatibleJSONRPC10Client(const AWSCredentials& credentials,
                                                               const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QueryCompatibleJSONRPC10ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QueryCompatibleJSONRPC10EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QueryCompatibleJSONRPC10Client::QueryCompatibleJSONRPC10Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QueryCompatibleJSONRPC10ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QueryCompatibleJSONRPC10EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
QueryCompatibleJSONRPC10Client::~QueryCompatibleJSONRPC10Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<QueryCompatibleJSONRPC10EndpointProviderBase>& QueryCompatibleJSONRPC10Client::accessEndpointProvider() {
  return m_endpointProvider;
}

void QueryCompatibleJSONRPC10Client::init(const QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration& config) {
  AWSClient::SetServiceClientName("Query Compatible JSON RPC 10");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void QueryCompatibleJSONRPC10Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

QueryCompatibleOperationOutcome QueryCompatibleJSONRPC10Client::QueryCompatibleOperation(
    const QueryCompatibleOperationRequest& request) const {
  AWS_OPERATION_GUARD(QueryCompatibleOperation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, QueryCompatibleOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, QueryCompatibleOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, QueryCompatibleOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".QueryCompatibleOperation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<QueryCompatibleOperationOutcome>(
      [&]() -> QueryCompatibleOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, QueryCompatibleOperation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        return QueryCompatibleOperationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
