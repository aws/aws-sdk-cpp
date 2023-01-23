/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/health/HealthErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/health/HealthEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in HealthClient header */
#include <aws/health/model/DescribeAffectedAccountsForOrganizationResult.h>
#include <aws/health/model/DescribeAffectedEntitiesResult.h>
#include <aws/health/model/DescribeAffectedEntitiesForOrganizationResult.h>
#include <aws/health/model/DescribeEntityAggregatesResult.h>
#include <aws/health/model/DescribeEventAggregatesResult.h>
#include <aws/health/model/DescribeEventDetailsResult.h>
#include <aws/health/model/DescribeEventDetailsForOrganizationResult.h>
#include <aws/health/model/DescribeEventTypesResult.h>
#include <aws/health/model/DescribeEventsResult.h>
#include <aws/health/model/DescribeEventsForOrganizationResult.h>
#include <aws/health/model/DescribeHealthServiceStatusForOrganizationResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in HealthClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace Health
  {
    using HealthClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using HealthEndpointProviderBase = Aws::Health::Endpoint::HealthEndpointProviderBase;
    using HealthEndpointProvider = Aws::Health::Endpoint::HealthEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in HealthClient header */
      class DescribeAffectedAccountsForOrganizationRequest;
      class DescribeAffectedEntitiesRequest;
      class DescribeAffectedEntitiesForOrganizationRequest;
      class DescribeEntityAggregatesRequest;
      class DescribeEventAggregatesRequest;
      class DescribeEventDetailsRequest;
      class DescribeEventDetailsForOrganizationRequest;
      class DescribeEventTypesRequest;
      class DescribeEventsRequest;
      class DescribeEventsForOrganizationRequest;
      /* End of service model forward declarations required in HealthClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DescribeAffectedAccountsForOrganizationResult, HealthError> DescribeAffectedAccountsForOrganizationOutcome;
      typedef Aws::Utils::Outcome<DescribeAffectedEntitiesResult, HealthError> DescribeAffectedEntitiesOutcome;
      typedef Aws::Utils::Outcome<DescribeAffectedEntitiesForOrganizationResult, HealthError> DescribeAffectedEntitiesForOrganizationOutcome;
      typedef Aws::Utils::Outcome<DescribeEntityAggregatesResult, HealthError> DescribeEntityAggregatesOutcome;
      typedef Aws::Utils::Outcome<DescribeEventAggregatesResult, HealthError> DescribeEventAggregatesOutcome;
      typedef Aws::Utils::Outcome<DescribeEventDetailsResult, HealthError> DescribeEventDetailsOutcome;
      typedef Aws::Utils::Outcome<DescribeEventDetailsForOrganizationResult, HealthError> DescribeEventDetailsForOrganizationOutcome;
      typedef Aws::Utils::Outcome<DescribeEventTypesResult, HealthError> DescribeEventTypesOutcome;
      typedef Aws::Utils::Outcome<DescribeEventsResult, HealthError> DescribeEventsOutcome;
      typedef Aws::Utils::Outcome<DescribeEventsForOrganizationResult, HealthError> DescribeEventsForOrganizationOutcome;
      typedef Aws::Utils::Outcome<DescribeHealthServiceStatusForOrganizationResult, HealthError> DescribeHealthServiceStatusForOrganizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, HealthError> DisableHealthServiceAccessForOrganizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, HealthError> EnableHealthServiceAccessForOrganizationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DescribeAffectedAccountsForOrganizationOutcome> DescribeAffectedAccountsForOrganizationOutcomeCallable;
      typedef std::future<DescribeAffectedEntitiesOutcome> DescribeAffectedEntitiesOutcomeCallable;
      typedef std::future<DescribeAffectedEntitiesForOrganizationOutcome> DescribeAffectedEntitiesForOrganizationOutcomeCallable;
      typedef std::future<DescribeEntityAggregatesOutcome> DescribeEntityAggregatesOutcomeCallable;
      typedef std::future<DescribeEventAggregatesOutcome> DescribeEventAggregatesOutcomeCallable;
      typedef std::future<DescribeEventDetailsOutcome> DescribeEventDetailsOutcomeCallable;
      typedef std::future<DescribeEventDetailsForOrganizationOutcome> DescribeEventDetailsForOrganizationOutcomeCallable;
      typedef std::future<DescribeEventTypesOutcome> DescribeEventTypesOutcomeCallable;
      typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
      typedef std::future<DescribeEventsForOrganizationOutcome> DescribeEventsForOrganizationOutcomeCallable;
      typedef std::future<DescribeHealthServiceStatusForOrganizationOutcome> DescribeHealthServiceStatusForOrganizationOutcomeCallable;
      typedef std::future<DisableHealthServiceAccessForOrganizationOutcome> DisableHealthServiceAccessForOrganizationOutcomeCallable;
      typedef std::future<EnableHealthServiceAccessForOrganizationOutcome> EnableHealthServiceAccessForOrganizationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class HealthClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const HealthClient*, const Model::DescribeAffectedAccountsForOrganizationRequest&, const Model::DescribeAffectedAccountsForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAffectedAccountsForOrganizationResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeAffectedEntitiesRequest&, const Model::DescribeAffectedEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAffectedEntitiesResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeAffectedEntitiesForOrganizationRequest&, const Model::DescribeAffectedEntitiesForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAffectedEntitiesForOrganizationResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeEntityAggregatesRequest&, const Model::DescribeEntityAggregatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEntityAggregatesResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeEventAggregatesRequest&, const Model::DescribeEventAggregatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventAggregatesResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeEventDetailsRequest&, const Model::DescribeEventDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventDetailsResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeEventDetailsForOrganizationRequest&, const Model::DescribeEventDetailsForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventDetailsForOrganizationResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeEventTypesRequest&, const Model::DescribeEventTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventTypesResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeEventsForOrganizationRequest&, const Model::DescribeEventsForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsForOrganizationResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeHealthServiceStatusForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHealthServiceStatusForOrganizationResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DisableHealthServiceAccessForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableHealthServiceAccessForOrganizationResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::EnableHealthServiceAccessForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableHealthServiceAccessForOrganizationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Health
} // namespace Aws
