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
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/QueryProtocolEndpointProvider.h>
#include <aws/query-protocol/QueryProtocolErrorMarshaller.h>
#include <aws/query-protocol/model/DatetimeOffsetsRequest.h>
#include <aws/query-protocol/model/EmptyInputAndEmptyOutputRequest.h>
#include <aws/query-protocol/model/EndpointOperationRequest.h>
#include <aws/query-protocol/model/EndpointWithHostLabelOperationRequest.h>
#include <aws/query-protocol/model/FlattenedXmlMapRequest.h>
#include <aws/query-protocol/model/FlattenedXmlMapWithXmlNameRequest.h>
#include <aws/query-protocol/model/FlattenedXmlMapWithXmlNamespaceRequest.h>
#include <aws/query-protocol/model/FractionalSecondsRequest.h>
#include <aws/query-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/query-protocol/model/HostWithPathOperationRequest.h>
#include <aws/query-protocol/model/IgnoresWrappingXmlNameRequest.h>
#include <aws/query-protocol/model/NestedStructuresRequest.h>
#include <aws/query-protocol/model/NoInputAndNoOutputRequest.h>
#include <aws/query-protocol/model/NoInputAndOutputRequest.h>
#include <aws/query-protocol/model/PutWithContentEncodingRequest.h>
#include <aws/query-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>
#include <aws/query-protocol/model/QueryListsRequest.h>
#include <aws/query-protocol/model/QueryMapsRequest.h>
#include <aws/query-protocol/model/QueryTimestampsRequest.h>
#include <aws/query-protocol/model/RecursiveXmlShapesRequest.h>
#include <aws/query-protocol/model/SimpleInputParamsRequest.h>
#include <aws/query-protocol/model/SimpleScalarXmlPropertiesRequest.h>
#include <aws/query-protocol/model/XmlBlobsRequest.h>
#include <aws/query-protocol/model/XmlEmptyBlobsRequest.h>
#include <aws/query-protocol/model/XmlEmptyListsRequest.h>
#include <aws/query-protocol/model/XmlEmptyMapsRequest.h>
#include <aws/query-protocol/model/XmlEnumsRequest.h>
#include <aws/query-protocol/model/XmlIntEnumsRequest.h>
#include <aws/query-protocol/model/XmlListsRequest.h>
#include <aws/query-protocol/model/XmlMapsRequest.h>
#include <aws/query-protocol/model/XmlMapsXmlNameRequest.h>
#include <aws/query-protocol/model/XmlNamespacesRequest.h>
#include <aws/query-protocol/model/XmlTimestampsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::QueryProtocol;
using namespace Aws::QueryProtocol::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace QueryProtocol {
const char SERVICE_NAME[] = "awsquery";
const char ALLOCATION_TAG[] = "QueryProtocolClient";
}  // namespace QueryProtocol
}  // namespace Aws
const char* QueryProtocolClient::GetServiceName() { return SERVICE_NAME; }
const char* QueryProtocolClient::GetAllocationTag() { return ALLOCATION_TAG; }

QueryProtocolClient::QueryProtocolClient(const QueryProtocol::QueryProtocolClientConfiguration& clientConfiguration,
                                         std::shared_ptr<QueryProtocolEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QueryProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QueryProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QueryProtocolClient::QueryProtocolClient(const AWSCredentials& credentials,
                                         std::shared_ptr<QueryProtocolEndpointProviderBase> endpointProvider,
                                         const QueryProtocol::QueryProtocolClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QueryProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QueryProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QueryProtocolClient::QueryProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<QueryProtocolEndpointProviderBase> endpointProvider,
                                         const QueryProtocol::QueryProtocolClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QueryProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QueryProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
QueryProtocolClient::QueryProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QueryProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QueryProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QueryProtocolClient::QueryProtocolClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QueryProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QueryProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QueryProtocolClient::QueryProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QueryProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QueryProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
QueryProtocolClient::~QueryProtocolClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<QueryProtocolEndpointProviderBase>& QueryProtocolClient::accessEndpointProvider() { return m_endpointProvider; }

void QueryProtocolClient::init(const QueryProtocol::QueryProtocolClientConfiguration& config) {
  AWSClient::SetServiceClientName("Query Protocol");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "awsquery");
}

void QueryProtocolClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String QueryProtocolClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert,
                                                              const char* region) const {
  if (!m_endpointProvider) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess()) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

QueryProtocolClient::InvokeOperationOutcome QueryProtocolClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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
DatetimeOffsetsOutcome QueryProtocolClient::DatetimeOffsets(const DatetimeOffsetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DatetimeOffsetsOutcome(result.GetResultWithOwnership())
                            : DatetimeOffsetsOutcome(std::move(result.GetError()));
}

EmptyInputAndEmptyOutputOutcome QueryProtocolClient::EmptyInputAndEmptyOutput(const EmptyInputAndEmptyOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EmptyInputAndEmptyOutputOutcome(result.GetResultWithOwnership())
                            : EmptyInputAndEmptyOutputOutcome(std::move(result.GetError()));
}

EndpointOperationOutcome QueryProtocolClient::EndpointOperation(const EndpointOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EndpointOperationOutcome(result.GetResultWithOwnership())
                            : EndpointOperationOutcome(std::move(result.GetError()));
}

EndpointWithHostLabelOperationOutcome QueryProtocolClient::EndpointWithHostLabelOperation(
    const EndpointWithHostLabelOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EndpointWithHostLabelOperationOutcome(result.GetResultWithOwnership())
                            : EndpointWithHostLabelOperationOutcome(std::move(result.GetError()));
}

FlattenedXmlMapOutcome QueryProtocolClient::FlattenedXmlMap(const FlattenedXmlMapRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FlattenedXmlMapOutcome(result.GetResultWithOwnership())
                            : FlattenedXmlMapOutcome(std::move(result.GetError()));
}

FlattenedXmlMapWithXmlNameOutcome QueryProtocolClient::FlattenedXmlMapWithXmlName(const FlattenedXmlMapWithXmlNameRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FlattenedXmlMapWithXmlNameOutcome(result.GetResultWithOwnership())
                            : FlattenedXmlMapWithXmlNameOutcome(std::move(result.GetError()));
}

FlattenedXmlMapWithXmlNamespaceOutcome QueryProtocolClient::FlattenedXmlMapWithXmlNamespace(
    const FlattenedXmlMapWithXmlNamespaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FlattenedXmlMapWithXmlNamespaceOutcome(result.GetResultWithOwnership())
                            : FlattenedXmlMapWithXmlNamespaceOutcome(std::move(result.GetError()));
}

FractionalSecondsOutcome QueryProtocolClient::FractionalSeconds(const FractionalSecondsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FractionalSecondsOutcome(result.GetResultWithOwnership())
                            : FractionalSecondsOutcome(std::move(result.GetError()));
}

GreetingWithErrorsOutcome QueryProtocolClient::GreetingWithErrors(const GreetingWithErrorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GreetingWithErrorsOutcome(result.GetResultWithOwnership())
                            : GreetingWithErrorsOutcome(std::move(result.GetError()));
}

HostWithPathOperationOutcome QueryProtocolClient::HostWithPathOperation(const HostWithPathOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? HostWithPathOperationOutcome(result.GetResultWithOwnership())
                            : HostWithPathOperationOutcome(std::move(result.GetError()));
}

IgnoresWrappingXmlNameOutcome QueryProtocolClient::IgnoresWrappingXmlName(const IgnoresWrappingXmlNameRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? IgnoresWrappingXmlNameOutcome(result.GetResultWithOwnership())
                            : IgnoresWrappingXmlNameOutcome(std::move(result.GetError()));
}

NestedStructuresOutcome QueryProtocolClient::NestedStructures(const NestedStructuresRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NestedStructuresOutcome(result.GetResultWithOwnership())
                            : NestedStructuresOutcome(std::move(result.GetError()));
}

NoInputAndNoOutputOutcome QueryProtocolClient::NoInputAndNoOutput(const NoInputAndNoOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NoInputAndNoOutputOutcome(result.GetResultWithOwnership())
                            : NoInputAndNoOutputOutcome(std::move(result.GetError()));
}

NoInputAndOutputOutcome QueryProtocolClient::NoInputAndOutput(const NoInputAndOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NoInputAndOutputOutcome(result.GetResultWithOwnership())
                            : NoInputAndOutputOutcome(std::move(result.GetError()));
}

PutWithContentEncodingOutcome QueryProtocolClient::PutWithContentEncoding(const PutWithContentEncodingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutWithContentEncodingOutcome(result.GetResultWithOwnership())
                            : PutWithContentEncodingOutcome(std::move(result.GetError()));
}

QueryIdempotencyTokenAutoFillOutcome QueryProtocolClient::QueryIdempotencyTokenAutoFill(
    const QueryIdempotencyTokenAutoFillRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryIdempotencyTokenAutoFillOutcome(result.GetResultWithOwnership())
                            : QueryIdempotencyTokenAutoFillOutcome(std::move(result.GetError()));
}

QueryListsOutcome QueryProtocolClient::QueryLists(const QueryListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryListsOutcome(result.GetResultWithOwnership()) : QueryListsOutcome(std::move(result.GetError()));
}

QueryMapsOutcome QueryProtocolClient::QueryMaps(const QueryMapsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryMapsOutcome(result.GetResultWithOwnership()) : QueryMapsOutcome(std::move(result.GetError()));
}

QueryTimestampsOutcome QueryProtocolClient::QueryTimestamps(const QueryTimestampsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryTimestampsOutcome(result.GetResultWithOwnership())
                            : QueryTimestampsOutcome(std::move(result.GetError()));
}

RecursiveXmlShapesOutcome QueryProtocolClient::RecursiveXmlShapes(const RecursiveXmlShapesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RecursiveXmlShapesOutcome(result.GetResultWithOwnership())
                            : RecursiveXmlShapesOutcome(std::move(result.GetError()));
}

SimpleInputParamsOutcome QueryProtocolClient::SimpleInputParams(const SimpleInputParamsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SimpleInputParamsOutcome(result.GetResultWithOwnership())
                            : SimpleInputParamsOutcome(std::move(result.GetError()));
}

SimpleScalarXmlPropertiesOutcome QueryProtocolClient::SimpleScalarXmlProperties(const SimpleScalarXmlPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SimpleScalarXmlPropertiesOutcome(result.GetResultWithOwnership())
                            : SimpleScalarXmlPropertiesOutcome(std::move(result.GetError()));
}

XmlBlobsOutcome QueryProtocolClient::XmlBlobs(const XmlBlobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlBlobsOutcome(result.GetResultWithOwnership()) : XmlBlobsOutcome(std::move(result.GetError()));
}

XmlEmptyBlobsOutcome QueryProtocolClient::XmlEmptyBlobs(const XmlEmptyBlobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlEmptyBlobsOutcome(result.GetResultWithOwnership()) : XmlEmptyBlobsOutcome(std::move(result.GetError()));
}

XmlEmptyListsOutcome QueryProtocolClient::XmlEmptyLists(const XmlEmptyListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlEmptyListsOutcome(result.GetResultWithOwnership()) : XmlEmptyListsOutcome(std::move(result.GetError()));
}

XmlEmptyMapsOutcome QueryProtocolClient::XmlEmptyMaps(const XmlEmptyMapsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlEmptyMapsOutcome(result.GetResultWithOwnership()) : XmlEmptyMapsOutcome(std::move(result.GetError()));
}

XmlEnumsOutcome QueryProtocolClient::XmlEnums(const XmlEnumsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlEnumsOutcome(result.GetResultWithOwnership()) : XmlEnumsOutcome(std::move(result.GetError()));
}

XmlIntEnumsOutcome QueryProtocolClient::XmlIntEnums(const XmlIntEnumsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlIntEnumsOutcome(result.GetResultWithOwnership()) : XmlIntEnumsOutcome(std::move(result.GetError()));
}

XmlListsOutcome QueryProtocolClient::XmlLists(const XmlListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlListsOutcome(result.GetResultWithOwnership()) : XmlListsOutcome(std::move(result.GetError()));
}

XmlMapsOutcome QueryProtocolClient::XmlMaps(const XmlMapsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlMapsOutcome(result.GetResultWithOwnership()) : XmlMapsOutcome(std::move(result.GetError()));
}

XmlMapsXmlNameOutcome QueryProtocolClient::XmlMapsXmlName(const XmlMapsXmlNameRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlMapsXmlNameOutcome(result.GetResultWithOwnership()) : XmlMapsXmlNameOutcome(std::move(result.GetError()));
}

XmlNamespacesOutcome QueryProtocolClient::XmlNamespaces(const XmlNamespacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlNamespacesOutcome(result.GetResultWithOwnership()) : XmlNamespacesOutcome(std::move(result.GetError()));
}

XmlTimestampsOutcome QueryProtocolClient::XmlTimestamps(const XmlTimestampsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlTimestampsOutcome(result.GetResultWithOwnership()) : XmlTimestampsOutcome(std::move(result.GetError()));
}
