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
#include <aws/rest-json-protocol/model/HttpEnumPayloadRequest.h>
#include <aws/rest-json-protocol/model/HttpPayloadTraitsRequest.h>
#include <aws/rest-json-protocol/model/HttpPayloadWithStructureRequest.h>
#include <aws/rest-json-protocol/model/HttpPayloadWithUnionRequest.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersInResponseRequest.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersRequest.h>
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
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
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
RestJsonProtocolClient::RestJsonProtocolClient(const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RestJsonProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RestJsonProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RestJsonProtocolClient::RestJsonProtocolClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration)
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
                                               const Client::ClientConfiguration& clientConfiguration)
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
  m_endpointProvider->InitBuiltInParameters(config);
}

void RestJsonProtocolClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AllQueryStringTypesOutcome RestJsonProtocolClient::AllQueryStringTypes(const AllQueryStringTypesRequest& request) const {
  AWS_OPERATION_GUARD(AllQueryStringTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AllQueryStringTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AllQueryStringTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AllQueryStringTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AllQueryStringTypes",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AllQueryStringTypesOutcome>(
      [&]() -> AllQueryStringTypesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AllQueryStringTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/AllQueryStringTypesInput");
        return AllQueryStringTypesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ConstantAndVariableQueryStringOutcome RestJsonProtocolClient::ConstantAndVariableQueryString(
    const ConstantAndVariableQueryStringRequest& request) const {
  AWS_OPERATION_GUARD(ConstantAndVariableQueryString);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConstantAndVariableQueryString, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ConstantAndVariableQueryString, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ConstantAndVariableQueryString, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ConstantAndVariableQueryString",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ConstantAndVariableQueryStringOutcome>(
      [&]() -> ConstantAndVariableQueryStringOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConstantAndVariableQueryString, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        Aws::StringStream ss;
        endpointResolutionOutcome.GetResult().AddPathSegments("/ConstantAndVariableQueryString");
        ss.str("?foo=bar");
        endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
        return ConstantAndVariableQueryStringOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ConstantQueryStringOutcome RestJsonProtocolClient::ConstantQueryString(const ConstantQueryStringRequest& request) const {
  AWS_OPERATION_GUARD(ConstantQueryString);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConstantQueryString, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HelloHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ConstantQueryString", "Required field: Hello, is not set");
    return ConstantQueryStringOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Hello]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ConstantQueryString, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ConstantQueryString, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ConstantQueryString",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ConstantQueryStringOutcome>(
      [&]() -> ConstantQueryStringOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConstantQueryString, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        Aws::StringStream ss;
        endpointResolutionOutcome.GetResult().AddPathSegments("/ConstantQueryString/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHello());
        ss.str("?foo=bar&hello");
        endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
        return ConstantQueryStringOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ContentTypeParametersOutcome RestJsonProtocolClient::ContentTypeParameters(const ContentTypeParametersRequest& request) const {
  AWS_OPERATION_GUARD(ContentTypeParameters);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ContentTypeParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ContentTypeParameters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ContentTypeParameters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ContentTypeParameters",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ContentTypeParametersOutcome>(
      [&]() -> ContentTypeParametersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ContentTypeParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ContentTypeParameters");
        return ContentTypeParametersOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DatetimeOffsetsOutcome RestJsonProtocolClient::DatetimeOffsets(const DatetimeOffsetsRequest& request) const {
  AWS_OPERATION_GUARD(DatetimeOffsets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DatetimeOffsets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DatetimeOffsets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DatetimeOffsets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DatetimeOffsets",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DatetimeOffsetsOutcome>(
      [&]() -> DatetimeOffsetsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DatetimeOffsets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/DatetimeOffsets");
        return DatetimeOffsetsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DocumentTypeOutcome RestJsonProtocolClient::DocumentType(const DocumentTypeRequest& request) const {
  AWS_OPERATION_GUARD(DocumentType);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DocumentType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DocumentType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DocumentType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DocumentType",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DocumentTypeOutcome>(
      [&]() -> DocumentTypeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DocumentType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/DocumentType");
        return DocumentTypeOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DocumentTypeAsMapValueOutcome RestJsonProtocolClient::DocumentTypeAsMapValue(const DocumentTypeAsMapValueRequest& request) const {
  AWS_OPERATION_GUARD(DocumentTypeAsMapValue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DocumentTypeAsMapValue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DocumentTypeAsMapValue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DocumentTypeAsMapValue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DocumentTypeAsMapValue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DocumentTypeAsMapValueOutcome>(
      [&]() -> DocumentTypeAsMapValueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DocumentTypeAsMapValue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/DocumentTypeAsMapValue");
        return DocumentTypeAsMapValueOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DocumentTypeAsPayloadOutcome RestJsonProtocolClient::DocumentTypeAsPayload(const DocumentTypeAsPayloadRequest& request) const {
  AWS_OPERATION_GUARD(DocumentTypeAsPayload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DocumentTypeAsPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DocumentTypeAsPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DocumentTypeAsPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DocumentTypeAsPayload",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DocumentTypeAsPayloadOutcome>(
      [&]() -> DocumentTypeAsPayloadOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DocumentTypeAsPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/DocumentTypeAsPayload");
        return DocumentTypeAsPayloadOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EmptyInputAndEmptyOutputOutcome RestJsonProtocolClient::EmptyInputAndEmptyOutput(const EmptyInputAndEmptyOutputRequest& request) const {
  AWS_OPERATION_GUARD(EmptyInputAndEmptyOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EmptyInputAndEmptyOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, EmptyInputAndEmptyOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, EmptyInputAndEmptyOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".EmptyInputAndEmptyOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<EmptyInputAndEmptyOutputOutcome>(
      [&]() -> EmptyInputAndEmptyOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EmptyInputAndEmptyOutput, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/EmptyInputAndEmptyOutput");
        return EmptyInputAndEmptyOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EndpointOperationOutcome RestJsonProtocolClient::EndpointOperation(const EndpointOperationRequest& request) const {
  AWS_OPERATION_GUARD(EndpointOperation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EndpointOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, EndpointOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, EndpointOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".EndpointOperation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<EndpointOperationOutcome>(
      [&]() -> EndpointOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EndpointOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("foo.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), EndpointOperationOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/EndpointOperation");
        return EndpointOperationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EndpointWithHostLabelOperationOutcome RestJsonProtocolClient::EndpointWithHostLabelOperation(
    const EndpointWithHostLabelOperationRequest& request) const {
  AWS_OPERATION_GUARD(EndpointWithHostLabelOperation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EndpointWithHostLabelOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, EndpointWithHostLabelOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, EndpointWithHostLabelOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".EndpointWithHostLabelOperation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<EndpointWithHostLabelOperationOutcome>(
      [&]() -> EndpointWithHostLabelOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EndpointWithHostLabelOperation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("foo." + request.GetLabel() + ".");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), EndpointWithHostLabelOperationOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/EndpointWithHostLabelOperation");
        return EndpointWithHostLabelOperationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

FractionalSecondsOutcome RestJsonProtocolClient::FractionalSeconds(const FractionalSecondsRequest& request) const {
  AWS_OPERATION_GUARD(FractionalSeconds);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, FractionalSeconds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, FractionalSeconds, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, FractionalSeconds, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".FractionalSeconds",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<FractionalSecondsOutcome>(
      [&]() -> FractionalSecondsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, FractionalSeconds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/FractionalSeconds");
        return FractionalSecondsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GreetingWithErrorsOutcome RestJsonProtocolClient::GreetingWithErrors(const GreetingWithErrorsRequest& request) const {
  AWS_OPERATION_GUARD(GreetingWithErrors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GreetingWithErrors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GreetingWithErrors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GreetingWithErrors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GreetingWithErrors",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GreetingWithErrorsOutcome>(
      [&]() -> GreetingWithErrorsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GreetingWithErrors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/GreetingWithErrors");
        return GreetingWithErrorsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HostWithPathOperationOutcome RestJsonProtocolClient::HostWithPathOperation(const HostWithPathOperationRequest& request) const {
  AWS_OPERATION_GUARD(HostWithPathOperation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HostWithPathOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HostWithPathOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HostWithPathOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HostWithPathOperation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HostWithPathOperationOutcome>(
      [&]() -> HostWithPathOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HostWithPathOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/HostWithPathOperation");
        return HostWithPathOperationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HttpChecksumRequiredOutcome RestJsonProtocolClient::HttpChecksumRequired(const HttpChecksumRequiredRequest& request) const {
  AWS_OPERATION_GUARD(HttpChecksumRequired);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpChecksumRequired, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpChecksumRequired, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpChecksumRequired, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpChecksumRequired",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpChecksumRequiredOutcome>(
      [&]() -> HttpChecksumRequiredOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HttpChecksumRequired, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/HttpChecksumRequired");
        return HttpChecksumRequiredOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HttpEnumPayloadOutcome RestJsonProtocolClient::HttpEnumPayload(const HttpEnumPayloadRequest& request) const {
  AWS_OPERATION_GUARD(HttpEnumPayload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpEnumPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpEnumPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpEnumPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpEnumPayload",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpEnumPayloadOutcome>(
      [&]() -> HttpEnumPayloadOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HttpEnumPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/EnumPayload");
        return HttpEnumPayloadOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
        return HttpPayloadTraitsOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HttpPayloadWithStructureOutcome RestJsonProtocolClient::HttpPayloadWithStructure(const HttpPayloadWithStructureRequest& request) const {
  AWS_OPERATION_GUARD(HttpPayloadWithStructure);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpPayloadWithStructure, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpPayloadWithStructure, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpPayloadWithStructure, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpPayloadWithStructure",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpPayloadWithStructureOutcome>(
      [&]() -> HttpPayloadWithStructureOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HttpPayloadWithStructure, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPayloadWithStructure");
        return HttpPayloadWithStructureOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HttpPayloadWithUnionOutcome RestJsonProtocolClient::HttpPayloadWithUnion(const HttpPayloadWithUnionRequest& request) const {
  AWS_OPERATION_GUARD(HttpPayloadWithUnion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpPayloadWithUnion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpPayloadWithUnion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpPayloadWithUnion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpPayloadWithUnion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpPayloadWithUnionOutcome>(
      [&]() -> HttpPayloadWithUnionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HttpPayloadWithUnion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPayloadWithUnion");
        return HttpPayloadWithUnionOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HttpPrefixHeadersOutcome RestJsonProtocolClient::HttpPrefixHeaders(const HttpPrefixHeadersRequest& request) const {
  AWS_OPERATION_GUARD(HttpPrefixHeaders);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpPrefixHeaders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpPrefixHeaders, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpPrefixHeaders, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpPrefixHeaders",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpPrefixHeadersOutcome>(
      [&]() -> HttpPrefixHeadersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HttpPrefixHeaders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPrefixHeaders");
        return HttpPrefixHeadersOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HttpPrefixHeadersInResponseOutcome RestJsonProtocolClient::HttpPrefixHeadersInResponse(
    const HttpPrefixHeadersInResponseRequest& request) const {
  AWS_OPERATION_GUARD(HttpPrefixHeadersInResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpPrefixHeadersInResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpPrefixHeadersInResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpPrefixHeadersInResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpPrefixHeadersInResponse",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpPrefixHeadersInResponseOutcome>(
      [&]() -> HttpPrefixHeadersInResponseOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HttpPrefixHeadersInResponse, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/HttpPrefixHeadersResponse");
        return HttpPrefixHeadersInResponseOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HttpRequestWithFloatLabelsOutcome RestJsonProtocolClient::HttpRequestWithFloatLabels(
    const HttpRequestWithFloatLabelsRequest& request) const {
  AWS_OPERATION_GUARD(HttpRequestWithFloatLabels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpRequestWithFloatLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpRequestWithFloatLabels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpRequestWithFloatLabels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpRequestWithFloatLabels",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpRequestWithFloatLabelsOutcome>(
      [&]() -> HttpRequestWithFloatLabelsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HttpRequestWithFloatLabels, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/FloatHttpLabels/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFloat());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDouble());
        return HttpRequestWithFloatLabelsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HttpRequestWithGreedyLabelInPathOutcome RestJsonProtocolClient::HttpRequestWithGreedyLabelInPath(
    const HttpRequestWithGreedyLabelInPathRequest& request) const {
  AWS_OPERATION_GUARD(HttpRequestWithGreedyLabelInPath);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpRequestWithGreedyLabelInPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpRequestWithGreedyLabelInPath, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpRequestWithGreedyLabelInPath, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpRequestWithGreedyLabelInPath",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpRequestWithGreedyLabelInPathOutcome>(
      [&]() -> HttpRequestWithGreedyLabelInPathOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HttpRequestWithGreedyLabelInPath, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/HttpRequestWithGreedyLabelInPath/foo/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFoo());
        endpointResolutionOutcome.GetResult().AddPathSegments("/baz/");
        endpointResolutionOutcome.GetResult().AddPathSegments(request.GetBaz());
        return HttpRequestWithGreedyLabelInPathOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HttpRequestWithLabelsOutcome RestJsonProtocolClient::HttpRequestWithLabels(const HttpRequestWithLabelsRequest& request) const {
  AWS_OPERATION_GUARD(HttpRequestWithLabels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpRequestWithLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpRequestWithLabels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpRequestWithLabels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpRequestWithLabels",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpRequestWithLabelsOutcome>(
      [&]() -> HttpRequestWithLabelsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HttpRequestWithLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/HttpRequestWithLabels/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetString());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShort());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInteger());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLong());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFloat());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDouble());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBoolean());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTimestamp().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
        return HttpRequestWithLabelsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HttpRequestWithLabelsAndTimestampFormatOutcome RestJsonProtocolClient::HttpRequestWithLabelsAndTimestampFormat(
    const HttpRequestWithLabelsAndTimestampFormatRequest& request) const {
  AWS_OPERATION_GUARD(HttpRequestWithLabelsAndTimestampFormat);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpRequestWithLabelsAndTimestampFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpRequestWithLabelsAndTimestampFormat, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpRequestWithLabelsAndTimestampFormat, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpRequestWithLabelsAndTimestampFormat",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpRequestWithLabelsAndTimestampFormatOutcome>(
      [&]() -> HttpRequestWithLabelsAndTimestampFormatOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HttpRequestWithLabelsAndTimestampFormat, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/HttpRequestWithLabelsAndTimestampFormat/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberEpochSeconds().Seconds());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberHttpDate().ToGmtString(Aws::Utils::DateFormat::RFC822));
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberDateTime().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDefaultFormat().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetEpochSeconds().Seconds());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetHttpDate().ToGmtString(Aws::Utils::DateFormat::RFC822));
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetDateTime().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
        return HttpRequestWithLabelsAndTimestampFormatOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HttpRequestWithRegexLiteralOutcome RestJsonProtocolClient::HttpRequestWithRegexLiteral(
    const HttpRequestWithRegexLiteralRequest& request) const {
  AWS_OPERATION_GUARD(HttpRequestWithRegexLiteral);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpRequestWithRegexLiteral, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StrHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithRegexLiteral", "Required field: Str, is not set");
    return HttpRequestWithRegexLiteralOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Str]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpRequestWithRegexLiteral, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpRequestWithRegexLiteral, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpRequestWithRegexLiteral",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpRequestWithRegexLiteralOutcome>(
      [&]() -> HttpRequestWithRegexLiteralOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HttpRequestWithRegexLiteral, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ReDosLiteral/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStr());
        endpointResolutionOutcome.GetResult().AddPathSegments("/(a+)+");
        return HttpRequestWithRegexLiteralOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HttpResponseCodeOutcome RestJsonProtocolClient::HttpResponseCode(const HttpResponseCodeRequest& request) const {
  AWS_OPERATION_GUARD(HttpResponseCode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpResponseCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, HttpResponseCode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpResponseCode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpResponseCode",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HttpResponseCodeOutcome>(
      [&]() -> HttpResponseCodeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, HttpResponseCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/HttpResponseCode");
        return HttpResponseCodeOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
        return HttpStringPayloadOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

IgnoreQueryParamsInResponseOutcome RestJsonProtocolClient::IgnoreQueryParamsInResponse(
    const IgnoreQueryParamsInResponseRequest& request) const {
  AWS_OPERATION_GUARD(IgnoreQueryParamsInResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, IgnoreQueryParamsInResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, IgnoreQueryParamsInResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, IgnoreQueryParamsInResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".IgnoreQueryParamsInResponse",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<IgnoreQueryParamsInResponseOutcome>(
      [&]() -> IgnoreQueryParamsInResponseOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, IgnoreQueryParamsInResponse, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/IgnoreQueryParamsInResponse");
        return IgnoreQueryParamsInResponseOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InputAndOutputWithHeadersOutcome RestJsonProtocolClient::InputAndOutputWithHeaders(const InputAndOutputWithHeadersRequest& request) const {
  AWS_OPERATION_GUARD(InputAndOutputWithHeaders);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InputAndOutputWithHeaders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InputAndOutputWithHeaders, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InputAndOutputWithHeaders, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InputAndOutputWithHeaders",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InputAndOutputWithHeadersOutcome>(
      [&]() -> InputAndOutputWithHeadersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InputAndOutputWithHeaders, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/InputAndOutputWithHeaders");
        return InputAndOutputWithHeadersOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

JsonBlobsOutcome RestJsonProtocolClient::JsonBlobs(const JsonBlobsRequest& request) const {
  AWS_OPERATION_GUARD(JsonBlobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, JsonBlobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, JsonBlobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, JsonBlobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".JsonBlobs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<JsonBlobsOutcome>(
      [&]() -> JsonBlobsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, JsonBlobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/JsonBlobs");
        return JsonBlobsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

JsonEnumsOutcome RestJsonProtocolClient::JsonEnums(const JsonEnumsRequest& request) const {
  AWS_OPERATION_GUARD(JsonEnums);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, JsonEnums, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, JsonEnums, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, JsonEnums, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".JsonEnums",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<JsonEnumsOutcome>(
      [&]() -> JsonEnumsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, JsonEnums, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/JsonEnums");
        return JsonEnumsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

JsonIntEnumsOutcome RestJsonProtocolClient::JsonIntEnums(const JsonIntEnumsRequest& request) const {
  AWS_OPERATION_GUARD(JsonIntEnums);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, JsonIntEnums, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, JsonIntEnums, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, JsonIntEnums, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".JsonIntEnums",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<JsonIntEnumsOutcome>(
      [&]() -> JsonIntEnumsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, JsonIntEnums, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/JsonIntEnums");
        return JsonIntEnumsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

JsonListsOutcome RestJsonProtocolClient::JsonLists(const JsonListsRequest& request) const {
  AWS_OPERATION_GUARD(JsonLists);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, JsonLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, JsonLists, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, JsonLists, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".JsonLists",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<JsonListsOutcome>(
      [&]() -> JsonListsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, JsonLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/JsonLists");
        return JsonListsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

JsonMapsOutcome RestJsonProtocolClient::JsonMaps(const JsonMapsRequest& request) const {
  AWS_OPERATION_GUARD(JsonMaps);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, JsonMaps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, JsonMaps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, JsonMaps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".JsonMaps",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<JsonMapsOutcome>(
      [&]() -> JsonMapsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, JsonMaps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/JsonMaps");
        return JsonMapsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

JsonTimestampsOutcome RestJsonProtocolClient::JsonTimestamps(const JsonTimestampsRequest& request) const {
  AWS_OPERATION_GUARD(JsonTimestamps);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, JsonTimestamps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, JsonTimestamps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, JsonTimestamps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".JsonTimestamps",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<JsonTimestampsOutcome>(
      [&]() -> JsonTimestampsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, JsonTimestamps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/JsonTimestamps");
        return JsonTimestampsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

JsonUnionsOutcome RestJsonProtocolClient::JsonUnions(const JsonUnionsRequest& request) const {
  AWS_OPERATION_GUARD(JsonUnions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, JsonUnions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, JsonUnions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, JsonUnions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".JsonUnions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<JsonUnionsOutcome>(
      [&]() -> JsonUnionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, JsonUnions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/JsonUnions");
        return JsonUnionsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

MediaTypeHeaderOutcome RestJsonProtocolClient::MediaTypeHeader(const MediaTypeHeaderRequest& request) const {
  AWS_OPERATION_GUARD(MediaTypeHeader);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MediaTypeHeader, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, MediaTypeHeader, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, MediaTypeHeader, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".MediaTypeHeader",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<MediaTypeHeaderOutcome>(
      [&]() -> MediaTypeHeaderOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MediaTypeHeader, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/MediaTypeHeader");
        return MediaTypeHeaderOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

NoInputAndNoOutputOutcome RestJsonProtocolClient::NoInputAndNoOutput(const NoInputAndNoOutputRequest& request) const {
  AWS_OPERATION_GUARD(NoInputAndNoOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, NoInputAndNoOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, NoInputAndNoOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, NoInputAndNoOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".NoInputAndNoOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<NoInputAndNoOutputOutcome>(
      [&]() -> NoInputAndNoOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, NoInputAndNoOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/NoInputAndNoOutput");
        return NoInputAndNoOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

NoInputAndOutputOutcome RestJsonProtocolClient::NoInputAndOutput(const NoInputAndOutputRequest& request) const {
  AWS_OPERATION_GUARD(NoInputAndOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, NoInputAndOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, NoInputAndOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, NoInputAndOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".NoInputAndOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<NoInputAndOutputOutcome>(
      [&]() -> NoInputAndOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, NoInputAndOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/NoInputAndOutputOutput");
        return NoInputAndOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

NullAndEmptyHeadersClientOutcome RestJsonProtocolClient::NullAndEmptyHeadersClient(const NullAndEmptyHeadersClientRequest& request) const {
  AWS_OPERATION_GUARD(NullAndEmptyHeadersClient);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, NullAndEmptyHeadersClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, NullAndEmptyHeadersClient, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, NullAndEmptyHeadersClient, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".NullAndEmptyHeadersClient",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<NullAndEmptyHeadersClientOutcome>(
      [&]() -> NullAndEmptyHeadersClientOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, NullAndEmptyHeadersClient, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/NullAndEmptyHeadersClient");
        return NullAndEmptyHeadersClientOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

NullAndEmptyHeadersServerOutcome RestJsonProtocolClient::NullAndEmptyHeadersServer(const NullAndEmptyHeadersServerRequest& request) const {
  AWS_OPERATION_GUARD(NullAndEmptyHeadersServer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, NullAndEmptyHeadersServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, NullAndEmptyHeadersServer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, NullAndEmptyHeadersServer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".NullAndEmptyHeadersServer",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<NullAndEmptyHeadersServerOutcome>(
      [&]() -> NullAndEmptyHeadersServerOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, NullAndEmptyHeadersServer, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/NullAndEmptyHeadersServer");
        return NullAndEmptyHeadersServerOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

OmitsNullSerializesEmptyStringOutcome RestJsonProtocolClient::OmitsNullSerializesEmptyString(
    const OmitsNullSerializesEmptyStringRequest& request) const {
  AWS_OPERATION_GUARD(OmitsNullSerializesEmptyString);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, OmitsNullSerializesEmptyString, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, OmitsNullSerializesEmptyString, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, OmitsNullSerializesEmptyString, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".OmitsNullSerializesEmptyString",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<OmitsNullSerializesEmptyStringOutcome>(
      [&]() -> OmitsNullSerializesEmptyStringOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, OmitsNullSerializesEmptyString, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/OmitsNullSerializesEmptyString");
        return OmitsNullSerializesEmptyStringOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

OmitsSerializingEmptyListsOutcome RestJsonProtocolClient::OmitsSerializingEmptyLists(
    const OmitsSerializingEmptyListsRequest& request) const {
  AWS_OPERATION_GUARD(OmitsSerializingEmptyLists);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, OmitsSerializingEmptyLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, OmitsSerializingEmptyLists, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, OmitsSerializingEmptyLists, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".OmitsSerializingEmptyLists",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<OmitsSerializingEmptyListsOutcome>(
      [&]() -> OmitsSerializingEmptyListsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, OmitsSerializingEmptyLists, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/OmitsSerializingEmptyLists");
        return OmitsSerializingEmptyListsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PostUnionWithJsonNameOutcome RestJsonProtocolClient::PostUnionWithJsonName(const PostUnionWithJsonNameRequest& request) const {
  AWS_OPERATION_GUARD(PostUnionWithJsonName);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostUnionWithJsonName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PostUnionWithJsonName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PostUnionWithJsonName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PostUnionWithJsonName",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PostUnionWithJsonNameOutcome>(
      [&]() -> PostUnionWithJsonNameOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PostUnionWithJsonName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/PostUnionWithJsonName");
        return PostUnionWithJsonNameOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutWithContentEncodingOutcome RestJsonProtocolClient::PutWithContentEncoding(const PutWithContentEncodingRequest& request) const {
  AWS_OPERATION_GUARD(PutWithContentEncoding);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutWithContentEncoding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutWithContentEncoding, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutWithContentEncoding, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutWithContentEncoding",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutWithContentEncodingOutcome>(
      [&]() -> PutWithContentEncodingOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutWithContentEncoding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/requestcompression/putcontentwithencoding");
        return PutWithContentEncodingOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

QueryIdempotencyTokenAutoFillOutcome RestJsonProtocolClient::QueryIdempotencyTokenAutoFill(
    const QueryIdempotencyTokenAutoFillRequest& request) const {
  AWS_OPERATION_GUARD(QueryIdempotencyTokenAutoFill);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, QueryIdempotencyTokenAutoFill, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, QueryIdempotencyTokenAutoFill, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, QueryIdempotencyTokenAutoFill, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".QueryIdempotencyTokenAutoFill",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<QueryIdempotencyTokenAutoFillOutcome>(
      [&]() -> QueryIdempotencyTokenAutoFillOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, QueryIdempotencyTokenAutoFill, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/QueryIdempotencyTokenAutoFill");
        return QueryIdempotencyTokenAutoFillOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

QueryParamsAsStringListMapOutcome RestJsonProtocolClient::QueryParamsAsStringListMap(
    const QueryParamsAsStringListMapRequest& request) const {
  AWS_OPERATION_GUARD(QueryParamsAsStringListMap);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, QueryParamsAsStringListMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, QueryParamsAsStringListMap, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, QueryParamsAsStringListMap, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".QueryParamsAsStringListMap",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<QueryParamsAsStringListMapOutcome>(
      [&]() -> QueryParamsAsStringListMapOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, QueryParamsAsStringListMap, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/StringListMap");
        return QueryParamsAsStringListMapOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

QueryPrecedenceOutcome RestJsonProtocolClient::QueryPrecedence(const QueryPrecedenceRequest& request) const {
  AWS_OPERATION_GUARD(QueryPrecedence);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, QueryPrecedence, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, QueryPrecedence, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, QueryPrecedence, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".QueryPrecedence",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<QueryPrecedenceOutcome>(
      [&]() -> QueryPrecedenceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, QueryPrecedence, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/Precedence");
        return QueryPrecedenceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RecursiveShapesOutcome RestJsonProtocolClient::RecursiveShapes(const RecursiveShapesRequest& request) const {
  AWS_OPERATION_GUARD(RecursiveShapes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RecursiveShapes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RecursiveShapes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RecursiveShapes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RecursiveShapes",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RecursiveShapesOutcome>(
      [&]() -> RecursiveShapesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RecursiveShapes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/RecursiveShapes");
        return RecursiveShapesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ResponseCodeHttpFallbackOutcome RestJsonProtocolClient::ResponseCodeHttpFallback(const ResponseCodeHttpFallbackRequest& request) const {
  AWS_OPERATION_GUARD(ResponseCodeHttpFallback);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResponseCodeHttpFallback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ResponseCodeHttpFallback, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ResponseCodeHttpFallback, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ResponseCodeHttpFallback",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ResponseCodeHttpFallbackOutcome>(
      [&]() -> ResponseCodeHttpFallbackOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResponseCodeHttpFallback, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/responseCodeHttpFallback");
        return ResponseCodeHttpFallbackOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ResponseCodeRequiredOutcome RestJsonProtocolClient::ResponseCodeRequired(const ResponseCodeRequiredRequest& request) const {
  AWS_OPERATION_GUARD(ResponseCodeRequired);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResponseCodeRequired, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ResponseCodeRequired, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ResponseCodeRequired, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ResponseCodeRequired",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ResponseCodeRequiredOutcome>(
      [&]() -> ResponseCodeRequiredOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResponseCodeRequired, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/responseCodeRequired");
        return ResponseCodeRequiredOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SimpleScalarPropertiesOutcome RestJsonProtocolClient::SimpleScalarProperties(const SimpleScalarPropertiesRequest& request) const {
  AWS_OPERATION_GUARD(SimpleScalarProperties);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SimpleScalarProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SimpleScalarProperties, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SimpleScalarProperties, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SimpleScalarProperties",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SimpleScalarPropertiesOutcome>(
      [&]() -> SimpleScalarPropertiesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SimpleScalarProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/SimpleScalarProperties");
        return SimpleScalarPropertiesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TestBodyStructureOutcome RestJsonProtocolClient::TestBodyStructure(const TestBodyStructureRequest& request) const {
  AWS_OPERATION_GUARD(TestBodyStructure);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestBodyStructure, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TestBodyStructure, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TestBodyStructure, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TestBodyStructure",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TestBodyStructureOutcome>(
      [&]() -> TestBodyStructureOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestBodyStructure, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/body");
        return TestBodyStructureOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TestGetNoInputNoPayloadOutcome RestJsonProtocolClient::TestGetNoInputNoPayload(const TestGetNoInputNoPayloadRequest& request) const {
  AWS_OPERATION_GUARD(TestGetNoInputNoPayload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestGetNoInputNoPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TestGetNoInputNoPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TestGetNoInputNoPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TestGetNoInputNoPayload",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TestGetNoInputNoPayloadOutcome>(
      [&]() -> TestGetNoInputNoPayloadOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestGetNoInputNoPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/no_input_no_payload");
        return TestGetNoInputNoPayloadOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TestGetNoPayloadOutcome RestJsonProtocolClient::TestGetNoPayload(const TestGetNoPayloadRequest& request) const {
  AWS_OPERATION_GUARD(TestGetNoPayload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestGetNoPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TestGetNoPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TestGetNoPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TestGetNoPayload",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TestGetNoPayloadOutcome>(
      [&]() -> TestGetNoPayloadOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestGetNoPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/no_payload");
        return TestGetNoPayloadOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
        return TestPayloadBlobOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TestPayloadStructureOutcome RestJsonProtocolClient::TestPayloadStructure(const TestPayloadStructureRequest& request) const {
  AWS_OPERATION_GUARD(TestPayloadStructure);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestPayloadStructure, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TestPayloadStructure, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TestPayloadStructure, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TestPayloadStructure",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TestPayloadStructureOutcome>(
      [&]() -> TestPayloadStructureOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestPayloadStructure, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/payload");
        return TestPayloadStructureOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TestPostNoInputNoPayloadOutcome RestJsonProtocolClient::TestPostNoInputNoPayload(const TestPostNoInputNoPayloadRequest& request) const {
  AWS_OPERATION_GUARD(TestPostNoInputNoPayload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestPostNoInputNoPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TestPostNoInputNoPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TestPostNoInputNoPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TestPostNoInputNoPayload",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TestPostNoInputNoPayloadOutcome>(
      [&]() -> TestPostNoInputNoPayloadOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestPostNoInputNoPayload, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/no_input_no_payload");
        return TestPostNoInputNoPayloadOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TestPostNoPayloadOutcome RestJsonProtocolClient::TestPostNoPayload(const TestPostNoPayloadRequest& request) const {
  AWS_OPERATION_GUARD(TestPostNoPayload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestPostNoPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TestPostNoPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TestPostNoPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TestPostNoPayload",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TestPostNoPayloadOutcome>(
      [&]() -> TestPostNoPayloadOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestPostNoPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/no_payload");
        return TestPostNoPayloadOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TimestampFormatHeadersOutcome RestJsonProtocolClient::TimestampFormatHeaders(const TimestampFormatHeadersRequest& request) const {
  AWS_OPERATION_GUARD(TimestampFormatHeaders);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TimestampFormatHeaders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TimestampFormatHeaders, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TimestampFormatHeaders, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TimestampFormatHeaders",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TimestampFormatHeadersOutcome>(
      [&]() -> TimestampFormatHeadersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TimestampFormatHeaders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/TimestampFormatHeaders");
        return TimestampFormatHeadersOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UnitInputAndOutputOutcome RestJsonProtocolClient::UnitInputAndOutput(const UnitInputAndOutputRequest& request) const {
  AWS_OPERATION_GUARD(UnitInputAndOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnitInputAndOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UnitInputAndOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UnitInputAndOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UnitInputAndOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UnitInputAndOutputOutcome>(
      [&]() -> UnitInputAndOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnitInputAndOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/UnitInputAndOutput");
        return UnitInputAndOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
