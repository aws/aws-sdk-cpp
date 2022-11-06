/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/elasticache/ElastiCacheErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/elasticache/ElastiCacheEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ElastiCacheClient header */
#include <aws/elasticache/model/AddTagsToResourceResult.h>
#include <aws/elasticache/model/AuthorizeCacheSecurityGroupIngressResult.h>
#include <aws/elasticache/model/BatchApplyUpdateActionResult.h>
#include <aws/elasticache/model/BatchStopUpdateActionResult.h>
#include <aws/elasticache/model/CompleteMigrationResult.h>
#include <aws/elasticache/model/CopySnapshotResult.h>
#include <aws/elasticache/model/CreateCacheClusterResult.h>
#include <aws/elasticache/model/CreateCacheParameterGroupResult.h>
#include <aws/elasticache/model/CreateCacheSecurityGroupResult.h>
#include <aws/elasticache/model/CreateCacheSubnetGroupResult.h>
#include <aws/elasticache/model/CreateGlobalReplicationGroupResult.h>
#include <aws/elasticache/model/CreateReplicationGroupResult.h>
#include <aws/elasticache/model/CreateSnapshotResult.h>
#include <aws/elasticache/model/CreateUserResult.h>
#include <aws/elasticache/model/CreateUserGroupResult.h>
#include <aws/elasticache/model/DecreaseNodeGroupsInGlobalReplicationGroupResult.h>
#include <aws/elasticache/model/DecreaseReplicaCountResult.h>
#include <aws/elasticache/model/DeleteCacheClusterResult.h>
#include <aws/elasticache/model/DeleteGlobalReplicationGroupResult.h>
#include <aws/elasticache/model/DeleteReplicationGroupResult.h>
#include <aws/elasticache/model/DeleteSnapshotResult.h>
#include <aws/elasticache/model/DeleteUserResult.h>
#include <aws/elasticache/model/DeleteUserGroupResult.h>
#include <aws/elasticache/model/DescribeCacheClustersResult.h>
#include <aws/elasticache/model/DescribeCacheEngineVersionsResult.h>
#include <aws/elasticache/model/DescribeCacheParameterGroupsResult.h>
#include <aws/elasticache/model/DescribeCacheParametersResult.h>
#include <aws/elasticache/model/DescribeCacheSecurityGroupsResult.h>
#include <aws/elasticache/model/DescribeCacheSubnetGroupsResult.h>
#include <aws/elasticache/model/DescribeEngineDefaultParametersResult.h>
#include <aws/elasticache/model/DescribeEventsResult.h>
#include <aws/elasticache/model/DescribeGlobalReplicationGroupsResult.h>
#include <aws/elasticache/model/DescribeReplicationGroupsResult.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesResult.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesOfferingsResult.h>
#include <aws/elasticache/model/DescribeServiceUpdatesResult.h>
#include <aws/elasticache/model/DescribeSnapshotsResult.h>
#include <aws/elasticache/model/DescribeUpdateActionsResult.h>
#include <aws/elasticache/model/DescribeUserGroupsResult.h>
#include <aws/elasticache/model/DescribeUsersResult.h>
#include <aws/elasticache/model/DisassociateGlobalReplicationGroupResult.h>
#include <aws/elasticache/model/FailoverGlobalReplicationGroupResult.h>
#include <aws/elasticache/model/IncreaseNodeGroupsInGlobalReplicationGroupResult.h>
#include <aws/elasticache/model/IncreaseReplicaCountResult.h>
#include <aws/elasticache/model/ListAllowedNodeTypeModificationsResult.h>
#include <aws/elasticache/model/ListTagsForResourceResult.h>
#include <aws/elasticache/model/ModifyCacheClusterResult.h>
#include <aws/elasticache/model/ModifyCacheParameterGroupResult.h>
#include <aws/elasticache/model/ModifyCacheSubnetGroupResult.h>
#include <aws/elasticache/model/ModifyGlobalReplicationGroupResult.h>
#include <aws/elasticache/model/ModifyReplicationGroupResult.h>
#include <aws/elasticache/model/ModifyReplicationGroupShardConfigurationResult.h>
#include <aws/elasticache/model/ModifyUserResult.h>
#include <aws/elasticache/model/ModifyUserGroupResult.h>
#include <aws/elasticache/model/PurchaseReservedCacheNodesOfferingResult.h>
#include <aws/elasticache/model/RebalanceSlotsInGlobalReplicationGroupResult.h>
#include <aws/elasticache/model/RebootCacheClusterResult.h>
#include <aws/elasticache/model/RemoveTagsFromResourceResult.h>
#include <aws/elasticache/model/ResetCacheParameterGroupResult.h>
#include <aws/elasticache/model/RevokeCacheSecurityGroupIngressResult.h>
#include <aws/elasticache/model/StartMigrationResult.h>
#include <aws/elasticache/model/TestFailoverResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ElastiCacheClient header */

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

  namespace ElastiCache
  {
    using ElastiCacheClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ElastiCacheEndpointProviderBase = Aws::ElastiCache::Endpoint::ElastiCacheEndpointProviderBase;
    using ElastiCacheEndpointProvider = Aws::ElastiCache::Endpoint::ElastiCacheEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ElastiCacheClient header */
      class AddTagsToResourceRequest;
      class AuthorizeCacheSecurityGroupIngressRequest;
      class BatchApplyUpdateActionRequest;
      class BatchStopUpdateActionRequest;
      class CompleteMigrationRequest;
      class CopySnapshotRequest;
      class CreateCacheClusterRequest;
      class CreateCacheParameterGroupRequest;
      class CreateCacheSecurityGroupRequest;
      class CreateCacheSubnetGroupRequest;
      class CreateGlobalReplicationGroupRequest;
      class CreateReplicationGroupRequest;
      class CreateSnapshotRequest;
      class CreateUserRequest;
      class CreateUserGroupRequest;
      class DecreaseNodeGroupsInGlobalReplicationGroupRequest;
      class DecreaseReplicaCountRequest;
      class DeleteCacheClusterRequest;
      class DeleteCacheParameterGroupRequest;
      class DeleteCacheSecurityGroupRequest;
      class DeleteCacheSubnetGroupRequest;
      class DeleteGlobalReplicationGroupRequest;
      class DeleteReplicationGroupRequest;
      class DeleteSnapshotRequest;
      class DeleteUserRequest;
      class DeleteUserGroupRequest;
      class DescribeCacheClustersRequest;
      class DescribeCacheEngineVersionsRequest;
      class DescribeCacheParameterGroupsRequest;
      class DescribeCacheParametersRequest;
      class DescribeCacheSecurityGroupsRequest;
      class DescribeCacheSubnetGroupsRequest;
      class DescribeEngineDefaultParametersRequest;
      class DescribeEventsRequest;
      class DescribeGlobalReplicationGroupsRequest;
      class DescribeReplicationGroupsRequest;
      class DescribeReservedCacheNodesRequest;
      class DescribeReservedCacheNodesOfferingsRequest;
      class DescribeServiceUpdatesRequest;
      class DescribeSnapshotsRequest;
      class DescribeUpdateActionsRequest;
      class DescribeUserGroupsRequest;
      class DescribeUsersRequest;
      class DisassociateGlobalReplicationGroupRequest;
      class FailoverGlobalReplicationGroupRequest;
      class IncreaseNodeGroupsInGlobalReplicationGroupRequest;
      class IncreaseReplicaCountRequest;
      class ListAllowedNodeTypeModificationsRequest;
      class ListTagsForResourceRequest;
      class ModifyCacheClusterRequest;
      class ModifyCacheParameterGroupRequest;
      class ModifyCacheSubnetGroupRequest;
      class ModifyGlobalReplicationGroupRequest;
      class ModifyReplicationGroupRequest;
      class ModifyReplicationGroupShardConfigurationRequest;
      class ModifyUserRequest;
      class ModifyUserGroupRequest;
      class PurchaseReservedCacheNodesOfferingRequest;
      class RebalanceSlotsInGlobalReplicationGroupRequest;
      class RebootCacheClusterRequest;
      class RemoveTagsFromResourceRequest;
      class ResetCacheParameterGroupRequest;
      class RevokeCacheSecurityGroupIngressRequest;
      class StartMigrationRequest;
      class TestFailoverRequest;
      /* End of service model forward declarations required in ElastiCacheClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddTagsToResourceResult, ElastiCacheError> AddTagsToResourceOutcome;
      typedef Aws::Utils::Outcome<AuthorizeCacheSecurityGroupIngressResult, ElastiCacheError> AuthorizeCacheSecurityGroupIngressOutcome;
      typedef Aws::Utils::Outcome<BatchApplyUpdateActionResult, ElastiCacheError> BatchApplyUpdateActionOutcome;
      typedef Aws::Utils::Outcome<BatchStopUpdateActionResult, ElastiCacheError> BatchStopUpdateActionOutcome;
      typedef Aws::Utils::Outcome<CompleteMigrationResult, ElastiCacheError> CompleteMigrationOutcome;
      typedef Aws::Utils::Outcome<CopySnapshotResult, ElastiCacheError> CopySnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateCacheClusterResult, ElastiCacheError> CreateCacheClusterOutcome;
      typedef Aws::Utils::Outcome<CreateCacheParameterGroupResult, ElastiCacheError> CreateCacheParameterGroupOutcome;
      typedef Aws::Utils::Outcome<CreateCacheSecurityGroupResult, ElastiCacheError> CreateCacheSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<CreateCacheSubnetGroupResult, ElastiCacheError> CreateCacheSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<CreateGlobalReplicationGroupResult, ElastiCacheError> CreateGlobalReplicationGroupOutcome;
      typedef Aws::Utils::Outcome<CreateReplicationGroupResult, ElastiCacheError> CreateReplicationGroupOutcome;
      typedef Aws::Utils::Outcome<CreateSnapshotResult, ElastiCacheError> CreateSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateUserResult, ElastiCacheError> CreateUserOutcome;
      typedef Aws::Utils::Outcome<CreateUserGroupResult, ElastiCacheError> CreateUserGroupOutcome;
      typedef Aws::Utils::Outcome<DecreaseNodeGroupsInGlobalReplicationGroupResult, ElastiCacheError> DecreaseNodeGroupsInGlobalReplicationGroupOutcome;
      typedef Aws::Utils::Outcome<DecreaseReplicaCountResult, ElastiCacheError> DecreaseReplicaCountOutcome;
      typedef Aws::Utils::Outcome<DeleteCacheClusterResult, ElastiCacheError> DeleteCacheClusterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElastiCacheError> DeleteCacheParameterGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElastiCacheError> DeleteCacheSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElastiCacheError> DeleteCacheSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteGlobalReplicationGroupResult, ElastiCacheError> DeleteGlobalReplicationGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteReplicationGroupResult, ElastiCacheError> DeleteReplicationGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteSnapshotResult, ElastiCacheError> DeleteSnapshotOutcome;
      typedef Aws::Utils::Outcome<DeleteUserResult, ElastiCacheError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<DeleteUserGroupResult, ElastiCacheError> DeleteUserGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeCacheClustersResult, ElastiCacheError> DescribeCacheClustersOutcome;
      typedef Aws::Utils::Outcome<DescribeCacheEngineVersionsResult, ElastiCacheError> DescribeCacheEngineVersionsOutcome;
      typedef Aws::Utils::Outcome<DescribeCacheParameterGroupsResult, ElastiCacheError> DescribeCacheParameterGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeCacheParametersResult, ElastiCacheError> DescribeCacheParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeCacheSecurityGroupsResult, ElastiCacheError> DescribeCacheSecurityGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeCacheSubnetGroupsResult, ElastiCacheError> DescribeCacheSubnetGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeEngineDefaultParametersResult, ElastiCacheError> DescribeEngineDefaultParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeEventsResult, ElastiCacheError> DescribeEventsOutcome;
      typedef Aws::Utils::Outcome<DescribeGlobalReplicationGroupsResult, ElastiCacheError> DescribeGlobalReplicationGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationGroupsResult, ElastiCacheError> DescribeReplicationGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedCacheNodesResult, ElastiCacheError> DescribeReservedCacheNodesOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedCacheNodesOfferingsResult, ElastiCacheError> DescribeReservedCacheNodesOfferingsOutcome;
      typedef Aws::Utils::Outcome<DescribeServiceUpdatesResult, ElastiCacheError> DescribeServiceUpdatesOutcome;
      typedef Aws::Utils::Outcome<DescribeSnapshotsResult, ElastiCacheError> DescribeSnapshotsOutcome;
      typedef Aws::Utils::Outcome<DescribeUpdateActionsResult, ElastiCacheError> DescribeUpdateActionsOutcome;
      typedef Aws::Utils::Outcome<DescribeUserGroupsResult, ElastiCacheError> DescribeUserGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeUsersResult, ElastiCacheError> DescribeUsersOutcome;
      typedef Aws::Utils::Outcome<DisassociateGlobalReplicationGroupResult, ElastiCacheError> DisassociateGlobalReplicationGroupOutcome;
      typedef Aws::Utils::Outcome<FailoverGlobalReplicationGroupResult, ElastiCacheError> FailoverGlobalReplicationGroupOutcome;
      typedef Aws::Utils::Outcome<IncreaseNodeGroupsInGlobalReplicationGroupResult, ElastiCacheError> IncreaseNodeGroupsInGlobalReplicationGroupOutcome;
      typedef Aws::Utils::Outcome<IncreaseReplicaCountResult, ElastiCacheError> IncreaseReplicaCountOutcome;
      typedef Aws::Utils::Outcome<ListAllowedNodeTypeModificationsResult, ElastiCacheError> ListAllowedNodeTypeModificationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ElastiCacheError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ModifyCacheClusterResult, ElastiCacheError> ModifyCacheClusterOutcome;
      typedef Aws::Utils::Outcome<ModifyCacheParameterGroupResult, ElastiCacheError> ModifyCacheParameterGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyCacheSubnetGroupResult, ElastiCacheError> ModifyCacheSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyGlobalReplicationGroupResult, ElastiCacheError> ModifyGlobalReplicationGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyReplicationGroupResult, ElastiCacheError> ModifyReplicationGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyReplicationGroupShardConfigurationResult, ElastiCacheError> ModifyReplicationGroupShardConfigurationOutcome;
      typedef Aws::Utils::Outcome<ModifyUserResult, ElastiCacheError> ModifyUserOutcome;
      typedef Aws::Utils::Outcome<ModifyUserGroupResult, ElastiCacheError> ModifyUserGroupOutcome;
      typedef Aws::Utils::Outcome<PurchaseReservedCacheNodesOfferingResult, ElastiCacheError> PurchaseReservedCacheNodesOfferingOutcome;
      typedef Aws::Utils::Outcome<RebalanceSlotsInGlobalReplicationGroupResult, ElastiCacheError> RebalanceSlotsInGlobalReplicationGroupOutcome;
      typedef Aws::Utils::Outcome<RebootCacheClusterResult, ElastiCacheError> RebootCacheClusterOutcome;
      typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, ElastiCacheError> RemoveTagsFromResourceOutcome;
      typedef Aws::Utils::Outcome<ResetCacheParameterGroupResult, ElastiCacheError> ResetCacheParameterGroupOutcome;
      typedef Aws::Utils::Outcome<RevokeCacheSecurityGroupIngressResult, ElastiCacheError> RevokeCacheSecurityGroupIngressOutcome;
      typedef Aws::Utils::Outcome<StartMigrationResult, ElastiCacheError> StartMigrationOutcome;
      typedef Aws::Utils::Outcome<TestFailoverResult, ElastiCacheError> TestFailoverOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
      typedef std::future<AuthorizeCacheSecurityGroupIngressOutcome> AuthorizeCacheSecurityGroupIngressOutcomeCallable;
      typedef std::future<BatchApplyUpdateActionOutcome> BatchApplyUpdateActionOutcomeCallable;
      typedef std::future<BatchStopUpdateActionOutcome> BatchStopUpdateActionOutcomeCallable;
      typedef std::future<CompleteMigrationOutcome> CompleteMigrationOutcomeCallable;
      typedef std::future<CopySnapshotOutcome> CopySnapshotOutcomeCallable;
      typedef std::future<CreateCacheClusterOutcome> CreateCacheClusterOutcomeCallable;
      typedef std::future<CreateCacheParameterGroupOutcome> CreateCacheParameterGroupOutcomeCallable;
      typedef std::future<CreateCacheSecurityGroupOutcome> CreateCacheSecurityGroupOutcomeCallable;
      typedef std::future<CreateCacheSubnetGroupOutcome> CreateCacheSubnetGroupOutcomeCallable;
      typedef std::future<CreateGlobalReplicationGroupOutcome> CreateGlobalReplicationGroupOutcomeCallable;
      typedef std::future<CreateReplicationGroupOutcome> CreateReplicationGroupOutcomeCallable;
      typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
      typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
      typedef std::future<CreateUserGroupOutcome> CreateUserGroupOutcomeCallable;
      typedef std::future<DecreaseNodeGroupsInGlobalReplicationGroupOutcome> DecreaseNodeGroupsInGlobalReplicationGroupOutcomeCallable;
      typedef std::future<DecreaseReplicaCountOutcome> DecreaseReplicaCountOutcomeCallable;
      typedef std::future<DeleteCacheClusterOutcome> DeleteCacheClusterOutcomeCallable;
      typedef std::future<DeleteCacheParameterGroupOutcome> DeleteCacheParameterGroupOutcomeCallable;
      typedef std::future<DeleteCacheSecurityGroupOutcome> DeleteCacheSecurityGroupOutcomeCallable;
      typedef std::future<DeleteCacheSubnetGroupOutcome> DeleteCacheSubnetGroupOutcomeCallable;
      typedef std::future<DeleteGlobalReplicationGroupOutcome> DeleteGlobalReplicationGroupOutcomeCallable;
      typedef std::future<DeleteReplicationGroupOutcome> DeleteReplicationGroupOutcomeCallable;
      typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
      typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
      typedef std::future<DeleteUserGroupOutcome> DeleteUserGroupOutcomeCallable;
      typedef std::future<DescribeCacheClustersOutcome> DescribeCacheClustersOutcomeCallable;
      typedef std::future<DescribeCacheEngineVersionsOutcome> DescribeCacheEngineVersionsOutcomeCallable;
      typedef std::future<DescribeCacheParameterGroupsOutcome> DescribeCacheParameterGroupsOutcomeCallable;
      typedef std::future<DescribeCacheParametersOutcome> DescribeCacheParametersOutcomeCallable;
      typedef std::future<DescribeCacheSecurityGroupsOutcome> DescribeCacheSecurityGroupsOutcomeCallable;
      typedef std::future<DescribeCacheSubnetGroupsOutcome> DescribeCacheSubnetGroupsOutcomeCallable;
      typedef std::future<DescribeEngineDefaultParametersOutcome> DescribeEngineDefaultParametersOutcomeCallable;
      typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
      typedef std::future<DescribeGlobalReplicationGroupsOutcome> DescribeGlobalReplicationGroupsOutcomeCallable;
      typedef std::future<DescribeReplicationGroupsOutcome> DescribeReplicationGroupsOutcomeCallable;
      typedef std::future<DescribeReservedCacheNodesOutcome> DescribeReservedCacheNodesOutcomeCallable;
      typedef std::future<DescribeReservedCacheNodesOfferingsOutcome> DescribeReservedCacheNodesOfferingsOutcomeCallable;
      typedef std::future<DescribeServiceUpdatesOutcome> DescribeServiceUpdatesOutcomeCallable;
      typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
      typedef std::future<DescribeUpdateActionsOutcome> DescribeUpdateActionsOutcomeCallable;
      typedef std::future<DescribeUserGroupsOutcome> DescribeUserGroupsOutcomeCallable;
      typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
      typedef std::future<DisassociateGlobalReplicationGroupOutcome> DisassociateGlobalReplicationGroupOutcomeCallable;
      typedef std::future<FailoverGlobalReplicationGroupOutcome> FailoverGlobalReplicationGroupOutcomeCallable;
      typedef std::future<IncreaseNodeGroupsInGlobalReplicationGroupOutcome> IncreaseNodeGroupsInGlobalReplicationGroupOutcomeCallable;
      typedef std::future<IncreaseReplicaCountOutcome> IncreaseReplicaCountOutcomeCallable;
      typedef std::future<ListAllowedNodeTypeModificationsOutcome> ListAllowedNodeTypeModificationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ModifyCacheClusterOutcome> ModifyCacheClusterOutcomeCallable;
      typedef std::future<ModifyCacheParameterGroupOutcome> ModifyCacheParameterGroupOutcomeCallable;
      typedef std::future<ModifyCacheSubnetGroupOutcome> ModifyCacheSubnetGroupOutcomeCallable;
      typedef std::future<ModifyGlobalReplicationGroupOutcome> ModifyGlobalReplicationGroupOutcomeCallable;
      typedef std::future<ModifyReplicationGroupOutcome> ModifyReplicationGroupOutcomeCallable;
      typedef std::future<ModifyReplicationGroupShardConfigurationOutcome> ModifyReplicationGroupShardConfigurationOutcomeCallable;
      typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
      typedef std::future<ModifyUserGroupOutcome> ModifyUserGroupOutcomeCallable;
      typedef std::future<PurchaseReservedCacheNodesOfferingOutcome> PurchaseReservedCacheNodesOfferingOutcomeCallable;
      typedef std::future<RebalanceSlotsInGlobalReplicationGroupOutcome> RebalanceSlotsInGlobalReplicationGroupOutcomeCallable;
      typedef std::future<RebootCacheClusterOutcome> RebootCacheClusterOutcomeCallable;
      typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
      typedef std::future<ResetCacheParameterGroupOutcome> ResetCacheParameterGroupOutcomeCallable;
      typedef std::future<RevokeCacheSecurityGroupIngressOutcome> RevokeCacheSecurityGroupIngressOutcomeCallable;
      typedef std::future<StartMigrationOutcome> StartMigrationOutcomeCallable;
      typedef std::future<TestFailoverOutcome> TestFailoverOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ElastiCacheClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ElastiCacheClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::AuthorizeCacheSecurityGroupIngressRequest&, const Model::AuthorizeCacheSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeCacheSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::BatchApplyUpdateActionRequest&, const Model::BatchApplyUpdateActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchApplyUpdateActionResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::BatchStopUpdateActionRequest&, const Model::BatchStopUpdateActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchStopUpdateActionResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CompleteMigrationRequest&, const Model::CompleteMigrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompleteMigrationResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CopySnapshotRequest&, const Model::CopySnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopySnapshotResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateCacheClusterRequest&, const Model::CreateCacheClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCacheClusterResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateCacheParameterGroupRequest&, const Model::CreateCacheParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCacheParameterGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateCacheSecurityGroupRequest&, const Model::CreateCacheSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCacheSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateCacheSubnetGroupRequest&, const Model::CreateCacheSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCacheSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateGlobalReplicationGroupRequest&, const Model::CreateGlobalReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGlobalReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateReplicationGroupRequest&, const Model::CreateReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateUserGroupRequest&, const Model::CreateUserGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DecreaseNodeGroupsInGlobalReplicationGroupRequest&, const Model::DecreaseNodeGroupsInGlobalReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DecreaseNodeGroupsInGlobalReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DecreaseReplicaCountRequest&, const Model::DecreaseReplicaCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DecreaseReplicaCountResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteCacheClusterRequest&, const Model::DeleteCacheClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCacheClusterResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteCacheParameterGroupRequest&, const Model::DeleteCacheParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCacheParameterGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteCacheSecurityGroupRequest&, const Model::DeleteCacheSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCacheSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteCacheSubnetGroupRequest&, const Model::DeleteCacheSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCacheSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteGlobalReplicationGroupRequest&, const Model::DeleteGlobalReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGlobalReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteReplicationGroupRequest&, const Model::DeleteReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteSnapshotRequest&, const Model::DeleteSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteUserGroupRequest&, const Model::DeleteUserGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeCacheClustersRequest&, const Model::DescribeCacheClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCacheClustersResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeCacheEngineVersionsRequest&, const Model::DescribeCacheEngineVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCacheEngineVersionsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeCacheParameterGroupsRequest&, const Model::DescribeCacheParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCacheParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeCacheParametersRequest&, const Model::DescribeCacheParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCacheParametersResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeCacheSecurityGroupsRequest&, const Model::DescribeCacheSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCacheSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeCacheSubnetGroupsRequest&, const Model::DescribeCacheSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCacheSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeEngineDefaultParametersRequest&, const Model::DescribeEngineDefaultParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngineDefaultParametersResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeGlobalReplicationGroupsRequest&, const Model::DescribeGlobalReplicationGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGlobalReplicationGroupsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeReplicationGroupsRequest&, const Model::DescribeReplicationGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationGroupsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeReservedCacheNodesRequest&, const Model::DescribeReservedCacheNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedCacheNodesResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeReservedCacheNodesOfferingsRequest&, const Model::DescribeReservedCacheNodesOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedCacheNodesOfferingsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeServiceUpdatesRequest&, const Model::DescribeServiceUpdatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceUpdatesResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeSnapshotsRequest&, const Model::DescribeSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeUpdateActionsRequest&, const Model::DescribeUpdateActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUpdateActionsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeUserGroupsRequest&, const Model::DescribeUserGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserGroupsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeUsersRequest&, const Model::DescribeUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUsersResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DisassociateGlobalReplicationGroupRequest&, const Model::DisassociateGlobalReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateGlobalReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::FailoverGlobalReplicationGroupRequest&, const Model::FailoverGlobalReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FailoverGlobalReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::IncreaseNodeGroupsInGlobalReplicationGroupRequest&, const Model::IncreaseNodeGroupsInGlobalReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IncreaseNodeGroupsInGlobalReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::IncreaseReplicaCountRequest&, const Model::IncreaseReplicaCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IncreaseReplicaCountResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ListAllowedNodeTypeModificationsRequest&, const Model::ListAllowedNodeTypeModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAllowedNodeTypeModificationsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyCacheClusterRequest&, const Model::ModifyCacheClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCacheClusterResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyCacheParameterGroupRequest&, const Model::ModifyCacheParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCacheParameterGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyCacheSubnetGroupRequest&, const Model::ModifyCacheSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCacheSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyGlobalReplicationGroupRequest&, const Model::ModifyGlobalReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyGlobalReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyReplicationGroupRequest&, const Model::ModifyReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyReplicationGroupShardConfigurationRequest&, const Model::ModifyReplicationGroupShardConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReplicationGroupShardConfigurationResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyUserRequest&, const Model::ModifyUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyUserResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyUserGroupRequest&, const Model::ModifyUserGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyUserGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::PurchaseReservedCacheNodesOfferingRequest&, const Model::PurchaseReservedCacheNodesOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseReservedCacheNodesOfferingResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::RebalanceSlotsInGlobalReplicationGroupRequest&, const Model::RebalanceSlotsInGlobalReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebalanceSlotsInGlobalReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::RebootCacheClusterRequest&, const Model::RebootCacheClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootCacheClusterResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ResetCacheParameterGroupRequest&, const Model::ResetCacheParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetCacheParameterGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::RevokeCacheSecurityGroupIngressRequest&, const Model::RevokeCacheSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeCacheSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::StartMigrationRequest&, const Model::StartMigrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMigrationResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::TestFailoverRequest&, const Model::TestFailoverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestFailoverResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ElastiCache
} // namespace Aws
