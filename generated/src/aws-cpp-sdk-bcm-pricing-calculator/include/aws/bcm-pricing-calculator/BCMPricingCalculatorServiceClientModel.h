/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BCMPricingCalculatorClient header */
#include <aws/bcm-pricing-calculator/model/BatchCreateBillScenarioCommitmentModificationResult.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateBillScenarioUsageModificationResult.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateWorkloadEstimateUsageResult.h>
#include <aws/bcm-pricing-calculator/model/BatchDeleteBillScenarioCommitmentModificationResult.h>
#include <aws/bcm-pricing-calculator/model/BatchDeleteBillScenarioUsageModificationResult.h>
#include <aws/bcm-pricing-calculator/model/BatchDeleteWorkloadEstimateUsageResult.h>
#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioCommitmentModificationResult.h>
#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioUsageModificationResult.h>
#include <aws/bcm-pricing-calculator/model/BatchUpdateWorkloadEstimateUsageResult.h>
#include <aws/bcm-pricing-calculator/model/CreateBillEstimateResult.h>
#include <aws/bcm-pricing-calculator/model/CreateBillScenarioResult.h>
#include <aws/bcm-pricing-calculator/model/CreateWorkloadEstimateResult.h>
#include <aws/bcm-pricing-calculator/model/DeleteBillEstimateResult.h>
#include <aws/bcm-pricing-calculator/model/DeleteBillScenarioResult.h>
#include <aws/bcm-pricing-calculator/model/DeleteWorkloadEstimateResult.h>
#include <aws/bcm-pricing-calculator/model/GetBillEstimateResult.h>
#include <aws/bcm-pricing-calculator/model/GetBillScenarioResult.h>
#include <aws/bcm-pricing-calculator/model/GetPreferencesResult.h>
#include <aws/bcm-pricing-calculator/model/GetWorkloadEstimateResult.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateCommitmentsResult.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateInputCommitmentModificationsResult.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateInputUsageModificationsResult.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateLineItemsResult.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimatesResult.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenarioCommitmentModificationsResult.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenarioUsageModificationsResult.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenariosResult.h>
#include <aws/bcm-pricing-calculator/model/ListTagsForResourceResult.h>
#include <aws/bcm-pricing-calculator/model/ListWorkloadEstimateUsageResult.h>
#include <aws/bcm-pricing-calculator/model/ListWorkloadEstimatesResult.h>
#include <aws/bcm-pricing-calculator/model/TagResourceResult.h>
#include <aws/bcm-pricing-calculator/model/UntagResourceResult.h>
#include <aws/bcm-pricing-calculator/model/UpdateBillEstimateResult.h>
#include <aws/bcm-pricing-calculator/model/UpdateBillScenarioResult.h>
#include <aws/bcm-pricing-calculator/model/UpdatePreferencesResult.h>
#include <aws/bcm-pricing-calculator/model/UpdateWorkloadEstimateResult.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimatesRequest.h>
#include <aws/bcm-pricing-calculator/model/GetPreferencesRequest.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenariosRequest.h>
#include <aws/bcm-pricing-calculator/model/ListWorkloadEstimatesRequest.h>
#include <aws/bcm-pricing-calculator/model/UpdatePreferencesRequest.h>
/* End of service model headers required in BCMPricingCalculatorClient header */

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

  namespace BCMPricingCalculator
  {
    using BCMPricingCalculatorClientConfiguration = Aws::Client::GenericClientConfiguration;
    using BCMPricingCalculatorEndpointProviderBase = Aws::BCMPricingCalculator::Endpoint::BCMPricingCalculatorEndpointProviderBase;
    using BCMPricingCalculatorEndpointProvider = Aws::BCMPricingCalculator::Endpoint::BCMPricingCalculatorEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BCMPricingCalculatorClient header */
      class BatchCreateBillScenarioCommitmentModificationRequest;
      class BatchCreateBillScenarioUsageModificationRequest;
      class BatchCreateWorkloadEstimateUsageRequest;
      class BatchDeleteBillScenarioCommitmentModificationRequest;
      class BatchDeleteBillScenarioUsageModificationRequest;
      class BatchDeleteWorkloadEstimateUsageRequest;
      class BatchUpdateBillScenarioCommitmentModificationRequest;
      class BatchUpdateBillScenarioUsageModificationRequest;
      class BatchUpdateWorkloadEstimateUsageRequest;
      class CreateBillEstimateRequest;
      class CreateBillScenarioRequest;
      class CreateWorkloadEstimateRequest;
      class DeleteBillEstimateRequest;
      class DeleteBillScenarioRequest;
      class DeleteWorkloadEstimateRequest;
      class GetBillEstimateRequest;
      class GetBillScenarioRequest;
      class GetPreferencesRequest;
      class GetWorkloadEstimateRequest;
      class ListBillEstimateCommitmentsRequest;
      class ListBillEstimateInputCommitmentModificationsRequest;
      class ListBillEstimateInputUsageModificationsRequest;
      class ListBillEstimateLineItemsRequest;
      class ListBillEstimatesRequest;
      class ListBillScenarioCommitmentModificationsRequest;
      class ListBillScenarioUsageModificationsRequest;
      class ListBillScenariosRequest;
      class ListTagsForResourceRequest;
      class ListWorkloadEstimateUsageRequest;
      class ListWorkloadEstimatesRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateBillEstimateRequest;
      class UpdateBillScenarioRequest;
      class UpdatePreferencesRequest;
      class UpdateWorkloadEstimateRequest;
      /* End of service model forward declarations required in BCMPricingCalculatorClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchCreateBillScenarioCommitmentModificationResult, BCMPricingCalculatorError> BatchCreateBillScenarioCommitmentModificationOutcome;
      typedef Aws::Utils::Outcome<BatchCreateBillScenarioUsageModificationResult, BCMPricingCalculatorError> BatchCreateBillScenarioUsageModificationOutcome;
      typedef Aws::Utils::Outcome<BatchCreateWorkloadEstimateUsageResult, BCMPricingCalculatorError> BatchCreateWorkloadEstimateUsageOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteBillScenarioCommitmentModificationResult, BCMPricingCalculatorError> BatchDeleteBillScenarioCommitmentModificationOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteBillScenarioUsageModificationResult, BCMPricingCalculatorError> BatchDeleteBillScenarioUsageModificationOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteWorkloadEstimateUsageResult, BCMPricingCalculatorError> BatchDeleteWorkloadEstimateUsageOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateBillScenarioCommitmentModificationResult, BCMPricingCalculatorError> BatchUpdateBillScenarioCommitmentModificationOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateBillScenarioUsageModificationResult, BCMPricingCalculatorError> BatchUpdateBillScenarioUsageModificationOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateWorkloadEstimateUsageResult, BCMPricingCalculatorError> BatchUpdateWorkloadEstimateUsageOutcome;
      typedef Aws::Utils::Outcome<CreateBillEstimateResult, BCMPricingCalculatorError> CreateBillEstimateOutcome;
      typedef Aws::Utils::Outcome<CreateBillScenarioResult, BCMPricingCalculatorError> CreateBillScenarioOutcome;
      typedef Aws::Utils::Outcome<CreateWorkloadEstimateResult, BCMPricingCalculatorError> CreateWorkloadEstimateOutcome;
      typedef Aws::Utils::Outcome<DeleteBillEstimateResult, BCMPricingCalculatorError> DeleteBillEstimateOutcome;
      typedef Aws::Utils::Outcome<DeleteBillScenarioResult, BCMPricingCalculatorError> DeleteBillScenarioOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkloadEstimateResult, BCMPricingCalculatorError> DeleteWorkloadEstimateOutcome;
      typedef Aws::Utils::Outcome<GetBillEstimateResult, BCMPricingCalculatorError> GetBillEstimateOutcome;
      typedef Aws::Utils::Outcome<GetBillScenarioResult, BCMPricingCalculatorError> GetBillScenarioOutcome;
      typedef Aws::Utils::Outcome<GetPreferencesResult, BCMPricingCalculatorError> GetPreferencesOutcome;
      typedef Aws::Utils::Outcome<GetWorkloadEstimateResult, BCMPricingCalculatorError> GetWorkloadEstimateOutcome;
      typedef Aws::Utils::Outcome<ListBillEstimateCommitmentsResult, BCMPricingCalculatorError> ListBillEstimateCommitmentsOutcome;
      typedef Aws::Utils::Outcome<ListBillEstimateInputCommitmentModificationsResult, BCMPricingCalculatorError> ListBillEstimateInputCommitmentModificationsOutcome;
      typedef Aws::Utils::Outcome<ListBillEstimateInputUsageModificationsResult, BCMPricingCalculatorError> ListBillEstimateInputUsageModificationsOutcome;
      typedef Aws::Utils::Outcome<ListBillEstimateLineItemsResult, BCMPricingCalculatorError> ListBillEstimateLineItemsOutcome;
      typedef Aws::Utils::Outcome<ListBillEstimatesResult, BCMPricingCalculatorError> ListBillEstimatesOutcome;
      typedef Aws::Utils::Outcome<ListBillScenarioCommitmentModificationsResult, BCMPricingCalculatorError> ListBillScenarioCommitmentModificationsOutcome;
      typedef Aws::Utils::Outcome<ListBillScenarioUsageModificationsResult, BCMPricingCalculatorError> ListBillScenarioUsageModificationsOutcome;
      typedef Aws::Utils::Outcome<ListBillScenariosResult, BCMPricingCalculatorError> ListBillScenariosOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BCMPricingCalculatorError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWorkloadEstimateUsageResult, BCMPricingCalculatorError> ListWorkloadEstimateUsageOutcome;
      typedef Aws::Utils::Outcome<ListWorkloadEstimatesResult, BCMPricingCalculatorError> ListWorkloadEstimatesOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BCMPricingCalculatorError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BCMPricingCalculatorError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateBillEstimateResult, BCMPricingCalculatorError> UpdateBillEstimateOutcome;
      typedef Aws::Utils::Outcome<UpdateBillScenarioResult, BCMPricingCalculatorError> UpdateBillScenarioOutcome;
      typedef Aws::Utils::Outcome<UpdatePreferencesResult, BCMPricingCalculatorError> UpdatePreferencesOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkloadEstimateResult, BCMPricingCalculatorError> UpdateWorkloadEstimateOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchCreateBillScenarioCommitmentModificationOutcome> BatchCreateBillScenarioCommitmentModificationOutcomeCallable;
      typedef std::future<BatchCreateBillScenarioUsageModificationOutcome> BatchCreateBillScenarioUsageModificationOutcomeCallable;
      typedef std::future<BatchCreateWorkloadEstimateUsageOutcome> BatchCreateWorkloadEstimateUsageOutcomeCallable;
      typedef std::future<BatchDeleteBillScenarioCommitmentModificationOutcome> BatchDeleteBillScenarioCommitmentModificationOutcomeCallable;
      typedef std::future<BatchDeleteBillScenarioUsageModificationOutcome> BatchDeleteBillScenarioUsageModificationOutcomeCallable;
      typedef std::future<BatchDeleteWorkloadEstimateUsageOutcome> BatchDeleteWorkloadEstimateUsageOutcomeCallable;
      typedef std::future<BatchUpdateBillScenarioCommitmentModificationOutcome> BatchUpdateBillScenarioCommitmentModificationOutcomeCallable;
      typedef std::future<BatchUpdateBillScenarioUsageModificationOutcome> BatchUpdateBillScenarioUsageModificationOutcomeCallable;
      typedef std::future<BatchUpdateWorkloadEstimateUsageOutcome> BatchUpdateWorkloadEstimateUsageOutcomeCallable;
      typedef std::future<CreateBillEstimateOutcome> CreateBillEstimateOutcomeCallable;
      typedef std::future<CreateBillScenarioOutcome> CreateBillScenarioOutcomeCallable;
      typedef std::future<CreateWorkloadEstimateOutcome> CreateWorkloadEstimateOutcomeCallable;
      typedef std::future<DeleteBillEstimateOutcome> DeleteBillEstimateOutcomeCallable;
      typedef std::future<DeleteBillScenarioOutcome> DeleteBillScenarioOutcomeCallable;
      typedef std::future<DeleteWorkloadEstimateOutcome> DeleteWorkloadEstimateOutcomeCallable;
      typedef std::future<GetBillEstimateOutcome> GetBillEstimateOutcomeCallable;
      typedef std::future<GetBillScenarioOutcome> GetBillScenarioOutcomeCallable;
      typedef std::future<GetPreferencesOutcome> GetPreferencesOutcomeCallable;
      typedef std::future<GetWorkloadEstimateOutcome> GetWorkloadEstimateOutcomeCallable;
      typedef std::future<ListBillEstimateCommitmentsOutcome> ListBillEstimateCommitmentsOutcomeCallable;
      typedef std::future<ListBillEstimateInputCommitmentModificationsOutcome> ListBillEstimateInputCommitmentModificationsOutcomeCallable;
      typedef std::future<ListBillEstimateInputUsageModificationsOutcome> ListBillEstimateInputUsageModificationsOutcomeCallable;
      typedef std::future<ListBillEstimateLineItemsOutcome> ListBillEstimateLineItemsOutcomeCallable;
      typedef std::future<ListBillEstimatesOutcome> ListBillEstimatesOutcomeCallable;
      typedef std::future<ListBillScenarioCommitmentModificationsOutcome> ListBillScenarioCommitmentModificationsOutcomeCallable;
      typedef std::future<ListBillScenarioUsageModificationsOutcome> ListBillScenarioUsageModificationsOutcomeCallable;
      typedef std::future<ListBillScenariosOutcome> ListBillScenariosOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWorkloadEstimateUsageOutcome> ListWorkloadEstimateUsageOutcomeCallable;
      typedef std::future<ListWorkloadEstimatesOutcome> ListWorkloadEstimatesOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateBillEstimateOutcome> UpdateBillEstimateOutcomeCallable;
      typedef std::future<UpdateBillScenarioOutcome> UpdateBillScenarioOutcomeCallable;
      typedef std::future<UpdatePreferencesOutcome> UpdatePreferencesOutcomeCallable;
      typedef std::future<UpdateWorkloadEstimateOutcome> UpdateWorkloadEstimateOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BCMPricingCalculatorClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::BatchCreateBillScenarioCommitmentModificationRequest&, const Model::BatchCreateBillScenarioCommitmentModificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateBillScenarioCommitmentModificationResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::BatchCreateBillScenarioUsageModificationRequest&, const Model::BatchCreateBillScenarioUsageModificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateBillScenarioUsageModificationResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::BatchCreateWorkloadEstimateUsageRequest&, const Model::BatchCreateWorkloadEstimateUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateWorkloadEstimateUsageResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::BatchDeleteBillScenarioCommitmentModificationRequest&, const Model::BatchDeleteBillScenarioCommitmentModificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteBillScenarioCommitmentModificationResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::BatchDeleteBillScenarioUsageModificationRequest&, const Model::BatchDeleteBillScenarioUsageModificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteBillScenarioUsageModificationResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::BatchDeleteWorkloadEstimateUsageRequest&, const Model::BatchDeleteWorkloadEstimateUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteWorkloadEstimateUsageResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::BatchUpdateBillScenarioCommitmentModificationRequest&, const Model::BatchUpdateBillScenarioCommitmentModificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateBillScenarioCommitmentModificationResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::BatchUpdateBillScenarioUsageModificationRequest&, const Model::BatchUpdateBillScenarioUsageModificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateBillScenarioUsageModificationResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::BatchUpdateWorkloadEstimateUsageRequest&, const Model::BatchUpdateWorkloadEstimateUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateWorkloadEstimateUsageResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::CreateBillEstimateRequest&, const Model::CreateBillEstimateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBillEstimateResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::CreateBillScenarioRequest&, const Model::CreateBillScenarioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBillScenarioResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::CreateWorkloadEstimateRequest&, const Model::CreateWorkloadEstimateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkloadEstimateResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::DeleteBillEstimateRequest&, const Model::DeleteBillEstimateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBillEstimateResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::DeleteBillScenarioRequest&, const Model::DeleteBillScenarioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBillScenarioResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::DeleteWorkloadEstimateRequest&, const Model::DeleteWorkloadEstimateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkloadEstimateResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::GetBillEstimateRequest&, const Model::GetBillEstimateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBillEstimateResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::GetBillScenarioRequest&, const Model::GetBillScenarioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBillScenarioResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::GetPreferencesRequest&, const Model::GetPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPreferencesResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::GetWorkloadEstimateRequest&, const Model::GetWorkloadEstimateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkloadEstimateResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::ListBillEstimateCommitmentsRequest&, const Model::ListBillEstimateCommitmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBillEstimateCommitmentsResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::ListBillEstimateInputCommitmentModificationsRequest&, const Model::ListBillEstimateInputCommitmentModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBillEstimateInputCommitmentModificationsResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::ListBillEstimateInputUsageModificationsRequest&, const Model::ListBillEstimateInputUsageModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBillEstimateInputUsageModificationsResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::ListBillEstimateLineItemsRequest&, const Model::ListBillEstimateLineItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBillEstimateLineItemsResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::ListBillEstimatesRequest&, const Model::ListBillEstimatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBillEstimatesResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::ListBillScenarioCommitmentModificationsRequest&, const Model::ListBillScenarioCommitmentModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBillScenarioCommitmentModificationsResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::ListBillScenarioUsageModificationsRequest&, const Model::ListBillScenarioUsageModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBillScenarioUsageModificationsResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::ListBillScenariosRequest&, const Model::ListBillScenariosOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBillScenariosResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::ListWorkloadEstimateUsageRequest&, const Model::ListWorkloadEstimateUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkloadEstimateUsageResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::ListWorkloadEstimatesRequest&, const Model::ListWorkloadEstimatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkloadEstimatesResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::UpdateBillEstimateRequest&, const Model::UpdateBillEstimateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBillEstimateResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::UpdateBillScenarioRequest&, const Model::UpdateBillScenarioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBillScenarioResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::UpdatePreferencesRequest&, const Model::UpdatePreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePreferencesResponseReceivedHandler;
    typedef std::function<void(const BCMPricingCalculatorClient*, const Model::UpdateWorkloadEstimateRequest&, const Model::UpdateWorkloadEstimateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkloadEstimateResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BCMPricingCalculator
} // namespace Aws
