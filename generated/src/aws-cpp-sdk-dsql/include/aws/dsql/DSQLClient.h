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
   * <p>This is an interface reference for Amazon Aurora DSQL. It contains
   * documentation for one of the programming or command line interfaces you can use
   * to manage Amazon Aurora DSQL.</p> <p>Amazon Aurora DSQL is a serverless,
   * distributed SQL database suitable for workloads of any size. is available in
   * both single-Region and multi-Region configurations, so your clusters and
   * databases are always available even if an Availability Zone or an Amazon Web
   * Services Region are unavailable. lets you focus on using your data to acquire
   * new insights for your business and customers.</p>
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
         * <p>The CreateCluster API allows you to create both single-region clusters and
         * multi-Region clusters. With the addition of the <i>multiRegionProperties</i>
         * parameter, you can create a cluster with witness Region support and establish
         * peer relationships with clusters in other Regions during creation.</p> 
         * <p>Creating multi-Region clusters requires additional IAM permissions beyond
         * those needed for single-Region clusters, as detailed in the <b>Required
         * permissions</b> section below.</p>  <p> <b>Required permissions</b> </p>
         * <dl> <dt>dsql:CreateCluster</dt> <dd> <p>Required to create a cluster.</p>
         * <p>Resources: <code>arn:aws:dsql:region:account-id:cluster/ *</code> </p> </dd>
         * <dt>dsql:TagResource</dt> <dd> <p>Permission to add tags to a resource.</p>
         * <p>Resources: <code>arn:aws:dsql:region:account-id:cluster/ *</code> </p> </dd>
         * <dt>dsql:PutMultiRegionProperties</dt> <dd> <p>Permission to configure
         * multi-region properties for a cluster.</p> <p>Resources:
         * <code>arn:aws:dsql:region:account-id:cluster/ *</code> </p> </dd>
         * <dt>dsql:AddPeerCluster</dt> <dd> <p>When specifying
         * <code>multiRegionProperties.clusters</code>, permission to add peer
         * clusters.</p> <p>Resources:</p> <ul> <li> <p>Local cluster:
         * <code>arn:aws:dsql:region:account-id:cluster/ *</code> </p> </li> <li> <p>Each
         * peer cluster: exact ARN of each specified peer cluster</p> </li> </ul> </dd>
         * <dt>dsql:PutWitnessRegion</dt> <dd> <p>When specifying
         * <code>multiRegionProperties.witnessRegion</code>, permission to set a witness
         * Region. This permission is checked both in the cluster Region and in the witness
         * Region.</p> <p>Resources: <code>arn:aws:dsql:region:account-id:cluster/ *</code>
         * </p> <p>Condition Keys: <code>dsql:WitnessRegion</code> (matching the specified
         * witness region)</p> </dd> </dl>  <ul> <li> <p>The witness Region
         * specified in <code>multiRegionProperties.witnessRegion</code> cannot be the same
         * as the cluster's Region.</p> </li> </ul> <p><h3>See Also:</h3>   <a
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
         * <p>Deletes a cluster in Amazon Aurora DSQL.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves information about a cluster.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves the VPC endpoint service name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/GetVpcEndpointServiceName">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpcEndpointServiceNameOutcome GetVpcEndpointServiceName(const Model::GetVpcEndpointServiceNameRequest& request) const;

        /**
         * A Callable wrapper for GetVpcEndpointServiceName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVpcEndpointServiceNameRequestT = Model::GetVpcEndpointServiceNameRequest>
        Model::GetVpcEndpointServiceNameOutcomeCallable GetVpcEndpointServiceNameCallable(const GetVpcEndpointServiceNameRequestT& request) const
        {
            return SubmitCallable(&DSQLClient::GetVpcEndpointServiceName, request);
        }

        /**
         * An Async wrapper for GetVpcEndpointServiceName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVpcEndpointServiceNameRequestT = Model::GetVpcEndpointServiceNameRequest>
        void GetVpcEndpointServiceNameAsync(const GetVpcEndpointServiceNameRequestT& request, const GetVpcEndpointServiceNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DSQLClient::GetVpcEndpointServiceName, request, handler, context);
        }

        /**
         * <p>Retrieves information about a list of clusters.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists all of the tags for a resource.</p><p><h3>See Also:</h3>   <a
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
         * <p>Tags a resource with a map of key and value pairs.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/TagResource">AWS
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
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
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
         * <p>The <i>UpdateCluster</i> API allows you to modify both single-Region and
         * multi-Region cluster configurations. With the <i>multiRegionProperties</i>
         * parameter, you can add or modify witness Region support and manage peer
         * relationships with clusters in other Regions.</p>  <p>Note that updating
         * multi-region clusters requires additional IAM permissions beyond those needed
         * for standard cluster updates, as detailed in the Permissions section.</p>
         *  <p> <b>Required permissions</b> </p> <dl> <dt>dsql:UpdateCluster</dt>
         * <dd> <p>Permission to update a DSQL cluster.</p> <p>Resources:
         * <code>arn:aws:dsql:<i>region</i>:<i>account-id</i>:cluster/<i>cluster-id</i>
         * </code> </p> </dd> </dl> <dl> <dt>dsql:PutMultiRegionProperties</dt> <dd>
         * <p>Permission to configure multi-Region properties for a cluster.</p>
         * <p>Resources:
         * <code>arn:aws:dsql:<i>region</i>:<i>account-id</i>:cluster/<i>cluster-id</i>
         * </code> </p> </dd> </dl> <dl> <dt>dsql:GetCluster</dt> <dd> <p>Permission to
         * retrieve cluster information.</p> <p>Resources:
         * <code>arn:aws:dsql:<i>region</i>:<i>account-id</i>:cluster/<i>cluster-id</i>
         * </code> </p> </dd> <dt>dsql:AddPeerCluster</dt> <dd> <p>Permission to add peer
         * clusters.</p> <p>Resources:</p> <ul> <li> <p>Local cluster:
         * <code>arn:aws:dsql:<i>region</i>:<i>account-id</i>:cluster/<i>cluster-id</i>
         * </code> </p> </li> <li> <p>Each peer cluster: exact ARN of each specified peer
         * cluster</p> </li> </ul> </dd> <dt>dsql:RemovePeerCluster</dt> <dd> <p>Permission
         * to remove peer clusters. The <i>dsql:RemovePeerCluster</i> permission uses a
         * wildcard ARN pattern to simplify permission management during updates.</p>
         * <p>Resources: <code>arn:aws:dsql:*:<i>account-id</i>:cluster/ *</code> </p> </dd>
         * </dl> <dl> <dt>dsql:PutWitnessRegion</dt> <dd> <p>Permission to set a witness
         * Region.</p> <p>Resources:
         * <code>arn:aws:dsql:<i>region</i>:<i>account-id</i>:cluster/<i>cluster-id</i>
         * </code> </p> <p>Condition Keys: dsql:WitnessRegion (matching the specified
         * witness Region)</p> <p> <b>This permission is checked both in the cluster Region
         * and in the witness Region.</b> </p> </dd> </dl>  <ul> <li> <p>The
         * witness region specified in <code>multiRegionProperties.witnessRegion</code>
         * cannot be the same as the cluster's Region.</p> </li> <li> <p>When updating
         * clusters with peer relationships, permissions are checked for both adding and
         * removing peers.</p> </li> <li> <p>The <code>dsql:RemovePeerCluster</code>
         * permission uses a wildcard ARN pattern to simplify permission management during
         * updates.</p> </li> </ul> <p><h3>See Also:</h3>   <a
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
