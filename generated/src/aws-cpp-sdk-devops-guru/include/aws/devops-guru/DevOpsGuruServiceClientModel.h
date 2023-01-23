/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/devops-guru/DevOpsGuruErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/devops-guru/DevOpsGuruEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DevOpsGuruClient header */
#include <aws/devops-guru/model/AddNotificationChannelResult.h>
#include <aws/devops-guru/model/DeleteInsightResult.h>
#include <aws/devops-guru/model/DescribeAccountHealthResult.h>
#include <aws/devops-guru/model/DescribeAccountOverviewResult.h>
#include <aws/devops-guru/model/DescribeAnomalyResult.h>
#include <aws/devops-guru/model/DescribeEventSourcesConfigResult.h>
#include <aws/devops-guru/model/DescribeFeedbackResult.h>
#include <aws/devops-guru/model/DescribeInsightResult.h>
#include <aws/devops-guru/model/DescribeOrganizationHealthResult.h>
#include <aws/devops-guru/model/DescribeOrganizationOverviewResult.h>
#include <aws/devops-guru/model/DescribeOrganizationResourceCollectionHealthResult.h>
#include <aws/devops-guru/model/DescribeResourceCollectionHealthResult.h>
#include <aws/devops-guru/model/DescribeServiceIntegrationResult.h>
#include <aws/devops-guru/model/GetCostEstimationResult.h>
#include <aws/devops-guru/model/GetResourceCollectionResult.h>
#include <aws/devops-guru/model/ListAnomaliesForInsightResult.h>
#include <aws/devops-guru/model/ListAnomalousLogGroupsResult.h>
#include <aws/devops-guru/model/ListEventsResult.h>
#include <aws/devops-guru/model/ListInsightsResult.h>
#include <aws/devops-guru/model/ListMonitoredResourcesResult.h>
#include <aws/devops-guru/model/ListNotificationChannelsResult.h>
#include <aws/devops-guru/model/ListOrganizationInsightsResult.h>
#include <aws/devops-guru/model/ListRecommendationsResult.h>
#include <aws/devops-guru/model/PutFeedbackResult.h>
#include <aws/devops-guru/model/RemoveNotificationChannelResult.h>
#include <aws/devops-guru/model/SearchInsightsResult.h>
#include <aws/devops-guru/model/SearchOrganizationInsightsResult.h>
#include <aws/devops-guru/model/StartCostEstimationResult.h>
#include <aws/devops-guru/model/UpdateEventSourcesConfigResult.h>
#include <aws/devops-guru/model/UpdateResourceCollectionResult.h>
#include <aws/devops-guru/model/UpdateServiceIntegrationResult.h>
/* End of service model headers required in DevOpsGuruClient header */

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

  namespace DevOpsGuru
  {
    using DevOpsGuruClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DevOpsGuruEndpointProviderBase = Aws::DevOpsGuru::Endpoint::DevOpsGuruEndpointProviderBase;
    using DevOpsGuruEndpointProvider = Aws::DevOpsGuru::Endpoint::DevOpsGuruEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DevOpsGuruClient header */
      class AddNotificationChannelRequest;
      class DeleteInsightRequest;
      class DescribeAccountHealthRequest;
      class DescribeAccountOverviewRequest;
      class DescribeAnomalyRequest;
      class DescribeEventSourcesConfigRequest;
      class DescribeFeedbackRequest;
      class DescribeInsightRequest;
      class DescribeOrganizationHealthRequest;
      class DescribeOrganizationOverviewRequest;
      class DescribeOrganizationResourceCollectionHealthRequest;
      class DescribeResourceCollectionHealthRequest;
      class DescribeServiceIntegrationRequest;
      class GetCostEstimationRequest;
      class GetResourceCollectionRequest;
      class ListAnomaliesForInsightRequest;
      class ListAnomalousLogGroupsRequest;
      class ListEventsRequest;
      class ListInsightsRequest;
      class ListMonitoredResourcesRequest;
      class ListNotificationChannelsRequest;
      class ListOrganizationInsightsRequest;
      class ListRecommendationsRequest;
      class PutFeedbackRequest;
      class RemoveNotificationChannelRequest;
      class SearchInsightsRequest;
      class SearchOrganizationInsightsRequest;
      class StartCostEstimationRequest;
      class UpdateEventSourcesConfigRequest;
      class UpdateResourceCollectionRequest;
      class UpdateServiceIntegrationRequest;
      /* End of service model forward declarations required in DevOpsGuruClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddNotificationChannelResult, DevOpsGuruError> AddNotificationChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteInsightResult, DevOpsGuruError> DeleteInsightOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountHealthResult, DevOpsGuruError> DescribeAccountHealthOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountOverviewResult, DevOpsGuruError> DescribeAccountOverviewOutcome;
      typedef Aws::Utils::Outcome<DescribeAnomalyResult, DevOpsGuruError> DescribeAnomalyOutcome;
      typedef Aws::Utils::Outcome<DescribeEventSourcesConfigResult, DevOpsGuruError> DescribeEventSourcesConfigOutcome;
      typedef Aws::Utils::Outcome<DescribeFeedbackResult, DevOpsGuruError> DescribeFeedbackOutcome;
      typedef Aws::Utils::Outcome<DescribeInsightResult, DevOpsGuruError> DescribeInsightOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationHealthResult, DevOpsGuruError> DescribeOrganizationHealthOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationOverviewResult, DevOpsGuruError> DescribeOrganizationOverviewOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationResourceCollectionHealthResult, DevOpsGuruError> DescribeOrganizationResourceCollectionHealthOutcome;
      typedef Aws::Utils::Outcome<DescribeResourceCollectionHealthResult, DevOpsGuruError> DescribeResourceCollectionHealthOutcome;
      typedef Aws::Utils::Outcome<DescribeServiceIntegrationResult, DevOpsGuruError> DescribeServiceIntegrationOutcome;
      typedef Aws::Utils::Outcome<GetCostEstimationResult, DevOpsGuruError> GetCostEstimationOutcome;
      typedef Aws::Utils::Outcome<GetResourceCollectionResult, DevOpsGuruError> GetResourceCollectionOutcome;
      typedef Aws::Utils::Outcome<ListAnomaliesForInsightResult, DevOpsGuruError> ListAnomaliesForInsightOutcome;
      typedef Aws::Utils::Outcome<ListAnomalousLogGroupsResult, DevOpsGuruError> ListAnomalousLogGroupsOutcome;
      typedef Aws::Utils::Outcome<ListEventsResult, DevOpsGuruError> ListEventsOutcome;
      typedef Aws::Utils::Outcome<ListInsightsResult, DevOpsGuruError> ListInsightsOutcome;
      typedef Aws::Utils::Outcome<ListMonitoredResourcesResult, DevOpsGuruError> ListMonitoredResourcesOutcome;
      typedef Aws::Utils::Outcome<ListNotificationChannelsResult, DevOpsGuruError> ListNotificationChannelsOutcome;
      typedef Aws::Utils::Outcome<ListOrganizationInsightsResult, DevOpsGuruError> ListOrganizationInsightsOutcome;
      typedef Aws::Utils::Outcome<ListRecommendationsResult, DevOpsGuruError> ListRecommendationsOutcome;
      typedef Aws::Utils::Outcome<PutFeedbackResult, DevOpsGuruError> PutFeedbackOutcome;
      typedef Aws::Utils::Outcome<RemoveNotificationChannelResult, DevOpsGuruError> RemoveNotificationChannelOutcome;
      typedef Aws::Utils::Outcome<SearchInsightsResult, DevOpsGuruError> SearchInsightsOutcome;
      typedef Aws::Utils::Outcome<SearchOrganizationInsightsResult, DevOpsGuruError> SearchOrganizationInsightsOutcome;
      typedef Aws::Utils::Outcome<StartCostEstimationResult, DevOpsGuruError> StartCostEstimationOutcome;
      typedef Aws::Utils::Outcome<UpdateEventSourcesConfigResult, DevOpsGuruError> UpdateEventSourcesConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceCollectionResult, DevOpsGuruError> UpdateResourceCollectionOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceIntegrationResult, DevOpsGuruError> UpdateServiceIntegrationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddNotificationChannelOutcome> AddNotificationChannelOutcomeCallable;
      typedef std::future<DeleteInsightOutcome> DeleteInsightOutcomeCallable;
      typedef std::future<DescribeAccountHealthOutcome> DescribeAccountHealthOutcomeCallable;
      typedef std::future<DescribeAccountOverviewOutcome> DescribeAccountOverviewOutcomeCallable;
      typedef std::future<DescribeAnomalyOutcome> DescribeAnomalyOutcomeCallable;
      typedef std::future<DescribeEventSourcesConfigOutcome> DescribeEventSourcesConfigOutcomeCallable;
      typedef std::future<DescribeFeedbackOutcome> DescribeFeedbackOutcomeCallable;
      typedef std::future<DescribeInsightOutcome> DescribeInsightOutcomeCallable;
      typedef std::future<DescribeOrganizationHealthOutcome> DescribeOrganizationHealthOutcomeCallable;
      typedef std::future<DescribeOrganizationOverviewOutcome> DescribeOrganizationOverviewOutcomeCallable;
      typedef std::future<DescribeOrganizationResourceCollectionHealthOutcome> DescribeOrganizationResourceCollectionHealthOutcomeCallable;
      typedef std::future<DescribeResourceCollectionHealthOutcome> DescribeResourceCollectionHealthOutcomeCallable;
      typedef std::future<DescribeServiceIntegrationOutcome> DescribeServiceIntegrationOutcomeCallable;
      typedef std::future<GetCostEstimationOutcome> GetCostEstimationOutcomeCallable;
      typedef std::future<GetResourceCollectionOutcome> GetResourceCollectionOutcomeCallable;
      typedef std::future<ListAnomaliesForInsightOutcome> ListAnomaliesForInsightOutcomeCallable;
      typedef std::future<ListAnomalousLogGroupsOutcome> ListAnomalousLogGroupsOutcomeCallable;
      typedef std::future<ListEventsOutcome> ListEventsOutcomeCallable;
      typedef std::future<ListInsightsOutcome> ListInsightsOutcomeCallable;
      typedef std::future<ListMonitoredResourcesOutcome> ListMonitoredResourcesOutcomeCallable;
      typedef std::future<ListNotificationChannelsOutcome> ListNotificationChannelsOutcomeCallable;
      typedef std::future<ListOrganizationInsightsOutcome> ListOrganizationInsightsOutcomeCallable;
      typedef std::future<ListRecommendationsOutcome> ListRecommendationsOutcomeCallable;
      typedef std::future<PutFeedbackOutcome> PutFeedbackOutcomeCallable;
      typedef std::future<RemoveNotificationChannelOutcome> RemoveNotificationChannelOutcomeCallable;
      typedef std::future<SearchInsightsOutcome> SearchInsightsOutcomeCallable;
      typedef std::future<SearchOrganizationInsightsOutcome> SearchOrganizationInsightsOutcomeCallable;
      typedef std::future<StartCostEstimationOutcome> StartCostEstimationOutcomeCallable;
      typedef std::future<UpdateEventSourcesConfigOutcome> UpdateEventSourcesConfigOutcomeCallable;
      typedef std::future<UpdateResourceCollectionOutcome> UpdateResourceCollectionOutcomeCallable;
      typedef std::future<UpdateServiceIntegrationOutcome> UpdateServiceIntegrationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DevOpsGuruClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DevOpsGuruClient*, const Model::AddNotificationChannelRequest&, const Model::AddNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DeleteInsightRequest&, const Model::DeleteInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInsightResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeAccountHealthRequest&, const Model::DescribeAccountHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountHealthResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeAccountOverviewRequest&, const Model::DescribeAccountOverviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountOverviewResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeAnomalyRequest&, const Model::DescribeAnomalyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnomalyResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeEventSourcesConfigRequest&, const Model::DescribeEventSourcesConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventSourcesConfigResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeFeedbackRequest&, const Model::DescribeFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFeedbackResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeInsightRequest&, const Model::DescribeInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInsightResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeOrganizationHealthRequest&, const Model::DescribeOrganizationHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationHealthResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeOrganizationOverviewRequest&, const Model::DescribeOrganizationOverviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationOverviewResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeOrganizationResourceCollectionHealthRequest&, const Model::DescribeOrganizationResourceCollectionHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationResourceCollectionHealthResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeResourceCollectionHealthRequest&, const Model::DescribeResourceCollectionHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourceCollectionHealthResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeServiceIntegrationRequest&, const Model::DescribeServiceIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceIntegrationResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::GetCostEstimationRequest&, const Model::GetCostEstimationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCostEstimationResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::GetResourceCollectionRequest&, const Model::GetResourceCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceCollectionResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListAnomaliesForInsightRequest&, const Model::ListAnomaliesForInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomaliesForInsightResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListAnomalousLogGroupsRequest&, const Model::ListAnomalousLogGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomalousLogGroupsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListEventsRequest&, const Model::ListEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListInsightsRequest&, const Model::ListInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInsightsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListMonitoredResourcesRequest&, const Model::ListMonitoredResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMonitoredResourcesResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListNotificationChannelsRequest&, const Model::ListNotificationChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotificationChannelsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListOrganizationInsightsRequest&, const Model::ListOrganizationInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationInsightsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListRecommendationsRequest&, const Model::ListRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecommendationsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::PutFeedbackRequest&, const Model::PutFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFeedbackResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::RemoveNotificationChannelRequest&, const Model::RemoveNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::SearchInsightsRequest&, const Model::SearchInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchInsightsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::SearchOrganizationInsightsRequest&, const Model::SearchOrganizationInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchOrganizationInsightsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::StartCostEstimationRequest&, const Model::StartCostEstimationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCostEstimationResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::UpdateEventSourcesConfigRequest&, const Model::UpdateEventSourcesConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventSourcesConfigResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::UpdateResourceCollectionRequest&, const Model::UpdateResourceCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceCollectionResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::UpdateServiceIntegrationRequest&, const Model::UpdateServiceIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceIntegrationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DevOpsGuru
} // namespace Aws
