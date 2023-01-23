/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/elastic-inference/ElasticInferenceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/elastic-inference/ElasticInferenceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ElasticInferenceClient header */
#include <aws/elastic-inference/model/DescribeAcceleratorOfferingsResult.h>
#include <aws/elastic-inference/model/DescribeAcceleratorTypesResult.h>
#include <aws/elastic-inference/model/DescribeAcceleratorsResult.h>
#include <aws/elastic-inference/model/ListTagsForResourceResult.h>
#include <aws/elastic-inference/model/TagResourceResult.h>
#include <aws/elastic-inference/model/UntagResourceResult.h>
/* End of service model headers required in ElasticInferenceClient header */

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

  namespace ElasticInference
  {
    using ElasticInferenceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ElasticInferenceEndpointProviderBase = Aws::ElasticInference::Endpoint::ElasticInferenceEndpointProviderBase;
    using ElasticInferenceEndpointProvider = Aws::ElasticInference::Endpoint::ElasticInferenceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ElasticInferenceClient header */
      class DescribeAcceleratorOfferingsRequest;
      class DescribeAcceleratorTypesRequest;
      class DescribeAcceleratorsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in ElasticInferenceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DescribeAcceleratorOfferingsResult, ElasticInferenceError> DescribeAcceleratorOfferingsOutcome;
      typedef Aws::Utils::Outcome<DescribeAcceleratorTypesResult, ElasticInferenceError> DescribeAcceleratorTypesOutcome;
      typedef Aws::Utils::Outcome<DescribeAcceleratorsResult, ElasticInferenceError> DescribeAcceleratorsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ElasticInferenceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ElasticInferenceError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ElasticInferenceError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DescribeAcceleratorOfferingsOutcome> DescribeAcceleratorOfferingsOutcomeCallable;
      typedef std::future<DescribeAcceleratorTypesOutcome> DescribeAcceleratorTypesOutcomeCallable;
      typedef std::future<DescribeAcceleratorsOutcome> DescribeAcceleratorsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ElasticInferenceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ElasticInferenceClient*, const Model::DescribeAcceleratorOfferingsRequest&, const Model::DescribeAcceleratorOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAcceleratorOfferingsResponseReceivedHandler;
    typedef std::function<void(const ElasticInferenceClient*, const Model::DescribeAcceleratorTypesRequest&, const Model::DescribeAcceleratorTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAcceleratorTypesResponseReceivedHandler;
    typedef std::function<void(const ElasticInferenceClient*, const Model::DescribeAcceleratorsRequest&, const Model::DescribeAcceleratorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAcceleratorsResponseReceivedHandler;
    typedef std::function<void(const ElasticInferenceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ElasticInferenceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ElasticInferenceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ElasticInference
} // namespace Aws
