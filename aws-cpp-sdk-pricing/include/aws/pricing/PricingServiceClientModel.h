/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/pricing/PricingErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/pricing/PricingEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PricingClient header */
#include <aws/pricing/model/DescribeServicesResult.h>
#include <aws/pricing/model/GetAttributeValuesResult.h>
#include <aws/pricing/model/GetProductsResult.h>
/* End of service model headers required in PricingClient header */

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

  namespace Pricing
  {
    using PricingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PricingEndpointProviderBase = Aws::Pricing::Endpoint::PricingEndpointProviderBase;
    using PricingEndpointProvider = Aws::Pricing::Endpoint::PricingEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PricingClient header */
      class DescribeServicesRequest;
      class GetAttributeValuesRequest;
      class GetProductsRequest;
      /* End of service model forward declarations required in PricingClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DescribeServicesResult, PricingError> DescribeServicesOutcome;
      typedef Aws::Utils::Outcome<GetAttributeValuesResult, PricingError> GetAttributeValuesOutcome;
      typedef Aws::Utils::Outcome<GetProductsResult, PricingError> GetProductsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DescribeServicesOutcome> DescribeServicesOutcomeCallable;
      typedef std::future<GetAttributeValuesOutcome> GetAttributeValuesOutcomeCallable;
      typedef std::future<GetProductsOutcome> GetProductsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PricingClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PricingClient*, const Model::DescribeServicesRequest&, const Model::DescribeServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServicesResponseReceivedHandler;
    typedef std::function<void(const PricingClient*, const Model::GetAttributeValuesRequest&, const Model::GetAttributeValuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAttributeValuesResponseReceivedHandler;
    typedef std::function<void(const PricingClient*, const Model::GetProductsRequest&, const Model::GetProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProductsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Pricing
} // namespace Aws
