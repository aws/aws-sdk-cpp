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
#include <aws/rpcv2protocol/RpcV2ProtocolEndpointProvider.h>
#include <aws/rpcv2protocol/RpcV2ProtocolErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in RpcV2ProtocolClient header */
#include <aws/core/NoResult.h>
#include <aws/rpcv2protocol/model/EmptyInputOutputRequest.h>
#include <aws/rpcv2protocol/model/EmptyInputOutputResult.h>
#include <aws/rpcv2protocol/model/Float16Request.h>
#include <aws/rpcv2protocol/model/Float16Result.h>
#include <aws/rpcv2protocol/model/FractionalSecondsRequest.h>
#include <aws/rpcv2protocol/model/FractionalSecondsResult.h>
#include <aws/rpcv2protocol/model/GreetingWithErrorsRequest.h>
#include <aws/rpcv2protocol/model/GreetingWithErrorsResult.h>
#include <aws/rpcv2protocol/model/NoInputOutputRequest.h>
#include <aws/rpcv2protocol/model/OptionalInputOutputRequest.h>
#include <aws/rpcv2protocol/model/OptionalInputOutputResult.h>
#include <aws/rpcv2protocol/model/RecursiveShapesRequest.h>
#include <aws/rpcv2protocol/model/RecursiveShapesResult.h>
#include <aws/rpcv2protocol/model/RpcV2CborDenseMapsRequest.h>
#include <aws/rpcv2protocol/model/RpcV2CborDenseMapsResult.h>
#include <aws/rpcv2protocol/model/RpcV2CborListsRequest.h>
#include <aws/rpcv2protocol/model/RpcV2CborListsResult.h>
#include <aws/rpcv2protocol/model/SimpleScalarPropertiesRequest.h>
#include <aws/rpcv2protocol/model/SimpleScalarPropertiesResult.h>
/* End of service model headers required in RpcV2ProtocolClient header */

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

namespace RpcV2Protocol {
using RpcV2ProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using RpcV2ProtocolEndpointProviderBase = Aws::RpcV2Protocol::Endpoint::RpcV2ProtocolEndpointProviderBase;
using RpcV2ProtocolEndpointProvider = Aws::RpcV2Protocol::Endpoint::RpcV2ProtocolEndpointProvider;

namespace Model {
/* Service model forward declarations required in RpcV2ProtocolClient header */
class EmptyInputOutputRequest;
class Float16Request;
class FractionalSecondsRequest;
class GreetingWithErrorsRequest;
class NoInputOutputRequest;
class OptionalInputOutputRequest;
class RecursiveShapesRequest;
class RpcV2CborDenseMapsRequest;
class RpcV2CborListsRequest;
class SimpleScalarPropertiesRequest;
/* End of service model forward declarations required in RpcV2ProtocolClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<EmptyInputOutputResult, RpcV2ProtocolError> EmptyInputOutputOutcome;
typedef Aws::Utils::Outcome<Float16Result, RpcV2ProtocolError> Float16Outcome;
typedef Aws::Utils::Outcome<FractionalSecondsResult, RpcV2ProtocolError> FractionalSecondsOutcome;
typedef Aws::Utils::Outcome<GreetingWithErrorsResult, RpcV2ProtocolError> GreetingWithErrorsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, RpcV2ProtocolError> NoInputOutputOutcome;
typedef Aws::Utils::Outcome<OptionalInputOutputResult, RpcV2ProtocolError> OptionalInputOutputOutcome;
typedef Aws::Utils::Outcome<RecursiveShapesResult, RpcV2ProtocolError> RecursiveShapesOutcome;
typedef Aws::Utils::Outcome<RpcV2CborDenseMapsResult, RpcV2ProtocolError> RpcV2CborDenseMapsOutcome;
typedef Aws::Utils::Outcome<RpcV2CborListsResult, RpcV2ProtocolError> RpcV2CborListsOutcome;
typedef Aws::Utils::Outcome<SimpleScalarPropertiesResult, RpcV2ProtocolError> SimpleScalarPropertiesOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<EmptyInputOutputOutcome> EmptyInputOutputOutcomeCallable;
typedef std::future<Float16Outcome> Float16OutcomeCallable;
typedef std::future<FractionalSecondsOutcome> FractionalSecondsOutcomeCallable;
typedef std::future<GreetingWithErrorsOutcome> GreetingWithErrorsOutcomeCallable;
typedef std::future<NoInputOutputOutcome> NoInputOutputOutcomeCallable;
typedef std::future<OptionalInputOutputOutcome> OptionalInputOutputOutcomeCallable;
typedef std::future<RecursiveShapesOutcome> RecursiveShapesOutcomeCallable;
typedef std::future<RpcV2CborDenseMapsOutcome> RpcV2CborDenseMapsOutcomeCallable;
typedef std::future<RpcV2CborListsOutcome> RpcV2CborListsOutcomeCallable;
typedef std::future<SimpleScalarPropertiesOutcome> SimpleScalarPropertiesOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class RpcV2ProtocolClient;

/* Service model async handlers definitions */
typedef std::function<void(const RpcV2ProtocolClient*, const Model::EmptyInputOutputRequest&, const Model::EmptyInputOutputOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EmptyInputOutputResponseReceivedHandler;
typedef std::function<void(const RpcV2ProtocolClient*, const Model::Float16Request&, const Model::Float16Outcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    Float16ResponseReceivedHandler;
typedef std::function<void(const RpcV2ProtocolClient*, const Model::FractionalSecondsRequest&, const Model::FractionalSecondsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    FractionalSecondsResponseReceivedHandler;
typedef std::function<void(const RpcV2ProtocolClient*, const Model::GreetingWithErrorsRequest&, const Model::GreetingWithErrorsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GreetingWithErrorsResponseReceivedHandler;
typedef std::function<void(const RpcV2ProtocolClient*, const Model::NoInputOutputRequest&, const Model::NoInputOutputOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NoInputOutputResponseReceivedHandler;
typedef std::function<void(const RpcV2ProtocolClient*, const Model::OptionalInputOutputRequest&, const Model::OptionalInputOutputOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    OptionalInputOutputResponseReceivedHandler;
typedef std::function<void(const RpcV2ProtocolClient*, const Model::RecursiveShapesRequest&, const Model::RecursiveShapesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RecursiveShapesResponseReceivedHandler;
typedef std::function<void(const RpcV2ProtocolClient*, const Model::RpcV2CborDenseMapsRequest&, const Model::RpcV2CborDenseMapsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RpcV2CborDenseMapsResponseReceivedHandler;
typedef std::function<void(const RpcV2ProtocolClient*, const Model::RpcV2CborListsRequest&, const Model::RpcV2CborListsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RpcV2CborListsResponseReceivedHandler;
typedef std::function<void(const RpcV2ProtocolClient*, const Model::SimpleScalarPropertiesRequest&,
                           const Model::SimpleScalarPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SimpleScalarPropertiesResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace RpcV2Protocol
}  // namespace Aws
