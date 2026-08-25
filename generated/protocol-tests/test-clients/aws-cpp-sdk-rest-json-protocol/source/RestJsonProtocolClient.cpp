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
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/RestJsonProtocolEndpointProvider.h>
#include <aws/rest-json-protocol/RestJsonProtocolErrorMarshaller.h>
#include <aws/rest-json-protocol/model/AllQueryStringTypesRequest.h>
#include <aws/rest-json-protocol/model/ConstantAndVariableQueryStringRequest.h>
#include <aws/rest-json-protocol/model/ConstantQueryStringRequest.h>
#include <aws/rest-json-protocol/model/ContentTypeParametersRequest.h>
#include <aws/rest-json-protocol/model/DatetimeOffsetsRequest.h>
#include <aws/rest-json-protocol/model/DocumentTypeAsMapValueRequest.h>
#include <aws/rest-json-protocol/model/DocumentTypeAsPayloadRequest.h>
#include <aws/rest-json-protocol/model/DocumentTypeRequest.h>
#include <aws/rest-json-protocol/model/EmptyInputAndEmptyOutputRequest.h>
#include <aws/rest-json-protocol/model/EndpointOperationRequest.h>
#include <aws/rest-json-protocol/model/EndpointWithHostLabelOperationRequest.h>
#include <aws/rest-json-protocol/model/FractionalSecondsRequest.h>
#include <aws/rest-json-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/rest-json-protocol/model/HostWithPathOperationRequest.h>
#include <aws/rest-json-protocol/model/HttpChecksumRequiredRequest.h>
#include <aws/rest-json-protocol/model/HttpEmptyPrefixHeadersRequest.h>
#include <aws/rest-json-protocol/model/HttpEnumPayloadRequest.h>
#include <aws/rest-json-protocol/model/HttpPayloadTraitsRequest.h>
#include <aws/rest-json-protocol/model/HttpPayloadWithStructureRequest.h>
#include <aws/rest-json-protocol/model/HttpPayloadWithUnionRequest.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersInResponseRequest.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersRequest.h>
#include <aws/rest-json-protocol/model/HttpQueryParamsOnlyOperationRequest.h>
#include <aws/rest-json-protocol/model/HttpRequestWithFloatLabelsRequest.h>
#include <aws/rest-json-protocol/model/HttpRequestWithGreedyLabelInPathRequest.h>
#include <aws/rest-json-protocol/model/HttpRequestWithLabelsAndTimestampFormatRequest.h>
#include <aws/rest-json-protocol/model/HttpRequestWithLabelsRequest.h>
#include <aws/rest-json-protocol/model/HttpRequestWithRegexLiteralRequest.h>
#include <aws/rest-json-protocol/model/HttpResponseCodeRequest.h>
#include <aws/rest-json-protocol/model/HttpStringPayloadRequest.h>
#include <aws/rest-json-protocol/model/IgnoreQueryParamsInResponseRequest.h>
#include <aws/rest-json-protocol/model/InputAndOutputWithHeadersRequest.h>
#include <aws/rest-json-protocol/model/JsonBlobsRequest.h>
#include <aws/rest-json-protocol/model/JsonEnumsRequest.h>
#include <aws/rest-json-protocol/model/JsonIntEnumsRequest.h>
#include <aws/rest-json-protocol/model/JsonListsRequest.h>
#include <aws/rest-json-protocol/model/JsonMapsRequest.h>
#include <aws/rest-json-protocol/model/JsonTimestampsRequest.h>
#include <aws/rest-json-protocol/model/JsonUnionsRequest.h>
#include <aws/rest-json-protocol/model/MediaTypeHeaderRequest.h>
#include <aws/rest-json-protocol/model/NoInputAndNoOutputRequest.h>
#include <aws/rest-json-protocol/model/NoInputAndOutputRequest.h>
#include <aws/rest-json-protocol/model/NullAndEmptyHeadersClientRequest.h>
#include <aws/rest-json-protocol/model/NullAndEmptyHeadersServerRequest.h>
#include <aws/rest-json-protocol/model/OmitsNullSerializesEmptyStringRequest.h>
#include <aws/rest-json-protocol/model/OmitsSerializingEmptyListsRequest.h>
#include <aws/rest-json-protocol/model/PostUnionWithJsonNameRequest.h>
#include <aws/rest-json-protocol/model/PutWithContentEncodingRequest.h>
#include <aws/rest-json-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>
#include <aws/rest-json-protocol/model/QueryParamsAsStringListMapRequest.h>
#include <aws/rest-json-protocol/model/QueryPrecedenceRequest.h>
#include <aws/rest-json-protocol/model/RecursiveShapesRequest.h>
#include <aws/rest-json-protocol/model/ResponseCodeHttpFallbackRequest.h>
#include <aws/rest-json-protocol/model/ResponseCodeRequiredRequest.h>
#include <aws/rest-json-protocol/model/SimpleScalarPropertiesRequest.h>
#include <aws/rest-json-protocol/model/SparseJsonListsRequest.h>
#include <aws/rest-json-protocol/model/SparseJsonMapsRequest.h>
#include <aws/rest-json-protocol/model/TestBodyStructureRequest.h>
#include <aws/rest-json-protocol/model/TestGetNoInputNoPayloadRequest.h>
#include <aws/rest-json-protocol/model/TestGetNoPayloadRequest.h>
#include <aws/rest-json-protocol/model/TestPayloadBlobRequest.h>
#include <aws/rest-json-protocol/model/TestPayloadStructureRequest.h>
#include <aws/rest-json-protocol/model/TestPostNoInputNoPayloadRequest.h>
#include <aws/rest-json-protocol/model/TestPostNoPayloadRequest.h>
#include <aws/rest-json-protocol/model/TimestampFormatHeadersRequest.h>
#include <aws/rest-json-protocol/model/UnitInputAndOutputRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RestJsonProtocol;
using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace RestJsonProtocol {
const char SERVICE_NAME[] = "restjson";
const char ALLOCATION_TAG[] = "RestJsonProtocolClient";
}  // namespace RestJsonProtocol
}  // namespace Aws
const char* RestJsonProtocolClient::GetServiceName() { return SERVICE_NAME; }
const char* RestJsonProtocolClient::GetAllocationTag() { return ALLOCATION_TAG; }

RestJsonProtocolClient::RestJsonProtocolClient(const RestJsonProtocol::RestJsonProtocolClientConfiguration& clientConfiguration,
                                               std::shared_ptr<RestJsonProtocolEndpointProviderBase> endpointProvider)
    : BASECLASS(
          clientConfiguration,
          Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
              ALLOCATION_TAG,
              Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
              SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
          Aws::MakeShared<RestJsonProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<RestJsonProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RestJsonProtocolClient::RestJsonProtocolClient(const AWSCredentials& credentials,
                                               std::shared_ptr<RestJsonProtocolEndpointProviderBase> endpointProvider,
                                               const RestJsonProtocol::RestJsonProtocolClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RestJsonProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<RestJsonProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RestJsonProtocolClient::RestJsonProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<RestJsonProtocolEndpointProviderBase> endpointProvider,
                                               const RestJsonProtocol::RestJsonProtocolClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RestJsonProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<RestJsonProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
RestJsonProtocolClient::RestJsonProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(
          clientConfiguration,
          Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
              ALLOCATION_TAG,
              Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
              SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
          Aws::MakeShared<RestJsonProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RestJsonProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RestJsonProtocolClient::RestJsonProtocolClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RestJsonProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RestJsonProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RestJsonProtocolClient::RestJsonProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RestJsonProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RestJsonProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
RestJsonProtocolClient::~RestJsonProtocolClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<RestJsonProtocolEndpointProviderBase>& RestJsonProtocolClient::accessEndpointProvider() { return m_endpointProvider; }

void RestJsonProtocolClient::init(const RestJsonProtocol::RestJsonProtocolClientConfiguration& config) {
  AWSClient::SetServiceClientName("Rest Json Protocol");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "restjson");
}

void RestJsonProtocolClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
RestJsonProtocolClient::InvokeOperationOutcome RestJsonProtocolClient::InvokeServiceOperation(
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

AllQueryStringTypesOutcome RestJsonProtocolClient::AllQueryStringTypes(const AllQueryStringTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/AllQueryStringTypesInput");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? AllQueryStringTypesOutcome(result.GetResultWithOwnership())
                            : AllQueryStringTypesOutcome(std::move(result.GetError()));
}

ConstantAndVariableQueryStringOutcome RestJsonProtocolClient::ConstantAndVariableQueryString(
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

ConstantQueryStringOutcome RestJsonProtocolClient::ConstantQueryString(const ConstantQueryStringRequest& request) const {
  if (!request.HelloHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ConstantQueryString", "Required field: Hello, is not set");
    return ConstantQueryStringOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Hello]", false));
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

ContentTypeParametersOutcome RestJsonProtocolClient::ContentTypeParameters(const ContentTypeParametersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ContentTypeParameters");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ContentTypeParametersOutcome(result.GetResultWithOwnership())
                            : ContentTypeParametersOutcome(std::move(result.GetError()));
}

DatetimeOffsetsOutcome RestJsonProtocolClient::DatetimeOffsets(const DatetimeOffsetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DatetimeOffsets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DatetimeOffsetsOutcome(result.GetResultWithOwnership())
                            : DatetimeOffsetsOutcome(std::move(result.GetError()));
}

DocumentTypeOutcome RestJsonProtocolClient::DocumentType(const DocumentTypeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DocumentType");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? DocumentTypeOutcome(result.GetResultWithOwnership()) : DocumentTypeOutcome(std::move(result.GetError()));
}

DocumentTypeAsMapValueOutcome RestJsonProtocolClient::DocumentTypeAsMapValue(const DocumentTypeAsMapValueRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DocumentTypeAsMapValue");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? DocumentTypeAsMapValueOutcome(result.GetResultWithOwnership())
                            : DocumentTypeAsMapValueOutcome(std::move(result.GetError()));
}

DocumentTypeAsPayloadOutcome RestJsonProtocolClient::DocumentTypeAsPayload(const DocumentTypeAsPayloadRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DocumentTypeAsPayload");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? DocumentTypeAsPayloadOutcome(result.GetResultWithOwnership())
                            : DocumentTypeAsPayloadOutcome(std::move(result.GetError()));
}

EmptyInputAndEmptyOutputOutcome RestJsonProtocolClient::EmptyInputAndEmptyOutput(const EmptyInputAndEmptyOutputRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/EmptyInputAndEmptyOutput");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EmptyInputAndEmptyOutputOutcome(result.GetResultWithOwnership())
                            : EmptyInputAndEmptyOutputOutcome(std::move(result.GetError()));
}

EndpointOperationOutcome RestJsonProtocolClient::EndpointOperation(const EndpointOperationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/EndpointOperation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EndpointOperationOutcome(result.GetResultWithOwnership())
                            : EndpointOperationOutcome(std::move(result.GetError()));
}

EndpointWithHostLabelOperationOutcome RestJsonProtocolClient::EndpointWithHostLabelOperation(
    const EndpointWithHostLabelOperationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/EndpointWithHostLabelOperation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EndpointWithHostLabelOperationOutcome(result.GetResultWithOwnership())
                            : EndpointWithHostLabelOperationOutcome(std::move(result.GetError()));
}

FractionalSecondsOutcome RestJsonProtocolClient::FractionalSeconds(const FractionalSecondsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/FractionalSeconds");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FractionalSecondsOutcome(result.GetResultWithOwnership())
                            : FractionalSecondsOutcome(std::move(result.GetError()));
}

GreetingWithErrorsOutcome RestJsonProtocolClient::GreetingWithErrors(const GreetingWithErrorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GreetingWithErrors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? GreetingWithErrorsOutcome(result.GetResultWithOwnership())
                            : GreetingWithErrorsOutcome(std::move(result.GetError()));
}

HostWithPathOperationOutcome RestJsonProtocolClient::HostWithPathOperation(const HostWithPathOperationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HostWithPathOperation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? HostWithPathOperationOutcome(result.GetResultWithOwnership())
                            : HostWithPathOperationOutcome(std::move(result.GetError()));
}

HttpChecksumRequiredOutcome RestJsonProtocolClient::HttpChecksumRequired(const HttpChecksumRequiredRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpChecksumRequired");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? HttpChecksumRequiredOutcome(result.GetResultWithOwnership())
                            : HttpChecksumRequiredOutcome(std::move(result.GetError()));
}

HttpEmptyPrefixHeadersOutcome RestJsonProtocolClient::HttpEmptyPrefixHeaders(const HttpEmptyPrefixHeadersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpEmptyPrefixHeaders");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? HttpEmptyPrefixHeadersOutcome(result.GetResultWithOwnership())
                            : HttpEmptyPrefixHeadersOutcome(std::move(result.GetError()));
}

HttpEnumPayloadOutcome RestJsonProtocolClient::HttpEnumPayload(const HttpEnumPayloadRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/EnumPayload");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? HttpEnumPayloadOutcome(result.GetResultWithOwnership())
                            : HttpEnumPayloadOutcome(std::move(result.GetError()));
}

HttpPayloadTraitsOutcome RestJsonProtocolClient::HttpPayloadTraits(const HttpPayloadTraitsRequest& request) const {
  AWS_OPERATION_GUARD(HttpPayloadTraits);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpPayloadTraits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpPayloadTraits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpPayloadTraits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpPayloadTraits",
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

HttpPayloadWithStructureOutcome RestJsonProtocolClient::HttpPayloadWithStructure(const HttpPayloadWithStructureRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPayloadWithStructure");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? HttpPayloadWithStructureOutcome(result.GetResultWithOwnership())
                            : HttpPayloadWithStructureOutcome(std::move(result.GetError()));
}

HttpPayloadWithUnionOutcome RestJsonProtocolClient::HttpPayloadWithUnion(const HttpPayloadWithUnionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPayloadWithUnion");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? HttpPayloadWithUnionOutcome(result.GetResultWithOwnership())
                            : HttpPayloadWithUnionOutcome(std::move(result.GetError()));
}

HttpPrefixHeadersOutcome RestJsonProtocolClient::HttpPrefixHeaders(const HttpPrefixHeadersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPrefixHeaders");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? HttpPrefixHeadersOutcome(result.GetResultWithOwnership())
                            : HttpPrefixHeadersOutcome(std::move(result.GetError()));
}

HttpPrefixHeadersInResponseOutcome RestJsonProtocolClient::HttpPrefixHeadersInResponse(
    const HttpPrefixHeadersInResponseRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPrefixHeadersResponse");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? HttpPrefixHeadersInResponseOutcome(result.GetResultWithOwnership())
                            : HttpPrefixHeadersInResponseOutcome(std::move(result.GetError()));
}

HttpQueryParamsOnlyOperationOutcome RestJsonProtocolClient::HttpQueryParamsOnlyOperation(
    const HttpQueryParamsOnlyOperationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/http-query-params-only");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? HttpQueryParamsOnlyOperationOutcome(result.GetResultWithOwnership())
                            : HttpQueryParamsOnlyOperationOutcome(std::move(result.GetError()));
}

HttpRequestWithFloatLabelsOutcome RestJsonProtocolClient::HttpRequestWithFloatLabels(
    const HttpRequestWithFloatLabelsRequest& request) const {
  if (!request.FloatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithFloatLabels", "Required field: Float, is not set");
    return HttpRequestWithFloatLabelsOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Float]", false));
  }
  if (!request.DoubleHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithFloatLabels", "Required field: Double, is not set");
    return HttpRequestWithFloatLabelsOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Double]", false));
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

HttpRequestWithGreedyLabelInPathOutcome RestJsonProtocolClient::HttpRequestWithGreedyLabelInPath(
    const HttpRequestWithGreedyLabelInPathRequest& request) const {
  if (!request.FooHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithGreedyLabelInPath", "Required field: Foo, is not set");
    return HttpRequestWithGreedyLabelInPathOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Foo]", false));
  }
  if (!request.BazHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithGreedyLabelInPath", "Required field: Baz, is not set");
    return HttpRequestWithGreedyLabelInPathOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Baz]", false));
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

HttpRequestWithLabelsOutcome RestJsonProtocolClient::HttpRequestWithLabels(const HttpRequestWithLabelsRequest& request) const {
  if (!request.StringHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: String, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [String]", false));
  }
  if (!request.ShortHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: Short, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Short]", false));
  }
  if (!request.IntegerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: Integer, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Integer]", false));
  }
  if (!request.LongHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: Long, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Long]", false));
  }
  if (!request.FloatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: Float, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Float]", false));
  }
  if (!request.DoubleHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: Double, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Double]", false));
  }
  if (!request.BooleanHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: Boolean, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Boolean]", false));
  }
  if (!request.TimestampHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabels", "Required field: Timestamp, is not set");
    return HttpRequestWithLabelsOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Timestamp]", false));
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

HttpRequestWithLabelsAndTimestampFormatOutcome RestJsonProtocolClient::HttpRequestWithLabelsAndTimestampFormat(
    const HttpRequestWithLabelsAndTimestampFormatRequest& request) const {
  if (!request.MemberEpochSecondsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabelsAndTimestampFormat", "Required field: MemberEpochSeconds, is not set");
    return HttpRequestWithLabelsAndTimestampFormatOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberEpochSeconds]", false));
  }
  if (!request.MemberHttpDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabelsAndTimestampFormat", "Required field: MemberHttpDate, is not set");
    return HttpRequestWithLabelsAndTimestampFormatOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberHttpDate]", false));
  }
  if (!request.MemberDateTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabelsAndTimestampFormat", "Required field: MemberDateTime, is not set");
    return HttpRequestWithLabelsAndTimestampFormatOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberDateTime]", false));
  }
  if (!request.DefaultFormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabelsAndTimestampFormat", "Required field: DefaultFormat, is not set");
    return HttpRequestWithLabelsAndTimestampFormatOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DefaultFormat]", false));
  }
  if (!request.TargetEpochSecondsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabelsAndTimestampFormat", "Required field: TargetEpochSeconds, is not set");
    return HttpRequestWithLabelsAndTimestampFormatOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetEpochSeconds]", false));
  }
  if (!request.TargetHttpDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabelsAndTimestampFormat", "Required field: TargetHttpDate, is not set");
    return HttpRequestWithLabelsAndTimestampFormatOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetHttpDate]", false));
  }
  if (!request.TargetDateTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithLabelsAndTimestampFormat", "Required field: TargetDateTime, is not set");
    return HttpRequestWithLabelsAndTimestampFormatOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetDateTime]", false));
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

HttpRequestWithRegexLiteralOutcome RestJsonProtocolClient::HttpRequestWithRegexLiteral(
    const HttpRequestWithRegexLiteralRequest& request) const {
  if (!request.StrHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithRegexLiteral", "Required field: Str, is not set");
    return HttpRequestWithRegexLiteralOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Str]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ReDosLiteral/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStr());
    endpointResolutionOutcome.GetResult().AddPathSegments("/(a+)+");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? HttpRequestWithRegexLiteralOutcome(result.GetResultWithOwnership())
                            : HttpRequestWithRegexLiteralOutcome(std::move(result.GetError()));
}

HttpResponseCodeOutcome RestJsonProtocolClient::HttpResponseCode(const HttpResponseCodeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/HttpResponseCode");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? HttpResponseCodeOutcome(result.GetResultWithOwnership())
                            : HttpResponseCodeOutcome(std::move(result.GetError()));
}

HttpStringPayloadOutcome RestJsonProtocolClient::HttpStringPayload(const HttpStringPayloadRequest& request) const {
  AWS_OPERATION_GUARD(HttpStringPayload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpStringPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpStringPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpStringPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpStringPayload",
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

IgnoreQueryParamsInResponseOutcome RestJsonProtocolClient::IgnoreQueryParamsInResponse(
    const IgnoreQueryParamsInResponseRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/IgnoreQueryParamsInResponse");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? IgnoreQueryParamsInResponseOutcome(result.GetResultWithOwnership())
                            : IgnoreQueryParamsInResponseOutcome(std::move(result.GetError()));
}

InputAndOutputWithHeadersOutcome RestJsonProtocolClient::InputAndOutputWithHeaders(const InputAndOutputWithHeadersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/InputAndOutputWithHeaders");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? InputAndOutputWithHeadersOutcome(result.GetResultWithOwnership())
                            : InputAndOutputWithHeadersOutcome(std::move(result.GetError()));
}

JsonBlobsOutcome RestJsonProtocolClient::JsonBlobs(const JsonBlobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/JsonBlobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? JsonBlobsOutcome(result.GetResultWithOwnership()) : JsonBlobsOutcome(std::move(result.GetError()));
}

JsonEnumsOutcome RestJsonProtocolClient::JsonEnums(const JsonEnumsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/JsonEnums");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? JsonEnumsOutcome(result.GetResultWithOwnership()) : JsonEnumsOutcome(std::move(result.GetError()));
}

JsonIntEnumsOutcome RestJsonProtocolClient::JsonIntEnums(const JsonIntEnumsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/JsonIntEnums");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? JsonIntEnumsOutcome(result.GetResultWithOwnership()) : JsonIntEnumsOutcome(std::move(result.GetError()));
}

JsonListsOutcome RestJsonProtocolClient::JsonLists(const JsonListsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/JsonLists");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? JsonListsOutcome(result.GetResultWithOwnership()) : JsonListsOutcome(std::move(result.GetError()));
}

JsonMapsOutcome RestJsonProtocolClient::JsonMaps(const JsonMapsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/JsonMaps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? JsonMapsOutcome(result.GetResultWithOwnership()) : JsonMapsOutcome(std::move(result.GetError()));
}

JsonTimestampsOutcome RestJsonProtocolClient::JsonTimestamps(const JsonTimestampsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/JsonTimestamps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? JsonTimestampsOutcome(result.GetResultWithOwnership()) : JsonTimestampsOutcome(std::move(result.GetError()));
}

JsonUnionsOutcome RestJsonProtocolClient::JsonUnions(const JsonUnionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/JsonUnions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? JsonUnionsOutcome(result.GetResultWithOwnership()) : JsonUnionsOutcome(std::move(result.GetError()));
}

MediaTypeHeaderOutcome RestJsonProtocolClient::MediaTypeHeader(const MediaTypeHeaderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/MediaTypeHeader");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? MediaTypeHeaderOutcome(result.GetResultWithOwnership())
                            : MediaTypeHeaderOutcome(std::move(result.GetError()));
}

NoInputAndNoOutputOutcome RestJsonProtocolClient::NoInputAndNoOutput(const NoInputAndNoOutputRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/NoInputAndNoOutput");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NoInputAndNoOutputOutcome(result.GetResultWithOwnership())
                            : NoInputAndNoOutputOutcome(std::move(result.GetError()));
}

NoInputAndOutputOutcome RestJsonProtocolClient::NoInputAndOutput(const NoInputAndOutputRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/NoInputAndOutputOutput");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NoInputAndOutputOutcome(result.GetResultWithOwnership())
                            : NoInputAndOutputOutcome(std::move(result.GetError()));
}

NullAndEmptyHeadersClientOutcome RestJsonProtocolClient::NullAndEmptyHeadersClient(const NullAndEmptyHeadersClientRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/NullAndEmptyHeadersClient");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? NullAndEmptyHeadersClientOutcome(result.GetResultWithOwnership())
                            : NullAndEmptyHeadersClientOutcome(std::move(result.GetError()));
}

NullAndEmptyHeadersServerOutcome RestJsonProtocolClient::NullAndEmptyHeadersServer(const NullAndEmptyHeadersServerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/NullAndEmptyHeadersServer");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? NullAndEmptyHeadersServerOutcome(result.GetResultWithOwnership())
                            : NullAndEmptyHeadersServerOutcome(std::move(result.GetError()));
}

OmitsNullSerializesEmptyStringOutcome RestJsonProtocolClient::OmitsNullSerializesEmptyString(
    const OmitsNullSerializesEmptyStringRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/OmitsNullSerializesEmptyString");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? OmitsNullSerializesEmptyStringOutcome(result.GetResultWithOwnership())
                            : OmitsNullSerializesEmptyStringOutcome(std::move(result.GetError()));
}

OmitsSerializingEmptyListsOutcome RestJsonProtocolClient::OmitsSerializingEmptyLists(
    const OmitsSerializingEmptyListsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/OmitsSerializingEmptyLists");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? OmitsSerializingEmptyListsOutcome(result.GetResultWithOwnership())
                            : OmitsSerializingEmptyListsOutcome(std::move(result.GetError()));
}

PostUnionWithJsonNameOutcome RestJsonProtocolClient::PostUnionWithJsonName(const PostUnionWithJsonNameRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PostUnionWithJsonName");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PostUnionWithJsonNameOutcome(result.GetResultWithOwnership())
                            : PostUnionWithJsonNameOutcome(std::move(result.GetError()));
}

PutWithContentEncodingOutcome RestJsonProtocolClient::PutWithContentEncoding(const PutWithContentEncodingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/requestcompression/putcontentwithencoding");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutWithContentEncodingOutcome(result.GetResultWithOwnership())
                            : PutWithContentEncodingOutcome(std::move(result.GetError()));
}

QueryIdempotencyTokenAutoFillOutcome RestJsonProtocolClient::QueryIdempotencyTokenAutoFill(
    const QueryIdempotencyTokenAutoFillRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/QueryIdempotencyTokenAutoFill");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryIdempotencyTokenAutoFillOutcome(result.GetResultWithOwnership())
                            : QueryIdempotencyTokenAutoFillOutcome(std::move(result.GetError()));
}

QueryParamsAsStringListMapOutcome RestJsonProtocolClient::QueryParamsAsStringListMap(
    const QueryParamsAsStringListMapRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StringListMap");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryParamsAsStringListMapOutcome(result.GetResultWithOwnership())
                            : QueryParamsAsStringListMapOutcome(std::move(result.GetError()));
}

QueryPrecedenceOutcome RestJsonProtocolClient::QueryPrecedence(const QueryPrecedenceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Precedence");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryPrecedenceOutcome(result.GetResultWithOwnership())
                            : QueryPrecedenceOutcome(std::move(result.GetError()));
}

RecursiveShapesOutcome RestJsonProtocolClient::RecursiveShapes(const RecursiveShapesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/RecursiveShapes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? RecursiveShapesOutcome(result.GetResultWithOwnership())
                            : RecursiveShapesOutcome(std::move(result.GetError()));
}

ResponseCodeHttpFallbackOutcome RestJsonProtocolClient::ResponseCodeHttpFallback(const ResponseCodeHttpFallbackRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/responseCodeHttpFallback");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ResponseCodeHttpFallbackOutcome(result.GetResultWithOwnership())
                            : ResponseCodeHttpFallbackOutcome(std::move(result.GetError()));
}

ResponseCodeRequiredOutcome RestJsonProtocolClient::ResponseCodeRequired(const ResponseCodeRequiredRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/responseCodeRequired");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ResponseCodeRequiredOutcome(result.GetResultWithOwnership())
                            : ResponseCodeRequiredOutcome(std::move(result.GetError()));
}

SimpleScalarPropertiesOutcome RestJsonProtocolClient::SimpleScalarProperties(const SimpleScalarPropertiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/SimpleScalarProperties");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? SimpleScalarPropertiesOutcome(result.GetResultWithOwnership())
                            : SimpleScalarPropertiesOutcome(std::move(result.GetError()));
}

SparseJsonListsOutcome RestJsonProtocolClient::SparseJsonLists(const SparseJsonListsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/SparseJsonLists");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? SparseJsonListsOutcome(result.GetResultWithOwnership())
                            : SparseJsonListsOutcome(std::move(result.GetError()));
}

SparseJsonMapsOutcome RestJsonProtocolClient::SparseJsonMaps(const SparseJsonMapsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/SparseJsonMaps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SparseJsonMapsOutcome(result.GetResultWithOwnership()) : SparseJsonMapsOutcome(std::move(result.GetError()));
}

TestBodyStructureOutcome RestJsonProtocolClient::TestBodyStructure(const TestBodyStructureRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/body");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestBodyStructureOutcome(result.GetResultWithOwnership())
                            : TestBodyStructureOutcome(std::move(result.GetError()));
}

TestGetNoInputNoPayloadOutcome RestJsonProtocolClient::TestGetNoInputNoPayload(const TestGetNoInputNoPayloadRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/no_input_no_payload");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? TestGetNoInputNoPayloadOutcome(result.GetResultWithOwnership())
                            : TestGetNoInputNoPayloadOutcome(std::move(result.GetError()));
}

TestGetNoPayloadOutcome RestJsonProtocolClient::TestGetNoPayload(const TestGetNoPayloadRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/no_payload");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? TestGetNoPayloadOutcome(result.GetResultWithOwnership())
                            : TestGetNoPayloadOutcome(std::move(result.GetError()));
}

TestPayloadBlobOutcome RestJsonProtocolClient::TestPayloadBlob(const TestPayloadBlobRequest& request) const {
  AWS_OPERATION_GUARD(TestPayloadBlob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestPayloadBlob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TestPayloadBlob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TestPayloadBlob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TestPayloadBlob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TestPayloadBlobOutcome>(
      [&]() -> TestPayloadBlobOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestPayloadBlob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/blob_payload");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? TestPayloadBlobOutcome(result.GetResultWithOwnership())
                                  : TestPayloadBlobOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TestPayloadStructureOutcome RestJsonProtocolClient::TestPayloadStructure(const TestPayloadStructureRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/payload");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestPayloadStructureOutcome(result.GetResultWithOwnership())
                            : TestPayloadStructureOutcome(std::move(result.GetError()));
}

TestPostNoInputNoPayloadOutcome RestJsonProtocolClient::TestPostNoInputNoPayload(const TestPostNoInputNoPayloadRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/no_input_no_payload");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestPostNoInputNoPayloadOutcome(result.GetResultWithOwnership())
                            : TestPostNoInputNoPayloadOutcome(std::move(result.GetError()));
}

TestPostNoPayloadOutcome RestJsonProtocolClient::TestPostNoPayload(const TestPostNoPayloadRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/no_payload");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestPostNoPayloadOutcome(result.GetResultWithOwnership())
                            : TestPostNoPayloadOutcome(std::move(result.GetError()));
}

TimestampFormatHeadersOutcome RestJsonProtocolClient::TimestampFormatHeaders(const TimestampFormatHeadersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/TimestampFormatHeaders");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TimestampFormatHeadersOutcome(result.GetResultWithOwnership())
                            : TimestampFormatHeadersOutcome(std::move(result.GetError()));
}

UnitInputAndOutputOutcome RestJsonProtocolClient::UnitInputAndOutput(const UnitInputAndOutputRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UnitInputAndOutput");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnitInputAndOutputOutcome(result.GetResultWithOwnership())
                            : UnitInputAndOutputOutcome(std::move(result.GetError()));
}
