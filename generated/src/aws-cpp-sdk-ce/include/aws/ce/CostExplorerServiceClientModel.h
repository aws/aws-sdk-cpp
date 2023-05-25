/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ce/CostExplorerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ce/CostExplorerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CostExplorerClient header */
#include <aws/ce/model/CreateAnomalyMonitorResult.h>
#include <aws/ce/model/CreateAnomalySubscriptionResult.h>
#include <aws/ce/model/CreateCostCategoryDefinitionResult.h>
#include <aws/ce/model/DeleteAnomalyMonitorResult.h>
#include <aws/ce/model/DeleteAnomalySubscriptionResult.h>
#include <aws/ce/model/DeleteCostCategoryDefinitionResult.h>
#include <aws/ce/model/DescribeCostCategoryDefinitionResult.h>
#include <aws/ce/model/GetAnomaliesResult.h>
#include <aws/ce/model/GetAnomalyMonitorsResult.h>
#include <aws/ce/model/GetAnomalySubscriptionsResult.h>
#include <aws/ce/model/GetCostAndUsageResult.h>
#include <aws/ce/model/GetCostAndUsageWithResourcesResult.h>
#include <aws/ce/model/GetCostCategoriesResult.h>
#include <aws/ce/model/GetCostForecastResult.h>
#include <aws/ce/model/GetDimensionValuesResult.h>
#include <aws/ce/model/GetReservationCoverageResult.h>
#include <aws/ce/model/GetReservationPurchaseRecommendationResult.h>
#include <aws/ce/model/GetReservationUtilizationResult.h>
#include <aws/ce/model/GetRightsizingRecommendationResult.h>
#include <aws/ce/model/GetSavingsPlansCoverageResult.h>
#include <aws/ce/model/GetSavingsPlansPurchaseRecommendationResult.h>
#include <aws/ce/model/GetSavingsPlansUtilizationResult.h>
#include <aws/ce/model/GetSavingsPlansUtilizationDetailsResult.h>
#include <aws/ce/model/GetTagsResult.h>
#include <aws/ce/model/GetUsageForecastResult.h>
#include <aws/ce/model/ListCostAllocationTagsResult.h>
#include <aws/ce/model/ListCostCategoryDefinitionsResult.h>
#include <aws/ce/model/ListSavingsPlansPurchaseRecommendationGenerationResult.h>
#include <aws/ce/model/ListTagsForResourceResult.h>
#include <aws/ce/model/ProvideAnomalyFeedbackResult.h>
#include <aws/ce/model/StartSavingsPlansPurchaseRecommendationGenerationResult.h>
#include <aws/ce/model/TagResourceResult.h>
#include <aws/ce/model/UntagResourceResult.h>
#include <aws/ce/model/UpdateAnomalyMonitorResult.h>
#include <aws/ce/model/UpdateAnomalySubscriptionResult.h>
#include <aws/ce/model/UpdateCostAllocationTagsStatusResult.h>
#include <aws/ce/model/UpdateCostCategoryDefinitionResult.h>
/* End of service model headers required in CostExplorerClient header */

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

  namespace CostExplorer
  {
    using CostExplorerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CostExplorerEndpointProviderBase = Aws::CostExplorer::Endpoint::CostExplorerEndpointProviderBase;
    using CostExplorerEndpointProvider = Aws::CostExplorer::Endpoint::CostExplorerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CostExplorerClient header */
      class CreateAnomalyMonitorRequest;
      class CreateAnomalySubscriptionRequest;
      class CreateCostCategoryDefinitionRequest;
      class DeleteAnomalyMonitorRequest;
      class DeleteAnomalySubscriptionRequest;
      class DeleteCostCategoryDefinitionRequest;
      class DescribeCostCategoryDefinitionRequest;
      class GetAnomaliesRequest;
      class GetAnomalyMonitorsRequest;
      class GetAnomalySubscriptionsRequest;
      class GetCostAndUsageRequest;
      class GetCostAndUsageWithResourcesRequest;
      class GetCostCategoriesRequest;
      class GetCostForecastRequest;
      class GetDimensionValuesRequest;
      class GetReservationCoverageRequest;
      class GetReservationPurchaseRecommendationRequest;
      class GetReservationUtilizationRequest;
      class GetRightsizingRecommendationRequest;
      class GetSavingsPlansCoverageRequest;
      class GetSavingsPlansPurchaseRecommendationRequest;
      class GetSavingsPlansUtilizationRequest;
      class GetSavingsPlansUtilizationDetailsRequest;
      class GetTagsRequest;
      class GetUsageForecastRequest;
      class ListCostAllocationTagsRequest;
      class ListCostCategoryDefinitionsRequest;
      class ListSavingsPlansPurchaseRecommendationGenerationRequest;
      class ListTagsForResourceRequest;
      class ProvideAnomalyFeedbackRequest;
      class StartSavingsPlansPurchaseRecommendationGenerationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAnomalyMonitorRequest;
      class UpdateAnomalySubscriptionRequest;
      class UpdateCostAllocationTagsStatusRequest;
      class UpdateCostCategoryDefinitionRequest;
      /* End of service model forward declarations required in CostExplorerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAnomalyMonitorResult, CostExplorerError> CreateAnomalyMonitorOutcome;
      typedef Aws::Utils::Outcome<CreateAnomalySubscriptionResult, CostExplorerError> CreateAnomalySubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateCostCategoryDefinitionResult, CostExplorerError> CreateCostCategoryDefinitionOutcome;
      typedef Aws::Utils::Outcome<DeleteAnomalyMonitorResult, CostExplorerError> DeleteAnomalyMonitorOutcome;
      typedef Aws::Utils::Outcome<DeleteAnomalySubscriptionResult, CostExplorerError> DeleteAnomalySubscriptionOutcome;
      typedef Aws::Utils::Outcome<DeleteCostCategoryDefinitionResult, CostExplorerError> DeleteCostCategoryDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeCostCategoryDefinitionResult, CostExplorerError> DescribeCostCategoryDefinitionOutcome;
      typedef Aws::Utils::Outcome<GetAnomaliesResult, CostExplorerError> GetAnomaliesOutcome;
      typedef Aws::Utils::Outcome<GetAnomalyMonitorsResult, CostExplorerError> GetAnomalyMonitorsOutcome;
      typedef Aws::Utils::Outcome<GetAnomalySubscriptionsResult, CostExplorerError> GetAnomalySubscriptionsOutcome;
      typedef Aws::Utils::Outcome<GetCostAndUsageResult, CostExplorerError> GetCostAndUsageOutcome;
      typedef Aws::Utils::Outcome<GetCostAndUsageWithResourcesResult, CostExplorerError> GetCostAndUsageWithResourcesOutcome;
      typedef Aws::Utils::Outcome<GetCostCategoriesResult, CostExplorerError> GetCostCategoriesOutcome;
      typedef Aws::Utils::Outcome<GetCostForecastResult, CostExplorerError> GetCostForecastOutcome;
      typedef Aws::Utils::Outcome<GetDimensionValuesResult, CostExplorerError> GetDimensionValuesOutcome;
      typedef Aws::Utils::Outcome<GetReservationCoverageResult, CostExplorerError> GetReservationCoverageOutcome;
      typedef Aws::Utils::Outcome<GetReservationPurchaseRecommendationResult, CostExplorerError> GetReservationPurchaseRecommendationOutcome;
      typedef Aws::Utils::Outcome<GetReservationUtilizationResult, CostExplorerError> GetReservationUtilizationOutcome;
      typedef Aws::Utils::Outcome<GetRightsizingRecommendationResult, CostExplorerError> GetRightsizingRecommendationOutcome;
      typedef Aws::Utils::Outcome<GetSavingsPlansCoverageResult, CostExplorerError> GetSavingsPlansCoverageOutcome;
      typedef Aws::Utils::Outcome<GetSavingsPlansPurchaseRecommendationResult, CostExplorerError> GetSavingsPlansPurchaseRecommendationOutcome;
      typedef Aws::Utils::Outcome<GetSavingsPlansUtilizationResult, CostExplorerError> GetSavingsPlansUtilizationOutcome;
      typedef Aws::Utils::Outcome<GetSavingsPlansUtilizationDetailsResult, CostExplorerError> GetSavingsPlansUtilizationDetailsOutcome;
      typedef Aws::Utils::Outcome<GetTagsResult, CostExplorerError> GetTagsOutcome;
      typedef Aws::Utils::Outcome<GetUsageForecastResult, CostExplorerError> GetUsageForecastOutcome;
      typedef Aws::Utils::Outcome<ListCostAllocationTagsResult, CostExplorerError> ListCostAllocationTagsOutcome;
      typedef Aws::Utils::Outcome<ListCostCategoryDefinitionsResult, CostExplorerError> ListCostCategoryDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListSavingsPlansPurchaseRecommendationGenerationResult, CostExplorerError> ListSavingsPlansPurchaseRecommendationGenerationOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CostExplorerError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ProvideAnomalyFeedbackResult, CostExplorerError> ProvideAnomalyFeedbackOutcome;
      typedef Aws::Utils::Outcome<StartSavingsPlansPurchaseRecommendationGenerationResult, CostExplorerError> StartSavingsPlansPurchaseRecommendationGenerationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CostExplorerError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CostExplorerError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAnomalyMonitorResult, CostExplorerError> UpdateAnomalyMonitorOutcome;
      typedef Aws::Utils::Outcome<UpdateAnomalySubscriptionResult, CostExplorerError> UpdateAnomalySubscriptionOutcome;
      typedef Aws::Utils::Outcome<UpdateCostAllocationTagsStatusResult, CostExplorerError> UpdateCostAllocationTagsStatusOutcome;
      typedef Aws::Utils::Outcome<UpdateCostCategoryDefinitionResult, CostExplorerError> UpdateCostCategoryDefinitionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAnomalyMonitorOutcome> CreateAnomalyMonitorOutcomeCallable;
      typedef std::future<CreateAnomalySubscriptionOutcome> CreateAnomalySubscriptionOutcomeCallable;
      typedef std::future<CreateCostCategoryDefinitionOutcome> CreateCostCategoryDefinitionOutcomeCallable;
      typedef std::future<DeleteAnomalyMonitorOutcome> DeleteAnomalyMonitorOutcomeCallable;
      typedef std::future<DeleteAnomalySubscriptionOutcome> DeleteAnomalySubscriptionOutcomeCallable;
      typedef std::future<DeleteCostCategoryDefinitionOutcome> DeleteCostCategoryDefinitionOutcomeCallable;
      typedef std::future<DescribeCostCategoryDefinitionOutcome> DescribeCostCategoryDefinitionOutcomeCallable;
      typedef std::future<GetAnomaliesOutcome> GetAnomaliesOutcomeCallable;
      typedef std::future<GetAnomalyMonitorsOutcome> GetAnomalyMonitorsOutcomeCallable;
      typedef std::future<GetAnomalySubscriptionsOutcome> GetAnomalySubscriptionsOutcomeCallable;
      typedef std::future<GetCostAndUsageOutcome> GetCostAndUsageOutcomeCallable;
      typedef std::future<GetCostAndUsageWithResourcesOutcome> GetCostAndUsageWithResourcesOutcomeCallable;
      typedef std::future<GetCostCategoriesOutcome> GetCostCategoriesOutcomeCallable;
      typedef std::future<GetCostForecastOutcome> GetCostForecastOutcomeCallable;
      typedef std::future<GetDimensionValuesOutcome> GetDimensionValuesOutcomeCallable;
      typedef std::future<GetReservationCoverageOutcome> GetReservationCoverageOutcomeCallable;
      typedef std::future<GetReservationPurchaseRecommendationOutcome> GetReservationPurchaseRecommendationOutcomeCallable;
      typedef std::future<GetReservationUtilizationOutcome> GetReservationUtilizationOutcomeCallable;
      typedef std::future<GetRightsizingRecommendationOutcome> GetRightsizingRecommendationOutcomeCallable;
      typedef std::future<GetSavingsPlansCoverageOutcome> GetSavingsPlansCoverageOutcomeCallable;
      typedef std::future<GetSavingsPlansPurchaseRecommendationOutcome> GetSavingsPlansPurchaseRecommendationOutcomeCallable;
      typedef std::future<GetSavingsPlansUtilizationOutcome> GetSavingsPlansUtilizationOutcomeCallable;
      typedef std::future<GetSavingsPlansUtilizationDetailsOutcome> GetSavingsPlansUtilizationDetailsOutcomeCallable;
      typedef std::future<GetTagsOutcome> GetTagsOutcomeCallable;
      typedef std::future<GetUsageForecastOutcome> GetUsageForecastOutcomeCallable;
      typedef std::future<ListCostAllocationTagsOutcome> ListCostAllocationTagsOutcomeCallable;
      typedef std::future<ListCostCategoryDefinitionsOutcome> ListCostCategoryDefinitionsOutcomeCallable;
      typedef std::future<ListSavingsPlansPurchaseRecommendationGenerationOutcome> ListSavingsPlansPurchaseRecommendationGenerationOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ProvideAnomalyFeedbackOutcome> ProvideAnomalyFeedbackOutcomeCallable;
      typedef std::future<StartSavingsPlansPurchaseRecommendationGenerationOutcome> StartSavingsPlansPurchaseRecommendationGenerationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAnomalyMonitorOutcome> UpdateAnomalyMonitorOutcomeCallable;
      typedef std::future<UpdateAnomalySubscriptionOutcome> UpdateAnomalySubscriptionOutcomeCallable;
      typedef std::future<UpdateCostAllocationTagsStatusOutcome> UpdateCostAllocationTagsStatusOutcomeCallable;
      typedef std::future<UpdateCostCategoryDefinitionOutcome> UpdateCostCategoryDefinitionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CostExplorerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CostExplorerClient*, const Model::CreateAnomalyMonitorRequest&, const Model::CreateAnomalyMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAnomalyMonitorResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::CreateAnomalySubscriptionRequest&, const Model::CreateAnomalySubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAnomalySubscriptionResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::CreateCostCategoryDefinitionRequest&, const Model::CreateCostCategoryDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCostCategoryDefinitionResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::DeleteAnomalyMonitorRequest&, const Model::DeleteAnomalyMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAnomalyMonitorResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::DeleteAnomalySubscriptionRequest&, const Model::DeleteAnomalySubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAnomalySubscriptionResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::DeleteCostCategoryDefinitionRequest&, const Model::DeleteCostCategoryDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCostCategoryDefinitionResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::DescribeCostCategoryDefinitionRequest&, const Model::DescribeCostCategoryDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCostCategoryDefinitionResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetAnomaliesRequest&, const Model::GetAnomaliesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnomaliesResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetAnomalyMonitorsRequest&, const Model::GetAnomalyMonitorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnomalyMonitorsResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetAnomalySubscriptionsRequest&, const Model::GetAnomalySubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnomalySubscriptionsResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetCostAndUsageRequest&, const Model::GetCostAndUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCostAndUsageResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetCostAndUsageWithResourcesRequest&, const Model::GetCostAndUsageWithResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCostAndUsageWithResourcesResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetCostCategoriesRequest&, const Model::GetCostCategoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCostCategoriesResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetCostForecastRequest&, const Model::GetCostForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCostForecastResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetDimensionValuesRequest&, const Model::GetDimensionValuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDimensionValuesResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetReservationCoverageRequest&, const Model::GetReservationCoverageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReservationCoverageResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetReservationPurchaseRecommendationRequest&, const Model::GetReservationPurchaseRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReservationPurchaseRecommendationResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetReservationUtilizationRequest&, const Model::GetReservationUtilizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReservationUtilizationResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetRightsizingRecommendationRequest&, const Model::GetRightsizingRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRightsizingRecommendationResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetSavingsPlansCoverageRequest&, const Model::GetSavingsPlansCoverageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSavingsPlansCoverageResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetSavingsPlansPurchaseRecommendationRequest&, const Model::GetSavingsPlansPurchaseRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSavingsPlansPurchaseRecommendationResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetSavingsPlansUtilizationRequest&, const Model::GetSavingsPlansUtilizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSavingsPlansUtilizationResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetSavingsPlansUtilizationDetailsRequest&, const Model::GetSavingsPlansUtilizationDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSavingsPlansUtilizationDetailsResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetTagsRequest&, const Model::GetTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagsResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetUsageForecastRequest&, const Model::GetUsageForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsageForecastResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::ListCostAllocationTagsRequest&, const Model::ListCostAllocationTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCostAllocationTagsResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::ListCostCategoryDefinitionsRequest&, const Model::ListCostCategoryDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCostCategoryDefinitionsResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::ListSavingsPlansPurchaseRecommendationGenerationRequest&, const Model::ListSavingsPlansPurchaseRecommendationGenerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSavingsPlansPurchaseRecommendationGenerationResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::ProvideAnomalyFeedbackRequest&, const Model::ProvideAnomalyFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvideAnomalyFeedbackResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::StartSavingsPlansPurchaseRecommendationGenerationRequest&, const Model::StartSavingsPlansPurchaseRecommendationGenerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSavingsPlansPurchaseRecommendationGenerationResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::UpdateAnomalyMonitorRequest&, const Model::UpdateAnomalyMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAnomalyMonitorResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::UpdateAnomalySubscriptionRequest&, const Model::UpdateAnomalySubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAnomalySubscriptionResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::UpdateCostAllocationTagsStatusRequest&, const Model::UpdateCostAllocationTagsStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCostAllocationTagsStatusResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::UpdateCostCategoryDefinitionRequest&, const Model::UpdateCostCategoryDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCostCategoryDefinitionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CostExplorer
} // namespace Aws
