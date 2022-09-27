﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/marketplace-catalog/MarketplaceCatalogErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MarketplaceCatalogClient header */
#include <aws/marketplace-catalog/model/CancelChangeSetResult.h>
#include <aws/marketplace-catalog/model/DescribeChangeSetResult.h>
#include <aws/marketplace-catalog/model/DescribeEntityResult.h>
#include <aws/marketplace-catalog/model/ListChangeSetsResult.h>
#include <aws/marketplace-catalog/model/ListEntitiesResult.h>
#include <aws/marketplace-catalog/model/StartChangeSetResult.h>
/* End of service model headers required in MarketplaceCatalogClient header */

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

  namespace MarketplaceCatalog
  {
    namespace Model
    {
      /* Service model forward declarations required in MarketplaceCatalogClient header */
      class CancelChangeSetRequest;
      class DescribeChangeSetRequest;
      class DescribeEntityRequest;
      class ListChangeSetsRequest;
      class ListEntitiesRequest;
      class StartChangeSetRequest;
      /* End of service model forward declarations required in MarketplaceCatalogClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelChangeSetResult, MarketplaceCatalogError> CancelChangeSetOutcome;
      typedef Aws::Utils::Outcome<DescribeChangeSetResult, MarketplaceCatalogError> DescribeChangeSetOutcome;
      typedef Aws::Utils::Outcome<DescribeEntityResult, MarketplaceCatalogError> DescribeEntityOutcome;
      typedef Aws::Utils::Outcome<ListChangeSetsResult, MarketplaceCatalogError> ListChangeSetsOutcome;
      typedef Aws::Utils::Outcome<ListEntitiesResult, MarketplaceCatalogError> ListEntitiesOutcome;
      typedef Aws::Utils::Outcome<StartChangeSetResult, MarketplaceCatalogError> StartChangeSetOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelChangeSetOutcome> CancelChangeSetOutcomeCallable;
      typedef std::future<DescribeChangeSetOutcome> DescribeChangeSetOutcomeCallable;
      typedef std::future<DescribeEntityOutcome> DescribeEntityOutcomeCallable;
      typedef std::future<ListChangeSetsOutcome> ListChangeSetsOutcomeCallable;
      typedef std::future<ListEntitiesOutcome> ListEntitiesOutcomeCallable;
      typedef std::future<StartChangeSetOutcome> StartChangeSetOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MarketplaceCatalogClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MarketplaceCatalogClient*, const Model::CancelChangeSetRequest&, const Model::CancelChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelChangeSetResponseReceivedHandler;
    typedef std::function<void(const MarketplaceCatalogClient*, const Model::DescribeChangeSetRequest&, const Model::DescribeChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChangeSetResponseReceivedHandler;
    typedef std::function<void(const MarketplaceCatalogClient*, const Model::DescribeEntityRequest&, const Model::DescribeEntityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEntityResponseReceivedHandler;
    typedef std::function<void(const MarketplaceCatalogClient*, const Model::ListChangeSetsRequest&, const Model::ListChangeSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChangeSetsResponseReceivedHandler;
    typedef std::function<void(const MarketplaceCatalogClient*, const Model::ListEntitiesRequest&, const Model::ListEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitiesResponseReceivedHandler;
    typedef std::function<void(const MarketplaceCatalogClient*, const Model::StartChangeSetRequest&, const Model::StartChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartChangeSetResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MarketplaceCatalog
} // namespace Aws
