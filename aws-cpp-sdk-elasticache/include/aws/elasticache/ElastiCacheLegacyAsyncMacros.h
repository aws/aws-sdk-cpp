/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddTagsToResourceAsync(...)  SubmitAsync(&ElastiCacheClient::AddTagsToResource, __VA_ARGS__)
#define AddTagsToResourceCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::AddTagsToResource, REQUEST)

#define AuthorizeCacheSecurityGroupIngressAsync(...)  SubmitAsync(&ElastiCacheClient::AuthorizeCacheSecurityGroupIngress, __VA_ARGS__)
#define AuthorizeCacheSecurityGroupIngressCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::AuthorizeCacheSecurityGroupIngress, REQUEST)

#define BatchApplyUpdateActionAsync(...)  SubmitAsync(&ElastiCacheClient::BatchApplyUpdateAction, __VA_ARGS__)
#define BatchApplyUpdateActionCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::BatchApplyUpdateAction, REQUEST)

#define BatchStopUpdateActionAsync(...)  SubmitAsync(&ElastiCacheClient::BatchStopUpdateAction, __VA_ARGS__)
#define BatchStopUpdateActionCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::BatchStopUpdateAction, REQUEST)

#define CompleteMigrationAsync(...)  SubmitAsync(&ElastiCacheClient::CompleteMigration, __VA_ARGS__)
#define CompleteMigrationCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::CompleteMigration, REQUEST)

#define CopySnapshotAsync(...)  SubmitAsync(&ElastiCacheClient::CopySnapshot, __VA_ARGS__)
#define CopySnapshotCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::CopySnapshot, REQUEST)

#define CreateCacheClusterAsync(...)  SubmitAsync(&ElastiCacheClient::CreateCacheCluster, __VA_ARGS__)
#define CreateCacheClusterCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::CreateCacheCluster, REQUEST)

#define CreateCacheParameterGroupAsync(...)  SubmitAsync(&ElastiCacheClient::CreateCacheParameterGroup, __VA_ARGS__)
#define CreateCacheParameterGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::CreateCacheParameterGroup, REQUEST)

#define CreateCacheSecurityGroupAsync(...)  SubmitAsync(&ElastiCacheClient::CreateCacheSecurityGroup, __VA_ARGS__)
#define CreateCacheSecurityGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::CreateCacheSecurityGroup, REQUEST)

#define CreateCacheSubnetGroupAsync(...)  SubmitAsync(&ElastiCacheClient::CreateCacheSubnetGroup, __VA_ARGS__)
#define CreateCacheSubnetGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::CreateCacheSubnetGroup, REQUEST)

#define CreateGlobalReplicationGroupAsync(...)  SubmitAsync(&ElastiCacheClient::CreateGlobalReplicationGroup, __VA_ARGS__)
#define CreateGlobalReplicationGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::CreateGlobalReplicationGroup, REQUEST)

#define CreateReplicationGroupAsync(...)  SubmitAsync(&ElastiCacheClient::CreateReplicationGroup, __VA_ARGS__)
#define CreateReplicationGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::CreateReplicationGroup, REQUEST)

#define CreateSnapshotAsync(...)  SubmitAsync(&ElastiCacheClient::CreateSnapshot, __VA_ARGS__)
#define CreateSnapshotCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::CreateSnapshot, REQUEST)

#define CreateUserAsync(...)  SubmitAsync(&ElastiCacheClient::CreateUser, __VA_ARGS__)
#define CreateUserCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::CreateUser, REQUEST)

#define CreateUserGroupAsync(...)  SubmitAsync(&ElastiCacheClient::CreateUserGroup, __VA_ARGS__)
#define CreateUserGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::CreateUserGroup, REQUEST)

#define DecreaseNodeGroupsInGlobalReplicationGroupAsync(...)  SubmitAsync(&ElastiCacheClient::DecreaseNodeGroupsInGlobalReplicationGroup, __VA_ARGS__)
#define DecreaseNodeGroupsInGlobalReplicationGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DecreaseNodeGroupsInGlobalReplicationGroup, REQUEST)

#define DecreaseReplicaCountAsync(...)  SubmitAsync(&ElastiCacheClient::DecreaseReplicaCount, __VA_ARGS__)
#define DecreaseReplicaCountCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DecreaseReplicaCount, REQUEST)

#define DeleteCacheClusterAsync(...)  SubmitAsync(&ElastiCacheClient::DeleteCacheCluster, __VA_ARGS__)
#define DeleteCacheClusterCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DeleteCacheCluster, REQUEST)

#define DeleteCacheParameterGroupAsync(...)  SubmitAsync(&ElastiCacheClient::DeleteCacheParameterGroup, __VA_ARGS__)
#define DeleteCacheParameterGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DeleteCacheParameterGroup, REQUEST)

#define DeleteCacheSecurityGroupAsync(...)  SubmitAsync(&ElastiCacheClient::DeleteCacheSecurityGroup, __VA_ARGS__)
#define DeleteCacheSecurityGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DeleteCacheSecurityGroup, REQUEST)

#define DeleteCacheSubnetGroupAsync(...)  SubmitAsync(&ElastiCacheClient::DeleteCacheSubnetGroup, __VA_ARGS__)
#define DeleteCacheSubnetGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DeleteCacheSubnetGroup, REQUEST)

#define DeleteGlobalReplicationGroupAsync(...)  SubmitAsync(&ElastiCacheClient::DeleteGlobalReplicationGroup, __VA_ARGS__)
#define DeleteGlobalReplicationGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DeleteGlobalReplicationGroup, REQUEST)

#define DeleteReplicationGroupAsync(...)  SubmitAsync(&ElastiCacheClient::DeleteReplicationGroup, __VA_ARGS__)
#define DeleteReplicationGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DeleteReplicationGroup, REQUEST)

#define DeleteSnapshotAsync(...)  SubmitAsync(&ElastiCacheClient::DeleteSnapshot, __VA_ARGS__)
#define DeleteSnapshotCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DeleteSnapshot, REQUEST)

#define DeleteUserAsync(...)  SubmitAsync(&ElastiCacheClient::DeleteUser, __VA_ARGS__)
#define DeleteUserCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DeleteUser, REQUEST)

#define DeleteUserGroupAsync(...)  SubmitAsync(&ElastiCacheClient::DeleteUserGroup, __VA_ARGS__)
#define DeleteUserGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DeleteUserGroup, REQUEST)

#define DescribeCacheClustersAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeCacheClusters, __VA_ARGS__)
#define DescribeCacheClustersCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeCacheClusters, REQUEST)

#define DescribeCacheEngineVersionsAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeCacheEngineVersions, __VA_ARGS__)
#define DescribeCacheEngineVersionsCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeCacheEngineVersions, REQUEST)

#define DescribeCacheParameterGroupsAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeCacheParameterGroups, __VA_ARGS__)
#define DescribeCacheParameterGroupsCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeCacheParameterGroups, REQUEST)

#define DescribeCacheParametersAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeCacheParameters, __VA_ARGS__)
#define DescribeCacheParametersCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeCacheParameters, REQUEST)

#define DescribeCacheSecurityGroupsAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeCacheSecurityGroups, __VA_ARGS__)
#define DescribeCacheSecurityGroupsCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeCacheSecurityGroups, REQUEST)

#define DescribeCacheSubnetGroupsAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeCacheSubnetGroups, __VA_ARGS__)
#define DescribeCacheSubnetGroupsCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeCacheSubnetGroups, REQUEST)

#define DescribeEngineDefaultParametersAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeEngineDefaultParameters, __VA_ARGS__)
#define DescribeEngineDefaultParametersCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeEngineDefaultParameters, REQUEST)

#define DescribeEventsAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeEvents, __VA_ARGS__)
#define DescribeEventsCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeEvents, REQUEST)

#define DescribeGlobalReplicationGroupsAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeGlobalReplicationGroups, __VA_ARGS__)
#define DescribeGlobalReplicationGroupsCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeGlobalReplicationGroups, REQUEST)

#define DescribeReplicationGroupsAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeReplicationGroups, __VA_ARGS__)
#define DescribeReplicationGroupsCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeReplicationGroups, REQUEST)

#define DescribeReservedCacheNodesAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeReservedCacheNodes, __VA_ARGS__)
#define DescribeReservedCacheNodesCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeReservedCacheNodes, REQUEST)

#define DescribeReservedCacheNodesOfferingsAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeReservedCacheNodesOfferings, __VA_ARGS__)
#define DescribeReservedCacheNodesOfferingsCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeReservedCacheNodesOfferings, REQUEST)

#define DescribeServiceUpdatesAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeServiceUpdates, __VA_ARGS__)
#define DescribeServiceUpdatesCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeServiceUpdates, REQUEST)

#define DescribeSnapshotsAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeSnapshots, __VA_ARGS__)
#define DescribeSnapshotsCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeSnapshots, REQUEST)

#define DescribeUpdateActionsAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeUpdateActions, __VA_ARGS__)
#define DescribeUpdateActionsCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeUpdateActions, REQUEST)

#define DescribeUserGroupsAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeUserGroups, __VA_ARGS__)
#define DescribeUserGroupsCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeUserGroups, REQUEST)

#define DescribeUsersAsync(...)  SubmitAsync(&ElastiCacheClient::DescribeUsers, __VA_ARGS__)
#define DescribeUsersCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DescribeUsers, REQUEST)

#define DisassociateGlobalReplicationGroupAsync(...)  SubmitAsync(&ElastiCacheClient::DisassociateGlobalReplicationGroup, __VA_ARGS__)
#define DisassociateGlobalReplicationGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::DisassociateGlobalReplicationGroup, REQUEST)

#define FailoverGlobalReplicationGroupAsync(...)  SubmitAsync(&ElastiCacheClient::FailoverGlobalReplicationGroup, __VA_ARGS__)
#define FailoverGlobalReplicationGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::FailoverGlobalReplicationGroup, REQUEST)

#define IncreaseNodeGroupsInGlobalReplicationGroupAsync(...)  SubmitAsync(&ElastiCacheClient::IncreaseNodeGroupsInGlobalReplicationGroup, __VA_ARGS__)
#define IncreaseNodeGroupsInGlobalReplicationGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::IncreaseNodeGroupsInGlobalReplicationGroup, REQUEST)

#define IncreaseReplicaCountAsync(...)  SubmitAsync(&ElastiCacheClient::IncreaseReplicaCount, __VA_ARGS__)
#define IncreaseReplicaCountCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::IncreaseReplicaCount, REQUEST)

#define ListAllowedNodeTypeModificationsAsync(...)  SubmitAsync(&ElastiCacheClient::ListAllowedNodeTypeModifications, __VA_ARGS__)
#define ListAllowedNodeTypeModificationsCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::ListAllowedNodeTypeModifications, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ElastiCacheClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::ListTagsForResource, REQUEST)

#define ModifyCacheClusterAsync(...)  SubmitAsync(&ElastiCacheClient::ModifyCacheCluster, __VA_ARGS__)
#define ModifyCacheClusterCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::ModifyCacheCluster, REQUEST)

#define ModifyCacheParameterGroupAsync(...)  SubmitAsync(&ElastiCacheClient::ModifyCacheParameterGroup, __VA_ARGS__)
#define ModifyCacheParameterGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::ModifyCacheParameterGroup, REQUEST)

#define ModifyCacheSubnetGroupAsync(...)  SubmitAsync(&ElastiCacheClient::ModifyCacheSubnetGroup, __VA_ARGS__)
#define ModifyCacheSubnetGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::ModifyCacheSubnetGroup, REQUEST)

#define ModifyGlobalReplicationGroupAsync(...)  SubmitAsync(&ElastiCacheClient::ModifyGlobalReplicationGroup, __VA_ARGS__)
#define ModifyGlobalReplicationGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::ModifyGlobalReplicationGroup, REQUEST)

#define ModifyReplicationGroupAsync(...)  SubmitAsync(&ElastiCacheClient::ModifyReplicationGroup, __VA_ARGS__)
#define ModifyReplicationGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::ModifyReplicationGroup, REQUEST)

#define ModifyReplicationGroupShardConfigurationAsync(...)  SubmitAsync(&ElastiCacheClient::ModifyReplicationGroupShardConfiguration, __VA_ARGS__)
#define ModifyReplicationGroupShardConfigurationCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::ModifyReplicationGroupShardConfiguration, REQUEST)

#define ModifyUserAsync(...)  SubmitAsync(&ElastiCacheClient::ModifyUser, __VA_ARGS__)
#define ModifyUserCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::ModifyUser, REQUEST)

#define ModifyUserGroupAsync(...)  SubmitAsync(&ElastiCacheClient::ModifyUserGroup, __VA_ARGS__)
#define ModifyUserGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::ModifyUserGroup, REQUEST)

#define PurchaseReservedCacheNodesOfferingAsync(...)  SubmitAsync(&ElastiCacheClient::PurchaseReservedCacheNodesOffering, __VA_ARGS__)
#define PurchaseReservedCacheNodesOfferingCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::PurchaseReservedCacheNodesOffering, REQUEST)

#define RebalanceSlotsInGlobalReplicationGroupAsync(...)  SubmitAsync(&ElastiCacheClient::RebalanceSlotsInGlobalReplicationGroup, __VA_ARGS__)
#define RebalanceSlotsInGlobalReplicationGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::RebalanceSlotsInGlobalReplicationGroup, REQUEST)

#define RebootCacheClusterAsync(...)  SubmitAsync(&ElastiCacheClient::RebootCacheCluster, __VA_ARGS__)
#define RebootCacheClusterCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::RebootCacheCluster, REQUEST)

#define RemoveTagsFromResourceAsync(...)  SubmitAsync(&ElastiCacheClient::RemoveTagsFromResource, __VA_ARGS__)
#define RemoveTagsFromResourceCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::RemoveTagsFromResource, REQUEST)

#define ResetCacheParameterGroupAsync(...)  SubmitAsync(&ElastiCacheClient::ResetCacheParameterGroup, __VA_ARGS__)
#define ResetCacheParameterGroupCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::ResetCacheParameterGroup, REQUEST)

#define RevokeCacheSecurityGroupIngressAsync(...)  SubmitAsync(&ElastiCacheClient::RevokeCacheSecurityGroupIngress, __VA_ARGS__)
#define RevokeCacheSecurityGroupIngressCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::RevokeCacheSecurityGroupIngress, REQUEST)

#define StartMigrationAsync(...)  SubmitAsync(&ElastiCacheClient::StartMigration, __VA_ARGS__)
#define StartMigrationCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::StartMigration, REQUEST)

#define TestFailoverAsync(...)  SubmitAsync(&ElastiCacheClient::TestFailover, __VA_ARGS__)
#define TestFailoverCallable(REQUEST)  SubmitCallable(&ElastiCacheClient::TestFailover, REQUEST)

