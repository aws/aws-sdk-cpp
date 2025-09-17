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
#include <aws/query-protocol/QueryProtocolEndpointProvider.h>
#include <aws/query-protocol/QueryProtocolErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in QueryProtocolClient header */
#include <aws/core/NoResult.h>
#include <aws/query-protocol/model/DatetimeOffsetsRequest.h>
#include <aws/query-protocol/model/DatetimeOffsetsResult.h>
#include <aws/query-protocol/model/EmptyInputAndEmptyOutputRequest.h>
#include <aws/query-protocol/model/EmptyInputAndEmptyOutputResult.h>
#include <aws/query-protocol/model/EndpointOperationRequest.h>
#include <aws/query-protocol/model/FlattenedXmlMapRequest.h>
#include <aws/query-protocol/model/FlattenedXmlMapResult.h>
#include <aws/query-protocol/model/FlattenedXmlMapWithXmlNameRequest.h>
#include <aws/query-protocol/model/FlattenedXmlMapWithXmlNameResult.h>
#include <aws/query-protocol/model/FlattenedXmlMapWithXmlNamespaceRequest.h>
#include <aws/query-protocol/model/FlattenedXmlMapWithXmlNamespaceResult.h>
#include <aws/query-protocol/model/FractionalSecondsRequest.h>
#include <aws/query-protocol/model/FractionalSecondsResult.h>
#include <aws/query-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/query-protocol/model/GreetingWithErrorsResult.h>
#include <aws/query-protocol/model/HostWithPathOperationRequest.h>
#include <aws/query-protocol/model/IgnoresWrappingXmlNameRequest.h>
#include <aws/query-protocol/model/IgnoresWrappingXmlNameResult.h>
#include <aws/query-protocol/model/NestedStructuresRequest.h>
#include <aws/query-protocol/model/NoInputAndNoOutputRequest.h>
#include <aws/query-protocol/model/NoInputAndOutputRequest.h>
#include <aws/query-protocol/model/NoInputAndOutputResult.h>
#include <aws/query-protocol/model/PutWithContentEncodingRequest.h>
#include <aws/query-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>
#include <aws/query-protocol/model/QueryListsRequest.h>
#include <aws/query-protocol/model/QueryMapsRequest.h>
#include <aws/query-protocol/model/QueryTimestampsRequest.h>
#include <aws/query-protocol/model/RecursiveXmlShapesRequest.h>
#include <aws/query-protocol/model/RecursiveXmlShapesResult.h>
#include <aws/query-protocol/model/SimpleInputParamsRequest.h>
#include <aws/query-protocol/model/SimpleScalarXmlPropertiesRequest.h>
#include <aws/query-protocol/model/SimpleScalarXmlPropertiesResult.h>
#include <aws/query-protocol/model/XmlBlobsRequest.h>
#include <aws/query-protocol/model/XmlBlobsResult.h>
#include <aws/query-protocol/model/XmlEmptyBlobsRequest.h>
#include <aws/query-protocol/model/XmlEmptyBlobsResult.h>
#include <aws/query-protocol/model/XmlEmptyListsRequest.h>
#include <aws/query-protocol/model/XmlEmptyListsResult.h>
#include <aws/query-protocol/model/XmlEmptyMapsRequest.h>
#include <aws/query-protocol/model/XmlEmptyMapsResult.h>
#include <aws/query-protocol/model/XmlEnumsRequest.h>
#include <aws/query-protocol/model/XmlEnumsResult.h>
#include <aws/query-protocol/model/XmlIntEnumsRequest.h>
#include <aws/query-protocol/model/XmlIntEnumsResult.h>
#include <aws/query-protocol/model/XmlListsRequest.h>
#include <aws/query-protocol/model/XmlListsResult.h>
#include <aws/query-protocol/model/XmlMapsRequest.h>
#include <aws/query-protocol/model/XmlMapsResult.h>
#include <aws/query-protocol/model/XmlMapsXmlNameRequest.h>
#include <aws/query-protocol/model/XmlMapsXmlNameResult.h>
#include <aws/query-protocol/model/XmlNamespacesRequest.h>
#include <aws/query-protocol/model/XmlNamespacesResult.h>
#include <aws/query-protocol/model/XmlTimestampsRequest.h>
#include <aws/query-protocol/model/XmlTimestampsResult.h>
/* End of service model headers required in QueryProtocolClient header */

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

namespace QueryProtocol {
using QueryProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using QueryProtocolEndpointProviderBase = Aws::QueryProtocol::Endpoint::QueryProtocolEndpointProviderBase;
using QueryProtocolEndpointProvider = Aws::QueryProtocol::Endpoint::QueryProtocolEndpointProvider;

namespace Model {
/* Service model forward declarations required in QueryProtocolClient header */
class DatetimeOffsetsRequest;
class EmptyInputAndEmptyOutputRequest;
class EndpointOperationRequest;
class EndpointWithHostLabelOperationRequest;
class FlattenedXmlMapRequest;
class FlattenedXmlMapWithXmlNameRequest;
class FlattenedXmlMapWithXmlNamespaceRequest;
class FractionalSecondsRequest;
class GreetingWithErrorsRequest;
class HostWithPathOperationRequest;
class IgnoresWrappingXmlNameRequest;
class NestedStructuresRequest;
class NoInputAndNoOutputRequest;
class NoInputAndOutputRequest;
class PutWithContentEncodingRequest;
class QueryIdempotencyTokenAutoFillRequest;
class QueryListsRequest;
class QueryMapsRequest;
class QueryTimestampsRequest;
class RecursiveXmlShapesRequest;
class SimpleInputParamsRequest;
class SimpleScalarXmlPropertiesRequest;
class XmlBlobsRequest;
class XmlEmptyBlobsRequest;
class XmlEmptyListsRequest;
class XmlEmptyMapsRequest;
class XmlEnumsRequest;
class XmlIntEnumsRequest;
class XmlListsRequest;
class XmlMapsRequest;
class XmlMapsXmlNameRequest;
class XmlNamespacesRequest;
class XmlTimestampsRequest;
/* End of service model forward declarations required in QueryProtocolClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<DatetimeOffsetsResult, QueryProtocolError> DatetimeOffsetsOutcome;
typedef Aws::Utils::Outcome<EmptyInputAndEmptyOutputResult, QueryProtocolError> EmptyInputAndEmptyOutputOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, QueryProtocolError> EndpointOperationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, QueryProtocolError> EndpointWithHostLabelOperationOutcome;
typedef Aws::Utils::Outcome<FlattenedXmlMapResult, QueryProtocolError> FlattenedXmlMapOutcome;
typedef Aws::Utils::Outcome<FlattenedXmlMapWithXmlNameResult, QueryProtocolError> FlattenedXmlMapWithXmlNameOutcome;
typedef Aws::Utils::Outcome<FlattenedXmlMapWithXmlNamespaceResult, QueryProtocolError> FlattenedXmlMapWithXmlNamespaceOutcome;
typedef Aws::Utils::Outcome<FractionalSecondsResult, QueryProtocolError> FractionalSecondsOutcome;
typedef Aws::Utils::Outcome<GreetingWithErrorsResult, QueryProtocolError> GreetingWithErrorsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, QueryProtocolError> HostWithPathOperationOutcome;
typedef Aws::Utils::Outcome<IgnoresWrappingXmlNameResult, QueryProtocolError> IgnoresWrappingXmlNameOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, QueryProtocolError> NestedStructuresOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, QueryProtocolError> NoInputAndNoOutputOutcome;
typedef Aws::Utils::Outcome<NoInputAndOutputResult, QueryProtocolError> NoInputAndOutputOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, QueryProtocolError> PutWithContentEncodingOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, QueryProtocolError> QueryIdempotencyTokenAutoFillOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, QueryProtocolError> QueryListsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, QueryProtocolError> QueryMapsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, QueryProtocolError> QueryTimestampsOutcome;
typedef Aws::Utils::Outcome<RecursiveXmlShapesResult, QueryProtocolError> RecursiveXmlShapesOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, QueryProtocolError> SimpleInputParamsOutcome;
typedef Aws::Utils::Outcome<SimpleScalarXmlPropertiesResult, QueryProtocolError> SimpleScalarXmlPropertiesOutcome;
typedef Aws::Utils::Outcome<XmlBlobsResult, QueryProtocolError> XmlBlobsOutcome;
typedef Aws::Utils::Outcome<XmlEmptyBlobsResult, QueryProtocolError> XmlEmptyBlobsOutcome;
typedef Aws::Utils::Outcome<XmlEmptyListsResult, QueryProtocolError> XmlEmptyListsOutcome;
typedef Aws::Utils::Outcome<XmlEmptyMapsResult, QueryProtocolError> XmlEmptyMapsOutcome;
typedef Aws::Utils::Outcome<XmlEnumsResult, QueryProtocolError> XmlEnumsOutcome;
typedef Aws::Utils::Outcome<XmlIntEnumsResult, QueryProtocolError> XmlIntEnumsOutcome;
typedef Aws::Utils::Outcome<XmlListsResult, QueryProtocolError> XmlListsOutcome;
typedef Aws::Utils::Outcome<XmlMapsResult, QueryProtocolError> XmlMapsOutcome;
typedef Aws::Utils::Outcome<XmlMapsXmlNameResult, QueryProtocolError> XmlMapsXmlNameOutcome;
typedef Aws::Utils::Outcome<XmlNamespacesResult, QueryProtocolError> XmlNamespacesOutcome;
typedef Aws::Utils::Outcome<XmlTimestampsResult, QueryProtocolError> XmlTimestampsOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<DatetimeOffsetsOutcome> DatetimeOffsetsOutcomeCallable;
typedef std::future<EmptyInputAndEmptyOutputOutcome> EmptyInputAndEmptyOutputOutcomeCallable;
typedef std::future<EndpointOperationOutcome> EndpointOperationOutcomeCallable;
typedef std::future<EndpointWithHostLabelOperationOutcome> EndpointWithHostLabelOperationOutcomeCallable;
typedef std::future<FlattenedXmlMapOutcome> FlattenedXmlMapOutcomeCallable;
typedef std::future<FlattenedXmlMapWithXmlNameOutcome> FlattenedXmlMapWithXmlNameOutcomeCallable;
typedef std::future<FlattenedXmlMapWithXmlNamespaceOutcome> FlattenedXmlMapWithXmlNamespaceOutcomeCallable;
typedef std::future<FractionalSecondsOutcome> FractionalSecondsOutcomeCallable;
typedef std::future<GreetingWithErrorsOutcome> GreetingWithErrorsOutcomeCallable;
typedef std::future<HostWithPathOperationOutcome> HostWithPathOperationOutcomeCallable;
typedef std::future<IgnoresWrappingXmlNameOutcome> IgnoresWrappingXmlNameOutcomeCallable;
typedef std::future<NestedStructuresOutcome> NestedStructuresOutcomeCallable;
typedef std::future<NoInputAndNoOutputOutcome> NoInputAndNoOutputOutcomeCallable;
typedef std::future<NoInputAndOutputOutcome> NoInputAndOutputOutcomeCallable;
typedef std::future<PutWithContentEncodingOutcome> PutWithContentEncodingOutcomeCallable;
typedef std::future<QueryIdempotencyTokenAutoFillOutcome> QueryIdempotencyTokenAutoFillOutcomeCallable;
typedef std::future<QueryListsOutcome> QueryListsOutcomeCallable;
typedef std::future<QueryMapsOutcome> QueryMapsOutcomeCallable;
typedef std::future<QueryTimestampsOutcome> QueryTimestampsOutcomeCallable;
typedef std::future<RecursiveXmlShapesOutcome> RecursiveXmlShapesOutcomeCallable;
typedef std::future<SimpleInputParamsOutcome> SimpleInputParamsOutcomeCallable;
typedef std::future<SimpleScalarXmlPropertiesOutcome> SimpleScalarXmlPropertiesOutcomeCallable;
typedef std::future<XmlBlobsOutcome> XmlBlobsOutcomeCallable;
typedef std::future<XmlEmptyBlobsOutcome> XmlEmptyBlobsOutcomeCallable;
typedef std::future<XmlEmptyListsOutcome> XmlEmptyListsOutcomeCallable;
typedef std::future<XmlEmptyMapsOutcome> XmlEmptyMapsOutcomeCallable;
typedef std::future<XmlEnumsOutcome> XmlEnumsOutcomeCallable;
typedef std::future<XmlIntEnumsOutcome> XmlIntEnumsOutcomeCallable;
typedef std::future<XmlListsOutcome> XmlListsOutcomeCallable;
typedef std::future<XmlMapsOutcome> XmlMapsOutcomeCallable;
typedef std::future<XmlMapsXmlNameOutcome> XmlMapsXmlNameOutcomeCallable;
typedef std::future<XmlNamespacesOutcome> XmlNamespacesOutcomeCallable;
typedef std::future<XmlTimestampsOutcome> XmlTimestampsOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class QueryProtocolClient;

/* Service model async handlers definitions */
typedef std::function<void(const QueryProtocolClient*, const Model::DatetimeOffsetsRequest&, const Model::DatetimeOffsetsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DatetimeOffsetsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::EmptyInputAndEmptyOutputRequest&,
                           const Model::EmptyInputAndEmptyOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EmptyInputAndEmptyOutputResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::EndpointOperationRequest&, const Model::EndpointOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EndpointOperationResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::EndpointWithHostLabelOperationRequest&,
                           const Model::EndpointWithHostLabelOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EndpointWithHostLabelOperationResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::FlattenedXmlMapRequest&, const Model::FlattenedXmlMapOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    FlattenedXmlMapResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::FlattenedXmlMapWithXmlNameRequest&,
                           const Model::FlattenedXmlMapWithXmlNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    FlattenedXmlMapWithXmlNameResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::FlattenedXmlMapWithXmlNamespaceRequest&,
                           const Model::FlattenedXmlMapWithXmlNamespaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    FlattenedXmlMapWithXmlNamespaceResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::FractionalSecondsRequest&, const Model::FractionalSecondsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    FractionalSecondsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::GreetingWithErrorsRequest&, const Model::GreetingWithErrorsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GreetingWithErrorsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::HostWithPathOperationRequest&,
                           const Model::HostWithPathOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HostWithPathOperationResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::IgnoresWrappingXmlNameRequest&,
                           const Model::IgnoresWrappingXmlNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    IgnoresWrappingXmlNameResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::NestedStructuresRequest&, const Model::NestedStructuresOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NestedStructuresResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::NoInputAndNoOutputRequest&, const Model::NoInputAndNoOutputOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NoInputAndNoOutputResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::NoInputAndOutputRequest&, const Model::NoInputAndOutputOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NoInputAndOutputResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::PutWithContentEncodingRequest&,
                           const Model::PutWithContentEncodingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutWithContentEncodingResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::QueryIdempotencyTokenAutoFillRequest&,
                           const Model::QueryIdempotencyTokenAutoFillOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryIdempotencyTokenAutoFillResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::QueryListsRequest&, const Model::QueryListsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryListsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::QueryMapsRequest&, const Model::QueryMapsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryMapsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::QueryTimestampsRequest&, const Model::QueryTimestampsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryTimestampsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::RecursiveXmlShapesRequest&, const Model::RecursiveXmlShapesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RecursiveXmlShapesResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::SimpleInputParamsRequest&, const Model::SimpleInputParamsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SimpleInputParamsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::SimpleScalarXmlPropertiesRequest&,
                           const Model::SimpleScalarXmlPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SimpleScalarXmlPropertiesResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::XmlBlobsRequest&, const Model::XmlBlobsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlBlobsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::XmlEmptyBlobsRequest&, const Model::XmlEmptyBlobsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlEmptyBlobsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::XmlEmptyListsRequest&, const Model::XmlEmptyListsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlEmptyListsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::XmlEmptyMapsRequest&, const Model::XmlEmptyMapsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlEmptyMapsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::XmlEnumsRequest&, const Model::XmlEnumsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlEnumsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::XmlIntEnumsRequest&, const Model::XmlIntEnumsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlIntEnumsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::XmlListsRequest&, const Model::XmlListsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlListsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::XmlMapsRequest&, const Model::XmlMapsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlMapsResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::XmlMapsXmlNameRequest&, const Model::XmlMapsXmlNameOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlMapsXmlNameResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::XmlNamespacesRequest&, const Model::XmlNamespacesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlNamespacesResponseReceivedHandler;
typedef std::function<void(const QueryProtocolClient*, const Model::XmlTimestampsRequest&, const Model::XmlTimestampsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlTimestampsResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace QueryProtocol
}  // namespace Aws
