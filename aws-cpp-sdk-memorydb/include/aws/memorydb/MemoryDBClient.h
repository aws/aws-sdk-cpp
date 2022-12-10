/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/memorydb/MemoryDBServiceClientModel.h>

namespace Aws
{
namespace MemoryDB
{
  /**
   * <p>MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database
   * that delivers ultra-fast performance and Multi-AZ durability for modern
   * applications built using microservices architectures. MemoryDB stores the entire
   * database in-memory, enabling low latency and high throughput data access. It is
   * compatible with Redis, a popular open source data store, enabling you to
   * leverage Redis’ flexible and friendly data structures, APIs, and commands.</p>
   */
  class AWS_MEMORYDB_API MemoryDBClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MemoryDBClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MemoryDBClient(const Aws::MemoryDB::MemoryDBClientConfiguration& clientConfiguration = Aws::MemoryDB::MemoryDBClientConfiguration(),
                       std::shared_ptr<MemoryDBEndpointProviderBase> endpointProvider = Aws::MakeShared<MemoryDBEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MemoryDBClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<MemoryDBEndpointProviderBase> endpointProvider = Aws::MakeShared<MemoryDBEndpointProvider>(ALLOCATION_TAG),
                       const Aws::MemoryDB::MemoryDBClientConfiguration& clientConfiguration = Aws::MemoryDB::MemoryDBClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MemoryDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<MemoryDBEndpointProviderBase> endpointProvider = Aws::MakeShared<MemoryDBEndpointProvider>(ALLOCATION_TAG),
                       const Aws::MemoryDB::MemoryDBClientConfiguration& clientConfiguration = Aws::MemoryDB::MemoryDBClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MemoryDBClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MemoryDBClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MemoryDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MemoryDBClient();

        /**
         * <p>Apply the service update to a list of clusters supplied. For more information
         * on service updates and applying them, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/managing-updates.html#applying-updates">Applying
         * the service updates</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/BatchUpdateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateClusterOutcome BatchUpdateCluster(const Model::BatchUpdateClusterRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdateClusterOutcomeCallable BatchUpdateClusterCallable(const Model::BatchUpdateClusterRequest& request) const;

        /**
         * An Async wrapper for BatchUpdateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateClusterAsync(const Model::BatchUpdateClusterRequest& request, const BatchUpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Makes a copy of an existing snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CopySnapshot">AWS
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
         * <p>Creates an Access Control List. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/clusters.acls.html">Authenticating
         * users with Access Contol Lists (ACLs)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateACL">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateACLOutcome CreateACL(const Model::CreateACLRequest& request) const;

        /**
         * A Callable wrapper for CreateACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateACLOutcomeCallable CreateACLCallable(const Model::CreateACLRequest& request) const;

        /**
         * An Async wrapper for CreateACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateACLAsync(const Model::CreateACLRequest& request, const CreateACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a cluster. All nodes in the cluster run the same protocol-compliant
         * engine software.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new MemoryDB parameter group. A parameter group is a collection of
         * parameters and their values that are applied to all of the nodes in any cluster.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/parametergroups.html">Configuring
         * engine parameters using parameter groups</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateParameterGroupOutcome CreateParameterGroup(const Model::CreateParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateParameterGroupOutcomeCallable CreateParameterGroupCallable(const Model::CreateParameterGroupRequest& request) const;

        /**
         * An Async wrapper for CreateParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateParameterGroupAsync(const Model::CreateParameterGroupRequest& request, const CreateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a copy of an entire cluster at a specific moment in
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateSnapshot">AWS
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
         * <p>Creates a subnet group. A subnet group is a collection of subnets (typically
         * private) that you can designate for your clusters running in an Amazon Virtual
         * Private Cloud (VPC) environment. When you create a cluster in an Amazon VPC, you
         * must specify a subnet group. MemoryDB uses that subnet group to choose a subnet
         * and IP addresses within that subnet to associate with your nodes. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/subnetgroups.html">Subnets
         * and subnet groups</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubnetGroupOutcome CreateSubnetGroup(const Model::CreateSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubnetGroupOutcomeCallable CreateSubnetGroupCallable(const Model::CreateSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for CreateSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubnetGroupAsync(const Model::CreateSubnetGroupRequest& request, const CreateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a MemoryDB user. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/clusters.acls.html">Authenticating
         * users with Access Contol Lists (ACLs)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateUser">AWS
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
         * <p>Deletes an Access Control List. The ACL must first be disassociated from the
         * cluster before it can be deleted. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/clusters.acls.html">Authenticating
         * users with Access Contol Lists (ACLs)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteACL">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteACLOutcome DeleteACL(const Model::DeleteACLRequest& request) const;

        /**
         * A Callable wrapper for DeleteACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteACLOutcomeCallable DeleteACLCallable(const Model::DeleteACLRequest& request) const;

        /**
         * An Async wrapper for DeleteACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteACLAsync(const Model::DeleteACLRequest& request, const DeleteACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a cluster. It also deletes all associated nodes and node
         * endpoints</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified parameter group. You cannot delete a parameter group if
         * it is associated with any clusters. You cannot delete the default parameter
         * groups in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParameterGroupOutcome DeleteParameterGroup(const Model::DeleteParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteParameterGroupOutcomeCallable DeleteParameterGroupCallable(const Model::DeleteParameterGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteParameterGroupAsync(const Model::DeleteParameterGroupRequest& request, const DeleteParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing snapshot. When you receive a successful response from
         * this operation, MemoryDB immediately begins deleting the snapshot; you cannot
         * cancel or revert this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteSnapshot">AWS
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
         * <p>Deletes a subnet group. You cannot delete a default subnet group or one that
         * is associated with any clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubnetGroupOutcome DeleteSubnetGroup(const Model::DeleteSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubnetGroupOutcomeCallable DeleteSubnetGroupCallable(const Model::DeleteSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSubnetGroupAsync(const Model::DeleteSubnetGroupRequest& request, const DeleteSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user. The user will be removed from all ACLs and in turn removed
         * from all clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteUser">AWS
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
         * <p>Returns a list of ACLs</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeACLs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeACLsOutcome DescribeACLs(const Model::DescribeACLsRequest& request) const;

        /**
         * A Callable wrapper for DescribeACLs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeACLsOutcomeCallable DescribeACLsCallable(const Model::DescribeACLsRequest& request) const;

        /**
         * An Async wrapper for DescribeACLs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeACLsAsync(const Model::DescribeACLsRequest& request, const DescribeACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all provisioned clusters if no cluster identifier
         * is specified, or about a specific cluster if a cluster name is
         * supplied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request) const;

        /**
         * An Async wrapper for DescribeClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the available Redis engine versions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineVersionsOutcome DescribeEngineVersions(const Model::DescribeEngineVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEngineVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEngineVersionsOutcomeCallable DescribeEngineVersionsCallable(const Model::DescribeEngineVersionsRequest& request) const;

        /**
         * An Async wrapper for DescribeEngineVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEngineVersionsAsync(const Model::DescribeEngineVersionsRequest& request, const DescribeEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns events related to clusters, security groups, and parameter groups.
         * You can obtain events specific to a particular cluster, security group, or
         * parameter group by providing the name as a parameter. By default, only the
         * events occurring within the last hour are returned; however, you can retrieve up
         * to 14 days' worth of events if necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeEvents">AWS
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
         * <p>Returns a list of parameter group descriptions. If a parameter group name is
         * specified, the list contains only the descriptions for that group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeParameterGroupsOutcome DescribeParameterGroups(const Model::DescribeParameterGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeParameterGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeParameterGroupsOutcomeCallable DescribeParameterGroupsCallable(const Model::DescribeParameterGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeParameterGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeParameterGroupsAsync(const Model::DescribeParameterGroupsRequest& request, const DescribeParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the detailed parameter list for a particular parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeParametersOutcome DescribeParameters(const Model::DescribeParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeParametersOutcomeCallable DescribeParametersCallable(const Model::DescribeParametersRequest& request) const;

        /**
         * An Async wrapper for DescribeParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details of the service updates</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeServiceUpdates">AWS
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
         * <p>Returns information about cluster snapshots. By default, DescribeSnapshots
         * lists all of your snapshots; it can optionally describe a single snapshot, or
         * just the snapshots associated with a particular cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeSnapshots">AWS
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
         * <p>Returns a list of subnet group descriptions. If a subnet group name is
         * specified, the list contains only the description of that group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeSubnetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubnetGroupsOutcome DescribeSubnetGroups(const Model::DescribeSubnetGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSubnetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSubnetGroupsOutcomeCallable DescribeSubnetGroupsCallable(const Model::DescribeSubnetGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeSubnetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSubnetGroupsAsync(const Model::DescribeSubnetGroupsRequest& request, const DescribeSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeUsers">AWS
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
         * <p>Used to failover a shard. This API is designed for testing the behavior of
         * your application in case of MemoryDB failover. It is not designed to be used as
         * a production-level tool for initiating a failover to overcome a problem you may
         * have with the cluster. Moreover, in certain conditions such as large scale
         * operational events, Amazon may block this API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/FailoverShard">AWS
         * API Reference</a></p>
         */
        virtual Model::FailoverShardOutcome FailoverShard(const Model::FailoverShardRequest& request) const;

        /**
         * A Callable wrapper for FailoverShard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FailoverShardOutcomeCallable FailoverShardCallable(const Model::FailoverShardRequest& request) const;

        /**
         * An Async wrapper for FailoverShard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FailoverShardAsync(const Model::FailoverShardRequest& request, const FailoverShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all available node types that you can scale to from your cluster's
         * current node type. When you use the UpdateCluster operation to scale your
         * cluster, the value of the NodeType parameter must be one of the node types
         * returned by this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ListAllowedNodeTypeUpdates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAllowedNodeTypeUpdatesOutcome ListAllowedNodeTypeUpdates(const Model::ListAllowedNodeTypeUpdatesRequest& request) const;

        /**
         * A Callable wrapper for ListAllowedNodeTypeUpdates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAllowedNodeTypeUpdatesOutcomeCallable ListAllowedNodeTypeUpdatesCallable(const Model::ListAllowedNodeTypeUpdatesRequest& request) const;

        /**
         * An Async wrapper for ListAllowedNodeTypeUpdates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAllowedNodeTypeUpdatesAsync(const Model::ListAllowedNodeTypeUpdatesRequest& request, const ListAllowedNodeTypeUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags currently on a named resource. A tag is a key-value pair where
         * the key and value are case-sensitive. You can use tags to categorize and track
         * your MemoryDB resources. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/Tagging-Resources.html">Tagging
         * your MemoryDB resources</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the parameters of a parameter group to the engine or system default
         * value. You can reset specific parameters by submitting a list of parameter
         * names. To reset the entire parameter group, specify the AllParameters and
         * ParameterGroupName parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ResetParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetParameterGroupOutcome ResetParameterGroup(const Model::ResetParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ResetParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetParameterGroupOutcomeCallable ResetParameterGroupCallable(const Model::ResetParameterGroupRequest& request) const;

        /**
         * An Async wrapper for ResetParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetParameterGroupAsync(const Model::ResetParameterGroupRequest& request, const ResetParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A tag is a key-value pair where the key and value are case-sensitive. You can
         * use tags to categorize and track all your MemoryDB resources. When you add or
         * remove tags on clusters, those actions will be replicated to all nodes in the
         * cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/iam.resourcelevelpermissions.html">Resource-level
         * permissions</a>.</p> <p>For example, you can use cost-allocation tags to your
         * MemoryDB resources, Amazon generates a cost allocation report as a
         * comma-separated value (CSV) file with your usage and costs aggregated by your
         * tags. You can apply tags that represent business categories (such as cost
         * centers, application names, or owners) to organize your costs across multiple
         * services. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/tagging.html">Using
         * Cost Allocation Tags</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/TagResource">AWS
         * API Reference</a></p>
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
         * <p>Use this operation to remove tags on a resource</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UntagResource">AWS
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
         * <p>Changes the list of users that belong to the Access Control
         * List.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateACL">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateACLOutcome UpdateACL(const Model::UpdateACLRequest& request) const;

        /**
         * A Callable wrapper for UpdateACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateACLOutcomeCallable UpdateACLCallable(const Model::UpdateACLRequest& request) const;

        /**
         * An Async wrapper for UpdateACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateACLAsync(const Model::UpdateACLRequest& request, const UpdateACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the settings for a cluster. You can use this operation to change one
         * or more cluster configuration settings by specifying the settings and the new
         * values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterOutcome UpdateCluster(const Model::UpdateClusterRequest& request) const;

        /**
         * A Callable wrapper for UpdateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClusterOutcomeCallable UpdateClusterCallable(const Model::UpdateClusterRequest& request) const;

        /**
         * An Async wrapper for UpdateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClusterAsync(const Model::UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the parameters of a parameter group. You can modify up to 20
         * parameters in a single request by submitting a list parameter name and value
         * pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateParameterGroupOutcome UpdateParameterGroup(const Model::UpdateParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateParameterGroupOutcomeCallable UpdateParameterGroupCallable(const Model::UpdateParameterGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateParameterGroupAsync(const Model::UpdateParameterGroupRequest& request, const UpdateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a subnet group. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/ubnetGroups.Modifying.html">Updating
         * a subnet group</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubnetGroupOutcome UpdateSubnetGroup(const Model::UpdateSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubnetGroupOutcomeCallable UpdateSubnetGroupCallable(const Model::UpdateSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubnetGroupAsync(const Model::UpdateSubnetGroupRequest& request, const UpdateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes user password(s) and/or access string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * A Callable wrapper for UpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MemoryDBEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MemoryDBClient>;
      void init(const MemoryDBClientConfiguration& clientConfiguration);

      MemoryDBClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MemoryDBEndpointProviderBase> m_endpointProvider;
  };

} // namespace MemoryDB
} // namespace Aws
