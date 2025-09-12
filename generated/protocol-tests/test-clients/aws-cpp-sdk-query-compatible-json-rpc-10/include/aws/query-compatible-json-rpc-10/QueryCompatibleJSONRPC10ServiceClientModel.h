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
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10EndpointProvider.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10Errors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in QueryCompatibleJSONRPC10Client header */
#include <aws/core/NoResult.h>
#include <aws/query-compatible-json-rpc-10/model/QueryCompatibleOperationRequest.h>
/* End of service model headers required in QueryCompatibleJSONRPC10Client header */

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

namespace QueryCompatibleJSONRPC10 {
using QueryCompatibleJSONRPC10ClientConfiguration = Aws::Client::GenericClientConfiguration;
using QueryCompatibleJSONRPC10EndpointProviderBase = Aws::QueryCompatibleJSONRPC10::Endpoint::QueryCompatibleJSONRPC10EndpointProviderBase;
using QueryCompatibleJSONRPC10EndpointProvider = Aws::QueryCompatibleJSONRPC10::Endpoint::QueryCompatibleJSONRPC10EndpointProvider;

namespace Model {
/* Service model forward declarations required in QueryCompatibleJSONRPC10Client header */
class QueryCompatibleOperationRequest;
/* End of service model forward declarations required in QueryCompatibleJSONRPC10Client header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<Aws::NoResult, QueryCompatibleJSONRPC10Error> QueryCompatibleOperationOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<QueryCompatibleOperationOutcome> QueryCompatibleOperationOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class QueryCompatibleJSONRPC10Client;

/* Service model async handlers definitions */
typedef std::function<void(const QueryCompatibleJSONRPC10Client*, const Model::QueryCompatibleOperationRequest&,
                           const Model::QueryCompatibleOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    QueryCompatibleOperationResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace QueryCompatibleJSONRPC10
}  // namespace Aws
