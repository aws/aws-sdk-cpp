/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kendra-ranking/KendraRankingServiceClientModel.h>

namespace Aws
{
namespace KendraRanking
{
  /**
   * <p>Amazon Kendra Intelligent Ranking uses Amazon Kendra semantic search
   * capabilities to intelligently re-rank a search service's results.</p>
   */
  class AWS_KENDRARANKING_API KendraRankingClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<KendraRankingClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef KendraRankingClientConfiguration ClientConfigurationType;
      typedef KendraRankingEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KendraRankingClient(const Aws::KendraRanking::KendraRankingClientConfiguration& clientConfiguration = Aws::KendraRanking::KendraRankingClientConfiguration(),
                            std::shared_ptr<KendraRankingEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KendraRankingClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<KendraRankingEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::KendraRanking::KendraRankingClientConfiguration& clientConfiguration = Aws::KendraRanking::KendraRankingClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KendraRankingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<KendraRankingEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::KendraRanking::KendraRankingClientConfiguration& clientConfiguration = Aws::KendraRanking::KendraRankingClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KendraRankingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KendraRankingClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KendraRankingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KendraRankingClient();

        /**
         * <p>Creates a rescore execution plan. A rescore execution plan is an Amazon
         * Kendra Intelligent Ranking resource used for provisioning the
         * <code>Rescore</code> API. You set the number of capacity units that you require
         * for Amazon Kendra Intelligent Ranking to rescore or re-rank a search service's
         * results.</p> <p>For an example of using the
         * <code>CreateRescoreExecutionPlan</code> API, including using the Python and Java
         * SDKs, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/search-service-rerank.html">Semantically
         * ranking a search service's results</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/CreateRescoreExecutionPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRescoreExecutionPlanOutcome CreateRescoreExecutionPlan(const Model::CreateRescoreExecutionPlanRequest& request) const;

        /**
         * A Callable wrapper for CreateRescoreExecutionPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRescoreExecutionPlanRequestT = Model::CreateRescoreExecutionPlanRequest>
        Model::CreateRescoreExecutionPlanOutcomeCallable CreateRescoreExecutionPlanCallable(const CreateRescoreExecutionPlanRequestT& request) const
        {
            return SubmitCallable(&KendraRankingClient::CreateRescoreExecutionPlan, request);
        }

        /**
         * An Async wrapper for CreateRescoreExecutionPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRescoreExecutionPlanRequestT = Model::CreateRescoreExecutionPlanRequest>
        void CreateRescoreExecutionPlanAsync(const CreateRescoreExecutionPlanRequestT& request, const CreateRescoreExecutionPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraRankingClient::CreateRescoreExecutionPlan, request, handler, context);
        }

        /**
         * <p>Deletes a rescore execution plan. A rescore execution plan is an Amazon
         * Kendra Intelligent Ranking resource used for provisioning the
         * <code>Rescore</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/DeleteRescoreExecutionPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRescoreExecutionPlanOutcome DeleteRescoreExecutionPlan(const Model::DeleteRescoreExecutionPlanRequest& request) const;

        /**
         * A Callable wrapper for DeleteRescoreExecutionPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRescoreExecutionPlanRequestT = Model::DeleteRescoreExecutionPlanRequest>
        Model::DeleteRescoreExecutionPlanOutcomeCallable DeleteRescoreExecutionPlanCallable(const DeleteRescoreExecutionPlanRequestT& request) const
        {
            return SubmitCallable(&KendraRankingClient::DeleteRescoreExecutionPlan, request);
        }

        /**
         * An Async wrapper for DeleteRescoreExecutionPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRescoreExecutionPlanRequestT = Model::DeleteRescoreExecutionPlanRequest>
        void DeleteRescoreExecutionPlanAsync(const DeleteRescoreExecutionPlanRequestT& request, const DeleteRescoreExecutionPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraRankingClient::DeleteRescoreExecutionPlan, request, handler, context);
        }

        /**
         * <p>Gets information about a rescore execution plan. A rescore execution plan is
         * an Amazon Kendra Intelligent Ranking resource used for provisioning the
         * <code>Rescore</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/DescribeRescoreExecutionPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRescoreExecutionPlanOutcome DescribeRescoreExecutionPlan(const Model::DescribeRescoreExecutionPlanRequest& request) const;

        /**
         * A Callable wrapper for DescribeRescoreExecutionPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRescoreExecutionPlanRequestT = Model::DescribeRescoreExecutionPlanRequest>
        Model::DescribeRescoreExecutionPlanOutcomeCallable DescribeRescoreExecutionPlanCallable(const DescribeRescoreExecutionPlanRequestT& request) const
        {
            return SubmitCallable(&KendraRankingClient::DescribeRescoreExecutionPlan, request);
        }

        /**
         * An Async wrapper for DescribeRescoreExecutionPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRescoreExecutionPlanRequestT = Model::DescribeRescoreExecutionPlanRequest>
        void DescribeRescoreExecutionPlanAsync(const DescribeRescoreExecutionPlanRequestT& request, const DescribeRescoreExecutionPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraRankingClient::DescribeRescoreExecutionPlan, request, handler, context);
        }

        /**
         * <p>Lists your rescore execution plans. A rescore execution plan is an Amazon
         * Kendra Intelligent Ranking resource used for provisioning the
         * <code>Rescore</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/ListRescoreExecutionPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRescoreExecutionPlansOutcome ListRescoreExecutionPlans(const Model::ListRescoreExecutionPlansRequest& request) const;

        /**
         * A Callable wrapper for ListRescoreExecutionPlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRescoreExecutionPlansRequestT = Model::ListRescoreExecutionPlansRequest>
        Model::ListRescoreExecutionPlansOutcomeCallable ListRescoreExecutionPlansCallable(const ListRescoreExecutionPlansRequestT& request) const
        {
            return SubmitCallable(&KendraRankingClient::ListRescoreExecutionPlans, request);
        }

        /**
         * An Async wrapper for ListRescoreExecutionPlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRescoreExecutionPlansRequestT = Model::ListRescoreExecutionPlansRequest>
        void ListRescoreExecutionPlansAsync(const ListRescoreExecutionPlansRequestT& request, const ListRescoreExecutionPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraRankingClient::ListRescoreExecutionPlans, request, handler, context);
        }

        /**
         * <p>Gets a list of tags associated with a specified resource. A rescore execution
         * plan is an example of a resource that can have tags associated with
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&KendraRankingClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraRankingClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Rescores or re-ranks search results from a search service such as OpenSearch
         * (self managed). You use the semantic search capabilities of Amazon Kendra
         * Intelligent Ranking to improve the search service's results.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/Rescore">AWS
         * API Reference</a></p>
         */
        virtual Model::RescoreOutcome Rescore(const Model::RescoreRequest& request) const;

        /**
         * A Callable wrapper for Rescore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RescoreRequestT = Model::RescoreRequest>
        Model::RescoreOutcomeCallable RescoreCallable(const RescoreRequestT& request) const
        {
            return SubmitCallable(&KendraRankingClient::Rescore, request);
        }

        /**
         * An Async wrapper for Rescore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RescoreRequestT = Model::RescoreRequest>
        void RescoreAsync(const RescoreRequestT& request, const RescoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraRankingClient::Rescore, request, handler, context);
        }

        /**
         * <p>Adds a specified tag to a specified rescore execution plan. A rescore
         * execution plan is an Amazon Kendra Intelligent Ranking resource used for
         * provisioning the <code>Rescore</code> API. If the tag already exists, the
         * existing value is replaced with the new value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&KendraRankingClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraRankingClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag from a rescore execution plan. A rescore execution plan is an
         * Amazon Kendra Intelligent Ranking resource used for provisioning the
         * <code>Rescore</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&KendraRankingClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraRankingClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a rescore execution plan. A rescore execution plan is an Amazon
         * Kendra Intelligent Ranking resource used for provisioning the
         * <code>Rescore</code> API. You can update the number of capacity units you
         * require for Amazon Kendra Intelligent Ranking to rescore or re-rank a search
         * service's results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/UpdateRescoreExecutionPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRescoreExecutionPlanOutcome UpdateRescoreExecutionPlan(const Model::UpdateRescoreExecutionPlanRequest& request) const;

        /**
         * A Callable wrapper for UpdateRescoreExecutionPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRescoreExecutionPlanRequestT = Model::UpdateRescoreExecutionPlanRequest>
        Model::UpdateRescoreExecutionPlanOutcomeCallable UpdateRescoreExecutionPlanCallable(const UpdateRescoreExecutionPlanRequestT& request) const
        {
            return SubmitCallable(&KendraRankingClient::UpdateRescoreExecutionPlan, request);
        }

        /**
         * An Async wrapper for UpdateRescoreExecutionPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRescoreExecutionPlanRequestT = Model::UpdateRescoreExecutionPlanRequest>
        void UpdateRescoreExecutionPlanAsync(const UpdateRescoreExecutionPlanRequestT& request, const UpdateRescoreExecutionPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraRankingClient::UpdateRescoreExecutionPlan, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KendraRankingEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KendraRankingClient>;
      void init(const KendraRankingClientConfiguration& clientConfiguration);

      KendraRankingClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<KendraRankingEndpointProviderBase> m_endpointProvider;
  };

} // namespace KendraRanking
} // namespace Aws
