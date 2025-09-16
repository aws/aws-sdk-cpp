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
#include <aws/json-rpc-10/JSONRPC10EndpointProvider.h>
#include <aws/json-rpc-10/JSONRPC10Errors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in JSONRPC10Client header */
#include <aws/core/NoResult.h>
#include <aws/json-rpc-10/model/ContentTypeParametersRequest.h>
#include <aws/json-rpc-10/model/ContentTypeParametersResult.h>
#include <aws/json-rpc-10/model/EmptyInputAndEmptyOutputRequest.h>
#include <aws/json-rpc-10/model/EmptyInputAndEmptyOutputResult.h>
#include <aws/json-rpc-10/model/EndpointOperationRequest.h>
#include <aws/json-rpc-10/model/GreetingWithErrorsRequest.h>
#include <aws/json-rpc-10/model/GreetingWithErrorsResult.h>
#include <aws/json-rpc-10/model/HostWithPathOperationRequest.h>
#include <aws/json-rpc-10/model/JsonUnionsRequest.h>
#include <aws/json-rpc-10/model/JsonUnionsResult.h>
#include <aws/json-rpc-10/model/NoInputAndNoOutputRequest.h>
#include <aws/json-rpc-10/model/NoInputAndOutputRequest.h>
#include <aws/json-rpc-10/model/NoInputAndOutputResult.h>
#include <aws/json-rpc-10/model/PutWithContentEncodingRequest.h>
#include <aws/json-rpc-10/model/SimpleScalarPropertiesRequest.h>
#include <aws/json-rpc-10/model/SimpleScalarPropertiesResult.h>
/* End of service model headers required in JSONRPC10Client header */

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

namespace JSONRPC10 {
using JSONRPC10ClientConfiguration = Aws::Client::GenericClientConfiguration;
using JSONRPC10EndpointProviderBase = Aws::JSONRPC10::Endpoint::JSONRPC10EndpointProviderBase;
using JSONRPC10EndpointProvider = Aws::JSONRPC10::Endpoint::JSONRPC10EndpointProvider;

namespace Model {
/* Service model forward declarations required in JSONRPC10Client header */
class ContentTypeParametersRequest;
class EmptyInputAndEmptyOutputRequest;
class EndpointOperationRequest;
class EndpointWithHostLabelOperationRequest;
class GreetingWithErrorsRequest;
class HostWithPathOperationRequest;
class JsonUnionsRequest;
class NoInputAndNoOutputRequest;
class NoInputAndOutputRequest;
class PutWithContentEncodingRequest;
class SimpleScalarPropertiesRequest;
/* End of service model forward declarations required in JSONRPC10Client header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<ContentTypeParametersResult, JSONRPC10Error> ContentTypeParametersOutcome;
typedef Aws::Utils::Outcome<EmptyInputAndEmptyOutputResult, JSONRPC10Error> EmptyInputAndEmptyOutputOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, JSONRPC10Error> EndpointOperationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, JSONRPC10Error> EndpointWithHostLabelOperationOutcome;
typedef Aws::Utils::Outcome<GreetingWithErrorsResult, JSONRPC10Error> GreetingWithErrorsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, JSONRPC10Error> HostWithPathOperationOutcome;
typedef Aws::Utils::Outcome<JsonUnionsResult, JSONRPC10Error> JsonUnionsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, JSONRPC10Error> NoInputAndNoOutputOutcome;
typedef Aws::Utils::Outcome<NoInputAndOutputResult, JSONRPC10Error> NoInputAndOutputOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, JSONRPC10Error> PutWithContentEncodingOutcome;
typedef Aws::Utils::Outcome<SimpleScalarPropertiesResult, JSONRPC10Error> SimpleScalarPropertiesOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<ContentTypeParametersOutcome> ContentTypeParametersOutcomeCallable;
typedef std::future<EmptyInputAndEmptyOutputOutcome> EmptyInputAndEmptyOutputOutcomeCallable;
typedef std::future<EndpointOperationOutcome> EndpointOperationOutcomeCallable;
typedef std::future<EndpointWithHostLabelOperationOutcome> EndpointWithHostLabelOperationOutcomeCallable;
typedef std::future<GreetingWithErrorsOutcome> GreetingWithErrorsOutcomeCallable;
typedef std::future<HostWithPathOperationOutcome> HostWithPathOperationOutcomeCallable;
typedef std::future<JsonUnionsOutcome> JsonUnionsOutcomeCallable;
typedef std::future<NoInputAndNoOutputOutcome> NoInputAndNoOutputOutcomeCallable;
typedef std::future<NoInputAndOutputOutcome> NoInputAndOutputOutcomeCallable;
typedef std::future<PutWithContentEncodingOutcome> PutWithContentEncodingOutcomeCallable;
typedef std::future<SimpleScalarPropertiesOutcome> SimpleScalarPropertiesOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class JSONRPC10Client;

/* Service model async handlers definitions */
typedef std::function<void(const JSONRPC10Client*, const Model::ContentTypeParametersRequest&, const Model::ContentTypeParametersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ContentTypeParametersResponseReceivedHandler;
typedef std::function<void(const JSONRPC10Client*, const Model::EmptyInputAndEmptyOutputRequest&,
                           const Model::EmptyInputAndEmptyOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EmptyInputAndEmptyOutputResponseReceivedHandler;
typedef std::function<void(const JSONRPC10Client*, const Model::EndpointOperationRequest&, const Model::EndpointOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EndpointOperationResponseReceivedHandler;
typedef std::function<void(const JSONRPC10Client*, const Model::EndpointWithHostLabelOperationRequest&,
                           const Model::EndpointWithHostLabelOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EndpointWithHostLabelOperationResponseReceivedHandler;
typedef std::function<void(const JSONRPC10Client*, const Model::GreetingWithErrorsRequest&, const Model::GreetingWithErrorsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GreetingWithErrorsResponseReceivedHandler;
typedef std::function<void(const JSONRPC10Client*, const Model::HostWithPathOperationRequest&, const Model::HostWithPathOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    HostWithPathOperationResponseReceivedHandler;
typedef std::function<void(const JSONRPC10Client*, const Model::JsonUnionsRequest&, const Model::JsonUnionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    JsonUnionsResponseReceivedHandler;
typedef std::function<void(const JSONRPC10Client*, const Model::NoInputAndNoOutputRequest&, const Model::NoInputAndNoOutputOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NoInputAndNoOutputResponseReceivedHandler;
typedef std::function<void(const JSONRPC10Client*, const Model::NoInputAndOutputRequest&, const Model::NoInputAndOutputOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NoInputAndOutputResponseReceivedHandler;
typedef std::function<void(const JSONRPC10Client*, const Model::PutWithContentEncodingRequest&, const Model::PutWithContentEncodingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutWithContentEncodingResponseReceivedHandler;
typedef std::function<void(const JSONRPC10Client*, const Model::SimpleScalarPropertiesRequest&, const Model::SimpleScalarPropertiesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SimpleScalarPropertiesResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace JSONRPC10
}  // namespace Aws
