/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/snowball/SnowballErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/snowball/SnowballEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SnowballClient header */
#include <aws/snowball/model/CancelClusterResult.h>
#include <aws/snowball/model/CancelJobResult.h>
#include <aws/snowball/model/CreateAddressResult.h>
#include <aws/snowball/model/CreateClusterResult.h>
#include <aws/snowball/model/CreateJobResult.h>
#include <aws/snowball/model/CreateLongTermPricingResult.h>
#include <aws/snowball/model/CreateReturnShippingLabelResult.h>
#include <aws/snowball/model/DescribeAddressResult.h>
#include <aws/snowball/model/DescribeAddressesResult.h>
#include <aws/snowball/model/DescribeClusterResult.h>
#include <aws/snowball/model/DescribeJobResult.h>
#include <aws/snowball/model/DescribeReturnShippingLabelResult.h>
#include <aws/snowball/model/GetJobManifestResult.h>
#include <aws/snowball/model/GetJobUnlockCodeResult.h>
#include <aws/snowball/model/GetSnowballUsageResult.h>
#include <aws/snowball/model/GetSoftwareUpdatesResult.h>
#include <aws/snowball/model/ListClusterJobsResult.h>
#include <aws/snowball/model/ListClustersResult.h>
#include <aws/snowball/model/ListCompatibleImagesResult.h>
#include <aws/snowball/model/ListJobsResult.h>
#include <aws/snowball/model/ListLongTermPricingResult.h>
#include <aws/snowball/model/UpdateClusterResult.h>
#include <aws/snowball/model/UpdateJobResult.h>
#include <aws/snowball/model/UpdateJobShipmentStateResult.h>
#include <aws/snowball/model/UpdateLongTermPricingResult.h>
/* End of service model headers required in SnowballClient header */

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

  namespace Snowball
  {
    using SnowballClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SnowballEndpointProviderBase = Aws::Snowball::Endpoint::SnowballEndpointProviderBase;
    using SnowballEndpointProvider = Aws::Snowball::Endpoint::SnowballEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SnowballClient header */
      class CancelClusterRequest;
      class CancelJobRequest;
      class CreateAddressRequest;
      class CreateClusterRequest;
      class CreateJobRequest;
      class CreateLongTermPricingRequest;
      class CreateReturnShippingLabelRequest;
      class DescribeAddressRequest;
      class DescribeAddressesRequest;
      class DescribeClusterRequest;
      class DescribeJobRequest;
      class DescribeReturnShippingLabelRequest;
      class GetJobManifestRequest;
      class GetJobUnlockCodeRequest;
      class GetSnowballUsageRequest;
      class GetSoftwareUpdatesRequest;
      class ListClusterJobsRequest;
      class ListClustersRequest;
      class ListCompatibleImagesRequest;
      class ListJobsRequest;
      class ListLongTermPricingRequest;
      class UpdateClusterRequest;
      class UpdateJobRequest;
      class UpdateJobShipmentStateRequest;
      class UpdateLongTermPricingRequest;
      /* End of service model forward declarations required in SnowballClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelClusterResult, SnowballError> CancelClusterOutcome;
      typedef Aws::Utils::Outcome<CancelJobResult, SnowballError> CancelJobOutcome;
      typedef Aws::Utils::Outcome<CreateAddressResult, SnowballError> CreateAddressOutcome;
      typedef Aws::Utils::Outcome<CreateClusterResult, SnowballError> CreateClusterOutcome;
      typedef Aws::Utils::Outcome<CreateJobResult, SnowballError> CreateJobOutcome;
      typedef Aws::Utils::Outcome<CreateLongTermPricingResult, SnowballError> CreateLongTermPricingOutcome;
      typedef Aws::Utils::Outcome<CreateReturnShippingLabelResult, SnowballError> CreateReturnShippingLabelOutcome;
      typedef Aws::Utils::Outcome<DescribeAddressResult, SnowballError> DescribeAddressOutcome;
      typedef Aws::Utils::Outcome<DescribeAddressesResult, SnowballError> DescribeAddressesOutcome;
      typedef Aws::Utils::Outcome<DescribeClusterResult, SnowballError> DescribeClusterOutcome;
      typedef Aws::Utils::Outcome<DescribeJobResult, SnowballError> DescribeJobOutcome;
      typedef Aws::Utils::Outcome<DescribeReturnShippingLabelResult, SnowballError> DescribeReturnShippingLabelOutcome;
      typedef Aws::Utils::Outcome<GetJobManifestResult, SnowballError> GetJobManifestOutcome;
      typedef Aws::Utils::Outcome<GetJobUnlockCodeResult, SnowballError> GetJobUnlockCodeOutcome;
      typedef Aws::Utils::Outcome<GetSnowballUsageResult, SnowballError> GetSnowballUsageOutcome;
      typedef Aws::Utils::Outcome<GetSoftwareUpdatesResult, SnowballError> GetSoftwareUpdatesOutcome;
      typedef Aws::Utils::Outcome<ListClusterJobsResult, SnowballError> ListClusterJobsOutcome;
      typedef Aws::Utils::Outcome<ListClustersResult, SnowballError> ListClustersOutcome;
      typedef Aws::Utils::Outcome<ListCompatibleImagesResult, SnowballError> ListCompatibleImagesOutcome;
      typedef Aws::Utils::Outcome<ListJobsResult, SnowballError> ListJobsOutcome;
      typedef Aws::Utils::Outcome<ListLongTermPricingResult, SnowballError> ListLongTermPricingOutcome;
      typedef Aws::Utils::Outcome<UpdateClusterResult, SnowballError> UpdateClusterOutcome;
      typedef Aws::Utils::Outcome<UpdateJobResult, SnowballError> UpdateJobOutcome;
      typedef Aws::Utils::Outcome<UpdateJobShipmentStateResult, SnowballError> UpdateJobShipmentStateOutcome;
      typedef Aws::Utils::Outcome<UpdateLongTermPricingResult, SnowballError> UpdateLongTermPricingOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelClusterOutcome> CancelClusterOutcomeCallable;
      typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
      typedef std::future<CreateAddressOutcome> CreateAddressOutcomeCallable;
      typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
      typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
      typedef std::future<CreateLongTermPricingOutcome> CreateLongTermPricingOutcomeCallable;
      typedef std::future<CreateReturnShippingLabelOutcome> CreateReturnShippingLabelOutcomeCallable;
      typedef std::future<DescribeAddressOutcome> DescribeAddressOutcomeCallable;
      typedef std::future<DescribeAddressesOutcome> DescribeAddressesOutcomeCallable;
      typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
      typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
      typedef std::future<DescribeReturnShippingLabelOutcome> DescribeReturnShippingLabelOutcomeCallable;
      typedef std::future<GetJobManifestOutcome> GetJobManifestOutcomeCallable;
      typedef std::future<GetJobUnlockCodeOutcome> GetJobUnlockCodeOutcomeCallable;
      typedef std::future<GetSnowballUsageOutcome> GetSnowballUsageOutcomeCallable;
      typedef std::future<GetSoftwareUpdatesOutcome> GetSoftwareUpdatesOutcomeCallable;
      typedef std::future<ListClusterJobsOutcome> ListClusterJobsOutcomeCallable;
      typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
      typedef std::future<ListCompatibleImagesOutcome> ListCompatibleImagesOutcomeCallable;
      typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
      typedef std::future<ListLongTermPricingOutcome> ListLongTermPricingOutcomeCallable;
      typedef std::future<UpdateClusterOutcome> UpdateClusterOutcomeCallable;
      typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
      typedef std::future<UpdateJobShipmentStateOutcome> UpdateJobShipmentStateOutcomeCallable;
      typedef std::future<UpdateLongTermPricingOutcome> UpdateLongTermPricingOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SnowballClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SnowballClient*, const Model::CancelClusterRequest&, const Model::CancelClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelClusterResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::CreateAddressRequest&, const Model::CreateAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAddressResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::CreateLongTermPricingRequest&, const Model::CreateLongTermPricingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLongTermPricingResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::CreateReturnShippingLabelRequest&, const Model::CreateReturnShippingLabelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReturnShippingLabelResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::DescribeAddressRequest&, const Model::DescribeAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAddressResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::DescribeAddressesRequest&, const Model::DescribeAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAddressesResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::DescribeClusterRequest&, const Model::DescribeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::DescribeJobRequest&, const Model::DescribeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::DescribeReturnShippingLabelRequest&, const Model::DescribeReturnShippingLabelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReturnShippingLabelResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::GetJobManifestRequest&, const Model::GetJobManifestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobManifestResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::GetJobUnlockCodeRequest&, const Model::GetJobUnlockCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobUnlockCodeResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::GetSnowballUsageRequest&, const Model::GetSnowballUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSnowballUsageResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::GetSoftwareUpdatesRequest&, const Model::GetSoftwareUpdatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSoftwareUpdatesResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::ListClusterJobsRequest&, const Model::ListClusterJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClusterJobsResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::ListCompatibleImagesRequest&, const Model::ListCompatibleImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCompatibleImagesResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::ListLongTermPricingRequest&, const Model::ListLongTermPricingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLongTermPricingResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::UpdateClusterRequest&, const Model::UpdateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::UpdateJobRequest&, const Model::UpdateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::UpdateJobShipmentStateRequest&, const Model::UpdateJobShipmentStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobShipmentStateResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::UpdateLongTermPricingRequest&, const Model::UpdateLongTermPricingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLongTermPricingResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Snowball
} // namespace Aws
