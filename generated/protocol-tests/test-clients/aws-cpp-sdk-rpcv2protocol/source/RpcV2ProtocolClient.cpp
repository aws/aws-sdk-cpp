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
#include <aws/rpcv2protocol/RpcV2ProtocolClient.h>
#include <aws/rpcv2protocol/RpcV2ProtocolEndpointProvider.h>
#include <aws/rpcv2protocol/RpcV2ProtocolErrorMarshaller.h>
#include <aws/rpcv2protocol/model/EmptyInputOutputRequest.h>
#include <aws/rpcv2protocol/model/Float16Request.h>
#include <aws/rpcv2protocol/model/FractionalSecondsRequest.h>
#include <aws/rpcv2protocol/model/GreetingWithErrorsRequest.h>
#include <aws/rpcv2protocol/model/NoInputOutputRequest.h>
#include <aws/rpcv2protocol/model/OptionalInputOutputRequest.h>
#include <aws/rpcv2protocol/model/RecursiveShapesRequest.h>
#include <aws/rpcv2protocol/model/RpcV2CborDenseMapsRequest.h>
#include <aws/rpcv2protocol/model/RpcV2CborListsRequest.h>
#include <aws/rpcv2protocol/model/RpcV2CborSparseMapsRequest.h>
#include <aws/rpcv2protocol/model/SimpleScalarPropertiesRequest.h>
#include <aws/rpcv2protocol/model/SparseNullsOperationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RpcV2Protocol;
using namespace Aws::RpcV2Protocol::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace RpcV2Protocol {
const char SERVICE_NAME[] = "rpcv2protocol";
const char ALLOCATION_TAG[] = "RpcV2ProtocolClient";
}  // namespace RpcV2Protocol
}  // namespace Aws
const char* RpcV2ProtocolClient::GetServiceName() { return SERVICE_NAME; }
const char* RpcV2ProtocolClient::GetAllocationTag() { return ALLOCATION_TAG; }

RpcV2ProtocolClient::RpcV2ProtocolClient(const RpcV2Protocol::RpcV2ProtocolClientConfiguration& clientConfiguration,
                                         std::shared_ptr<RpcV2ProtocolEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RpcV2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RpcV2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RpcV2ProtocolClient::RpcV2ProtocolClient(const AWSCredentials& credentials,
                                         std::shared_ptr<RpcV2ProtocolEndpointProviderBase> endpointProvider,
                                         const RpcV2Protocol::RpcV2ProtocolClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RpcV2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RpcV2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RpcV2ProtocolClient::RpcV2ProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<RpcV2ProtocolEndpointProviderBase> endpointProvider,
                                         const RpcV2Protocol::RpcV2ProtocolClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RpcV2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RpcV2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
RpcV2ProtocolClient::RpcV2ProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RpcV2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RpcV2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RpcV2ProtocolClient::RpcV2ProtocolClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RpcV2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RpcV2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RpcV2ProtocolClient::RpcV2ProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RpcV2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RpcV2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
RpcV2ProtocolClient::~RpcV2ProtocolClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<RpcV2ProtocolEndpointProviderBase>& RpcV2ProtocolClient::accessEndpointProvider() { return m_endpointProvider; }

void RpcV2ProtocolClient::init(const RpcV2Protocol::RpcV2ProtocolClientConfiguration& config) {
  AWSClient::SetServiceClientName("RpcV2Protocol");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "rpcv2protocol");
}

void RpcV2ProtocolClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
RpcV2ProtocolClient::InvokeOperationOutcome RpcV2ProtocolClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        endpointResolutionOutcome.GetResult().AddPathSegments("/service/RpcV2Protocol/operation/");
        endpointResolutionOutcome.GetResult().AddPathSegment(operationName);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

EmptyInputOutputOutcome RpcV2ProtocolClient::EmptyInputOutput(const EmptyInputOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EmptyInputOutputOutcome(result.GetResultWithOwnership())
                            : EmptyInputOutputOutcome(std::move(result.GetError()));
}

Float16Outcome RpcV2ProtocolClient::Float16(const Float16Request& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? Float16Outcome(result.GetResultWithOwnership()) : Float16Outcome(std::move(result.GetError()));
}

FractionalSecondsOutcome RpcV2ProtocolClient::FractionalSeconds(const FractionalSecondsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FractionalSecondsOutcome(result.GetResultWithOwnership())
                            : FractionalSecondsOutcome(std::move(result.GetError()));
}

GreetingWithErrorsOutcome RpcV2ProtocolClient::GreetingWithErrors(const GreetingWithErrorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GreetingWithErrorsOutcome(result.GetResultWithOwnership())
                            : GreetingWithErrorsOutcome(std::move(result.GetError()));
}

NoInputOutputOutcome RpcV2ProtocolClient::NoInputOutput(const NoInputOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NoInputOutputOutcome(result.GetResultWithOwnership()) : NoInputOutputOutcome(std::move(result.GetError()));
}

OptionalInputOutputOutcome RpcV2ProtocolClient::OptionalInputOutput(const OptionalInputOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? OptionalInputOutputOutcome(result.GetResultWithOwnership())
                            : OptionalInputOutputOutcome(std::move(result.GetError()));
}

RecursiveShapesOutcome RpcV2ProtocolClient::RecursiveShapes(const RecursiveShapesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RecursiveShapesOutcome(result.GetResultWithOwnership())
                            : RecursiveShapesOutcome(std::move(result.GetError()));
}

RpcV2CborDenseMapsOutcome RpcV2ProtocolClient::RpcV2CborDenseMaps(const RpcV2CborDenseMapsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RpcV2CborDenseMapsOutcome(result.GetResultWithOwnership())
                            : RpcV2CborDenseMapsOutcome(std::move(result.GetError()));
}

RpcV2CborListsOutcome RpcV2ProtocolClient::RpcV2CborLists(const RpcV2CborListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RpcV2CborListsOutcome(result.GetResultWithOwnership()) : RpcV2CborListsOutcome(std::move(result.GetError()));
}

RpcV2CborSparseMapsOutcome RpcV2ProtocolClient::RpcV2CborSparseMaps(const RpcV2CborSparseMapsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RpcV2CborSparseMapsOutcome(result.GetResultWithOwnership())
                            : RpcV2CborSparseMapsOutcome(std::move(result.GetError()));
}

SimpleScalarPropertiesOutcome RpcV2ProtocolClient::SimpleScalarProperties(const SimpleScalarPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SimpleScalarPropertiesOutcome(result.GetResultWithOwnership())
                            : SimpleScalarPropertiesOutcome(std::move(result.GetError()));
}

SparseNullsOperationOutcome RpcV2ProtocolClient::SparseNullsOperation(const SparseNullsOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SparseNullsOperationOutcome(result.GetResultWithOwnership())
                            : SparseNullsOperationOutcome(std::move(result.GetError()));
}
