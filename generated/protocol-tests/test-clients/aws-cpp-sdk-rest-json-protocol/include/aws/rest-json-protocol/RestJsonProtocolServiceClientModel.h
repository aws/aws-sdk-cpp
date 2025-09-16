/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocolEndpointProvider.h>
#include <aws/rest-json-protocol/RestJsonProtocolErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in RestJsonProtocolClient header */
#include <aws/core/NoResult.h>
#include <aws/rest-json-protocol/model/AllQueryStringTypesRequest.h>
#include <aws/rest-json-protocol/model/ConstantAndVariableQueryStringRequest.h>
#include <aws/rest-json-protocol/model/ContentTypeParametersRequest.h>
#include <aws/rest-json-protocol/model/ContentTypeParametersResult.h>
#include <aws/rest-json-protocol/model/DatetimeOffsetsRequest.h>
#include <aws/rest-json-protocol/model/DatetimeOffsetsResult.h>
#include <aws/rest-json-protocol/model/DocumentTypeAsMapValueRequest.h>
#include <aws/rest-json-protocol/model/DocumentTypeAsMapValueResult.h>
#include <aws/rest-json-protocol/model/DocumentTypeAsPayloadRequest.h>
#include <aws/rest-json-protocol/model/DocumentTypeAsPayloadResult.h>
#include <aws/rest-json-protocol/model/DocumentTypeRequest.h>
#include <aws/rest-json-protocol/model/DocumentTypeResult.h>
#include <aws/rest-json-protocol/model/EmptyInputAndEmptyOutputRequest.h>
#include <aws/rest-json-protocol/model/EmptyInputAndEmptyOutputResult.h>
#include <aws/rest-json-protocol/model/EndpointOperationRequest.h>
#include <aws/rest-json-protocol/model/FractionalSecondsRequest.h>
#include <aws/rest-json-protocol/model/FractionalSecondsResult.h>
#include <aws/rest-json-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/rest-json-protocol/model/GreetingWithErrorsResult.h>
#include <aws/rest-json-protocol/model/HostWithPathOperationRequest.h>
#include <aws/rest-json-protocol/model/HttpChecksumRequiredRequest.h>
#include <aws/rest-json-protocol/model/HttpChecksumRequiredResult.h>
#include <aws/rest-json-protocol/model/HttpEnumPayloadRequest.h>
#include <aws/rest-json-protocol/model/HttpEnumPayloadResult.h>
#include <aws/rest-json-protocol/model/HttpPayloadTraitsRequest.h>
#include <aws/rest-json-protocol/model/HttpPayloadTraitsResult.h>
#include <aws/rest-json-protocol/model/HttpPayloadWithStructureRequest.h>
#include <aws/rest-json-protocol/model/HttpPayloadWithStructureResult.h>
#include <aws/rest-json-protocol/model/HttpPayloadWithUnionRequest.h>
#include <aws/rest-json-protocol/model/HttpPayloadWithUnionResult.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersInResponseRequest.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersInResponseResult.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersRequest.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersResult.h>
#include <aws/rest-json-protocol/model/HttpResponseCodeRequest.h>
#include <aws/rest-json-protocol/model/HttpResponseCodeResult.h>
#include <aws/rest-json-protocol/model/HttpStringPayloadRequest.h>
#include <aws/rest-json-protocol/model/HttpStringPayloadResult.h>
#include <aws/rest-json-protocol/model/IgnoreQueryParamsInResponseRequest.h>
#include <aws/rest-json-protocol/model/IgnoreQueryParamsInResponseResult.h>
#include <aws/rest-json-protocol/model/InputAndOutputWithHeadersRequest.h>
#include <aws/rest-json-protocol/model/InputAndOutputWithHeadersResult.h>
#include <aws/rest-json-protocol/model/JsonBlobsRequest.h>
#include <aws/rest-json-protocol/model/JsonBlobsResult.h>
#include <aws/rest-json-protocol/model/JsonEnumsRequest.h>
#include <aws/rest-json-protocol/model/JsonEnumsResult.h>
#include <aws/rest-json-protocol/model/JsonIntEnumsRequest.h>
#include <aws/rest-json-protocol/model/JsonIntEnumsResult.h>
#include <aws/rest-json-protocol/model/JsonListsRequest.h>
#include <aws/rest-json-protocol/model/JsonListsResult.h>
#include <aws/rest-json-protocol/model/JsonMapsRequest.h>
#include <aws/rest-json-protocol/model/JsonMapsResult.h>
#include <aws/rest-json-protocol/model/JsonTimestampsRequest.h>
#include <aws/rest-json-protocol/model/JsonTimestampsResult.h>
#include <aws/rest-json-protocol/model/JsonUnionsRequest.h>
#include <aws/rest-json-protocol/model/JsonUnionsResult.h>
#include <aws/rest-json-protocol/model/MediaTypeHeaderRequest.h>
#include <aws/rest-json-protocol/model/MediaTypeHeaderResult.h>
#include <aws/rest-json-protocol/model/NoInputAndNoOutputRequest.h>
#include <aws/rest-json-protocol/model/NoInputAndOutputRequest.h>
#include <aws/rest-json-protocol/model/NoInputAndOutputResult.h>
#include <aws/rest-json-protocol/model/NullAndEmptyHeadersClientRequest.h>
#include <aws/rest-json-protocol/model/NullAndEmptyHeadersClientResult.h>
#include <aws/rest-json-protocol/model/NullAndEmptyHeadersServerRequest.h>
#include <aws/rest-json-protocol/model/NullAndEmptyHeadersServerResult.h>
#include <aws/rest-json-protocol/model/OmitsNullSerializesEmptyStringRequest.h>
#include <aws/rest-json-protocol/model/OmitsSerializingEmptyListsRequest.h>
#include <aws/rest-json-protocol/model/PostUnionWithJsonNameRequest.h>
#include <aws/rest-json-protocol/model/PostUnionWithJsonNameResult.h>
#include <aws/rest-json-protocol/model/PutWithContentEncodingRequest.h>
#include <aws/rest-json-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>
#include <aws/rest-json-protocol/model/QueryParamsAsStringListMapRequest.h>
#include <aws/rest-json-protocol/model/QueryPrecedenceRequest.h>
#include <aws/rest-json-protocol/model/RecursiveShapesRequest.h>
#include <aws/rest-json-protocol/model/RecursiveShapesResult.h>
#include <aws/rest-json-protocol/model/ResponseCodeHttpFallbackRequest.h>
#include <aws/rest-json-protocol/model/ResponseCodeHttpFallbackResult.h>
#include <aws/rest-json-protocol/model/ResponseCodeRequiredRequest.h>
#include <aws/rest-json-protocol/model/ResponseCodeRequiredResult.h>
#include <aws/rest-json-protocol/model/SimpleScalarPropertiesRequest.h>
#include <aws/rest-json-protocol/model/SimpleScalarPropertiesResult.h>
#include <aws/rest-json-protocol/model/TestBodyStructureRequest.h>
#include <aws/rest-json-protocol/model/TestBodyStructureResult.h>
#include <aws/rest-json-protocol/model/TestGetNoInputNoPayloadRequest.h>
#include <aws/rest-json-protocol/model/TestGetNoInputNoPayloadResult.h>
#include <aws/rest-json-protocol/model/TestGetNoPayloadRequest.h>
#include <aws/rest-json-protocol/model/TestGetNoPayloadResult.h>
#include <aws/rest-json-protocol/model/TestPayloadBlobRequest.h>
#include <aws/rest-json-protocol/model/TestPayloadBlobResult.h>
#include <aws/rest-json-protocol/model/TestPayloadStructureRequest.h>
#include <aws/rest-json-protocol/model/TestPayloadStructureResult.h>
#include <aws/rest-json-protocol/model/TestPostNoInputNoPayloadRequest.h>
#include <aws/rest-json-protocol/model/TestPostNoInputNoPayloadResult.h>
#include <aws/rest-json-protocol/model/TestPostNoPayloadRequest.h>
#include <aws/rest-json-protocol/model/TestPostNoPayloadResult.h>
#include <aws/rest-json-protocol/model/TimestampFormatHeadersRequest.h>
#include <aws/rest-json-protocol/model/TimestampFormatHeadersResult.h>
#include <aws/rest-json-protocol/model/UnitInputAndOutputRequest.h>
/* End of service model headers required in RestJsonProtocolClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace RestJsonProtocol {
using RestJsonProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using RestJsonProtocolEndpointProviderBase = Aws::RestJsonProtocol::Endpoint::RestJsonProtocolEndpointProviderBase;
using RestJsonProtocolEndpointProvider = Aws::RestJsonProtocol::Endpoint::RestJsonProtocolEndpointProvider;

namespace Model {
/* Service model forward declarations required in RestJsonProtocolClient header */
class AllQueryStringTypesRequest;
class ConstantAndVariableQueryStringRequest;
class ConstantQueryStringRequest;
class ContentTypeParametersRequest;
class DatetimeOffsetsRequest;
class DocumentTypeRequest;
class DocumentTypeAsMapValueRequest;
class DocumentTypeAsPayloadRequest;
class EmptyInputAndEmptyOutputRequest;
class EndpointOperationRequest;
class EndpointWithHostLabelOperationRequest;
class FractionalSecondsRequest;
class GreetingWithErrorsRequest;
class HostWithPathOperationRequest;
class HttpChecksumRequiredRequest;
class HttpEnumPayloadRequest;
class HttpPayloadTraitsRequest;
class HttpPayloadWithStructureRequest;
class HttpPayloadWithUnionRequest;
class HttpPrefixHeadersRequest;
class HttpPrefixHeadersInResponseRequest;
class HttpRequestWithFloatLabelsRequest;
class HttpRequestWithGreedyLabelInPathRequest;
class HttpRequestWithLabelsRequest;
class HttpRequestWithLabelsAndTimestampFormatRequest;
class HttpRequestWithRegexLiteralRequest;
class HttpResponseCodeRequest;
class HttpStringPayloadRequest;
class IgnoreQueryParamsInResponseRequest;
class InputAndOutputWithHeadersRequest;
class JsonBlobsRequest;
class JsonEnumsRequest;
class JsonIntEnumsRequest;
class JsonListsRequest;
class JsonMapsRequest;
class JsonTimestampsRequest;
class JsonUnionsRequest;
class MediaTypeHeaderRequest;
class NoInputAndNoOutputRequest;
class NoInputAndOutputRequest;
class NullAndEmptyHeadersClientRequest;
class NullAndEmptyHeadersServerRequest;
class OmitsNullSerializesEmptyStringRequest;
class OmitsSerializingEmptyListsRequest;
class PostUnionWithJsonNameRequest;
class PutWithContentEncodingRequest;
class QueryIdempotencyTokenAutoFillRequest;
class QueryParamsAsStringListMapRequest;
class QueryPrecedenceRequest;
class RecursiveShapesRequest;
class ResponseCodeHttpFallbackRequest;
class ResponseCodeRequiredRequest;
class SimpleScalarPropertiesRequest;
class TestBodyStructureRequest;
class TestGetNoInputNoPayloadRequest;
class TestGetNoPayloadRequest;
class TestPayloadBlobRequest;
class TestPayloadStructureRequest;
class TestPostNoInputNoPayloadRequest;
class TestPostNoPayloadRequest;
class TimestampFormatHeadersRequest;
class UnitInputAndOutputRequest;
/* End of service model forward declarations required in RestJsonProtocolClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> AllQueryStringTypesOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> ConstantAndVariableQueryStringOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> ConstantQueryStringOutcome;
typedef Aws::Utils::Outcome<ContentTypeParametersResult, RestJsonProtocolError> ContentTypeParametersOutcome;
typedef Aws::Utils::Outcome<DatetimeOffsetsResult, RestJsonProtocolError> DatetimeOffsetsOutcome;
typedef Aws::Utils::Outcome<DocumentTypeResult, RestJsonProtocolError> DocumentTypeOutcome;
typedef Aws::Utils::Outcome<DocumentTypeAsMapValueResult, RestJsonProtocolError> DocumentTypeAsMapValueOutcome;
typedef Aws::Utils::Outcome<DocumentTypeAsPayloadResult, RestJsonProtocolError> DocumentTypeAsPayloadOutcome;
typedef Aws::Utils::Outcome<EmptyInputAndEmptyOutputResult, RestJsonProtocolError> EmptyInputAndEmptyOutputOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> EndpointOperationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> EndpointWithHostLabelOperationOutcome;
typedef Aws::Utils::Outcome<FractionalSecondsResult, RestJsonProtocolError> FractionalSecondsOutcome;
typedef Aws::Utils::Outcome<GreetingWithErrorsResult, RestJsonProtocolError> GreetingWithErrorsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> HostWithPathOperationOutcome;
typedef Aws::Utils::Outcome<HttpChecksumRequiredResult, RestJsonProtocolError> HttpChecksumRequiredOutcome;
typedef Aws::Utils::Outcome<HttpEnumPayloadResult, RestJsonProtocolError> HttpEnumPayloadOutcome;
typedef Aws::Utils::Outcome<HttpPayloadTraitsResult, RestJsonProtocolError> HttpPayloadTraitsOutcome;
typedef Aws::Utils::Outcome<HttpPayloadWithStructureResult, RestJsonProtocolError> HttpPayloadWithStructureOutcome;
typedef Aws::Utils::Outcome<HttpPayloadWithUnionResult, RestJsonProtocolError> HttpPayloadWithUnionOutcome;
typedef Aws::Utils::Outcome<HttpPrefixHeadersResult, RestJsonProtocolError> HttpPrefixHeadersOutcome;
typedef Aws::Utils::Outcome<HttpPrefixHeadersInResponseResult, RestJsonProtocolError> HttpPrefixHeadersInResponseOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> HttpRequestWithFloatLabelsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> HttpRequestWithGreedyLabelInPathOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> HttpRequestWithLabelsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> HttpRequestWithLabelsAndTimestampFormatOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> HttpRequestWithRegexLiteralOutcome;
typedef Aws::Utils::Outcome<HttpResponseCodeResult, RestJsonProtocolError> HttpResponseCodeOutcome;
typedef Aws::Utils::Outcome<HttpStringPayloadResult, RestJsonProtocolError> HttpStringPayloadOutcome;
typedef Aws::Utils::Outcome<IgnoreQueryParamsInResponseResult, RestJsonProtocolError> IgnoreQueryParamsInResponseOutcome;
typedef Aws::Utils::Outcome<InputAndOutputWithHeadersResult, RestJsonProtocolError> InputAndOutputWithHeadersOutcome;
typedef Aws::Utils::Outcome<JsonBlobsResult, RestJsonProtocolError> JsonBlobsOutcome;
typedef Aws::Utils::Outcome<JsonEnumsResult, RestJsonProtocolError> JsonEnumsOutcome;
typedef Aws::Utils::Outcome<JsonIntEnumsResult, RestJsonProtocolError> JsonIntEnumsOutcome;
typedef Aws::Utils::Outcome<JsonListsResult, RestJsonProtocolError> JsonListsOutcome;
typedef Aws::Utils::Outcome<JsonMapsResult, RestJsonProtocolError> JsonMapsOutcome;
typedef Aws::Utils::Outcome<JsonTimestampsResult, RestJsonProtocolError> JsonTimestampsOutcome;
typedef Aws::Utils::Outcome<JsonUnionsResult, RestJsonProtocolError> JsonUnionsOutcome;
typedef Aws::Utils::Outcome<MediaTypeHeaderResult, RestJsonProtocolError> MediaTypeHeaderOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> NoInputAndNoOutputOutcome;
typedef Aws::Utils::Outcome<NoInputAndOutputResult, RestJsonProtocolError> NoInputAndOutputOutcome;
typedef Aws::Utils::Outcome<NullAndEmptyHeadersClientResult, RestJsonProtocolError> NullAndEmptyHeadersClientOutcome;
typedef Aws::Utils::Outcome<NullAndEmptyHeadersServerResult, RestJsonProtocolError> NullAndEmptyHeadersServerOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> OmitsNullSerializesEmptyStringOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> OmitsSerializingEmptyListsOutcome;
typedef Aws::Utils::Outcome<PostUnionWithJsonNameResult, RestJsonProtocolError> PostUnionWithJsonNameOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> PutWithContentEncodingOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> QueryIdempotencyTokenAutoFillOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> QueryParamsAsStringListMapOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> QueryPrecedenceOutcome;
typedef Aws::Utils::Outcome<RecursiveShapesResult, RestJsonProtocolError> RecursiveShapesOutcome;
typedef Aws::Utils::Outcome<ResponseCodeHttpFallbackResult, RestJsonProtocolError> ResponseCodeHttpFallbackOutcome;
typedef Aws::Utils::Outcome<ResponseCodeRequiredResult, RestJsonProtocolError> ResponseCodeRequiredOutcome;
typedef Aws::Utils::Outcome<SimpleScalarPropertiesResult, RestJsonProtocolError> SimpleScalarPropertiesOutcome;
typedef Aws::Utils::Outcome<TestBodyStructureResult, RestJsonProtocolError> TestBodyStructureOutcome;
typedef Aws::Utils::Outcome<TestGetNoInputNoPayloadResult, RestJsonProtocolError> TestGetNoInputNoPayloadOutcome;
typedef Aws::Utils::Outcome<TestGetNoPayloadResult, RestJsonProtocolError> TestGetNoPayloadOutcome;
typedef Aws::Utils::Outcome<TestPayloadBlobResult, RestJsonProtocolError> TestPayloadBlobOutcome;
typedef Aws::Utils::Outcome<TestPayloadStructureResult, RestJsonProtocolError> TestPayloadStructureOutcome;
typedef Aws::Utils::Outcome<TestPostNoInputNoPayloadResult, RestJsonProtocolError> TestPostNoInputNoPayloadOutcome;
typedef Aws::Utils::Outcome<TestPostNoPayloadResult, RestJsonProtocolError> TestPostNoPayloadOutcome;
typedef Aws::Utils::Outcome<TimestampFormatHeadersResult, RestJsonProtocolError> TimestampFormatHeadersOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestJsonProtocolError> UnitInputAndOutputOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AllQueryStringTypesOutcome> AllQueryStringTypesOutcomeCallable;
typedef std::future<ConstantAndVariableQueryStringOutcome> ConstantAndVariableQueryStringOutcomeCallable;
typedef std::future<ConstantQueryStringOutcome> ConstantQueryStringOutcomeCallable;
typedef std::future<ContentTypeParametersOutcome> ContentTypeParametersOutcomeCallable;
typedef std::future<DatetimeOffsetsOutcome> DatetimeOffsetsOutcomeCallable;
typedef std::future<DocumentTypeOutcome> DocumentTypeOutcomeCallable;
typedef std::future<DocumentTypeAsMapValueOutcome> DocumentTypeAsMapValueOutcomeCallable;
typedef std::future<DocumentTypeAsPayloadOutcome> DocumentTypeAsPayloadOutcomeCallable;
typedef std::future<EmptyInputAndEmptyOutputOutcome> EmptyInputAndEmptyOutputOutcomeCallable;
typedef std::future<EndpointOperationOutcome> EndpointOperationOutcomeCallable;
typedef std::future<EndpointWithHostLabelOperationOutcome> EndpointWithHostLabelOperationOutcomeCallable;
typedef std::future<FractionalSecondsOutcome> FractionalSecondsOutcomeCallable;
typedef std::future<GreetingWithErrorsOutcome> GreetingWithErrorsOutcomeCallable;
typedef std::future<HostWithPathOperationOutcome> HostWithPathOperationOutcomeCallable;
typedef std::future<HttpChecksumRequiredOutcome> HttpChecksumRequiredOutcomeCallable;
typedef std::future<HttpEnumPayloadOutcome> HttpEnumPayloadOutcomeCallable;
typedef std::future<HttpPayloadTraitsOutcome> HttpPayloadTraitsOutcomeCallable;
typedef std::future<HttpPayloadWithStructureOutcome> HttpPayloadWithStructureOutcomeCallable;
typedef std::future<HttpPayloadWithUnionOutcome> HttpPayloadWithUnionOutcomeCallable;
typedef std::future<HttpPrefixHeadersOutcome> HttpPrefixHeadersOutcomeCallable;
typedef std::future<HttpPrefixHeadersInResponseOutcome> HttpPrefixHeadersInResponseOutcomeCallable;
typedef std::future<HttpRequestWithFloatLabelsOutcome> HttpRequestWithFloatLabelsOutcomeCallable;
typedef std::future<HttpRequestWithGreedyLabelInPathOutcome> HttpRequestWithGreedyLabelInPathOutcomeCallable;
typedef std::future<HttpRequestWithLabelsOutcome> HttpRequestWithLabelsOutcomeCallable;
typedef std::future<HttpRequestWithLabelsAndTimestampFormatOutcome> HttpRequestWithLabelsAndTimestampFormatOutcomeCallable;
typedef std::future<HttpRequestWithRegexLiteralOutcome> HttpRequestWithRegexLiteralOutcomeCallable;
typedef std::future<HttpResponseCodeOutcome> HttpResponseCodeOutcomeCallable;
typedef std::future<HttpStringPayloadOutcome> HttpStringPayloadOutcomeCallable;
typedef std::future<IgnoreQueryParamsInResponseOutcome> IgnoreQueryParamsInResponseOutcomeCallable;
typedef std::future<InputAndOutputWithHeadersOutcome> InputAndOutputWithHeadersOutcomeCallable;
typedef std::future<JsonBlobsOutcome> JsonBlobsOutcomeCallable;
typedef std::future<JsonEnumsOutcome> JsonEnumsOutcomeCallable;
typedef std::future<JsonIntEnumsOutcome> JsonIntEnumsOutcomeCallable;
typedef std::future<JsonListsOutcome> JsonListsOutcomeCallable;
typedef std::future<JsonMapsOutcome> JsonMapsOutcomeCallable;
typedef std::future<JsonTimestampsOutcome> JsonTimestampsOutcomeCallable;
typedef std::future<JsonUnionsOutcome> JsonUnionsOutcomeCallable;
typedef std::future<MediaTypeHeaderOutcome> MediaTypeHeaderOutcomeCallable;
typedef std::future<NoInputAndNoOutputOutcome> NoInputAndNoOutputOutcomeCallable;
typedef std::future<NoInputAndOutputOutcome> NoInputAndOutputOutcomeCallable;
typedef std::future<NullAndEmptyHeadersClientOutcome> NullAndEmptyHeadersClientOutcomeCallable;
typedef std::future<NullAndEmptyHeadersServerOutcome> NullAndEmptyHeadersServerOutcomeCallable;
typedef std::future<OmitsNullSerializesEmptyStringOutcome> OmitsNullSerializesEmptyStringOutcomeCallable;
typedef std::future<OmitsSerializingEmptyListsOutcome> OmitsSerializingEmptyListsOutcomeCallable;
typedef std::future<PostUnionWithJsonNameOutcome> PostUnionWithJsonNameOutcomeCallable;
typedef std::future<PutWithContentEncodingOutcome> PutWithContentEncodingOutcomeCallable;
typedef std::future<QueryIdempotencyTokenAutoFillOutcome> QueryIdempotencyTokenAutoFillOutcomeCallable;
typedef std::future<QueryParamsAsStringListMapOutcome> QueryParamsAsStringListMapOutcomeCallable;
typedef std::future<QueryPrecedenceOutcome> QueryPrecedenceOutcomeCallable;
typedef std::future<RecursiveShapesOutcome> RecursiveShapesOutcomeCallable;
typedef std::future<ResponseCodeHttpFallbackOutcome> ResponseCodeHttpFallbackOutcomeCallable;
typedef std::future<ResponseCodeRequiredOutcome> ResponseCodeRequiredOutcomeCallable;
typedef std::future<SimpleScalarPropertiesOutcome> SimpleScalarPropertiesOutcomeCallable;
typedef std::future<TestBodyStructureOutcome> TestBodyStructureOutcomeCallable;
typedef std::future<TestGetNoInputNoPayloadOutcome> TestGetNoInputNoPayloadOutcomeCallable;
typedef std::future<TestGetNoPayloadOutcome> TestGetNoPayloadOutcomeCallable;
typedef std::future<TestPayloadBlobOutcome> TestPayloadBlobOutcomeCallable;
typedef std::future<TestPayloadStructureOutcome> TestPayloadStructureOutcomeCallable;
typedef std::future<TestPostNoInputNoPayloadOutcome> TestPostNoInputNoPayloadOutcomeCallable;
typedef std::future<TestPostNoPayloadOutcome> TestPostNoPayloadOutcomeCallable;
typedef std::future<TimestampFormatHeadersOutcome> TimestampFormatHeadersOutcomeCallable;
typedef std::future<UnitInputAndOutputOutcome> UnitInputAndOutputOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class RestJsonProtocolClient;

/* Service model async handlers definitions */
typedef std::function<void(const RestJsonProtocolClient*, const Model::AllQueryStringTypesRequest&,
                           const Model::AllQueryStringTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AllQueryStringTypesResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::ConstantAndVariableQueryStringRequest&,
                           const Model::ConstantAndVariableQueryStringOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ConstantAndVariableQueryStringResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::ConstantQueryStringRequest&,
                           const Model::ConstantQueryStringOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ConstantQueryStringResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::ContentTypeParametersRequest&,
                           const Model::ContentTypeParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ContentTypeParametersResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::DatetimeOffsetsRequest&, const Model::DatetimeOffsetsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DatetimeOffsetsResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::DocumentTypeRequest&, const Model::DocumentTypeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DocumentTypeResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::DocumentTypeAsMapValueRequest&,
                           const Model::DocumentTypeAsMapValueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DocumentTypeAsMapValueResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::DocumentTypeAsPayloadRequest&,
                           const Model::DocumentTypeAsPayloadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DocumentTypeAsPayloadResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::EmptyInputAndEmptyOutputRequest&,
                           const Model::EmptyInputAndEmptyOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EmptyInputAndEmptyOutputResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::EndpointOperationRequest&, const Model::EndpointOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EndpointOperationResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::EndpointWithHostLabelOperationRequest&,
                           const Model::EndpointWithHostLabelOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EndpointWithHostLabelOperationResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::FractionalSecondsRequest&, const Model::FractionalSecondsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    FractionalSecondsResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::GreetingWithErrorsRequest&, const Model::GreetingWithErrorsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GreetingWithErrorsResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HostWithPathOperationRequest&,
                           const Model::HostWithPathOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HostWithPathOperationResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HttpChecksumRequiredRequest&,
                           const Model::HttpChecksumRequiredOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpChecksumRequiredResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HttpEnumPayloadRequest&, const Model::HttpEnumPayloadOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpEnumPayloadResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HttpPayloadTraitsRequest&, Model::HttpPayloadTraitsOutcome,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpPayloadTraitsResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HttpPayloadWithStructureRequest&,
                           const Model::HttpPayloadWithStructureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpPayloadWithStructureResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HttpPayloadWithUnionRequest&,
                           const Model::HttpPayloadWithUnionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpPayloadWithUnionResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HttpPrefixHeadersRequest&, const Model::HttpPrefixHeadersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpPrefixHeadersResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HttpPrefixHeadersInResponseRequest&,
                           const Model::HttpPrefixHeadersInResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpPrefixHeadersInResponseResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HttpRequestWithFloatLabelsRequest&,
                           const Model::HttpRequestWithFloatLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpRequestWithFloatLabelsResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HttpRequestWithGreedyLabelInPathRequest&,
                           const Model::HttpRequestWithGreedyLabelInPathOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpRequestWithGreedyLabelInPathResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HttpRequestWithLabelsRequest&,
                           const Model::HttpRequestWithLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpRequestWithLabelsResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HttpRequestWithLabelsAndTimestampFormatRequest&,
                           const Model::HttpRequestWithLabelsAndTimestampFormatOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpRequestWithLabelsAndTimestampFormatResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HttpRequestWithRegexLiteralRequest&,
                           const Model::HttpRequestWithRegexLiteralOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpRequestWithRegexLiteralResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HttpResponseCodeRequest&, const Model::HttpResponseCodeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpResponseCodeResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::HttpStringPayloadRequest&, Model::HttpStringPayloadOutcome,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpStringPayloadResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::IgnoreQueryParamsInResponseRequest&,
                           const Model::IgnoreQueryParamsInResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    IgnoreQueryParamsInResponseResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::InputAndOutputWithHeadersRequest&,
                           const Model::InputAndOutputWithHeadersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InputAndOutputWithHeadersResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::JsonBlobsRequest&, const Model::JsonBlobsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    JsonBlobsResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::JsonEnumsRequest&, const Model::JsonEnumsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    JsonEnumsResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::JsonIntEnumsRequest&, const Model::JsonIntEnumsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    JsonIntEnumsResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::JsonListsRequest&, const Model::JsonListsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    JsonListsResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::JsonMapsRequest&, const Model::JsonMapsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    JsonMapsResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::JsonTimestampsRequest&, const Model::JsonTimestampsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    JsonTimestampsResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::JsonUnionsRequest&, const Model::JsonUnionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    JsonUnionsResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::MediaTypeHeaderRequest&, const Model::MediaTypeHeaderOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    MediaTypeHeaderResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::NoInputAndNoOutputRequest&, const Model::NoInputAndNoOutputOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NoInputAndNoOutputResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::NoInputAndOutputRequest&, const Model::NoInputAndOutputOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NoInputAndOutputResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::NullAndEmptyHeadersClientRequest&,
                           const Model::NullAndEmptyHeadersClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NullAndEmptyHeadersClientResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::NullAndEmptyHeadersServerRequest&,
                           const Model::NullAndEmptyHeadersServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NullAndEmptyHeadersServerResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::OmitsNullSerializesEmptyStringRequest&,
                           const Model::OmitsNullSerializesEmptyStringOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    OmitsNullSerializesEmptyStringResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::OmitsSerializingEmptyListsRequest&,
                           const Model::OmitsSerializingEmptyListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    OmitsSerializingEmptyListsResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::PostUnionWithJsonNameRequest&,
                           const Model::PostUnionWithJsonNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PostUnionWithJsonNameResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::PutWithContentEncodingRequest&,
                           const Model::PutWithContentEncodingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutWithContentEncodingResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::QueryIdempotencyTokenAutoFillRequest&,
                           const Model::QueryIdempotencyTokenAutoFillOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryIdempotencyTokenAutoFillResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::QueryParamsAsStringListMapRequest&,
                           const Model::QueryParamsAsStringListMapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryParamsAsStringListMapResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::QueryPrecedenceRequest&, const Model::QueryPrecedenceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryPrecedenceResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::RecursiveShapesRequest&, const Model::RecursiveShapesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RecursiveShapesResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::ResponseCodeHttpFallbackRequest&,
                           const Model::ResponseCodeHttpFallbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ResponseCodeHttpFallbackResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::ResponseCodeRequiredRequest&,
                           const Model::ResponseCodeRequiredOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ResponseCodeRequiredResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::SimpleScalarPropertiesRequest&,
                           const Model::SimpleScalarPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SimpleScalarPropertiesResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::TestBodyStructureRequest&, const Model::TestBodyStructureOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TestBodyStructureResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::TestGetNoInputNoPayloadRequest&,
                           const Model::TestGetNoInputNoPayloadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TestGetNoInputNoPayloadResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::TestGetNoPayloadRequest&, const Model::TestGetNoPayloadOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TestGetNoPayloadResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::TestPayloadBlobRequest&, Model::TestPayloadBlobOutcome,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TestPayloadBlobResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::TestPayloadStructureRequest&,
                           const Model::TestPayloadStructureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TestPayloadStructureResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::TestPostNoInputNoPayloadRequest&,
                           const Model::TestPostNoInputNoPayloadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TestPostNoInputNoPayloadResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::TestPostNoPayloadRequest&, const Model::TestPostNoPayloadOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TestPostNoPayloadResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::TimestampFormatHeadersRequest&,
                           const Model::TimestampFormatHeadersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TimestampFormatHeadersResponseReceivedHandler;
typedef std::function<void(const RestJsonProtocolClient*, const Model::UnitInputAndOutputRequest&, const Model::UnitInputAndOutputOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UnitInputAndOutputResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace RestJsonProtocol
}  // namespace Aws
