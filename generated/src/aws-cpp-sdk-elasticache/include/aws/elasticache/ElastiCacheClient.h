/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticache/ElastiCacheServiceClientModel.h>

namespace Aws
{
namespace ElastiCache
{
  /**
   * <fullname>Amazon ElastiCache</fullname> <p>Amazon ElastiCache is a web service
   * that makes it easier to set up, operate, and scale a distributed cache in the
   * cloud.</p> <p>With ElastiCache, customers get all of the benefits of a
   * high-performance, in-memory cache with less of the administrative burden
   * involved in launching and managing a distributed cache. The service makes setup,
   * scaling, and cluster failure handling much simpler than in a self-managed cache
   * deployment.</p> <p>In addition, through integration with Amazon CloudWatch,
   * customers get enhanced visibility into the key performance statistics associated
   * with their cache and can receive alarms if a part of their cache runs hot.</p>
   */
  class AWS_ELASTICACHE_API ElastiCacheClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<ElastiCacheClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ElastiCacheClientConfiguration ClientConfigurationType;
      typedef ElastiCacheEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElastiCacheClient(const Aws::ElastiCache::ElastiCacheClientConfiguration& clientConfiguration = Aws::ElastiCache::ElastiCacheClientConfiguration(),
                          std::shared_ptr<ElastiCacheEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElastiCacheClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<ElastiCacheEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::ElastiCache::ElastiCacheClientConfiguration& clientConfiguration = Aws::ElastiCache::ElastiCacheClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElastiCacheClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<ElastiCacheEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::ElastiCache::ElastiCacheClientConfiguration& clientConfiguration = Aws::ElastiCache::ElastiCacheClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElastiCacheClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElastiCacheClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElastiCacheClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ElastiCacheClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>A tag is a key-value pair where the key and value are case-sensitive. You can
         * use tags to categorize and track all your ElastiCache resources, with the
         * exception of global replication group. When you add or remove tags on
         * replication groups, those actions will be replicated to all nodes in the
         * replication group. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/IAM.ResourceLevelPermissions.html">Resource-level
         * permissions</a>.</p> <p> For example, you can use cost-allocation tags to your
         * ElastiCache resources, Amazon generates a cost allocation report as a
         * comma-separated value (CSV) file with your usage and costs aggregated by your
         * tags. You can apply tags that represent business categories (such as cost
         * centers, application names, or owners) to organize your costs across multiple
         * services.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Tagging.html">Using
         * Cost Allocation Tags in Amazon ElastiCache</a> in the <i>ElastiCache User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * A Callable wrapper for AddTagsToResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const AddTagsToResourceRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::AddTagsToResource, request);
        }

        /**
         * An Async wrapper for AddTagsToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        void AddTagsToResourceAsync(const AddTagsToResourceRequestT& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::AddTagsToResource, request, handler, context);
        }

        /**
         * <p>Allows network ingress to a cache security group. Applications using
         * ElastiCache must be running on Amazon EC2, and Amazon EC2 security groups are
         * used as the authorization mechanism.</p>  <p>You cannot authorize ingress
         * from an Amazon EC2 security group in one region to an ElastiCache cluster in
         * another region.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/AuthorizeCacheSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeCacheSecurityGroupIngressOutcome AuthorizeCacheSecurityGroupIngress(const Model::AuthorizeCacheSecurityGroupIngressRequest& request) const;

        /**
         * A Callable wrapper for AuthorizeCacheSecurityGroupIngress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AuthorizeCacheSecurityGroupIngressRequestT = Model::AuthorizeCacheSecurityGroupIngressRequest>
        Model::AuthorizeCacheSecurityGroupIngressOutcomeCallable AuthorizeCacheSecurityGroupIngressCallable(const AuthorizeCacheSecurityGroupIngressRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::AuthorizeCacheSecurityGroupIngress, request);
        }

        /**
         * An Async wrapper for AuthorizeCacheSecurityGroupIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AuthorizeCacheSecurityGroupIngressRequestT = Model::AuthorizeCacheSecurityGroupIngressRequest>
        void AuthorizeCacheSecurityGroupIngressAsync(const AuthorizeCacheSecurityGroupIngressRequestT& request, const AuthorizeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::AuthorizeCacheSecurityGroupIngress, request, handler, context);
        }

        /**
         * <p>Apply the service update. For more information on service updates and
         * applying them, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/applying-updates.html">Applying
         * Service Updates</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/BatchApplyUpdateAction">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchApplyUpdateActionOutcome BatchApplyUpdateAction(const Model::BatchApplyUpdateActionRequest& request) const;

        /**
         * A Callable wrapper for BatchApplyUpdateAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchApplyUpdateActionRequestT = Model::BatchApplyUpdateActionRequest>
        Model::BatchApplyUpdateActionOutcomeCallable BatchApplyUpdateActionCallable(const BatchApplyUpdateActionRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::BatchApplyUpdateAction, request);
        }

        /**
         * An Async wrapper for BatchApplyUpdateAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchApplyUpdateActionRequestT = Model::BatchApplyUpdateActionRequest>
        void BatchApplyUpdateActionAsync(const BatchApplyUpdateActionRequestT& request, const BatchApplyUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::BatchApplyUpdateAction, request, handler, context);
        }

        /**
         * <p>Stop the service update. For more information on service updates and stopping
         * them, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/stopping-self-service-updates.html">Stopping
         * Service Updates</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/BatchStopUpdateAction">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStopUpdateActionOutcome BatchStopUpdateAction(const Model::BatchStopUpdateActionRequest& request) const;

        /**
         * A Callable wrapper for BatchStopUpdateAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchStopUpdateActionRequestT = Model::BatchStopUpdateActionRequest>
        Model::BatchStopUpdateActionOutcomeCallable BatchStopUpdateActionCallable(const BatchStopUpdateActionRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::BatchStopUpdateAction, request);
        }

        /**
         * An Async wrapper for BatchStopUpdateAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchStopUpdateActionRequestT = Model::BatchStopUpdateActionRequest>
        void BatchStopUpdateActionAsync(const BatchStopUpdateActionRequestT& request, const BatchStopUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::BatchStopUpdateAction, request, handler, context);
        }

        /**
         * <p>Complete the migration of data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CompleteMigration">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteMigrationOutcome CompleteMigration(const Model::CompleteMigrationRequest& request) const;

        /**
         * A Callable wrapper for CompleteMigration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CompleteMigrationRequestT = Model::CompleteMigrationRequest>
        Model::CompleteMigrationOutcomeCallable CompleteMigrationCallable(const CompleteMigrationRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::CompleteMigration, request);
        }

        /**
         * An Async wrapper for CompleteMigration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CompleteMigrationRequestT = Model::CompleteMigrationRequest>
        void CompleteMigrationAsync(const CompleteMigrationRequestT& request, const CompleteMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::CompleteMigration, request, handler, context);
        }

        /**
         * <p>Creates a copy of an existing serverless cache’s snapshot. Available for
         * Redis only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CopyServerlessCacheSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyServerlessCacheSnapshotOutcome CopyServerlessCacheSnapshot(const Model::CopyServerlessCacheSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CopyServerlessCacheSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyServerlessCacheSnapshotRequestT = Model::CopyServerlessCacheSnapshotRequest>
        Model::CopyServerlessCacheSnapshotOutcomeCallable CopyServerlessCacheSnapshotCallable(const CopyServerlessCacheSnapshotRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::CopyServerlessCacheSnapshot, request);
        }

        /**
         * An Async wrapper for CopyServerlessCacheSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyServerlessCacheSnapshotRequestT = Model::CopyServerlessCacheSnapshotRequest>
        void CopyServerlessCacheSnapshotAsync(const CopyServerlessCacheSnapshotRequestT& request, const CopyServerlessCacheSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::CopyServerlessCacheSnapshot, request, handler, context);
        }

        /**
         * <p>Makes a copy of an existing snapshot.</p>  <p>This operation is valid
         * for Redis only.</p>   <p>Users or groups that have permissions
         * to use the <code>CopySnapshot</code> operation can create their own Amazon S3
         * buckets and copy snapshots to it. To control access to your snapshots, use an
         * IAM policy to control who has the ability to use the <code>CopySnapshot</code>
         * operation. For more information about using IAM to control the use of
         * ElastiCache operations, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html">Exporting
         * Snapshots</a> and <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/IAM.html">Authentication
         * &amp; Access Control</a>.</p>  <p>You could receive the following
         * error messages.</p> <p class="title"> <b>Error Messages</b> </p> <ul> <li> <p>
         * <b>Error Message:</b> The S3 bucket %s is outside of the region.</p> <p>
         * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The S3 bucket %s does not exist.</p> <p>
         * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The S3 bucket %s is not owned by the authenticated
         * user.</p> <p> <b>Solution:</b> Create an Amazon S3 bucket in the same region as
         * your snapshot. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The authenticated user does not have sufficient
         * permissions to perform the desired activity.</p> <p> <b>Solution:</b> Contact
         * your system administrator to get the needed permissions.</p> </li> <li> <p>
         * <b>Error Message:</b> The S3 bucket %s already contains an object with key
         * %s.</p> <p> <b>Solution:</b> Give the <code>TargetSnapshotName</code> a new and
         * unique value. If exporting a snapshot, you could alternatively create a new
         * Amazon S3 bucket and use this same value for
         * <code>TargetSnapshotName</code>.</p> </li> <li> <p> <b>Error Message: </b>
         * ElastiCache has not been granted READ permissions %s on the S3 Bucket.</p> <p>
         * <b>Solution:</b> Add List and Read permissions on the bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> <li> <p> <b>Error Message: </b> ElastiCache has not been
         * granted WRITE permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add
         * Upload/Delete permissions on the bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> <li> <p> <b>Error Message: </b> ElastiCache has not been
         * granted READ_ACP permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add
         * View Permissions on the bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CopySnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopySnapshotOutcome CopySnapshot(const Model::CopySnapshotRequest& request) const;

        /**
         * A Callable wrapper for CopySnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopySnapshotRequestT = Model::CopySnapshotRequest>
        Model::CopySnapshotOutcomeCallable CopySnapshotCallable(const CopySnapshotRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::CopySnapshot, request);
        }

        /**
         * An Async wrapper for CopySnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopySnapshotRequestT = Model::CopySnapshotRequest>
        void CopySnapshotAsync(const CopySnapshotRequestT& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::CopySnapshot, request, handler, context);
        }

        /**
         * <p>Creates a cluster. All nodes in the cluster run the same protocol-compliant
         * cache engine software, either Memcached or Redis.</p> <p>This operation is not
         * supported for Redis (cluster mode enabled) clusters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCacheClusterOutcome CreateCacheCluster(const Model::CreateCacheClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCacheCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCacheClusterRequestT = Model::CreateCacheClusterRequest>
        Model::CreateCacheClusterOutcomeCallable CreateCacheClusterCallable(const CreateCacheClusterRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::CreateCacheCluster, request);
        }

        /**
         * An Async wrapper for CreateCacheCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCacheClusterRequestT = Model::CreateCacheClusterRequest>
        void CreateCacheClusterAsync(const CreateCacheClusterRequestT& request, const CreateCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::CreateCacheCluster, request, handler, context);
        }

        /**
         * <p>Creates a new Amazon ElastiCache cache parameter group. An ElastiCache cache
         * parameter group is a collection of parameters and their values that are applied
         * to all of the nodes in any cluster or replication group using the
         * CacheParameterGroup.</p> <p>A newly created CacheParameterGroup is an exact
         * duplicate of the default parameter group for the CacheParameterGroupFamily. To
         * customize the newly created CacheParameterGroup you can change the values of
         * specific parameters. For more information, see:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_ModifyCacheParameterGroup.html">ModifyCacheParameterGroup</a>
         * in the ElastiCache API Reference.</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/ParameterGroups.html">Parameters
         * and Parameter Groups</a> in the ElastiCache User Guide.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCacheParameterGroupOutcome CreateCacheParameterGroup(const Model::CreateCacheParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateCacheParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCacheParameterGroupRequestT = Model::CreateCacheParameterGroupRequest>
        Model::CreateCacheParameterGroupOutcomeCallable CreateCacheParameterGroupCallable(const CreateCacheParameterGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::CreateCacheParameterGroup, request);
        }

        /**
         * An Async wrapper for CreateCacheParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCacheParameterGroupRequestT = Model::CreateCacheParameterGroupRequest>
        void CreateCacheParameterGroupAsync(const CreateCacheParameterGroupRequestT& request, const CreateCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::CreateCacheParameterGroup, request, handler, context);
        }

        /**
         * <p>Creates a new cache security group. Use a cache security group to control
         * access to one or more clusters.</p> <p>Cache security groups are only used when
         * you are creating a cluster outside of an Amazon Virtual Private Cloud (Amazon
         * VPC). If you are creating a cluster inside of a VPC, use a cache subnet group
         * instead. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_CreateCacheSubnetGroup.html">CreateCacheSubnetGroup</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCacheSecurityGroupOutcome CreateCacheSecurityGroup(const Model::CreateCacheSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateCacheSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCacheSecurityGroupRequestT = Model::CreateCacheSecurityGroupRequest>
        Model::CreateCacheSecurityGroupOutcomeCallable CreateCacheSecurityGroupCallable(const CreateCacheSecurityGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::CreateCacheSecurityGroup, request);
        }

        /**
         * An Async wrapper for CreateCacheSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCacheSecurityGroupRequestT = Model::CreateCacheSecurityGroupRequest>
        void CreateCacheSecurityGroupAsync(const CreateCacheSecurityGroupRequestT& request, const CreateCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::CreateCacheSecurityGroup, request, handler, context);
        }

        /**
         * <p>Creates a new cache subnet group.</p> <p>Use this parameter only when you are
         * creating a cluster in an Amazon Virtual Private Cloud (Amazon
         * VPC).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCacheSubnetGroupOutcome CreateCacheSubnetGroup(const Model::CreateCacheSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateCacheSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCacheSubnetGroupRequestT = Model::CreateCacheSubnetGroupRequest>
        Model::CreateCacheSubnetGroupOutcomeCallable CreateCacheSubnetGroupCallable(const CreateCacheSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::CreateCacheSubnetGroup, request);
        }

        /**
         * An Async wrapper for CreateCacheSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCacheSubnetGroupRequestT = Model::CreateCacheSubnetGroupRequest>
        void CreateCacheSubnetGroupAsync(const CreateCacheSubnetGroupRequestT& request, const CreateCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::CreateCacheSubnetGroup, request, handler, context);
        }

        /**
         * <p>Global Datastore for Redis offers fully managed, fast, reliable and secure
         * cross-region replication. Using Global Datastore for Redis, you can create
         * cross-region read replica clusters for ElastiCache for Redis to enable
         * low-latency reads and disaster recovery across regions. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Redis-Global-Datastore.html">Replication
         * Across Regions Using Global Datastore</a>. </p> <ul> <li> <p>The
         * <b>GlobalReplicationGroupIdSuffix</b> is the name of the Global datastore.</p>
         * </li> <li> <p>The <b>PrimaryReplicationGroupId</b> represents the name of the
         * primary cluster that accepts writes and will replicate updates to the secondary
         * cluster.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateGlobalReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGlobalReplicationGroupOutcome CreateGlobalReplicationGroup(const Model::CreateGlobalReplicationGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGlobalReplicationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGlobalReplicationGroupRequestT = Model::CreateGlobalReplicationGroupRequest>
        Model::CreateGlobalReplicationGroupOutcomeCallable CreateGlobalReplicationGroupCallable(const CreateGlobalReplicationGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::CreateGlobalReplicationGroup, request);
        }

        /**
         * An Async wrapper for CreateGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGlobalReplicationGroupRequestT = Model::CreateGlobalReplicationGroupRequest>
        void CreateGlobalReplicationGroupAsync(const CreateGlobalReplicationGroupRequestT& request, const CreateGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::CreateGlobalReplicationGroup, request, handler, context);
        }

        /**
         * <p>Creates a Redis (cluster mode disabled) or a Redis (cluster mode enabled)
         * replication group.</p> <p>This API can be used to create a standalone regional
         * replication group or a secondary replication group associated with a Global
         * datastore.</p> <p>A Redis (cluster mode disabled) replication group is a
         * collection of nodes, where one of the nodes is a read/write primary and the
         * others are read-only replicas. Writes to the primary are asynchronously
         * propagated to the replicas.</p> <p>A Redis cluster-mode enabled cluster is
         * comprised of from 1 to 90 shards (API/CLI: node groups). Each shard has a
         * primary node and up to 5 read-only replica nodes. The configuration can range
         * from 90 shards and 0 replicas to 15 shards and 5 replicas, which is the maximum
         * number or replicas allowed. </p> <p>The node or shard limit can be increased to
         * a maximum of 500 per cluster if the Redis engine version is 5.0.6 or higher. For
         * example, you can choose to configure a 500 node cluster that ranges between 83
         * shards (one primary and 5 replicas per shard) and 500 shards (single primary and
         * no replicas). Make sure there are enough available IP addresses to accommodate
         * the increase. Common pitfalls include the subnets in the subnet group have too
         * small a CIDR range or the subnets are shared and heavily used by other clusters.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SubnetGroups.Creating.html">Creating
         * a Subnet Group</a>. For versions below 5.0.6, the limit is 250 per cluster.</p>
         * <p>To request a limit increase, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">Amazon
         * Service Limits</a> and choose the limit type <b>Nodes per cluster per instance
         * type</b>. </p> <p>When a Redis (cluster mode disabled) replication group has
         * been successfully created, you can add one or more read replicas to it, up to a
         * total of 5 read replicas. If you need to increase or decrease the number of node
         * groups (console: shards), you can avail yourself of ElastiCache for Redis'
         * scaling. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Scaling.html">Scaling
         * ElastiCache for Redis Clusters</a> in the <i>ElastiCache User Guide</i>.</p>
         *  <p>This operation is valid for Redis only.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationGroupOutcome CreateReplicationGroup(const Model::CreateReplicationGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReplicationGroupRequestT = Model::CreateReplicationGroupRequest>
        Model::CreateReplicationGroupOutcomeCallable CreateReplicationGroupCallable(const CreateReplicationGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::CreateReplicationGroup, request);
        }

        /**
         * An Async wrapper for CreateReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReplicationGroupRequestT = Model::CreateReplicationGroupRequest>
        void CreateReplicationGroupAsync(const CreateReplicationGroupRequestT& request, const CreateReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::CreateReplicationGroup, request, handler, context);
        }

        /**
         * <p>Creates a serverless cache.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateServerlessCache">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServerlessCacheOutcome CreateServerlessCache(const Model::CreateServerlessCacheRequest& request) const;

        /**
         * A Callable wrapper for CreateServerlessCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateServerlessCacheRequestT = Model::CreateServerlessCacheRequest>
        Model::CreateServerlessCacheOutcomeCallable CreateServerlessCacheCallable(const CreateServerlessCacheRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::CreateServerlessCache, request);
        }

        /**
         * An Async wrapper for CreateServerlessCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServerlessCacheRequestT = Model::CreateServerlessCacheRequest>
        void CreateServerlessCacheAsync(const CreateServerlessCacheRequestT& request, const CreateServerlessCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::CreateServerlessCache, request, handler, context);
        }

        /**
         * <p>This API creates a copy of an entire ServerlessCache at a specific moment in
         * time. Available for Redis only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateServerlessCacheSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServerlessCacheSnapshotOutcome CreateServerlessCacheSnapshot(const Model::CreateServerlessCacheSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateServerlessCacheSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateServerlessCacheSnapshotRequestT = Model::CreateServerlessCacheSnapshotRequest>
        Model::CreateServerlessCacheSnapshotOutcomeCallable CreateServerlessCacheSnapshotCallable(const CreateServerlessCacheSnapshotRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::CreateServerlessCacheSnapshot, request);
        }

        /**
         * An Async wrapper for CreateServerlessCacheSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServerlessCacheSnapshotRequestT = Model::CreateServerlessCacheSnapshotRequest>
        void CreateServerlessCacheSnapshotAsync(const CreateServerlessCacheSnapshotRequestT& request, const CreateServerlessCacheSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::CreateServerlessCacheSnapshot, request, handler, context);
        }

        /**
         * <p>Creates a copy of an entire cluster or replication group at a specific moment
         * in time.</p>  <p>This operation is valid for Redis only.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSnapshotRequestT = Model::CreateSnapshotRequest>
        Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const CreateSnapshotRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::CreateSnapshot, request);
        }

        /**
         * An Async wrapper for CreateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSnapshotRequestT = Model::CreateSnapshotRequest>
        void CreateSnapshotAsync(const CreateSnapshotRequestT& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::CreateSnapshot, request, handler, context);
        }

        /**
         * <p>For Redis engine version 6.0 onwards: Creates a Redis user. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Clusters.RBAC.html">Using
         * Role Based Access Control (RBAC)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        Model::CreateUserOutcomeCallable CreateUserCallable(const CreateUserRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::CreateUser, request);
        }

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        void CreateUserAsync(const CreateUserRequestT& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::CreateUser, request, handler, context);
        }

        /**
         * <p>For Redis engine version 6.0 onwards: Creates a Redis user group. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Clusters.RBAC.html">Using
         * Role Based Access Control (RBAC)</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateUserGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserGroupOutcome CreateUserGroup(const Model::CreateUserGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateUserGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserGroupRequestT = Model::CreateUserGroupRequest>
        Model::CreateUserGroupOutcomeCallable CreateUserGroupCallable(const CreateUserGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::CreateUserGroup, request);
        }

        /**
         * An Async wrapper for CreateUserGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserGroupRequestT = Model::CreateUserGroupRequest>
        void CreateUserGroupAsync(const CreateUserGroupRequestT& request, const CreateUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::CreateUserGroup, request, handler, context);
        }

        /**
         * <p>Decreases the number of node groups in a Global datastore</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DecreaseNodeGroupsInGlobalReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DecreaseNodeGroupsInGlobalReplicationGroupOutcome DecreaseNodeGroupsInGlobalReplicationGroup(const Model::DecreaseNodeGroupsInGlobalReplicationGroupRequest& request) const;

        /**
         * A Callable wrapper for DecreaseNodeGroupsInGlobalReplicationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DecreaseNodeGroupsInGlobalReplicationGroupRequestT = Model::DecreaseNodeGroupsInGlobalReplicationGroupRequest>
        Model::DecreaseNodeGroupsInGlobalReplicationGroupOutcomeCallable DecreaseNodeGroupsInGlobalReplicationGroupCallable(const DecreaseNodeGroupsInGlobalReplicationGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DecreaseNodeGroupsInGlobalReplicationGroup, request);
        }

        /**
         * An Async wrapper for DecreaseNodeGroupsInGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DecreaseNodeGroupsInGlobalReplicationGroupRequestT = Model::DecreaseNodeGroupsInGlobalReplicationGroupRequest>
        void DecreaseNodeGroupsInGlobalReplicationGroupAsync(const DecreaseNodeGroupsInGlobalReplicationGroupRequestT& request, const DecreaseNodeGroupsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DecreaseNodeGroupsInGlobalReplicationGroup, request, handler, context);
        }

        /**
         * <p>Dynamically decreases the number of replicas in a Redis (cluster mode
         * disabled) replication group or the number of replica nodes in one or more node
         * groups (shards) of a Redis (cluster mode enabled) replication group. This
         * operation is performed with no cluster down time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DecreaseReplicaCount">AWS
         * API Reference</a></p>
         */
        virtual Model::DecreaseReplicaCountOutcome DecreaseReplicaCount(const Model::DecreaseReplicaCountRequest& request) const;

        /**
         * A Callable wrapper for DecreaseReplicaCount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DecreaseReplicaCountRequestT = Model::DecreaseReplicaCountRequest>
        Model::DecreaseReplicaCountOutcomeCallable DecreaseReplicaCountCallable(const DecreaseReplicaCountRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DecreaseReplicaCount, request);
        }

        /**
         * An Async wrapper for DecreaseReplicaCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DecreaseReplicaCountRequestT = Model::DecreaseReplicaCountRequest>
        void DecreaseReplicaCountAsync(const DecreaseReplicaCountRequestT& request, const DecreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DecreaseReplicaCount, request, handler, context);
        }

        /**
         * <p>Deletes a previously provisioned cluster. <code>DeleteCacheCluster</code>
         * deletes all associated cache nodes, node endpoints and the cluster itself. When
         * you receive a successful response from this operation, Amazon ElastiCache
         * immediately begins deleting the cluster; you cannot cancel or revert this
         * operation.</p> <p>This operation is not valid for:</p> <ul> <li> <p>Redis
         * (cluster mode enabled) clusters</p> </li> <li> <p>Redis (cluster mode disabled)
         * clusters</p> </li> <li> <p>A cluster that is the last read replica of a
         * replication group</p> </li> <li> <p>A cluster that is the primary node of a
         * replication group</p> </li> <li> <p>A node group (shard) that has Multi-AZ mode
         * enabled</p> </li> <li> <p>A cluster from a Redis (cluster mode enabled)
         * replication group</p> </li> <li> <p>A cluster that is not in the
         * <code>available</code> state</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCacheClusterOutcome DeleteCacheCluster(const Model::DeleteCacheClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCacheCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCacheClusterRequestT = Model::DeleteCacheClusterRequest>
        Model::DeleteCacheClusterOutcomeCallable DeleteCacheClusterCallable(const DeleteCacheClusterRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DeleteCacheCluster, request);
        }

        /**
         * An Async wrapper for DeleteCacheCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCacheClusterRequestT = Model::DeleteCacheClusterRequest>
        void DeleteCacheClusterAsync(const DeleteCacheClusterRequestT& request, const DeleteCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DeleteCacheCluster, request, handler, context);
        }

        /**
         * <p>Deletes the specified cache parameter group. You cannot delete a cache
         * parameter group if it is associated with any cache clusters. You cannot delete
         * the default cache parameter groups in your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCacheParameterGroupOutcome DeleteCacheParameterGroup(const Model::DeleteCacheParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteCacheParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCacheParameterGroupRequestT = Model::DeleteCacheParameterGroupRequest>
        Model::DeleteCacheParameterGroupOutcomeCallable DeleteCacheParameterGroupCallable(const DeleteCacheParameterGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DeleteCacheParameterGroup, request);
        }

        /**
         * An Async wrapper for DeleteCacheParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCacheParameterGroupRequestT = Model::DeleteCacheParameterGroupRequest>
        void DeleteCacheParameterGroupAsync(const DeleteCacheParameterGroupRequestT& request, const DeleteCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DeleteCacheParameterGroup, request, handler, context);
        }

        /**
         * <p>Deletes a cache security group.</p>  <p>You cannot delete a cache
         * security group if it is associated with any clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCacheSecurityGroupOutcome DeleteCacheSecurityGroup(const Model::DeleteCacheSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteCacheSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCacheSecurityGroupRequestT = Model::DeleteCacheSecurityGroupRequest>
        Model::DeleteCacheSecurityGroupOutcomeCallable DeleteCacheSecurityGroupCallable(const DeleteCacheSecurityGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DeleteCacheSecurityGroup, request);
        }

        /**
         * An Async wrapper for DeleteCacheSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCacheSecurityGroupRequestT = Model::DeleteCacheSecurityGroupRequest>
        void DeleteCacheSecurityGroupAsync(const DeleteCacheSecurityGroupRequestT& request, const DeleteCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DeleteCacheSecurityGroup, request, handler, context);
        }

        /**
         * <p>Deletes a cache subnet group.</p>  <p>You cannot delete a default cache
         * subnet group or one that is associated with any clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCacheSubnetGroupOutcome DeleteCacheSubnetGroup(const Model::DeleteCacheSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteCacheSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCacheSubnetGroupRequestT = Model::DeleteCacheSubnetGroupRequest>
        Model::DeleteCacheSubnetGroupOutcomeCallable DeleteCacheSubnetGroupCallable(const DeleteCacheSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DeleteCacheSubnetGroup, request);
        }

        /**
         * An Async wrapper for DeleteCacheSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCacheSubnetGroupRequestT = Model::DeleteCacheSubnetGroupRequest>
        void DeleteCacheSubnetGroupAsync(const DeleteCacheSubnetGroupRequestT& request, const DeleteCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DeleteCacheSubnetGroup, request, handler, context);
        }

        /**
         * <p>Deleting a Global datastore is a two-step process: </p> <ul> <li> <p>First,
         * you must <a>DisassociateGlobalReplicationGroup</a> to remove the secondary
         * clusters in the Global datastore.</p> </li> <li> <p>Once the Global datastore
         * contains only the primary cluster, you can use the
         * <code>DeleteGlobalReplicationGroup</code> API to delete the Global datastore
         * while retainining the primary cluster using
         * <code>RetainPrimaryReplicationGroup=true</code>.</p> </li> </ul> <p>Since the
         * Global Datastore has only a primary cluster, you can delete the Global Datastore
         * while retaining the primary by setting
         * <code>RetainPrimaryReplicationGroup=true</code>. The primary cluster is never
         * deleted when deleting a Global Datastore. It can only be deleted when it no
         * longer is associated with any Global Datastore.</p> <p>When you receive a
         * successful response from this operation, Amazon ElastiCache immediately begins
         * deleting the selected resources; you cannot cancel or revert this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteGlobalReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGlobalReplicationGroupOutcome DeleteGlobalReplicationGroup(const Model::DeleteGlobalReplicationGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGlobalReplicationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGlobalReplicationGroupRequestT = Model::DeleteGlobalReplicationGroupRequest>
        Model::DeleteGlobalReplicationGroupOutcomeCallable DeleteGlobalReplicationGroupCallable(const DeleteGlobalReplicationGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DeleteGlobalReplicationGroup, request);
        }

        /**
         * An Async wrapper for DeleteGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGlobalReplicationGroupRequestT = Model::DeleteGlobalReplicationGroupRequest>
        void DeleteGlobalReplicationGroupAsync(const DeleteGlobalReplicationGroupRequestT& request, const DeleteGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DeleteGlobalReplicationGroup, request, handler, context);
        }

        /**
         * <p>Deletes an existing replication group. By default, this operation deletes the
         * entire replication group, including the primary/primaries and all of the read
         * replicas. If the replication group has only one primary, you can optionally
         * delete only the read replicas, while retaining the primary by setting
         * <code>RetainPrimaryCluster=true</code>.</p> <p>When you receive a successful
         * response from this operation, Amazon ElastiCache immediately begins deleting the
         * selected resources; you cannot cancel or revert this operation.</p> 
         * <p>This operation is valid for Redis only.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationGroupOutcome DeleteReplicationGroup(const Model::DeleteReplicationGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReplicationGroupRequestT = Model::DeleteReplicationGroupRequest>
        Model::DeleteReplicationGroupOutcomeCallable DeleteReplicationGroupCallable(const DeleteReplicationGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DeleteReplicationGroup, request);
        }

        /**
         * An Async wrapper for DeleteReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReplicationGroupRequestT = Model::DeleteReplicationGroupRequest>
        void DeleteReplicationGroupAsync(const DeleteReplicationGroupRequestT& request, const DeleteReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DeleteReplicationGroup, request, handler, context);
        }

        /**
         * <p>Deletes a specified existing serverless cache.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteServerlessCache">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServerlessCacheOutcome DeleteServerlessCache(const Model::DeleteServerlessCacheRequest& request) const;

        /**
         * A Callable wrapper for DeleteServerlessCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServerlessCacheRequestT = Model::DeleteServerlessCacheRequest>
        Model::DeleteServerlessCacheOutcomeCallable DeleteServerlessCacheCallable(const DeleteServerlessCacheRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DeleteServerlessCache, request);
        }

        /**
         * An Async wrapper for DeleteServerlessCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServerlessCacheRequestT = Model::DeleteServerlessCacheRequest>
        void DeleteServerlessCacheAsync(const DeleteServerlessCacheRequestT& request, const DeleteServerlessCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DeleteServerlessCache, request, handler, context);
        }

        /**
         * <p>Deletes an existing serverless cache snapshot. Available for Redis
         * only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteServerlessCacheSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServerlessCacheSnapshotOutcome DeleteServerlessCacheSnapshot(const Model::DeleteServerlessCacheSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteServerlessCacheSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServerlessCacheSnapshotRequestT = Model::DeleteServerlessCacheSnapshotRequest>
        Model::DeleteServerlessCacheSnapshotOutcomeCallable DeleteServerlessCacheSnapshotCallable(const DeleteServerlessCacheSnapshotRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DeleteServerlessCacheSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteServerlessCacheSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServerlessCacheSnapshotRequestT = Model::DeleteServerlessCacheSnapshotRequest>
        void DeleteServerlessCacheSnapshotAsync(const DeleteServerlessCacheSnapshotRequestT& request, const DeleteServerlessCacheSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DeleteServerlessCacheSnapshot, request, handler, context);
        }

        /**
         * <p>Deletes an existing snapshot. When you receive a successful response from
         * this operation, ElastiCache immediately begins deleting the snapshot; you cannot
         * cancel or revert this operation.</p>  <p>This operation is valid for Redis
         * only.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSnapshotRequestT = Model::DeleteSnapshotRequest>
        Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const DeleteSnapshotRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DeleteSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSnapshotRequestT = Model::DeleteSnapshotRequest>
        void DeleteSnapshotAsync(const DeleteSnapshotRequestT& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DeleteSnapshot, request, handler, context);
        }

        /**
         * <p>For Redis engine version 6.0 onwards: Deletes a user. The user will be
         * removed from all user groups and in turn removed from all replication groups.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Clusters.RBAC.html">Using
         * Role Based Access Control (RBAC)</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const DeleteUserRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DeleteUser, request);
        }

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        void DeleteUserAsync(const DeleteUserRequestT& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DeleteUser, request, handler, context);
        }

        /**
         * <p>For Redis engine version 6.0 onwards: Deletes a user group. The user group
         * must first be disassociated from the replication group before it can be deleted.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Clusters.RBAC.html">Using
         * Role Based Access Control (RBAC)</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteUserGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserGroupOutcome DeleteUserGroup(const Model::DeleteUserGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserGroupRequestT = Model::DeleteUserGroupRequest>
        Model::DeleteUserGroupOutcomeCallable DeleteUserGroupCallable(const DeleteUserGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DeleteUserGroup, request);
        }

        /**
         * An Async wrapper for DeleteUserGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserGroupRequestT = Model::DeleteUserGroupRequest>
        void DeleteUserGroupAsync(const DeleteUserGroupRequestT& request, const DeleteUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DeleteUserGroup, request, handler, context);
        }

        /**
         * <p>Returns information about all provisioned clusters if no cluster identifier
         * is specified, or about a specific cache cluster if a cluster identifier is
         * supplied.</p> <p>By default, abbreviated information about the clusters is
         * returned. You can use the optional <i>ShowCacheNodeInfo</i> flag to retrieve
         * detailed information about the cache nodes associated with the clusters. These
         * details include the DNS address and port for the cache node endpoint.</p> <p>If
         * the cluster is in the <i>creating</i> state, only cluster-level information is
         * displayed until all of the nodes are successfully provisioned.</p> <p>If the
         * cluster is in the <i>deleting</i> state, only cluster-level information is
         * displayed.</p> <p>If cache nodes are currently being added to the cluster, node
         * endpoint information and creation time for the additional nodes are not
         * displayed until they are completely provisioned. When the cluster state is
         * <i>available</i>, the cluster is ready for use.</p> <p>If cache nodes are
         * currently being removed from the cluster, no endpoint information for the
         * removed nodes is displayed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCacheClustersOutcome DescribeCacheClusters(const Model::DescribeCacheClustersRequest& request) const;

        /**
         * A Callable wrapper for DescribeCacheClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCacheClustersRequestT = Model::DescribeCacheClustersRequest>
        Model::DescribeCacheClustersOutcomeCallable DescribeCacheClustersCallable(const DescribeCacheClustersRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeCacheClusters, request);
        }

        /**
         * An Async wrapper for DescribeCacheClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCacheClustersRequestT = Model::DescribeCacheClustersRequest>
        void DescribeCacheClustersAsync(const DescribeCacheClustersRequestT& request, const DescribeCacheClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeCacheClusters, request, handler, context);
        }

        /**
         * <p>Returns a list of the available cache engines and their
         * versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCacheEngineVersionsOutcome DescribeCacheEngineVersions(const Model::DescribeCacheEngineVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeCacheEngineVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCacheEngineVersionsRequestT = Model::DescribeCacheEngineVersionsRequest>
        Model::DescribeCacheEngineVersionsOutcomeCallable DescribeCacheEngineVersionsCallable(const DescribeCacheEngineVersionsRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeCacheEngineVersions, request);
        }

        /**
         * An Async wrapper for DescribeCacheEngineVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCacheEngineVersionsRequestT = Model::DescribeCacheEngineVersionsRequest>
        void DescribeCacheEngineVersionsAsync(const DescribeCacheEngineVersionsRequestT& request, const DescribeCacheEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeCacheEngineVersions, request, handler, context);
        }

        /**
         * <p>Returns a list of cache parameter group descriptions. If a cache parameter
         * group name is specified, the list contains only the descriptions for that
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCacheParameterGroupsOutcome DescribeCacheParameterGroups(const Model::DescribeCacheParameterGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeCacheParameterGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCacheParameterGroupsRequestT = Model::DescribeCacheParameterGroupsRequest>
        Model::DescribeCacheParameterGroupsOutcomeCallable DescribeCacheParameterGroupsCallable(const DescribeCacheParameterGroupsRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeCacheParameterGroups, request);
        }

        /**
         * An Async wrapper for DescribeCacheParameterGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCacheParameterGroupsRequestT = Model::DescribeCacheParameterGroupsRequest>
        void DescribeCacheParameterGroupsAsync(const DescribeCacheParameterGroupsRequestT& request, const DescribeCacheParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeCacheParameterGroups, request, handler, context);
        }

        /**
         * <p>Returns the detailed parameter list for a particular cache parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCacheParametersOutcome DescribeCacheParameters(const Model::DescribeCacheParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeCacheParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCacheParametersRequestT = Model::DescribeCacheParametersRequest>
        Model::DescribeCacheParametersOutcomeCallable DescribeCacheParametersCallable(const DescribeCacheParametersRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeCacheParameters, request);
        }

        /**
         * An Async wrapper for DescribeCacheParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCacheParametersRequestT = Model::DescribeCacheParametersRequest>
        void DescribeCacheParametersAsync(const DescribeCacheParametersRequestT& request, const DescribeCacheParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeCacheParameters, request, handler, context);
        }

        /**
         * <p>Returns a list of cache security group descriptions. If a cache security
         * group name is specified, the list contains only the description of that group.
         * This applicable only when you have ElastiCache in Classic setup </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCacheSecurityGroupsOutcome DescribeCacheSecurityGroups(const Model::DescribeCacheSecurityGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeCacheSecurityGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCacheSecurityGroupsRequestT = Model::DescribeCacheSecurityGroupsRequest>
        Model::DescribeCacheSecurityGroupsOutcomeCallable DescribeCacheSecurityGroupsCallable(const DescribeCacheSecurityGroupsRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeCacheSecurityGroups, request);
        }

        /**
         * An Async wrapper for DescribeCacheSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCacheSecurityGroupsRequestT = Model::DescribeCacheSecurityGroupsRequest>
        void DescribeCacheSecurityGroupsAsync(const DescribeCacheSecurityGroupsRequestT& request, const DescribeCacheSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeCacheSecurityGroups, request, handler, context);
        }

        /**
         * <p>Returns a list of cache subnet group descriptions. If a subnet group name is
         * specified, the list contains only the description of that group. This is
         * applicable only when you have ElastiCache in VPC setup. All ElastiCache clusters
         * now launch in VPC by default. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheSubnetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCacheSubnetGroupsOutcome DescribeCacheSubnetGroups(const Model::DescribeCacheSubnetGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeCacheSubnetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCacheSubnetGroupsRequestT = Model::DescribeCacheSubnetGroupsRequest>
        Model::DescribeCacheSubnetGroupsOutcomeCallable DescribeCacheSubnetGroupsCallable(const DescribeCacheSubnetGroupsRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeCacheSubnetGroups, request);
        }

        /**
         * An Async wrapper for DescribeCacheSubnetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCacheSubnetGroupsRequestT = Model::DescribeCacheSubnetGroupsRequest>
        void DescribeCacheSubnetGroupsAsync(const DescribeCacheSubnetGroupsRequestT& request, const DescribeCacheSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeCacheSubnetGroups, request, handler, context);
        }

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * cache engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeEngineDefaultParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineDefaultParametersOutcome DescribeEngineDefaultParameters(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeEngineDefaultParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEngineDefaultParametersRequestT = Model::DescribeEngineDefaultParametersRequest>
        Model::DescribeEngineDefaultParametersOutcomeCallable DescribeEngineDefaultParametersCallable(const DescribeEngineDefaultParametersRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeEngineDefaultParameters, request);
        }

        /**
         * An Async wrapper for DescribeEngineDefaultParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEngineDefaultParametersRequestT = Model::DescribeEngineDefaultParametersRequest>
        void DescribeEngineDefaultParametersAsync(const DescribeEngineDefaultParametersRequestT& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeEngineDefaultParameters, request, handler, context);
        }

        /**
         * <p>Returns events related to clusters, cache security groups, and cache
         * parameter groups. You can obtain events specific to a particular cluster, cache
         * security group, or cache parameter group by providing the name as a
         * parameter.</p> <p>By default, only the events occurring within the last hour are
         * returned; however, you can retrieve up to 14 days' worth of events if
         * necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventsRequestT = Model::DescribeEventsRequest>
        Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const DescribeEventsRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeEvents, request);
        }

        /**
         * An Async wrapper for DescribeEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventsRequestT = Model::DescribeEventsRequest>
        void DescribeEventsAsync(const DescribeEventsRequestT& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeEvents, request, handler, context);
        }

        /**
         * <p>Returns information about a particular global replication group. If no
         * identifier is specified, returns information about all Global datastores.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeGlobalReplicationGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGlobalReplicationGroupsOutcome DescribeGlobalReplicationGroups(const Model::DescribeGlobalReplicationGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeGlobalReplicationGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGlobalReplicationGroupsRequestT = Model::DescribeGlobalReplicationGroupsRequest>
        Model::DescribeGlobalReplicationGroupsOutcomeCallable DescribeGlobalReplicationGroupsCallable(const DescribeGlobalReplicationGroupsRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeGlobalReplicationGroups, request);
        }

        /**
         * An Async wrapper for DescribeGlobalReplicationGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGlobalReplicationGroupsRequestT = Model::DescribeGlobalReplicationGroupsRequest>
        void DescribeGlobalReplicationGroupsAsync(const DescribeGlobalReplicationGroupsRequestT& request, const DescribeGlobalReplicationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeGlobalReplicationGroups, request, handler, context);
        }

        /**
         * <p>Returns information about a particular replication group. If no identifier is
         * specified, <code>DescribeReplicationGroups</code> returns information about all
         * replication groups.</p>  <p>This operation is valid for Redis only.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeReplicationGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationGroupsOutcome DescribeReplicationGroups(const Model::DescribeReplicationGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplicationGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReplicationGroupsRequestT = Model::DescribeReplicationGroupsRequest>
        Model::DescribeReplicationGroupsOutcomeCallable DescribeReplicationGroupsCallable(const DescribeReplicationGroupsRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeReplicationGroups, request);
        }

        /**
         * An Async wrapper for DescribeReplicationGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplicationGroupsRequestT = Model::DescribeReplicationGroupsRequest>
        void DescribeReplicationGroupsAsync(const DescribeReplicationGroupsRequestT& request, const DescribeReplicationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeReplicationGroups, request, handler, context);
        }

        /**
         * <p>Returns information about reserved cache nodes for this account, or about a
         * specified reserved cache node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeReservedCacheNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedCacheNodesOutcome DescribeReservedCacheNodes(const Model::DescribeReservedCacheNodesRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedCacheNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReservedCacheNodesRequestT = Model::DescribeReservedCacheNodesRequest>
        Model::DescribeReservedCacheNodesOutcomeCallable DescribeReservedCacheNodesCallable(const DescribeReservedCacheNodesRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeReservedCacheNodes, request);
        }

        /**
         * An Async wrapper for DescribeReservedCacheNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReservedCacheNodesRequestT = Model::DescribeReservedCacheNodesRequest>
        void DescribeReservedCacheNodesAsync(const DescribeReservedCacheNodesRequestT& request, const DescribeReservedCacheNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeReservedCacheNodes, request, handler, context);
        }

        /**
         * <p>Lists available reserved cache node offerings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeReservedCacheNodesOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedCacheNodesOfferingsOutcome DescribeReservedCacheNodesOfferings(const Model::DescribeReservedCacheNodesOfferingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedCacheNodesOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReservedCacheNodesOfferingsRequestT = Model::DescribeReservedCacheNodesOfferingsRequest>
        Model::DescribeReservedCacheNodesOfferingsOutcomeCallable DescribeReservedCacheNodesOfferingsCallable(const DescribeReservedCacheNodesOfferingsRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeReservedCacheNodesOfferings, request);
        }

        /**
         * An Async wrapper for DescribeReservedCacheNodesOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReservedCacheNodesOfferingsRequestT = Model::DescribeReservedCacheNodesOfferingsRequest>
        void DescribeReservedCacheNodesOfferingsAsync(const DescribeReservedCacheNodesOfferingsRequestT& request, const DescribeReservedCacheNodesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeReservedCacheNodesOfferings, request, handler, context);
        }

        /**
         * <p>Returns information about serverless cache snapshots. By default, this API
         * lists all of the customer’s serverless cache snapshots. It can also describe a
         * single serverless cache snapshot, or the snapshots associated with a particular
         * serverless cache. Available for Redis only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeServerlessCacheSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServerlessCacheSnapshotsOutcome DescribeServerlessCacheSnapshots(const Model::DescribeServerlessCacheSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for DescribeServerlessCacheSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeServerlessCacheSnapshotsRequestT = Model::DescribeServerlessCacheSnapshotsRequest>
        Model::DescribeServerlessCacheSnapshotsOutcomeCallable DescribeServerlessCacheSnapshotsCallable(const DescribeServerlessCacheSnapshotsRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeServerlessCacheSnapshots, request);
        }

        /**
         * An Async wrapper for DescribeServerlessCacheSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeServerlessCacheSnapshotsRequestT = Model::DescribeServerlessCacheSnapshotsRequest>
        void DescribeServerlessCacheSnapshotsAsync(const DescribeServerlessCacheSnapshotsRequestT& request, const DescribeServerlessCacheSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeServerlessCacheSnapshots, request, handler, context);
        }

        /**
         * <p>Returns information about a specific serverless cache. If no identifier is
         * specified, then the API returns information on all the serverless caches
         * belonging to this Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeServerlessCaches">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServerlessCachesOutcome DescribeServerlessCaches(const Model::DescribeServerlessCachesRequest& request) const;

        /**
         * A Callable wrapper for DescribeServerlessCaches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeServerlessCachesRequestT = Model::DescribeServerlessCachesRequest>
        Model::DescribeServerlessCachesOutcomeCallable DescribeServerlessCachesCallable(const DescribeServerlessCachesRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeServerlessCaches, request);
        }

        /**
         * An Async wrapper for DescribeServerlessCaches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeServerlessCachesRequestT = Model::DescribeServerlessCachesRequest>
        void DescribeServerlessCachesAsync(const DescribeServerlessCachesRequestT& request, const DescribeServerlessCachesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeServerlessCaches, request, handler, context);
        }

        /**
         * <p>Returns details of the service updates</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeServiceUpdates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceUpdatesOutcome DescribeServiceUpdates(const Model::DescribeServiceUpdatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeServiceUpdates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeServiceUpdatesRequestT = Model::DescribeServiceUpdatesRequest>
        Model::DescribeServiceUpdatesOutcomeCallable DescribeServiceUpdatesCallable(const DescribeServiceUpdatesRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeServiceUpdates, request);
        }

        /**
         * An Async wrapper for DescribeServiceUpdates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeServiceUpdatesRequestT = Model::DescribeServiceUpdatesRequest>
        void DescribeServiceUpdatesAsync(const DescribeServiceUpdatesRequestT& request, const DescribeServiceUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeServiceUpdates, request, handler, context);
        }

        /**
         * <p>Returns information about cluster or replication group snapshots. By default,
         * <code>DescribeSnapshots</code> lists all of your snapshots; it can optionally
         * describe a single snapshot, or just the snapshots associated with a particular
         * cache cluster.</p>  <p>This operation is valid for Redis only.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSnapshotsRequestT = Model::DescribeSnapshotsRequest>
        Model::DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const DescribeSnapshotsRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeSnapshots, request);
        }

        /**
         * An Async wrapper for DescribeSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSnapshotsRequestT = Model::DescribeSnapshotsRequest>
        void DescribeSnapshotsAsync(const DescribeSnapshotsRequestT& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeSnapshots, request, handler, context);
        }

        /**
         * <p>Returns details of the update actions </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeUpdateActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUpdateActionsOutcome DescribeUpdateActions(const Model::DescribeUpdateActionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeUpdateActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUpdateActionsRequestT = Model::DescribeUpdateActionsRequest>
        Model::DescribeUpdateActionsOutcomeCallable DescribeUpdateActionsCallable(const DescribeUpdateActionsRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeUpdateActions, request);
        }

        /**
         * An Async wrapper for DescribeUpdateActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUpdateActionsRequestT = Model::DescribeUpdateActionsRequest>
        void DescribeUpdateActionsAsync(const DescribeUpdateActionsRequestT& request, const DescribeUpdateActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeUpdateActions, request, handler, context);
        }

        /**
         * <p>Returns a list of user groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeUserGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserGroupsOutcome DescribeUserGroups(const Model::DescribeUserGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserGroupsRequestT = Model::DescribeUserGroupsRequest>
        Model::DescribeUserGroupsOutcomeCallable DescribeUserGroupsCallable(const DescribeUserGroupsRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeUserGroups, request);
        }

        /**
         * An Async wrapper for DescribeUserGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserGroupsRequestT = Model::DescribeUserGroupsRequest>
        void DescribeUserGroupsAsync(const DescribeUserGroupsRequestT& request, const DescribeUserGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeUserGroups, request, handler, context);
        }

        /**
         * <p>Returns a list of users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest& request) const;

        /**
         * A Callable wrapper for DescribeUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUsersRequestT = Model::DescribeUsersRequest>
        Model::DescribeUsersOutcomeCallable DescribeUsersCallable(const DescribeUsersRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DescribeUsers, request);
        }

        /**
         * An Async wrapper for DescribeUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUsersRequestT = Model::DescribeUsersRequest>
        void DescribeUsersAsync(const DescribeUsersRequestT& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DescribeUsers, request, handler, context);
        }

        /**
         * <p>Remove a secondary cluster from the Global datastore using the Global
         * datastore name. The secondary cluster will no longer receive updates from the
         * primary cluster, but will remain as a standalone cluster in that Amazon
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DisassociateGlobalReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateGlobalReplicationGroupOutcome DisassociateGlobalReplicationGroup(const Model::DisassociateGlobalReplicationGroupRequest& request) const;

        /**
         * A Callable wrapper for DisassociateGlobalReplicationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateGlobalReplicationGroupRequestT = Model::DisassociateGlobalReplicationGroupRequest>
        Model::DisassociateGlobalReplicationGroupOutcomeCallable DisassociateGlobalReplicationGroupCallable(const DisassociateGlobalReplicationGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::DisassociateGlobalReplicationGroup, request);
        }

        /**
         * An Async wrapper for DisassociateGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateGlobalReplicationGroupRequestT = Model::DisassociateGlobalReplicationGroupRequest>
        void DisassociateGlobalReplicationGroupAsync(const DisassociateGlobalReplicationGroupRequestT& request, const DisassociateGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::DisassociateGlobalReplicationGroup, request, handler, context);
        }

        /**
         * <p>Provides the functionality to export the serverless cache snapshot data to
         * Amazon S3. Available for Redis only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ExportServerlessCacheSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportServerlessCacheSnapshotOutcome ExportServerlessCacheSnapshot(const Model::ExportServerlessCacheSnapshotRequest& request) const;

        /**
         * A Callable wrapper for ExportServerlessCacheSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportServerlessCacheSnapshotRequestT = Model::ExportServerlessCacheSnapshotRequest>
        Model::ExportServerlessCacheSnapshotOutcomeCallable ExportServerlessCacheSnapshotCallable(const ExportServerlessCacheSnapshotRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::ExportServerlessCacheSnapshot, request);
        }

        /**
         * An Async wrapper for ExportServerlessCacheSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportServerlessCacheSnapshotRequestT = Model::ExportServerlessCacheSnapshotRequest>
        void ExportServerlessCacheSnapshotAsync(const ExportServerlessCacheSnapshotRequestT& request, const ExportServerlessCacheSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::ExportServerlessCacheSnapshot, request, handler, context);
        }

        /**
         * <p>Used to failover the primary region to a secondary region. The secondary
         * region will become primary, and all other clusters will become
         * secondary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/FailoverGlobalReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::FailoverGlobalReplicationGroupOutcome FailoverGlobalReplicationGroup(const Model::FailoverGlobalReplicationGroupRequest& request) const;

        /**
         * A Callable wrapper for FailoverGlobalReplicationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename FailoverGlobalReplicationGroupRequestT = Model::FailoverGlobalReplicationGroupRequest>
        Model::FailoverGlobalReplicationGroupOutcomeCallable FailoverGlobalReplicationGroupCallable(const FailoverGlobalReplicationGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::FailoverGlobalReplicationGroup, request);
        }

        /**
         * An Async wrapper for FailoverGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename FailoverGlobalReplicationGroupRequestT = Model::FailoverGlobalReplicationGroupRequest>
        void FailoverGlobalReplicationGroupAsync(const FailoverGlobalReplicationGroupRequestT& request, const FailoverGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::FailoverGlobalReplicationGroup, request, handler, context);
        }

        /**
         * <p>Increase the number of node groups in the Global datastore</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/IncreaseNodeGroupsInGlobalReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::IncreaseNodeGroupsInGlobalReplicationGroupOutcome IncreaseNodeGroupsInGlobalReplicationGroup(const Model::IncreaseNodeGroupsInGlobalReplicationGroupRequest& request) const;

        /**
         * A Callable wrapper for IncreaseNodeGroupsInGlobalReplicationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename IncreaseNodeGroupsInGlobalReplicationGroupRequestT = Model::IncreaseNodeGroupsInGlobalReplicationGroupRequest>
        Model::IncreaseNodeGroupsInGlobalReplicationGroupOutcomeCallable IncreaseNodeGroupsInGlobalReplicationGroupCallable(const IncreaseNodeGroupsInGlobalReplicationGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::IncreaseNodeGroupsInGlobalReplicationGroup, request);
        }

        /**
         * An Async wrapper for IncreaseNodeGroupsInGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename IncreaseNodeGroupsInGlobalReplicationGroupRequestT = Model::IncreaseNodeGroupsInGlobalReplicationGroupRequest>
        void IncreaseNodeGroupsInGlobalReplicationGroupAsync(const IncreaseNodeGroupsInGlobalReplicationGroupRequestT& request, const IncreaseNodeGroupsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::IncreaseNodeGroupsInGlobalReplicationGroup, request, handler, context);
        }

        /**
         * <p>Dynamically increases the number of replicas in a Redis (cluster mode
         * disabled) replication group or the number of replica nodes in one or more node
         * groups (shards) of a Redis (cluster mode enabled) replication group. This
         * operation is performed with no cluster down time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/IncreaseReplicaCount">AWS
         * API Reference</a></p>
         */
        virtual Model::IncreaseReplicaCountOutcome IncreaseReplicaCount(const Model::IncreaseReplicaCountRequest& request) const;

        /**
         * A Callable wrapper for IncreaseReplicaCount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename IncreaseReplicaCountRequestT = Model::IncreaseReplicaCountRequest>
        Model::IncreaseReplicaCountOutcomeCallable IncreaseReplicaCountCallable(const IncreaseReplicaCountRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::IncreaseReplicaCount, request);
        }

        /**
         * An Async wrapper for IncreaseReplicaCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename IncreaseReplicaCountRequestT = Model::IncreaseReplicaCountRequest>
        void IncreaseReplicaCountAsync(const IncreaseReplicaCountRequestT& request, const IncreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::IncreaseReplicaCount, request, handler, context);
        }

        /**
         * <p>Lists all available node types that you can scale your Redis cluster's or
         * replication group's current node type.</p> <p>When you use the
         * <code>ModifyCacheCluster</code> or <code>ModifyReplicationGroup</code>
         * operations to scale your cluster or replication group, the value of the
         * <code>CacheNodeType</code> parameter must be one of the node types returned by
         * this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ListAllowedNodeTypeModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAllowedNodeTypeModificationsOutcome ListAllowedNodeTypeModifications(const Model::ListAllowedNodeTypeModificationsRequest& request) const;

        /**
         * A Callable wrapper for ListAllowedNodeTypeModifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAllowedNodeTypeModificationsRequestT = Model::ListAllowedNodeTypeModificationsRequest>
        Model::ListAllowedNodeTypeModificationsOutcomeCallable ListAllowedNodeTypeModificationsCallable(const ListAllowedNodeTypeModificationsRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::ListAllowedNodeTypeModifications, request);
        }

        /**
         * An Async wrapper for ListAllowedNodeTypeModifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAllowedNodeTypeModificationsRequestT = Model::ListAllowedNodeTypeModificationsRequest>
        void ListAllowedNodeTypeModificationsAsync(const ListAllowedNodeTypeModificationsRequestT& request, const ListAllowedNodeTypeModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::ListAllowedNodeTypeModifications, request, handler, context);
        }

        /**
         * <p>Lists all tags currently on a named resource.</p> <p> A tag is a key-value
         * pair where the key and value are case-sensitive. You can use tags to categorize
         * and track all your ElastiCache resources, with the exception of global
         * replication group. When you add or remove tags on replication groups, those
         * actions will be replicated to all nodes in the replication group. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/IAM.ResourceLevelPermissions.html">Resource-level
         * permissions</a>.</p> <p>If the cluster is not in the <i>available</i> state,
         * <code>ListTagsForResource</code> returns an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Modifies the settings for a cluster. You can use this operation to change one
         * or more cluster configuration parameters by specifying the parameters and the
         * new values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCacheClusterOutcome ModifyCacheCluster(const Model::ModifyCacheClusterRequest& request) const;

        /**
         * A Callable wrapper for ModifyCacheCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyCacheClusterRequestT = Model::ModifyCacheClusterRequest>
        Model::ModifyCacheClusterOutcomeCallable ModifyCacheClusterCallable(const ModifyCacheClusterRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::ModifyCacheCluster, request);
        }

        /**
         * An Async wrapper for ModifyCacheCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyCacheClusterRequestT = Model::ModifyCacheClusterRequest>
        void ModifyCacheClusterAsync(const ModifyCacheClusterRequestT& request, const ModifyCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::ModifyCacheCluster, request, handler, context);
        }

        /**
         * <p>Modifies the parameters of a cache parameter group. You can modify up to 20
         * parameters in a single request by submitting a list parameter name and value
         * pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCacheParameterGroupOutcome ModifyCacheParameterGroup(const Model::ModifyCacheParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyCacheParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyCacheParameterGroupRequestT = Model::ModifyCacheParameterGroupRequest>
        Model::ModifyCacheParameterGroupOutcomeCallable ModifyCacheParameterGroupCallable(const ModifyCacheParameterGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::ModifyCacheParameterGroup, request);
        }

        /**
         * An Async wrapper for ModifyCacheParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyCacheParameterGroupRequestT = Model::ModifyCacheParameterGroupRequest>
        void ModifyCacheParameterGroupAsync(const ModifyCacheParameterGroupRequestT& request, const ModifyCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::ModifyCacheParameterGroup, request, handler, context);
        }

        /**
         * <p>Modifies an existing cache subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCacheSubnetGroupOutcome ModifyCacheSubnetGroup(const Model::ModifyCacheSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyCacheSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyCacheSubnetGroupRequestT = Model::ModifyCacheSubnetGroupRequest>
        Model::ModifyCacheSubnetGroupOutcomeCallable ModifyCacheSubnetGroupCallable(const ModifyCacheSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::ModifyCacheSubnetGroup, request);
        }

        /**
         * An Async wrapper for ModifyCacheSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyCacheSubnetGroupRequestT = Model::ModifyCacheSubnetGroupRequest>
        void ModifyCacheSubnetGroupAsync(const ModifyCacheSubnetGroupRequestT& request, const ModifyCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::ModifyCacheSubnetGroup, request, handler, context);
        }

        /**
         * <p>Modifies the settings for a Global datastore.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyGlobalReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyGlobalReplicationGroupOutcome ModifyGlobalReplicationGroup(const Model::ModifyGlobalReplicationGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyGlobalReplicationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyGlobalReplicationGroupRequestT = Model::ModifyGlobalReplicationGroupRequest>
        Model::ModifyGlobalReplicationGroupOutcomeCallable ModifyGlobalReplicationGroupCallable(const ModifyGlobalReplicationGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::ModifyGlobalReplicationGroup, request);
        }

        /**
         * An Async wrapper for ModifyGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyGlobalReplicationGroupRequestT = Model::ModifyGlobalReplicationGroupRequest>
        void ModifyGlobalReplicationGroupAsync(const ModifyGlobalReplicationGroupRequestT& request, const ModifyGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::ModifyGlobalReplicationGroup, request, handler, context);
        }

        /**
         * <p>Modifies the settings for a replication group. This is limited to Redis 7 and
         * newer.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/scaling-redis-cluster-mode-enabled.html">Scaling
         * for Amazon ElastiCache for Redis (cluster mode enabled)</a> in the ElastiCache
         * User Guide</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_ModifyReplicationGroupShardConfiguration.html">ModifyReplicationGroupShardConfiguration</a>
         * in the ElastiCache API Reference</p> </li> </ul>  <p>This operation is
         * valid for Redis only.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReplicationGroupOutcome ModifyReplicationGroup(const Model::ModifyReplicationGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyReplicationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyReplicationGroupRequestT = Model::ModifyReplicationGroupRequest>
        Model::ModifyReplicationGroupOutcomeCallable ModifyReplicationGroupCallable(const ModifyReplicationGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::ModifyReplicationGroup, request);
        }

        /**
         * An Async wrapper for ModifyReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyReplicationGroupRequestT = Model::ModifyReplicationGroupRequest>
        void ModifyReplicationGroupAsync(const ModifyReplicationGroupRequestT& request, const ModifyReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::ModifyReplicationGroup, request, handler, context);
        }

        /**
         * <p>Modifies a replication group's shards (node groups) by allowing you to add
         * shards, remove shards, or rebalance the keyspaces among existing
         * shards.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyReplicationGroupShardConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReplicationGroupShardConfigurationOutcome ModifyReplicationGroupShardConfiguration(const Model::ModifyReplicationGroupShardConfigurationRequest& request) const;

        /**
         * A Callable wrapper for ModifyReplicationGroupShardConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyReplicationGroupShardConfigurationRequestT = Model::ModifyReplicationGroupShardConfigurationRequest>
        Model::ModifyReplicationGroupShardConfigurationOutcomeCallable ModifyReplicationGroupShardConfigurationCallable(const ModifyReplicationGroupShardConfigurationRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::ModifyReplicationGroupShardConfiguration, request);
        }

        /**
         * An Async wrapper for ModifyReplicationGroupShardConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyReplicationGroupShardConfigurationRequestT = Model::ModifyReplicationGroupShardConfigurationRequest>
        void ModifyReplicationGroupShardConfigurationAsync(const ModifyReplicationGroupShardConfigurationRequestT& request, const ModifyReplicationGroupShardConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::ModifyReplicationGroupShardConfiguration, request, handler, context);
        }

        /**
         * <p>This API modifies the attributes of a serverless cache.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyServerlessCache">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyServerlessCacheOutcome ModifyServerlessCache(const Model::ModifyServerlessCacheRequest& request) const;

        /**
         * A Callable wrapper for ModifyServerlessCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyServerlessCacheRequestT = Model::ModifyServerlessCacheRequest>
        Model::ModifyServerlessCacheOutcomeCallable ModifyServerlessCacheCallable(const ModifyServerlessCacheRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::ModifyServerlessCache, request);
        }

        /**
         * An Async wrapper for ModifyServerlessCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyServerlessCacheRequestT = Model::ModifyServerlessCacheRequest>
        void ModifyServerlessCacheAsync(const ModifyServerlessCacheRequestT& request, const ModifyServerlessCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::ModifyServerlessCache, request, handler, context);
        }

        /**
         * <p>Changes user password(s) and/or access string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest& request) const;

        /**
         * A Callable wrapper for ModifyUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyUserRequestT = Model::ModifyUserRequest>
        Model::ModifyUserOutcomeCallable ModifyUserCallable(const ModifyUserRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::ModifyUser, request);
        }

        /**
         * An Async wrapper for ModifyUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyUserRequestT = Model::ModifyUserRequest>
        void ModifyUserAsync(const ModifyUserRequestT& request, const ModifyUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::ModifyUser, request, handler, context);
        }

        /**
         * <p>Changes the list of users that belong to the user group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyUserGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyUserGroupOutcome ModifyUserGroup(const Model::ModifyUserGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyUserGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyUserGroupRequestT = Model::ModifyUserGroupRequest>
        Model::ModifyUserGroupOutcomeCallable ModifyUserGroupCallable(const ModifyUserGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::ModifyUserGroup, request);
        }

        /**
         * An Async wrapper for ModifyUserGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyUserGroupRequestT = Model::ModifyUserGroupRequest>
        void ModifyUserGroupAsync(const ModifyUserGroupRequestT& request, const ModifyUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::ModifyUserGroup, request, handler, context);
        }

        /**
         * <p>Allows you to purchase a reserved cache node offering. Reserved nodes are not
         * eligible for cancellation and are non-refundable. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/reserved-nodes.html">Managing
         * Costs with Reserved Nodes</a> for Redis or <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/reserved-nodes.html">Managing
         * Costs with Reserved Nodes</a> for Memcached.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/PurchaseReservedCacheNodesOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseReservedCacheNodesOfferingOutcome PurchaseReservedCacheNodesOffering(const Model::PurchaseReservedCacheNodesOfferingRequest& request) const;

        /**
         * A Callable wrapper for PurchaseReservedCacheNodesOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PurchaseReservedCacheNodesOfferingRequestT = Model::PurchaseReservedCacheNodesOfferingRequest>
        Model::PurchaseReservedCacheNodesOfferingOutcomeCallable PurchaseReservedCacheNodesOfferingCallable(const PurchaseReservedCacheNodesOfferingRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::PurchaseReservedCacheNodesOffering, request);
        }

        /**
         * An Async wrapper for PurchaseReservedCacheNodesOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PurchaseReservedCacheNodesOfferingRequestT = Model::PurchaseReservedCacheNodesOfferingRequest>
        void PurchaseReservedCacheNodesOfferingAsync(const PurchaseReservedCacheNodesOfferingRequestT& request, const PurchaseReservedCacheNodesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::PurchaseReservedCacheNodesOffering, request, handler, context);
        }

        /**
         * <p>Redistribute slots to ensure uniform distribution across existing shards in
         * the cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RebalanceSlotsInGlobalReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::RebalanceSlotsInGlobalReplicationGroupOutcome RebalanceSlotsInGlobalReplicationGroup(const Model::RebalanceSlotsInGlobalReplicationGroupRequest& request) const;

        /**
         * A Callable wrapper for RebalanceSlotsInGlobalReplicationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebalanceSlotsInGlobalReplicationGroupRequestT = Model::RebalanceSlotsInGlobalReplicationGroupRequest>
        Model::RebalanceSlotsInGlobalReplicationGroupOutcomeCallable RebalanceSlotsInGlobalReplicationGroupCallable(const RebalanceSlotsInGlobalReplicationGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::RebalanceSlotsInGlobalReplicationGroup, request);
        }

        /**
         * An Async wrapper for RebalanceSlotsInGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebalanceSlotsInGlobalReplicationGroupRequestT = Model::RebalanceSlotsInGlobalReplicationGroupRequest>
        void RebalanceSlotsInGlobalReplicationGroupAsync(const RebalanceSlotsInGlobalReplicationGroupRequestT& request, const RebalanceSlotsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::RebalanceSlotsInGlobalReplicationGroup, request, handler, context);
        }

        /**
         * <p>Reboots some, or all, of the cache nodes within a provisioned cluster. This
         * operation applies any modified cache parameter groups to the cluster. The reboot
         * operation takes place as soon as possible, and results in a momentary outage to
         * the cluster. During the reboot, the cluster status is set to REBOOTING.</p>
         * <p>The reboot causes the contents of the cache (for each cache node being
         * rebooted) to be lost.</p> <p>When the reboot is complete, a cluster event is
         * created.</p> <p>Rebooting a cluster is currently supported on Memcached and
         * Redis (cluster mode disabled) clusters. Rebooting is not supported on Redis
         * (cluster mode enabled) clusters.</p> <p>If you make changes to parameters that
         * require a Redis (cluster mode enabled) cluster reboot for the changes to be
         * applied, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/nodes.rebooting.html">Rebooting
         * a Cluster</a> for an alternate process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RebootCacheCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootCacheClusterOutcome RebootCacheCluster(const Model::RebootCacheClusterRequest& request) const;

        /**
         * A Callable wrapper for RebootCacheCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebootCacheClusterRequestT = Model::RebootCacheClusterRequest>
        Model::RebootCacheClusterOutcomeCallable RebootCacheClusterCallable(const RebootCacheClusterRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::RebootCacheCluster, request);
        }

        /**
         * An Async wrapper for RebootCacheCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebootCacheClusterRequestT = Model::RebootCacheClusterRequest>
        void RebootCacheClusterAsync(const RebootCacheClusterRequestT& request, const RebootCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::RebootCacheCluster, request, handler, context);
        }

        /**
         * <p>Removes the tags identified by the <code>TagKeys</code> list from the named
         * resource. A tag is a key-value pair where the key and value are case-sensitive.
         * You can use tags to categorize and track all your ElastiCache resources, with
         * the exception of global replication group. When you add or remove tags on
         * replication groups, those actions will be replicated to all nodes in the
         * replication group. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/IAM.ResourceLevelPermissions.html">Resource-level
         * permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * A Callable wrapper for RemoveTagsFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::RemoveTagsFromResource, request);
        }

        /**
         * An Async wrapper for RemoveTagsFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        void RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequestT& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::RemoveTagsFromResource, request, handler, context);
        }

        /**
         * <p>Modifies the parameters of a cache parameter group to the engine or system
         * default value. You can reset specific parameters by submitting a list of
         * parameter names. To reset the entire cache parameter group, specify the
         * <code>ResetAllParameters</code> and <code>CacheParameterGroupName</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ResetCacheParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetCacheParameterGroupOutcome ResetCacheParameterGroup(const Model::ResetCacheParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ResetCacheParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetCacheParameterGroupRequestT = Model::ResetCacheParameterGroupRequest>
        Model::ResetCacheParameterGroupOutcomeCallable ResetCacheParameterGroupCallable(const ResetCacheParameterGroupRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::ResetCacheParameterGroup, request);
        }

        /**
         * An Async wrapper for ResetCacheParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetCacheParameterGroupRequestT = Model::ResetCacheParameterGroupRequest>
        void ResetCacheParameterGroupAsync(const ResetCacheParameterGroupRequestT& request, const ResetCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::ResetCacheParameterGroup, request, handler, context);
        }

        /**
         * <p>Revokes ingress from a cache security group. Use this operation to disallow
         * access from an Amazon EC2 security group that had been previously
         * authorized.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RevokeCacheSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeCacheSecurityGroupIngressOutcome RevokeCacheSecurityGroupIngress(const Model::RevokeCacheSecurityGroupIngressRequest& request) const;

        /**
         * A Callable wrapper for RevokeCacheSecurityGroupIngress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RevokeCacheSecurityGroupIngressRequestT = Model::RevokeCacheSecurityGroupIngressRequest>
        Model::RevokeCacheSecurityGroupIngressOutcomeCallable RevokeCacheSecurityGroupIngressCallable(const RevokeCacheSecurityGroupIngressRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::RevokeCacheSecurityGroupIngress, request);
        }

        /**
         * An Async wrapper for RevokeCacheSecurityGroupIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RevokeCacheSecurityGroupIngressRequestT = Model::RevokeCacheSecurityGroupIngressRequest>
        void RevokeCacheSecurityGroupIngressAsync(const RevokeCacheSecurityGroupIngressRequestT& request, const RevokeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::RevokeCacheSecurityGroupIngress, request, handler, context);
        }

        /**
         * <p>Start the migration of data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/StartMigration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMigrationOutcome StartMigration(const Model::StartMigrationRequest& request) const;

        /**
         * A Callable wrapper for StartMigration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMigrationRequestT = Model::StartMigrationRequest>
        Model::StartMigrationOutcomeCallable StartMigrationCallable(const StartMigrationRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::StartMigration, request);
        }

        /**
         * An Async wrapper for StartMigration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMigrationRequestT = Model::StartMigrationRequest>
        void StartMigrationAsync(const StartMigrationRequestT& request, const StartMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::StartMigration, request, handler, context);
        }

        /**
         * <p>Represents the input of a <code>TestFailover</code> operation which test
         * automatic failover on a specified node group (called shard in the console) in a
         * replication group (called cluster in the console).</p> <p>This API is designed
         * for testing the behavior of your application in case of ElastiCache failover. It
         * is not designed to be an operational tool for initiating a failover to overcome
         * a problem you may have with the cluster. Moreover, in certain conditions such as
         * large-scale operational events, Amazon may block this API. </p> <p
         * class="title"> <b>Note the following</b> </p> <ul> <li> <p>A customer can use
         * this operation to test automatic failover on up to 5 shards (called node groups
         * in the ElastiCache API and Amazon CLI) in any rolling 24-hour period.</p> </li>
         * <li> <p>If calling this operation on shards in different clusters (called
         * replication groups in the API and CLI), the calls can be made concurrently.</p>
         * <p> </p> </li> <li> <p>If calling this operation multiple times on different
         * shards in the same Redis (cluster mode enabled) replication group, the first
         * node replacement must complete before a subsequent call can be made.</p> </li>
         * <li> <p>To determine whether the node replacement is complete you can check
         * Events using the Amazon ElastiCache console, the Amazon CLI, or the ElastiCache
         * API. Look for the following automatic failover related events, listed here in
         * order of occurrance:</p> <ol> <li> <p>Replication group message: <code>Test
         * Failover API called for node group &lt;node-group-id&gt;</code> </p> </li> <li>
         * <p>Cache cluster message: <code>Failover from primary node
         * &lt;primary-node-id&gt; to replica node &lt;node-id&gt; completed</code> </p>
         * </li> <li> <p>Replication group message: <code>Failover from primary node
         * &lt;primary-node-id&gt; to replica node &lt;node-id&gt; completed</code> </p>
         * </li> <li> <p>Cache cluster message: <code>Recovering cache nodes
         * &lt;node-id&gt;</code> </p> </li> <li> <p>Cache cluster message: <code>Finished
         * recovery for cache nodes &lt;node-id&gt;</code> </p> </li> </ol> <p>For more
         * information see:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/ECEvents.Viewing.html">Viewing
         * ElastiCache Events</a> in the <i>ElastiCache User Guide</i> </p> </li> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_DescribeEvents.html">DescribeEvents</a>
         * in the ElastiCache API Reference</p> </li> </ul> </li> </ul> <p>Also see, <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html#auto-failover-test">Testing
         * Multi-AZ </a> in the <i>ElastiCache User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/TestFailover">AWS
         * API Reference</a></p>
         */
        virtual Model::TestFailoverOutcome TestFailover(const Model::TestFailoverRequest& request) const;

        /**
         * A Callable wrapper for TestFailover that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestFailoverRequestT = Model::TestFailoverRequest>
        Model::TestFailoverOutcomeCallable TestFailoverCallable(const TestFailoverRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::TestFailover, request);
        }

        /**
         * An Async wrapper for TestFailover that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestFailoverRequestT = Model::TestFailoverRequest>
        void TestFailoverAsync(const TestFailoverRequestT& request, const TestFailoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::TestFailover, request, handler, context);
        }

        /**
         * <p> Async API to test connection between source and target replication group.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/TestMigration">AWS
         * API Reference</a></p>
         */
        virtual Model::TestMigrationOutcome TestMigration(const Model::TestMigrationRequest& request) const;

        /**
         * A Callable wrapper for TestMigration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestMigrationRequestT = Model::TestMigrationRequest>
        Model::TestMigrationOutcomeCallable TestMigrationCallable(const TestMigrationRequestT& request) const
        {
            return SubmitCallable(&ElastiCacheClient::TestMigration, request);
        }

        /**
         * An Async wrapper for TestMigration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestMigrationRequestT = Model::TestMigrationRequest>
        void TestMigrationAsync(const TestMigrationRequestT& request, const TestMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElastiCacheClient::TestMigration, request, handler, context);
        }


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<ElastiCacheEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<ElastiCacheClient>;
        void init(const ElastiCacheClientConfiguration& clientConfiguration);

        ElastiCacheClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<ElastiCacheEndpointProviderBase> m_endpointProvider;
  };

} // namespace ElastiCache
} // namespace Aws
