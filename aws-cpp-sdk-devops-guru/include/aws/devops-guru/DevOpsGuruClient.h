/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-guru/model/AddNotificationChannelResult.h>
#include <aws/devops-guru/model/DescribeAccountHealthResult.h>
#include <aws/devops-guru/model/DescribeAccountOverviewResult.h>
#include <aws/devops-guru/model/DescribeAnomalyResult.h>
#include <aws/devops-guru/model/DescribeInsightResult.h>
#include <aws/devops-guru/model/DescribeResourceCollectionHealthResult.h>
#include <aws/devops-guru/model/DescribeServiceIntegrationResult.h>
#include <aws/devops-guru/model/GetResourceCollectionResult.h>
#include <aws/devops-guru/model/ListAnomaliesForInsightResult.h>
#include <aws/devops-guru/model/ListEventsResult.h>
#include <aws/devops-guru/model/ListInsightsResult.h>
#include <aws/devops-guru/model/ListNotificationChannelsResult.h>
#include <aws/devops-guru/model/ListRecommendationsResult.h>
#include <aws/devops-guru/model/PutFeedbackResult.h>
#include <aws/devops-guru/model/RemoveNotificationChannelResult.h>
#include <aws/devops-guru/model/SearchInsightsResult.h>
#include <aws/devops-guru/model/UpdateResourceCollectionResult.h>
#include <aws/devops-guru/model/UpdateServiceIntegrationResult.h>
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

namespace DevOpsGuru
{

namespace Model
{
        class AddNotificationChannelRequest;
        class DescribeAccountHealthRequest;
        class DescribeAccountOverviewRequest;
        class DescribeAnomalyRequest;
        class DescribeInsightRequest;
        class DescribeResourceCollectionHealthRequest;
        class DescribeServiceIntegrationRequest;
        class GetResourceCollectionRequest;
        class ListAnomaliesForInsightRequest;
        class ListEventsRequest;
        class ListInsightsRequest;
        class ListNotificationChannelsRequest;
        class ListRecommendationsRequest;
        class PutFeedbackRequest;
        class RemoveNotificationChannelRequest;
        class SearchInsightsRequest;
        class UpdateResourceCollectionRequest;
        class UpdateServiceIntegrationRequest;

        typedef Aws::Utils::Outcome<AddNotificationChannelResult, DevOpsGuruError> AddNotificationChannelOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountHealthResult, DevOpsGuruError> DescribeAccountHealthOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountOverviewResult, DevOpsGuruError> DescribeAccountOverviewOutcome;
        typedef Aws::Utils::Outcome<DescribeAnomalyResult, DevOpsGuruError> DescribeAnomalyOutcome;
        typedef Aws::Utils::Outcome<DescribeInsightResult, DevOpsGuruError> DescribeInsightOutcome;
        typedef Aws::Utils::Outcome<DescribeResourceCollectionHealthResult, DevOpsGuruError> DescribeResourceCollectionHealthOutcome;
        typedef Aws::Utils::Outcome<DescribeServiceIntegrationResult, DevOpsGuruError> DescribeServiceIntegrationOutcome;
        typedef Aws::Utils::Outcome<GetResourceCollectionResult, DevOpsGuruError> GetResourceCollectionOutcome;
        typedef Aws::Utils::Outcome<ListAnomaliesForInsightResult, DevOpsGuruError> ListAnomaliesForInsightOutcome;
        typedef Aws::Utils::Outcome<ListEventsResult, DevOpsGuruError> ListEventsOutcome;
        typedef Aws::Utils::Outcome<ListInsightsResult, DevOpsGuruError> ListInsightsOutcome;
        typedef Aws::Utils::Outcome<ListNotificationChannelsResult, DevOpsGuruError> ListNotificationChannelsOutcome;
        typedef Aws::Utils::Outcome<ListRecommendationsResult, DevOpsGuruError> ListRecommendationsOutcome;
        typedef Aws::Utils::Outcome<PutFeedbackResult, DevOpsGuruError> PutFeedbackOutcome;
        typedef Aws::Utils::Outcome<RemoveNotificationChannelResult, DevOpsGuruError> RemoveNotificationChannelOutcome;
        typedef Aws::Utils::Outcome<SearchInsightsResult, DevOpsGuruError> SearchInsightsOutcome;
        typedef Aws::Utils::Outcome<UpdateResourceCollectionResult, DevOpsGuruError> UpdateResourceCollectionOutcome;
        typedef Aws::Utils::Outcome<UpdateServiceIntegrationResult, DevOpsGuruError> UpdateServiceIntegrationOutcome;

        typedef std::future<AddNotificationChannelOutcome> AddNotificationChannelOutcomeCallable;
        typedef std::future<DescribeAccountHealthOutcome> DescribeAccountHealthOutcomeCallable;
        typedef std::future<DescribeAccountOverviewOutcome> DescribeAccountOverviewOutcomeCallable;
        typedef std::future<DescribeAnomalyOutcome> DescribeAnomalyOutcomeCallable;
        typedef std::future<DescribeInsightOutcome> DescribeInsightOutcomeCallable;
        typedef std::future<DescribeResourceCollectionHealthOutcome> DescribeResourceCollectionHealthOutcomeCallable;
        typedef std::future<DescribeServiceIntegrationOutcome> DescribeServiceIntegrationOutcomeCallable;
        typedef std::future<GetResourceCollectionOutcome> GetResourceCollectionOutcomeCallable;
        typedef std::future<ListAnomaliesForInsightOutcome> ListAnomaliesForInsightOutcomeCallable;
        typedef std::future<ListEventsOutcome> ListEventsOutcomeCallable;
        typedef std::future<ListInsightsOutcome> ListInsightsOutcomeCallable;
        typedef std::future<ListNotificationChannelsOutcome> ListNotificationChannelsOutcomeCallable;
        typedef std::future<ListRecommendationsOutcome> ListRecommendationsOutcomeCallable;
        typedef std::future<PutFeedbackOutcome> PutFeedbackOutcomeCallable;
        typedef std::future<RemoveNotificationChannelOutcome> RemoveNotificationChannelOutcomeCallable;
        typedef std::future<SearchInsightsOutcome> SearchInsightsOutcomeCallable;
        typedef std::future<UpdateResourceCollectionOutcome> UpdateResourceCollectionOutcomeCallable;
        typedef std::future<UpdateServiceIntegrationOutcome> UpdateServiceIntegrationOutcomeCallable;
} // namespace Model

  class DevOpsGuruClient;

    typedef std::function<void(const DevOpsGuruClient*, const Model::AddNotificationChannelRequest&, const Model::AddNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeAccountHealthRequest&, const Model::DescribeAccountHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountHealthResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeAccountOverviewRequest&, const Model::DescribeAccountOverviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountOverviewResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeAnomalyRequest&, const Model::DescribeAnomalyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnomalyResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeInsightRequest&, const Model::DescribeInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInsightResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeResourceCollectionHealthRequest&, const Model::DescribeResourceCollectionHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourceCollectionHealthResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeServiceIntegrationRequest&, const Model::DescribeServiceIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceIntegrationResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::GetResourceCollectionRequest&, const Model::GetResourceCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceCollectionResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListAnomaliesForInsightRequest&, const Model::ListAnomaliesForInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomaliesForInsightResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListEventsRequest&, const Model::ListEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListInsightsRequest&, const Model::ListInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInsightsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListNotificationChannelsRequest&, const Model::ListNotificationChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotificationChannelsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListRecommendationsRequest&, const Model::ListRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecommendationsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::PutFeedbackRequest&, const Model::PutFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFeedbackResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::RemoveNotificationChannelRequest&, const Model::RemoveNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::SearchInsightsRequest&, const Model::SearchInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchInsightsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::UpdateResourceCollectionRequest&, const Model::UpdateResourceCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceCollectionResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::UpdateServiceIntegrationRequest&, const Model::UpdateServiceIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceIntegrationResponseReceivedHandler;

  class AWS_DEVOPSGURU_API DevOpsGuruClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DevOpsGuruClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DevOpsGuruClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DevOpsGuruClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~DevOpsGuruClient();


        /**
         * 
         */
        virtual Model::AddNotificationChannelOutcome AddNotificationChannel(const Model::AddNotificationChannelRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddNotificationChannelOutcomeCallable AddNotificationChannelCallable(const Model::AddNotificationChannelRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddNotificationChannelAsync(const Model::AddNotificationChannelRequest& request, const AddNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DescribeAccountHealthOutcome DescribeAccountHealth(const Model::DescribeAccountHealthRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountHealthOutcomeCallable DescribeAccountHealthCallable(const Model::DescribeAccountHealthRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountHealthAsync(const Model::DescribeAccountHealthRequest& request, const DescribeAccountHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DescribeAccountOverviewOutcome DescribeAccountOverview(const Model::DescribeAccountOverviewRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountOverviewOutcomeCallable DescribeAccountOverviewCallable(const Model::DescribeAccountOverviewRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountOverviewAsync(const Model::DescribeAccountOverviewRequest& request, const DescribeAccountOverviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DescribeAnomalyOutcome DescribeAnomaly(const Model::DescribeAnomalyRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAnomalyOutcomeCallable DescribeAnomalyCallable(const Model::DescribeAnomalyRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAnomalyAsync(const Model::DescribeAnomalyRequest& request, const DescribeAnomalyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DescribeInsightOutcome DescribeInsight(const Model::DescribeInsightRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInsightOutcomeCallable DescribeInsightCallable(const Model::DescribeInsightRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInsightAsync(const Model::DescribeInsightRequest& request, const DescribeInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DescribeResourceCollectionHealthOutcome DescribeResourceCollectionHealth(const Model::DescribeResourceCollectionHealthRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourceCollectionHealthOutcomeCallable DescribeResourceCollectionHealthCallable(const Model::DescribeResourceCollectionHealthRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourceCollectionHealthAsync(const Model::DescribeResourceCollectionHealthRequest& request, const DescribeResourceCollectionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DescribeServiceIntegrationOutcome DescribeServiceIntegration(const Model::DescribeServiceIntegrationRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServiceIntegrationOutcomeCallable DescribeServiceIntegrationCallable(const Model::DescribeServiceIntegrationRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServiceIntegrationAsync(const Model::DescribeServiceIntegrationRequest& request, const DescribeServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetResourceCollectionOutcome GetResourceCollection(const Model::GetResourceCollectionRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceCollectionOutcomeCallable GetResourceCollectionCallable(const Model::GetResourceCollectionRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceCollectionAsync(const Model::GetResourceCollectionRequest& request, const GetResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListAnomaliesForInsightOutcome ListAnomaliesForInsight(const Model::ListAnomaliesForInsightRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnomaliesForInsightOutcomeCallable ListAnomaliesForInsightCallable(const Model::ListAnomaliesForInsightRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnomaliesForInsightAsync(const Model::ListAnomaliesForInsightRequest& request, const ListAnomaliesForInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListEventsOutcome ListEvents(const Model::ListEventsRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventsOutcomeCallable ListEventsCallable(const Model::ListEventsRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventsAsync(const Model::ListEventsRequest& request, const ListEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListInsightsOutcome ListInsights(const Model::ListInsightsRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInsightsOutcomeCallable ListInsightsCallable(const Model::ListInsightsRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInsightsAsync(const Model::ListInsightsRequest& request, const ListInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListNotificationChannelsOutcome ListNotificationChannels(const Model::ListNotificationChannelsRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotificationChannelsOutcomeCallable ListNotificationChannelsCallable(const Model::ListNotificationChannelsRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotificationChannelsAsync(const Model::ListNotificationChannelsRequest& request, const ListNotificationChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListRecommendationsOutcome ListRecommendations(const Model::ListRecommendationsRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecommendationsOutcomeCallable ListRecommendationsCallable(const Model::ListRecommendationsRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecommendationsAsync(const Model::ListRecommendationsRequest& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::PutFeedbackOutcome PutFeedback(const Model::PutFeedbackRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFeedbackOutcomeCallable PutFeedbackCallable(const Model::PutFeedbackRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFeedbackAsync(const Model::PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::RemoveNotificationChannelOutcome RemoveNotificationChannel(const Model::RemoveNotificationChannelRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveNotificationChannelOutcomeCallable RemoveNotificationChannelCallable(const Model::RemoveNotificationChannelRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveNotificationChannelAsync(const Model::RemoveNotificationChannelRequest& request, const RemoveNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::SearchInsightsOutcome SearchInsights(const Model::SearchInsightsRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchInsightsOutcomeCallable SearchInsightsCallable(const Model::SearchInsightsRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchInsightsAsync(const Model::SearchInsightsRequest& request, const SearchInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::UpdateResourceCollectionOutcome UpdateResourceCollection(const Model::UpdateResourceCollectionRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceCollectionOutcomeCallable UpdateResourceCollectionCallable(const Model::UpdateResourceCollectionRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceCollectionAsync(const Model::UpdateResourceCollectionRequest& request, const UpdateResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::UpdateServiceIntegrationOutcome UpdateServiceIntegration(const Model::UpdateServiceIntegrationRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceIntegrationOutcomeCallable UpdateServiceIntegrationCallable(const Model::UpdateServiceIntegrationRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceIntegrationAsync(const Model::UpdateServiceIntegrationRequest& request, const UpdateServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddNotificationChannelAsyncHelper(const Model::AddNotificationChannelRequest& request, const AddNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountHealthAsyncHelper(const Model::DescribeAccountHealthRequest& request, const DescribeAccountHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountOverviewAsyncHelper(const Model::DescribeAccountOverviewRequest& request, const DescribeAccountOverviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAnomalyAsyncHelper(const Model::DescribeAnomalyRequest& request, const DescribeAnomalyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInsightAsyncHelper(const Model::DescribeInsightRequest& request, const DescribeInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeResourceCollectionHealthAsyncHelper(const Model::DescribeResourceCollectionHealthRequest& request, const DescribeResourceCollectionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeServiceIntegrationAsyncHelper(const Model::DescribeServiceIntegrationRequest& request, const DescribeServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceCollectionAsyncHelper(const Model::GetResourceCollectionRequest& request, const GetResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAnomaliesForInsightAsyncHelper(const Model::ListAnomaliesForInsightRequest& request, const ListAnomaliesForInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventsAsyncHelper(const Model::ListEventsRequest& request, const ListEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInsightsAsyncHelper(const Model::ListInsightsRequest& request, const ListInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNotificationChannelsAsyncHelper(const Model::ListNotificationChannelsRequest& request, const ListNotificationChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecommendationsAsyncHelper(const Model::ListRecommendationsRequest& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutFeedbackAsyncHelper(const Model::PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveNotificationChannelAsyncHelper(const Model::RemoveNotificationChannelRequest& request, const RemoveNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchInsightsAsyncHelper(const Model::SearchInsightsRequest& request, const SearchInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResourceCollectionAsyncHelper(const Model::UpdateResourceCollectionRequest& request, const UpdateResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServiceIntegrationAsyncHelper(const Model::UpdateServiceIntegrationRequest& request, const UpdateServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DevOpsGuru
} // namespace Aws
