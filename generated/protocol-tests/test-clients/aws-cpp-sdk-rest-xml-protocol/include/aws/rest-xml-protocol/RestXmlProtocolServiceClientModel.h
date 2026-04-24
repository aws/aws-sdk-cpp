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
#include <aws/rest-xml-protocol/RestXmlProtocolEndpointProvider.h>
#include <aws/rest-xml-protocol/RestXmlProtocolErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in RestXmlProtocolClient header */
#include <aws/core/NoResult.h>
#include <aws/rest-xml-protocol/model/AllQueryStringTypesRequest.h>
#include <aws/rest-xml-protocol/model/BodyWithXmlNameRequest.h>
#include <aws/rest-xml-protocol/model/BodyWithXmlNameResult.h>
#include <aws/rest-xml-protocol/model/ConstantAndVariableQueryStringRequest.h>
#include <aws/rest-xml-protocol/model/ContentTypeParametersRequest.h>
#include <aws/rest-xml-protocol/model/ContentTypeParametersResult.h>
#include <aws/rest-xml-protocol/model/DatetimeOffsetsRequest.h>
#include <aws/rest-xml-protocol/model/DatetimeOffsetsResult.h>
#include <aws/rest-xml-protocol/model/EmptyInputAndEmptyOutputRequest.h>
#include <aws/rest-xml-protocol/model/EmptyInputAndEmptyOutputResult.h>
#include <aws/rest-xml-protocol/model/EndpointOperationRequest.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapRequest.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapResult.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapWithXmlNameRequest.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapWithXmlNameResult.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapWithXmlNamespaceRequest.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapWithXmlNamespaceResult.h>
#include <aws/rest-xml-protocol/model/FractionalSecondsRequest.h>
#include <aws/rest-xml-protocol/model/FractionalSecondsResult.h>
#include <aws/rest-xml-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/rest-xml-protocol/model/GreetingWithErrorsResult.h>
#include <aws/rest-xml-protocol/model/HttpEnumPayloadRequest.h>
#include <aws/rest-xml-protocol/model/HttpEnumPayloadResult.h>
#include <aws/rest-xml-protocol/model/HttpPayloadTraitsRequest.h>
#include <aws/rest-xml-protocol/model/HttpPayloadTraitsResult.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithMemberXmlNameRequest.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithMemberXmlNameResult.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithStructureRequest.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithStructureResult.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithUnionRequest.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithUnionResult.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNameRequest.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNameResult.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNamespaceAndPrefixRequest.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNamespaceAndPrefixResult.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNamespaceRequest.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNamespaceResult.h>
#include <aws/rest-xml-protocol/model/HttpPrefixHeadersRequest.h>
#include <aws/rest-xml-protocol/model/HttpPrefixHeadersResult.h>
#include <aws/rest-xml-protocol/model/HttpResponseCodeRequest.h>
#include <aws/rest-xml-protocol/model/HttpResponseCodeResult.h>
#include <aws/rest-xml-protocol/model/HttpStringPayloadRequest.h>
#include <aws/rest-xml-protocol/model/HttpStringPayloadResult.h>
#include <aws/rest-xml-protocol/model/IgnoreQueryParamsInResponseRequest.h>
#include <aws/rest-xml-protocol/model/IgnoreQueryParamsInResponseResult.h>
#include <aws/rest-xml-protocol/model/InputAndOutputWithHeadersRequest.h>
#include <aws/rest-xml-protocol/model/InputAndOutputWithHeadersResult.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapWithXmlNameRequest.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapWithXmlNameResult.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapsRequest.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapsResult.h>
#include <aws/rest-xml-protocol/model/NoInputAndNoOutputRequest.h>
#include <aws/rest-xml-protocol/model/NoInputAndOutputRequest.h>
#include <aws/rest-xml-protocol/model/NoInputAndOutputResult.h>
#include <aws/rest-xml-protocol/model/NullAndEmptyHeadersClientRequest.h>
#include <aws/rest-xml-protocol/model/NullAndEmptyHeadersClientResult.h>
#include <aws/rest-xml-protocol/model/NullAndEmptyHeadersServerRequest.h>
#include <aws/rest-xml-protocol/model/NullAndEmptyHeadersServerResult.h>
#include <aws/rest-xml-protocol/model/OmitsNullSerializesEmptyStringRequest.h>
#include <aws/rest-xml-protocol/model/PutWithContentEncodingRequest.h>
#include <aws/rest-xml-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>
#include <aws/rest-xml-protocol/model/QueryParamsAsStringListMapRequest.h>
#include <aws/rest-xml-protocol/model/QueryPrecedenceRequest.h>
#include <aws/rest-xml-protocol/model/RecursiveShapesRequest.h>
#include <aws/rest-xml-protocol/model/RecursiveShapesResult.h>
#include <aws/rest-xml-protocol/model/SimpleScalarPropertiesRequest.h>
#include <aws/rest-xml-protocol/model/SimpleScalarPropertiesResult.h>
#include <aws/rest-xml-protocol/model/TimestampFormatHeadersRequest.h>
#include <aws/rest-xml-protocol/model/TimestampFormatHeadersResult.h>
#include <aws/rest-xml-protocol/model/XmlAttributesOnPayloadRequest.h>
#include <aws/rest-xml-protocol/model/XmlAttributesOnPayloadResult.h>
#include <aws/rest-xml-protocol/model/XmlAttributesRequest.h>
#include <aws/rest-xml-protocol/model/XmlAttributesResult.h>
#include <aws/rest-xml-protocol/model/XmlBlobsRequest.h>
#include <aws/rest-xml-protocol/model/XmlBlobsResult.h>
#include <aws/rest-xml-protocol/model/XmlEmptyBlobsRequest.h>
#include <aws/rest-xml-protocol/model/XmlEmptyBlobsResult.h>
#include <aws/rest-xml-protocol/model/XmlEmptyListsRequest.h>
#include <aws/rest-xml-protocol/model/XmlEmptyListsResult.h>
#include <aws/rest-xml-protocol/model/XmlEmptyMapsRequest.h>
#include <aws/rest-xml-protocol/model/XmlEmptyMapsResult.h>
#include <aws/rest-xml-protocol/model/XmlEmptyStringsRequest.h>
#include <aws/rest-xml-protocol/model/XmlEmptyStringsResult.h>
#include <aws/rest-xml-protocol/model/XmlEnumsRequest.h>
#include <aws/rest-xml-protocol/model/XmlEnumsResult.h>
#include <aws/rest-xml-protocol/model/XmlIntEnumsRequest.h>
#include <aws/rest-xml-protocol/model/XmlIntEnumsResult.h>
#include <aws/rest-xml-protocol/model/XmlListsRequest.h>
#include <aws/rest-xml-protocol/model/XmlListsResult.h>
#include <aws/rest-xml-protocol/model/XmlMapWithXmlNamespaceRequest.h>
#include <aws/rest-xml-protocol/model/XmlMapWithXmlNamespaceResult.h>
#include <aws/rest-xml-protocol/model/XmlMapsRequest.h>
#include <aws/rest-xml-protocol/model/XmlMapsResult.h>
#include <aws/rest-xml-protocol/model/XmlMapsXmlNameRequest.h>
#include <aws/rest-xml-protocol/model/XmlMapsXmlNameResult.h>
#include <aws/rest-xml-protocol/model/XmlNamespacesRequest.h>
#include <aws/rest-xml-protocol/model/XmlNamespacesResult.h>
#include <aws/rest-xml-protocol/model/XmlTimestampsRequest.h>
#include <aws/rest-xml-protocol/model/XmlTimestampsResult.h>
#include <aws/rest-xml-protocol/model/XmlUnionsRequest.h>
#include <aws/rest-xml-protocol/model/XmlUnionsResult.h>
/* End of service model headers required in RestXmlProtocolClient header */

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

namespace RestXmlProtocol {
using RestXmlProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using RestXmlProtocolEndpointProviderBase = Aws::RestXmlProtocol::Endpoint::RestXmlProtocolEndpointProviderBase;
using RestXmlProtocolEndpointProvider = Aws::RestXmlProtocol::Endpoint::RestXmlProtocolEndpointProvider;

namespace Model {
/* Service model forward declarations required in RestXmlProtocolClient header */
class AllQueryStringTypesRequest;
class BodyWithXmlNameRequest;
class ConstantAndVariableQueryStringRequest;
class ConstantQueryStringRequest;
class ContentTypeParametersRequest;
class DatetimeOffsetsRequest;
class EmptyInputAndEmptyOutputRequest;
class EndpointOperationRequest;
class EndpointWithHostLabelHeaderOperationRequest;
class EndpointWithHostLabelOperationRequest;
class FlattenedXmlMapRequest;
class FlattenedXmlMapWithXmlNameRequest;
class FlattenedXmlMapWithXmlNamespaceRequest;
class FractionalSecondsRequest;
class GreetingWithErrorsRequest;
class HttpEnumPayloadRequest;
class HttpPayloadTraitsRequest;
class HttpPayloadWithMemberXmlNameRequest;
class HttpPayloadWithStructureRequest;
class HttpPayloadWithUnionRequest;
class HttpPayloadWithXmlNameRequest;
class HttpPayloadWithXmlNamespaceRequest;
class HttpPayloadWithXmlNamespaceAndPrefixRequest;
class HttpPrefixHeadersRequest;
class HttpRequestWithFloatLabelsRequest;
class HttpRequestWithGreedyLabelInPathRequest;
class HttpRequestWithLabelsRequest;
class HttpRequestWithLabelsAndTimestampFormatRequest;
class HttpResponseCodeRequest;
class HttpStringPayloadRequest;
class IgnoreQueryParamsInResponseRequest;
class InputAndOutputWithHeadersRequest;
class NestedXmlMapWithXmlNameRequest;
class NestedXmlMapsRequest;
class NoInputAndNoOutputRequest;
class NoInputAndOutputRequest;
class NullAndEmptyHeadersClientRequest;
class NullAndEmptyHeadersServerRequest;
class OmitsNullSerializesEmptyStringRequest;
class PutWithContentEncodingRequest;
class QueryIdempotencyTokenAutoFillRequest;
class QueryParamsAsStringListMapRequest;
class QueryPrecedenceRequest;
class RecursiveShapesRequest;
class SimpleScalarPropertiesRequest;
class TimestampFormatHeadersRequest;
class XmlAttributesRequest;
class XmlAttributesOnPayloadRequest;
class XmlBlobsRequest;
class XmlEmptyBlobsRequest;
class XmlEmptyListsRequest;
class XmlEmptyMapsRequest;
class XmlEmptyStringsRequest;
class XmlEnumsRequest;
class XmlIntEnumsRequest;
class XmlListsRequest;
class XmlMapWithXmlNamespaceRequest;
class XmlMapsRequest;
class XmlMapsXmlNameRequest;
class XmlNamespacesRequest;
class XmlTimestampsRequest;
class XmlUnionsRequest;
/* End of service model forward declarations required in RestXmlProtocolClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> AllQueryStringTypesOutcome;
typedef Aws::Utils::Outcome<BodyWithXmlNameResult, RestXmlProtocolError> BodyWithXmlNameOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> ConstantAndVariableQueryStringOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> ConstantQueryStringOutcome;
typedef Aws::Utils::Outcome<ContentTypeParametersResult, RestXmlProtocolError> ContentTypeParametersOutcome;
typedef Aws::Utils::Outcome<DatetimeOffsetsResult, RestXmlProtocolError> DatetimeOffsetsOutcome;
typedef Aws::Utils::Outcome<EmptyInputAndEmptyOutputResult, RestXmlProtocolError> EmptyInputAndEmptyOutputOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> EndpointOperationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> EndpointWithHostLabelHeaderOperationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> EndpointWithHostLabelOperationOutcome;
typedef Aws::Utils::Outcome<FlattenedXmlMapResult, RestXmlProtocolError> FlattenedXmlMapOutcome;
typedef Aws::Utils::Outcome<FlattenedXmlMapWithXmlNameResult, RestXmlProtocolError> FlattenedXmlMapWithXmlNameOutcome;
typedef Aws::Utils::Outcome<FlattenedXmlMapWithXmlNamespaceResult, RestXmlProtocolError> FlattenedXmlMapWithXmlNamespaceOutcome;
typedef Aws::Utils::Outcome<FractionalSecondsResult, RestXmlProtocolError> FractionalSecondsOutcome;
typedef Aws::Utils::Outcome<GreetingWithErrorsResult, RestXmlProtocolError> GreetingWithErrorsOutcome;
typedef Aws::Utils::Outcome<HttpEnumPayloadResult, RestXmlProtocolError> HttpEnumPayloadOutcome;
typedef Aws::Utils::Outcome<HttpPayloadTraitsResult, RestXmlProtocolError> HttpPayloadTraitsOutcome;
typedef Aws::Utils::Outcome<HttpPayloadWithMemberXmlNameResult, RestXmlProtocolError> HttpPayloadWithMemberXmlNameOutcome;
typedef Aws::Utils::Outcome<HttpPayloadWithStructureResult, RestXmlProtocolError> HttpPayloadWithStructureOutcome;
typedef Aws::Utils::Outcome<HttpPayloadWithUnionResult, RestXmlProtocolError> HttpPayloadWithUnionOutcome;
typedef Aws::Utils::Outcome<HttpPayloadWithXmlNameResult, RestXmlProtocolError> HttpPayloadWithXmlNameOutcome;
typedef Aws::Utils::Outcome<HttpPayloadWithXmlNamespaceResult, RestXmlProtocolError> HttpPayloadWithXmlNamespaceOutcome;
typedef Aws::Utils::Outcome<HttpPayloadWithXmlNamespaceAndPrefixResult, RestXmlProtocolError> HttpPayloadWithXmlNamespaceAndPrefixOutcome;
typedef Aws::Utils::Outcome<HttpPrefixHeadersResult, RestXmlProtocolError> HttpPrefixHeadersOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> HttpRequestWithFloatLabelsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> HttpRequestWithGreedyLabelInPathOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> HttpRequestWithLabelsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> HttpRequestWithLabelsAndTimestampFormatOutcome;
typedef Aws::Utils::Outcome<HttpResponseCodeResult, RestXmlProtocolError> HttpResponseCodeOutcome;
typedef Aws::Utils::Outcome<HttpStringPayloadResult, RestXmlProtocolError> HttpStringPayloadOutcome;
typedef Aws::Utils::Outcome<IgnoreQueryParamsInResponseResult, RestXmlProtocolError> IgnoreQueryParamsInResponseOutcome;
typedef Aws::Utils::Outcome<InputAndOutputWithHeadersResult, RestXmlProtocolError> InputAndOutputWithHeadersOutcome;
typedef Aws::Utils::Outcome<NestedXmlMapWithXmlNameResult, RestXmlProtocolError> NestedXmlMapWithXmlNameOutcome;
typedef Aws::Utils::Outcome<NestedXmlMapsResult, RestXmlProtocolError> NestedXmlMapsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> NoInputAndNoOutputOutcome;
typedef Aws::Utils::Outcome<NoInputAndOutputResult, RestXmlProtocolError> NoInputAndOutputOutcome;
typedef Aws::Utils::Outcome<NullAndEmptyHeadersClientResult, RestXmlProtocolError> NullAndEmptyHeadersClientOutcome;
typedef Aws::Utils::Outcome<NullAndEmptyHeadersServerResult, RestXmlProtocolError> NullAndEmptyHeadersServerOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> OmitsNullSerializesEmptyStringOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> PutWithContentEncodingOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> QueryIdempotencyTokenAutoFillOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> QueryParamsAsStringListMapOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RestXmlProtocolError> QueryPrecedenceOutcome;
typedef Aws::Utils::Outcome<RecursiveShapesResult, RestXmlProtocolError> RecursiveShapesOutcome;
typedef Aws::Utils::Outcome<SimpleScalarPropertiesResult, RestXmlProtocolError> SimpleScalarPropertiesOutcome;
typedef Aws::Utils::Outcome<TimestampFormatHeadersResult, RestXmlProtocolError> TimestampFormatHeadersOutcome;
typedef Aws::Utils::Outcome<XmlAttributesResult, RestXmlProtocolError> XmlAttributesOutcome;
typedef Aws::Utils::Outcome<XmlAttributesOnPayloadResult, RestXmlProtocolError> XmlAttributesOnPayloadOutcome;
typedef Aws::Utils::Outcome<XmlBlobsResult, RestXmlProtocolError> XmlBlobsOutcome;
typedef Aws::Utils::Outcome<XmlEmptyBlobsResult, RestXmlProtocolError> XmlEmptyBlobsOutcome;
typedef Aws::Utils::Outcome<XmlEmptyListsResult, RestXmlProtocolError> XmlEmptyListsOutcome;
typedef Aws::Utils::Outcome<XmlEmptyMapsResult, RestXmlProtocolError> XmlEmptyMapsOutcome;
typedef Aws::Utils::Outcome<XmlEmptyStringsResult, RestXmlProtocolError> XmlEmptyStringsOutcome;
typedef Aws::Utils::Outcome<XmlEnumsResult, RestXmlProtocolError> XmlEnumsOutcome;
typedef Aws::Utils::Outcome<XmlIntEnumsResult, RestXmlProtocolError> XmlIntEnumsOutcome;
typedef Aws::Utils::Outcome<XmlListsResult, RestXmlProtocolError> XmlListsOutcome;
typedef Aws::Utils::Outcome<XmlMapWithXmlNamespaceResult, RestXmlProtocolError> XmlMapWithXmlNamespaceOutcome;
typedef Aws::Utils::Outcome<XmlMapsResult, RestXmlProtocolError> XmlMapsOutcome;
typedef Aws::Utils::Outcome<XmlMapsXmlNameResult, RestXmlProtocolError> XmlMapsXmlNameOutcome;
typedef Aws::Utils::Outcome<XmlNamespacesResult, RestXmlProtocolError> XmlNamespacesOutcome;
typedef Aws::Utils::Outcome<XmlTimestampsResult, RestXmlProtocolError> XmlTimestampsOutcome;
typedef Aws::Utils::Outcome<XmlUnionsResult, RestXmlProtocolError> XmlUnionsOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AllQueryStringTypesOutcome> AllQueryStringTypesOutcomeCallable;
typedef std::future<BodyWithXmlNameOutcome> BodyWithXmlNameOutcomeCallable;
typedef std::future<ConstantAndVariableQueryStringOutcome> ConstantAndVariableQueryStringOutcomeCallable;
typedef std::future<ConstantQueryStringOutcome> ConstantQueryStringOutcomeCallable;
typedef std::future<ContentTypeParametersOutcome> ContentTypeParametersOutcomeCallable;
typedef std::future<DatetimeOffsetsOutcome> DatetimeOffsetsOutcomeCallable;
typedef std::future<EmptyInputAndEmptyOutputOutcome> EmptyInputAndEmptyOutputOutcomeCallable;
typedef std::future<EndpointOperationOutcome> EndpointOperationOutcomeCallable;
typedef std::future<EndpointWithHostLabelHeaderOperationOutcome> EndpointWithHostLabelHeaderOperationOutcomeCallable;
typedef std::future<EndpointWithHostLabelOperationOutcome> EndpointWithHostLabelOperationOutcomeCallable;
typedef std::future<FlattenedXmlMapOutcome> FlattenedXmlMapOutcomeCallable;
typedef std::future<FlattenedXmlMapWithXmlNameOutcome> FlattenedXmlMapWithXmlNameOutcomeCallable;
typedef std::future<FlattenedXmlMapWithXmlNamespaceOutcome> FlattenedXmlMapWithXmlNamespaceOutcomeCallable;
typedef std::future<FractionalSecondsOutcome> FractionalSecondsOutcomeCallable;
typedef std::future<GreetingWithErrorsOutcome> GreetingWithErrorsOutcomeCallable;
typedef std::future<HttpEnumPayloadOutcome> HttpEnumPayloadOutcomeCallable;
typedef std::future<HttpPayloadTraitsOutcome> HttpPayloadTraitsOutcomeCallable;
typedef std::future<HttpPayloadWithMemberXmlNameOutcome> HttpPayloadWithMemberXmlNameOutcomeCallable;
typedef std::future<HttpPayloadWithStructureOutcome> HttpPayloadWithStructureOutcomeCallable;
typedef std::future<HttpPayloadWithUnionOutcome> HttpPayloadWithUnionOutcomeCallable;
typedef std::future<HttpPayloadWithXmlNameOutcome> HttpPayloadWithXmlNameOutcomeCallable;
typedef std::future<HttpPayloadWithXmlNamespaceOutcome> HttpPayloadWithXmlNamespaceOutcomeCallable;
typedef std::future<HttpPayloadWithXmlNamespaceAndPrefixOutcome> HttpPayloadWithXmlNamespaceAndPrefixOutcomeCallable;
typedef std::future<HttpPrefixHeadersOutcome> HttpPrefixHeadersOutcomeCallable;
typedef std::future<HttpRequestWithFloatLabelsOutcome> HttpRequestWithFloatLabelsOutcomeCallable;
typedef std::future<HttpRequestWithGreedyLabelInPathOutcome> HttpRequestWithGreedyLabelInPathOutcomeCallable;
typedef std::future<HttpRequestWithLabelsOutcome> HttpRequestWithLabelsOutcomeCallable;
typedef std::future<HttpRequestWithLabelsAndTimestampFormatOutcome> HttpRequestWithLabelsAndTimestampFormatOutcomeCallable;
typedef std::future<HttpResponseCodeOutcome> HttpResponseCodeOutcomeCallable;
typedef std::future<HttpStringPayloadOutcome> HttpStringPayloadOutcomeCallable;
typedef std::future<IgnoreQueryParamsInResponseOutcome> IgnoreQueryParamsInResponseOutcomeCallable;
typedef std::future<InputAndOutputWithHeadersOutcome> InputAndOutputWithHeadersOutcomeCallable;
typedef std::future<NestedXmlMapWithXmlNameOutcome> NestedXmlMapWithXmlNameOutcomeCallable;
typedef std::future<NestedXmlMapsOutcome> NestedXmlMapsOutcomeCallable;
typedef std::future<NoInputAndNoOutputOutcome> NoInputAndNoOutputOutcomeCallable;
typedef std::future<NoInputAndOutputOutcome> NoInputAndOutputOutcomeCallable;
typedef std::future<NullAndEmptyHeadersClientOutcome> NullAndEmptyHeadersClientOutcomeCallable;
typedef std::future<NullAndEmptyHeadersServerOutcome> NullAndEmptyHeadersServerOutcomeCallable;
typedef std::future<OmitsNullSerializesEmptyStringOutcome> OmitsNullSerializesEmptyStringOutcomeCallable;
typedef std::future<PutWithContentEncodingOutcome> PutWithContentEncodingOutcomeCallable;
typedef std::future<QueryIdempotencyTokenAutoFillOutcome> QueryIdempotencyTokenAutoFillOutcomeCallable;
typedef std::future<QueryParamsAsStringListMapOutcome> QueryParamsAsStringListMapOutcomeCallable;
typedef std::future<QueryPrecedenceOutcome> QueryPrecedenceOutcomeCallable;
typedef std::future<RecursiveShapesOutcome> RecursiveShapesOutcomeCallable;
typedef std::future<SimpleScalarPropertiesOutcome> SimpleScalarPropertiesOutcomeCallable;
typedef std::future<TimestampFormatHeadersOutcome> TimestampFormatHeadersOutcomeCallable;
typedef std::future<XmlAttributesOutcome> XmlAttributesOutcomeCallable;
typedef std::future<XmlAttributesOnPayloadOutcome> XmlAttributesOnPayloadOutcomeCallable;
typedef std::future<XmlBlobsOutcome> XmlBlobsOutcomeCallable;
typedef std::future<XmlEmptyBlobsOutcome> XmlEmptyBlobsOutcomeCallable;
typedef std::future<XmlEmptyListsOutcome> XmlEmptyListsOutcomeCallable;
typedef std::future<XmlEmptyMapsOutcome> XmlEmptyMapsOutcomeCallable;
typedef std::future<XmlEmptyStringsOutcome> XmlEmptyStringsOutcomeCallable;
typedef std::future<XmlEnumsOutcome> XmlEnumsOutcomeCallable;
typedef std::future<XmlIntEnumsOutcome> XmlIntEnumsOutcomeCallable;
typedef std::future<XmlListsOutcome> XmlListsOutcomeCallable;
typedef std::future<XmlMapWithXmlNamespaceOutcome> XmlMapWithXmlNamespaceOutcomeCallable;
typedef std::future<XmlMapsOutcome> XmlMapsOutcomeCallable;
typedef std::future<XmlMapsXmlNameOutcome> XmlMapsXmlNameOutcomeCallable;
typedef std::future<XmlNamespacesOutcome> XmlNamespacesOutcomeCallable;
typedef std::future<XmlTimestampsOutcome> XmlTimestampsOutcomeCallable;
typedef std::future<XmlUnionsOutcome> XmlUnionsOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class RestXmlProtocolClient;

/* Service model async handlers definitions */
typedef std::function<void(const RestXmlProtocolClient*, const Model::AllQueryStringTypesRequest&, const Model::AllQueryStringTypesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AllQueryStringTypesResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::BodyWithXmlNameRequest&, const Model::BodyWithXmlNameOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BodyWithXmlNameResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::ConstantAndVariableQueryStringRequest&,
                           const Model::ConstantAndVariableQueryStringOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ConstantAndVariableQueryStringResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::ConstantQueryStringRequest&, const Model::ConstantQueryStringOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ConstantQueryStringResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::ContentTypeParametersRequest&,
                           const Model::ContentTypeParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ContentTypeParametersResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::DatetimeOffsetsRequest&, const Model::DatetimeOffsetsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DatetimeOffsetsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::EmptyInputAndEmptyOutputRequest&,
                           const Model::EmptyInputAndEmptyOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EmptyInputAndEmptyOutputResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::EndpointOperationRequest&, const Model::EndpointOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EndpointOperationResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::EndpointWithHostLabelHeaderOperationRequest&,
                           const Model::EndpointWithHostLabelHeaderOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EndpointWithHostLabelHeaderOperationResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::EndpointWithHostLabelOperationRequest&,
                           const Model::EndpointWithHostLabelOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EndpointWithHostLabelOperationResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::FlattenedXmlMapRequest&, const Model::FlattenedXmlMapOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    FlattenedXmlMapResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::FlattenedXmlMapWithXmlNameRequest&,
                           const Model::FlattenedXmlMapWithXmlNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    FlattenedXmlMapWithXmlNameResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::FlattenedXmlMapWithXmlNamespaceRequest&,
                           const Model::FlattenedXmlMapWithXmlNamespaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    FlattenedXmlMapWithXmlNamespaceResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::FractionalSecondsRequest&, const Model::FractionalSecondsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    FractionalSecondsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::GreetingWithErrorsRequest&, const Model::GreetingWithErrorsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GreetingWithErrorsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpEnumPayloadRequest&, const Model::HttpEnumPayloadOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpEnumPayloadResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpPayloadTraitsRequest&, Model::HttpPayloadTraitsOutcome,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpPayloadTraitsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpPayloadWithMemberXmlNameRequest&,
                           const Model::HttpPayloadWithMemberXmlNameOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpPayloadWithMemberXmlNameResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpPayloadWithStructureRequest&,
                           const Model::HttpPayloadWithStructureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpPayloadWithStructureResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpPayloadWithUnionRequest&,
                           const Model::HttpPayloadWithUnionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpPayloadWithUnionResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpPayloadWithXmlNameRequest&,
                           const Model::HttpPayloadWithXmlNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpPayloadWithXmlNameResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpPayloadWithXmlNamespaceRequest&,
                           const Model::HttpPayloadWithXmlNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpPayloadWithXmlNamespaceResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpPayloadWithXmlNamespaceAndPrefixRequest&,
                           const Model::HttpPayloadWithXmlNamespaceAndPrefixOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpPayloadWithXmlNamespaceAndPrefixResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpPrefixHeadersRequest&, const Model::HttpPrefixHeadersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpPrefixHeadersResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpRequestWithFloatLabelsRequest&,
                           const Model::HttpRequestWithFloatLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpRequestWithFloatLabelsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpRequestWithGreedyLabelInPathRequest&,
                           const Model::HttpRequestWithGreedyLabelInPathOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpRequestWithGreedyLabelInPathResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpRequestWithLabelsRequest&,
                           const Model::HttpRequestWithLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpRequestWithLabelsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpRequestWithLabelsAndTimestampFormatRequest&,
                           const Model::HttpRequestWithLabelsAndTimestampFormatOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpRequestWithLabelsAndTimestampFormatResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpResponseCodeRequest&, const Model::HttpResponseCodeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpResponseCodeResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::HttpStringPayloadRequest&, Model::HttpStringPayloadOutcome,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HttpStringPayloadResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::IgnoreQueryParamsInResponseRequest&,
                           const Model::IgnoreQueryParamsInResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    IgnoreQueryParamsInResponseResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::InputAndOutputWithHeadersRequest&,
                           const Model::InputAndOutputWithHeadersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InputAndOutputWithHeadersResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::NestedXmlMapWithXmlNameRequest&,
                           const Model::NestedXmlMapWithXmlNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NestedXmlMapWithXmlNameResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::NestedXmlMapsRequest&, const Model::NestedXmlMapsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NestedXmlMapsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::NoInputAndNoOutputRequest&, const Model::NoInputAndNoOutputOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NoInputAndNoOutputResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::NoInputAndOutputRequest&, const Model::NoInputAndOutputOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NoInputAndOutputResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::NullAndEmptyHeadersClientRequest&,
                           const Model::NullAndEmptyHeadersClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NullAndEmptyHeadersClientResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::NullAndEmptyHeadersServerRequest&,
                           const Model::NullAndEmptyHeadersServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NullAndEmptyHeadersServerResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::OmitsNullSerializesEmptyStringRequest&,
                           const Model::OmitsNullSerializesEmptyStringOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    OmitsNullSerializesEmptyStringResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::PutWithContentEncodingRequest&,
                           const Model::PutWithContentEncodingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutWithContentEncodingResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::QueryIdempotencyTokenAutoFillRequest&,
                           const Model::QueryIdempotencyTokenAutoFillOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryIdempotencyTokenAutoFillResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::QueryParamsAsStringListMapRequest&,
                           const Model::QueryParamsAsStringListMapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryParamsAsStringListMapResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::QueryPrecedenceRequest&, const Model::QueryPrecedenceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryPrecedenceResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::RecursiveShapesRequest&, const Model::RecursiveShapesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RecursiveShapesResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::SimpleScalarPropertiesRequest&,
                           const Model::SimpleScalarPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SimpleScalarPropertiesResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::TimestampFormatHeadersRequest&,
                           const Model::TimestampFormatHeadersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TimestampFormatHeadersResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlAttributesRequest&, const Model::XmlAttributesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlAttributesResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlAttributesOnPayloadRequest&,
                           const Model::XmlAttributesOnPayloadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlAttributesOnPayloadResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlBlobsRequest&, const Model::XmlBlobsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlBlobsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlEmptyBlobsRequest&, const Model::XmlEmptyBlobsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlEmptyBlobsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlEmptyListsRequest&, const Model::XmlEmptyListsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlEmptyListsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlEmptyMapsRequest&, const Model::XmlEmptyMapsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlEmptyMapsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlEmptyStringsRequest&, const Model::XmlEmptyStringsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlEmptyStringsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlEnumsRequest&, const Model::XmlEnumsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlEnumsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlIntEnumsRequest&, const Model::XmlIntEnumsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlIntEnumsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlListsRequest&, const Model::XmlListsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlListsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlMapWithXmlNamespaceRequest&,
                           const Model::XmlMapWithXmlNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlMapWithXmlNamespaceResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlMapsRequest&, const Model::XmlMapsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlMapsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlMapsXmlNameRequest&, const Model::XmlMapsXmlNameOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlMapsXmlNameResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlNamespacesRequest&, const Model::XmlNamespacesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlNamespacesResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlTimestampsRequest&, const Model::XmlTimestampsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlTimestampsResponseReceivedHandler;
typedef std::function<void(const RestXmlProtocolClient*, const Model::XmlUnionsRequest&, const Model::XmlUnionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlUnionsResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace RestXmlProtocol
}  // namespace Aws
