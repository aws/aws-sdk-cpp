/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/meteringmarketplace/MarketplaceMeteringErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/meteringmarketplace/MarketplaceMeteringEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MarketplaceMeteringClient header */
#include <aws/meteringmarketplace/model/BatchMeterUsageResult.h>
#include <aws/meteringmarketplace/model/MeterUsageResult.h>
#include <aws/meteringmarketplace/model/RegisterUsageResult.h>
#include <aws/meteringmarketplace/model/ResolveCustomerResult.h>
/* End of service model headers required in MarketplaceMeteringClient header */

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

  namespace MarketplaceMetering
  {
    using MarketplaceMeteringClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MarketplaceMeteringEndpointProviderBase = Aws::MarketplaceMetering::Endpoint::MarketplaceMeteringEndpointProviderBase;
    using MarketplaceMeteringEndpointProvider = Aws::MarketplaceMetering::Endpoint::MarketplaceMeteringEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MarketplaceMeteringClient header */
      class BatchMeterUsageRequest;
      class MeterUsageRequest;
      class RegisterUsageRequest;
      class ResolveCustomerRequest;
      /* End of service model forward declarations required in MarketplaceMeteringClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchMeterUsageResult, MarketplaceMeteringError> BatchMeterUsageOutcome;
      typedef Aws::Utils::Outcome<MeterUsageResult, MarketplaceMeteringError> MeterUsageOutcome;
      typedef Aws::Utils::Outcome<RegisterUsageResult, MarketplaceMeteringError> RegisterUsageOutcome;
      typedef Aws::Utils::Outcome<ResolveCustomerResult, MarketplaceMeteringError> ResolveCustomerOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchMeterUsageOutcome> BatchMeterUsageOutcomeCallable;
      typedef std::future<MeterUsageOutcome> MeterUsageOutcomeCallable;
      typedef std::future<RegisterUsageOutcome> RegisterUsageOutcomeCallable;
      typedef std::future<ResolveCustomerOutcome> ResolveCustomerOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MarketplaceMeteringClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MarketplaceMeteringClient*, const Model::BatchMeterUsageRequest&, const Model::BatchMeterUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchMeterUsageResponseReceivedHandler;
    typedef std::function<void(const MarketplaceMeteringClient*, const Model::MeterUsageRequest&, const Model::MeterUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MeterUsageResponseReceivedHandler;
    typedef std::function<void(const MarketplaceMeteringClient*, const Model::RegisterUsageRequest&, const Model::RegisterUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterUsageResponseReceivedHandler;
    typedef std::function<void(const MarketplaceMeteringClient*, const Model::ResolveCustomerRequest&, const Model::ResolveCustomerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResolveCustomerResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MarketplaceMetering
} // namespace Aws
