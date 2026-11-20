/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/agent-discovery/AgentDiscoveryEndpointProvider.h>
#include <aws/agent-discovery/AgentDiscoveryErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in AgentDiscoveryClient header */
#include <aws/agent-discovery/model/SearchPublicRecordsRequest.h>
#include <aws/agent-discovery/model/SearchPublicRecordsResult.h>
/* End of service model headers required in AgentDiscoveryClient header */

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

namespace AgentDiscovery {
using AgentDiscoveryClientConfiguration = Aws::Client::GenericClientConfiguration;
using AgentDiscoveryEndpointProviderBase = Aws::AgentDiscovery::Endpoint::AgentDiscoveryEndpointProviderBase;
using AgentDiscoveryEndpointProvider = Aws::AgentDiscovery::Endpoint::AgentDiscoveryEndpointProvider;

namespace Model {
/* Service model forward declarations required in AgentDiscoveryClient header */
class SearchPublicRecordsRequest;
/* End of service model forward declarations required in AgentDiscoveryClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<SearchPublicRecordsResult, AgentDiscoveryError> SearchPublicRecordsOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<SearchPublicRecordsOutcome> SearchPublicRecordsOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class AgentDiscoveryClient;

/* Service model async handlers definitions */
typedef std::function<void(const AgentDiscoveryClient*, const Model::SearchPublicRecordsRequest&, const Model::SearchPublicRecordsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SearchPublicRecordsResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace AgentDiscovery
}  // namespace Aws
