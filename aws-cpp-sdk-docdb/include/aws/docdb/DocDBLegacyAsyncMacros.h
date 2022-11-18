/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddSourceIdentifierToSubscriptionAsync(...)  SubmitAsync(&DocDBClient::AddSourceIdentifierToSubscription, __VA_ARGS__)
#define AddSourceIdentifierToSubscriptionCallable(REQUEST)  SubmitCallable(&DocDBClient::AddSourceIdentifierToSubscription, REQUEST)

#define AddTagsToResourceAsync(...)  SubmitAsync(&DocDBClient::AddTagsToResource, __VA_ARGS__)
#define AddTagsToResourceCallable(REQUEST)  SubmitCallable(&DocDBClient::AddTagsToResource, REQUEST)

#define ApplyPendingMaintenanceActionAsync(...)  SubmitAsync(&DocDBClient::ApplyPendingMaintenanceAction, __VA_ARGS__)
#define ApplyPendingMaintenanceActionCallable(REQUEST)  SubmitCallable(&DocDBClient::ApplyPendingMaintenanceAction, REQUEST)

#define CopyDBClusterParameterGroupAsync(...)  SubmitAsync(&DocDBClient::CopyDBClusterParameterGroup, __VA_ARGS__)
#define CopyDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&DocDBClient::CopyDBClusterParameterGroup, REQUEST)

#define CopyDBClusterSnapshotAsync(...)  SubmitAsync(&DocDBClient::CopyDBClusterSnapshot, __VA_ARGS__)
#define CopyDBClusterSnapshotCallable(REQUEST)  SubmitCallable(&DocDBClient::CopyDBClusterSnapshot, REQUEST)

#define CreateDBClusterAsync(...)  SubmitAsync(&DocDBClient::CreateDBCluster, __VA_ARGS__)
#define CreateDBClusterCallable(REQUEST)  SubmitCallable(&DocDBClient::CreateDBCluster, REQUEST)

#define CreateDBClusterParameterGroupAsync(...)  SubmitAsync(&DocDBClient::CreateDBClusterParameterGroup, __VA_ARGS__)
#define CreateDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&DocDBClient::CreateDBClusterParameterGroup, REQUEST)

#define CreateDBClusterSnapshotAsync(...)  SubmitAsync(&DocDBClient::CreateDBClusterSnapshot, __VA_ARGS__)
#define CreateDBClusterSnapshotCallable(REQUEST)  SubmitCallable(&DocDBClient::CreateDBClusterSnapshot, REQUEST)

#define CreateDBInstanceAsync(...)  SubmitAsync(&DocDBClient::CreateDBInstance, __VA_ARGS__)
#define CreateDBInstanceCallable(REQUEST)  SubmitCallable(&DocDBClient::CreateDBInstance, REQUEST)

#define CreateDBSubnetGroupAsync(...)  SubmitAsync(&DocDBClient::CreateDBSubnetGroup, __VA_ARGS__)
#define CreateDBSubnetGroupCallable(REQUEST)  SubmitCallable(&DocDBClient::CreateDBSubnetGroup, REQUEST)

#define CreateEventSubscriptionAsync(...)  SubmitAsync(&DocDBClient::CreateEventSubscription, __VA_ARGS__)
#define CreateEventSubscriptionCallable(REQUEST)  SubmitCallable(&DocDBClient::CreateEventSubscription, REQUEST)

#define CreateGlobalClusterAsync(...)  SubmitAsync(&DocDBClient::CreateGlobalCluster, __VA_ARGS__)
#define CreateGlobalClusterCallable(REQUEST)  SubmitCallable(&DocDBClient::CreateGlobalCluster, REQUEST)

#define DeleteDBClusterAsync(...)  SubmitAsync(&DocDBClient::DeleteDBCluster, __VA_ARGS__)
#define DeleteDBClusterCallable(REQUEST)  SubmitCallable(&DocDBClient::DeleteDBCluster, REQUEST)

#define DeleteDBClusterParameterGroupAsync(...)  SubmitAsync(&DocDBClient::DeleteDBClusterParameterGroup, __VA_ARGS__)
#define DeleteDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&DocDBClient::DeleteDBClusterParameterGroup, REQUEST)

#define DeleteDBClusterSnapshotAsync(...)  SubmitAsync(&DocDBClient::DeleteDBClusterSnapshot, __VA_ARGS__)
#define DeleteDBClusterSnapshotCallable(REQUEST)  SubmitCallable(&DocDBClient::DeleteDBClusterSnapshot, REQUEST)

#define DeleteDBInstanceAsync(...)  SubmitAsync(&DocDBClient::DeleteDBInstance, __VA_ARGS__)
#define DeleteDBInstanceCallable(REQUEST)  SubmitCallable(&DocDBClient::DeleteDBInstance, REQUEST)

#define DeleteDBSubnetGroupAsync(...)  SubmitAsync(&DocDBClient::DeleteDBSubnetGroup, __VA_ARGS__)
#define DeleteDBSubnetGroupCallable(REQUEST)  SubmitCallable(&DocDBClient::DeleteDBSubnetGroup, REQUEST)

#define DeleteEventSubscriptionAsync(...)  SubmitAsync(&DocDBClient::DeleteEventSubscription, __VA_ARGS__)
#define DeleteEventSubscriptionCallable(REQUEST)  SubmitCallable(&DocDBClient::DeleteEventSubscription, REQUEST)

#define DeleteGlobalClusterAsync(...)  SubmitAsync(&DocDBClient::DeleteGlobalCluster, __VA_ARGS__)
#define DeleteGlobalClusterCallable(REQUEST)  SubmitCallable(&DocDBClient::DeleteGlobalCluster, REQUEST)

#define DescribeCertificatesAsync(...)  SubmitAsync(&DocDBClient::DescribeCertificates, __VA_ARGS__)
#define DescribeCertificatesCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeCertificates, REQUEST)

#define DescribeDBClusterParameterGroupsAsync(...)  SubmitAsync(&DocDBClient::DescribeDBClusterParameterGroups, __VA_ARGS__)
#define DescribeDBClusterParameterGroupsCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeDBClusterParameterGroups, REQUEST)

#define DescribeDBClusterParametersAsync(...)  SubmitAsync(&DocDBClient::DescribeDBClusterParameters, __VA_ARGS__)
#define DescribeDBClusterParametersCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeDBClusterParameters, REQUEST)

#define DescribeDBClusterSnapshotAttributesAsync(...)  SubmitAsync(&DocDBClient::DescribeDBClusterSnapshotAttributes, __VA_ARGS__)
#define DescribeDBClusterSnapshotAttributesCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeDBClusterSnapshotAttributes, REQUEST)

#define DescribeDBClusterSnapshotsAsync(...)  SubmitAsync(&DocDBClient::DescribeDBClusterSnapshots, __VA_ARGS__)
#define DescribeDBClusterSnapshotsCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeDBClusterSnapshots, REQUEST)

#define DescribeDBClustersAsync(...)  SubmitAsync(&DocDBClient::DescribeDBClusters, __VA_ARGS__)
#define DescribeDBClustersCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeDBClusters, REQUEST)

#define DescribeDBEngineVersionsAsync(...)  SubmitAsync(&DocDBClient::DescribeDBEngineVersions, __VA_ARGS__)
#define DescribeDBEngineVersionsCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeDBEngineVersions, REQUEST)

#define DescribeDBInstancesAsync(...)  SubmitAsync(&DocDBClient::DescribeDBInstances, __VA_ARGS__)
#define DescribeDBInstancesCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeDBInstances, REQUEST)

#define DescribeDBSubnetGroupsAsync(...)  SubmitAsync(&DocDBClient::DescribeDBSubnetGroups, __VA_ARGS__)
#define DescribeDBSubnetGroupsCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeDBSubnetGroups, REQUEST)

#define DescribeEngineDefaultClusterParametersAsync(...)  SubmitAsync(&DocDBClient::DescribeEngineDefaultClusterParameters, __VA_ARGS__)
#define DescribeEngineDefaultClusterParametersCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeEngineDefaultClusterParameters, REQUEST)

#define DescribeEventCategoriesAsync(...)  SubmitAsync(&DocDBClient::DescribeEventCategories, __VA_ARGS__)
#define DescribeEventCategoriesCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeEventCategories, REQUEST)

#define DescribeEventSubscriptionsAsync(...)  SubmitAsync(&DocDBClient::DescribeEventSubscriptions, __VA_ARGS__)
#define DescribeEventSubscriptionsCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeEventSubscriptions, REQUEST)

#define DescribeEventsAsync(...)  SubmitAsync(&DocDBClient::DescribeEvents, __VA_ARGS__)
#define DescribeEventsCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeEvents, REQUEST)

#define DescribeGlobalClustersAsync(...)  SubmitAsync(&DocDBClient::DescribeGlobalClusters, __VA_ARGS__)
#define DescribeGlobalClustersCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeGlobalClusters, REQUEST)

#define DescribeOrderableDBInstanceOptionsAsync(...)  SubmitAsync(&DocDBClient::DescribeOrderableDBInstanceOptions, __VA_ARGS__)
#define DescribeOrderableDBInstanceOptionsCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribeOrderableDBInstanceOptions, REQUEST)

#define DescribePendingMaintenanceActionsAsync(...)  SubmitAsync(&DocDBClient::DescribePendingMaintenanceActions, __VA_ARGS__)
#define DescribePendingMaintenanceActionsCallable(REQUEST)  SubmitCallable(&DocDBClient::DescribePendingMaintenanceActions, REQUEST)

#define FailoverDBClusterAsync(...)  SubmitAsync(&DocDBClient::FailoverDBCluster, __VA_ARGS__)
#define FailoverDBClusterCallable(REQUEST)  SubmitCallable(&DocDBClient::FailoverDBCluster, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&DocDBClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&DocDBClient::ListTagsForResource, REQUEST)

#define ModifyDBClusterAsync(...)  SubmitAsync(&DocDBClient::ModifyDBCluster, __VA_ARGS__)
#define ModifyDBClusterCallable(REQUEST)  SubmitCallable(&DocDBClient::ModifyDBCluster, REQUEST)

#define ModifyDBClusterParameterGroupAsync(...)  SubmitAsync(&DocDBClient::ModifyDBClusterParameterGroup, __VA_ARGS__)
#define ModifyDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&DocDBClient::ModifyDBClusterParameterGroup, REQUEST)

#define ModifyDBClusterSnapshotAttributeAsync(...)  SubmitAsync(&DocDBClient::ModifyDBClusterSnapshotAttribute, __VA_ARGS__)
#define ModifyDBClusterSnapshotAttributeCallable(REQUEST)  SubmitCallable(&DocDBClient::ModifyDBClusterSnapshotAttribute, REQUEST)

#define ModifyDBInstanceAsync(...)  SubmitAsync(&DocDBClient::ModifyDBInstance, __VA_ARGS__)
#define ModifyDBInstanceCallable(REQUEST)  SubmitCallable(&DocDBClient::ModifyDBInstance, REQUEST)

#define ModifyDBSubnetGroupAsync(...)  SubmitAsync(&DocDBClient::ModifyDBSubnetGroup, __VA_ARGS__)
#define ModifyDBSubnetGroupCallable(REQUEST)  SubmitCallable(&DocDBClient::ModifyDBSubnetGroup, REQUEST)

#define ModifyEventSubscriptionAsync(...)  SubmitAsync(&DocDBClient::ModifyEventSubscription, __VA_ARGS__)
#define ModifyEventSubscriptionCallable(REQUEST)  SubmitCallable(&DocDBClient::ModifyEventSubscription, REQUEST)

#define ModifyGlobalClusterAsync(...)  SubmitAsync(&DocDBClient::ModifyGlobalCluster, __VA_ARGS__)
#define ModifyGlobalClusterCallable(REQUEST)  SubmitCallable(&DocDBClient::ModifyGlobalCluster, REQUEST)

#define RebootDBInstanceAsync(...)  SubmitAsync(&DocDBClient::RebootDBInstance, __VA_ARGS__)
#define RebootDBInstanceCallable(REQUEST)  SubmitCallable(&DocDBClient::RebootDBInstance, REQUEST)

#define RemoveFromGlobalClusterAsync(...)  SubmitAsync(&DocDBClient::RemoveFromGlobalCluster, __VA_ARGS__)
#define RemoveFromGlobalClusterCallable(REQUEST)  SubmitCallable(&DocDBClient::RemoveFromGlobalCluster, REQUEST)

#define RemoveSourceIdentifierFromSubscriptionAsync(...)  SubmitAsync(&DocDBClient::RemoveSourceIdentifierFromSubscription, __VA_ARGS__)
#define RemoveSourceIdentifierFromSubscriptionCallable(REQUEST)  SubmitCallable(&DocDBClient::RemoveSourceIdentifierFromSubscription, REQUEST)

#define RemoveTagsFromResourceAsync(...)  SubmitAsync(&DocDBClient::RemoveTagsFromResource, __VA_ARGS__)
#define RemoveTagsFromResourceCallable(REQUEST)  SubmitCallable(&DocDBClient::RemoveTagsFromResource, REQUEST)

#define ResetDBClusterParameterGroupAsync(...)  SubmitAsync(&DocDBClient::ResetDBClusterParameterGroup, __VA_ARGS__)
#define ResetDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&DocDBClient::ResetDBClusterParameterGroup, REQUEST)

#define RestoreDBClusterFromSnapshotAsync(...)  SubmitAsync(&DocDBClient::RestoreDBClusterFromSnapshot, __VA_ARGS__)
#define RestoreDBClusterFromSnapshotCallable(REQUEST)  SubmitCallable(&DocDBClient::RestoreDBClusterFromSnapshot, REQUEST)

#define RestoreDBClusterToPointInTimeAsync(...)  SubmitAsync(&DocDBClient::RestoreDBClusterToPointInTime, __VA_ARGS__)
#define RestoreDBClusterToPointInTimeCallable(REQUEST)  SubmitCallable(&DocDBClient::RestoreDBClusterToPointInTime, REQUEST)

#define StartDBClusterAsync(...)  SubmitAsync(&DocDBClient::StartDBCluster, __VA_ARGS__)
#define StartDBClusterCallable(REQUEST)  SubmitCallable(&DocDBClient::StartDBCluster, REQUEST)

#define StopDBClusterAsync(...)  SubmitAsync(&DocDBClient::StopDBCluster, __VA_ARGS__)
#define StopDBClusterCallable(REQUEST)  SubmitCallable(&DocDBClient::StopDBCluster, REQUEST)

