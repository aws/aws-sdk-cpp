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
#include <aws/ec2-protocol/EC2ProtocolEndpointProvider.h>
#include <aws/ec2-protocol/EC2ProtocolErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in EC2ProtocolClient header */
#include <aws/core/NoResult.h>
#include <aws/ec2-protocol/model/DatetimeOffsetsRequest.h>
#include <aws/ec2-protocol/model/DatetimeOffsetsResponse.h>
#include <aws/ec2-protocol/model/EmptyInputAndEmptyOutputRequest.h>
#include <aws/ec2-protocol/model/EmptyInputAndEmptyOutputResponse.h>
#include <aws/ec2-protocol/model/EndpointOperationRequest.h>
#include <aws/ec2-protocol/model/FractionalSecondsRequest.h>
#include <aws/ec2-protocol/model/FractionalSecondsResponse.h>
#include <aws/ec2-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/ec2-protocol/model/GreetingWithErrorsResponse.h>
#include <aws/ec2-protocol/model/HostWithPathOperationRequest.h>
#include <aws/ec2-protocol/model/IgnoresWrappingXmlNameRequest.h>
#include <aws/ec2-protocol/model/IgnoresWrappingXmlNameResponse.h>
#include <aws/ec2-protocol/model/NestedStructuresRequest.h>
#include <aws/ec2-protocol/model/NoInputAndOutputRequest.h>
#include <aws/ec2-protocol/model/NoInputAndOutputResponse.h>
#include <aws/ec2-protocol/model/PutWithContentEncodingRequest.h>
#include <aws/ec2-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>
#include <aws/ec2-protocol/model/QueryListsRequest.h>
#include <aws/ec2-protocol/model/QueryTimestampsRequest.h>
#include <aws/ec2-protocol/model/RecursiveXmlShapesRequest.h>
#include <aws/ec2-protocol/model/RecursiveXmlShapesResponse.h>
#include <aws/ec2-protocol/model/SimpleInputParamsRequest.h>
#include <aws/ec2-protocol/model/SimpleScalarXmlPropertiesRequest.h>
#include <aws/ec2-protocol/model/SimpleScalarXmlPropertiesResponse.h>
#include <aws/ec2-protocol/model/XmlBlobsRequest.h>
#include <aws/ec2-protocol/model/XmlBlobsResponse.h>
#include <aws/ec2-protocol/model/XmlEmptyBlobsRequest.h>
#include <aws/ec2-protocol/model/XmlEmptyBlobsResponse.h>
#include <aws/ec2-protocol/model/XmlEmptyListsRequest.h>
#include <aws/ec2-protocol/model/XmlEmptyListsResponse.h>
#include <aws/ec2-protocol/model/XmlEnumsRequest.h>
#include <aws/ec2-protocol/model/XmlEnumsResponse.h>
#include <aws/ec2-protocol/model/XmlIntEnumsRequest.h>
#include <aws/ec2-protocol/model/XmlIntEnumsResponse.h>
#include <aws/ec2-protocol/model/XmlListsRequest.h>
#include <aws/ec2-protocol/model/XmlListsResponse.h>
#include <aws/ec2-protocol/model/XmlNamespacesRequest.h>
#include <aws/ec2-protocol/model/XmlNamespacesResponse.h>
#include <aws/ec2-protocol/model/XmlTimestampsRequest.h>
#include <aws/ec2-protocol/model/XmlTimestampsResponse.h>
/* End of service model headers required in EC2ProtocolClient header */

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

namespace EC2Protocol {
using EC2ProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using EC2ProtocolEndpointProviderBase = Aws::EC2Protocol::Endpoint::EC2ProtocolEndpointProviderBase;
using EC2ProtocolEndpointProvider = Aws::EC2Protocol::Endpoint::EC2ProtocolEndpointProvider;

namespace Model {
/* Service model forward declarations required in EC2ProtocolClient header */
class DatetimeOffsetsRequest;
class EmptyInputAndEmptyOutputRequest;
class EndpointOperationRequest;
class EndpointWithHostLabelOperationRequest;
class FractionalSecondsRequest;
class GreetingWithErrorsRequest;
class HostWithPathOperationRequest;
class IgnoresWrappingXmlNameRequest;
class NestedStructuresRequest;
class NoInputAndOutputRequest;
class PutWithContentEncodingRequest;
class QueryIdempotencyTokenAutoFillRequest;
class QueryListsRequest;
class QueryTimestampsRequest;
class RecursiveXmlShapesRequest;
class SimpleInputParamsRequest;
class SimpleScalarXmlPropertiesRequest;
class XmlBlobsRequest;
class XmlEmptyBlobsRequest;
class XmlEmptyListsRequest;
class XmlEnumsRequest;
class XmlIntEnumsRequest;
class XmlListsRequest;
class XmlNamespacesRequest;
class XmlTimestampsRequest;
/* End of service model forward declarations required in EC2ProtocolClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<DatetimeOffsetsResponse, EC2ProtocolError> DatetimeOffsetsOutcome;
typedef Aws::Utils::Outcome<EmptyInputAndEmptyOutputResponse, EC2ProtocolError> EmptyInputAndEmptyOutputOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, EC2ProtocolError> EndpointOperationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, EC2ProtocolError> EndpointWithHostLabelOperationOutcome;
typedef Aws::Utils::Outcome<FractionalSecondsResponse, EC2ProtocolError> FractionalSecondsOutcome;
typedef Aws::Utils::Outcome<GreetingWithErrorsResponse, EC2ProtocolError> GreetingWithErrorsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, EC2ProtocolError> HostWithPathOperationOutcome;
typedef Aws::Utils::Outcome<IgnoresWrappingXmlNameResponse, EC2ProtocolError> IgnoresWrappingXmlNameOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, EC2ProtocolError> NestedStructuresOutcome;
typedef Aws::Utils::Outcome<NoInputAndOutputResponse, EC2ProtocolError> NoInputAndOutputOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, EC2ProtocolError> PutWithContentEncodingOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, EC2ProtocolError> QueryIdempotencyTokenAutoFillOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, EC2ProtocolError> QueryListsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, EC2ProtocolError> QueryTimestampsOutcome;
typedef Aws::Utils::Outcome<RecursiveXmlShapesResponse, EC2ProtocolError> RecursiveXmlShapesOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, EC2ProtocolError> SimpleInputParamsOutcome;
typedef Aws::Utils::Outcome<SimpleScalarXmlPropertiesResponse, EC2ProtocolError> SimpleScalarXmlPropertiesOutcome;
typedef Aws::Utils::Outcome<XmlBlobsResponse, EC2ProtocolError> XmlBlobsOutcome;
typedef Aws::Utils::Outcome<XmlEmptyBlobsResponse, EC2ProtocolError> XmlEmptyBlobsOutcome;
typedef Aws::Utils::Outcome<XmlEmptyListsResponse, EC2ProtocolError> XmlEmptyListsOutcome;
typedef Aws::Utils::Outcome<XmlEnumsResponse, EC2ProtocolError> XmlEnumsOutcome;
typedef Aws::Utils::Outcome<XmlIntEnumsResponse, EC2ProtocolError> XmlIntEnumsOutcome;
typedef Aws::Utils::Outcome<XmlListsResponse, EC2ProtocolError> XmlListsOutcome;
typedef Aws::Utils::Outcome<XmlNamespacesResponse, EC2ProtocolError> XmlNamespacesOutcome;
typedef Aws::Utils::Outcome<XmlTimestampsResponse, EC2ProtocolError> XmlTimestampsOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<DatetimeOffsetsOutcome> DatetimeOffsetsOutcomeCallable;
typedef std::future<EmptyInputAndEmptyOutputOutcome> EmptyInputAndEmptyOutputOutcomeCallable;
typedef std::future<EndpointOperationOutcome> EndpointOperationOutcomeCallable;
typedef std::future<EndpointWithHostLabelOperationOutcome> EndpointWithHostLabelOperationOutcomeCallable;
typedef std::future<FractionalSecondsOutcome> FractionalSecondsOutcomeCallable;
typedef std::future<GreetingWithErrorsOutcome> GreetingWithErrorsOutcomeCallable;
typedef std::future<HostWithPathOperationOutcome> HostWithPathOperationOutcomeCallable;
typedef std::future<IgnoresWrappingXmlNameOutcome> IgnoresWrappingXmlNameOutcomeCallable;
typedef std::future<NestedStructuresOutcome> NestedStructuresOutcomeCallable;
typedef std::future<NoInputAndOutputOutcome> NoInputAndOutputOutcomeCallable;
typedef std::future<PutWithContentEncodingOutcome> PutWithContentEncodingOutcomeCallable;
typedef std::future<QueryIdempotencyTokenAutoFillOutcome> QueryIdempotencyTokenAutoFillOutcomeCallable;
typedef std::future<QueryListsOutcome> QueryListsOutcomeCallable;
typedef std::future<QueryTimestampsOutcome> QueryTimestampsOutcomeCallable;
typedef std::future<RecursiveXmlShapesOutcome> RecursiveXmlShapesOutcomeCallable;
typedef std::future<SimpleInputParamsOutcome> SimpleInputParamsOutcomeCallable;
typedef std::future<SimpleScalarXmlPropertiesOutcome> SimpleScalarXmlPropertiesOutcomeCallable;
typedef std::future<XmlBlobsOutcome> XmlBlobsOutcomeCallable;
typedef std::future<XmlEmptyBlobsOutcome> XmlEmptyBlobsOutcomeCallable;
typedef std::future<XmlEmptyListsOutcome> XmlEmptyListsOutcomeCallable;
typedef std::future<XmlEnumsOutcome> XmlEnumsOutcomeCallable;
typedef std::future<XmlIntEnumsOutcome> XmlIntEnumsOutcomeCallable;
typedef std::future<XmlListsOutcome> XmlListsOutcomeCallable;
typedef std::future<XmlNamespacesOutcome> XmlNamespacesOutcomeCallable;
typedef std::future<XmlTimestampsOutcome> XmlTimestampsOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class EC2ProtocolClient;

/* Service model async handlers definitions */
typedef std::function<void(const EC2ProtocolClient*, const Model::DatetimeOffsetsRequest&, const Model::DatetimeOffsetsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DatetimeOffsetsResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::EmptyInputAndEmptyOutputRequest&,
                           const Model::EmptyInputAndEmptyOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EmptyInputAndEmptyOutputResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::EndpointOperationRequest&, const Model::EndpointOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EndpointOperationResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::EndpointWithHostLabelOperationRequest&,
                           const Model::EndpointWithHostLabelOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EndpointWithHostLabelOperationResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::FractionalSecondsRequest&, const Model::FractionalSecondsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    FractionalSecondsResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::GreetingWithErrorsRequest&, const Model::GreetingWithErrorsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GreetingWithErrorsResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::HostWithPathOperationRequest&, const Model::HostWithPathOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HostWithPathOperationResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::IgnoresWrappingXmlNameRequest&,
                           const Model::IgnoresWrappingXmlNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    IgnoresWrappingXmlNameResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::NestedStructuresRequest&, const Model::NestedStructuresOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NestedStructuresResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::NoInputAndOutputRequest&, const Model::NoInputAndOutputOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NoInputAndOutputResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::PutWithContentEncodingRequest&,
                           const Model::PutWithContentEncodingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutWithContentEncodingResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::QueryIdempotencyTokenAutoFillRequest&,
                           const Model::QueryIdempotencyTokenAutoFillOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryIdempotencyTokenAutoFillResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::QueryListsRequest&, const Model::QueryListsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryListsResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::QueryTimestampsRequest&, const Model::QueryTimestampsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryTimestampsResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::RecursiveXmlShapesRequest&, const Model::RecursiveXmlShapesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RecursiveXmlShapesResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::SimpleInputParamsRequest&, const Model::SimpleInputParamsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SimpleInputParamsResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::SimpleScalarXmlPropertiesRequest&,
                           const Model::SimpleScalarXmlPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SimpleScalarXmlPropertiesResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::XmlBlobsRequest&, const Model::XmlBlobsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlBlobsResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::XmlEmptyBlobsRequest&, const Model::XmlEmptyBlobsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlEmptyBlobsResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::XmlEmptyListsRequest&, const Model::XmlEmptyListsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlEmptyListsResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::XmlEnumsRequest&, const Model::XmlEnumsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlEnumsResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::XmlIntEnumsRequest&, const Model::XmlIntEnumsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlIntEnumsResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::XmlListsRequest&, const Model::XmlListsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlListsResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::XmlNamespacesRequest&, const Model::XmlNamespacesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlNamespacesResponseReceivedHandler;
typedef std::function<void(const EC2ProtocolClient*, const Model::XmlTimestampsRequest&, const Model::XmlTimestampsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    XmlTimestampsResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace EC2Protocol
}  // namespace Aws
