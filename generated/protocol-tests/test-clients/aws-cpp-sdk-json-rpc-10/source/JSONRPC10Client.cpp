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
#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/JSONRPC10EndpointProvider.h>
#include <aws/json-rpc-10/JSONRPC10ErrorMarshaller.h>
#include <aws/json-rpc-10/model/ContentTypeParametersRequest.h>
#include <aws/json-rpc-10/model/EmptyInputAndEmptyOutputRequest.h>
#include <aws/json-rpc-10/model/EndpointOperationRequest.h>
#include <aws/json-rpc-10/model/EndpointWithHostLabelOperationRequest.h>
#include <aws/json-rpc-10/model/GreetingWithErrorsRequest.h>
#include <aws/json-rpc-10/model/HostWithPathOperationRequest.h>
#include <aws/json-rpc-10/model/JsonUnionsRequest.h>
#include <aws/json-rpc-10/model/NoInputAndNoOutputRequest.h>
#include <aws/json-rpc-10/model/NoInputAndOutputRequest.h>
#include <aws/json-rpc-10/model/PutWithContentEncodingRequest.h>
#include <aws/json-rpc-10/model/SimpleScalarPropertiesRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::JSONRPC10;
using namespace Aws::JSONRPC10::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace JSONRPC10 {
const char SERVICE_NAME[] = "jsonrpc10";
const char ALLOCATION_TAG[] = "JSONRPC10Client";
}  // namespace JSONRPC10
}  // namespace Aws
const char* JSONRPC10Client::GetServiceName() { return SERVICE_NAME; }
const char* JSONRPC10Client::GetAllocationTag() { return ALLOCATION_TAG; }

JSONRPC10Client::JSONRPC10Client(const JSONRPC10::JSONRPC10ClientConfiguration& clientConfiguration,
                                 std::shared_ptr<JSONRPC10EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

JSONRPC10Client::JSONRPC10Client(const AWSCredentials& credentials, std::shared_ptr<JSONRPC10EndpointProviderBase> endpointProvider,
                                 const JSONRPC10::JSONRPC10ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

JSONRPC10Client::JSONRPC10Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<JSONRPC10EndpointProviderBase> endpointProvider,
                                 const JSONRPC10::JSONRPC10ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
JSONRPC10Client::JSONRPC10Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

JSONRPC10Client::JSONRPC10Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

JSONRPC10Client::JSONRPC10Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
JSONRPC10Client::~JSONRPC10Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<JSONRPC10EndpointProviderBase>& JSONRPC10Client::accessEndpointProvider() { return m_endpointProvider; }

void JSONRPC10Client::init(const JSONRPC10::JSONRPC10ClientConfiguration& config) {
  AWSClient::SetServiceClientName("JSON RPC 10");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "jsonrpc10");
}

void JSONRPC10Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
JSONRPC10Client::InvokeOperationOutcome JSONRPC10Client::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

ContentTypeParametersOutcome JSONRPC10Client::ContentTypeParameters(const ContentTypeParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ContentTypeParametersOutcome(result.GetResultWithOwnership())
                            : ContentTypeParametersOutcome(std::move(result.GetError()));
}

EmptyInputAndEmptyOutputOutcome JSONRPC10Client::EmptyInputAndEmptyOutput(const EmptyInputAndEmptyOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EmptyInputAndEmptyOutputOutcome(result.GetResultWithOwnership())
                            : EmptyInputAndEmptyOutputOutcome(std::move(result.GetError()));
}

EndpointOperationOutcome JSONRPC10Client::EndpointOperation(const EndpointOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EndpointOperationOutcome(result.GetResultWithOwnership())
                            : EndpointOperationOutcome(std::move(result.GetError()));
}

EndpointWithHostLabelOperationOutcome JSONRPC10Client::EndpointWithHostLabelOperation(
    const EndpointWithHostLabelOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EndpointWithHostLabelOperationOutcome(result.GetResultWithOwnership())
                            : EndpointWithHostLabelOperationOutcome(std::move(result.GetError()));
}

GreetingWithErrorsOutcome JSONRPC10Client::GreetingWithErrors(const GreetingWithErrorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GreetingWithErrorsOutcome(result.GetResultWithOwnership())
                            : GreetingWithErrorsOutcome(std::move(result.GetError()));
}

HostWithPathOperationOutcome JSONRPC10Client::HostWithPathOperation(const HostWithPathOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? HostWithPathOperationOutcome(result.GetResultWithOwnership())
                            : HostWithPathOperationOutcome(std::move(result.GetError()));
}

JsonUnionsOutcome JSONRPC10Client::JsonUnions(const JsonUnionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? JsonUnionsOutcome(result.GetResultWithOwnership()) : JsonUnionsOutcome(std::move(result.GetError()));
}

NoInputAndNoOutputOutcome JSONRPC10Client::NoInputAndNoOutput(const NoInputAndNoOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NoInputAndNoOutputOutcome(result.GetResultWithOwnership())
                            : NoInputAndNoOutputOutcome(std::move(result.GetError()));
}

NoInputAndOutputOutcome JSONRPC10Client::NoInputAndOutput(const NoInputAndOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NoInputAndOutputOutcome(result.GetResultWithOwnership())
                            : NoInputAndOutputOutcome(std::move(result.GetError()));
}

PutWithContentEncodingOutcome JSONRPC10Client::PutWithContentEncoding(const PutWithContentEncodingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutWithContentEncodingOutcome(result.GetResultWithOwnership())
                            : PutWithContentEncodingOutcome(std::move(result.GetError()));
}

SimpleScalarPropertiesOutcome JSONRPC10Client::SimpleScalarProperties(const SimpleScalarPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SimpleScalarPropertiesOutcome(result.GetResultWithOwnership())
                            : SimpleScalarPropertiesOutcome(std::move(result.GetError()));
}
