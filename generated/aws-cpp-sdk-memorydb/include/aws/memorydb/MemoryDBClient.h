﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/memorydb/model/BatchUpdateClusterResult.h>
#include <aws/memorydb/model/CopySnapshotResult.h>
#include <aws/memorydb/model/CreateACLResult.h>
#include <aws/memorydb/model/CreateClusterResult.h>
#include <aws/memorydb/model/CreateParameterGroupResult.h>
#include <aws/memorydb/model/CreateSnapshotResult.h>
#include <aws/memorydb/model/CreateSubnetGroupResult.h>
#include <aws/memorydb/model/CreateUserResult.h>
#include <aws/memorydb/model/DeleteACLResult.h>
#include <aws/memorydb/model/DeleteClusterResult.h>
#include <aws/memorydb/model/DeleteParameterGroupResult.h>
#include <aws/memorydb/model/DeleteSnapshotResult.h>
#include <aws/memorydb/model/DeleteSubnetGroupResult.h>
#include <aws/memorydb/model/DeleteUserResult.h>
#include <aws/memorydb/model/DescribeACLsResult.h>
#include <aws/memorydb/model/DescribeClustersResult.h>
#include <aws/memorydb/model/DescribeEngineVersionsResult.h>
#include <aws/memorydb/model/DescribeEventsResult.h>
#include <aws/memorydb/model/DescribeParameterGroupsResult.h>
#include <aws/memorydb/model/DescribeParametersResult.h>
#include <aws/memorydb/model/DescribeServiceUpdatesResult.h>
#include <aws/memorydb/model/DescribeSnapshotsResult.h>
#include <aws/memorydb/model/DescribeSubnetGroupsResult.h>
#include <aws/memorydb/model/DescribeUsersResult.h>
#include <aws/memorydb/model/FailoverShardResult.h>
#include <aws/memorydb/model/ListAllowedNodeTypeUpdatesResult.h>
#include <aws/memorydb/model/ListTagsResult.h>
#include <aws/memorydb/model/ResetParameterGroupResult.h>
#include <aws/memorydb/model/TagResourceResult.h>
#include <aws/memorydb/model/UntagResourceResult.h>
#include <aws/memorydb/model/UpdateACLResult.h>
#include <aws/memorydb/model/UpdateClusterResult.h>
#include <aws/memorydb/model/UpdateParameterGroupResult.h>
#include <aws/memorydb/model/UpdateSubnetGroupResult.h>
#include <aws/memorydb/model/UpdateUserResult.h>
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

namespace MemoryDB
{

namespace Model
{
        class BatchUpdateClusterRequest;
        class CopySnapshotRequest;
        class CreateACLRequest;
        class CreateClusterRequest;
        class CreateParameterGroupRequest;
        class CreateSnapshotRequest;
        class CreateSubnetGroupRequest;
        class CreateUserRequest;
        class DeleteACLRequest;
        class DeleteClusterRequest;
        class DeleteParameterGroupRequest;
        class DeleteSnapshotRequest;
        class DeleteSubnetGroupRequest;
        class DeleteUserRequest;
        class DescribeACLsRequest;
        class DescribeClustersRequest;
        class DescribeEngineVersionsRequest;
        class DescribeEventsRequest;
        class DescribeParameterGroupsRequest;
        class DescribeParametersRequest;
        class DescribeServiceUpdatesRequest;
        class DescribeSnapshotsRequest;
        class DescribeSubnetGroupsRequest;
        class DescribeUsersRequest;
        class FailoverShardRequest;
        class ListAllowedNodeTypeUpdatesRequest;
        class ListTagsRequest;
        class ResetParameterGroupRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateACLRequest;
        class UpdateClusterRequest;
        class UpdateParameterGroupRequest;
        class UpdateSubnetGroupRequest;
        class UpdateUserRequest;

        typedef Aws::Utils::Outcome<BatchUpdateClusterResult, MemoryDBError> BatchUpdateClusterOutcome;
        typedef Aws::Utils::Outcome<CopySnapshotResult, MemoryDBError> CopySnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateACLResult, MemoryDBError> CreateACLOutcome;
        typedef Aws::Utils::Outcome<CreateClusterResult, MemoryDBError> CreateClusterOutcome;
        typedef Aws::Utils::Outcome<CreateParameterGroupResult, MemoryDBError> CreateParameterGroupOutcome;
        typedef Aws::Utils::Outcome<CreateSnapshotResult, MemoryDBError> CreateSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateSubnetGroupResult, MemoryDBError> CreateSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<CreateUserResult, MemoryDBError> CreateUserOutcome;
        typedef Aws::Utils::Outcome<DeleteACLResult, MemoryDBError> DeleteACLOutcome;
        typedef Aws::Utils::Outcome<DeleteClusterResult, MemoryDBError> DeleteClusterOutcome;
        typedef Aws::Utils::Outcome<DeleteParameterGroupResult, MemoryDBError> DeleteParameterGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteSnapshotResult, MemoryDBError> DeleteSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteSubnetGroupResult, MemoryDBError> DeleteSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteUserResult, MemoryDBError> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<DescribeACLsResult, MemoryDBError> DescribeACLsOutcome;
        typedef Aws::Utils::Outcome<DescribeClustersResult, MemoryDBError> DescribeClustersOutcome;
        typedef Aws::Utils::Outcome<DescribeEngineVersionsResult, MemoryDBError> DescribeEngineVersionsOutcome;
        typedef Aws::Utils::Outcome<DescribeEventsResult, MemoryDBError> DescribeEventsOutcome;
        typedef Aws::Utils::Outcome<DescribeParameterGroupsResult, MemoryDBError> DescribeParameterGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeParametersResult, MemoryDBError> DescribeParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeServiceUpdatesResult, MemoryDBError> DescribeServiceUpdatesOutcome;
        typedef Aws::Utils::Outcome<DescribeSnapshotsResult, MemoryDBError> DescribeSnapshotsOutcome;
        typedef Aws::Utils::Outcome<DescribeSubnetGroupsResult, MemoryDBError> DescribeSubnetGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeUsersResult, MemoryDBError> DescribeUsersOutcome;
        typedef Aws::Utils::Outcome<FailoverShardResult, MemoryDBError> FailoverShardOutcome;
        typedef Aws::Utils::Outcome<ListAllowedNodeTypeUpdatesResult, MemoryDBError> ListAllowedNodeTypeUpdatesOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, MemoryDBError> ListTagsOutcome;
        typedef Aws::Utils::Outcome<ResetParameterGroupResult, MemoryDBError> ResetParameterGroupOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, MemoryDBError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, MemoryDBError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateACLResult, MemoryDBError> UpdateACLOutcome;
        typedef Aws::Utils::Outcome<UpdateClusterResult, MemoryDBError> UpdateClusterOutcome;
        typedef Aws::Utils::Outcome<UpdateParameterGroupResult, MemoryDBError> UpdateParameterGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateSubnetGroupResult, MemoryDBError> UpdateSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateUserResult, MemoryDBError> UpdateUserOutcome;

        typedef std::future<BatchUpdateClusterOutcome> BatchUpdateClusterOutcomeCallable;
        typedef std::future<CopySnapshotOutcome> CopySnapshotOutcomeCallable;
        typedef std::future<CreateACLOutcome> CreateACLOutcomeCallable;
        typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
        typedef std::future<CreateParameterGroupOutcome> CreateParameterGroupOutcomeCallable;
        typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
        typedef std::future<CreateSubnetGroupOutcome> CreateSubnetGroupOutcomeCallable;
        typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
        typedef std::future<DeleteACLOutcome> DeleteACLOutcomeCallable;
        typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
        typedef std::future<DeleteParameterGroupOutcome> DeleteParameterGroupOutcomeCallable;
        typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
        typedef std::future<DeleteSubnetGroupOutcome> DeleteSubnetGroupOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DescribeACLsOutcome> DescribeACLsOutcomeCallable;
        typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
        typedef std::future<DescribeEngineVersionsOutcome> DescribeEngineVersionsOutcomeCallable;
        typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
        typedef std::future<DescribeParameterGroupsOutcome> DescribeParameterGroupsOutcomeCallable;
        typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
        typedef std::future<DescribeServiceUpdatesOutcome> DescribeServiceUpdatesOutcomeCallable;
        typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
        typedef std::future<DescribeSubnetGroupsOutcome> DescribeSubnetGroupsOutcomeCallable;
        typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
        typedef std::future<FailoverShardOutcome> FailoverShardOutcomeCallable;
        typedef std::future<ListAllowedNodeTypeUpdatesOutcome> ListAllowedNodeTypeUpdatesOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<ResetParameterGroupOutcome> ResetParameterGroupOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateACLOutcome> UpdateACLOutcomeCallable;
        typedef std::future<UpdateClusterOutcome> UpdateClusterOutcomeCallable;
        typedef std::future<UpdateParameterGroupOutcome> UpdateParameterGroupOutcomeCallable;
        typedef std::future<UpdateSubnetGroupOutcome> UpdateSubnetGroupOutcomeCallable;
        typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
} // namespace Model

  class MemoryDBClient;

    typedef std::function<void(const MemoryDBClient*, const Model::BatchUpdateClusterRequest&, const Model::BatchUpdateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateClusterResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CopySnapshotRequest&, const Model::CopySnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopySnapshotResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CreateACLRequest&, const Model::CreateACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateACLResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CreateParameterGroupRequest&, const Model::CreateParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateParameterGroupResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CreateSubnetGroupRequest&, const Model::CreateSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DeleteACLRequest&, const Model::DeleteACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteACLResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DeleteParameterGroupRequest&, const Model::DeleteParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteParameterGroupResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DeleteSnapshotRequest&, const Model::DeleteSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DeleteSubnetGroupRequest&, const Model::DeleteSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeACLsRequest&, const Model::DescribeACLsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeACLsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeClustersRequest&, const Model::DescribeClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClustersResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeEngineVersionsRequest&, const Model::DescribeEngineVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngineVersionsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeParameterGroupsRequest&, const Model::DescribeParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeParametersRequest&, const Model::DescribeParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeParametersResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeServiceUpdatesRequest&, const Model::DescribeServiceUpdatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceUpdatesResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeSnapshotsRequest&, const Model::DescribeSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeSubnetGroupsRequest&, const Model::DescribeSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeUsersRequest&, const Model::DescribeUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUsersResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::FailoverShardRequest&, const Model::FailoverShardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FailoverShardResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::ListAllowedNodeTypeUpdatesRequest&, const Model::ListAllowedNodeTypeUpdatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAllowedNodeTypeUpdatesResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::ResetParameterGroupRequest&, const Model::ResetParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetParameterGroupResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::UpdateACLRequest&, const Model::UpdateACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateACLResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::UpdateClusterRequest&, const Model::UpdateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::UpdateParameterGroupRequest&, const Model::UpdateParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateParameterGroupResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::UpdateSubnetGroupRequest&, const Model::UpdateSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MemoryDBClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MemoryDBClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MemoryDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * <p>Apply the service update to a list of clusters supplied. For more information
         * on service updates and applying them, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/managing-updates.html#applying-updates">Applying
         * the service updates</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/BatchUpdateCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdateClusterOutcomeCallable BatchUpdateClusterCallable(const Model::BatchUpdateClusterRequest& request) const;

        /**
         * <p>Apply the service update to a list of clusters supplied. For more information
         * on service updates and applying them, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/managing-updates.html#applying-updates">Applying
         * the service updates</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/BatchUpdateCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateClusterAsync(const Model::BatchUpdateClusterRequest& request, const BatchUpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Makes a copy of an existing snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CopySnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopySnapshotOutcome CopySnapshot(const Model::CopySnapshotRequest& request) const;

        /**
         * <p>Makes a copy of an existing snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CopySnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopySnapshotOutcomeCallable CopySnapshotCallable(const Model::CopySnapshotRequest& request) const;

        /**
         * <p>Makes a copy of an existing snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CopySnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates an Access Control List. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/clusters.acls.html">Authenticating
         * users with Access Contol Lists (ACLs)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateACLOutcomeCallable CreateACLCallable(const Model::CreateACLRequest& request) const;

        /**
         * <p>Creates an Access Control List. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/clusters.acls.html">Authenticating
         * users with Access Contol Lists (ACLs)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a cluster. All nodes in the cluster run the same protocol-compliant
         * engine software.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates a cluster. All nodes in the cluster run the same protocol-compliant
         * engine software.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a new MemoryDB parameter group. A parameter group is a collection of
         * parameters and their values that are applied to all of the nodes in any cluster.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/parametergroups.html">Configuring
         * engine parameters using parameter groups</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateParameterGroupOutcomeCallable CreateParameterGroupCallable(const Model::CreateParameterGroupRequest& request) const;

        /**
         * <p>Creates a new MemoryDB parameter group. A parameter group is a collection of
         * parameters and their values that are applied to all of the nodes in any cluster.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/parametergroups.html">Configuring
         * engine parameters using parameter groups</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a copy of an entire cluster at a specific moment in
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request) const;

        /**
         * <p>Creates a copy of an entire cluster at a specific moment in
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubnetGroupOutcomeCallable CreateSubnetGroupCallable(const Model::CreateSubnetGroupRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a MemoryDB user. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/clusters.acls.html">Authenticating
         * users with Access Contol Lists (ACLs)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a MemoryDB user. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/clusters.acls.html">Authenticating
         * users with Access Contol Lists (ACLs)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/CreateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes an Access Control List. The ACL must first be disassociated from the
         * cluster before it can be deleted. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/clusters.acls.html">Authenticating
         * users with Access Contol Lists (ACLs)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteACLOutcomeCallable DeleteACLCallable(const Model::DeleteACLRequest& request) const;

        /**
         * <p>Deletes an Access Control List. The ACL must first be disassociated from the
         * cluster before it can be deleted. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/clusters.acls.html">Authenticating
         * users with Access Contol Lists (ACLs)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a cluster. It also deletes all associated nodes and node
         * endpoints</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /**
         * <p>Deletes a cluster. It also deletes all associated nodes and node
         * endpoints</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes the specified parameter group. You cannot delete a parameter group if
         * it is associated with any clusters. You cannot delete the default parameter
         * groups in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteParameterGroupOutcomeCallable DeleteParameterGroupCallable(const Model::DeleteParameterGroupRequest& request) const;

        /**
         * <p>Deletes the specified parameter group. You cannot delete a parameter group if
         * it is associated with any clusters. You cannot delete the default parameter
         * groups in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes an existing snapshot. When you receive a successful response from
         * this operation, MemoryDB immediately begins deleting the snapshot; you cannot
         * cancel or revert this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;

        /**
         * <p>Deletes an existing snapshot. When you receive a successful response from
         * this operation, MemoryDB immediately begins deleting the snapshot; you cannot
         * cancel or revert this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a subnet group. You cannot delete a default subnet group or one that
         * is associated with any clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteSubnetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubnetGroupOutcomeCallable DeleteSubnetGroupCallable(const Model::DeleteSubnetGroupRequest& request) const;

        /**
         * <p>Deletes a subnet group. You cannot delete a default subnet group or one that
         * is associated with any clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteSubnetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a user. The user will be removed from all ACLs and in turn removed
         * from all clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes a user. The user will be removed from all ACLs and in turn removed
         * from all clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DeleteUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of ACLs</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeACLs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeACLsOutcome DescribeACLs(const Model::DescribeACLsRequest& request) const;

        /**
         * <p>Returns a list of ACLs</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeACLs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeACLsOutcomeCallable DescribeACLsCallable(const Model::DescribeACLsRequest& request) const;

        /**
         * <p>Returns a list of ACLs</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeACLs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about all provisioned clusters if no cluster identifier
         * is specified, or about a specific cluster if a cluster name is
         * supplied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeClusters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request) const;

        /**
         * <p>Returns information about all provisioned clusters if no cluster identifier
         * is specified, or about a specific cluster if a cluster name is
         * supplied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeClusters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of the available Redis engine versions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeEngineVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEngineVersionsOutcomeCallable DescribeEngineVersionsCallable(const Model::DescribeEngineVersionsRequest& request) const;

        /**
         * <p>Returns a list of the available Redis engine versions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeEngineVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns events related to clusters, security groups, and parameter groups.
         * You can obtain events specific to a particular cluster, security group, or
         * parameter group by providing the name as a parameter. By default, only the
         * events occurring within the last hour are returned; however, you can retrieve up
         * to 14 days' worth of events if necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns events related to clusters, security groups, and parameter groups.
         * You can obtain events specific to a particular cluster, security group, or
         * parameter group by providing the name as a parameter. By default, only the
         * events occurring within the last hour are returned; however, you can retrieve up
         * to 14 days' worth of events if necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of parameter group descriptions. If a parameter group name is
         * specified, the list contains only the descriptions for that group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeParameterGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeParameterGroupsOutcomeCallable DescribeParameterGroupsCallable(const Model::DescribeParameterGroupsRequest& request) const;

        /**
         * <p>Returns a list of parameter group descriptions. If a parameter group name is
         * specified, the list contains only the descriptions for that group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeParameterGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the detailed parameter list for a particular parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeParametersOutcomeCallable DescribeParametersCallable(const Model::DescribeParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details of the service updates</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeServiceUpdates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceUpdatesOutcome DescribeServiceUpdates(const Model::DescribeServiceUpdatesRequest& request) const;

        /**
         * <p>Returns details of the service updates</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeServiceUpdates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServiceUpdatesOutcomeCallable DescribeServiceUpdatesCallable(const Model::DescribeServiceUpdatesRequest& request) const;

        /**
         * <p>Returns details of the service updates</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeServiceUpdates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about cluster snapshots. By default, DescribeSnapshots
         * lists all of your snapshots; it can optionally describe a single snapshot, or
         * just the snapshots associated with a particular cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeSnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * <p>Returns information about cluster snapshots. By default, DescribeSnapshots
         * lists all of your snapshots; it can optionally describe a single snapshot, or
         * just the snapshots associated with a particular cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeSnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of subnet group descriptions. If a subnet group name is
         * specified, the list contains only the description of that group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeSubnetGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSubnetGroupsOutcomeCallable DescribeSubnetGroupsCallable(const Model::DescribeSubnetGroupsRequest& request) const;

        /**
         * <p>Returns a list of subnet group descriptions. If a subnet group name is
         * specified, the list contains only the description of that group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeSubnetGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSubnetGroupsAsync(const Model::DescribeSubnetGroupsRequest& request, const DescribeSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest& request) const;

        /**
         * <p>Returns a list of users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request) const;

        /**
         * <p>Returns a list of users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/DescribeUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to failover a shard</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/FailoverShard">AWS
         * API Reference</a></p>
         */
        virtual Model::FailoverShardOutcome FailoverShard(const Model::FailoverShardRequest& request) const;

        /**
         * <p>Used to failover a shard</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/FailoverShard">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FailoverShardOutcomeCallable FailoverShardCallable(const Model::FailoverShardRequest& request) const;

        /**
         * <p>Used to failover a shard</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/FailoverShard">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all available node types that you can scale to from your cluster's
         * current node type. When you use the UpdateCluster operation to scale your
         * cluster, the value of the NodeType parameter must be one of the node types
         * returned by this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ListAllowedNodeTypeUpdates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAllowedNodeTypeUpdatesOutcomeCallable ListAllowedNodeTypeUpdatesCallable(const Model::ListAllowedNodeTypeUpdatesRequest& request) const;

        /**
         * <p>Lists all available node types that you can scale to from your cluster's
         * current node type. When you use the UpdateCluster operation to scale your
         * cluster, the value of the NodeType parameter must be one of the node types
         * returned by this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ListAllowedNodeTypeUpdates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all tags currently on a named resource. A tag is a key-value pair where
         * the key and value are case-sensitive. You can use tags to categorize and track
         * your MemoryDB resources. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/Tagging-Resources.html">Tagging
         * your MemoryDB resources</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ListTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * <p>Lists all tags currently on a named resource. A tag is a key-value pair where
         * the key and value are case-sensitive. You can use tags to categorize and track
         * your MemoryDB resources. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/Tagging-Resources.html">Tagging
         * your MemoryDB resources</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ListTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Modifies the parameters of a parameter group to the engine or system default
         * value. You can reset specific parameters by submitting a list of parameter
         * names. To reset the entire parameter group, specify the AllParameters and
         * ParameterGroupName parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ResetParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetParameterGroupOutcomeCallable ResetParameterGroupCallable(const Model::ResetParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a parameter group to the engine or system default
         * value. You can reset specific parameters by submitting a list of parameter
         * names. To reset the entire parameter group, specify the AllParameters and
         * ParameterGroupName parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ResetParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to remove tags on a resource</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Use this operation to remove tags on a resource</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Use this operation to remove tags on a resource</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Changes the list of users that belong to the Access Control
         * List.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateACLOutcomeCallable UpdateACLCallable(const Model::UpdateACLRequest& request) const;

        /**
         * <p>Changes the list of users that belong to the Access Control
         * List.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Modifies the settings for a cluster. You can use this operation to change one
         * or more cluster configuration settings by specifying the settings and the new
         * values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClusterOutcomeCallable UpdateClusterCallable(const Model::UpdateClusterRequest& request) const;

        /**
         * <p>Modifies the settings for a cluster. You can use this operation to change one
         * or more cluster configuration settings by specifying the settings and the new
         * values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the parameters of a parameter group. You can modify up to 20
         * parameters in a single request by submitting a list parameter name and value
         * pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateParameterGroupOutcomeCallable UpdateParameterGroupCallable(const Model::UpdateParameterGroupRequest& request) const;

        /**
         * <p>Updates the parameters of a parameter group. You can modify up to 20
         * parameters in a single request by submitting a list parameter name and value
         * pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates a subnet group. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/ubnetGroups.Modifying.html">Updating
         * a subnet group</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateSubnetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubnetGroupOutcomeCallable UpdateSubnetGroupCallable(const Model::UpdateSubnetGroupRequest& request) const;

        /**
         * <p>Updates a subnet group. For more information, see <a
         * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/ubnetGroups.Modifying.html">Updating
         * a subnet group</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateSubnetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubnetGroupAsync(const Model::UpdateSubnetGroupRequest& request, const UpdateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes user password(s) and/or access string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Changes user password(s) and/or access string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Changes user password(s) and/or access string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/UpdateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchUpdateClusterAsyncHelper(const Model::BatchUpdateClusterRequest& request, const BatchUpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopySnapshotAsyncHelper(const Model::CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateACLAsyncHelper(const Model::CreateACLRequest& request, const CreateACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateParameterGroupAsyncHelper(const Model::CreateParameterGroupRequest& request, const CreateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSnapshotAsyncHelper(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSubnetGroupAsyncHelper(const Model::CreateSubnetGroupRequest& request, const CreateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteACLAsyncHelper(const Model::DeleteACLRequest& request, const DeleteACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterAsyncHelper(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteParameterGroupAsyncHelper(const Model::DeleteParameterGroupRequest& request, const DeleteParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSnapshotAsyncHelper(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSubnetGroupAsyncHelper(const Model::DeleteSubnetGroupRequest& request, const DeleteSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeACLsAsyncHelper(const Model::DescribeACLsRequest& request, const DescribeACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClustersAsyncHelper(const Model::DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEngineVersionsAsyncHelper(const Model::DescribeEngineVersionsRequest& request, const DescribeEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventsAsyncHelper(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeParameterGroupsAsyncHelper(const Model::DescribeParameterGroupsRequest& request, const DescribeParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeParametersAsyncHelper(const Model::DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeServiceUpdatesAsyncHelper(const Model::DescribeServiceUpdatesRequest& request, const DescribeServiceUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSnapshotsAsyncHelper(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSubnetGroupsAsyncHelper(const Model::DescribeSubnetGroupsRequest& request, const DescribeSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUsersAsyncHelper(const Model::DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void FailoverShardAsyncHelper(const Model::FailoverShardRequest& request, const FailoverShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAllowedNodeTypeUpdatesAsyncHelper(const Model::ListAllowedNodeTypeUpdatesRequest& request, const ListAllowedNodeTypeUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetParameterGroupAsyncHelper(const Model::ResetParameterGroupRequest& request, const ResetParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateACLAsyncHelper(const Model::UpdateACLRequest& request, const UpdateACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateClusterAsyncHelper(const Model::UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateParameterGroupAsyncHelper(const Model::UpdateParameterGroupRequest& request, const UpdateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSubnetGroupAsyncHelper(const Model::UpdateSubnetGroupRequest& request, const UpdateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAsyncHelper(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MemoryDB
} // namespace Aws
