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
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
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
    : AwsSmithyClientT(clientConfiguration, GetServiceName(), "Query Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
                       Aws::MakeShared<QueryProtocolErrorMarshaller>(ALLOCATION_TAG),
                       endpointProvider ? endpointProvider : Aws::MakeShared<QueryProtocolEndpointProvider>(ALLOCATION_TAG),
                       Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
                           ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
                       {
                           {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                            smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region,
                                                    clientConfiguration.ResolveCredentialProviderConfig()}},
                       }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsQueryProtocol>(ALLOCATION_TAG));
}

QueryProtocolClient::QueryProtocolClient(const AWSCredentials& credentials,
                                         std::shared_ptr<QueryProtocolEndpointProviderBase> endpointProvider,
                                         const QueryProtocol::QueryProtocolClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Query Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<QueryProtocolErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<QueryProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsQueryProtocol>(ALLOCATION_TAG));
}

QueryProtocolClient::QueryProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<QueryProtocolEndpointProviderBase> endpointProvider,
                                         const QueryProtocol::QueryProtocolClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Query Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<QueryProtocolErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<QueryProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsQueryProtocol>(ALLOCATION_TAG));
}

/* Legacy constructors due deprecation */
QueryProtocolClient::QueryProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(clientConfiguration, GetServiceName(), "Query Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
                       Aws::MakeShared<QueryProtocolErrorMarshaller>(ALLOCATION_TAG),
                       Aws::MakeShared<QueryProtocolEndpointProvider>(ALLOCATION_TAG),
                       Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
                           ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
                       {
                           {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                            smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region,
                                                    clientConfiguration.ResolveCredentialProviderConfig()}},
                       }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsQueryProtocol>(ALLOCATION_TAG));
}

QueryProtocolClient::QueryProtocolClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Query Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<QueryProtocolErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<QueryProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsQueryProtocol>(ALLOCATION_TAG));
}

QueryProtocolClient::QueryProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Query Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<QueryProtocolErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<QueryProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsQueryProtocol>(ALLOCATION_TAG));
}
/* End of legacy constructors due deprecation */

QueryProtocolClient::~QueryProtocolClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<QueryProtocolEndpointProviderBase>& QueryProtocolClient::accessEndpointProvider() { return m_endpointProvider; }

void QueryProtocolClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
Aws::String QueryProtocolClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert,
                                                              const char* region) const {
  EndpointUpdateCallback endpointCallback = [&](Aws::Endpoint::AWSEndpoint& endpoint) {
    Aws::StringStream ss;
    ss << "?" << requestToConvert.SerializePayload();
    endpoint.SetQueryString(ss.str());
  };
  return AwsSmithyClientT::GeneratePresignedUrl(std::move(endpointCallback), Aws::Http::HttpMethod::HTTP_GET, region, GetServiceName(),
                                                3600, {}, {});
}
QueryProtocolClient::InvokeOperationOutcome QueryProtocolClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                                        Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_clientConfiguration.telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(serviceName, {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto result =
            MakeRequestDeserialize(&request, operationName, httpMethod,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); });
        return result.IsSuccess() ? InvokeOperationOutcome(result.GetResultWithOwnership())
                                  : InvokeOperationOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
DatetimeOffsetsOutcome QueryProtocolClient::DatetimeOffsets(const DatetimeOffsetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return DatetimeOffsetsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return DatetimeOffsetsOutcome(
      BuildOperationResult<DatetimeOffsetsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

EmptyInputAndEmptyOutputOutcome QueryProtocolClient::EmptyInputAndEmptyOutput(const EmptyInputAndEmptyOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EmptyInputAndEmptyOutputOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return EmptyInputAndEmptyOutputOutcome(
      BuildOperationResult<EmptyInputAndEmptyOutputResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

EndpointOperationOutcome QueryProtocolClient::EndpointOperation(const EndpointOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EndpointOperationOutcome(std::move(result.GetError()));
  }
  return EndpointOperationOutcome(result.GetResultWithOwnership());
}

EndpointWithHostLabelOperationOutcome QueryProtocolClient::EndpointWithHostLabelOperation(
    const EndpointWithHostLabelOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EndpointWithHostLabelOperationOutcome(std::move(result.GetError()));
  }
  return EndpointWithHostLabelOperationOutcome(result.GetResultWithOwnership());
}

FlattenedXmlMapOutcome QueryProtocolClient::FlattenedXmlMap(const FlattenedXmlMapRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return FlattenedXmlMapOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return FlattenedXmlMapOutcome(
      BuildOperationResult<FlattenedXmlMapResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

FlattenedXmlMapWithXmlNameOutcome QueryProtocolClient::FlattenedXmlMapWithXmlName(const FlattenedXmlMapWithXmlNameRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return FlattenedXmlMapWithXmlNameOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return FlattenedXmlMapWithXmlNameOutcome(
      BuildOperationResult<FlattenedXmlMapWithXmlNameResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

FlattenedXmlMapWithXmlNamespaceOutcome QueryProtocolClient::FlattenedXmlMapWithXmlNamespace(
    const FlattenedXmlMapWithXmlNamespaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return FlattenedXmlMapWithXmlNamespaceOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return FlattenedXmlMapWithXmlNamespaceOutcome(
      BuildOperationResult<FlattenedXmlMapWithXmlNamespaceResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

FractionalSecondsOutcome QueryProtocolClient::FractionalSeconds(const FractionalSecondsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return FractionalSecondsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return FractionalSecondsOutcome(
      BuildOperationResult<FractionalSecondsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

GreetingWithErrorsOutcome QueryProtocolClient::GreetingWithErrors(const GreetingWithErrorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return GreetingWithErrorsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return GreetingWithErrorsOutcome(
      BuildOperationResult<GreetingWithErrorsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

HostWithPathOperationOutcome QueryProtocolClient::HostWithPathOperation(const HostWithPathOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return HostWithPathOperationOutcome(std::move(result.GetError()));
  }
  return HostWithPathOperationOutcome(result.GetResultWithOwnership());
}

IgnoresWrappingXmlNameOutcome QueryProtocolClient::IgnoresWrappingXmlName(const IgnoresWrappingXmlNameRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return IgnoresWrappingXmlNameOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return IgnoresWrappingXmlNameOutcome(
      BuildOperationResult<IgnoresWrappingXmlNameResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

NestedStructuresOutcome QueryProtocolClient::NestedStructures(const NestedStructuresRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return NestedStructuresOutcome(std::move(result.GetError()));
  }
  return NestedStructuresOutcome(result.GetResultWithOwnership());
}

NoInputAndNoOutputOutcome QueryProtocolClient::NoInputAndNoOutput(const NoInputAndNoOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return NoInputAndNoOutputOutcome(std::move(result.GetError()));
  }
  return NoInputAndNoOutputOutcome(result.GetResultWithOwnership());
}

NoInputAndOutputOutcome QueryProtocolClient::NoInputAndOutput(const NoInputAndOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return NoInputAndOutputOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return NoInputAndOutputOutcome(
      BuildOperationResult<NoInputAndOutputResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

PutWithContentEncodingOutcome QueryProtocolClient::PutWithContentEncoding(const PutWithContentEncodingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return PutWithContentEncodingOutcome(std::move(result.GetError()));
  }
  return PutWithContentEncodingOutcome(result.GetResultWithOwnership());
}

QueryIdempotencyTokenAutoFillOutcome QueryProtocolClient::QueryIdempotencyTokenAutoFill(
    const QueryIdempotencyTokenAutoFillRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return QueryIdempotencyTokenAutoFillOutcome(std::move(result.GetError()));
  }
  return QueryIdempotencyTokenAutoFillOutcome(result.GetResultWithOwnership());
}

QueryListsOutcome QueryProtocolClient::QueryLists(const QueryListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return QueryListsOutcome(std::move(result.GetError()));
  }
  return QueryListsOutcome(result.GetResultWithOwnership());
}

QueryMapsOutcome QueryProtocolClient::QueryMaps(const QueryMapsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return QueryMapsOutcome(std::move(result.GetError()));
  }
  return QueryMapsOutcome(result.GetResultWithOwnership());
}

QueryTimestampsOutcome QueryProtocolClient::QueryTimestamps(const QueryTimestampsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return QueryTimestampsOutcome(std::move(result.GetError()));
  }
  return QueryTimestampsOutcome(result.GetResultWithOwnership());
}

RecursiveXmlShapesOutcome QueryProtocolClient::RecursiveXmlShapes(const RecursiveXmlShapesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return RecursiveXmlShapesOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return RecursiveXmlShapesOutcome(
      BuildOperationResult<RecursiveXmlShapesResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

SimpleInputParamsOutcome QueryProtocolClient::SimpleInputParams(const SimpleInputParamsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return SimpleInputParamsOutcome(std::move(result.GetError()));
  }
  return SimpleInputParamsOutcome(result.GetResultWithOwnership());
}

SimpleScalarXmlPropertiesOutcome QueryProtocolClient::SimpleScalarXmlProperties(const SimpleScalarXmlPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return SimpleScalarXmlPropertiesOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return SimpleScalarXmlPropertiesOutcome(
      BuildOperationResult<SimpleScalarXmlPropertiesResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlBlobsOutcome QueryProtocolClient::XmlBlobs(const XmlBlobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlBlobsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlBlobsOutcome(BuildOperationResult<XmlBlobsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlEmptyBlobsOutcome QueryProtocolClient::XmlEmptyBlobs(const XmlEmptyBlobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlEmptyBlobsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlEmptyBlobsOutcome(BuildOperationResult<XmlEmptyBlobsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlEmptyListsOutcome QueryProtocolClient::XmlEmptyLists(const XmlEmptyListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlEmptyListsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlEmptyListsOutcome(BuildOperationResult<XmlEmptyListsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlEmptyMapsOutcome QueryProtocolClient::XmlEmptyMaps(const XmlEmptyMapsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlEmptyMapsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlEmptyMapsOutcome(BuildOperationResult<XmlEmptyMapsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlEnumsOutcome QueryProtocolClient::XmlEnums(const XmlEnumsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlEnumsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlEnumsOutcome(BuildOperationResult<XmlEnumsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlIntEnumsOutcome QueryProtocolClient::XmlIntEnums(const XmlIntEnumsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlIntEnumsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlIntEnumsOutcome(BuildOperationResult<XmlIntEnumsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlListsOutcome QueryProtocolClient::XmlLists(const XmlListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlListsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlListsOutcome(BuildOperationResult<XmlListsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlMapsOutcome QueryProtocolClient::XmlMaps(const XmlMapsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlMapsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlMapsOutcome(BuildOperationResult<XmlMapsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlMapsXmlNameOutcome QueryProtocolClient::XmlMapsXmlName(const XmlMapsXmlNameRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlMapsXmlNameOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlMapsXmlNameOutcome(
      BuildOperationResult<XmlMapsXmlNameResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlNamespacesOutcome QueryProtocolClient::XmlNamespaces(const XmlNamespacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlNamespacesOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlNamespacesOutcome(BuildOperationResult<XmlNamespacesResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlTimestampsOutcome QueryProtocolClient::XmlTimestamps(const XmlTimestampsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlTimestampsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlTimestampsOutcome(BuildOperationResult<XmlTimestampsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
