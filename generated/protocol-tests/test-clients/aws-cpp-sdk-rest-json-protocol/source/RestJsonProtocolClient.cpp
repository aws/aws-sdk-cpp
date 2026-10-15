/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/event/EventStream.h>
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
#include <aws/rest-json-protocol/model/DuplexStreamRequest.h>
#include <aws/rest-json-protocol/model/DuplexStreamWithInitialMessagesRequest.h>
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
#include <aws/rest-json-protocol/model/OutputStreamRequest.h>
#include <aws/rest-json-protocol/model/OutputStreamWithInitialResponseRequest.h>
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
#include <smithy/client/SmithyBidirectionalStreamingWriteDataTask.h>
#include <smithy/client/SmithyEventStreamingAsyncTask.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
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
const char ALLOCATION_TAG[] = "RestJsonProtocolClient";
const char SERVICE_NAME[] = "restjson";
}  // namespace RestJsonProtocol
}  // namespace Aws
const char* RestJsonProtocolClient::GetServiceName() { return SERVICE_NAME; }
const char* RestJsonProtocolClient::GetAllocationTag() { return ALLOCATION_TAG; }

RestJsonProtocolClient::RestJsonProtocolClient(const RestJsonProtocol::RestJsonProtocolClientConfiguration& clientConfiguration,
                                               std::shared_ptr<RestJsonProtocolEndpointProviderBase> endpointProvider)
    : AwsSmithyClientT(clientConfiguration, GetServiceName(), "Rest Json Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
                       Aws::MakeShared<RestJsonProtocolErrorMarshaller>(ALLOCATION_TAG),
                       endpointProvider ? endpointProvider : Aws::MakeShared<RestJsonProtocolEndpointProvider>(ALLOCATION_TAG),
                       Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
                           ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
                       {
                           {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                            smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region,
                                                    clientConfiguration.ResolveCredentialProviderConfig()}},
                       }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::RestJsonProtocol>(ALLOCATION_TAG));
}

RestJsonProtocolClient::RestJsonProtocolClient(const AWSCredentials& credentials,
                                               std::shared_ptr<RestJsonProtocolEndpointProviderBase> endpointProvider,
                                               const RestJsonProtocol::RestJsonProtocolClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Rest Json Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<RestJsonProtocolErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<RestJsonProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::RestJsonProtocol>(ALLOCATION_TAG));
}

RestJsonProtocolClient::RestJsonProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<RestJsonProtocolEndpointProviderBase> endpointProvider,
                                               const RestJsonProtocol::RestJsonProtocolClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Rest Json Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<RestJsonProtocolErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<RestJsonProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::RestJsonProtocol>(ALLOCATION_TAG));
}

/* Legacy constructors due deprecation */
RestJsonProtocolClient::RestJsonProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(clientConfiguration, GetServiceName(), "Rest Json Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
                       Aws::MakeShared<RestJsonProtocolErrorMarshaller>(ALLOCATION_TAG),
                       Aws::MakeShared<RestJsonProtocolEndpointProvider>(ALLOCATION_TAG),
                       Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
                           ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
                       {
                           {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                            smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region,
                                                    clientConfiguration.ResolveCredentialProviderConfig()}},
                       }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::RestJsonProtocol>(ALLOCATION_TAG));
}

RestJsonProtocolClient::RestJsonProtocolClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Rest Json Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<RestJsonProtocolErrorMarshaller>(ALLOCATION_TAG),
          Aws::MakeShared<RestJsonProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::RestJsonProtocol>(ALLOCATION_TAG));
}

RestJsonProtocolClient::RestJsonProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Rest Json Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<RestJsonProtocolErrorMarshaller>(ALLOCATION_TAG),
          Aws::MakeShared<RestJsonProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::RestJsonProtocol>(ALLOCATION_TAG));
}
/* End of legacy constructors due deprecation */

RestJsonProtocolClient::~RestJsonProtocolClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<RestJsonProtocolEndpointProviderBase>& RestJsonProtocolClient::accessEndpointProvider() { return m_endpointProvider; }

void RestJsonProtocolClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
RestJsonProtocolClient::InvokeOperationOutcome RestJsonProtocolClient::InvokeServiceOperation(
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
AllQueryStringTypesOutcome RestJsonProtocolClient::AllQueryStringTypes(const AllQueryStringTypesRequest& request) const {
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
ConstantAndVariableQueryStringOutcome RestJsonProtocolClient::ConstantAndVariableQueryString(
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
ConstantQueryStringOutcome RestJsonProtocolClient::ConstantQueryString(const ConstantQueryStringRequest& request) const {
  if (!request.HelloHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ConstantQueryString", "Required field: Hello, is not set");
    return ConstantQueryStringOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Hello]", false));
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
ContentTypeParametersOutcome RestJsonProtocolClient::ContentTypeParameters(const ContentTypeParametersRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/ContentTypeParameters");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return ContentTypeParametersOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return ContentTypeParametersOutcome(
      BuildOperationResult<ContentTypeParametersResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
DatetimeOffsetsOutcome RestJsonProtocolClient::DatetimeOffsets(const DatetimeOffsetsRequest& request) const {
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
DocumentTypeOutcome RestJsonProtocolClient::DocumentType(const DocumentTypeRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/DocumentType");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return DocumentTypeOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return DocumentTypeOutcome(BuildOperationResult<DocumentTypeResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
DocumentTypeAsMapValueOutcome RestJsonProtocolClient::DocumentTypeAsMapValue(const DocumentTypeAsMapValueRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/DocumentTypeAsMapValue");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return DocumentTypeAsMapValueOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return DocumentTypeAsMapValueOutcome(
      BuildOperationResult<DocumentTypeAsMapValueResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
DocumentTypeAsPayloadOutcome RestJsonProtocolClient::DocumentTypeAsPayload(const DocumentTypeAsPayloadRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/DocumentTypeAsPayload");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return DocumentTypeAsPayloadOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return DocumentTypeAsPayloadOutcome(
      BuildOperationResult<DocumentTypeAsPayloadResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
void RestJsonProtocolClient::DuplexStreamAsync(Model::DuplexStreamRequest& request,
                                               const DuplexStreamStreamReadyHandler& streamReadyHandler,
                                               const DuplexStreamResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const {
  AWS_ASYNC_OPERATION_GUARD(DuplexStream);
  if (!m_endpointProvider) {
    handler(this, request,
            DuplexStreamOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(RestJsonProtocolErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE",
                                                                              "Endpoint provider is not initialized", false)),
            handlerContext);
    return;
  }
  auto endpointCallback = [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/DuplexStream"); };

#if AWS_SDK_USE_CRT_HTTP
  // Push-based WriteData path (CRT HTTP client only)
  auto writeDataStreamBuf = Aws::MakeShared<Aws::Utils::Stream::HttpWriteDataStreamBuf>(ALLOCATION_TAG, m_httpClient, 8 * 1024,
                                                                                        m_clientConfiguration.requestTimeoutMs);
  auto eventEncoderStream = Aws::MakeShared<Model::EventStream>(ALLOCATION_TAG, writeDataStreamBuf);
  request.SetStream(eventEncoderStream);

  auto requestCopy = Aws::MakeShared<DuplexStreamRequest>(ALLOCATION_TAG, request);

  auto authCallback = [&](std::shared_ptr<smithy::client::AwsSmithyClientAsyncRequestContext> ctx) -> void {
    std::weak_ptr<smithy::client::AwsSmithyClientAsyncRequestContext> weakCtx = ctx;
    eventEncoderStream->SetSigningCallback([this, weakCtx](Aws::Utils::Event::Message& message, Aws::String& seed) -> bool {
      auto ctx = weakCtx.lock();
      if (!ctx) {
        return false;
      }
      auto outcome = SignEventMessage(message, seed, ctx);
      return outcome.IsSuccess();
    });
  };

  auto asyncTask = smithy::client::CreateSmithyBidirectionalWriteDataTask<DuplexStreamOutcome>(
      this, requestCopy, handler, handlerContext, eventEncoderStream, writeDataStreamBuf, std::move(endpointCallback),
      std::move(authCallback));
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
#else
  // Pull-based path
  auto eventEncoderStream = Aws::MakeShared<Model::EventStream>(ALLOCATION_TAG);
  auto authCallback = [&](std::shared_ptr<smithy::client::AwsSmithyClientAsyncRequestContext> ctx) -> void {
    std::weak_ptr<smithy::client::AwsSmithyClientAsyncRequestContext> weakCtx = ctx;
    eventEncoderStream->SetSigningCallback([this, weakCtx](Aws::Utils::Event::Message& message, Aws::String& seed) -> bool {
      auto ctx = weakCtx.lock();
      if (!ctx) {
        return false;
      }
      auto outcome = SignEventMessage(message, seed, ctx);
      return outcome.IsSuccess();
    });
  };
  auto requestCopy = Aws::MakeShared<DuplexStreamRequest>("DuplexStream", request);
  requestCopy->SetStream(eventEncoderStream);
  request.SetStream(eventEncoderStream);

  auto asyncTask = smithy::client::CreateSmithyBidirectionalEventStreamTask<DuplexStreamOutcome>(
      this, requestCopy, handler, handlerContext, eventEncoderStream, endpointCallback, authCallback);
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
#endif
}
void RestJsonProtocolClient::DuplexStreamWithInitialMessagesAsync(
    Model::DuplexStreamWithInitialMessagesRequest& request, const DuplexStreamWithInitialMessagesStreamReadyHandler& streamReadyHandler,
    const DuplexStreamWithInitialMessagesResponseReceivedHandler& handler,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const {
  AWS_ASYNC_OPERATION_GUARD(DuplexStreamWithInitialMessages);
  if (!m_endpointProvider) {
    handler(this, request,
            DuplexStreamWithInitialMessagesOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
                RestJsonProtocolErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Endpoint provider is not initialized", false)),
            handlerContext);
    return;
  }
  if (!request.InitialRequestMemberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DuplexStreamWithInitialMessages", "Required field: InitialRequestMember, is not set");
    handler(this, request,
            DuplexStreamWithInitialMessagesOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
                RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InitialRequestMember]", false)),
            handlerContext);
    return;
  }
  auto endpointCallback = [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
    resolvedEndpoint.AddPathSegments("/DuplexStreamWithInitialMessages");
  };

#if AWS_SDK_USE_CRT_HTTP
  // Push-based WriteData path (CRT HTTP client only)
  auto writeDataStreamBuf = Aws::MakeShared<Aws::Utils::Stream::HttpWriteDataStreamBuf>(ALLOCATION_TAG, m_httpClient, 8 * 1024,
                                                                                        m_clientConfiguration.requestTimeoutMs);
  auto eventEncoderStream = Aws::MakeShared<Model::EventStream>(ALLOCATION_TAG, writeDataStreamBuf);
  request.SetStream(eventEncoderStream);

  auto requestCopy = Aws::MakeShared<DuplexStreamWithInitialMessagesRequest>(ALLOCATION_TAG, request);

  auto authCallback = [&](std::shared_ptr<smithy::client::AwsSmithyClientAsyncRequestContext> ctx) -> void {
    std::weak_ptr<smithy::client::AwsSmithyClientAsyncRequestContext> weakCtx = ctx;
    eventEncoderStream->SetSigningCallback([this, weakCtx](Aws::Utils::Event::Message& message, Aws::String& seed) -> bool {
      auto ctx = weakCtx.lock();
      if (!ctx) {
        return false;
      }
      auto outcome = SignEventMessage(message, seed, ctx);
      return outcome.IsSuccess();
    });
  };

  auto asyncTask = smithy::client::CreateSmithyBidirectionalWriteDataTask<DuplexStreamWithInitialMessagesOutcome>(
      this, requestCopy, handler, handlerContext, eventEncoderStream, writeDataStreamBuf, std::move(endpointCallback),
      std::move(authCallback));
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
#else
  // Pull-based path
  auto eventEncoderStream = Aws::MakeShared<Model::EventStream>(ALLOCATION_TAG);
  auto authCallback = [&](std::shared_ptr<smithy::client::AwsSmithyClientAsyncRequestContext> ctx) -> void {
    std::weak_ptr<smithy::client::AwsSmithyClientAsyncRequestContext> weakCtx = ctx;
    eventEncoderStream->SetSigningCallback([this, weakCtx](Aws::Utils::Event::Message& message, Aws::String& seed) -> bool {
      auto ctx = weakCtx.lock();
      if (!ctx) {
        return false;
      }
      auto outcome = SignEventMessage(message, seed, ctx);
      return outcome.IsSuccess();
    });
  };
  auto requestCopy = Aws::MakeShared<DuplexStreamWithInitialMessagesRequest>("DuplexStreamWithInitialMessages", request);
  requestCopy->SetStream(eventEncoderStream);
  request.SetStream(eventEncoderStream);

  auto asyncTask = smithy::client::CreateSmithyBidirectionalEventStreamTask<DuplexStreamWithInitialMessagesOutcome>(
      this, requestCopy, handler, handlerContext, eventEncoderStream, endpointCallback, authCallback);
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
#endif
}
EmptyInputAndEmptyOutputOutcome RestJsonProtocolClient::EmptyInputAndEmptyOutput(const EmptyInputAndEmptyOutputRequest& request) const {
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
EndpointOperationOutcome RestJsonProtocolClient::EndpointOperation(const EndpointOperationRequest& request) const {
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
EndpointWithHostLabelOperationOutcome RestJsonProtocolClient::EndpointWithHostLabelOperation(
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
FractionalSecondsOutcome RestJsonProtocolClient::FractionalSeconds(const FractionalSecondsRequest& request) const {
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
GreetingWithErrorsOutcome RestJsonProtocolClient::GreetingWithErrors(const GreetingWithErrorsRequest& request) const {
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
HostWithPathOperationOutcome RestJsonProtocolClient::HostWithPathOperation(const HostWithPathOperationRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HostWithPathOperation");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return HostWithPathOperationOutcome(std::move(result.GetError()));
  }
  return HostWithPathOperationOutcome(result.GetResultWithOwnership());
}
HttpChecksumRequiredOutcome RestJsonProtocolClient::HttpChecksumRequired(const HttpChecksumRequiredRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HttpChecksumRequired");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return HttpChecksumRequiredOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return HttpChecksumRequiredOutcome(
      BuildOperationResult<HttpChecksumRequiredResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
HttpEmptyPrefixHeadersOutcome RestJsonProtocolClient::HttpEmptyPrefixHeaders(const HttpEmptyPrefixHeadersRequest& request) const {
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
HttpEnumPayloadOutcome RestJsonProtocolClient::HttpEnumPayload(const HttpEnumPayloadRequest& request) const {
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
HttpPayloadTraitsOutcome RestJsonProtocolClient::HttpPayloadTraits(const HttpPayloadTraitsRequest& request) const {
  AWS_OPERATION_GUARD(HttpPayloadTraits);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpPayloadTraits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, HttpPayloadTraits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpPayloadTraits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpPayloadTraits",
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
HttpPayloadWithStructureOutcome RestJsonProtocolClient::HttpPayloadWithStructure(const HttpPayloadWithStructureRequest& request) const {
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
HttpPayloadWithUnionOutcome RestJsonProtocolClient::HttpPayloadWithUnion(const HttpPayloadWithUnionRequest& request) const {
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
HttpPrefixHeadersOutcome RestJsonProtocolClient::HttpPrefixHeaders(const HttpPrefixHeadersRequest& request) const {
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
HttpPrefixHeadersInResponseOutcome RestJsonProtocolClient::HttpPrefixHeadersInResponse(
    const HttpPrefixHeadersInResponseRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/HttpPrefixHeadersResponse");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return HttpPrefixHeadersInResponseOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return HttpPrefixHeadersInResponseOutcome(
      BuildOperationResult<HttpPrefixHeadersInResponseResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
HttpQueryParamsOnlyOperationOutcome RestJsonProtocolClient::HttpQueryParamsOnlyOperation(
    const HttpQueryParamsOnlyOperationRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/http-query-params-only");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return HttpQueryParamsOnlyOperationOutcome(std::move(result.GetError()));
  }
  return HttpQueryParamsOnlyOperationOutcome(result.GetResultWithOwnership());
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
HttpRequestWithRegexLiteralOutcome RestJsonProtocolClient::HttpRequestWithRegexLiteral(
    const HttpRequestWithRegexLiteralRequest& request) const {
  if (!request.StrHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HttpRequestWithRegexLiteral", "Required field: Str, is not set");
    return HttpRequestWithRegexLiteralOutcome(Aws::Client::AWSError<RestJsonProtocolErrors>(
        RestJsonProtocolErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Str]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/ReDosLiteral/");
        resolvedEndpoint.AddPathSegment(request.GetStr());
        resolvedEndpoint.AddPathSegments("/(a+)+");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return HttpRequestWithRegexLiteralOutcome(std::move(result.GetError()));
  }
  return HttpRequestWithRegexLiteralOutcome(result.GetResultWithOwnership());
}
HttpResponseCodeOutcome RestJsonProtocolClient::HttpResponseCode(const HttpResponseCodeRequest& request) const {
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
HttpStringPayloadOutcome RestJsonProtocolClient::HttpStringPayload(const HttpStringPayloadRequest& request) const {
  AWS_OPERATION_GUARD(HttpStringPayload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HttpStringPayload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, HttpStringPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HttpStringPayload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HttpStringPayload",
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
IgnoreQueryParamsInResponseOutcome RestJsonProtocolClient::IgnoreQueryParamsInResponse(
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
InputAndOutputWithHeadersOutcome RestJsonProtocolClient::InputAndOutputWithHeaders(const InputAndOutputWithHeadersRequest& request) const {
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
JsonBlobsOutcome RestJsonProtocolClient::JsonBlobs(const JsonBlobsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/JsonBlobs");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return JsonBlobsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return JsonBlobsOutcome(BuildOperationResult<JsonBlobsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
JsonEnumsOutcome RestJsonProtocolClient::JsonEnums(const JsonEnumsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/JsonEnums");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return JsonEnumsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return JsonEnumsOutcome(BuildOperationResult<JsonEnumsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
JsonIntEnumsOutcome RestJsonProtocolClient::JsonIntEnums(const JsonIntEnumsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/JsonIntEnums");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return JsonIntEnumsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return JsonIntEnumsOutcome(BuildOperationResult<JsonIntEnumsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
JsonListsOutcome RestJsonProtocolClient::JsonLists(const JsonListsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/JsonLists");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return JsonListsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return JsonListsOutcome(BuildOperationResult<JsonListsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
JsonMapsOutcome RestJsonProtocolClient::JsonMaps(const JsonMapsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/JsonMaps");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return JsonMapsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return JsonMapsOutcome(BuildOperationResult<JsonMapsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
JsonTimestampsOutcome RestJsonProtocolClient::JsonTimestamps(const JsonTimestampsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/JsonTimestamps");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return JsonTimestampsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return JsonTimestampsOutcome(
      BuildOperationResult<JsonTimestampsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
JsonUnionsOutcome RestJsonProtocolClient::JsonUnions(const JsonUnionsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/JsonUnions");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return JsonUnionsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return JsonUnionsOutcome(BuildOperationResult<JsonUnionsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
MediaTypeHeaderOutcome RestJsonProtocolClient::MediaTypeHeader(const MediaTypeHeaderRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/MediaTypeHeader");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return MediaTypeHeaderOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return MediaTypeHeaderOutcome(
      BuildOperationResult<MediaTypeHeaderResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
NoInputAndNoOutputOutcome RestJsonProtocolClient::NoInputAndNoOutput(const NoInputAndNoOutputRequest& request) const {
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
NoInputAndOutputOutcome RestJsonProtocolClient::NoInputAndOutput(const NoInputAndOutputRequest& request) const {
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
NullAndEmptyHeadersClientOutcome RestJsonProtocolClient::NullAndEmptyHeadersClient(const NullAndEmptyHeadersClientRequest& request) const {
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
NullAndEmptyHeadersServerOutcome RestJsonProtocolClient::NullAndEmptyHeadersServer(const NullAndEmptyHeadersServerRequest& request) const {
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
OmitsNullSerializesEmptyStringOutcome RestJsonProtocolClient::OmitsNullSerializesEmptyString(
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
OmitsSerializingEmptyListsOutcome RestJsonProtocolClient::OmitsSerializingEmptyLists(
    const OmitsSerializingEmptyListsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/OmitsSerializingEmptyLists");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return OmitsSerializingEmptyListsOutcome(std::move(result.GetError()));
  }
  return OmitsSerializingEmptyListsOutcome(result.GetResultWithOwnership());
}
OutputStreamOutcome RestJsonProtocolClient::OutputStream(OutputStreamRequest& request) const {
  AWS_OPERATION_GUARD(OutputStream);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, OutputStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, OutputStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, OutputStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".OutputStream",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<OutputStreamOutcome>(
      [&]() -> OutputStreamOutcome {
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("OutputStream", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        auto result = MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/OutputStream"); });
        return result.IsSuccess() ? OutputStreamOutcome(result.GetResultWithOwnership())
                                  : OutputStreamOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
OutputStreamWithInitialResponseOutcome RestJsonProtocolClient::OutputStreamWithInitialResponse(
    OutputStreamWithInitialResponseRequest& request) const {
  AWS_OPERATION_GUARD(OutputStreamWithInitialResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, OutputStreamWithInitialResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, OutputStreamWithInitialResponse, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, OutputStreamWithInitialResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".OutputStreamWithInitialResponse",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<OutputStreamWithInitialResponseOutcome>(
      [&]() -> OutputStreamWithInitialResponseOutcome {
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("OutputStreamWithInitialResponse", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/OutputStreamWithInitialResponse");
                                             });
        return result.IsSuccess() ? OutputStreamWithInitialResponseOutcome(result.GetResultWithOwnership())
                                  : OutputStreamWithInitialResponseOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
PostUnionWithJsonNameOutcome RestJsonProtocolClient::PostUnionWithJsonName(const PostUnionWithJsonNameRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/PostUnionWithJsonName");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return PostUnionWithJsonNameOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return PostUnionWithJsonNameOutcome(
      BuildOperationResult<PostUnionWithJsonNameResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
PutWithContentEncodingOutcome RestJsonProtocolClient::PutWithContentEncoding(const PutWithContentEncodingRequest& request) const {
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
QueryIdempotencyTokenAutoFillOutcome RestJsonProtocolClient::QueryIdempotencyTokenAutoFill(
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
QueryParamsAsStringListMapOutcome RestJsonProtocolClient::QueryParamsAsStringListMap(
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
QueryPrecedenceOutcome RestJsonProtocolClient::QueryPrecedence(const QueryPrecedenceRequest& request) const {
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
RecursiveShapesOutcome RestJsonProtocolClient::RecursiveShapes(const RecursiveShapesRequest& request) const {
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
ResponseCodeHttpFallbackOutcome RestJsonProtocolClient::ResponseCodeHttpFallback(const ResponseCodeHttpFallbackRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/responseCodeHttpFallback");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return ResponseCodeHttpFallbackOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return ResponseCodeHttpFallbackOutcome(
      BuildOperationResult<ResponseCodeHttpFallbackResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
ResponseCodeRequiredOutcome RestJsonProtocolClient::ResponseCodeRequired(const ResponseCodeRequiredRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/responseCodeRequired");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return ResponseCodeRequiredOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return ResponseCodeRequiredOutcome(
      BuildOperationResult<ResponseCodeRequiredResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
SimpleScalarPropertiesOutcome RestJsonProtocolClient::SimpleScalarProperties(const SimpleScalarPropertiesRequest& request) const {
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
SparseJsonListsOutcome RestJsonProtocolClient::SparseJsonLists(const SparseJsonListsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/SparseJsonLists");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  if (!result.IsSuccess()) {
    return SparseJsonListsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return SparseJsonListsOutcome(
      BuildOperationResult<SparseJsonListsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
SparseJsonMapsOutcome RestJsonProtocolClient::SparseJsonMaps(const SparseJsonMapsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/SparseJsonMaps");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return SparseJsonMapsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return SparseJsonMapsOutcome(
      BuildOperationResult<SparseJsonMapsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
TestBodyStructureOutcome RestJsonProtocolClient::TestBodyStructure(const TestBodyStructureRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/body");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return TestBodyStructureOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return TestBodyStructureOutcome(
      BuildOperationResult<TestBodyStructureResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
TestGetNoInputNoPayloadOutcome RestJsonProtocolClient::TestGetNoInputNoPayload(const TestGetNoInputNoPayloadRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/no_input_no_payload");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return TestGetNoInputNoPayloadOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return TestGetNoInputNoPayloadOutcome(
      BuildOperationResult<TestGetNoInputNoPayloadResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
TestGetNoPayloadOutcome RestJsonProtocolClient::TestGetNoPayload(const TestGetNoPayloadRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/no_payload");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  if (!result.IsSuccess()) {
    return TestGetNoPayloadOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return TestGetNoPayloadOutcome(
      BuildOperationResult<TestGetNoPayloadResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
TestPayloadBlobOutcome RestJsonProtocolClient::TestPayloadBlob(const TestPayloadBlobRequest& request) const {
  AWS_OPERATION_GUARD(TestPayloadBlob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestPayloadBlob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TestPayloadBlob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TestPayloadBlob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TestPayloadBlob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TestPayloadBlobOutcome>(
      [&]() -> TestPayloadBlobOutcome {
        auto result = MakeRequestWithUnparsedResponse(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/blob_payload"); });
        return result.IsSuccess() ? TestPayloadBlobOutcome(result.GetResultWithOwnership())
                                  : TestPayloadBlobOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
TestPayloadStructureOutcome RestJsonProtocolClient::TestPayloadStructure(const TestPayloadStructureRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/payload");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return TestPayloadStructureOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return TestPayloadStructureOutcome(
      BuildOperationResult<TestPayloadStructureResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
TestPostNoInputNoPayloadOutcome RestJsonProtocolClient::TestPostNoInputNoPayload(const TestPostNoInputNoPayloadRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/no_input_no_payload");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return TestPostNoInputNoPayloadOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return TestPostNoInputNoPayloadOutcome(
      BuildOperationResult<TestPostNoInputNoPayloadResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
TestPostNoPayloadOutcome RestJsonProtocolClient::TestPostNoPayload(const TestPostNoPayloadRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/no_payload");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return TestPostNoPayloadOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return TestPostNoPayloadOutcome(
      BuildOperationResult<TestPostNoPayloadResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
TimestampFormatHeadersOutcome RestJsonProtocolClient::TimestampFormatHeaders(const TimestampFormatHeadersRequest& request) const {
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
UnitInputAndOutputOutcome RestJsonProtocolClient::UnitInputAndOutput(const UnitInputAndOutputRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        // An HTTP-binding ClientProtocol places the path, labels and constant query from the request's URI pattern.
        if (GetClientProtocol() && !request.GetSchemaSerdeContext().uriPattern.empty()) {
          return;
        }
        resolvedEndpoint.AddPathSegments("/UnitInputAndOutput");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return UnitInputAndOutputOutcome(std::move(result.GetError()));
  }
  return UnitInputAndOutputOutcome(result.GetResultWithOwnership());
}
