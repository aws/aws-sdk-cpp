﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/docdb-elastic/DocDBElasticServiceClientModel.h>

namespace Aws
{
namespace DocDBElastic
{
  /**
   * <p>The new Amazon Elastic DocumentDB service endpoint.</p>
   */
  class AWS_DOCDBELASTIC_API DocDBElasticClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DocDBElasticClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef DocDBElasticClientConfiguration ClientConfigurationType;
      typedef DocDBElasticEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DocDBElasticClient(const Aws::DocDBElastic::DocDBElasticClientConfiguration& clientConfiguration = Aws::DocDBElastic::DocDBElasticClientConfiguration(),
                           std::shared_ptr<DocDBElasticEndpointProviderBase> endpointProvider = Aws::MakeShared<DocDBElasticEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DocDBElasticClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<DocDBElasticEndpointProviderBase> endpointProvider = Aws::MakeShared<DocDBElasticEndpointProvider>(ALLOCATION_TAG),
                           const Aws::DocDBElastic::DocDBElasticClientConfiguration& clientConfiguration = Aws::DocDBElastic::DocDBElasticClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DocDBElasticClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<DocDBElasticEndpointProviderBase> endpointProvider = Aws::MakeShared<DocDBElasticEndpointProvider>(ALLOCATION_TAG),
                           const Aws::DocDBElastic::DocDBElasticClientConfiguration& clientConfiguration = Aws::DocDBElastic::DocDBElasticClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DocDBElasticClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DocDBElasticClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DocDBElasticClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DocDBElasticClient();

        /**
         * <p>Creates a new Elastic DocumentDB cluster and returns its Cluster
         * structure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        Model::CreateClusterOutcomeCallable CreateClusterCallable(const CreateClusterRequestT& request) const
        {
            return SubmitCallable(&DocDBElasticClient::CreateCluster, request);
        }

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        void CreateClusterAsync(const CreateClusterRequestT& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBElasticClient::CreateCluster, request, handler, context);
        }

        /**
         * <p>Creates a snapshot of a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/CreateClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterSnapshotOutcome CreateClusterSnapshot(const Model::CreateClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateClusterSnapshotRequestT = Model::CreateClusterSnapshotRequest>
        Model::CreateClusterSnapshotOutcomeCallable CreateClusterSnapshotCallable(const CreateClusterSnapshotRequestT& request) const
        {
            return SubmitCallable(&DocDBElasticClient::CreateClusterSnapshot, request);
        }

        /**
         * An Async wrapper for CreateClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateClusterSnapshotRequestT = Model::CreateClusterSnapshotRequest>
        void CreateClusterSnapshotAsync(const CreateClusterSnapshotRequestT& request, const CreateClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBElasticClient::CreateClusterSnapshot, request, handler, context);
        }

        /**
         * <p>Delete a Elastic DocumentDB cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const DeleteClusterRequestT& request) const
        {
            return SubmitCallable(&DocDBElasticClient::DeleteCluster, request);
        }

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        void DeleteClusterAsync(const DeleteClusterRequestT& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBElasticClient::DeleteCluster, request, handler, context);
        }

        /**
         * <p>Delete a Elastic DocumentDB snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/DeleteClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterSnapshotOutcome DeleteClusterSnapshot(const Model::DeleteClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteClusterSnapshotRequestT = Model::DeleteClusterSnapshotRequest>
        Model::DeleteClusterSnapshotOutcomeCallable DeleteClusterSnapshotCallable(const DeleteClusterSnapshotRequestT& request) const
        {
            return SubmitCallable(&DocDBElasticClient::DeleteClusterSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteClusterSnapshotRequestT = Model::DeleteClusterSnapshotRequest>
        void DeleteClusterSnapshotAsync(const DeleteClusterSnapshotRequestT& request, const DeleteClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBElasticClient::DeleteClusterSnapshot, request, handler, context);
        }

        /**
         * <p>Returns information about a specific Elastic DocumentDB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/GetCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClusterOutcome GetCluster(const Model::GetClusterRequest& request) const;

        /**
         * A Callable wrapper for GetCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetClusterRequestT = Model::GetClusterRequest>
        Model::GetClusterOutcomeCallable GetClusterCallable(const GetClusterRequestT& request) const
        {
            return SubmitCallable(&DocDBElasticClient::GetCluster, request);
        }

        /**
         * An Async wrapper for GetCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetClusterRequestT = Model::GetClusterRequest>
        void GetClusterAsync(const GetClusterRequestT& request, const GetClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBElasticClient::GetCluster, request, handler, context);
        }

        /**
         * <p>Returns information about a specific Elastic DocumentDB
         * snapshot</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/GetClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClusterSnapshotOutcome GetClusterSnapshot(const Model::GetClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for GetClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetClusterSnapshotRequestT = Model::GetClusterSnapshotRequest>
        Model::GetClusterSnapshotOutcomeCallable GetClusterSnapshotCallable(const GetClusterSnapshotRequestT& request) const
        {
            return SubmitCallable(&DocDBElasticClient::GetClusterSnapshot, request);
        }

        /**
         * An Async wrapper for GetClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetClusterSnapshotRequestT = Model::GetClusterSnapshotRequest>
        void GetClusterSnapshotAsync(const GetClusterSnapshotRequestT& request, const GetClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBElasticClient::GetClusterSnapshot, request, handler, context);
        }

        /**
         * <p>Returns information about Elastic DocumentDB snapshots for a specified
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/ListClusterSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClusterSnapshotsOutcome ListClusterSnapshots(const Model::ListClusterSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for ListClusterSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClusterSnapshotsRequestT = Model::ListClusterSnapshotsRequest>
        Model::ListClusterSnapshotsOutcomeCallable ListClusterSnapshotsCallable(const ListClusterSnapshotsRequestT& request) const
        {
            return SubmitCallable(&DocDBElasticClient::ListClusterSnapshots, request);
        }

        /**
         * An Async wrapper for ListClusterSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClusterSnapshotsRequestT = Model::ListClusterSnapshotsRequest>
        void ListClusterSnapshotsAsync(const ListClusterSnapshotsRequestT& request, const ListClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBElasticClient::ListClusterSnapshots, request, handler, context);
        }

        /**
         * <p>Returns information about provisioned Elastic DocumentDB
         * clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * A Callable wrapper for ListClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        Model::ListClustersOutcomeCallable ListClustersCallable(const ListClustersRequestT& request) const
        {
            return SubmitCallable(&DocDBElasticClient::ListClusters, request);
        }

        /**
         * An Async wrapper for ListClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        void ListClustersAsync(const ListClustersRequestT& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBElasticClient::ListClusters, request, handler, context);
        }

        /**
         * <p>Lists all tags on a Elastic DocumentDB resource</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&DocDBElasticClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBElasticClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Restores a Elastic DocumentDB cluster from a snapshot.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/RestoreClusterFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreClusterFromSnapshotOutcome RestoreClusterFromSnapshot(const Model::RestoreClusterFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreClusterFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreClusterFromSnapshotRequestT = Model::RestoreClusterFromSnapshotRequest>
        Model::RestoreClusterFromSnapshotOutcomeCallable RestoreClusterFromSnapshotCallable(const RestoreClusterFromSnapshotRequestT& request) const
        {
            return SubmitCallable(&DocDBElasticClient::RestoreClusterFromSnapshot, request);
        }

        /**
         * An Async wrapper for RestoreClusterFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreClusterFromSnapshotRequestT = Model::RestoreClusterFromSnapshotRequest>
        void RestoreClusterFromSnapshotAsync(const RestoreClusterFromSnapshotRequestT& request, const RestoreClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBElasticClient::RestoreClusterFromSnapshot, request, handler, context);
        }

        /**
         * <p>Adds metadata tags to a Elastic DocumentDB resource</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&DocDBElasticClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBElasticClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes metadata tags to a Elastic DocumentDB resource</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&DocDBElasticClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBElasticClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Modifies a Elastic DocumentDB cluster. This includes updating
         * admin-username/password, upgrading API version setting up a backup window and
         * maintenance window</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/UpdateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterOutcome UpdateCluster(const Model::UpdateClusterRequest& request) const;

        /**
         * A Callable wrapper for UpdateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateClusterRequestT = Model::UpdateClusterRequest>
        Model::UpdateClusterOutcomeCallable UpdateClusterCallable(const UpdateClusterRequestT& request) const
        {
            return SubmitCallable(&DocDBElasticClient::UpdateCluster, request);
        }

        /**
         * An Async wrapper for UpdateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClusterRequestT = Model::UpdateClusterRequest>
        void UpdateClusterAsync(const UpdateClusterRequestT& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBElasticClient::UpdateCluster, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DocDBElasticEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DocDBElasticClient>;
      void init(const DocDBElasticClientConfiguration& clientConfiguration);

      DocDBElasticClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DocDBElasticEndpointProviderBase> m_endpointProvider;
  };

} // namespace DocDBElastic
} // namespace Aws
