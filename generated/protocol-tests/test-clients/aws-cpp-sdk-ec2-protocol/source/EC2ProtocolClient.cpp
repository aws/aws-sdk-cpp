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
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/EC2ProtocolEndpointProvider.h>
#include <aws/ec2-protocol/EC2ProtocolErrorMarshaller.h>
#include <aws/ec2-protocol/model/DatetimeOffsetsRequest.h>
#include <aws/ec2-protocol/model/EmptyInputAndEmptyOutputRequest.h>
#include <aws/ec2-protocol/model/EndpointOperationRequest.h>
#include <aws/ec2-protocol/model/EndpointWithHostLabelOperationRequest.h>
#include <aws/ec2-protocol/model/FractionalSecondsRequest.h>
#include <aws/ec2-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/ec2-protocol/model/HostWithPathOperationRequest.h>
#include <aws/ec2-protocol/model/IgnoresWrappingXmlNameRequest.h>
#include <aws/ec2-protocol/model/NestedStructuresRequest.h>
#include <aws/ec2-protocol/model/NoInputAndOutputRequest.h>
#include <aws/ec2-protocol/model/PutWithContentEncodingRequest.h>
#include <aws/ec2-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>
#include <aws/ec2-protocol/model/QueryListsRequest.h>
#include <aws/ec2-protocol/model/QueryTimestampsRequest.h>
#include <aws/ec2-protocol/model/RecursiveXmlShapesRequest.h>
#include <aws/ec2-protocol/model/SimpleInputParamsRequest.h>
#include <aws/ec2-protocol/model/SimpleScalarXmlPropertiesRequest.h>
#include <aws/ec2-protocol/model/XmlBlobsRequest.h>
#include <aws/ec2-protocol/model/XmlEmptyBlobsRequest.h>
#include <aws/ec2-protocol/model/XmlEmptyListsRequest.h>
#include <aws/ec2-protocol/model/XmlEnumsRequest.h>
#include <aws/ec2-protocol/model/XmlIntEnumsRequest.h>
#include <aws/ec2-protocol/model/XmlListsRequest.h>
#include <aws/ec2-protocol/model/XmlNamespacesRequest.h>
#include <aws/ec2-protocol/model/XmlTimestampsRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EC2Protocol;
using namespace Aws::EC2Protocol::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace EC2Protocol {
const char SERVICE_NAME[] = "ec2query";
const char ALLOCATION_TAG[] = "EC2ProtocolClient";
}  // namespace EC2Protocol
}  // namespace Aws
const char* EC2ProtocolClient::GetServiceName() { return SERVICE_NAME; }
const char* EC2ProtocolClient::GetAllocationTag() { return ALLOCATION_TAG; }

EC2ProtocolClient::EC2ProtocolClient(const EC2Protocol::EC2ProtocolClientConfiguration& clientConfiguration,
                                     std::shared_ptr<EC2ProtocolEndpointProviderBase> endpointProvider)
    : AwsSmithyClientT(clientConfiguration, GetServiceName(), "EC2 Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
                       Aws::MakeShared<EC2ProtocolErrorMarshaller>(ALLOCATION_TAG),
                       endpointProvider ? endpointProvider : Aws::MakeShared<EC2ProtocolEndpointProvider>(ALLOCATION_TAG),
                       Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
                           ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
                       {
                           {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                            smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region,
                                                    clientConfiguration.ResolveCredentialProviderConfig()}},
                       }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::Ec2QueryProtocol>(ALLOCATION_TAG));
}

EC2ProtocolClient::EC2ProtocolClient(const AWSCredentials& credentials, std::shared_ptr<EC2ProtocolEndpointProviderBase> endpointProvider,
                                     const EC2Protocol::EC2ProtocolClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "EC2 Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<EC2ProtocolErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<EC2ProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::Ec2QueryProtocol>(ALLOCATION_TAG));
}

EC2ProtocolClient::EC2ProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<EC2ProtocolEndpointProviderBase> endpointProvider,
                                     const EC2Protocol::EC2ProtocolClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "EC2 Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<EC2ProtocolErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<EC2ProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::Ec2QueryProtocol>(ALLOCATION_TAG));
}

/* Legacy constructors due deprecation */
EC2ProtocolClient::EC2ProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(clientConfiguration, GetServiceName(), "EC2 Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
                       Aws::MakeShared<EC2ProtocolErrorMarshaller>(ALLOCATION_TAG),
                       Aws::MakeShared<EC2ProtocolEndpointProvider>(ALLOCATION_TAG),
                       Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
                           ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
                       {
                           {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                            smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region,
                                                    clientConfiguration.ResolveCredentialProviderConfig()}},
                       }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::Ec2QueryProtocol>(ALLOCATION_TAG));
}

EC2ProtocolClient::EC2ProtocolClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "EC2 Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<EC2ProtocolErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<EC2ProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::Ec2QueryProtocol>(ALLOCATION_TAG));
}

EC2ProtocolClient::EC2ProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "EC2 Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<EC2ProtocolErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<EC2ProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::Ec2QueryProtocol>(ALLOCATION_TAG));
}
/* End of legacy constructors due deprecation */

EC2ProtocolClient::~EC2ProtocolClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<EC2ProtocolEndpointProviderBase>& EC2ProtocolClient::accessEndpointProvider() { return m_endpointProvider; }

void EC2ProtocolClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
EC2ProtocolClient::InvokeOperationOutcome EC2ProtocolClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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
DatetimeOffsetsOutcome EC2ProtocolClient::DatetimeOffsets(const DatetimeOffsetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return DatetimeOffsetsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return DatetimeOffsetsOutcome(
      BuildOperationResult<DatetimeOffsetsResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

EmptyInputAndEmptyOutputOutcome EC2ProtocolClient::EmptyInputAndEmptyOutput(const EmptyInputAndEmptyOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EmptyInputAndEmptyOutputOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return EmptyInputAndEmptyOutputOutcome(
      BuildOperationResult<EmptyInputAndEmptyOutputResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

EndpointOperationOutcome EC2ProtocolClient::EndpointOperation(const EndpointOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EndpointOperationOutcome(std::move(result.GetError()));
  }
  return EndpointOperationOutcome(result.GetResultWithOwnership());
}

EndpointWithHostLabelOperationOutcome EC2ProtocolClient::EndpointWithHostLabelOperation(
    const EndpointWithHostLabelOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EndpointWithHostLabelOperationOutcome(std::move(result.GetError()));
  }
  return EndpointWithHostLabelOperationOutcome(result.GetResultWithOwnership());
}

FractionalSecondsOutcome EC2ProtocolClient::FractionalSeconds(const FractionalSecondsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return FractionalSecondsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return FractionalSecondsOutcome(
      BuildOperationResult<FractionalSecondsResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

GreetingWithErrorsOutcome EC2ProtocolClient::GreetingWithErrors(const GreetingWithErrorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return GreetingWithErrorsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return GreetingWithErrorsOutcome(
      BuildOperationResult<GreetingWithErrorsResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

HostWithPathOperationOutcome EC2ProtocolClient::HostWithPathOperation(const HostWithPathOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return HostWithPathOperationOutcome(std::move(result.GetError()));
  }
  return HostWithPathOperationOutcome(result.GetResultWithOwnership());
}

IgnoresWrappingXmlNameOutcome EC2ProtocolClient::IgnoresWrappingXmlName(const IgnoresWrappingXmlNameRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return IgnoresWrappingXmlNameOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return IgnoresWrappingXmlNameOutcome(
      BuildOperationResult<IgnoresWrappingXmlNameResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

NestedStructuresOutcome EC2ProtocolClient::NestedStructures(const NestedStructuresRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return NestedStructuresOutcome(std::move(result.GetError()));
  }
  return NestedStructuresOutcome(result.GetResultWithOwnership());
}

NoInputAndOutputOutcome EC2ProtocolClient::NoInputAndOutput(const NoInputAndOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return NoInputAndOutputOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return NoInputAndOutputOutcome(
      BuildOperationResult<NoInputAndOutputResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

PutWithContentEncodingOutcome EC2ProtocolClient::PutWithContentEncoding(const PutWithContentEncodingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return PutWithContentEncodingOutcome(std::move(result.GetError()));
  }
  return PutWithContentEncodingOutcome(result.GetResultWithOwnership());
}

QueryIdempotencyTokenAutoFillOutcome EC2ProtocolClient::QueryIdempotencyTokenAutoFill(
    const QueryIdempotencyTokenAutoFillRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return QueryIdempotencyTokenAutoFillOutcome(std::move(result.GetError()));
  }
  return QueryIdempotencyTokenAutoFillOutcome(result.GetResultWithOwnership());
}

QueryListsOutcome EC2ProtocolClient::QueryLists(const QueryListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return QueryListsOutcome(std::move(result.GetError()));
  }
  return QueryListsOutcome(result.GetResultWithOwnership());
}

QueryTimestampsOutcome EC2ProtocolClient::QueryTimestamps(const QueryTimestampsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return QueryTimestampsOutcome(std::move(result.GetError()));
  }
  return QueryTimestampsOutcome(result.GetResultWithOwnership());
}

RecursiveXmlShapesOutcome EC2ProtocolClient::RecursiveXmlShapes(const RecursiveXmlShapesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return RecursiveXmlShapesOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return RecursiveXmlShapesOutcome(
      BuildOperationResult<RecursiveXmlShapesResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

SimpleInputParamsOutcome EC2ProtocolClient::SimpleInputParams(const SimpleInputParamsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return SimpleInputParamsOutcome(std::move(result.GetError()));
  }
  return SimpleInputParamsOutcome(result.GetResultWithOwnership());
}

SimpleScalarXmlPropertiesOutcome EC2ProtocolClient::SimpleScalarXmlProperties(const SimpleScalarXmlPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return SimpleScalarXmlPropertiesOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return SimpleScalarXmlPropertiesOutcome(
      BuildOperationResult<SimpleScalarXmlPropertiesResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlBlobsOutcome EC2ProtocolClient::XmlBlobs(const XmlBlobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlBlobsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlBlobsOutcome(BuildOperationResult<XmlBlobsResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlEmptyBlobsOutcome EC2ProtocolClient::XmlEmptyBlobs(const XmlEmptyBlobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlEmptyBlobsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlEmptyBlobsOutcome(
      BuildOperationResult<XmlEmptyBlobsResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlEmptyListsOutcome EC2ProtocolClient::XmlEmptyLists(const XmlEmptyListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlEmptyListsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlEmptyListsOutcome(
      BuildOperationResult<XmlEmptyListsResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlEnumsOutcome EC2ProtocolClient::XmlEnums(const XmlEnumsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlEnumsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlEnumsOutcome(BuildOperationResult<XmlEnumsResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlIntEnumsOutcome EC2ProtocolClient::XmlIntEnums(const XmlIntEnumsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlIntEnumsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlIntEnumsOutcome(BuildOperationResult<XmlIntEnumsResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlListsOutcome EC2ProtocolClient::XmlLists(const XmlListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlListsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlListsOutcome(BuildOperationResult<XmlListsResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlNamespacesOutcome EC2ProtocolClient::XmlNamespaces(const XmlNamespacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlNamespacesOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlNamespacesOutcome(
      BuildOperationResult<XmlNamespacesResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlTimestampsOutcome EC2ProtocolClient::XmlTimestamps(const XmlTimestampsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlTimestampsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlTimestampsOutcome(
      BuildOperationResult<XmlTimestampsResponse>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
