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
#include <aws/health/HealthEndpointProvider.h>
#include <aws/health/HealthErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in HealthClient header */
#include <aws/core/NoResult.h>
#include <aws/health/model/ConfigureTagsForOrganizationResult.h>
#include <aws/health/model/ConfigureTagsResult.h>
#include <aws/health/model/DescribeAffectedAccountsForOrganizationResult.h>
#include <aws/health/model/DescribeAffectedEntitiesForOrganizationRequest.h>
#include <aws/health/model/DescribeAffectedEntitiesForOrganizationResult.h>
#include <aws/health/model/DescribeAffectedEntitiesResult.h>
#include <aws/health/model/DescribeEntityAggregatesForOrganizationResult.h>
#include <aws/health/model/DescribeEntityAggregatesRequest.h>
#include <aws/health/model/DescribeEntityAggregatesResult.h>
#include <aws/health/model/DescribeEventAggregatesResult.h>
#include <aws/health/model/DescribeEventDetailsForOrganizationResult.h>
#include <aws/health/model/DescribeEventDetailsResult.h>
#include <aws/health/model/DescribeEventTypesRequest.h>
#include <aws/health/model/DescribeEventTypesResult.h>
#include <aws/health/model/DescribeEventsForOrganizationRequest.h>
#include <aws/health/model/DescribeEventsForOrganizationResult.h>
#include <aws/health/model/DescribeEventsRequest.h>
#include <aws/health/model/DescribeEventsResult.h>
#include <aws/health/model/DescribeHealthServiceStatusForOrganizationRequest.h>
#include <aws/health/model/DescribeHealthServiceStatusForOrganizationResult.h>
#include <aws/health/model/DescribeServiceLifecycleRequest.h>
#include <aws/health/model/DescribeServiceLifecycleResult.h>
#include <aws/health/model/DescribeTagKeysForOrganizationRequest.h>
#include <aws/health/model/DescribeTagKeysForOrganizationResult.h>
#include <aws/health/model/DescribeTagKeysRequest.h>
#include <aws/health/model/DescribeTagKeysResult.h>
#include <aws/health/model/DescribeTagsForOrganizationRequest.h>
#include <aws/health/model/DescribeTagsForOrganizationResult.h>
#include <aws/health/model/DescribeTagsOnboardingStatusForOrganizationRequest.h>
#include <aws/health/model/DescribeTagsOnboardingStatusForOrganizationResult.h>
#include <aws/health/model/DescribeTagsOnboardingStatusRequest.h>
#include <aws/health/model/DescribeTagsOnboardingStatusResult.h>
#include <aws/health/model/DescribeTagsRequest.h>
#include <aws/health/model/DescribeTagsResult.h>
#include <aws/health/model/DisableHealthServiceAccessForOrganizationRequest.h>
#include <aws/health/model/DisableTagsForOrganizationRequest.h>
#include <aws/health/model/DisableTagsRequest.h>
#include <aws/health/model/EnableHealthServiceAccessForOrganizationRequest.h>
#include <aws/health/model/EnableTagsForOrganizationRequest.h>
#include <aws/health/model/EnableTagsRequest.h>
/* End of service model headers required in HealthClient header */

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

namespace Health {
using HealthClientConfiguration = Aws::Client::GenericClientConfiguration;
using HealthEndpointProviderBase = Aws::Health::Endpoint::HealthEndpointProviderBase;
using HealthEndpointProvider = Aws::Health::Endpoint::HealthEndpointProvider;

namespace Model {
/* Service model forward declarations required in HealthClient header */
class ConfigureTagsRequest;
class ConfigureTagsForOrganizationRequest;
class DescribeAffectedAccountsForOrganizationRequest;
class DescribeAffectedEntitiesRequest;
class DescribeAffectedEntitiesForOrganizationRequest;
class DescribeEntityAggregatesRequest;
class DescribeEntityAggregatesForOrganizationRequest;
class DescribeEventAggregatesRequest;
class DescribeEventDetailsRequest;
class DescribeEventDetailsForOrganizationRequest;
class DescribeEventTypesRequest;
class DescribeEventsRequest;
class DescribeEventsForOrganizationRequest;
class DescribeHealthServiceStatusForOrganizationRequest;
class DescribeServiceLifecycleRequest;
class DescribeTagKeysRequest;
class DescribeTagKeysForOrganizationRequest;
class DescribeTagsRequest;
class DescribeTagsForOrganizationRequest;
class DescribeTagsOnboardingStatusRequest;
class DescribeTagsOnboardingStatusForOrganizationRequest;
class DisableHealthServiceAccessForOrganizationRequest;
class DisableTagsRequest;
class DisableTagsForOrganizationRequest;
class EnableHealthServiceAccessForOrganizationRequest;
class EnableTagsRequest;
class EnableTagsForOrganizationRequest;
/* End of service model forward declarations required in HealthClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<ConfigureTagsResult, HealthError> ConfigureTagsOutcome;
typedef Aws::Utils::Outcome<ConfigureTagsForOrganizationResult, HealthError> ConfigureTagsForOrganizationOutcome;
typedef Aws::Utils::Outcome<DescribeAffectedAccountsForOrganizationResult, HealthError> DescribeAffectedAccountsForOrganizationOutcome;
typedef Aws::Utils::Outcome<DescribeAffectedEntitiesResult, HealthError> DescribeAffectedEntitiesOutcome;
typedef Aws::Utils::Outcome<DescribeAffectedEntitiesForOrganizationResult, HealthError> DescribeAffectedEntitiesForOrganizationOutcome;
typedef Aws::Utils::Outcome<DescribeEntityAggregatesResult, HealthError> DescribeEntityAggregatesOutcome;
typedef Aws::Utils::Outcome<DescribeEntityAggregatesForOrganizationResult, HealthError> DescribeEntityAggregatesForOrganizationOutcome;
typedef Aws::Utils::Outcome<DescribeEventAggregatesResult, HealthError> DescribeEventAggregatesOutcome;
typedef Aws::Utils::Outcome<DescribeEventDetailsResult, HealthError> DescribeEventDetailsOutcome;
typedef Aws::Utils::Outcome<DescribeEventDetailsForOrganizationResult, HealthError> DescribeEventDetailsForOrganizationOutcome;
typedef Aws::Utils::Outcome<DescribeEventTypesResult, HealthError> DescribeEventTypesOutcome;
typedef Aws::Utils::Outcome<DescribeEventsResult, HealthError> DescribeEventsOutcome;
typedef Aws::Utils::Outcome<DescribeEventsForOrganizationResult, HealthError> DescribeEventsForOrganizationOutcome;
typedef Aws::Utils::Outcome<DescribeHealthServiceStatusForOrganizationResult, HealthError>
    DescribeHealthServiceStatusForOrganizationOutcome;
typedef Aws::Utils::Outcome<DescribeServiceLifecycleResult, HealthError> DescribeServiceLifecycleOutcome;
typedef Aws::Utils::Outcome<DescribeTagKeysResult, HealthError> DescribeTagKeysOutcome;
typedef Aws::Utils::Outcome<DescribeTagKeysForOrganizationResult, HealthError> DescribeTagKeysForOrganizationOutcome;
typedef Aws::Utils::Outcome<DescribeTagsResult, HealthError> DescribeTagsOutcome;
typedef Aws::Utils::Outcome<DescribeTagsForOrganizationResult, HealthError> DescribeTagsForOrganizationOutcome;
typedef Aws::Utils::Outcome<DescribeTagsOnboardingStatusResult, HealthError> DescribeTagsOnboardingStatusOutcome;
typedef Aws::Utils::Outcome<DescribeTagsOnboardingStatusForOrganizationResult, HealthError>
    DescribeTagsOnboardingStatusForOrganizationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, HealthError> DisableHealthServiceAccessForOrganizationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, HealthError> DisableTagsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, HealthError> DisableTagsForOrganizationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, HealthError> EnableHealthServiceAccessForOrganizationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, HealthError> EnableTagsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, HealthError> EnableTagsForOrganizationOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<ConfigureTagsOutcome> ConfigureTagsOutcomeCallable;
typedef std::future<ConfigureTagsForOrganizationOutcome> ConfigureTagsForOrganizationOutcomeCallable;
typedef std::future<DescribeAffectedAccountsForOrganizationOutcome> DescribeAffectedAccountsForOrganizationOutcomeCallable;
typedef std::future<DescribeAffectedEntitiesOutcome> DescribeAffectedEntitiesOutcomeCallable;
typedef std::future<DescribeAffectedEntitiesForOrganizationOutcome> DescribeAffectedEntitiesForOrganizationOutcomeCallable;
typedef std::future<DescribeEntityAggregatesOutcome> DescribeEntityAggregatesOutcomeCallable;
typedef std::future<DescribeEntityAggregatesForOrganizationOutcome> DescribeEntityAggregatesForOrganizationOutcomeCallable;
typedef std::future<DescribeEventAggregatesOutcome> DescribeEventAggregatesOutcomeCallable;
typedef std::future<DescribeEventDetailsOutcome> DescribeEventDetailsOutcomeCallable;
typedef std::future<DescribeEventDetailsForOrganizationOutcome> DescribeEventDetailsForOrganizationOutcomeCallable;
typedef std::future<DescribeEventTypesOutcome> DescribeEventTypesOutcomeCallable;
typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
typedef std::future<DescribeEventsForOrganizationOutcome> DescribeEventsForOrganizationOutcomeCallable;
typedef std::future<DescribeHealthServiceStatusForOrganizationOutcome> DescribeHealthServiceStatusForOrganizationOutcomeCallable;
typedef std::future<DescribeServiceLifecycleOutcome> DescribeServiceLifecycleOutcomeCallable;
typedef std::future<DescribeTagKeysOutcome> DescribeTagKeysOutcomeCallable;
typedef std::future<DescribeTagKeysForOrganizationOutcome> DescribeTagKeysForOrganizationOutcomeCallable;
typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
typedef std::future<DescribeTagsForOrganizationOutcome> DescribeTagsForOrganizationOutcomeCallable;
typedef std::future<DescribeTagsOnboardingStatusOutcome> DescribeTagsOnboardingStatusOutcomeCallable;
typedef std::future<DescribeTagsOnboardingStatusForOrganizationOutcome> DescribeTagsOnboardingStatusForOrganizationOutcomeCallable;
typedef std::future<DisableHealthServiceAccessForOrganizationOutcome> DisableHealthServiceAccessForOrganizationOutcomeCallable;
typedef std::future<DisableTagsOutcome> DisableTagsOutcomeCallable;
typedef std::future<DisableTagsForOrganizationOutcome> DisableTagsForOrganizationOutcomeCallable;
typedef std::future<EnableHealthServiceAccessForOrganizationOutcome> EnableHealthServiceAccessForOrganizationOutcomeCallable;
typedef std::future<EnableTagsOutcome> EnableTagsOutcomeCallable;
typedef std::future<EnableTagsForOrganizationOutcome> EnableTagsForOrganizationOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class HealthClient;

/* Service model async handlers definitions */
typedef std::function<void(const HealthClient*, const Model::ConfigureTagsRequest&, const Model::ConfigureTagsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ConfigureTagsResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::ConfigureTagsForOrganizationRequest&,
                           const Model::ConfigureTagsForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ConfigureTagsForOrganizationResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeAffectedAccountsForOrganizationRequest&,
                           const Model::DescribeAffectedAccountsForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeAffectedAccountsForOrganizationResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeAffectedEntitiesRequest&,
                           const Model::DescribeAffectedEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeAffectedEntitiesResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeAffectedEntitiesForOrganizationRequest&,
                           const Model::DescribeAffectedEntitiesForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeAffectedEntitiesForOrganizationResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeEntityAggregatesRequest&,
                           const Model::DescribeEntityAggregatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeEntityAggregatesResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeEntityAggregatesForOrganizationRequest&,
                           const Model::DescribeEntityAggregatesForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeEntityAggregatesForOrganizationResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeEventAggregatesRequest&, const Model::DescribeEventAggregatesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeEventAggregatesResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeEventDetailsRequest&, const Model::DescribeEventDetailsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeEventDetailsResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeEventDetailsForOrganizationRequest&,
                           const Model::DescribeEventDetailsForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeEventDetailsForOrganizationResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeEventTypesRequest&, const Model::DescribeEventTypesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeEventTypesResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeEventsResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeEventsForOrganizationRequest&,
                           const Model::DescribeEventsForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeEventsForOrganizationResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeHealthServiceStatusForOrganizationRequest&,
                           const Model::DescribeHealthServiceStatusForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeHealthServiceStatusForOrganizationResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeServiceLifecycleRequest&,
                           const Model::DescribeServiceLifecycleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeServiceLifecycleResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeTagKeysRequest&, const Model::DescribeTagKeysOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeTagKeysResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeTagKeysForOrganizationRequest&,
                           const Model::DescribeTagKeysForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeTagKeysForOrganizationResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeTagsResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeTagsForOrganizationRequest&,
                           const Model::DescribeTagsForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeTagsForOrganizationResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeTagsOnboardingStatusRequest&,
                           const Model::DescribeTagsOnboardingStatusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeTagsOnboardingStatusResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DescribeTagsOnboardingStatusForOrganizationRequest&,
                           const Model::DescribeTagsOnboardingStatusForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeTagsOnboardingStatusForOrganizationResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DisableHealthServiceAccessForOrganizationRequest&,
                           const Model::DisableHealthServiceAccessForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisableHealthServiceAccessForOrganizationResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DisableTagsRequest&, const Model::DisableTagsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisableTagsResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::DisableTagsForOrganizationRequest&,
                           const Model::DisableTagsForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisableTagsForOrganizationResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::EnableHealthServiceAccessForOrganizationRequest&,
                           const Model::EnableHealthServiceAccessForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EnableHealthServiceAccessForOrganizationResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::EnableTagsRequest&, const Model::EnableTagsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EnableTagsResponseReceivedHandler;
typedef std::function<void(const HealthClient*, const Model::EnableTagsForOrganizationRequest&,
                           const Model::EnableTagsForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EnableTagsForOrganizationResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace Health
}  // namespace Aws
