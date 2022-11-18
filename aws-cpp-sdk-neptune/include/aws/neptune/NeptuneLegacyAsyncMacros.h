/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddRoleToDBClusterAsync(...)  SubmitAsync(&NeptuneClient::AddRoleToDBCluster, __VA_ARGS__)
#define AddRoleToDBClusterCallable(REQUEST)  SubmitCallable(&NeptuneClient::AddRoleToDBCluster, REQUEST)

#define AddSourceIdentifierToSubscriptionAsync(...)  SubmitAsync(&NeptuneClient::AddSourceIdentifierToSubscription, __VA_ARGS__)
#define AddSourceIdentifierToSubscriptionCallable(REQUEST)  SubmitCallable(&NeptuneClient::AddSourceIdentifierToSubscription, REQUEST)

#define AddTagsToResourceAsync(...)  SubmitAsync(&NeptuneClient::AddTagsToResource, __VA_ARGS__)
#define AddTagsToResourceCallable(REQUEST)  SubmitCallable(&NeptuneClient::AddTagsToResource, REQUEST)

#define ApplyPendingMaintenanceActionAsync(...)  SubmitAsync(&NeptuneClient::ApplyPendingMaintenanceAction, __VA_ARGS__)
#define ApplyPendingMaintenanceActionCallable(REQUEST)  SubmitCallable(&NeptuneClient::ApplyPendingMaintenanceAction, REQUEST)

#define CopyDBClusterParameterGroupAsync(...)  SubmitAsync(&NeptuneClient::CopyDBClusterParameterGroup, __VA_ARGS__)
#define CopyDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&NeptuneClient::CopyDBClusterParameterGroup, REQUEST)

#define CopyDBClusterSnapshotAsync(...)  SubmitAsync(&NeptuneClient::CopyDBClusterSnapshot, __VA_ARGS__)
#define CopyDBClusterSnapshotCallable(REQUEST)  SubmitCallable(&NeptuneClient::CopyDBClusterSnapshot, REQUEST)

#define CopyDBParameterGroupAsync(...)  SubmitAsync(&NeptuneClient::CopyDBParameterGroup, __VA_ARGS__)
#define CopyDBParameterGroupCallable(REQUEST)  SubmitCallable(&NeptuneClient::CopyDBParameterGroup, REQUEST)

#define CreateDBClusterAsync(...)  SubmitAsync(&NeptuneClient::CreateDBCluster, __VA_ARGS__)
#define CreateDBClusterCallable(REQUEST)  SubmitCallable(&NeptuneClient::CreateDBCluster, REQUEST)

#define CreateDBClusterEndpointAsync(...)  SubmitAsync(&NeptuneClient::CreateDBClusterEndpoint, __VA_ARGS__)
#define CreateDBClusterEndpointCallable(REQUEST)  SubmitCallable(&NeptuneClient::CreateDBClusterEndpoint, REQUEST)

#define CreateDBClusterParameterGroupAsync(...)  SubmitAsync(&NeptuneClient::CreateDBClusterParameterGroup, __VA_ARGS__)
#define CreateDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&NeptuneClient::CreateDBClusterParameterGroup, REQUEST)

#define CreateDBClusterSnapshotAsync(...)  SubmitAsync(&NeptuneClient::CreateDBClusterSnapshot, __VA_ARGS__)
#define CreateDBClusterSnapshotCallable(REQUEST)  SubmitCallable(&NeptuneClient::CreateDBClusterSnapshot, REQUEST)

#define CreateDBInstanceAsync(...)  SubmitAsync(&NeptuneClient::CreateDBInstance, __VA_ARGS__)
#define CreateDBInstanceCallable(REQUEST)  SubmitCallable(&NeptuneClient::CreateDBInstance, REQUEST)

#define CreateDBParameterGroupAsync(...)  SubmitAsync(&NeptuneClient::CreateDBParameterGroup, __VA_ARGS__)
#define CreateDBParameterGroupCallable(REQUEST)  SubmitCallable(&NeptuneClient::CreateDBParameterGroup, REQUEST)

#define CreateDBSubnetGroupAsync(...)  SubmitAsync(&NeptuneClient::CreateDBSubnetGroup, __VA_ARGS__)
#define CreateDBSubnetGroupCallable(REQUEST)  SubmitCallable(&NeptuneClient::CreateDBSubnetGroup, REQUEST)

#define CreateEventSubscriptionAsync(...)  SubmitAsync(&NeptuneClient::CreateEventSubscription, __VA_ARGS__)
#define CreateEventSubscriptionCallable(REQUEST)  SubmitCallable(&NeptuneClient::CreateEventSubscription, REQUEST)

#define CreateGlobalClusterAsync(...)  SubmitAsync(&NeptuneClient::CreateGlobalCluster, __VA_ARGS__)
#define CreateGlobalClusterCallable(REQUEST)  SubmitCallable(&NeptuneClient::CreateGlobalCluster, REQUEST)

#define DeleteDBClusterAsync(...)  SubmitAsync(&NeptuneClient::DeleteDBCluster, __VA_ARGS__)
#define DeleteDBClusterCallable(REQUEST)  SubmitCallable(&NeptuneClient::DeleteDBCluster, REQUEST)

#define DeleteDBClusterEndpointAsync(...)  SubmitAsync(&NeptuneClient::DeleteDBClusterEndpoint, __VA_ARGS__)
#define DeleteDBClusterEndpointCallable(REQUEST)  SubmitCallable(&NeptuneClient::DeleteDBClusterEndpoint, REQUEST)

#define DeleteDBClusterParameterGroupAsync(...)  SubmitAsync(&NeptuneClient::DeleteDBClusterParameterGroup, __VA_ARGS__)
#define DeleteDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&NeptuneClient::DeleteDBClusterParameterGroup, REQUEST)

#define DeleteDBClusterSnapshotAsync(...)  SubmitAsync(&NeptuneClient::DeleteDBClusterSnapshot, __VA_ARGS__)
#define DeleteDBClusterSnapshotCallable(REQUEST)  SubmitCallable(&NeptuneClient::DeleteDBClusterSnapshot, REQUEST)

#define DeleteDBInstanceAsync(...)  SubmitAsync(&NeptuneClient::DeleteDBInstance, __VA_ARGS__)
#define DeleteDBInstanceCallable(REQUEST)  SubmitCallable(&NeptuneClient::DeleteDBInstance, REQUEST)

#define DeleteDBParameterGroupAsync(...)  SubmitAsync(&NeptuneClient::DeleteDBParameterGroup, __VA_ARGS__)
#define DeleteDBParameterGroupCallable(REQUEST)  SubmitCallable(&NeptuneClient::DeleteDBParameterGroup, REQUEST)

#define DeleteDBSubnetGroupAsync(...)  SubmitAsync(&NeptuneClient::DeleteDBSubnetGroup, __VA_ARGS__)
#define DeleteDBSubnetGroupCallable(REQUEST)  SubmitCallable(&NeptuneClient::DeleteDBSubnetGroup, REQUEST)

#define DeleteEventSubscriptionAsync(...)  SubmitAsync(&NeptuneClient::DeleteEventSubscription, __VA_ARGS__)
#define DeleteEventSubscriptionCallable(REQUEST)  SubmitCallable(&NeptuneClient::DeleteEventSubscription, REQUEST)

#define DeleteGlobalClusterAsync(...)  SubmitAsync(&NeptuneClient::DeleteGlobalCluster, __VA_ARGS__)
#define DeleteGlobalClusterCallable(REQUEST)  SubmitCallable(&NeptuneClient::DeleteGlobalCluster, REQUEST)

#define DescribeDBClusterEndpointsAsync(...)  SubmitAsync(&NeptuneClient::DescribeDBClusterEndpoints, __VA_ARGS__)
#define DescribeDBClusterEndpointsCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeDBClusterEndpoints, REQUEST)

#define DescribeDBClusterParameterGroupsAsync(...)  SubmitAsync(&NeptuneClient::DescribeDBClusterParameterGroups, __VA_ARGS__)
#define DescribeDBClusterParameterGroupsCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeDBClusterParameterGroups, REQUEST)

#define DescribeDBClusterParametersAsync(...)  SubmitAsync(&NeptuneClient::DescribeDBClusterParameters, __VA_ARGS__)
#define DescribeDBClusterParametersCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeDBClusterParameters, REQUEST)

#define DescribeDBClusterSnapshotAttributesAsync(...)  SubmitAsync(&NeptuneClient::DescribeDBClusterSnapshotAttributes, __VA_ARGS__)
#define DescribeDBClusterSnapshotAttributesCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeDBClusterSnapshotAttributes, REQUEST)

#define DescribeDBClusterSnapshotsAsync(...)  SubmitAsync(&NeptuneClient::DescribeDBClusterSnapshots, __VA_ARGS__)
#define DescribeDBClusterSnapshotsCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeDBClusterSnapshots, REQUEST)

#define DescribeDBClustersAsync(...)  SubmitAsync(&NeptuneClient::DescribeDBClusters, __VA_ARGS__)
#define DescribeDBClustersCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeDBClusters, REQUEST)

#define DescribeDBEngineVersionsAsync(...)  SubmitAsync(&NeptuneClient::DescribeDBEngineVersions, __VA_ARGS__)
#define DescribeDBEngineVersionsCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeDBEngineVersions, REQUEST)

#define DescribeDBInstancesAsync(...)  SubmitAsync(&NeptuneClient::DescribeDBInstances, __VA_ARGS__)
#define DescribeDBInstancesCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeDBInstances, REQUEST)

#define DescribeDBParameterGroupsAsync(...)  SubmitAsync(&NeptuneClient::DescribeDBParameterGroups, __VA_ARGS__)
#define DescribeDBParameterGroupsCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeDBParameterGroups, REQUEST)

#define DescribeDBParametersAsync(...)  SubmitAsync(&NeptuneClient::DescribeDBParameters, __VA_ARGS__)
#define DescribeDBParametersCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeDBParameters, REQUEST)

#define DescribeDBSubnetGroupsAsync(...)  SubmitAsync(&NeptuneClient::DescribeDBSubnetGroups, __VA_ARGS__)
#define DescribeDBSubnetGroupsCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeDBSubnetGroups, REQUEST)

#define DescribeEngineDefaultClusterParametersAsync(...)  SubmitAsync(&NeptuneClient::DescribeEngineDefaultClusterParameters, __VA_ARGS__)
#define DescribeEngineDefaultClusterParametersCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeEngineDefaultClusterParameters, REQUEST)

#define DescribeEngineDefaultParametersAsync(...)  SubmitAsync(&NeptuneClient::DescribeEngineDefaultParameters, __VA_ARGS__)
#define DescribeEngineDefaultParametersCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeEngineDefaultParameters, REQUEST)

#define DescribeEventCategoriesAsync(...)  SubmitAsync(&NeptuneClient::DescribeEventCategories, __VA_ARGS__)
#define DescribeEventCategoriesCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeEventCategories, REQUEST)

#define DescribeEventSubscriptionsAsync(...)  SubmitAsync(&NeptuneClient::DescribeEventSubscriptions, __VA_ARGS__)
#define DescribeEventSubscriptionsCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeEventSubscriptions, REQUEST)

#define DescribeEventsAsync(...)  SubmitAsync(&NeptuneClient::DescribeEvents, __VA_ARGS__)
#define DescribeEventsCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeEvents, REQUEST)

#define DescribeGlobalClustersAsync(...)  SubmitAsync(&NeptuneClient::DescribeGlobalClusters, __VA_ARGS__)
#define DescribeGlobalClustersCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeGlobalClusters, REQUEST)

#define DescribeOrderableDBInstanceOptionsAsync(...)  SubmitAsync(&NeptuneClient::DescribeOrderableDBInstanceOptions, __VA_ARGS__)
#define DescribeOrderableDBInstanceOptionsCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeOrderableDBInstanceOptions, REQUEST)

#define DescribePendingMaintenanceActionsAsync(...)  SubmitAsync(&NeptuneClient::DescribePendingMaintenanceActions, __VA_ARGS__)
#define DescribePendingMaintenanceActionsCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribePendingMaintenanceActions, REQUEST)

#define DescribeValidDBInstanceModificationsAsync(...)  SubmitAsync(&NeptuneClient::DescribeValidDBInstanceModifications, __VA_ARGS__)
#define DescribeValidDBInstanceModificationsCallable(REQUEST)  SubmitCallable(&NeptuneClient::DescribeValidDBInstanceModifications, REQUEST)

#define FailoverDBClusterAsync(...)  SubmitAsync(&NeptuneClient::FailoverDBCluster, __VA_ARGS__)
#define FailoverDBClusterCallable(REQUEST)  SubmitCallable(&NeptuneClient::FailoverDBCluster, REQUEST)

#define FailoverGlobalClusterAsync(...)  SubmitAsync(&NeptuneClient::FailoverGlobalCluster, __VA_ARGS__)
#define FailoverGlobalClusterCallable(REQUEST)  SubmitCallable(&NeptuneClient::FailoverGlobalCluster, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&NeptuneClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&NeptuneClient::ListTagsForResource, REQUEST)

#define ModifyDBClusterAsync(...)  SubmitAsync(&NeptuneClient::ModifyDBCluster, __VA_ARGS__)
#define ModifyDBClusterCallable(REQUEST)  SubmitCallable(&NeptuneClient::ModifyDBCluster, REQUEST)

#define ModifyDBClusterEndpointAsync(...)  SubmitAsync(&NeptuneClient::ModifyDBClusterEndpoint, __VA_ARGS__)
#define ModifyDBClusterEndpointCallable(REQUEST)  SubmitCallable(&NeptuneClient::ModifyDBClusterEndpoint, REQUEST)

#define ModifyDBClusterParameterGroupAsync(...)  SubmitAsync(&NeptuneClient::ModifyDBClusterParameterGroup, __VA_ARGS__)
#define ModifyDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&NeptuneClient::ModifyDBClusterParameterGroup, REQUEST)

#define ModifyDBClusterSnapshotAttributeAsync(...)  SubmitAsync(&NeptuneClient::ModifyDBClusterSnapshotAttribute, __VA_ARGS__)
#define ModifyDBClusterSnapshotAttributeCallable(REQUEST)  SubmitCallable(&NeptuneClient::ModifyDBClusterSnapshotAttribute, REQUEST)

#define ModifyDBInstanceAsync(...)  SubmitAsync(&NeptuneClient::ModifyDBInstance, __VA_ARGS__)
#define ModifyDBInstanceCallable(REQUEST)  SubmitCallable(&NeptuneClient::ModifyDBInstance, REQUEST)

#define ModifyDBParameterGroupAsync(...)  SubmitAsync(&NeptuneClient::ModifyDBParameterGroup, __VA_ARGS__)
#define ModifyDBParameterGroupCallable(REQUEST)  SubmitCallable(&NeptuneClient::ModifyDBParameterGroup, REQUEST)

#define ModifyDBSubnetGroupAsync(...)  SubmitAsync(&NeptuneClient::ModifyDBSubnetGroup, __VA_ARGS__)
#define ModifyDBSubnetGroupCallable(REQUEST)  SubmitCallable(&NeptuneClient::ModifyDBSubnetGroup, REQUEST)

#define ModifyEventSubscriptionAsync(...)  SubmitAsync(&NeptuneClient::ModifyEventSubscription, __VA_ARGS__)
#define ModifyEventSubscriptionCallable(REQUEST)  SubmitCallable(&NeptuneClient::ModifyEventSubscription, REQUEST)

#define ModifyGlobalClusterAsync(...)  SubmitAsync(&NeptuneClient::ModifyGlobalCluster, __VA_ARGS__)
#define ModifyGlobalClusterCallable(REQUEST)  SubmitCallable(&NeptuneClient::ModifyGlobalCluster, REQUEST)

#define PromoteReadReplicaDBClusterAsync(...)  SubmitAsync(&NeptuneClient::PromoteReadReplicaDBCluster, __VA_ARGS__)
#define PromoteReadReplicaDBClusterCallable(REQUEST)  SubmitCallable(&NeptuneClient::PromoteReadReplicaDBCluster, REQUEST)

#define RebootDBInstanceAsync(...)  SubmitAsync(&NeptuneClient::RebootDBInstance, __VA_ARGS__)
#define RebootDBInstanceCallable(REQUEST)  SubmitCallable(&NeptuneClient::RebootDBInstance, REQUEST)

#define RemoveFromGlobalClusterAsync(...)  SubmitAsync(&NeptuneClient::RemoveFromGlobalCluster, __VA_ARGS__)
#define RemoveFromGlobalClusterCallable(REQUEST)  SubmitCallable(&NeptuneClient::RemoveFromGlobalCluster, REQUEST)

#define RemoveRoleFromDBClusterAsync(...)  SubmitAsync(&NeptuneClient::RemoveRoleFromDBCluster, __VA_ARGS__)
#define RemoveRoleFromDBClusterCallable(REQUEST)  SubmitCallable(&NeptuneClient::RemoveRoleFromDBCluster, REQUEST)

#define RemoveSourceIdentifierFromSubscriptionAsync(...)  SubmitAsync(&NeptuneClient::RemoveSourceIdentifierFromSubscription, __VA_ARGS__)
#define RemoveSourceIdentifierFromSubscriptionCallable(REQUEST)  SubmitCallable(&NeptuneClient::RemoveSourceIdentifierFromSubscription, REQUEST)

#define RemoveTagsFromResourceAsync(...)  SubmitAsync(&NeptuneClient::RemoveTagsFromResource, __VA_ARGS__)
#define RemoveTagsFromResourceCallable(REQUEST)  SubmitCallable(&NeptuneClient::RemoveTagsFromResource, REQUEST)

#define ResetDBClusterParameterGroupAsync(...)  SubmitAsync(&NeptuneClient::ResetDBClusterParameterGroup, __VA_ARGS__)
#define ResetDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&NeptuneClient::ResetDBClusterParameterGroup, REQUEST)

#define ResetDBParameterGroupAsync(...)  SubmitAsync(&NeptuneClient::ResetDBParameterGroup, __VA_ARGS__)
#define ResetDBParameterGroupCallable(REQUEST)  SubmitCallable(&NeptuneClient::ResetDBParameterGroup, REQUEST)

#define RestoreDBClusterFromSnapshotAsync(...)  SubmitAsync(&NeptuneClient::RestoreDBClusterFromSnapshot, __VA_ARGS__)
#define RestoreDBClusterFromSnapshotCallable(REQUEST)  SubmitCallable(&NeptuneClient::RestoreDBClusterFromSnapshot, REQUEST)

#define RestoreDBClusterToPointInTimeAsync(...)  SubmitAsync(&NeptuneClient::RestoreDBClusterToPointInTime, __VA_ARGS__)
#define RestoreDBClusterToPointInTimeCallable(REQUEST)  SubmitCallable(&NeptuneClient::RestoreDBClusterToPointInTime, REQUEST)

#define StartDBClusterAsync(...)  SubmitAsync(&NeptuneClient::StartDBCluster, __VA_ARGS__)
#define StartDBClusterCallable(REQUEST)  SubmitCallable(&NeptuneClient::StartDBCluster, REQUEST)

#define StopDBClusterAsync(...)  SubmitAsync(&NeptuneClient::StopDBCluster, __VA_ARGS__)
#define StopDBClusterCallable(REQUEST)  SubmitCallable(&NeptuneClient::StopDBCluster, REQUEST)

