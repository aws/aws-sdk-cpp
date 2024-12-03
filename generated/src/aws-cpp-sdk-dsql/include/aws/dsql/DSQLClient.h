/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dsql/DSQLServiceClientModel.h>

namespace Aws
{
namespace DSQL
{
  /**
   * <p>Amazon Aurora DSQL is a serverless, distributed SQL database suitable for
   * workloads of any size. Aurora DSQL provides you with a familiar relational
   * database experience based on PostgreSQL that lets you get started quickly.
   * Aurora DSQL offers reliable multi-AZ database clusters in single and
   * multi-Region configurations. Aurora DSQL supports active-active read and write
   * to endpoints, so Aurora DSQL is always available even if an Availability Zone or
   * if an AWS Region is unavailable. With Aurora DSQL, you don't have to manage,
   * patch, or scale any servers to manage, patch, or scale. There are no maintenance
   * windows or planned downtime.</p>
   */
  class AWS_DSQL_API DSQLClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DSQLClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef DSQLClientConfiguration ClientConfigurationType;
      typedef DSQLEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DSQLClient(const Aws::DSQL::DSQLClientConfiguration& clientConfiguration = Aws::DSQL::DSQLClientConfiguration(),
                   std::shared_ptr<DSQLEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DSQLClient(const Aws::Auth::AWSCredentials& credentials,
                   std::shared_ptr<DSQLEndpointProviderBase> endpointProvider = nullptr,
                   const Aws::DSQL::DSQLClientConfiguration& clientConfiguration = Aws::DSQL::DSQLClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DSQLClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<DSQLEndpointProviderBase> endpointProvider = nullptr,
                   const Aws::DSQL::DSQLClientConfiguration& clientConfiguration = Aws::DSQL::DSQLClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DSQLClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DSQLClient(const Aws::Auth::AWSCredentials& credentials,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DSQLClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DSQLClient();

        /**
         * <p>Create a cluster</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        Model::CreateClusterOutcomeCallable CreateClusterCallable(const CreateClusterRequestT& request = {}) const
        {
            return SubmitCallable(&DSQLClient::CreateCluster, request);
        }

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        void CreateClusterAsync(const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateClusterRequestT& request = {}) const
        {
            return SubmitAsync(&DSQLClient::CreateCluster, request, handler, context);
        }

        /**
         * <p>Create clusters in multiple regions</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/CreateMultiRegionClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMultiRegionClustersOutcome CreateMultiRegionClusters(const Model::CreateMultiRegionClustersRequest& request) const;

        /**
         * A Callable wrapper for CreateMultiRegionClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMultiRegionClustersRequestT = Model::CreateMultiRegionClustersRequest>
        Model::CreateMultiRegionClustersOutcomeCallable CreateMultiRegionClustersCallable(const CreateMultiRegionClustersRequestT& request) const
        {
            return SubmitCallable(&DSQLClient::CreateMultiRegionClusters, request);
        }

        /**
         * An Async wrapper for CreateMultiRegionClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMultiRegionClustersRequestT = Model::CreateMultiRegionClustersRequest>
        void CreateMultiRegionClustersAsync(const CreateMultiRegionClustersRequestT& request, const CreateMultiRegionClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DSQLClient::CreateMultiRegionClusters, request, handler, context);
        }

        /**
         * <p>Delete a cluster</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const DeleteClusterRequestT& request) const
        {
            return SubmitCallable(&DSQLClient::DeleteCluster, request);
        }

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        void DeleteClusterAsync(const DeleteClusterRequestT& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DSQLClient::DeleteCluster, request, handler, context);
        }

        /**
         * <p>Delete clusters in multiple regions</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/DeleteMultiRegionClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMultiRegionClustersOutcome DeleteMultiRegionClusters(const Model::DeleteMultiRegionClustersRequest& request) const;

        /**
         * A Callable wrapper for DeleteMultiRegionClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMultiRegionClustersRequestT = Model::DeleteMultiRegionClustersRequest>
        Model::DeleteMultiRegionClustersOutcomeCallable DeleteMultiRegionClustersCallable(const DeleteMultiRegionClustersRequestT& request) const
        {
            return SubmitCallable(&DSQLClient::DeleteMultiRegionClusters, request);
        }

        /**
         * An Async wrapper for DeleteMultiRegionClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMultiRegionClustersRequestT = Model::DeleteMultiRegionClustersRequest>
        void DeleteMultiRegionClustersAsync(const DeleteMultiRegionClustersRequestT& request, const DeleteMultiRegionClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DSQLClient::DeleteMultiRegionClusters, request, handler, context);
        }

        /**
         * <p>Get a cluster</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/GetCluster">AWS API
         * Reference</a></p>
         */
        virtual Model::GetClusterOutcome GetCluster(const Model::GetClusterRequest& request) const;

        /**
         * A Callable wrapper for GetCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetClusterRequestT = Model::GetClusterRequest>
        Model::GetClusterOutcomeCallable GetClusterCallable(const GetClusterRequestT& request) const
        {
            return SubmitCallable(&DSQLClient::GetCluster, request);
        }

        /**
         * An Async wrapper for GetCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetClusterRequestT = Model::GetClusterRequest>
        void GetClusterAsync(const GetClusterRequestT& request, const GetClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DSQLClient::GetCluster, request, handler, context);
        }

        /**
         * <p>List clusters</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        Model::ListClustersOutcomeCallable ListClustersCallable(const ListClustersRequestT& request = {}) const
        {
            return SubmitCallable(&DSQLClient::ListClusters, request);
        }

        /**
         * An Async wrapper for ListClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        void ListClustersAsync(const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListClustersRequestT& request = {}) const
        {
            return SubmitAsync(&DSQLClient::ListClusters, request, handler, context);
        }

        /**
         * <p>List all Tags on an ARN</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&DSQLClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DSQLClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Add Tags to an ARN</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&DSQLClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DSQLClient::TagResource, request, handler, context);
        }

        /**
         * <p>Remove Tags from an ARN</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&DSQLClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DSQLClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Update a cluster</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/UpdateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterOutcome UpdateCluster(const Model::UpdateClusterRequest& request) const;

        /**
         * A Callable wrapper for UpdateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateClusterRequestT = Model::UpdateClusterRequest>
        Model::UpdateClusterOutcomeCallable UpdateClusterCallable(const UpdateClusterRequestT& request) const
        {
            return SubmitCallable(&DSQLClient::UpdateCluster, request);
        }

        /**
         * An Async wrapper for UpdateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClusterRequestT = Model::UpdateClusterRequest>
        void UpdateClusterAsync(const UpdateClusterRequestT& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DSQLClient::UpdateCluster, request, handler, context);
        }

        Aws::Utils::Outcome<String, DSQLError> GenerateDBConnectAuthToken(const Aws::String& hostname, const Aws::String& region, long long expiresIn = 900);
        Aws::Utils::Outcome<String, DSQLError> GenerateDBConnectAdminAuthToken(const Aws::String& hostname, const Aws::String& region, long long expiresIn = 900);

      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DSQLEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DSQLClient>;
      void init(const DSQLClientConfiguration& clientConfiguration);

      DSQLClientConfiguration m_clientConfiguration;
      std::shared_ptr<DSQLEndpointProviderBase> m_endpointProvider;
  };

} // namespace DSQL
} // namespace Aws
