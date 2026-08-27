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
    : BASECLASS(
          clientConfiguration,
          Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
              ALLOCATION_TAG,
              Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
              SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
          Aws::MakeShared<RestXmlProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<RestXmlProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RestXmlProtocolClient::RestXmlProtocolClient(const AWSCredentials& credentials,
                                             std::shared_ptr<RestXmlProtocolEndpointProviderBase> endpointProvider,
                                             const RestXmlProtocol::RestXmlProtocolClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RestXmlProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<RestXmlProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RestXmlProtocolClient::RestXmlProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<RestXmlProtocolEndpointProviderBase> endpointProvider,
                                             const RestXmlProtocol::RestXmlProtocolClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RestXmlProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<RestXmlProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
RestXmlProtocolClient::RestXmlProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(
          clientConfiguration,
          Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
              ALLOCATION_TAG,
              Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
              SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
          Aws::MakeShared<RestXmlProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RestXmlProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RestXmlProtocolClient::RestXmlProtocolClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RestXmlProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RestXmlProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RestXmlProtocolClient::RestXmlProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RestXmlProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RestXmlProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
RestXmlProtocolClient::~RestXmlProtocolClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<RestXmlProtocolEndpointProviderBase>& RestXmlProtocolClient::accessEndpointProvider() { return m_endpointProvider; }

void RestXmlProtocolClient::init(const RestXmlProtocol::RestXmlProtocolClientConfiguration& config) {
  AWSClient::SetServiceClientName("Rest Xml Protocol");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "restxml");
}

void RestXmlProtocolClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

RestXmlProtocolClient::InvokeOperationOutcome RestXmlProtocolClient::InvokeServiceOperation(
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
AllQueryStringTypesOutcome RestXmlProtocolClient::AllQueryStringTypes(const AllQueryStringTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/AllQueryStringTypesInput");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? AllQueryStringTypesOutcome(result.GetResultWithOwnership())
                            : AllQueryStringTypesOutcome(std::move(result.GetError()));
}

BodyWithXmlNameOutcome RestXmlProtocolClient::BodyWithXmlName(const BodyWithXmlNameRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/BodyWithXmlName");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? BodyWithXmlNameOutcome(result.GetResultWithOwnership())
                            : BodyWithXmlNameOutcome(std::move(result.GetError()));
}

ConstantAndVariableQueryStringOutcome RestXmlProtocolClient::ConstantAndVariableQueryString(
    const ConstantAndVariableQueryStringRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ConstantAndVariableQueryString");
    ss.str("?foo=bar");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ConstantAndVariableQueryStringOutcome(result.GetResultWithOwnership())
                            : ConstantAndVariableQueryStringOutcome(std::move(result.GetError()));
}

ConstantQueryStringOutcome RestXmlProtocolClient::ConstantQueryString(const ConstantQueryStringRequest& request) const {
  if (!request.HelloHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ConstantQueryString", "Required field: Hello, is not set");
    return ConstantQueryStringOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Hello]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ConstantQueryString/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHello());
    ss.str("?foo=bar&hello");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ConstantQueryStringOutcome(result.GetResultWithOwnership())
                            : ConstantQueryStringOutcome(std::move(result.GetError()));
}

ContentTypeParametersOutcome RestXmlProtocolClient::ContentTypeParameters(const ContentTypeParametersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ContentTypeParameters");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? ContentTypeParametersOutcome(result.GetResultWithOwnership())
                            : ContentTypeParametersOutcome(std::move(result.GetError()));
}

DatetimeOffsetsOutcome RestXmlProtocolClient::DatetimeOffsets(const DatetimeOffsetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DatetimeOffsets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DatetimeOffsetsOutcome(result.GetResultWithOwnership())
                            : DatetimeOffsetsOutcome(std::move(result.GetError()));
}

EmptyInputAndEmptyOutputOutcome RestXmlProtocolClient::EmptyInputAndEmptyOutput(const EmptyInputAndEmptyOutputRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/EmptyInputAndEmptyOutput");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EmptyInputAndEmptyOutputOutcome(result.GetResultWithOwnership())
                            : EmptyInputAndEmptyOutputOutcome(std::move(result.GetError()));
}

EndpointOperationOutcome RestXmlProtocolClient::EndpointOperation(const EndpointOperationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/EndpointOperation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EndpointOperationOutcome(result.GetResultWithOwnership())
                            : EndpointOperationOutcome(std::move(result.GetError()));
}

EndpointWithHostLabelHeaderOperationOutcome RestXmlProtocolClient::EndpointWithHostLabelHeaderOperation(
    const EndpointWithHostLabelHeaderOperationRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("EndpointWithHostLabelHeaderOperation", "Required field: AccountId, is not set");
    return EndpointWithHostLabelHeaderOperationOutcome(Aws::Client::AWSError<RestXmlProtocolErrors>(
        RestXmlProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/EndpointWithHostLabelHeaderOperation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EndpointWithHostLabelHeaderOperationOutcome(result.GetResultWithOwnership())
                            : EndpointWithHostLabelHeaderOperationOutcome(std::move(result.GetError()));
}

EndpointWithHostLabelOperationOutcome RestXmlProtocolClient::EndpointWithHostLabelOperation(
    const EndpointWithHostLabelOperationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/EndpointWithHostLabelOperation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EndpointWithHostLabelOperationOutcome(result.GetResultWithOwnership())
                            : EndpointWithHostLabelOperationOutcome(std::move(result.GetError()));
}

FlattenedXmlMapOutcome RestXmlProtocolClient::FlattenedXmlMap(const FlattenedXmlMapRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/FlattenedXmlMap");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FlattenedXmlMapOutcome(result.GetResultWithOwnership())
                            : FlattenedXmlMapOutcome(std::move(result.GetError()));
}

FlattenedXmlMapWithXmlNameOutcome RestXmlProtocolClient::FlattenedXmlMapWithXmlName(
    const FlattenedXmlMapWithXmlNameRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/FlattenedXmlMapWithXmlName");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FlattenedXmlMapWithXmlNameOutcome(result.GetResultWithOwnership())
                            : FlattenedXmlMapWithXmlNameOutcome(std::move(result.GetError()));
}

FlattenedXmlMapWithXmlNamespaceOutcome RestXmlProtocolClient::FlattenedXmlMapWithXmlNamespace(
    const FlattenedXmlMapWithXmlNamespaceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/FlattenedXmlMapWithXmlNamespace");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FlattenedXmlMapWithXmlNamespaceOutcome(result.GetResultWithOwnership())
                            : FlattenedXmlMapWithXmlNamespaceOutcome(std::move(result.GetError()));
}

FractionalSecondsOutcome RestXmlProtocolClient::FractionalSeconds(const FractionalSecondsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/FractionalSeconds");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FractionalSecondsOutcome(result.GetResultWithOwnership())
                            : FractionalSecondsOutcome(std::move(result.GetError()));
}

GreetingWithErrorsOutcome RestXmlProtocolClient::GreetingWithErrors(const GreetingWithErrorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GreetingWithErrors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? GreetingWithErrorsOutcome(result.GetResultWithOwnership())
                            : GreetingWithErrorsOutcome(std::move(result.GetError()));
}

HttpEnumPayloadOutcome RestXmlProtocolClient::HttpEnumPayload(const HttpEnumPayloadRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/EnumPayload");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? HttpEnumPayloadOutcome(result.GetResultWithOwnership())
                            : HttpEnumPayloadOutcome(std::move(result.GetError()));
}

HttpPayloadTraitsOutcome RestXmlProtocolClient::HttpPayloadTraits(const HttpPayloadTraitsRequest& request) const {
  AWS_OPERATION_GUARD(HttpPayloadTraits);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpPayloadTraits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpPayloadTraits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpPayloadTraits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpPayloadTraitsOutcome>(
      [&]() -> HttpPayloadTraitsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HttpPayloadTraits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPayloadTraits");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? HttpPayloadTraitsOutcome(result.GetResultWithOwnership())
                                  : HttpPayloadTraitsOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HttpPayloadWithMemberXmlNameOutcome RestXmlProtocolClient::HttpPayloadWithMemberXmlName(
    const HttpPayloadWithMemberXmlNameRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPayloadWithMemberXmlName");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? HttpPayloadWithMemberXmlNameOutcome(result.GetResultWithOwnership())
                            : HttpPayloadWithMemberXmlNameOutcome(std::move(result.GetError()));
}

HttpPayloadWithStructureOutcome RestXmlProtocolClient::HttpPayloadWithStructure(const HttpPayloadWithStructureRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPayloadWithStructure");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? HttpPayloadWithStructureOutcome(result.GetResultWithOwnership())
                            : HttpPayloadWithStructureOutcome(std::move(result.GetError()));
}

HttpPayloadWithUnionOutcome RestXmlProtocolClient::HttpPayloadWithUnion(const HttpPayloadWithUnionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPayloadWithUnion");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? HttpPayloadWithUnionOutcome(result.GetResultWithOwnership())
                            : HttpPayloadWithUnionOutcome(std::move(result.GetError()));
}

HttpPayloadWithXmlNameOutcome RestXmlProtocolClient::HttpPayloadWithXmlName(const HttpPayloadWithXmlNameRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPayloadWithXmlName");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? HttpPayloadWithXmlNameOutcome(result.GetResultWithOwnership())
                            : HttpPayloadWithXmlNameOutcome(std::move(result.GetError()));
}

HttpPayloadWithXmlNamespaceOutcome RestXmlProtocolClient::HttpPayloadWithXmlNamespace(
    const HttpPayloadWithXmlNamespaceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPayloadWithXmlNamespace");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? HttpPayloadWithXmlNamespaceOutcome(result.GetResultWithOwnership())
                            : HttpPayloadWithXmlNamespaceOutcome(std::move(result.GetError()));
}

HttpPayloadWithXmlNamespaceAndPrefixOutcome RestXmlProtocolClient::HttpPayloadWithXmlNamespaceAndPrefix(
    const HttpPayloadWithXmlNamespaceAndPrefixRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPayloadWithXmlNamespaceAndPrefix");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? HttpPayloadWithXmlNamespaceAndPrefixOutcome(result.GetResultWithOwnership())
                            : HttpPayloadWithXmlNamespaceAndPrefixOutcome(std::move(result.GetError()));
}

HttpPrefixHeadersOutcome RestXmlProtocolClient::HttpPrefixHeaders(const HttpPrefixHeadersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPrefixHeaders");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? HttpPrefixHeadersOutcome(result.GetResultWithOwnership())
                            : HttpPrefixHeadersOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/FloatHttpLabels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFloat());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDouble());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? HttpRequestWithFloatLabelsOutcome(result.GetResultWithOwnership())
                            : HttpRequestWithFloatLabelsOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpRequestWithGreedyLabelInPath/foo/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFoo());
    endpointResolutionOutcome.GetResult().AddPathSegments("/baz/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetBaz());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? HttpRequestWithGreedyLabelInPathOutcome(result.GetResultWithOwnership())
                            : HttpRequestWithGreedyLabelInPathOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpRequestWithLabels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetString());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShort());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInteger());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLong());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFloat());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDouble());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBoolean());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTimestamp().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? HttpRequestWithLabelsOutcome(result.GetResultWithOwnership())
                            : HttpRequestWithLabelsOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpRequestWithLabelsAndTimestampFormat/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberEpochSeconds().Seconds());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberHttpDate().ToGmtString(Aws::Utils::DateFormat::RFC822));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberDateTime().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDefaultFormat().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetEpochSeconds().Seconds());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetHttpDate().ToGmtString(Aws::Utils::DateFormat::RFC822));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetDateTime().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? HttpRequestWithLabelsAndTimestampFormatOutcome(result.GetResultWithOwnership())
                            : HttpRequestWithLabelsAndTimestampFormatOutcome(std::move(result.GetError()));
}

HttpResponseCodeOutcome RestXmlProtocolClient::HttpResponseCode(const HttpResponseCodeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpResponseCode");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? HttpResponseCodeOutcome(result.GetResultWithOwnership())
                            : HttpResponseCodeOutcome(std::move(result.GetError()));
}

HttpStringPayloadOutcome RestXmlProtocolClient::HttpStringPayload(const HttpStringPayloadRequest& request) const {
  AWS_OPERATION_GUARD(HttpStringPayload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpStringPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpStringPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpStringPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpStringPayloadOutcome>(
      [&]() -> HttpStringPayloadOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HttpStringPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/StringPayload");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? HttpStringPayloadOutcome(result.GetResultWithOwnership())
                                  : HttpStringPayloadOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

IgnoreQueryParamsInResponseOutcome RestXmlProtocolClient::IgnoreQueryParamsInResponse(
    const IgnoreQueryParamsInResponseRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/IgnoreQueryParamsInResponse");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? IgnoreQueryParamsInResponseOutcome(result.GetResultWithOwnership())
                            : IgnoreQueryParamsInResponseOutcome(std::move(result.GetError()));
}

InputAndOutputWithHeadersOutcome RestXmlProtocolClient::InputAndOutputWithHeaders(const InputAndOutputWithHeadersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/InputAndOutputWithHeaders");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? InputAndOutputWithHeadersOutcome(result.GetResultWithOwnership())
                            : InputAndOutputWithHeadersOutcome(std::move(result.GetError()));
}

NestedXmlMapWithXmlNameOutcome RestXmlProtocolClient::NestedXmlMapWithXmlName(const NestedXmlMapWithXmlNameRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/NestedXmlMapWithXmlName");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NestedXmlMapWithXmlNameOutcome(result.GetResultWithOwnership())
                            : NestedXmlMapWithXmlNameOutcome(std::move(result.GetError()));
}

NestedXmlMapsOutcome RestXmlProtocolClient::NestedXmlMaps(const NestedXmlMapsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/NestedXmlMaps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NestedXmlMapsOutcome(result.GetResultWithOwnership()) : NestedXmlMapsOutcome(std::move(result.GetError()));
}

NoInputAndNoOutputOutcome RestXmlProtocolClient::NoInputAndNoOutput(const NoInputAndNoOutputRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/NoInputAndNoOutput");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NoInputAndNoOutputOutcome(result.GetResultWithOwnership())
                            : NoInputAndNoOutputOutcome(std::move(result.GetError()));
}

NoInputAndOutputOutcome RestXmlProtocolClient::NoInputAndOutput(const NoInputAndOutputRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/NoInputAndOutputOutput");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NoInputAndOutputOutcome(result.GetResultWithOwnership())
                            : NoInputAndOutputOutcome(std::move(result.GetError()));
}

NullAndEmptyHeadersClientOutcome RestXmlProtocolClient::NullAndEmptyHeadersClient(const NullAndEmptyHeadersClientRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/NullAndEmptyHeadersClient");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? NullAndEmptyHeadersClientOutcome(result.GetResultWithOwnership())
                            : NullAndEmptyHeadersClientOutcome(std::move(result.GetError()));
}

NullAndEmptyHeadersServerOutcome RestXmlProtocolClient::NullAndEmptyHeadersServer(const NullAndEmptyHeadersServerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/NullAndEmptyHeadersServer");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? NullAndEmptyHeadersServerOutcome(result.GetResultWithOwnership())
                            : NullAndEmptyHeadersServerOutcome(std::move(result.GetError()));
}

OmitsNullSerializesEmptyStringOutcome RestXmlProtocolClient::OmitsNullSerializesEmptyString(
    const OmitsNullSerializesEmptyStringRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/OmitsNullSerializesEmptyString");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? OmitsNullSerializesEmptyStringOutcome(result.GetResultWithOwnership())
                            : OmitsNullSerializesEmptyStringOutcome(std::move(result.GetError()));
}

PutWithContentEncodingOutcome RestXmlProtocolClient::PutWithContentEncoding(const PutWithContentEncodingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/requestcompression/putcontentwithencoding");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutWithContentEncodingOutcome(result.GetResultWithOwnership())
                            : PutWithContentEncodingOutcome(std::move(result.GetError()));
}

QueryIdempotencyTokenAutoFillOutcome RestXmlProtocolClient::QueryIdempotencyTokenAutoFill(
    const QueryIdempotencyTokenAutoFillRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/QueryIdempotencyTokenAutoFill");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryIdempotencyTokenAutoFillOutcome(result.GetResultWithOwnership())
                            : QueryIdempotencyTokenAutoFillOutcome(std::move(result.GetError()));
}

QueryParamsAsStringListMapOutcome RestXmlProtocolClient::QueryParamsAsStringListMap(
    const QueryParamsAsStringListMapRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StringListMap");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryParamsAsStringListMapOutcome(result.GetResultWithOwnership())
                            : QueryParamsAsStringListMapOutcome(std::move(result.GetError()));
}

QueryPrecedenceOutcome RestXmlProtocolClient::QueryPrecedence(const QueryPrecedenceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Precedence");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryPrecedenceOutcome(result.GetResultWithOwnership())
                            : QueryPrecedenceOutcome(std::move(result.GetError()));
}

RecursiveShapesOutcome RestXmlProtocolClient::RecursiveShapes(const RecursiveShapesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/RecursiveShapes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? RecursiveShapesOutcome(result.GetResultWithOwnership())
                            : RecursiveShapesOutcome(std::move(result.GetError()));
}

SimpleScalarPropertiesOutcome RestXmlProtocolClient::SimpleScalarProperties(const SimpleScalarPropertiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/SimpleScalarProperties");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? SimpleScalarPropertiesOutcome(result.GetResultWithOwnership())
                            : SimpleScalarPropertiesOutcome(std::move(result.GetError()));
}

TimestampFormatHeadersOutcome RestXmlProtocolClient::TimestampFormatHeaders(const TimestampFormatHeadersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/TimestampFormatHeaders");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TimestampFormatHeadersOutcome(result.GetResultWithOwnership())
                            : TimestampFormatHeadersOutcome(std::move(result.GetError()));
}

XmlAttributesOutcome RestXmlProtocolClient::XmlAttributes(const XmlAttributesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlAttributes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? XmlAttributesOutcome(result.GetResultWithOwnership()) : XmlAttributesOutcome(std::move(result.GetError()));
}

XmlAttributesOnPayloadOutcome RestXmlProtocolClient::XmlAttributesOnPayload(const XmlAttributesOnPayloadRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlAttributesOnPayload");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? XmlAttributesOnPayloadOutcome(result.GetResultWithOwnership())
                            : XmlAttributesOnPayloadOutcome(std::move(result.GetError()));
}

XmlBlobsOutcome RestXmlProtocolClient::XmlBlobs(const XmlBlobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlBlobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlBlobsOutcome(result.GetResultWithOwnership()) : XmlBlobsOutcome(std::move(result.GetError()));
}

XmlEmptyBlobsOutcome RestXmlProtocolClient::XmlEmptyBlobs(const XmlEmptyBlobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlEmptyBlobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlEmptyBlobsOutcome(result.GetResultWithOwnership()) : XmlEmptyBlobsOutcome(std::move(result.GetError()));
}

XmlEmptyListsOutcome RestXmlProtocolClient::XmlEmptyLists(const XmlEmptyListsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlEmptyLists");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? XmlEmptyListsOutcome(result.GetResultWithOwnership()) : XmlEmptyListsOutcome(std::move(result.GetError()));
}

XmlEmptyMapsOutcome RestXmlProtocolClient::XmlEmptyMaps(const XmlEmptyMapsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlEmptyMaps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlEmptyMapsOutcome(result.GetResultWithOwnership()) : XmlEmptyMapsOutcome(std::move(result.GetError()));
}

XmlEmptyStringsOutcome RestXmlProtocolClient::XmlEmptyStrings(const XmlEmptyStringsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlEmptyStrings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? XmlEmptyStringsOutcome(result.GetResultWithOwnership())
                            : XmlEmptyStringsOutcome(std::move(result.GetError()));
}

XmlEnumsOutcome RestXmlProtocolClient::XmlEnums(const XmlEnumsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlEnums");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? XmlEnumsOutcome(result.GetResultWithOwnership()) : XmlEnumsOutcome(std::move(result.GetError()));
}

XmlIntEnumsOutcome RestXmlProtocolClient::XmlIntEnums(const XmlIntEnumsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlIntEnums");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? XmlIntEnumsOutcome(result.GetResultWithOwnership()) : XmlIntEnumsOutcome(std::move(result.GetError()));
}

XmlListsOutcome RestXmlProtocolClient::XmlLists(const XmlListsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlLists");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? XmlListsOutcome(result.GetResultWithOwnership()) : XmlListsOutcome(std::move(result.GetError()));
}

XmlMapWithXmlNamespaceOutcome RestXmlProtocolClient::XmlMapWithXmlNamespace(const XmlMapWithXmlNamespaceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlMapWithXmlNamespace");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlMapWithXmlNamespaceOutcome(result.GetResultWithOwnership())
                            : XmlMapWithXmlNamespaceOutcome(std::move(result.GetError()));
}

XmlMapsOutcome RestXmlProtocolClient::XmlMaps(const XmlMapsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlMaps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlMapsOutcome(result.GetResultWithOwnership()) : XmlMapsOutcome(std::move(result.GetError()));
}

XmlMapsXmlNameOutcome RestXmlProtocolClient::XmlMapsXmlName(const XmlMapsXmlNameRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlMapsXmlName");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlMapsXmlNameOutcome(result.GetResultWithOwnership()) : XmlMapsXmlNameOutcome(std::move(result.GetError()));
}

XmlNamespacesOutcome RestXmlProtocolClient::XmlNamespaces(const XmlNamespacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlNamespaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlNamespacesOutcome(result.GetResultWithOwnership()) : XmlNamespacesOutcome(std::move(result.GetError()));
}

XmlTimestampsOutcome RestXmlProtocolClient::XmlTimestamps(const XmlTimestampsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlTimestamps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlTimestampsOutcome(result.GetResultWithOwnership()) : XmlTimestampsOutcome(std::move(result.GetError()));
}

XmlUnionsOutcome RestXmlProtocolClient::XmlUnions(const XmlUnionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/XmlUnions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? XmlUnionsOutcome(result.GetResultWithOwnership()) : XmlUnionsOutcome(std::move(result.GetError()));
}
