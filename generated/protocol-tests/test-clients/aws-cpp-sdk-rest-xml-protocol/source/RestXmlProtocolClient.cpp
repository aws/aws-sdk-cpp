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
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/RestXmlProtocolEndpointProvider.h>
#include <aws/rest-xml-protocol/RestXmlProtocolErrorMarshaller.h>
#include <aws/rest-xml-protocol/model/AllQueryStringTypesRequest.h>
#include <aws/rest-xml-protocol/model/BodyWithXmlNameRequest.h>
#include <aws/rest-xml-protocol/model/ConstantAndVariableQueryStringRequest.h>
#include <aws/rest-xml-protocol/model/ConstantQueryStringRequest.h>
#include <aws/rest-xml-protocol/model/ContentTypeParametersRequest.h>
#include <aws/rest-xml-protocol/model/DatetimeOffsetsRequest.h>
#include <aws/rest-xml-protocol/model/EmptyInputAndEmptyOutputRequest.h>
#include <aws/rest-xml-protocol/model/EndpointOperationRequest.h>
#include <aws/rest-xml-protocol/model/EndpointWithHostLabelHeaderOperationRequest.h>
#include <aws/rest-xml-protocol/model/EndpointWithHostLabelOperationRequest.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapRequest.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapWithXmlNameRequest.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapWithXmlNamespaceRequest.h>
#include <aws/rest-xml-protocol/model/FractionalSecondsRequest.h>
#include <aws/rest-xml-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/rest-xml-protocol/model/HttpEmptyPrefixHeadersRequest.h>
#include <aws/rest-xml-protocol/model/HttpEnumPayloadRequest.h>
#include <aws/rest-xml-protocol/model/HttpPayloadTraitsRequest.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithMemberXmlNameRequest.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithStructureRequest.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithUnionRequest.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNameRequest.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNamespaceAndPrefixRequest.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNamespaceRequest.h>
#include <aws/rest-xml-protocol/model/HttpPrefixHeadersRequest.h>
#include <aws/rest-xml-protocol/model/HttpRequestWithFloatLabelsRequest.h>
#include <aws/rest-xml-protocol/model/HttpRequestWithGreedyLabelInPathRequest.h>
#include <aws/rest-xml-protocol/model/HttpRequestWithLabelsAndTimestampFormatRequest.h>
#include <aws/rest-xml-protocol/model/HttpRequestWithLabelsRequest.h>
#include <aws/rest-xml-protocol/model/HttpResponseCodeRequest.h>
#include <aws/rest-xml-protocol/model/HttpStringPayloadRequest.h>
#include <aws/rest-xml-protocol/model/IgnoreQueryParamsInResponseRequest.h>
#include <aws/rest-xml-protocol/model/InputAndOutputWithHeadersRequest.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapWithXmlNameRequest.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapsRequest.h>
#include <aws/rest-xml-protocol/model/NoInputAndNoOutputRequest.h>
#include <aws/rest-xml-protocol/model/NoInputAndOutputRequest.h>
#include <aws/rest-xml-protocol/model/NullAndEmptyHeadersClientRequest.h>
#include <aws/rest-xml-protocol/model/NullAndEmptyHeadersServerRequest.h>
#include <aws/rest-xml-protocol/model/OmitsNullSerializesEmptyStringRequest.h>
#include <aws/rest-xml-protocol/model/PutWithContentEncodingRequest.h>
#include <aws/rest-xml-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>
#include <aws/rest-xml-protocol/model/QueryParamsAsStringListMapRequest.h>
#include <aws/rest-xml-protocol/model/QueryPrecedenceRequest.h>
#include <aws/rest-xml-protocol/model/RecursiveShapesRequest.h>
#include <aws/rest-xml-protocol/model/SimpleScalarPropertiesRequest.h>
#include <aws/rest-xml-protocol/model/TimestampFormatHeadersRequest.h>
#include <aws/rest-xml-protocol/model/XmlAttributesInMiddleRequest.h>
#include <aws/rest-xml-protocol/model/XmlAttributesOnPayloadRequest.h>
#include <aws/rest-xml-protocol/model/XmlAttributesRequest.h>
#include <aws/rest-xml-protocol/model/XmlBlobsRequest.h>
#include <aws/rest-xml-protocol/model/XmlEmptyBlobsRequest.h>
#include <aws/rest-xml-protocol/model/XmlEmptyListsRequest.h>
#include <aws/rest-xml-protocol/model/XmlEmptyMapsRequest.h>
#include <aws/rest-xml-protocol/model/XmlEmptyStringsRequest.h>
#include <aws/rest-xml-protocol/model/XmlEnumsRequest.h>
#include <aws/rest-xml-protocol/model/XmlIntEnumsRequest.h>
#include <aws/rest-xml-protocol/model/XmlListsRequest.h>
#include <aws/rest-xml-protocol/model/XmlMapWithXmlNamespaceRequest.h>
#include <aws/rest-xml-protocol/model/XmlMapsRequest.h>
#include <aws/rest-xml-protocol/model/XmlMapsXmlNameRequest.h>
#include <aws/rest-xml-protocol/model/XmlNamespacesRequest.h>
#include <aws/rest-xml-protocol/model/XmlTimestampsRequest.h>
#include <aws/rest-xml-protocol/model/XmlUnionsRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RestXmlProtocol;
using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace RestXmlProtocol {
const char SERVICE_NAME[] = "restxml";
const char ALLOCATION_TAG[] = "RestXmlProtocolClient";
}  // namespace RestXmlProtocol
}  // namespace Aws
const char* RestXmlProtocolClient::GetServiceName() { return SERVICE_NAME; }
const char* RestXmlProtocolClient::GetAllocationTag() { return ALLOCATION_TAG; }

RestXmlProtocolClient::RestXmlProtocolClient(const RestXmlProtocol::RestXmlProtocolClientConfiguration& clientConfiguration,
                                             std::shared_ptr<RestXmlProtocolEndpointProviderBase> endpointProvider)
    : AwsSmithyClientT(clientConfiguration, GetServiceName(), "Rest Xml Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
                       Aws::MakeShared<RestXmlProtocolErrorMarshaller>(ALLOCATION_TAG),
                       endpointProvider ? endpointProvider : Aws::MakeShared<RestXmlProtocolEndpointProvider>(ALLOCATION_TAG),
                       Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
                           ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
                       {
                           {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                            smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region,
                                                    clientConfiguration.ResolveCredentialProviderConfig()}},
                       }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::RestXmlProtocol>(ALLOCATION_TAG));
}

RestXmlProtocolClient::RestXmlProtocolClient(const AWSCredentials& credentials,
                                             std::shared_ptr<RestXmlProtocolEndpointProviderBase> endpointProvider,
                                             const RestXmlProtocol::RestXmlProtocolClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Rest Xml Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<RestXmlProtocolErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<RestXmlProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::RestXmlProtocol>(ALLOCATION_TAG));
}

RestXmlProtocolClient::RestXmlProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<RestXmlProtocolEndpointProviderBase> endpointProvider,
                                             const RestXmlProtocol::RestXmlProtocolClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Rest Xml Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<RestXmlProtocolErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<RestXmlProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::RestXmlProtocol>(ALLOCATION_TAG));
}

/* Legacy constructors due deprecation */
RestXmlProtocolClient::RestXmlProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(clientConfiguration, GetServiceName(), "Rest Xml Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
                       Aws::MakeShared<RestXmlProtocolErrorMarshaller>(ALLOCATION_TAG),
                       Aws::MakeShared<RestXmlProtocolEndpointProvider>(ALLOCATION_TAG),
                       Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
                           ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
                       {
                           {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                            smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region,
                                                    clientConfiguration.ResolveCredentialProviderConfig()}},
                       }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::RestXmlProtocol>(ALLOCATION_TAG));
}

RestXmlProtocolClient::RestXmlProtocolClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Rest Xml Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<RestXmlProtocolErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<RestXmlProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::RestXmlProtocol>(ALLOCATION_TAG));
}

RestXmlProtocolClient::RestXmlProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Rest Xml Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<RestXmlProtocolErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<RestXmlProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::RestXmlProtocol>(ALLOCATION_TAG));
}
/* End of legacy constructors due deprecation */

RestXmlProtocolClient::~RestXmlProtocolClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<RestXmlProtocolEndpointProviderBase>& RestXmlProtocolClient::accessEndpointProvider() { return m_endpointProvider; }

void RestXmlProtocolClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
RestXmlProtocolClient::InvokeOperationOutcome RestXmlProtocolClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::AWSEndpoint&)>& resolveUri,
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
        auto result = MakeRequestDeserialize(&request, operationName, httpMethod,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolveUri(resolvedEndpoint); });
        return result.IsSuccess() ? InvokeOperationOutcome(result.GetResultWithOwnership())
                                  : InvokeOperationOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
AllQueryStringTypesOutcome RestXmlProtocolClient::AllQueryStringTypes(const AllQueryStringTypesRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/AllQueryStringTypesInput");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return AllQueryStringTypesOutcome(std::move(result.GetError()));
  }
  return AllQueryStringTypesOutcome(result.GetResultWithOwnership());
}

BodyWithXmlNameOutcome RestXmlProtocolClient::BodyWithXmlName(const BodyWithXmlNameRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/BodyWithXmlName");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return BodyWithXmlNameOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return BodyWithXmlNameOutcome(
      BuildOperationResult<BodyWithXmlNameResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

ConstantAndVariableQueryStringOutcome RestXmlProtocolClient::ConstantAndVariableQueryString(
    const ConstantAndVariableQueryStringRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        Aws::StringStream ss;
        resolvedEndpoint.AddPathSegments("/ConstantAndVariableQueryString");
        ss.str("?foo=bar");
        resolvedEndpoint.SetQueryString(ss.str());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return ConstantAndVariableQueryStringOutcome(std::move(result.GetError()));
  }
  return ConstantAndVariableQueryStringOutcome(result.GetResultWithOwnership());
}

ConstantQueryStringOutcome RestXmlProtocolClient::ConstantQueryString(const ConstantQueryStringRequest& request) const {
  if (!request.HelloHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ConstantQueryString", "Required field: Hello, is not set");
    return ConstantQueryStringOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Hello]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        Aws::StringStream ss;
        resolvedEndpoint.AddPathSegments("/ConstantQueryString/");
        resolvedEndpoint.AddPathSegment(request.GetHello());
        ss.str("?foo=bar&hello");
        resolvedEndpoint.SetQueryString(ss.str());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return ConstantQueryStringOutcome(std::move(result.GetError()));
  }
  return ConstantQueryStringOutcome(result.GetResultWithOwnership());
}

ContentTypeParametersOutcome RestXmlProtocolClient::ContentTypeParameters(const ContentTypeParametersRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/ContentTypeParameters");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return ContentTypeParametersOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return ContentTypeParametersOutcome(
      BuildOperationResult<ContentTypeParametersResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

DatetimeOffsetsOutcome RestXmlProtocolClient::DatetimeOffsets(const DatetimeOffsetsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/DatetimeOffsets");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return DatetimeOffsetsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return DatetimeOffsetsOutcome(
      BuildOperationResult<DatetimeOffsetsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

EmptyInputAndEmptyOutputOutcome RestXmlProtocolClient::EmptyInputAndEmptyOutput(const EmptyInputAndEmptyOutputRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/EmptyInputAndEmptyOutput");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EmptyInputAndEmptyOutputOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return EmptyInputAndEmptyOutputOutcome(
      BuildOperationResult<EmptyInputAndEmptyOutputResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

EndpointOperationOutcome RestXmlProtocolClient::EndpointOperation(const EndpointOperationRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/EndpointOperation");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EndpointOperationOutcome(std::move(result.GetError()));
  }
  return EndpointOperationOutcome(result.GetResultWithOwnership());
}

EndpointWithHostLabelHeaderOperationOutcome RestXmlProtocolClient::EndpointWithHostLabelHeaderOperation(
    const EndpointWithHostLabelHeaderOperationRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("EndpointWithHostLabelHeaderOperation", "Required field: AccountId, is not set");
    return EndpointWithHostLabelHeaderOperationOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/EndpointWithHostLabelHeaderOperation");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EndpointWithHostLabelHeaderOperationOutcome(std::move(result.GetError()));
  }
  return EndpointWithHostLabelHeaderOperationOutcome(result.GetResultWithOwnership());
}

EndpointWithHostLabelOperationOutcome RestXmlProtocolClient::EndpointWithHostLabelOperation(
    const EndpointWithHostLabelOperationRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/EndpointWithHostLabelOperation");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EndpointWithHostLabelOperationOutcome(std::move(result.GetError()));
  }
  return EndpointWithHostLabelOperationOutcome(result.GetResultWithOwnership());
}

FlattenedXmlMapOutcome RestXmlProtocolClient::FlattenedXmlMap(const FlattenedXmlMapRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/FlattenedXmlMap");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return FlattenedXmlMapOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return FlattenedXmlMapOutcome(
      BuildOperationResult<FlattenedXmlMapResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

FlattenedXmlMapWithXmlNameOutcome RestXmlProtocolClient::FlattenedXmlMapWithXmlName(
    const FlattenedXmlMapWithXmlNameRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/FlattenedXmlMapWithXmlName");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return FlattenedXmlMapWithXmlNameOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return FlattenedXmlMapWithXmlNameOutcome(
      BuildOperationResult<FlattenedXmlMapWithXmlNameResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

FlattenedXmlMapWithXmlNamespaceOutcome RestXmlProtocolClient::FlattenedXmlMapWithXmlNamespace(
    const FlattenedXmlMapWithXmlNamespaceRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/FlattenedXmlMapWithXmlNamespace");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return FlattenedXmlMapWithXmlNamespaceOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return FlattenedXmlMapWithXmlNamespaceOutcome(
      BuildOperationResult<FlattenedXmlMapWithXmlNamespaceResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

FractionalSecondsOutcome RestXmlProtocolClient::FractionalSeconds(const FractionalSecondsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/FractionalSeconds");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return FractionalSecondsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return FractionalSecondsOutcome(
      BuildOperationResult<FractionalSecondsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

GreetingWithErrorsOutcome RestXmlProtocolClient::GreetingWithErrors(const GreetingWithErrorsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/GreetingWithErrors");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return GreetingWithErrorsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return GreetingWithErrorsOutcome(
      BuildOperationResult<GreetingWithErrorsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

HttpEmptyPrefixHeadersOutcome RestXmlProtocolClient::HttpEmptyPrefixHeaders(const HttpEmptyPrefixHeadersRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HttpEmptyPrefixHeaders");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return HttpEmptyPrefixHeadersOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return HttpEmptyPrefixHeadersOutcome(
      BuildOperationResult<HttpEmptyPrefixHeadersResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

HttpEnumPayloadOutcome RestXmlProtocolClient::HttpEnumPayload(const HttpEnumPayloadRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/EnumPayload");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return HttpEnumPayloadOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return HttpEnumPayloadOutcome(
      BuildOperationResult<HttpEnumPayloadResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

HttpPayloadTraitsOutcome RestXmlProtocolClient::HttpPayloadTraits(const HttpPayloadTraitsRequest& request) const {
  AWS_OPERATION_GUARD(HttpPayloadTraits);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpPayloadTraits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, HttpPayloadTraits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpPayloadTraits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpPayloadTraitsOutcome>(
      [&]() -> HttpPayloadTraitsOutcome {
        auto result = MakeRequestWithUnparsedResponse(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/HttpPayloadTraits"); });
        return result.IsSuccess() ? HttpPayloadTraitsOutcome(result.GetResultWithOwnership())
                                  : HttpPayloadTraitsOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HttpPayloadWithMemberXmlNameOutcome RestXmlProtocolClient::HttpPayloadWithMemberXmlName(
    const HttpPayloadWithMemberXmlNameRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HttpPayloadWithMemberXmlName");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return HttpPayloadWithMemberXmlNameOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return HttpPayloadWithMemberXmlNameOutcome(
      BuildOperationResult<HttpPayloadWithMemberXmlNameResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

HttpPayloadWithStructureOutcome RestXmlProtocolClient::HttpPayloadWithStructure(const HttpPayloadWithStructureRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HttpPayloadWithStructure");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return HttpPayloadWithStructureOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return HttpPayloadWithStructureOutcome(
      BuildOperationResult<HttpPayloadWithStructureResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

HttpPayloadWithUnionOutcome RestXmlProtocolClient::HttpPayloadWithUnion(const HttpPayloadWithUnionRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HttpPayloadWithUnion");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return HttpPayloadWithUnionOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return HttpPayloadWithUnionOutcome(
      BuildOperationResult<HttpPayloadWithUnionResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

HttpPayloadWithXmlNameOutcome RestXmlProtocolClient::HttpPayloadWithXmlName(const HttpPayloadWithXmlNameRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HttpPayloadWithXmlName");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return HttpPayloadWithXmlNameOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return HttpPayloadWithXmlNameOutcome(
      BuildOperationResult<HttpPayloadWithXmlNameResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

HttpPayloadWithXmlNamespaceOutcome RestXmlProtocolClient::HttpPayloadWithXmlNamespace(
    const HttpPayloadWithXmlNamespaceRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HttpPayloadWithXmlNamespace");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return HttpPayloadWithXmlNamespaceOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return HttpPayloadWithXmlNamespaceOutcome(
      BuildOperationResult<HttpPayloadWithXmlNamespaceResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

HttpPayloadWithXmlNamespaceAndPrefixOutcome RestXmlProtocolClient::HttpPayloadWithXmlNamespaceAndPrefix(
    const HttpPayloadWithXmlNamespaceAndPrefixRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HttpPayloadWithXmlNamespaceAndPrefix");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return HttpPayloadWithXmlNamespaceAndPrefixOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return HttpPayloadWithXmlNamespaceAndPrefixOutcome(
      BuildOperationResult<HttpPayloadWithXmlNamespaceAndPrefixResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

HttpPrefixHeadersOutcome RestXmlProtocolClient::HttpPrefixHeaders(const HttpPrefixHeadersRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HttpPrefixHeaders");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return HttpPrefixHeadersOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return HttpPrefixHeadersOutcome(
      BuildOperationResult<HttpPrefixHeadersResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

HttpRequestWithFloatLabelsOutcome RestXmlProtocolClient::HttpRequestWithFloatLabels(
    const HttpRequestWithFloatLabelsRequest& request) const {
  if (!request.FloatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithFloatLabels", "Required field: Float, is not set");
    return HttpRequestWithFloatLabelsOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Float]", false));
  }
  if (!request.DoubleHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithFloatLabels", "Required field: Double, is not set");
    return HttpRequestWithFloatLabelsOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Double]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/FloatHttpLabels/");
        resolvedEndpoint.AddPathSegment(request.GetFloat());
        resolvedEndpoint.AddPathSegment(request.GetDouble());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return HttpRequestWithFloatLabelsOutcome(std::move(result.GetError()));
  }
  return HttpRequestWithFloatLabelsOutcome(result.GetResultWithOwnership());
}

HttpRequestWithGreedyLabelInPathOutcome RestXmlProtocolClient::HttpRequestWithGreedyLabelInPath(
    const HttpRequestWithGreedyLabelInPathRequest& request) const {
  if (!request.FooHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithGreedyLabelInPath", "Required field: Foo, is not set");
    return HttpRequestWithGreedyLabelInPathOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Foo]", false));
  }
  if (!request.BazHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithGreedyLabelInPath", "Required field: Baz, is not set");
    return HttpRequestWithGreedyLabelInPathOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Baz]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HttpRequestWithGreedyLabelInPath/foo/");
        resolvedEndpoint.AddPathSegment(request.GetFoo());
        resolvedEndpoint.AddPathSegments("/baz/");
        resolvedEndpoint.AddPathSegments(request.GetBaz());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return HttpRequestWithGreedyLabelInPathOutcome(std::move(result.GetError()));
  }
  return HttpRequestWithGreedyLabelInPathOutcome(result.GetResultWithOwnership());
}

HttpRequestWithLabelsOutcome RestXmlProtocolClient::HttpRequestWithLabels(const HttpRequestWithLabelsRequest& request) const {
  if (!request.StringHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: String, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [String]", false));
  }
  if (!request.ShortHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: Short, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Short]", false));
  }
  if (!request.IntegerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: Integer, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Integer]", false));
  }
  if (!request.LongHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: Long, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Long]", false));
  }
  if (!request.FloatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: Float, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Float]", false));
  }
  if (!request.DoubleHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: Double, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Double]", false));
  }
  if (!request.BooleanHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: Boolean, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Boolean]", false));
  }
  if (!request.TimestampHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: Timestamp, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Timestamp]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HttpRequestWithLabels/");
        resolvedEndpoint.AddPathSegment(request.GetString());
        resolvedEndpoint.AddPathSegment(request.GetShort());
        resolvedEndpoint.AddPathSegment(request.GetInteger());
        resolvedEndpoint.AddPathSegment(request.GetLong());
        resolvedEndpoint.AddPathSegment(request.GetFloat());
        resolvedEndpoint.AddPathSegment(request.GetDouble());
        resolvedEndpoint.AddPathSegment(request.GetBoolean());
        resolvedEndpoint.AddPathSegment(request.GetTimestamp().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return HttpRequestWithLabelsOutcome(std::move(result.GetError()));
  }
  return HttpRequestWithLabelsOutcome(result.GetResultWithOwnership());
}

HttpRequestWithLabelsAndTimestampFormatOutcome RestXmlProtocolClient::HttpRequestWithLabelsAndTimestampFormat(
    const HttpRequestWithLabelsAndTimestampFormatRequest& request) const {
  if (!request.MemberEpochSecondsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabelsAndTimestampFormat", "Required field: MemberEpochSeconds, is not set");
    return HttpRequestWithLabelsAndTimestampFormatOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberEpochSeconds]", false));
  }
  if (!request.MemberHttpDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabelsAndTimestampFormat", "Required field: MemberHttpDate, is not set");
    return HttpRequestWithLabelsAndTimestampFormatOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberHttpDate]", false));
  }
  if (!request.MemberDateTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabelsAndTimestampFormat", "Required field: MemberDateTime, is not set");
    return HttpRequestWithLabelsAndTimestampFormatOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberDateTime]", false));
  }
  if (!request.DefaultFormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabelsAndTimestampFormat", "Required field: DefaultFormat, is not set");
    return HttpRequestWithLabelsAndTimestampFormatOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DefaultFormat]", false));
  }
  if (!request.TargetEpochSecondsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabelsAndTimestampFormat", "Required field: TargetEpochSeconds, is not set");
    return HttpRequestWithLabelsAndTimestampFormatOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetEpochSeconds]", false));
  }
  if (!request.TargetHttpDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabelsAndTimestampFormat", "Required field: TargetHttpDate, is not set");
    return HttpRequestWithLabelsAndTimestampFormatOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetHttpDate]", false));
  }
  if (!request.TargetDateTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabelsAndTimestampFormat", "Required field: TargetDateTime, is not set");
    return HttpRequestWithLabelsAndTimestampFormatOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetDateTime]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HttpRequestWithLabelsAndTimestampFormat/");
        resolvedEndpoint.AddPathSegment(request.GetMemberEpochSeconds().Seconds());
        resolvedEndpoint.AddPathSegment(request.GetMemberHttpDate().ToGmtString(Aws::Utils::DateFormat::RFC822));
        resolvedEndpoint.AddPathSegment(request.GetMemberDateTime().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
        resolvedEndpoint.AddPathSegment(request.GetDefaultFormat().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
        resolvedEndpoint.AddPathSegment(request.GetTargetEpochSeconds().Seconds());
        resolvedEndpoint.AddPathSegment(request.GetTargetHttpDate().ToGmtString(Aws::Utils::DateFormat::RFC822));
        resolvedEndpoint.AddPathSegment(request.GetTargetDateTime().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return HttpRequestWithLabelsAndTimestampFormatOutcome(std::move(result.GetError()));
  }
  return HttpRequestWithLabelsAndTimestampFormatOutcome(result.GetResultWithOwnership());
}

HttpResponseCodeOutcome RestXmlProtocolClient::HttpResponseCode(const HttpResponseCodeRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HttpResponseCode");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return HttpResponseCodeOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return HttpResponseCodeOutcome(
      BuildOperationResult<HttpResponseCodeResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

HttpStringPayloadOutcome RestXmlProtocolClient::HttpStringPayload(const HttpStringPayloadRequest& request) const {
  AWS_OPERATION_GUARD(HttpStringPayload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpStringPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, HttpStringPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpStringPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpStringPayloadOutcome>(
      [&]() -> HttpStringPayloadOutcome {
        auto result = MakeRequestWithUnparsedResponse(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/StringPayload"); });
        return result.IsSuccess() ? HttpStringPayloadOutcome(result.GetResultWithOwnership())
                                  : HttpStringPayloadOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

IgnoreQueryParamsInResponseOutcome RestXmlProtocolClient::IgnoreQueryParamsInResponse(
    const IgnoreQueryParamsInResponseRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/IgnoreQueryParamsInResponse");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return IgnoreQueryParamsInResponseOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return IgnoreQueryParamsInResponseOutcome(
      BuildOperationResult<IgnoreQueryParamsInResponseResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

InputAndOutputWithHeadersOutcome RestXmlProtocolClient::InputAndOutputWithHeaders(const InputAndOutputWithHeadersRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/InputAndOutputWithHeaders");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return InputAndOutputWithHeadersOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return InputAndOutputWithHeadersOutcome(
      BuildOperationResult<InputAndOutputWithHeadersResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

NestedXmlMapWithXmlNameOutcome RestXmlProtocolClient::NestedXmlMapWithXmlName(const NestedXmlMapWithXmlNameRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/NestedXmlMapWithXmlName");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return NestedXmlMapWithXmlNameOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return NestedXmlMapWithXmlNameOutcome(
      BuildOperationResult<NestedXmlMapWithXmlNameResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

NestedXmlMapsOutcome RestXmlProtocolClient::NestedXmlMaps(const NestedXmlMapsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/NestedXmlMaps");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return NestedXmlMapsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return NestedXmlMapsOutcome(BuildOperationResult<NestedXmlMapsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

NoInputAndNoOutputOutcome RestXmlProtocolClient::NoInputAndNoOutput(const NoInputAndNoOutputRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/NoInputAndNoOutput");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return NoInputAndNoOutputOutcome(std::move(result.GetError()));
  }
  return NoInputAndNoOutputOutcome(result.GetResultWithOwnership());
}

NoInputAndOutputOutcome RestXmlProtocolClient::NoInputAndOutput(const NoInputAndOutputRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/NoInputAndOutputOutput");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return NoInputAndOutputOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return NoInputAndOutputOutcome(
      BuildOperationResult<NoInputAndOutputResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

NullAndEmptyHeadersClientOutcome RestXmlProtocolClient::NullAndEmptyHeadersClient(const NullAndEmptyHeadersClientRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/NullAndEmptyHeadersClient");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return NullAndEmptyHeadersClientOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return NullAndEmptyHeadersClientOutcome(
      BuildOperationResult<NullAndEmptyHeadersClientResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

NullAndEmptyHeadersServerOutcome RestXmlProtocolClient::NullAndEmptyHeadersServer(const NullAndEmptyHeadersServerRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/NullAndEmptyHeadersServer");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return NullAndEmptyHeadersServerOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return NullAndEmptyHeadersServerOutcome(
      BuildOperationResult<NullAndEmptyHeadersServerResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

OmitsNullSerializesEmptyStringOutcome RestXmlProtocolClient::OmitsNullSerializesEmptyString(
    const OmitsNullSerializesEmptyStringRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/OmitsNullSerializesEmptyString");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return OmitsNullSerializesEmptyStringOutcome(std::move(result.GetError()));
  }
  return OmitsNullSerializesEmptyStringOutcome(result.GetResultWithOwnership());
}

PutWithContentEncodingOutcome RestXmlProtocolClient::PutWithContentEncoding(const PutWithContentEncodingRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/requestcompression/putcontentwithencoding");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return PutWithContentEncodingOutcome(std::move(result.GetError()));
  }
  return PutWithContentEncodingOutcome(result.GetResultWithOwnership());
}

QueryIdempotencyTokenAutoFillOutcome RestXmlProtocolClient::QueryIdempotencyTokenAutoFill(
    const QueryIdempotencyTokenAutoFillRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/QueryIdempotencyTokenAutoFill");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return QueryIdempotencyTokenAutoFillOutcome(std::move(result.GetError()));
  }
  return QueryIdempotencyTokenAutoFillOutcome(result.GetResultWithOwnership());
}

QueryParamsAsStringListMapOutcome RestXmlProtocolClient::QueryParamsAsStringListMap(
    const QueryParamsAsStringListMapRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/StringListMap");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return QueryParamsAsStringListMapOutcome(std::move(result.GetError()));
  }
  return QueryParamsAsStringListMapOutcome(result.GetResultWithOwnership());
}

QueryPrecedenceOutcome RestXmlProtocolClient::QueryPrecedence(const QueryPrecedenceRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/Precedence");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return QueryPrecedenceOutcome(std::move(result.GetError()));
  }
  return QueryPrecedenceOutcome(result.GetResultWithOwnership());
}

RecursiveShapesOutcome RestXmlProtocolClient::RecursiveShapes(const RecursiveShapesRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/RecursiveShapes");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return RecursiveShapesOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return RecursiveShapesOutcome(
      BuildOperationResult<RecursiveShapesResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

SimpleScalarPropertiesOutcome RestXmlProtocolClient::SimpleScalarProperties(const SimpleScalarPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/SimpleScalarProperties");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return SimpleScalarPropertiesOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return SimpleScalarPropertiesOutcome(
      BuildOperationResult<SimpleScalarPropertiesResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

TimestampFormatHeadersOutcome RestXmlProtocolClient::TimestampFormatHeaders(const TimestampFormatHeadersRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/TimestampFormatHeaders");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return TimestampFormatHeadersOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return TimestampFormatHeadersOutcome(
      BuildOperationResult<TimestampFormatHeadersResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlAttributesOutcome RestXmlProtocolClient::XmlAttributes(const XmlAttributesRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlAttributes");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return XmlAttributesOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlAttributesOutcome(BuildOperationResult<XmlAttributesResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlAttributesInMiddleOutcome RestXmlProtocolClient::XmlAttributesInMiddle(const XmlAttributesInMiddleRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlAttributesInMiddle");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return XmlAttributesInMiddleOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlAttributesInMiddleOutcome(
      BuildOperationResult<XmlAttributesInMiddleResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlAttributesOnPayloadOutcome RestXmlProtocolClient::XmlAttributesOnPayload(const XmlAttributesOnPayloadRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlAttributesOnPayload");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return XmlAttributesOnPayloadOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlAttributesOnPayloadOutcome(
      BuildOperationResult<XmlAttributesOnPayloadResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlBlobsOutcome RestXmlProtocolClient::XmlBlobs(const XmlBlobsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlBlobs");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlBlobsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlBlobsOutcome(BuildOperationResult<XmlBlobsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlEmptyBlobsOutcome RestXmlProtocolClient::XmlEmptyBlobs(const XmlEmptyBlobsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlEmptyBlobs");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlEmptyBlobsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlEmptyBlobsOutcome(BuildOperationResult<XmlEmptyBlobsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlEmptyListsOutcome RestXmlProtocolClient::XmlEmptyLists(const XmlEmptyListsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlEmptyLists");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return XmlEmptyListsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlEmptyListsOutcome(BuildOperationResult<XmlEmptyListsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlEmptyMapsOutcome RestXmlProtocolClient::XmlEmptyMaps(const XmlEmptyMapsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlEmptyMaps");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlEmptyMapsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlEmptyMapsOutcome(BuildOperationResult<XmlEmptyMapsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlEmptyStringsOutcome RestXmlProtocolClient::XmlEmptyStrings(const XmlEmptyStringsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlEmptyStrings");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return XmlEmptyStringsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlEmptyStringsOutcome(
      BuildOperationResult<XmlEmptyStringsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlEnumsOutcome RestXmlProtocolClient::XmlEnums(const XmlEnumsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlEnums");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return XmlEnumsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlEnumsOutcome(BuildOperationResult<XmlEnumsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlIntEnumsOutcome RestXmlProtocolClient::XmlIntEnums(const XmlIntEnumsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlIntEnums");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return XmlIntEnumsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlIntEnumsOutcome(BuildOperationResult<XmlIntEnumsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlListsOutcome RestXmlProtocolClient::XmlLists(const XmlListsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlLists");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return XmlListsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlListsOutcome(BuildOperationResult<XmlListsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlMapWithXmlNamespaceOutcome RestXmlProtocolClient::XmlMapWithXmlNamespace(const XmlMapWithXmlNamespaceRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlMapWithXmlNamespace");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlMapWithXmlNamespaceOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlMapWithXmlNamespaceOutcome(
      BuildOperationResult<XmlMapWithXmlNamespaceResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlMapsOutcome RestXmlProtocolClient::XmlMaps(const XmlMapsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlMaps");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlMapsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlMapsOutcome(BuildOperationResult<XmlMapsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlMapsXmlNameOutcome RestXmlProtocolClient::XmlMapsXmlName(const XmlMapsXmlNameRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlMapsXmlName");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlMapsXmlNameOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlMapsXmlNameOutcome(
      BuildOperationResult<XmlMapsXmlNameResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlNamespacesOutcome RestXmlProtocolClient::XmlNamespaces(const XmlNamespacesRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlNamespaces");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlNamespacesOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlNamespacesOutcome(BuildOperationResult<XmlNamespacesResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlTimestampsOutcome RestXmlProtocolClient::XmlTimestamps(const XmlTimestampsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlTimestamps");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return XmlTimestampsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlTimestampsOutcome(BuildOperationResult<XmlTimestampsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}

XmlUnionsOutcome RestXmlProtocolClient::XmlUnions(const XmlUnionsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/XmlUnions");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return XmlUnionsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return XmlUnionsOutcome(BuildOperationResult<XmlUnionsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
