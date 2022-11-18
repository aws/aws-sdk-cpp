/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddTagsToResourceAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::AddTagsToResource, __VA_ARGS__)
#define AddTagsToResourceCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::AddTagsToResource, REQUEST)

#define ApplyPendingMaintenanceActionAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::ApplyPendingMaintenanceAction, __VA_ARGS__)
#define ApplyPendingMaintenanceActionCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::ApplyPendingMaintenanceAction, REQUEST)

#define CancelReplicationTaskAssessmentRunAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::CancelReplicationTaskAssessmentRun, __VA_ARGS__)
#define CancelReplicationTaskAssessmentRunCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::CancelReplicationTaskAssessmentRun, REQUEST)

#define CreateEndpointAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::CreateEndpoint, __VA_ARGS__)
#define CreateEndpointCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::CreateEndpoint, REQUEST)

#define CreateEventSubscriptionAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::CreateEventSubscription, __VA_ARGS__)
#define CreateEventSubscriptionCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::CreateEventSubscription, REQUEST)

#define CreateFleetAdvisorCollectorAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::CreateFleetAdvisorCollector, __VA_ARGS__)
#define CreateFleetAdvisorCollectorCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::CreateFleetAdvisorCollector, REQUEST)

#define CreateReplicationInstanceAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::CreateReplicationInstance, __VA_ARGS__)
#define CreateReplicationInstanceCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::CreateReplicationInstance, REQUEST)

#define CreateReplicationSubnetGroupAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::CreateReplicationSubnetGroup, __VA_ARGS__)
#define CreateReplicationSubnetGroupCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::CreateReplicationSubnetGroup, REQUEST)

#define CreateReplicationTaskAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::CreateReplicationTask, __VA_ARGS__)
#define CreateReplicationTaskCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::CreateReplicationTask, REQUEST)

#define DeleteCertificateAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DeleteCertificate, __VA_ARGS__)
#define DeleteCertificateCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DeleteCertificate, REQUEST)

#define DeleteConnectionAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DeleteConnection, __VA_ARGS__)
#define DeleteConnectionCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DeleteConnection, REQUEST)

#define DeleteEndpointAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DeleteEndpoint, __VA_ARGS__)
#define DeleteEndpointCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DeleteEndpoint, REQUEST)

#define DeleteEventSubscriptionAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DeleteEventSubscription, __VA_ARGS__)
#define DeleteEventSubscriptionCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DeleteEventSubscription, REQUEST)

#define DeleteFleetAdvisorCollectorAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DeleteFleetAdvisorCollector, __VA_ARGS__)
#define DeleteFleetAdvisorCollectorCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DeleteFleetAdvisorCollector, REQUEST)

#define DeleteFleetAdvisorDatabasesAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DeleteFleetAdvisorDatabases, __VA_ARGS__)
#define DeleteFleetAdvisorDatabasesCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DeleteFleetAdvisorDatabases, REQUEST)

#define DeleteReplicationInstanceAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DeleteReplicationInstance, __VA_ARGS__)
#define DeleteReplicationInstanceCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DeleteReplicationInstance, REQUEST)

#define DeleteReplicationSubnetGroupAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DeleteReplicationSubnetGroup, __VA_ARGS__)
#define DeleteReplicationSubnetGroupCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DeleteReplicationSubnetGroup, REQUEST)

#define DeleteReplicationTaskAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DeleteReplicationTask, __VA_ARGS__)
#define DeleteReplicationTaskCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DeleteReplicationTask, REQUEST)

#define DeleteReplicationTaskAssessmentRunAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DeleteReplicationTaskAssessmentRun, __VA_ARGS__)
#define DeleteReplicationTaskAssessmentRunCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DeleteReplicationTaskAssessmentRun, REQUEST)

#define DescribeAccountAttributesAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeAccountAttributes, __VA_ARGS__)
#define DescribeAccountAttributesCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeAccountAttributes, REQUEST)

#define DescribeApplicableIndividualAssessmentsAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeApplicableIndividualAssessments, __VA_ARGS__)
#define DescribeApplicableIndividualAssessmentsCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeApplicableIndividualAssessments, REQUEST)

#define DescribeCertificatesAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeCertificates, __VA_ARGS__)
#define DescribeCertificatesCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeCertificates, REQUEST)

#define DescribeConnectionsAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeConnections, __VA_ARGS__)
#define DescribeConnectionsCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeConnections, REQUEST)

#define DescribeEndpointSettingsAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeEndpointSettings, __VA_ARGS__)
#define DescribeEndpointSettingsCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeEndpointSettings, REQUEST)

#define DescribeEndpointTypesAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeEndpointTypes, __VA_ARGS__)
#define DescribeEndpointTypesCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeEndpointTypes, REQUEST)

#define DescribeEndpointsAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeEndpoints, __VA_ARGS__)
#define DescribeEndpointsCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeEndpoints, REQUEST)

#define DescribeEventCategoriesAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeEventCategories, __VA_ARGS__)
#define DescribeEventCategoriesCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeEventCategories, REQUEST)

#define DescribeEventSubscriptionsAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeEventSubscriptions, __VA_ARGS__)
#define DescribeEventSubscriptionsCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeEventSubscriptions, REQUEST)

#define DescribeEventsAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeEvents, __VA_ARGS__)
#define DescribeEventsCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeEvents, REQUEST)

#define DescribeFleetAdvisorCollectorsAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeFleetAdvisorCollectors, __VA_ARGS__)
#define DescribeFleetAdvisorCollectorsCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeFleetAdvisorCollectors, REQUEST)

#define DescribeFleetAdvisorDatabasesAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeFleetAdvisorDatabases, __VA_ARGS__)
#define DescribeFleetAdvisorDatabasesCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeFleetAdvisorDatabases, REQUEST)

#define DescribeFleetAdvisorLsaAnalysisAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeFleetAdvisorLsaAnalysis, __VA_ARGS__)
#define DescribeFleetAdvisorLsaAnalysisCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeFleetAdvisorLsaAnalysis, REQUEST)

#define DescribeFleetAdvisorSchemaObjectSummaryAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemaObjectSummary, __VA_ARGS__)
#define DescribeFleetAdvisorSchemaObjectSummaryCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemaObjectSummary, REQUEST)

#define DescribeFleetAdvisorSchemasAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemas, __VA_ARGS__)
#define DescribeFleetAdvisorSchemasCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemas, REQUEST)

#define DescribeOrderableReplicationInstancesAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeOrderableReplicationInstances, __VA_ARGS__)
#define DescribeOrderableReplicationInstancesCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeOrderableReplicationInstances, REQUEST)

#define DescribePendingMaintenanceActionsAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribePendingMaintenanceActions, __VA_ARGS__)
#define DescribePendingMaintenanceActionsCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribePendingMaintenanceActions, REQUEST)

#define DescribeRefreshSchemasStatusAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeRefreshSchemasStatus, __VA_ARGS__)
#define DescribeRefreshSchemasStatusCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeRefreshSchemasStatus, REQUEST)

#define DescribeReplicationInstanceTaskLogsAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogs, __VA_ARGS__)
#define DescribeReplicationInstanceTaskLogsCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogs, REQUEST)

#define DescribeReplicationInstancesAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationInstances, __VA_ARGS__)
#define DescribeReplicationInstancesCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationInstances, REQUEST)

#define DescribeReplicationSubnetGroupsAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationSubnetGroups, __VA_ARGS__)
#define DescribeReplicationSubnetGroupsCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationSubnetGroups, REQUEST)

#define DescribeReplicationTaskAssessmentResultsAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResults, __VA_ARGS__)
#define DescribeReplicationTaskAssessmentResultsCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResults, REQUEST)

#define DescribeReplicationTaskAssessmentRunsAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentRuns, __VA_ARGS__)
#define DescribeReplicationTaskAssessmentRunsCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentRuns, REQUEST)

#define DescribeReplicationTaskIndividualAssessmentsAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationTaskIndividualAssessments, __VA_ARGS__)
#define DescribeReplicationTaskIndividualAssessmentsCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationTaskIndividualAssessments, REQUEST)

#define DescribeReplicationTasksAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationTasks, __VA_ARGS__)
#define DescribeReplicationTasksCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationTasks, REQUEST)

#define DescribeSchemasAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeSchemas, __VA_ARGS__)
#define DescribeSchemasCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeSchemas, REQUEST)

#define DescribeTableStatisticsAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::DescribeTableStatistics, __VA_ARGS__)
#define DescribeTableStatisticsCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::DescribeTableStatistics, REQUEST)

#define ImportCertificateAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::ImportCertificate, __VA_ARGS__)
#define ImportCertificateCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::ImportCertificate, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::ListTagsForResource, REQUEST)

#define ModifyEndpointAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::ModifyEndpoint, __VA_ARGS__)
#define ModifyEndpointCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::ModifyEndpoint, REQUEST)

#define ModifyEventSubscriptionAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::ModifyEventSubscription, __VA_ARGS__)
#define ModifyEventSubscriptionCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::ModifyEventSubscription, REQUEST)

#define ModifyReplicationInstanceAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::ModifyReplicationInstance, __VA_ARGS__)
#define ModifyReplicationInstanceCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::ModifyReplicationInstance, REQUEST)

#define ModifyReplicationSubnetGroupAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::ModifyReplicationSubnetGroup, __VA_ARGS__)
#define ModifyReplicationSubnetGroupCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::ModifyReplicationSubnetGroup, REQUEST)

#define ModifyReplicationTaskAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::ModifyReplicationTask, __VA_ARGS__)
#define ModifyReplicationTaskCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::ModifyReplicationTask, REQUEST)

#define MoveReplicationTaskAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::MoveReplicationTask, __VA_ARGS__)
#define MoveReplicationTaskCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::MoveReplicationTask, REQUEST)

#define RebootReplicationInstanceAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::RebootReplicationInstance, __VA_ARGS__)
#define RebootReplicationInstanceCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::RebootReplicationInstance, REQUEST)

#define RefreshSchemasAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::RefreshSchemas, __VA_ARGS__)
#define RefreshSchemasCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::RefreshSchemas, REQUEST)

#define ReloadTablesAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::ReloadTables, __VA_ARGS__)
#define ReloadTablesCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::ReloadTables, REQUEST)

#define RemoveTagsFromResourceAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::RemoveTagsFromResource, __VA_ARGS__)
#define RemoveTagsFromResourceCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::RemoveTagsFromResource, REQUEST)


#define StartReplicationTaskAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::StartReplicationTask, __VA_ARGS__)
#define StartReplicationTaskCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::StartReplicationTask, REQUEST)

#define StartReplicationTaskAssessmentAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::StartReplicationTaskAssessment, __VA_ARGS__)
#define StartReplicationTaskAssessmentCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::StartReplicationTaskAssessment, REQUEST)

#define StartReplicationTaskAssessmentRunAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::StartReplicationTaskAssessmentRun, __VA_ARGS__)
#define StartReplicationTaskAssessmentRunCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::StartReplicationTaskAssessmentRun, REQUEST)

#define StopReplicationTaskAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::StopReplicationTask, __VA_ARGS__)
#define StopReplicationTaskCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::StopReplicationTask, REQUEST)

#define TestConnectionAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::TestConnection, __VA_ARGS__)
#define TestConnectionCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::TestConnection, REQUEST)

#define UpdateSubscriptionsToEventBridgeAsync(...)  SubmitAsync(&DatabaseMigrationServiceClient::UpdateSubscriptionsToEventBridge, __VA_ARGS__)
#define UpdateSubscriptionsToEventBridgeCallable(REQUEST)  SubmitCallable(&DatabaseMigrationServiceClient::UpdateSubscriptionsToEventBridge, REQUEST)

