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
#include <aws/json-protocol/JsonProtocolEndpointProvider.h>
#include <aws/json-protocol/JsonProtocolErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in JsonProtocolClient header */
#include <aws/core/NoResult.h>
#include <aws/json-protocol/model/ContentTypeParametersRequest.h>
#include <aws/json-protocol/model/ContentTypeParametersResult.h>
#include <aws/json-protocol/model/DatetimeOffsetsRequest.h>
#include <aws/json-protocol/model/DatetimeOffsetsResult.h>
#include <aws/json-protocol/model/EmptyOperationRequest.h>
#include <aws/json-protocol/model/EndpointOperationRequest.h>
#include <aws/json-protocol/model/FractionalSecondsRequest.h>
#include <aws/json-protocol/model/FractionalSecondsResult.h>
#include <aws/json-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/json-protocol/model/GreetingWithErrorsResult.h>
#include <aws/json-protocol/model/HostWithPathOperationRequest.h>
#include <aws/json-protocol/model/JsonEnumsRequest.h>
#include <aws/json-protocol/model/JsonEnumsResult.h>
#include <aws/json-protocol/model/JsonIntEnumsRequest.h>
#include <aws/json-protocol/model/JsonIntEnumsResult.h>
#include <aws/json-protocol/model/JsonUnionsRequest.h>
#include <aws/json-protocol/model/JsonUnionsResult.h>
#include <aws/json-protocol/model/KitchenSinkOperationRequest.h>
#include <aws/json-protocol/model/KitchenSinkOperationResult.h>
#include <aws/json-protocol/model/NullOperationRequest.h>
#include <aws/json-protocol/model/NullOperationResult.h>
#include <aws/json-protocol/model/OperationWithOptionalInputOutputRequest.h>
#include <aws/json-protocol/model/OperationWithOptionalInputOutputResult.h>
#include <aws/json-protocol/model/PutAndGetInlineDocumentsRequest.h>
#include <aws/json-protocol/model/PutAndGetInlineDocumentsResult.h>
#include <aws/json-protocol/model/PutWithContentEncodingRequest.h>
#include <aws/json-protocol/model/SimpleScalarPropertiesRequest.h>
#include <aws/json-protocol/model/SimpleScalarPropertiesResult.h>
/* End of service model headers required in JsonProtocolClient header */

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

namespace JsonProtocol {
using JsonProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using JsonProtocolEndpointProviderBase = Aws::JsonProtocol::Endpoint::JsonProtocolEndpointProviderBase;
using JsonProtocolEndpointProvider = Aws::JsonProtocol::Endpoint::JsonProtocolEndpointProvider;

namespace Model {
/* Service model forward declarations required in JsonProtocolClient header */
class ContentTypeParametersRequest;
class DatetimeOffsetsRequest;
class EmptyOperationRequest;
class EndpointOperationRequest;
class EndpointWithHostLabelOperationRequest;
class FractionalSecondsRequest;
class GreetingWithErrorsRequest;
class HostWithPathOperationRequest;
class JsonEnumsRequest;
class JsonIntEnumsRequest;
class JsonUnionsRequest;
class KitchenSinkOperationRequest;
class NullOperationRequest;
class OperationWithOptionalInputOutputRequest;
class PutAndGetInlineDocumentsRequest;
class PutWithContentEncodingRequest;
class SimpleScalarPropertiesRequest;
/* End of service model forward declarations required in JsonProtocolClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<ContentTypeParametersResult, JsonProtocolError> ContentTypeParametersOutcome;
typedef Aws::Utils::Outcome<DatetimeOffsetsResult, JsonProtocolError> DatetimeOffsetsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, JsonProtocolError> EmptyOperationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, JsonProtocolError> EndpointOperationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, JsonProtocolError> EndpointWithHostLabelOperationOutcome;
typedef Aws::Utils::Outcome<FractionalSecondsResult, JsonProtocolError> FractionalSecondsOutcome;
typedef Aws::Utils::Outcome<GreetingWithErrorsResult, JsonProtocolError> GreetingWithErrorsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, JsonProtocolError> HostWithPathOperationOutcome;
typedef Aws::Utils::Outcome<JsonEnumsResult, JsonProtocolError> JsonEnumsOutcome;
typedef Aws::Utils::Outcome<JsonIntEnumsResult, JsonProtocolError> JsonIntEnumsOutcome;
typedef Aws::Utils::Outcome<JsonUnionsResult, JsonProtocolError> JsonUnionsOutcome;
typedef Aws::Utils::Outcome<KitchenSinkOperationResult, JsonProtocolError> KitchenSinkOperationOutcome;
typedef Aws::Utils::Outcome<NullOperationResult, JsonProtocolError> NullOperationOutcome;
typedef Aws::Utils::Outcome<OperationWithOptionalInputOutputResult, JsonProtocolError> OperationWithOptionalInputOutputOutcome;
typedef Aws::Utils::Outcome<PutAndGetInlineDocumentsResult, JsonProtocolError> PutAndGetInlineDocumentsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, JsonProtocolError> PutWithContentEncodingOutcome;
typedef Aws::Utils::Outcome<SimpleScalarPropertiesResult, JsonProtocolError> SimpleScalarPropertiesOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<ContentTypeParametersOutcome> ContentTypeParametersOutcomeCallable;
typedef std::future<DatetimeOffsetsOutcome> DatetimeOffsetsOutcomeCallable;
typedef std::future<EmptyOperationOutcome> EmptyOperationOutcomeCallable;
typedef std::future<EndpointOperationOutcome> EndpointOperationOutcomeCallable;
typedef std::future<EndpointWithHostLabelOperationOutcome> EndpointWithHostLabelOperationOutcomeCallable;
typedef std::future<FractionalSecondsOutcome> FractionalSecondsOutcomeCallable;
typedef std::future<GreetingWithErrorsOutcome> GreetingWithErrorsOutcomeCallable;
typedef std::future<HostWithPathOperationOutcome> HostWithPathOperationOutcomeCallable;
typedef std::future<JsonEnumsOutcome> JsonEnumsOutcomeCallable;
typedef std::future<JsonIntEnumsOutcome> JsonIntEnumsOutcomeCallable;
typedef std::future<JsonUnionsOutcome> JsonUnionsOutcomeCallable;
typedef std::future<KitchenSinkOperationOutcome> KitchenSinkOperationOutcomeCallable;
typedef std::future<NullOperationOutcome> NullOperationOutcomeCallable;
typedef std::future<OperationWithOptionalInputOutputOutcome> OperationWithOptionalInputOutputOutcomeCallable;
typedef std::future<PutAndGetInlineDocumentsOutcome> PutAndGetInlineDocumentsOutcomeCallable;
typedef std::future<PutWithContentEncodingOutcome> PutWithContentEncodingOutcomeCallable;
typedef std::future<SimpleScalarPropertiesOutcome> SimpleScalarPropertiesOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class JsonProtocolClient;

/* Service model async handlers definitions */
typedef std::function<void(const JsonProtocolClient*, const Model::ContentTypeParametersRequest&,
                           const Model::ContentTypeParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ContentTypeParametersResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::DatetimeOffsetsRequest&, const Model::DatetimeOffsetsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DatetimeOffsetsResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::EmptyOperationRequest&, const Model::EmptyOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EmptyOperationResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::EndpointOperationRequest&, const Model::EndpointOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EndpointOperationResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::EndpointWithHostLabelOperationRequest&,
                           const Model::EndpointWithHostLabelOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EndpointWithHostLabelOperationResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::FractionalSecondsRequest&, const Model::FractionalSecondsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    FractionalSecondsResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::GreetingWithErrorsRequest&, const Model::GreetingWithErrorsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GreetingWithErrorsResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::HostWithPathOperationRequest&,
                           const Model::HostWithPathOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HostWithPathOperationResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::JsonEnumsRequest&, const Model::JsonEnumsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    JsonEnumsResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::JsonIntEnumsRequest&, const Model::JsonIntEnumsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    JsonIntEnumsResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::JsonUnionsRequest&, const Model::JsonUnionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    JsonUnionsResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::KitchenSinkOperationRequest&, const Model::KitchenSinkOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    KitchenSinkOperationResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::NullOperationRequest&, const Model::NullOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NullOperationResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::OperationWithOptionalInputOutputRequest&,
                           const Model::OperationWithOptionalInputOutputOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    OperationWithOptionalInputOutputResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::PutAndGetInlineDocumentsRequest&,
                           const Model::PutAndGetInlineDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutAndGetInlineDocumentsResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::PutWithContentEncodingRequest&,
                           const Model::PutWithContentEncodingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutWithContentEncodingResponseReceivedHandler;
typedef std::function<void(const JsonProtocolClient*, const Model::SimpleScalarPropertiesRequest&,
                           const Model::SimpleScalarPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SimpleScalarPropertiesResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace JsonProtocol
}  // namespace Aws
