/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddRoleToDBClusterAsync(...)  SubmitAsync(&RDSClient::AddRoleToDBCluster, __VA_ARGS__)
#define AddRoleToDBClusterCallable(REQUEST)  SubmitCallable(&RDSClient::AddRoleToDBCluster, REQUEST)

#define AddRoleToDBInstanceAsync(...)  SubmitAsync(&RDSClient::AddRoleToDBInstance, __VA_ARGS__)
#define AddRoleToDBInstanceCallable(REQUEST)  SubmitCallable(&RDSClient::AddRoleToDBInstance, REQUEST)

#define AddSourceIdentifierToSubscriptionAsync(...)  SubmitAsync(&RDSClient::AddSourceIdentifierToSubscription, __VA_ARGS__)
#define AddSourceIdentifierToSubscriptionCallable(REQUEST)  SubmitCallable(&RDSClient::AddSourceIdentifierToSubscription, REQUEST)

#define AddTagsToResourceAsync(...)  SubmitAsync(&RDSClient::AddTagsToResource, __VA_ARGS__)
#define AddTagsToResourceCallable(REQUEST)  SubmitCallable(&RDSClient::AddTagsToResource, REQUEST)

#define ApplyPendingMaintenanceActionAsync(...)  SubmitAsync(&RDSClient::ApplyPendingMaintenanceAction, __VA_ARGS__)
#define ApplyPendingMaintenanceActionCallable(REQUEST)  SubmitCallable(&RDSClient::ApplyPendingMaintenanceAction, REQUEST)

#define AuthorizeDBSecurityGroupIngressAsync(...)  SubmitAsync(&RDSClient::AuthorizeDBSecurityGroupIngress, __VA_ARGS__)
#define AuthorizeDBSecurityGroupIngressCallable(REQUEST)  SubmitCallable(&RDSClient::AuthorizeDBSecurityGroupIngress, REQUEST)

#define BacktrackDBClusterAsync(...)  SubmitAsync(&RDSClient::BacktrackDBCluster, __VA_ARGS__)
#define BacktrackDBClusterCallable(REQUEST)  SubmitCallable(&RDSClient::BacktrackDBCluster, REQUEST)

#define CancelExportTaskAsync(...)  SubmitAsync(&RDSClient::CancelExportTask, __VA_ARGS__)
#define CancelExportTaskCallable(REQUEST)  SubmitCallable(&RDSClient::CancelExportTask, REQUEST)

#define CopyDBClusterParameterGroupAsync(...)  SubmitAsync(&RDSClient::CopyDBClusterParameterGroup, __VA_ARGS__)
#define CopyDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&RDSClient::CopyDBClusterParameterGroup, REQUEST)

#define CopyDBClusterSnapshotAsync(...)  SubmitAsync(&RDSClient::CopyDBClusterSnapshot, __VA_ARGS__)
#define CopyDBClusterSnapshotCallable(REQUEST)  SubmitCallable(&RDSClient::CopyDBClusterSnapshot, REQUEST)

#define CopyDBParameterGroupAsync(...)  SubmitAsync(&RDSClient::CopyDBParameterGroup, __VA_ARGS__)
#define CopyDBParameterGroupCallable(REQUEST)  SubmitCallable(&RDSClient::CopyDBParameterGroup, REQUEST)

#define CopyDBSnapshotAsync(...)  SubmitAsync(&RDSClient::CopyDBSnapshot, __VA_ARGS__)
#define CopyDBSnapshotCallable(REQUEST)  SubmitCallable(&RDSClient::CopyDBSnapshot, REQUEST)

#define CopyOptionGroupAsync(...)  SubmitAsync(&RDSClient::CopyOptionGroup, __VA_ARGS__)
#define CopyOptionGroupCallable(REQUEST)  SubmitCallable(&RDSClient::CopyOptionGroup, REQUEST)

#define CreateCustomDBEngineVersionAsync(...)  SubmitAsync(&RDSClient::CreateCustomDBEngineVersion, __VA_ARGS__)
#define CreateCustomDBEngineVersionCallable(REQUEST)  SubmitCallable(&RDSClient::CreateCustomDBEngineVersion, REQUEST)

#define CreateDBClusterAsync(...)  SubmitAsync(&RDSClient::CreateDBCluster, __VA_ARGS__)
#define CreateDBClusterCallable(REQUEST)  SubmitCallable(&RDSClient::CreateDBCluster, REQUEST)

#define CreateDBClusterEndpointAsync(...)  SubmitAsync(&RDSClient::CreateDBClusterEndpoint, __VA_ARGS__)
#define CreateDBClusterEndpointCallable(REQUEST)  SubmitCallable(&RDSClient::CreateDBClusterEndpoint, REQUEST)

#define CreateDBClusterParameterGroupAsync(...)  SubmitAsync(&RDSClient::CreateDBClusterParameterGroup, __VA_ARGS__)
#define CreateDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&RDSClient::CreateDBClusterParameterGroup, REQUEST)

#define CreateDBClusterSnapshotAsync(...)  SubmitAsync(&RDSClient::CreateDBClusterSnapshot, __VA_ARGS__)
#define CreateDBClusterSnapshotCallable(REQUEST)  SubmitCallable(&RDSClient::CreateDBClusterSnapshot, REQUEST)

#define CreateDBInstanceAsync(...)  SubmitAsync(&RDSClient::CreateDBInstance, __VA_ARGS__)
#define CreateDBInstanceCallable(REQUEST)  SubmitCallable(&RDSClient::CreateDBInstance, REQUEST)

#define CreateDBInstanceReadReplicaAsync(...)  SubmitAsync(&RDSClient::CreateDBInstanceReadReplica, __VA_ARGS__)
#define CreateDBInstanceReadReplicaCallable(REQUEST)  SubmitCallable(&RDSClient::CreateDBInstanceReadReplica, REQUEST)

#define CreateDBParameterGroupAsync(...)  SubmitAsync(&RDSClient::CreateDBParameterGroup, __VA_ARGS__)
#define CreateDBParameterGroupCallable(REQUEST)  SubmitCallable(&RDSClient::CreateDBParameterGroup, REQUEST)

#define CreateDBProxyAsync(...)  SubmitAsync(&RDSClient::CreateDBProxy, __VA_ARGS__)
#define CreateDBProxyCallable(REQUEST)  SubmitCallable(&RDSClient::CreateDBProxy, REQUEST)

#define CreateDBProxyEndpointAsync(...)  SubmitAsync(&RDSClient::CreateDBProxyEndpoint, __VA_ARGS__)
#define CreateDBProxyEndpointCallable(REQUEST)  SubmitCallable(&RDSClient::CreateDBProxyEndpoint, REQUEST)

#define CreateDBSecurityGroupAsync(...)  SubmitAsync(&RDSClient::CreateDBSecurityGroup, __VA_ARGS__)
#define CreateDBSecurityGroupCallable(REQUEST)  SubmitCallable(&RDSClient::CreateDBSecurityGroup, REQUEST)

#define CreateDBSnapshotAsync(...)  SubmitAsync(&RDSClient::CreateDBSnapshot, __VA_ARGS__)
#define CreateDBSnapshotCallable(REQUEST)  SubmitCallable(&RDSClient::CreateDBSnapshot, REQUEST)

#define CreateDBSubnetGroupAsync(...)  SubmitAsync(&RDSClient::CreateDBSubnetGroup, __VA_ARGS__)
#define CreateDBSubnetGroupCallable(REQUEST)  SubmitCallable(&RDSClient::CreateDBSubnetGroup, REQUEST)

#define CreateEventSubscriptionAsync(...)  SubmitAsync(&RDSClient::CreateEventSubscription, __VA_ARGS__)
#define CreateEventSubscriptionCallable(REQUEST)  SubmitCallable(&RDSClient::CreateEventSubscription, REQUEST)

#define CreateGlobalClusterAsync(...)  SubmitAsync(&RDSClient::CreateGlobalCluster, __VA_ARGS__)
#define CreateGlobalClusterCallable(REQUEST)  SubmitCallable(&RDSClient::CreateGlobalCluster, REQUEST)

#define CreateOptionGroupAsync(...)  SubmitAsync(&RDSClient::CreateOptionGroup, __VA_ARGS__)
#define CreateOptionGroupCallable(REQUEST)  SubmitCallable(&RDSClient::CreateOptionGroup, REQUEST)

#define DeleteCustomDBEngineVersionAsync(...)  SubmitAsync(&RDSClient::DeleteCustomDBEngineVersion, __VA_ARGS__)
#define DeleteCustomDBEngineVersionCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteCustomDBEngineVersion, REQUEST)

#define DeleteDBClusterAsync(...)  SubmitAsync(&RDSClient::DeleteDBCluster, __VA_ARGS__)
#define DeleteDBClusterCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteDBCluster, REQUEST)

#define DeleteDBClusterEndpointAsync(...)  SubmitAsync(&RDSClient::DeleteDBClusterEndpoint, __VA_ARGS__)
#define DeleteDBClusterEndpointCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteDBClusterEndpoint, REQUEST)

#define DeleteDBClusterParameterGroupAsync(...)  SubmitAsync(&RDSClient::DeleteDBClusterParameterGroup, __VA_ARGS__)
#define DeleteDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteDBClusterParameterGroup, REQUEST)

#define DeleteDBClusterSnapshotAsync(...)  SubmitAsync(&RDSClient::DeleteDBClusterSnapshot, __VA_ARGS__)
#define DeleteDBClusterSnapshotCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteDBClusterSnapshot, REQUEST)

#define DeleteDBInstanceAsync(...)  SubmitAsync(&RDSClient::DeleteDBInstance, __VA_ARGS__)
#define DeleteDBInstanceCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteDBInstance, REQUEST)

#define DeleteDBInstanceAutomatedBackupAsync(...)  SubmitAsync(&RDSClient::DeleteDBInstanceAutomatedBackup, __VA_ARGS__)
#define DeleteDBInstanceAutomatedBackupCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteDBInstanceAutomatedBackup, REQUEST)

#define DeleteDBParameterGroupAsync(...)  SubmitAsync(&RDSClient::DeleteDBParameterGroup, __VA_ARGS__)
#define DeleteDBParameterGroupCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteDBParameterGroup, REQUEST)

#define DeleteDBProxyAsync(...)  SubmitAsync(&RDSClient::DeleteDBProxy, __VA_ARGS__)
#define DeleteDBProxyCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteDBProxy, REQUEST)

#define DeleteDBProxyEndpointAsync(...)  SubmitAsync(&RDSClient::DeleteDBProxyEndpoint, __VA_ARGS__)
#define DeleteDBProxyEndpointCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteDBProxyEndpoint, REQUEST)

#define DeleteDBSecurityGroupAsync(...)  SubmitAsync(&RDSClient::DeleteDBSecurityGroup, __VA_ARGS__)
#define DeleteDBSecurityGroupCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteDBSecurityGroup, REQUEST)

#define DeleteDBSnapshotAsync(...)  SubmitAsync(&RDSClient::DeleteDBSnapshot, __VA_ARGS__)
#define DeleteDBSnapshotCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteDBSnapshot, REQUEST)

#define DeleteDBSubnetGroupAsync(...)  SubmitAsync(&RDSClient::DeleteDBSubnetGroup, __VA_ARGS__)
#define DeleteDBSubnetGroupCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteDBSubnetGroup, REQUEST)

#define DeleteEventSubscriptionAsync(...)  SubmitAsync(&RDSClient::DeleteEventSubscription, __VA_ARGS__)
#define DeleteEventSubscriptionCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteEventSubscription, REQUEST)

#define DeleteGlobalClusterAsync(...)  SubmitAsync(&RDSClient::DeleteGlobalCluster, __VA_ARGS__)
#define DeleteGlobalClusterCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteGlobalCluster, REQUEST)

#define DeleteOptionGroupAsync(...)  SubmitAsync(&RDSClient::DeleteOptionGroup, __VA_ARGS__)
#define DeleteOptionGroupCallable(REQUEST)  SubmitCallable(&RDSClient::DeleteOptionGroup, REQUEST)

#define DeregisterDBProxyTargetsAsync(...)  SubmitAsync(&RDSClient::DeregisterDBProxyTargets, __VA_ARGS__)
#define DeregisterDBProxyTargetsCallable(REQUEST)  SubmitCallable(&RDSClient::DeregisterDBProxyTargets, REQUEST)

#define DescribeAccountAttributesAsync(...)  SubmitAsync(&RDSClient::DescribeAccountAttributes, __VA_ARGS__)
#define DescribeAccountAttributesCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeAccountAttributes, REQUEST)

#define DescribeCertificatesAsync(...)  SubmitAsync(&RDSClient::DescribeCertificates, __VA_ARGS__)
#define DescribeCertificatesCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeCertificates, REQUEST)

#define DescribeDBClusterBacktracksAsync(...)  SubmitAsync(&RDSClient::DescribeDBClusterBacktracks, __VA_ARGS__)
#define DescribeDBClusterBacktracksCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBClusterBacktracks, REQUEST)

#define DescribeDBClusterEndpointsAsync(...)  SubmitAsync(&RDSClient::DescribeDBClusterEndpoints, __VA_ARGS__)
#define DescribeDBClusterEndpointsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBClusterEndpoints, REQUEST)

#define DescribeDBClusterParameterGroupsAsync(...)  SubmitAsync(&RDSClient::DescribeDBClusterParameterGroups, __VA_ARGS__)
#define DescribeDBClusterParameterGroupsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBClusterParameterGroups, REQUEST)

#define DescribeDBClusterParametersAsync(...)  SubmitAsync(&RDSClient::DescribeDBClusterParameters, __VA_ARGS__)
#define DescribeDBClusterParametersCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBClusterParameters, REQUEST)

#define DescribeDBClusterSnapshotAttributesAsync(...)  SubmitAsync(&RDSClient::DescribeDBClusterSnapshotAttributes, __VA_ARGS__)
#define DescribeDBClusterSnapshotAttributesCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBClusterSnapshotAttributes, REQUEST)

#define DescribeDBClusterSnapshotsAsync(...)  SubmitAsync(&RDSClient::DescribeDBClusterSnapshots, __VA_ARGS__)
#define DescribeDBClusterSnapshotsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBClusterSnapshots, REQUEST)

#define DescribeDBClustersAsync(...)  SubmitAsync(&RDSClient::DescribeDBClusters, __VA_ARGS__)
#define DescribeDBClustersCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBClusters, REQUEST)

#define DescribeDBEngineVersionsAsync(...)  SubmitAsync(&RDSClient::DescribeDBEngineVersions, __VA_ARGS__)
#define DescribeDBEngineVersionsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBEngineVersions, REQUEST)

#define DescribeDBInstanceAutomatedBackupsAsync(...)  SubmitAsync(&RDSClient::DescribeDBInstanceAutomatedBackups, __VA_ARGS__)
#define DescribeDBInstanceAutomatedBackupsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBInstanceAutomatedBackups, REQUEST)

#define DescribeDBInstancesAsync(...)  SubmitAsync(&RDSClient::DescribeDBInstances, __VA_ARGS__)
#define DescribeDBInstancesCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBInstances, REQUEST)

#define DescribeDBLogFilesAsync(...)  SubmitAsync(&RDSClient::DescribeDBLogFiles, __VA_ARGS__)
#define DescribeDBLogFilesCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBLogFiles, REQUEST)

#define DescribeDBParameterGroupsAsync(...)  SubmitAsync(&RDSClient::DescribeDBParameterGroups, __VA_ARGS__)
#define DescribeDBParameterGroupsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBParameterGroups, REQUEST)

#define DescribeDBParametersAsync(...)  SubmitAsync(&RDSClient::DescribeDBParameters, __VA_ARGS__)
#define DescribeDBParametersCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBParameters, REQUEST)

#define DescribeDBProxiesAsync(...)  SubmitAsync(&RDSClient::DescribeDBProxies, __VA_ARGS__)
#define DescribeDBProxiesCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBProxies, REQUEST)

#define DescribeDBProxyEndpointsAsync(...)  SubmitAsync(&RDSClient::DescribeDBProxyEndpoints, __VA_ARGS__)
#define DescribeDBProxyEndpointsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBProxyEndpoints, REQUEST)

#define DescribeDBProxyTargetGroupsAsync(...)  SubmitAsync(&RDSClient::DescribeDBProxyTargetGroups, __VA_ARGS__)
#define DescribeDBProxyTargetGroupsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBProxyTargetGroups, REQUEST)

#define DescribeDBProxyTargetsAsync(...)  SubmitAsync(&RDSClient::DescribeDBProxyTargets, __VA_ARGS__)
#define DescribeDBProxyTargetsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBProxyTargets, REQUEST)

#define DescribeDBSecurityGroupsAsync(...)  SubmitAsync(&RDSClient::DescribeDBSecurityGroups, __VA_ARGS__)
#define DescribeDBSecurityGroupsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBSecurityGroups, REQUEST)

#define DescribeDBSnapshotAttributesAsync(...)  SubmitAsync(&RDSClient::DescribeDBSnapshotAttributes, __VA_ARGS__)
#define DescribeDBSnapshotAttributesCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBSnapshotAttributes, REQUEST)

#define DescribeDBSnapshotsAsync(...)  SubmitAsync(&RDSClient::DescribeDBSnapshots, __VA_ARGS__)
#define DescribeDBSnapshotsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBSnapshots, REQUEST)

#define DescribeDBSubnetGroupsAsync(...)  SubmitAsync(&RDSClient::DescribeDBSubnetGroups, __VA_ARGS__)
#define DescribeDBSubnetGroupsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeDBSubnetGroups, REQUEST)

#define DescribeEngineDefaultClusterParametersAsync(...)  SubmitAsync(&RDSClient::DescribeEngineDefaultClusterParameters, __VA_ARGS__)
#define DescribeEngineDefaultClusterParametersCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeEngineDefaultClusterParameters, REQUEST)

#define DescribeEngineDefaultParametersAsync(...)  SubmitAsync(&RDSClient::DescribeEngineDefaultParameters, __VA_ARGS__)
#define DescribeEngineDefaultParametersCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeEngineDefaultParameters, REQUEST)

#define DescribeEventCategoriesAsync(...)  SubmitAsync(&RDSClient::DescribeEventCategories, __VA_ARGS__)
#define DescribeEventCategoriesCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeEventCategories, REQUEST)

#define DescribeEventSubscriptionsAsync(...)  SubmitAsync(&RDSClient::DescribeEventSubscriptions, __VA_ARGS__)
#define DescribeEventSubscriptionsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeEventSubscriptions, REQUEST)

#define DescribeEventsAsync(...)  SubmitAsync(&RDSClient::DescribeEvents, __VA_ARGS__)
#define DescribeEventsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeEvents, REQUEST)

#define DescribeExportTasksAsync(...)  SubmitAsync(&RDSClient::DescribeExportTasks, __VA_ARGS__)
#define DescribeExportTasksCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeExportTasks, REQUEST)

#define DescribeGlobalClustersAsync(...)  SubmitAsync(&RDSClient::DescribeGlobalClusters, __VA_ARGS__)
#define DescribeGlobalClustersCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeGlobalClusters, REQUEST)

#define DescribeOptionGroupOptionsAsync(...)  SubmitAsync(&RDSClient::DescribeOptionGroupOptions, __VA_ARGS__)
#define DescribeOptionGroupOptionsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeOptionGroupOptions, REQUEST)

#define DescribeOptionGroupsAsync(...)  SubmitAsync(&RDSClient::DescribeOptionGroups, __VA_ARGS__)
#define DescribeOptionGroupsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeOptionGroups, REQUEST)

#define DescribeOrderableDBInstanceOptionsAsync(...)  SubmitAsync(&RDSClient::DescribeOrderableDBInstanceOptions, __VA_ARGS__)
#define DescribeOrderableDBInstanceOptionsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeOrderableDBInstanceOptions, REQUEST)

#define DescribePendingMaintenanceActionsAsync(...)  SubmitAsync(&RDSClient::DescribePendingMaintenanceActions, __VA_ARGS__)
#define DescribePendingMaintenanceActionsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribePendingMaintenanceActions, REQUEST)

#define DescribeReservedDBInstancesAsync(...)  SubmitAsync(&RDSClient::DescribeReservedDBInstances, __VA_ARGS__)
#define DescribeReservedDBInstancesCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeReservedDBInstances, REQUEST)

#define DescribeReservedDBInstancesOfferingsAsync(...)  SubmitAsync(&RDSClient::DescribeReservedDBInstancesOfferings, __VA_ARGS__)
#define DescribeReservedDBInstancesOfferingsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeReservedDBInstancesOfferings, REQUEST)

#define DescribeSourceRegionsAsync(...)  SubmitAsync(&RDSClient::DescribeSourceRegions, __VA_ARGS__)
#define DescribeSourceRegionsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeSourceRegions, REQUEST)

#define DescribeValidDBInstanceModificationsAsync(...)  SubmitAsync(&RDSClient::DescribeValidDBInstanceModifications, __VA_ARGS__)
#define DescribeValidDBInstanceModificationsCallable(REQUEST)  SubmitCallable(&RDSClient::DescribeValidDBInstanceModifications, REQUEST)

#define DownloadDBLogFilePortionAsync(...)  SubmitAsync(&RDSClient::DownloadDBLogFilePortion, __VA_ARGS__)
#define DownloadDBLogFilePortionCallable(REQUEST)  SubmitCallable(&RDSClient::DownloadDBLogFilePortion, REQUEST)

#define FailoverDBClusterAsync(...)  SubmitAsync(&RDSClient::FailoverDBCluster, __VA_ARGS__)
#define FailoverDBClusterCallable(REQUEST)  SubmitCallable(&RDSClient::FailoverDBCluster, REQUEST)

#define FailoverGlobalClusterAsync(...)  SubmitAsync(&RDSClient::FailoverGlobalCluster, __VA_ARGS__)
#define FailoverGlobalClusterCallable(REQUEST)  SubmitCallable(&RDSClient::FailoverGlobalCluster, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&RDSClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&RDSClient::ListTagsForResource, REQUEST)

#define ModifyActivityStreamAsync(...)  SubmitAsync(&RDSClient::ModifyActivityStream, __VA_ARGS__)
#define ModifyActivityStreamCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyActivityStream, REQUEST)

#define ModifyCertificatesAsync(...)  SubmitAsync(&RDSClient::ModifyCertificates, __VA_ARGS__)
#define ModifyCertificatesCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyCertificates, REQUEST)

#define ModifyCurrentDBClusterCapacityAsync(...)  SubmitAsync(&RDSClient::ModifyCurrentDBClusterCapacity, __VA_ARGS__)
#define ModifyCurrentDBClusterCapacityCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyCurrentDBClusterCapacity, REQUEST)

#define ModifyCustomDBEngineVersionAsync(...)  SubmitAsync(&RDSClient::ModifyCustomDBEngineVersion, __VA_ARGS__)
#define ModifyCustomDBEngineVersionCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyCustomDBEngineVersion, REQUEST)

#define ModifyDBClusterAsync(...)  SubmitAsync(&RDSClient::ModifyDBCluster, __VA_ARGS__)
#define ModifyDBClusterCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyDBCluster, REQUEST)

#define ModifyDBClusterEndpointAsync(...)  SubmitAsync(&RDSClient::ModifyDBClusterEndpoint, __VA_ARGS__)
#define ModifyDBClusterEndpointCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyDBClusterEndpoint, REQUEST)

#define ModifyDBClusterParameterGroupAsync(...)  SubmitAsync(&RDSClient::ModifyDBClusterParameterGroup, __VA_ARGS__)
#define ModifyDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyDBClusterParameterGroup, REQUEST)

#define ModifyDBClusterSnapshotAttributeAsync(...)  SubmitAsync(&RDSClient::ModifyDBClusterSnapshotAttribute, __VA_ARGS__)
#define ModifyDBClusterSnapshotAttributeCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyDBClusterSnapshotAttribute, REQUEST)

#define ModifyDBInstanceAsync(...)  SubmitAsync(&RDSClient::ModifyDBInstance, __VA_ARGS__)
#define ModifyDBInstanceCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyDBInstance, REQUEST)

#define ModifyDBParameterGroupAsync(...)  SubmitAsync(&RDSClient::ModifyDBParameterGroup, __VA_ARGS__)
#define ModifyDBParameterGroupCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyDBParameterGroup, REQUEST)

#define ModifyDBProxyAsync(...)  SubmitAsync(&RDSClient::ModifyDBProxy, __VA_ARGS__)
#define ModifyDBProxyCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyDBProxy, REQUEST)

#define ModifyDBProxyEndpointAsync(...)  SubmitAsync(&RDSClient::ModifyDBProxyEndpoint, __VA_ARGS__)
#define ModifyDBProxyEndpointCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyDBProxyEndpoint, REQUEST)

#define ModifyDBProxyTargetGroupAsync(...)  SubmitAsync(&RDSClient::ModifyDBProxyTargetGroup, __VA_ARGS__)
#define ModifyDBProxyTargetGroupCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyDBProxyTargetGroup, REQUEST)

#define ModifyDBSnapshotAsync(...)  SubmitAsync(&RDSClient::ModifyDBSnapshot, __VA_ARGS__)
#define ModifyDBSnapshotCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyDBSnapshot, REQUEST)

#define ModifyDBSnapshotAttributeAsync(...)  SubmitAsync(&RDSClient::ModifyDBSnapshotAttribute, __VA_ARGS__)
#define ModifyDBSnapshotAttributeCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyDBSnapshotAttribute, REQUEST)

#define ModifyDBSubnetGroupAsync(...)  SubmitAsync(&RDSClient::ModifyDBSubnetGroup, __VA_ARGS__)
#define ModifyDBSubnetGroupCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyDBSubnetGroup, REQUEST)

#define ModifyEventSubscriptionAsync(...)  SubmitAsync(&RDSClient::ModifyEventSubscription, __VA_ARGS__)
#define ModifyEventSubscriptionCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyEventSubscription, REQUEST)

#define ModifyGlobalClusterAsync(...)  SubmitAsync(&RDSClient::ModifyGlobalCluster, __VA_ARGS__)
#define ModifyGlobalClusterCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyGlobalCluster, REQUEST)

#define ModifyOptionGroupAsync(...)  SubmitAsync(&RDSClient::ModifyOptionGroup, __VA_ARGS__)
#define ModifyOptionGroupCallable(REQUEST)  SubmitCallable(&RDSClient::ModifyOptionGroup, REQUEST)

#define PromoteReadReplicaAsync(...)  SubmitAsync(&RDSClient::PromoteReadReplica, __VA_ARGS__)
#define PromoteReadReplicaCallable(REQUEST)  SubmitCallable(&RDSClient::PromoteReadReplica, REQUEST)

#define PromoteReadReplicaDBClusterAsync(...)  SubmitAsync(&RDSClient::PromoteReadReplicaDBCluster, __VA_ARGS__)
#define PromoteReadReplicaDBClusterCallable(REQUEST)  SubmitCallable(&RDSClient::PromoteReadReplicaDBCluster, REQUEST)

#define PurchaseReservedDBInstancesOfferingAsync(...)  SubmitAsync(&RDSClient::PurchaseReservedDBInstancesOffering, __VA_ARGS__)
#define PurchaseReservedDBInstancesOfferingCallable(REQUEST)  SubmitCallable(&RDSClient::PurchaseReservedDBInstancesOffering, REQUEST)

#define RebootDBClusterAsync(...)  SubmitAsync(&RDSClient::RebootDBCluster, __VA_ARGS__)
#define RebootDBClusterCallable(REQUEST)  SubmitCallable(&RDSClient::RebootDBCluster, REQUEST)

#define RebootDBInstanceAsync(...)  SubmitAsync(&RDSClient::RebootDBInstance, __VA_ARGS__)
#define RebootDBInstanceCallable(REQUEST)  SubmitCallable(&RDSClient::RebootDBInstance, REQUEST)

#define RegisterDBProxyTargetsAsync(...)  SubmitAsync(&RDSClient::RegisterDBProxyTargets, __VA_ARGS__)
#define RegisterDBProxyTargetsCallable(REQUEST)  SubmitCallable(&RDSClient::RegisterDBProxyTargets, REQUEST)

#define RemoveFromGlobalClusterAsync(...)  SubmitAsync(&RDSClient::RemoveFromGlobalCluster, __VA_ARGS__)
#define RemoveFromGlobalClusterCallable(REQUEST)  SubmitCallable(&RDSClient::RemoveFromGlobalCluster, REQUEST)

#define RemoveRoleFromDBClusterAsync(...)  SubmitAsync(&RDSClient::RemoveRoleFromDBCluster, __VA_ARGS__)
#define RemoveRoleFromDBClusterCallable(REQUEST)  SubmitCallable(&RDSClient::RemoveRoleFromDBCluster, REQUEST)

#define RemoveRoleFromDBInstanceAsync(...)  SubmitAsync(&RDSClient::RemoveRoleFromDBInstance, __VA_ARGS__)
#define RemoveRoleFromDBInstanceCallable(REQUEST)  SubmitCallable(&RDSClient::RemoveRoleFromDBInstance, REQUEST)

#define RemoveSourceIdentifierFromSubscriptionAsync(...)  SubmitAsync(&RDSClient::RemoveSourceIdentifierFromSubscription, __VA_ARGS__)
#define RemoveSourceIdentifierFromSubscriptionCallable(REQUEST)  SubmitCallable(&RDSClient::RemoveSourceIdentifierFromSubscription, REQUEST)

#define RemoveTagsFromResourceAsync(...)  SubmitAsync(&RDSClient::RemoveTagsFromResource, __VA_ARGS__)
#define RemoveTagsFromResourceCallable(REQUEST)  SubmitCallable(&RDSClient::RemoveTagsFromResource, REQUEST)

#define ResetDBClusterParameterGroupAsync(...)  SubmitAsync(&RDSClient::ResetDBClusterParameterGroup, __VA_ARGS__)
#define ResetDBClusterParameterGroupCallable(REQUEST)  SubmitCallable(&RDSClient::ResetDBClusterParameterGroup, REQUEST)

#define ResetDBParameterGroupAsync(...)  SubmitAsync(&RDSClient::ResetDBParameterGroup, __VA_ARGS__)
#define ResetDBParameterGroupCallable(REQUEST)  SubmitCallable(&RDSClient::ResetDBParameterGroup, REQUEST)

#define RestoreDBClusterFromS3Async(...)  SubmitAsync(&RDSClient::RestoreDBClusterFromS3, __VA_ARGS__)
#define RestoreDBClusterFromS3Callable(REQUEST)  SubmitCallable(&RDSClient::RestoreDBClusterFromS3, REQUEST)

#define RestoreDBClusterFromSnapshotAsync(...)  SubmitAsync(&RDSClient::RestoreDBClusterFromSnapshot, __VA_ARGS__)
#define RestoreDBClusterFromSnapshotCallable(REQUEST)  SubmitCallable(&RDSClient::RestoreDBClusterFromSnapshot, REQUEST)

#define RestoreDBClusterToPointInTimeAsync(...)  SubmitAsync(&RDSClient::RestoreDBClusterToPointInTime, __VA_ARGS__)
#define RestoreDBClusterToPointInTimeCallable(REQUEST)  SubmitCallable(&RDSClient::RestoreDBClusterToPointInTime, REQUEST)

#define RestoreDBInstanceFromDBSnapshotAsync(...)  SubmitAsync(&RDSClient::RestoreDBInstanceFromDBSnapshot, __VA_ARGS__)
#define RestoreDBInstanceFromDBSnapshotCallable(REQUEST)  SubmitCallable(&RDSClient::RestoreDBInstanceFromDBSnapshot, REQUEST)

#define RestoreDBInstanceFromS3Async(...)  SubmitAsync(&RDSClient::RestoreDBInstanceFromS3, __VA_ARGS__)
#define RestoreDBInstanceFromS3Callable(REQUEST)  SubmitCallable(&RDSClient::RestoreDBInstanceFromS3, REQUEST)

#define RestoreDBInstanceToPointInTimeAsync(...)  SubmitAsync(&RDSClient::RestoreDBInstanceToPointInTime, __VA_ARGS__)
#define RestoreDBInstanceToPointInTimeCallable(REQUEST)  SubmitCallable(&RDSClient::RestoreDBInstanceToPointInTime, REQUEST)

#define RevokeDBSecurityGroupIngressAsync(...)  SubmitAsync(&RDSClient::RevokeDBSecurityGroupIngress, __VA_ARGS__)
#define RevokeDBSecurityGroupIngressCallable(REQUEST)  SubmitCallable(&RDSClient::RevokeDBSecurityGroupIngress, REQUEST)

#define StartActivityStreamAsync(...)  SubmitAsync(&RDSClient::StartActivityStream, __VA_ARGS__)
#define StartActivityStreamCallable(REQUEST)  SubmitCallable(&RDSClient::StartActivityStream, REQUEST)

#define StartDBClusterAsync(...)  SubmitAsync(&RDSClient::StartDBCluster, __VA_ARGS__)
#define StartDBClusterCallable(REQUEST)  SubmitCallable(&RDSClient::StartDBCluster, REQUEST)

#define StartDBInstanceAsync(...)  SubmitAsync(&RDSClient::StartDBInstance, __VA_ARGS__)
#define StartDBInstanceCallable(REQUEST)  SubmitCallable(&RDSClient::StartDBInstance, REQUEST)

#define StartDBInstanceAutomatedBackupsReplicationAsync(...)  SubmitAsync(&RDSClient::StartDBInstanceAutomatedBackupsReplication, __VA_ARGS__)
#define StartDBInstanceAutomatedBackupsReplicationCallable(REQUEST)  SubmitCallable(&RDSClient::StartDBInstanceAutomatedBackupsReplication, REQUEST)

#define StartExportTaskAsync(...)  SubmitAsync(&RDSClient::StartExportTask, __VA_ARGS__)
#define StartExportTaskCallable(REQUEST)  SubmitCallable(&RDSClient::StartExportTask, REQUEST)

#define StopActivityStreamAsync(...)  SubmitAsync(&RDSClient::StopActivityStream, __VA_ARGS__)
#define StopActivityStreamCallable(REQUEST)  SubmitCallable(&RDSClient::StopActivityStream, REQUEST)

#define StopDBClusterAsync(...)  SubmitAsync(&RDSClient::StopDBCluster, __VA_ARGS__)
#define StopDBClusterCallable(REQUEST)  SubmitCallable(&RDSClient::StopDBCluster, REQUEST)

#define StopDBInstanceAsync(...)  SubmitAsync(&RDSClient::StopDBInstance, __VA_ARGS__)
#define StopDBInstanceCallable(REQUEST)  SubmitCallable(&RDSClient::StopDBInstance, REQUEST)

#define StopDBInstanceAutomatedBackupsReplicationAsync(...)  SubmitAsync(&RDSClient::StopDBInstanceAutomatedBackupsReplication, __VA_ARGS__)
#define StopDBInstanceAutomatedBackupsReplicationCallable(REQUEST)  SubmitCallable(&RDSClient::StopDBInstanceAutomatedBackupsReplication, REQUEST)

#define SwitchoverReadReplicaAsync(...)  SubmitAsync(&RDSClient::SwitchoverReadReplica, __VA_ARGS__)
#define SwitchoverReadReplicaCallable(REQUEST)  SubmitCallable(&RDSClient::SwitchoverReadReplica, REQUEST)

