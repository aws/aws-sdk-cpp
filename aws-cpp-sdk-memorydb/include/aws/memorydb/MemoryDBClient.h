/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/memorydb/MemoryDBServiceClientModel.h>
#include <aws/memorydb/MemoryDBLegacyAsyncMacros.h>

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
  class AWS_MEMORYDB_API MemoryDBClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Makes a copy of an existing snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CopySnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopySnapshotOutcome CopySnapshot(const Model::CopySnapshotRequest& request) const;


        /**
         * <p>Creates an Access Control List. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/clusters.acls.html">Authenticating
         * users with Access Contol Lists (ACLs)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateACL">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateACLOutcome CreateACL(const Model::CreateACLRequest& request) const;


        /**
         * <p>Creates a cluster. All nodes in the cluster run the same protocol-compliant
         * engine software.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;


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
         * <p>Creates a copy of an entire cluster at a specific moment in
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;


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
         * <p>Creates a MemoryDB user. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/clusters.acls.html">Authenticating
         * users with Access Contol Lists (ACLs)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;


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
         * <p>Deletes a cluster. It also deletes all associated nodes and node
         * endpoints</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;


        /**
         * <p>Deletes the specified parameter group. You cannot delete a parameter group if
         * it is associated with any clusters. You cannot delete the default parameter
         * groups in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParameterGroupOutcome DeleteParameterGroup(const Model::DeleteParameterGroupRequest& request) const;


        /**
         * <p>Deletes an existing snapshot. When you receive a successful response from
         * this operation, MemoryDB immediately begins deleting the snapshot; you cannot
         * cancel or revert this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;


        /**
         * <p>Deletes a subnet group. You cannot delete a default subnet group or one that
         * is associated with any clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubnetGroupOutcome DeleteSubnetGroup(const Model::DeleteSubnetGroupRequest& request) const;


        /**
         * <p>Deletes a user. The user will be removed from all ACLs and in turn removed
         * from all clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;


        /**
         * <p>Returns a list of ACLs</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeACLs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeACLsOutcome DescribeACLs(const Model::DescribeACLsRequest& request) const;


        /**
         * <p>Returns information about all provisioned clusters if no cluster identifier
         * is specified, or about a specific cluster if a cluster name is
         * supplied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest& request) const;


        /**
         * <p>Returns a list of the available Redis engine versions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineVersionsOutcome DescribeEngineVersions(const Model::DescribeEngineVersionsRequest& request) const;


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
         * <p>Returns a list of parameter group descriptions. If a parameter group name is
         * specified, the list contains only the descriptions for that group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeParameterGroupsOutcome DescribeParameterGroups(const Model::DescribeParameterGroupsRequest& request) const;


        /**
         * <p>Returns the detailed parameter list for a particular parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeParametersOutcome DescribeParameters(const Model::DescribeParametersRequest& request) const;


        /**
         * <p>Returns details of the service updates</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeServiceUpdates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceUpdatesOutcome DescribeServiceUpdates(const Model::DescribeServiceUpdatesRequest& request) const;


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
         * <p>Returns a list of subnet group descriptions. If a subnet group name is
         * specified, the list contains only the description of that group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeSubnetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubnetGroupsOutcome DescribeSubnetGroups(const Model::DescribeSubnetGroupsRequest& request) const;


        /**
         * <p>Returns a list of users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest& request) const;


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
         * <p>Lists all available node types that you can scale to from your cluster's
         * current node type. When you use the UpdateCluster operation to scale your
         * cluster, the value of the NodeType parameter must be one of the node types
         * returned by this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ListAllowedNodeTypeUpdates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAllowedNodeTypeUpdatesOutcome ListAllowedNodeTypeUpdates(const Model::ListAllowedNodeTypeUpdatesRequest& request) const;


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
         * <p>Modifies the parameters of a parameter group to the engine or system default
         * value. You can reset specific parameters by submitting a list of parameter
         * names. To reset the entire parameter group, specify the AllParameters and
         * ParameterGroupName parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ResetParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetParameterGroupOutcome ResetParameterGroup(const Model::ResetParameterGroupRequest& request) const;


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
         * <p>Use this operation to remove tags on a resource</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Changes the list of users that belong to the Access Control
         * List.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateACL">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateACLOutcome UpdateACL(const Model::UpdateACLRequest& request) const;


        /**
         * <p>Modifies the settings for a cluster. You can use this operation to change one
         * or more cluster configuration settings by specifying the settings and the new
         * values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterOutcome UpdateCluster(const Model::UpdateClusterRequest& request) const;


        /**
         * <p>Updates the parameters of a parameter group. You can modify up to 20
         * parameters in a single request by submitting a list parameter name and value
         * pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateParameterGroupOutcome UpdateParameterGroup(const Model::UpdateParameterGroupRequest& request) const;


        /**
         * <p>Updates a subnet group. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/ubnetGroups.Modifying.html">Updating
         * a subnet group</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubnetGroupOutcome UpdateSubnetGroup(const Model::UpdateSubnetGroupRequest& request) const;


        /**
         * <p>Changes user password(s) and/or access string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MemoryDBEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MemoryDBClientConfiguration& clientConfiguration);

      MemoryDBClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MemoryDBEndpointProviderBase> m_endpointProvider;
  };

} // namespace MemoryDB
} // namespace Aws
