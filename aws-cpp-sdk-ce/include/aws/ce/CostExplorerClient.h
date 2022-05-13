/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/ce/model/ListCostCategoryDefinitionsResult.h>
#include <aws/ce/model/ListTagsForResourceResult.h>
#include <aws/ce/model/ProvideAnomalyFeedbackResult.h>
#include <aws/ce/model/TagResourceResult.h>
#include <aws/ce/model/UntagResourceResult.h>
#include <aws/ce/model/UpdateAnomalyMonitorResult.h>
#include <aws/ce/model/UpdateAnomalySubscriptionResult.h>
#include <aws/ce/model/UpdateCostCategoryDefinitionResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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
        class ListCostCategoryDefinitionsRequest;
        class ListTagsForResourceRequest;
        class ProvideAnomalyFeedbackRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAnomalyMonitorRequest;
        class UpdateAnomalySubscriptionRequest;
        class UpdateCostCategoryDefinitionRequest;

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
        typedef Aws::Utils::Outcome<ListCostCategoryDefinitionsResult, CostExplorerError> ListCostCategoryDefinitionsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, CostExplorerError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ProvideAnomalyFeedbackResult, CostExplorerError> ProvideAnomalyFeedbackOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, CostExplorerError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, CostExplorerError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAnomalyMonitorResult, CostExplorerError> UpdateAnomalyMonitorOutcome;
        typedef Aws::Utils::Outcome<UpdateAnomalySubscriptionResult, CostExplorerError> UpdateAnomalySubscriptionOutcome;
        typedef Aws::Utils::Outcome<UpdateCostCategoryDefinitionResult, CostExplorerError> UpdateCostCategoryDefinitionOutcome;

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
        typedef std::future<ListCostCategoryDefinitionsOutcome> ListCostCategoryDefinitionsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ProvideAnomalyFeedbackOutcome> ProvideAnomalyFeedbackOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAnomalyMonitorOutcome> UpdateAnomalyMonitorOutcomeCallable;
        typedef std::future<UpdateAnomalySubscriptionOutcome> UpdateAnomalySubscriptionOutcomeCallable;
        typedef std::future<UpdateCostCategoryDefinitionOutcome> UpdateCostCategoryDefinitionOutcomeCallable;
} // namespace Model

  class CostExplorerClient;

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
    typedef std::function<void(const CostExplorerClient*, const Model::ListCostCategoryDefinitionsRequest&, const Model::ListCostCategoryDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCostCategoryDefinitionsResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::ProvideAnomalyFeedbackRequest&, const Model::ProvideAnomalyFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvideAnomalyFeedbackResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::UpdateAnomalyMonitorRequest&, const Model::UpdateAnomalyMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAnomalyMonitorResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::UpdateAnomalySubscriptionRequest&, const Model::UpdateAnomalySubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAnomalySubscriptionResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::UpdateCostCategoryDefinitionRequest&, const Model::UpdateCostCategoryDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCostCategoryDefinitionResponseReceivedHandler;

  /**
   * <p>You can use the Cost Explorer API to programmatically query your cost and
   * usage data. You can query for aggregated data such as total monthly costs or
   * total daily usage. You can also query for granular data. This might include the
   * number of daily write operations for Amazon DynamoDB database tables in your
   * production environment. </p> <p>Service Endpoint</p> <p>The Cost Explorer API
   * provides the following endpoint:</p> <ul> <li> <p>
   * <code>https://ce.us-east-1.amazonaws.com</code> </p> </li> </ul> <p>For
   * information about the costs that are associated with the Cost Explorer API, see
   * <a href="http://aws.amazon.com/aws-cost-management/pricing/">Amazon Web Services
   * Cost Management Pricing</a>.</p>
   */
  class AWS_COSTEXPLORER_API CostExplorerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostExplorerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostExplorerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CostExplorerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CostExplorerClient();


        /**
         * <p>Creates a new cost anomaly detection monitor with the requested type and
         * monitor specification. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CreateAnomalyMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnomalyMonitorOutcome CreateAnomalyMonitor(const Model::CreateAnomalyMonitorRequest& request) const;

        /**
         * A Callable wrapper for CreateAnomalyMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAnomalyMonitorOutcomeCallable CreateAnomalyMonitorCallable(const Model::CreateAnomalyMonitorRequest& request) const;

        /**
         * An Async wrapper for CreateAnomalyMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAnomalyMonitorAsync(const Model::CreateAnomalyMonitorRequest& request, const CreateAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a subscription to a cost anomaly detection monitor. You can use each
         * subscription to define subscribers with email or SNS notifications. Email
         * subscribers can set a dollar threshold and a time frequency for receiving
         * notifications. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CreateAnomalySubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnomalySubscriptionOutcome CreateAnomalySubscription(const Model::CreateAnomalySubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateAnomalySubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAnomalySubscriptionOutcomeCallable CreateAnomalySubscriptionCallable(const Model::CreateAnomalySubscriptionRequest& request) const;

        /**
         * An Async wrapper for CreateAnomalySubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAnomalySubscriptionAsync(const Model::CreateAnomalySubscriptionRequest& request, const CreateAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Cost Category with the requested name and rules.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CreateCostCategoryDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCostCategoryDefinitionOutcome CreateCostCategoryDefinition(const Model::CreateCostCategoryDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateCostCategoryDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCostCategoryDefinitionOutcomeCallable CreateCostCategoryDefinitionCallable(const Model::CreateCostCategoryDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateCostCategoryDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCostCategoryDefinitionAsync(const Model::CreateCostCategoryDefinitionRequest& request, const CreateCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a cost anomaly monitor. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/DeleteAnomalyMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnomalyMonitorOutcome DeleteAnomalyMonitor(const Model::DeleteAnomalyMonitorRequest& request) const;

        /**
         * A Callable wrapper for DeleteAnomalyMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAnomalyMonitorOutcomeCallable DeleteAnomalyMonitorCallable(const Model::DeleteAnomalyMonitorRequest& request) const;

        /**
         * An Async wrapper for DeleteAnomalyMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAnomalyMonitorAsync(const Model::DeleteAnomalyMonitorRequest& request, const DeleteAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a cost anomaly subscription. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/DeleteAnomalySubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnomalySubscriptionOutcome DeleteAnomalySubscription(const Model::DeleteAnomalySubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAnomalySubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAnomalySubscriptionOutcomeCallable DeleteAnomalySubscriptionCallable(const Model::DeleteAnomalySubscriptionRequest& request) const;

        /**
         * An Async wrapper for DeleteAnomalySubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAnomalySubscriptionAsync(const Model::DeleteAnomalySubscriptionRequest& request, const DeleteAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Cost Category. Expenses from this month going forward will no
         * longer be categorized with this Cost Category.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/DeleteCostCategoryDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCostCategoryDefinitionOutcome DeleteCostCategoryDefinition(const Model::DeleteCostCategoryDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteCostCategoryDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCostCategoryDefinitionOutcomeCallable DeleteCostCategoryDefinitionCallable(const Model::DeleteCostCategoryDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteCostCategoryDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCostCategoryDefinitionAsync(const Model::DeleteCostCategoryDefinitionRequest& request, const DeleteCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the name, ARN, rules, definition, and effective dates of a Cost
         * Category that's defined in the account.</p> <p>You have the option to use
         * <code>EffectiveOn</code> to return a Cost Category that is active on a specific
         * date. If there is no <code>EffectiveOn</code> specified, you’ll see a Cost
         * Category that is effective on the current date. If Cost Category is still
         * effective, <code>EffectiveEnd</code> is omitted in the response. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/DescribeCostCategoryDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCostCategoryDefinitionOutcome DescribeCostCategoryDefinition(const Model::DescribeCostCategoryDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeCostCategoryDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCostCategoryDefinitionOutcomeCallable DescribeCostCategoryDefinitionCallable(const Model::DescribeCostCategoryDefinitionRequest& request) const;

        /**
         * An Async wrapper for DescribeCostCategoryDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCostCategoryDefinitionAsync(const Model::DescribeCostCategoryDefinitionRequest& request, const DescribeCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all of the cost anomalies detected on your account during the time
         * period that's specified by the <code>DateInterval</code> object. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetAnomalies">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAnomaliesOutcome GetAnomalies(const Model::GetAnomaliesRequest& request) const;

        /**
         * A Callable wrapper for GetAnomalies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAnomaliesOutcomeCallable GetAnomaliesCallable(const Model::GetAnomaliesRequest& request) const;

        /**
         * An Async wrapper for GetAnomalies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAnomaliesAsync(const Model::GetAnomaliesRequest& request, const GetAnomaliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the cost anomaly monitor definitions for your account. You can
         * filter using a list of cost anomaly monitor Amazon Resource Names (ARNs).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetAnomalyMonitors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnomalyMonitorsOutcome GetAnomalyMonitors(const Model::GetAnomalyMonitorsRequest& request) const;

        /**
         * A Callable wrapper for GetAnomalyMonitors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAnomalyMonitorsOutcomeCallable GetAnomalyMonitorsCallable(const Model::GetAnomalyMonitorsRequest& request) const;

        /**
         * An Async wrapper for GetAnomalyMonitors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAnomalyMonitorsAsync(const Model::GetAnomalyMonitorsRequest& request, const GetAnomalyMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the cost anomaly subscription objects for your account. You can
         * filter using a list of cost anomaly monitor Amazon Resource Names (ARNs).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetAnomalySubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnomalySubscriptionsOutcome GetAnomalySubscriptions(const Model::GetAnomalySubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for GetAnomalySubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAnomalySubscriptionsOutcomeCallable GetAnomalySubscriptionsCallable(const Model::GetAnomalySubscriptionsRequest& request) const;

        /**
         * An Async wrapper for GetAnomalySubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAnomalySubscriptionsAsync(const Model::GetAnomalySubscriptionsRequest& request, const GetAnomalySubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves cost and usage metrics for your account. You can specify which cost
         * and usage-related metric that you want the request to return. For example, you
         * can specify <code>BlendedCosts</code> or <code>UsageQuantity</code>. You can
         * also filter and group your data by various dimensions, such as
         * <code>SERVICE</code> or <code>AZ</code>, in a specific time range. For a
         * complete list of valid dimensions, see the <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetDimensionValues.html">GetDimensionValues</a>
         * operation. Management account in an organization in Organizations have access to
         * all member accounts.</p> <p>For information about filter limitations, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/billing-limits.html">Quotas
         * and restrictions</a> in the <i>Billing and Cost Management User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostAndUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostAndUsageOutcome GetCostAndUsage(const Model::GetCostAndUsageRequest& request) const;

        /**
         * A Callable wrapper for GetCostAndUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCostAndUsageOutcomeCallable GetCostAndUsageCallable(const Model::GetCostAndUsageRequest& request) const;

        /**
         * An Async wrapper for GetCostAndUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCostAndUsageAsync(const Model::GetCostAndUsageRequest& request, const GetCostAndUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves cost and usage metrics with resources for your account. You can
         * specify which cost and usage-related metric, such as <code>BlendedCosts</code>
         * or <code>UsageQuantity</code>, that you want the request to return. You can also
         * filter and group your data by various dimensions, such as <code>SERVICE</code>
         * or <code>AZ</code>, in a specific time range. For a complete list of valid
         * dimensions, see the <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetDimensionValues.html">GetDimensionValues</a>
         * operation. Management account in an organization in Organizations have access to
         * all member accounts. This API is currently available for the Amazon Elastic
         * Compute Cloud – Compute service only.</p>  <p>This is an opt-in only
         * feature. You can enable this feature from the Cost Explorer Settings page. For
         * information on how to access the Settings page, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/ce-access.html">Controlling
         * Access for Cost Explorer</a> in the <i>Billing and Cost Management User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostAndUsageWithResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostAndUsageWithResourcesOutcome GetCostAndUsageWithResources(const Model::GetCostAndUsageWithResourcesRequest& request) const;

        /**
         * A Callable wrapper for GetCostAndUsageWithResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCostAndUsageWithResourcesOutcomeCallable GetCostAndUsageWithResourcesCallable(const Model::GetCostAndUsageWithResourcesRequest& request) const;

        /**
         * An Async wrapper for GetCostAndUsageWithResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCostAndUsageWithResourcesAsync(const Model::GetCostAndUsageWithResourcesRequest& request, const GetCostAndUsageWithResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an array of Cost Category names and values incurred cost.</p>
         *  <p>If some Cost Category names and values are not associated with any
         * cost, they will not be returned by this API.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostCategoriesOutcome GetCostCategories(const Model::GetCostCategoriesRequest& request) const;

        /**
         * A Callable wrapper for GetCostCategories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCostCategoriesOutcomeCallable GetCostCategoriesCallable(const Model::GetCostCategoriesRequest& request) const;

        /**
         * An Async wrapper for GetCostCategories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCostCategoriesAsync(const Model::GetCostCategoriesRequest& request, const GetCostCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a forecast for how much Amazon Web Services predicts that you will
         * spend over the forecast time period that you select, based on your past costs.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostForecastOutcome GetCostForecast(const Model::GetCostForecastRequest& request) const;

        /**
         * A Callable wrapper for GetCostForecast that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCostForecastOutcomeCallable GetCostForecastCallable(const Model::GetCostForecastRequest& request) const;

        /**
         * An Async wrapper for GetCostForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCostForecastAsync(const Model::GetCostForecastRequest& request, const GetCostForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all available filter values for a specified filter over a period of
         * time. You can search the dimension values for an arbitrary string.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetDimensionValues">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDimensionValuesOutcome GetDimensionValues(const Model::GetDimensionValuesRequest& request) const;

        /**
         * A Callable wrapper for GetDimensionValues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDimensionValuesOutcomeCallable GetDimensionValuesCallable(const Model::GetDimensionValuesRequest& request) const;

        /**
         * An Async wrapper for GetDimensionValues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDimensionValuesAsync(const Model::GetDimensionValuesRequest& request, const GetDimensionValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the reservation coverage for your account. This enables you to see
         * how much of your Amazon Elastic Compute Cloud, Amazon ElastiCache, Amazon
         * Relational Database Service, or Amazon Redshift usage is covered by a
         * reservation. An organization's management account can see the coverage of the
         * associated member accounts. This supports dimensions, Cost Categories, and
         * nested expressions. For any time period, you can filter data about reservation
         * usage by the following dimensions:</p> <ul> <li> <p>AZ</p> </li> <li>
         * <p>CACHE_ENGINE</p> </li> <li> <p>DATABASE_ENGINE</p> </li> <li>
         * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
         * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
         * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>SERVICE</p> </li> <li>
         * <p>TAG</p> </li> <li> <p>TENANCY</p> </li> </ul> <p>To determine valid values
         * for a dimension, use the <code>GetDimensionValues</code> operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationCoverage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReservationCoverageOutcome GetReservationCoverage(const Model::GetReservationCoverageRequest& request) const;

        /**
         * A Callable wrapper for GetReservationCoverage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReservationCoverageOutcomeCallable GetReservationCoverageCallable(const Model::GetReservationCoverageRequest& request) const;

        /**
         * An Async wrapper for GetReservationCoverage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReservationCoverageAsync(const Model::GetReservationCoverageRequest& request, const GetReservationCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets recommendations for which reservations to purchase. These
         * recommendations could help you reduce your costs. Reservations provide a
         * discounted hourly rate (up to 75%) compared to On-Demand pricing.</p> <p>Amazon
         * Web Services generates your recommendations by identifying your On-Demand usage
         * during a specific time period and collecting your usage into categories that are
         * eligible for a reservation. After Amazon Web Services has these categories, it
         * simulates every combination of reservations in each category of usage to
         * identify the best number of each type of RI to purchase to maximize your
         * estimated savings. </p> <p>For example, Amazon Web Services automatically
         * aggregates your Amazon EC2 Linux, shared tenancy, and c4 family usage in the US
         * West (Oregon) Region and recommends that you buy size-flexible regional
         * reservations to apply to the c4 family usage. Amazon Web Services recommends the
         * smallest size instance in an instance family. This makes it easier to purchase a
         * size-flexible RI. Amazon Web Services also shows the equal number of normalized
         * units so that you can purchase any instance size that you want. For this
         * example, your RI recommendation would be for <code>c4.large</code> because that
         * is the smallest size instance in the c4 instance family.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationPurchaseRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReservationPurchaseRecommendationOutcome GetReservationPurchaseRecommendation(const Model::GetReservationPurchaseRecommendationRequest& request) const;

        /**
         * A Callable wrapper for GetReservationPurchaseRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReservationPurchaseRecommendationOutcomeCallable GetReservationPurchaseRecommendationCallable(const Model::GetReservationPurchaseRecommendationRequest& request) const;

        /**
         * An Async wrapper for GetReservationPurchaseRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReservationPurchaseRecommendationAsync(const Model::GetReservationPurchaseRecommendationRequest& request, const GetReservationPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the reservation utilization for your account. Management account in
         * an organization have access to member accounts. You can filter data by
         * dimensions in a time period. You can use <code>GetDimensionValues</code> to
         * determine the possible dimension values. Currently, you can group only by
         * <code>SUBSCRIPTION_ID</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationUtilization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReservationUtilizationOutcome GetReservationUtilization(const Model::GetReservationUtilizationRequest& request) const;

        /**
         * A Callable wrapper for GetReservationUtilization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReservationUtilizationOutcomeCallable GetReservationUtilizationCallable(const Model::GetReservationUtilizationRequest& request) const;

        /**
         * An Async wrapper for GetReservationUtilization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReservationUtilizationAsync(const Model::GetReservationUtilizationRequest& request, const GetReservationUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates recommendations that help you save cost by identifying idle and
         * underutilized Amazon EC2 instances.</p> <p>Recommendations are generated to
         * either downsize or terminate instances, along with providing savings detail and
         * metrics. For details on calculation and function, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/ce-rightsizing.html">Optimizing
         * Your Cost with Rightsizing Recommendations</a> in the <i>Billing and Cost
         * Management User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetRightsizingRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRightsizingRecommendationOutcome GetRightsizingRecommendation(const Model::GetRightsizingRecommendationRequest& request) const;

        /**
         * A Callable wrapper for GetRightsizingRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRightsizingRecommendationOutcomeCallable GetRightsizingRecommendationCallable(const Model::GetRightsizingRecommendationRequest& request) const;

        /**
         * An Async wrapper for GetRightsizingRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRightsizingRecommendationAsync(const Model::GetRightsizingRecommendationRequest& request, const GetRightsizingRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the Savings Plans covered for your account. This enables you to see
         * how much of your cost is covered by a Savings Plan. An organization’s management
         * account can see the coverage of the associated member accounts. This supports
         * dimensions, Cost Categories, and nested expressions. For any time period, you
         * can filter data for Savings Plans usage with the following dimensions:</p> <ul>
         * <li> <p> <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>REGION</code>
         * </p> </li> <li> <p> <code>SERVICE</code> </p> </li> <li> <p>
         * <code>INSTANCE_FAMILY</code> </p> </li> </ul> <p>To determine valid values for a
         * dimension, use the <code>GetDimensionValues</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansCoverage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSavingsPlansCoverageOutcome GetSavingsPlansCoverage(const Model::GetSavingsPlansCoverageRequest& request) const;

        /**
         * A Callable wrapper for GetSavingsPlansCoverage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSavingsPlansCoverageOutcomeCallable GetSavingsPlansCoverageCallable(const Model::GetSavingsPlansCoverageRequest& request) const;

        /**
         * An Async wrapper for GetSavingsPlansCoverage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSavingsPlansCoverageAsync(const Model::GetSavingsPlansCoverageRequest& request, const GetSavingsPlansCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves your request parameters, Savings Plan Recommendations Summary and
         * Details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansPurchaseRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSavingsPlansPurchaseRecommendationOutcome GetSavingsPlansPurchaseRecommendation(const Model::GetSavingsPlansPurchaseRecommendationRequest& request) const;

        /**
         * A Callable wrapper for GetSavingsPlansPurchaseRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSavingsPlansPurchaseRecommendationOutcomeCallable GetSavingsPlansPurchaseRecommendationCallable(const Model::GetSavingsPlansPurchaseRecommendationRequest& request) const;

        /**
         * An Async wrapper for GetSavingsPlansPurchaseRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSavingsPlansPurchaseRecommendationAsync(const Model::GetSavingsPlansPurchaseRecommendationRequest& request, const GetSavingsPlansPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the Savings Plans utilization for your account across date ranges
         * with daily or monthly granularity. Management account in an organization have
         * access to member accounts. You can use <code>GetDimensionValues</code> in
         * <code>SAVINGS_PLANS</code> to determine the possible dimension values.</p>
         *  <p>You cannot group by any dimension values for
         * <code>GetSavingsPlansUtilization</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansUtilization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSavingsPlansUtilizationOutcome GetSavingsPlansUtilization(const Model::GetSavingsPlansUtilizationRequest& request) const;

        /**
         * A Callable wrapper for GetSavingsPlansUtilization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSavingsPlansUtilizationOutcomeCallable GetSavingsPlansUtilizationCallable(const Model::GetSavingsPlansUtilizationRequest& request) const;

        /**
         * An Async wrapper for GetSavingsPlansUtilization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSavingsPlansUtilizationAsync(const Model::GetSavingsPlansUtilizationRequest& request, const GetSavingsPlansUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves attribute data along with aggregate utilization and savings data
         * for a given time period. This doesn't support granular or grouped data
         * (daily/monthly) in response. You can't retrieve data by dates in a single
         * response similar to <code>GetSavingsPlanUtilization</code>, but you have the
         * option to make multiple calls to <code>GetSavingsPlanUtilizationDetails</code>
         * by providing individual dates. You can use <code>GetDimensionValues</code> in
         * <code>SAVINGS_PLANS</code> to determine the possible dimension values.</p>
         *  <p> <code>GetSavingsPlanUtilizationDetails</code> internally groups data
         * by <code>SavingsPlansArn</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansUtilizationDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSavingsPlansUtilizationDetailsOutcome GetSavingsPlansUtilizationDetails(const Model::GetSavingsPlansUtilizationDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetSavingsPlansUtilizationDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSavingsPlansUtilizationDetailsOutcomeCallable GetSavingsPlansUtilizationDetailsCallable(const Model::GetSavingsPlansUtilizationDetailsRequest& request) const;

        /**
         * An Async wrapper for GetSavingsPlansUtilizationDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSavingsPlansUtilizationDetailsAsync(const Model::GetSavingsPlansUtilizationDetailsRequest& request, const GetSavingsPlansUtilizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Queries for available tag keys and tag values for a specified period. You can
         * search the tag values for an arbitrary string. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetTags">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;

        /**
         * A Callable wrapper for GetTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagsOutcomeCallable GetTagsCallable(const Model::GetTagsRequest& request) const;

        /**
         * An Async wrapper for GetTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagsAsync(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a forecast for how much Amazon Web Services predicts that you will
         * use over the forecast time period that you select, based on your past usage.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetUsageForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageForecastOutcome GetUsageForecast(const Model::GetUsageForecastRequest& request) const;

        /**
         * A Callable wrapper for GetUsageForecast that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsageForecastOutcomeCallable GetUsageForecastCallable(const Model::GetUsageForecastRequest& request) const;

        /**
         * An Async wrapper for GetUsageForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsageForecastAsync(const Model::GetUsageForecastRequest& request, const GetUsageForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the name, ARN, <code>NumberOfRules</code> and effective dates of all
         * Cost Categories defined in the account. You have the option to use
         * <code>EffectiveOn</code> to return a list of Cost Categories that were active on
         * a specific date. If there is no <code>EffectiveOn</code> specified, you’ll see
         * Cost Categories that are effective on the current date. If Cost Category is
         * still effective, <code>EffectiveEnd</code> is omitted in the response.
         * <code>ListCostCategoryDefinitions</code> supports pagination. The request can
         * have a <code>MaxResults</code> range up to 100.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ListCostCategoryDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCostCategoryDefinitionsOutcome ListCostCategoryDefinitions(const Model::ListCostCategoryDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListCostCategoryDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCostCategoryDefinitionsOutcomeCallable ListCostCategoryDefinitionsCallable(const Model::ListCostCategoryDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListCostCategoryDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCostCategoryDefinitionsAsync(const Model::ListCostCategoryDefinitionsRequest& request, const ListCostCategoryDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of resource tags associated with the resource specified by the
         * Amazon Resource Name (ARN). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the feedback property of a given cost anomaly. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ProvideAnomalyFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::ProvideAnomalyFeedbackOutcome ProvideAnomalyFeedback(const Model::ProvideAnomalyFeedbackRequest& request) const;

        /**
         * A Callable wrapper for ProvideAnomalyFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ProvideAnomalyFeedbackOutcomeCallable ProvideAnomalyFeedbackCallable(const Model::ProvideAnomalyFeedbackRequest& request) const;

        /**
         * An Async wrapper for ProvideAnomalyFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ProvideAnomalyFeedbackAsync(const Model::ProvideAnomalyFeedbackRequest& request, const ProvideAnomalyFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An API operation for adding one or more tags (key-value pairs) to a
         * resource.</p> <p>You can use the <code>TagResource</code> operation with a
         * resource that already has tags. If you specify a new tag key for the resource,
         * this tag is appended to the list of tags associated with the resource. If you
         * specify a tag key that is already associated with the resource, the new tag
         * value you specify replaces the previous value for that tag.</p> <p> Although the
         * maximum number of array members is 200, user-tag maximum is 50. The remaining
         * are reserved for Amazon Web Services use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Removes one or more tags from a resource. Specify only tag key(s) in your
         * request. Do not specify the value. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing cost anomaly monitor. The changes made are applied going
         * forward, and doesn't change anomalies detected in the past. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/UpdateAnomalyMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnomalyMonitorOutcome UpdateAnomalyMonitor(const Model::UpdateAnomalyMonitorRequest& request) const;

        /**
         * A Callable wrapper for UpdateAnomalyMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAnomalyMonitorOutcomeCallable UpdateAnomalyMonitorCallable(const Model::UpdateAnomalyMonitorRequest& request) const;

        /**
         * An Async wrapper for UpdateAnomalyMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAnomalyMonitorAsync(const Model::UpdateAnomalyMonitorRequest& request, const UpdateAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing cost anomaly monitor subscription. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/UpdateAnomalySubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnomalySubscriptionOutcome UpdateAnomalySubscription(const Model::UpdateAnomalySubscriptionRequest& request) const;

        /**
         * A Callable wrapper for UpdateAnomalySubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAnomalySubscriptionOutcomeCallable UpdateAnomalySubscriptionCallable(const Model::UpdateAnomalySubscriptionRequest& request) const;

        /**
         * An Async wrapper for UpdateAnomalySubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAnomalySubscriptionAsync(const Model::UpdateAnomalySubscriptionRequest& request, const UpdateAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing Cost Category. Changes made to the Cost Category rules
         * will be used to categorize the current month’s expenses and future expenses.
         * This won’t change categorization for the previous months.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/UpdateCostCategoryDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCostCategoryDefinitionOutcome UpdateCostCategoryDefinition(const Model::UpdateCostCategoryDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateCostCategoryDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCostCategoryDefinitionOutcomeCallable UpdateCostCategoryDefinitionCallable(const Model::UpdateCostCategoryDefinitionRequest& request) const;

        /**
         * An Async wrapper for UpdateCostCategoryDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCostCategoryDefinitionAsync(const Model::UpdateCostCategoryDefinitionRequest& request, const UpdateCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateAnomalyMonitorAsyncHelper(const Model::CreateAnomalyMonitorRequest& request, const CreateAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAnomalySubscriptionAsyncHelper(const Model::CreateAnomalySubscriptionRequest& request, const CreateAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCostCategoryDefinitionAsyncHelper(const Model::CreateCostCategoryDefinitionRequest& request, const CreateCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAnomalyMonitorAsyncHelper(const Model::DeleteAnomalyMonitorRequest& request, const DeleteAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAnomalySubscriptionAsyncHelper(const Model::DeleteAnomalySubscriptionRequest& request, const DeleteAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCostCategoryDefinitionAsyncHelper(const Model::DeleteCostCategoryDefinitionRequest& request, const DeleteCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCostCategoryDefinitionAsyncHelper(const Model::DescribeCostCategoryDefinitionRequest& request, const DescribeCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAnomaliesAsyncHelper(const Model::GetAnomaliesRequest& request, const GetAnomaliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAnomalyMonitorsAsyncHelper(const Model::GetAnomalyMonitorsRequest& request, const GetAnomalyMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAnomalySubscriptionsAsyncHelper(const Model::GetAnomalySubscriptionsRequest& request, const GetAnomalySubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCostAndUsageAsyncHelper(const Model::GetCostAndUsageRequest& request, const GetCostAndUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCostAndUsageWithResourcesAsyncHelper(const Model::GetCostAndUsageWithResourcesRequest& request, const GetCostAndUsageWithResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCostCategoriesAsyncHelper(const Model::GetCostCategoriesRequest& request, const GetCostCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCostForecastAsyncHelper(const Model::GetCostForecastRequest& request, const GetCostForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDimensionValuesAsyncHelper(const Model::GetDimensionValuesRequest& request, const GetDimensionValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReservationCoverageAsyncHelper(const Model::GetReservationCoverageRequest& request, const GetReservationCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReservationPurchaseRecommendationAsyncHelper(const Model::GetReservationPurchaseRecommendationRequest& request, const GetReservationPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReservationUtilizationAsyncHelper(const Model::GetReservationUtilizationRequest& request, const GetReservationUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRightsizingRecommendationAsyncHelper(const Model::GetRightsizingRecommendationRequest& request, const GetRightsizingRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSavingsPlansCoverageAsyncHelper(const Model::GetSavingsPlansCoverageRequest& request, const GetSavingsPlansCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSavingsPlansPurchaseRecommendationAsyncHelper(const Model::GetSavingsPlansPurchaseRecommendationRequest& request, const GetSavingsPlansPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSavingsPlansUtilizationAsyncHelper(const Model::GetSavingsPlansUtilizationRequest& request, const GetSavingsPlansUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSavingsPlansUtilizationDetailsAsyncHelper(const Model::GetSavingsPlansUtilizationDetailsRequest& request, const GetSavingsPlansUtilizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTagsAsyncHelper(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUsageForecastAsyncHelper(const Model::GetUsageForecastRequest& request, const GetUsageForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCostCategoryDefinitionsAsyncHelper(const Model::ListCostCategoryDefinitionsRequest& request, const ListCostCategoryDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ProvideAnomalyFeedbackAsyncHelper(const Model::ProvideAnomalyFeedbackRequest& request, const ProvideAnomalyFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAnomalyMonitorAsyncHelper(const Model::UpdateAnomalyMonitorRequest& request, const UpdateAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAnomalySubscriptionAsyncHelper(const Model::UpdateAnomalySubscriptionRequest& request, const UpdateAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCostCategoryDefinitionAsyncHelper(const Model::UpdateCostCategoryDefinitionRequest& request, const UpdateCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CostExplorer
} // namespace Aws
