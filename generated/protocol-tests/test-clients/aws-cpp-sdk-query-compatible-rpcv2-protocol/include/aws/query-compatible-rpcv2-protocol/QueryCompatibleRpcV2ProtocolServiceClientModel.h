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
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2ProtocolEndpointProvider.h>
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2ProtocolErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in QueryCompatibleRpcV2ProtocolClient header */
#include <aws/core/NoResult.h>
#include <aws/query-compatible-rpcv2-protocol/model/QueryCompatibleOperationRequest.h>
/* End of service model headers required in QueryCompatibleRpcV2ProtocolClient header */

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

namespace QueryCompatibleRpcV2Protocol {
using QueryCompatibleRpcV2ProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using QueryCompatibleRpcV2ProtocolEndpointProviderBase =
    Aws::QueryCompatibleRpcV2Protocol::Endpoint::QueryCompatibleRpcV2ProtocolEndpointProviderBase;
using QueryCompatibleRpcV2ProtocolEndpointProvider =
    Aws::QueryCompatibleRpcV2Protocol::Endpoint::QueryCompatibleRpcV2ProtocolEndpointProvider;

namespace Model {
/* Service model forward declarations required in QueryCompatibleRpcV2ProtocolClient header */
class QueryCompatibleOperationRequest;
/* End of service model forward declarations required in QueryCompatibleRpcV2ProtocolClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<Aws::NoResult, QueryCompatibleRpcV2ProtocolError> QueryCompatibleOperationOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<QueryCompatibleOperationOutcome> QueryCompatibleOperationOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class QueryCompatibleRpcV2ProtocolClient;

/* Service model async handlers definitions */
typedef std::function<void(const QueryCompatibleRpcV2ProtocolClient*, const Model::QueryCompatibleOperationRequest&,
                           const Model::QueryCompatibleOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryCompatibleOperationResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace QueryCompatibleRpcV2Protocol
}  // namespace Aws
