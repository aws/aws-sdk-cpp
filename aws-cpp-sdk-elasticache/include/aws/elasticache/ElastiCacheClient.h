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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElastiCacheClient(const Aws::ElastiCache::ElastiCacheClientConfiguration& clientConfiguration = Aws::ElastiCache::ElastiCacheClientConfiguration(),
                          std::shared_ptr<ElastiCacheEndpointProviderBase> endpointProvider = Aws::MakeShared<ElastiCacheEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElastiCacheClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<ElastiCacheEndpointProviderBase> endpointProvider = Aws::MakeShared<ElastiCacheEndpointProvider>(ALLOCATION_TAG),
                          const Aws::ElastiCache::ElastiCacheClientConfiguration& clientConfiguration = Aws::ElastiCache::ElastiCacheClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElastiCacheClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<ElastiCacheEndpointProviderBase> endpointProvider = Aws::MakeShared<ElastiCacheEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * An Async wrapper for AddTagsToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AuthorizeCacheSecurityGroupIngressOutcomeCallable AuthorizeCacheSecurityGroupIngressCallable(const Model::AuthorizeCacheSecurityGroupIngressRequest& request) const;

        /**
         * An Async wrapper for AuthorizeCacheSecurityGroupIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeCacheSecurityGroupIngressAsync(const Model::AuthorizeCacheSecurityGroupIngressRequest& request, const AuthorizeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchApplyUpdateActionOutcomeCallable BatchApplyUpdateActionCallable(const Model::BatchApplyUpdateActionRequest& request) const;

        /**
         * An Async wrapper for BatchApplyUpdateAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchApplyUpdateActionAsync(const Model::BatchApplyUpdateActionRequest& request, const BatchApplyUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchStopUpdateActionOutcomeCallable BatchStopUpdateActionCallable(const Model::BatchStopUpdateActionRequest& request) const;

        /**
         * An Async wrapper for BatchStopUpdateAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchStopUpdateActionAsync(const Model::BatchStopUpdateActionRequest& request, const BatchStopUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Complete the migration of data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CompleteMigration">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteMigrationOutcome CompleteMigration(const Model::CompleteMigrationRequest& request) const;

        /**
         * A Callable wrapper for CompleteMigration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CompleteMigrationOutcomeCallable CompleteMigrationCallable(const Model::CompleteMigrationRequest& request) const;

        /**
         * An Async wrapper for CompleteMigration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CompleteMigrationAsync(const Model::CompleteMigrationRequest& request, const CompleteMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CopySnapshotOutcomeCallable CopySnapshotCallable(const Model::CopySnapshotRequest& request) const;

        /**
         * An Async wrapper for CopySnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopySnapshotAsync(const Model::CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateCacheClusterOutcomeCallable CreateCacheClusterCallable(const Model::CreateCacheClusterRequest& request) const;

        /**
         * An Async wrapper for CreateCacheCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCacheClusterAsync(const Model::CreateCacheClusterRequest& request, const CreateCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateCacheParameterGroupOutcomeCallable CreateCacheParameterGroupCallable(const Model::CreateCacheParameterGroupRequest& request) const;

        /**
         * An Async wrapper for CreateCacheParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCacheParameterGroupAsync(const Model::CreateCacheParameterGroupRequest& request, const CreateCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateCacheSecurityGroupOutcomeCallable CreateCacheSecurityGroupCallable(const Model::CreateCacheSecurityGroupRequest& request) const;

        /**
         * An Async wrapper for CreateCacheSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCacheSecurityGroupAsync(const Model::CreateCacheSecurityGroupRequest& request, const CreateCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateCacheSubnetGroupOutcomeCallable CreateCacheSubnetGroupCallable(const Model::CreateCacheSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for CreateCacheSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCacheSubnetGroupAsync(const Model::CreateCacheSubnetGroupRequest& request, const CreateCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateGlobalReplicationGroupOutcomeCallable CreateGlobalReplicationGroupCallable(const Model::CreateGlobalReplicationGroupRequest& request) const;

        /**
         * An Async wrapper for CreateGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGlobalReplicationGroupAsync(const Model::CreateGlobalReplicationGroupRequest& request, const CreateGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Redis (cluster mode disabled) or a Redis (cluster mode enabled)
         * replication group.</p> <p>This API can be used to create a standalone regional
         * replication group or a secondary replication group associated with a Global
         * datastore.</p> <p>A Redis (cluster mode disabled) replication group is a
         * collection of clusters, where one of the clusters is a read/write primary and
         * the others are read-only replicas. Writes to the primary are asynchronously
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
        virtual Model::CreateReplicationGroupOutcomeCallable CreateReplicationGroupCallable(const Model::CreateReplicationGroupRequest& request) const;

        /**
         * An Async wrapper for CreateReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationGroupAsync(const Model::CreateReplicationGroupRequest& request, const CreateReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request) const;

        /**
         * An Async wrapper for CreateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateUserGroupOutcomeCallable CreateUserGroupCallable(const Model::CreateUserGroupRequest& request) const;

        /**
         * An Async wrapper for CreateUserGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserGroupAsync(const Model::CreateUserGroupRequest& request, const CreateUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DecreaseNodeGroupsInGlobalReplicationGroupOutcomeCallable DecreaseNodeGroupsInGlobalReplicationGroupCallable(const Model::DecreaseNodeGroupsInGlobalReplicationGroupRequest& request) const;

        /**
         * An Async wrapper for DecreaseNodeGroupsInGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DecreaseNodeGroupsInGlobalReplicationGroupAsync(const Model::DecreaseNodeGroupsInGlobalReplicationGroupRequest& request, const DecreaseNodeGroupsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DecreaseReplicaCountOutcomeCallable DecreaseReplicaCountCallable(const Model::DecreaseReplicaCountRequest& request) const;

        /**
         * An Async wrapper for DecreaseReplicaCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DecreaseReplicaCountAsync(const Model::DecreaseReplicaCountRequest& request, const DecreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteCacheClusterOutcomeCallable DeleteCacheClusterCallable(const Model::DeleteCacheClusterRequest& request) const;

        /**
         * An Async wrapper for DeleteCacheCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCacheClusterAsync(const Model::DeleteCacheClusterRequest& request, const DeleteCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteCacheParameterGroupOutcomeCallable DeleteCacheParameterGroupCallable(const Model::DeleteCacheParameterGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteCacheParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCacheParameterGroupAsync(const Model::DeleteCacheParameterGroupRequest& request, const DeleteCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteCacheSecurityGroupOutcomeCallable DeleteCacheSecurityGroupCallable(const Model::DeleteCacheSecurityGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteCacheSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCacheSecurityGroupAsync(const Model::DeleteCacheSecurityGroupRequest& request, const DeleteCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteCacheSubnetGroupOutcomeCallable DeleteCacheSubnetGroupCallable(const Model::DeleteCacheSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteCacheSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCacheSubnetGroupAsync(const Model::DeleteCacheSubnetGroupRequest& request, const DeleteCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteGlobalReplicationGroupOutcomeCallable DeleteGlobalReplicationGroupCallable(const Model::DeleteGlobalReplicationGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGlobalReplicationGroupAsync(const Model::DeleteGlobalReplicationGroupRequest& request, const DeleteGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteReplicationGroupOutcomeCallable DeleteReplicationGroupCallable(const Model::DeleteReplicationGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationGroupAsync(const Model::DeleteReplicationGroupRequest& request, const DeleteReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;

        /**
         * An Async wrapper for DeleteSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteUserGroupOutcomeCallable DeleteUserGroupCallable(const Model::DeleteUserGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteUserGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserGroupAsync(const Model::DeleteUserGroupRequest& request, const DeleteUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeCacheClustersOutcomeCallable DescribeCacheClustersCallable(const Model::DescribeCacheClustersRequest& request) const;

        /**
         * An Async wrapper for DescribeCacheClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheClustersAsync(const Model::DescribeCacheClustersRequest& request, const DescribeCacheClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeCacheEngineVersionsOutcomeCallable DescribeCacheEngineVersionsCallable(const Model::DescribeCacheEngineVersionsRequest& request) const;

        /**
         * An Async wrapper for DescribeCacheEngineVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheEngineVersionsAsync(const Model::DescribeCacheEngineVersionsRequest& request, const DescribeCacheEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeCacheParameterGroupsOutcomeCallable DescribeCacheParameterGroupsCallable(const Model::DescribeCacheParameterGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeCacheParameterGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheParameterGroupsAsync(const Model::DescribeCacheParameterGroupsRequest& request, const DescribeCacheParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeCacheParametersOutcomeCallable DescribeCacheParametersCallable(const Model::DescribeCacheParametersRequest& request) const;

        /**
         * An Async wrapper for DescribeCacheParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheParametersAsync(const Model::DescribeCacheParametersRequest& request, const DescribeCacheParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeCacheSecurityGroupsOutcomeCallable DescribeCacheSecurityGroupsCallable(const Model::DescribeCacheSecurityGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeCacheSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheSecurityGroupsAsync(const Model::DescribeCacheSecurityGroupsRequest& request, const DescribeCacheSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeCacheSubnetGroupsOutcomeCallable DescribeCacheSubnetGroupsCallable(const Model::DescribeCacheSubnetGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeCacheSubnetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheSubnetGroupsAsync(const Model::DescribeCacheSubnetGroupsRequest& request, const DescribeCacheSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeEngineDefaultParametersOutcomeCallable DescribeEngineDefaultParametersCallable(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * An Async wrapper for DescribeEngineDefaultParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEngineDefaultParametersAsync(const Model::DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * An Async wrapper for DescribeEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeGlobalReplicationGroupsOutcomeCallable DescribeGlobalReplicationGroupsCallable(const Model::DescribeGlobalReplicationGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeGlobalReplicationGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGlobalReplicationGroupsAsync(const Model::DescribeGlobalReplicationGroupsRequest& request, const DescribeGlobalReplicationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeReplicationGroupsOutcomeCallable DescribeReplicationGroupsCallable(const Model::DescribeReplicationGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeReplicationGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationGroupsAsync(const Model::DescribeReplicationGroupsRequest& request, const DescribeReplicationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeReservedCacheNodesOutcomeCallable DescribeReservedCacheNodesCallable(const Model::DescribeReservedCacheNodesRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedCacheNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedCacheNodesAsync(const Model::DescribeReservedCacheNodesRequest& request, const DescribeReservedCacheNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists available reserved cache node offerings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeReservedCacheNodesOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedCacheNodesOfferingsOutcome DescribeReservedCacheNodesOfferings(const Model::DescribeReservedCacheNodesOfferingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedCacheNodesOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedCacheNodesOfferingsOutcomeCallable DescribeReservedCacheNodesOfferingsCallable(const Model::DescribeReservedCacheNodesOfferingsRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedCacheNodesOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedCacheNodesOfferingsAsync(const Model::DescribeReservedCacheNodesOfferingsRequest& request, const DescribeReservedCacheNodesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details of the service updates</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeServiceUpdates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceUpdatesOutcome DescribeServiceUpdates(const Model::DescribeServiceUpdatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeServiceUpdates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServiceUpdatesOutcomeCallable DescribeServiceUpdatesCallable(const Model::DescribeServiceUpdatesRequest& request) const;

        /**
         * An Async wrapper for DescribeServiceUpdates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServiceUpdatesAsync(const Model::DescribeServiceUpdatesRequest& request, const DescribeServiceUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * An Async wrapper for DescribeSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details of the update actions </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeUpdateActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUpdateActionsOutcome DescribeUpdateActions(const Model::DescribeUpdateActionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeUpdateActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUpdateActionsOutcomeCallable DescribeUpdateActionsCallable(const Model::DescribeUpdateActionsRequest& request) const;

        /**
         * An Async wrapper for DescribeUpdateActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUpdateActionsAsync(const Model::DescribeUpdateActionsRequest& request, const DescribeUpdateActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of user groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeUserGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserGroupsOutcome DescribeUserGroups(const Model::DescribeUserGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserGroupsOutcomeCallable DescribeUserGroupsCallable(const Model::DescribeUserGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeUserGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserGroupsAsync(const Model::DescribeUserGroupsRequest& request, const DescribeUserGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest& request) const;

        /**
         * A Callable wrapper for DescribeUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request) const;

        /**
         * An Async wrapper for DescribeUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisassociateGlobalReplicationGroupOutcomeCallable DisassociateGlobalReplicationGroupCallable(const Model::DisassociateGlobalReplicationGroupRequest& request) const;

        /**
         * An Async wrapper for DisassociateGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateGlobalReplicationGroupAsync(const Model::DisassociateGlobalReplicationGroupRequest& request, const DisassociateGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::FailoverGlobalReplicationGroupOutcomeCallable FailoverGlobalReplicationGroupCallable(const Model::FailoverGlobalReplicationGroupRequest& request) const;

        /**
         * An Async wrapper for FailoverGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FailoverGlobalReplicationGroupAsync(const Model::FailoverGlobalReplicationGroupRequest& request, const FailoverGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::IncreaseNodeGroupsInGlobalReplicationGroupOutcomeCallable IncreaseNodeGroupsInGlobalReplicationGroupCallable(const Model::IncreaseNodeGroupsInGlobalReplicationGroupRequest& request) const;

        /**
         * An Async wrapper for IncreaseNodeGroupsInGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void IncreaseNodeGroupsInGlobalReplicationGroupAsync(const Model::IncreaseNodeGroupsInGlobalReplicationGroupRequest& request, const IncreaseNodeGroupsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::IncreaseReplicaCountOutcomeCallable IncreaseReplicaCountCallable(const Model::IncreaseReplicaCountRequest& request) const;

        /**
         * An Async wrapper for IncreaseReplicaCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void IncreaseReplicaCountAsync(const Model::IncreaseReplicaCountRequest& request, const IncreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAllowedNodeTypeModificationsOutcomeCallable ListAllowedNodeTypeModificationsCallable(const Model::ListAllowedNodeTypeModificationsRequest& request) const;

        /**
         * An Async wrapper for ListAllowedNodeTypeModifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAllowedNodeTypeModificationsAsync(const Model::ListAllowedNodeTypeModificationsRequest& request, const ListAllowedNodeTypeModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ModifyCacheClusterOutcomeCallable ModifyCacheClusterCallable(const Model::ModifyCacheClusterRequest& request) const;

        /**
         * An Async wrapper for ModifyCacheCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCacheClusterAsync(const Model::ModifyCacheClusterRequest& request, const ModifyCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ModifyCacheParameterGroupOutcomeCallable ModifyCacheParameterGroupCallable(const Model::ModifyCacheParameterGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyCacheParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCacheParameterGroupAsync(const Model::ModifyCacheParameterGroupRequest& request, const ModifyCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing cache subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCacheSubnetGroupOutcome ModifyCacheSubnetGroup(const Model::ModifyCacheSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyCacheSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyCacheSubnetGroupOutcomeCallable ModifyCacheSubnetGroupCallable(const Model::ModifyCacheSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyCacheSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCacheSubnetGroupAsync(const Model::ModifyCacheSubnetGroupRequest& request, const ModifyCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the settings for a Global datastore.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyGlobalReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyGlobalReplicationGroupOutcome ModifyGlobalReplicationGroup(const Model::ModifyGlobalReplicationGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyGlobalReplicationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyGlobalReplicationGroupOutcomeCallable ModifyGlobalReplicationGroupCallable(const Model::ModifyGlobalReplicationGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyGlobalReplicationGroupAsync(const Model::ModifyGlobalReplicationGroupRequest& request, const ModifyGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the settings for a replication group.</p> <ul> <li> <p> <a
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
        virtual Model::ModifyReplicationGroupOutcomeCallable ModifyReplicationGroupCallable(const Model::ModifyReplicationGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyReplicationGroupAsync(const Model::ModifyReplicationGroupRequest& request, const ModifyReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ModifyReplicationGroupShardConfigurationOutcomeCallable ModifyReplicationGroupShardConfigurationCallable(const Model::ModifyReplicationGroupShardConfigurationRequest& request) const;

        /**
         * An Async wrapper for ModifyReplicationGroupShardConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyReplicationGroupShardConfigurationAsync(const Model::ModifyReplicationGroupShardConfigurationRequest& request, const ModifyReplicationGroupShardConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes user password(s) and/or access string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest& request) const;

        /**
         * A Callable wrapper for ModifyUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyUserOutcomeCallable ModifyUserCallable(const Model::ModifyUserRequest& request) const;

        /**
         * An Async wrapper for ModifyUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ModifyUserGroupOutcomeCallable ModifyUserGroupCallable(const Model::ModifyUserGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyUserGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyUserGroupAsync(const Model::ModifyUserGroupRequest& request, const ModifyUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PurchaseReservedCacheNodesOfferingOutcomeCallable PurchaseReservedCacheNodesOfferingCallable(const Model::PurchaseReservedCacheNodesOfferingRequest& request) const;

        /**
         * An Async wrapper for PurchaseReservedCacheNodesOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseReservedCacheNodesOfferingAsync(const Model::PurchaseReservedCacheNodesOfferingRequest& request, const PurchaseReservedCacheNodesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RebalanceSlotsInGlobalReplicationGroupOutcomeCallable RebalanceSlotsInGlobalReplicationGroupCallable(const Model::RebalanceSlotsInGlobalReplicationGroupRequest& request) const;

        /**
         * An Async wrapper for RebalanceSlotsInGlobalReplicationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebalanceSlotsInGlobalReplicationGroupAsync(const Model::RebalanceSlotsInGlobalReplicationGroupRequest& request, const RebalanceSlotsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RebootCacheClusterOutcomeCallable RebootCacheClusterCallable(const Model::RebootCacheClusterRequest& request) const;

        /**
         * An Async wrapper for RebootCacheCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootCacheClusterAsync(const Model::RebootCacheClusterRequest& request, const RebootCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * An Async wrapper for RemoveTagsFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ResetCacheParameterGroupOutcomeCallable ResetCacheParameterGroupCallable(const Model::ResetCacheParameterGroupRequest& request) const;

        /**
         * An Async wrapper for ResetCacheParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetCacheParameterGroupAsync(const Model::ResetCacheParameterGroupRequest& request, const ResetCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RevokeCacheSecurityGroupIngressOutcomeCallable RevokeCacheSecurityGroupIngressCallable(const Model::RevokeCacheSecurityGroupIngressRequest& request) const;

        /**
         * An Async wrapper for RevokeCacheSecurityGroupIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeCacheSecurityGroupIngressAsync(const Model::RevokeCacheSecurityGroupIngressRequest& request, const RevokeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Start the migration of data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/StartMigration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMigrationOutcome StartMigration(const Model::StartMigrationRequest& request) const;

        /**
         * A Callable wrapper for StartMigration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMigrationOutcomeCallable StartMigrationCallable(const Model::StartMigrationRequest& request) const;

        /**
         * An Async wrapper for StartMigration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMigrationAsync(const Model::StartMigrationRequest& request, const StartMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TestFailoverOutcomeCallable TestFailoverCallable(const Model::TestFailoverRequest& request) const;

        /**
         * An Async wrapper for TestFailover that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestFailoverAsync(const Model::TestFailoverRequest& request, const TestFailoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
