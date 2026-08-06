/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/agent-registry/AgentRegistryEndpointProvider.h>
#include <aws/agent-registry/AgentRegistryErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in AgentRegistryClient header */
#include <aws/agent-registry/model/BatchGetDiscoverableRegistryRecordResult.h>
#include <aws/agent-registry/model/ListDiscoverableRegistryRecordsResult.h>
#include <aws/agent-registry/model/SearchDiscoverableRegistryRecordsResult.h>
/* End of service model headers required in AgentRegistryClient header */

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

namespace AgentRegistry {
using AgentRegistryClientConfiguration = Aws::Client::GenericClientConfiguration;
using AgentRegistryEndpointProviderBase = Aws::AgentRegistry::Endpoint::AgentRegistryEndpointProviderBase;
using AgentRegistryEndpointProvider = Aws::AgentRegistry::Endpoint::AgentRegistryEndpointProvider;

namespace Model {
/* Service model forward declarations required in AgentRegistryClient header */
class BatchGetDiscoverableRegistryRecordRequest;
class ListDiscoverableRegistryRecordsRequest;
class SearchDiscoverableRegistryRecordsRequest;
/* End of service model forward declarations required in AgentRegistryClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<BatchGetDiscoverableRegistryRecordResult, AgentRegistryError> BatchGetDiscoverableRegistryRecordOutcome;
typedef Aws::Utils::Outcome<ListDiscoverableRegistryRecordsResult, AgentRegistryError> ListDiscoverableRegistryRecordsOutcome;
typedef Aws::Utils::Outcome<SearchDiscoverableRegistryRecordsResult, AgentRegistryError> SearchDiscoverableRegistryRecordsOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<BatchGetDiscoverableRegistryRecordOutcome> BatchGetDiscoverableRegistryRecordOutcomeCallable;
typedef std::future<ListDiscoverableRegistryRecordsOutcome> ListDiscoverableRegistryRecordsOutcomeCallable;
typedef std::future<SearchDiscoverableRegistryRecordsOutcome> SearchDiscoverableRegistryRecordsOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class AgentRegistryClient;

/* Service model async handlers definitions */
typedef std::function<void(const AgentRegistryClient*, const Model::BatchGetDiscoverableRegistryRecordRequest&,
                           const Model::BatchGetDiscoverableRegistryRecordOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetDiscoverableRegistryRecordResponseReceivedHandler;
typedef std::function<void(const AgentRegistryClient*, const Model::ListDiscoverableRegistryRecordsRequest&,
                           const Model::ListDiscoverableRegistryRecordsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDiscoverableRegistryRecordsResponseReceivedHandler;
typedef std::function<void(const AgentRegistryClient*, const Model::SearchDiscoverableRegistryRecordsRequest&,
                           const Model::SearchDiscoverableRegistryRecordsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SearchDiscoverableRegistryRecordsResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace AgentRegistry
}  // namespace Aws
