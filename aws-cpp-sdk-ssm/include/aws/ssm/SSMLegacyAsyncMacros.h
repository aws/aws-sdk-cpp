/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddTagsToResourceAsync(...)  SubmitAsync(&SSMClient::AddTagsToResource, __VA_ARGS__)
#define AddTagsToResourceCallable(REQUEST)  SubmitCallable(&SSMClient::AddTagsToResource, REQUEST)

#define AssociateOpsItemRelatedItemAsync(...)  SubmitAsync(&SSMClient::AssociateOpsItemRelatedItem, __VA_ARGS__)
#define AssociateOpsItemRelatedItemCallable(REQUEST)  SubmitCallable(&SSMClient::AssociateOpsItemRelatedItem, REQUEST)

#define CancelCommandAsync(...)  SubmitAsync(&SSMClient::CancelCommand, __VA_ARGS__)
#define CancelCommandCallable(REQUEST)  SubmitCallable(&SSMClient::CancelCommand, REQUEST)

#define CancelMaintenanceWindowExecutionAsync(...)  SubmitAsync(&SSMClient::CancelMaintenanceWindowExecution, __VA_ARGS__)
#define CancelMaintenanceWindowExecutionCallable(REQUEST)  SubmitCallable(&SSMClient::CancelMaintenanceWindowExecution, REQUEST)

#define CreateActivationAsync(...)  SubmitAsync(&SSMClient::CreateActivation, __VA_ARGS__)
#define CreateActivationCallable(REQUEST)  SubmitCallable(&SSMClient::CreateActivation, REQUEST)

#define CreateAssociationAsync(...)  SubmitAsync(&SSMClient::CreateAssociation, __VA_ARGS__)
#define CreateAssociationCallable(REQUEST)  SubmitCallable(&SSMClient::CreateAssociation, REQUEST)

#define CreateAssociationBatchAsync(...)  SubmitAsync(&SSMClient::CreateAssociationBatch, __VA_ARGS__)
#define CreateAssociationBatchCallable(REQUEST)  SubmitCallable(&SSMClient::CreateAssociationBatch, REQUEST)

#define CreateDocumentAsync(...)  SubmitAsync(&SSMClient::CreateDocument, __VA_ARGS__)
#define CreateDocumentCallable(REQUEST)  SubmitCallable(&SSMClient::CreateDocument, REQUEST)

#define CreateMaintenanceWindowAsync(...)  SubmitAsync(&SSMClient::CreateMaintenanceWindow, __VA_ARGS__)
#define CreateMaintenanceWindowCallable(REQUEST)  SubmitCallable(&SSMClient::CreateMaintenanceWindow, REQUEST)

#define CreateOpsItemAsync(...)  SubmitAsync(&SSMClient::CreateOpsItem, __VA_ARGS__)
#define CreateOpsItemCallable(REQUEST)  SubmitCallable(&SSMClient::CreateOpsItem, REQUEST)

#define CreateOpsMetadataAsync(...)  SubmitAsync(&SSMClient::CreateOpsMetadata, __VA_ARGS__)
#define CreateOpsMetadataCallable(REQUEST)  SubmitCallable(&SSMClient::CreateOpsMetadata, REQUEST)

#define CreatePatchBaselineAsync(...)  SubmitAsync(&SSMClient::CreatePatchBaseline, __VA_ARGS__)
#define CreatePatchBaselineCallable(REQUEST)  SubmitCallable(&SSMClient::CreatePatchBaseline, REQUEST)

#define CreateResourceDataSyncAsync(...)  SubmitAsync(&SSMClient::CreateResourceDataSync, __VA_ARGS__)
#define CreateResourceDataSyncCallable(REQUEST)  SubmitCallable(&SSMClient::CreateResourceDataSync, REQUEST)

#define DeleteActivationAsync(...)  SubmitAsync(&SSMClient::DeleteActivation, __VA_ARGS__)
#define DeleteActivationCallable(REQUEST)  SubmitCallable(&SSMClient::DeleteActivation, REQUEST)

#define DeleteAssociationAsync(...)  SubmitAsync(&SSMClient::DeleteAssociation, __VA_ARGS__)
#define DeleteAssociationCallable(REQUEST)  SubmitCallable(&SSMClient::DeleteAssociation, REQUEST)

#define DeleteDocumentAsync(...)  SubmitAsync(&SSMClient::DeleteDocument, __VA_ARGS__)
#define DeleteDocumentCallable(REQUEST)  SubmitCallable(&SSMClient::DeleteDocument, REQUEST)

#define DeleteInventoryAsync(...)  SubmitAsync(&SSMClient::DeleteInventory, __VA_ARGS__)
#define DeleteInventoryCallable(REQUEST)  SubmitCallable(&SSMClient::DeleteInventory, REQUEST)

#define DeleteMaintenanceWindowAsync(...)  SubmitAsync(&SSMClient::DeleteMaintenanceWindow, __VA_ARGS__)
#define DeleteMaintenanceWindowCallable(REQUEST)  SubmitCallable(&SSMClient::DeleteMaintenanceWindow, REQUEST)

#define DeleteOpsMetadataAsync(...)  SubmitAsync(&SSMClient::DeleteOpsMetadata, __VA_ARGS__)
#define DeleteOpsMetadataCallable(REQUEST)  SubmitCallable(&SSMClient::DeleteOpsMetadata, REQUEST)

#define DeleteParameterAsync(...)  SubmitAsync(&SSMClient::DeleteParameter, __VA_ARGS__)
#define DeleteParameterCallable(REQUEST)  SubmitCallable(&SSMClient::DeleteParameter, REQUEST)

#define DeleteParametersAsync(...)  SubmitAsync(&SSMClient::DeleteParameters, __VA_ARGS__)
#define DeleteParametersCallable(REQUEST)  SubmitCallable(&SSMClient::DeleteParameters, REQUEST)

#define DeletePatchBaselineAsync(...)  SubmitAsync(&SSMClient::DeletePatchBaseline, __VA_ARGS__)
#define DeletePatchBaselineCallable(REQUEST)  SubmitCallable(&SSMClient::DeletePatchBaseline, REQUEST)

#define DeleteResourceDataSyncAsync(...)  SubmitAsync(&SSMClient::DeleteResourceDataSync, __VA_ARGS__)
#define DeleteResourceDataSyncCallable(REQUEST)  SubmitCallable(&SSMClient::DeleteResourceDataSync, REQUEST)

#define DeleteResourcePolicyAsync(...)  SubmitAsync(&SSMClient::DeleteResourcePolicy, __VA_ARGS__)
#define DeleteResourcePolicyCallable(REQUEST)  SubmitCallable(&SSMClient::DeleteResourcePolicy, REQUEST)

#define DeregisterManagedInstanceAsync(...)  SubmitAsync(&SSMClient::DeregisterManagedInstance, __VA_ARGS__)
#define DeregisterManagedInstanceCallable(REQUEST)  SubmitCallable(&SSMClient::DeregisterManagedInstance, REQUEST)

#define DeregisterPatchBaselineForPatchGroupAsync(...)  SubmitAsync(&SSMClient::DeregisterPatchBaselineForPatchGroup, __VA_ARGS__)
#define DeregisterPatchBaselineForPatchGroupCallable(REQUEST)  SubmitCallable(&SSMClient::DeregisterPatchBaselineForPatchGroup, REQUEST)

#define DeregisterTargetFromMaintenanceWindowAsync(...)  SubmitAsync(&SSMClient::DeregisterTargetFromMaintenanceWindow, __VA_ARGS__)
#define DeregisterTargetFromMaintenanceWindowCallable(REQUEST)  SubmitCallable(&SSMClient::DeregisterTargetFromMaintenanceWindow, REQUEST)

#define DeregisterTaskFromMaintenanceWindowAsync(...)  SubmitAsync(&SSMClient::DeregisterTaskFromMaintenanceWindow, __VA_ARGS__)
#define DeregisterTaskFromMaintenanceWindowCallable(REQUEST)  SubmitCallable(&SSMClient::DeregisterTaskFromMaintenanceWindow, REQUEST)

#define DescribeActivationsAsync(...)  SubmitAsync(&SSMClient::DescribeActivations, __VA_ARGS__)
#define DescribeActivationsCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeActivations, REQUEST)

#define DescribeAssociationAsync(...)  SubmitAsync(&SSMClient::DescribeAssociation, __VA_ARGS__)
#define DescribeAssociationCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeAssociation, REQUEST)

#define DescribeAssociationExecutionTargetsAsync(...)  SubmitAsync(&SSMClient::DescribeAssociationExecutionTargets, __VA_ARGS__)
#define DescribeAssociationExecutionTargetsCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeAssociationExecutionTargets, REQUEST)

#define DescribeAssociationExecutionsAsync(...)  SubmitAsync(&SSMClient::DescribeAssociationExecutions, __VA_ARGS__)
#define DescribeAssociationExecutionsCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeAssociationExecutions, REQUEST)

#define DescribeAutomationExecutionsAsync(...)  SubmitAsync(&SSMClient::DescribeAutomationExecutions, __VA_ARGS__)
#define DescribeAutomationExecutionsCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeAutomationExecutions, REQUEST)

#define DescribeAutomationStepExecutionsAsync(...)  SubmitAsync(&SSMClient::DescribeAutomationStepExecutions, __VA_ARGS__)
#define DescribeAutomationStepExecutionsCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeAutomationStepExecutions, REQUEST)

#define DescribeAvailablePatchesAsync(...)  SubmitAsync(&SSMClient::DescribeAvailablePatches, __VA_ARGS__)
#define DescribeAvailablePatchesCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeAvailablePatches, REQUEST)

#define DescribeDocumentAsync(...)  SubmitAsync(&SSMClient::DescribeDocument, __VA_ARGS__)
#define DescribeDocumentCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeDocument, REQUEST)

#define DescribeDocumentPermissionAsync(...)  SubmitAsync(&SSMClient::DescribeDocumentPermission, __VA_ARGS__)
#define DescribeDocumentPermissionCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeDocumentPermission, REQUEST)

#define DescribeEffectiveInstanceAssociationsAsync(...)  SubmitAsync(&SSMClient::DescribeEffectiveInstanceAssociations, __VA_ARGS__)
#define DescribeEffectiveInstanceAssociationsCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeEffectiveInstanceAssociations, REQUEST)

#define DescribeEffectivePatchesForPatchBaselineAsync(...)  SubmitAsync(&SSMClient::DescribeEffectivePatchesForPatchBaseline, __VA_ARGS__)
#define DescribeEffectivePatchesForPatchBaselineCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeEffectivePatchesForPatchBaseline, REQUEST)

#define DescribeInstanceAssociationsStatusAsync(...)  SubmitAsync(&SSMClient::DescribeInstanceAssociationsStatus, __VA_ARGS__)
#define DescribeInstanceAssociationsStatusCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeInstanceAssociationsStatus, REQUEST)

#define DescribeInstanceInformationAsync(...)  SubmitAsync(&SSMClient::DescribeInstanceInformation, __VA_ARGS__)
#define DescribeInstanceInformationCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeInstanceInformation, REQUEST)

#define DescribeInstancePatchStatesAsync(...)  SubmitAsync(&SSMClient::DescribeInstancePatchStates, __VA_ARGS__)
#define DescribeInstancePatchStatesCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeInstancePatchStates, REQUEST)

#define DescribeInstancePatchStatesForPatchGroupAsync(...)  SubmitAsync(&SSMClient::DescribeInstancePatchStatesForPatchGroup, __VA_ARGS__)
#define DescribeInstancePatchStatesForPatchGroupCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeInstancePatchStatesForPatchGroup, REQUEST)

#define DescribeInstancePatchesAsync(...)  SubmitAsync(&SSMClient::DescribeInstancePatches, __VA_ARGS__)
#define DescribeInstancePatchesCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeInstancePatches, REQUEST)

#define DescribeInventoryDeletionsAsync(...)  SubmitAsync(&SSMClient::DescribeInventoryDeletions, __VA_ARGS__)
#define DescribeInventoryDeletionsCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeInventoryDeletions, REQUEST)

#define DescribeMaintenanceWindowExecutionTaskInvocationsAsync(...)  SubmitAsync(&SSMClient::DescribeMaintenanceWindowExecutionTaskInvocations, __VA_ARGS__)
#define DescribeMaintenanceWindowExecutionTaskInvocationsCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeMaintenanceWindowExecutionTaskInvocations, REQUEST)

#define DescribeMaintenanceWindowExecutionTasksAsync(...)  SubmitAsync(&SSMClient::DescribeMaintenanceWindowExecutionTasks, __VA_ARGS__)
#define DescribeMaintenanceWindowExecutionTasksCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeMaintenanceWindowExecutionTasks, REQUEST)

#define DescribeMaintenanceWindowExecutionsAsync(...)  SubmitAsync(&SSMClient::DescribeMaintenanceWindowExecutions, __VA_ARGS__)
#define DescribeMaintenanceWindowExecutionsCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeMaintenanceWindowExecutions, REQUEST)

#define DescribeMaintenanceWindowScheduleAsync(...)  SubmitAsync(&SSMClient::DescribeMaintenanceWindowSchedule, __VA_ARGS__)
#define DescribeMaintenanceWindowScheduleCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeMaintenanceWindowSchedule, REQUEST)

#define DescribeMaintenanceWindowTargetsAsync(...)  SubmitAsync(&SSMClient::DescribeMaintenanceWindowTargets, __VA_ARGS__)
#define DescribeMaintenanceWindowTargetsCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeMaintenanceWindowTargets, REQUEST)

#define DescribeMaintenanceWindowTasksAsync(...)  SubmitAsync(&SSMClient::DescribeMaintenanceWindowTasks, __VA_ARGS__)
#define DescribeMaintenanceWindowTasksCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeMaintenanceWindowTasks, REQUEST)

#define DescribeMaintenanceWindowsAsync(...)  SubmitAsync(&SSMClient::DescribeMaintenanceWindows, __VA_ARGS__)
#define DescribeMaintenanceWindowsCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeMaintenanceWindows, REQUEST)

#define DescribeMaintenanceWindowsForTargetAsync(...)  SubmitAsync(&SSMClient::DescribeMaintenanceWindowsForTarget, __VA_ARGS__)
#define DescribeMaintenanceWindowsForTargetCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeMaintenanceWindowsForTarget, REQUEST)

#define DescribeOpsItemsAsync(...)  SubmitAsync(&SSMClient::DescribeOpsItems, __VA_ARGS__)
#define DescribeOpsItemsCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeOpsItems, REQUEST)

#define DescribeParametersAsync(...)  SubmitAsync(&SSMClient::DescribeParameters, __VA_ARGS__)
#define DescribeParametersCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeParameters, REQUEST)

#define DescribePatchBaselinesAsync(...)  SubmitAsync(&SSMClient::DescribePatchBaselines, __VA_ARGS__)
#define DescribePatchBaselinesCallable(REQUEST)  SubmitCallable(&SSMClient::DescribePatchBaselines, REQUEST)

#define DescribePatchGroupStateAsync(...)  SubmitAsync(&SSMClient::DescribePatchGroupState, __VA_ARGS__)
#define DescribePatchGroupStateCallable(REQUEST)  SubmitCallable(&SSMClient::DescribePatchGroupState, REQUEST)

#define DescribePatchGroupsAsync(...)  SubmitAsync(&SSMClient::DescribePatchGroups, __VA_ARGS__)
#define DescribePatchGroupsCallable(REQUEST)  SubmitCallable(&SSMClient::DescribePatchGroups, REQUEST)

#define DescribePatchPropertiesAsync(...)  SubmitAsync(&SSMClient::DescribePatchProperties, __VA_ARGS__)
#define DescribePatchPropertiesCallable(REQUEST)  SubmitCallable(&SSMClient::DescribePatchProperties, REQUEST)

#define DescribeSessionsAsync(...)  SubmitAsync(&SSMClient::DescribeSessions, __VA_ARGS__)
#define DescribeSessionsCallable(REQUEST)  SubmitCallable(&SSMClient::DescribeSessions, REQUEST)

#define DisassociateOpsItemRelatedItemAsync(...)  SubmitAsync(&SSMClient::DisassociateOpsItemRelatedItem, __VA_ARGS__)
#define DisassociateOpsItemRelatedItemCallable(REQUEST)  SubmitCallable(&SSMClient::DisassociateOpsItemRelatedItem, REQUEST)

#define GetAutomationExecutionAsync(...)  SubmitAsync(&SSMClient::GetAutomationExecution, __VA_ARGS__)
#define GetAutomationExecutionCallable(REQUEST)  SubmitCallable(&SSMClient::GetAutomationExecution, REQUEST)

#define GetCalendarStateAsync(...)  SubmitAsync(&SSMClient::GetCalendarState, __VA_ARGS__)
#define GetCalendarStateCallable(REQUEST)  SubmitCallable(&SSMClient::GetCalendarState, REQUEST)

#define GetCommandInvocationAsync(...)  SubmitAsync(&SSMClient::GetCommandInvocation, __VA_ARGS__)
#define GetCommandInvocationCallable(REQUEST)  SubmitCallable(&SSMClient::GetCommandInvocation, REQUEST)

#define GetConnectionStatusAsync(...)  SubmitAsync(&SSMClient::GetConnectionStatus, __VA_ARGS__)
#define GetConnectionStatusCallable(REQUEST)  SubmitCallable(&SSMClient::GetConnectionStatus, REQUEST)

#define GetDefaultPatchBaselineAsync(...)  SubmitAsync(&SSMClient::GetDefaultPatchBaseline, __VA_ARGS__)
#define GetDefaultPatchBaselineCallable(REQUEST)  SubmitCallable(&SSMClient::GetDefaultPatchBaseline, REQUEST)

#define GetDeployablePatchSnapshotForInstanceAsync(...)  SubmitAsync(&SSMClient::GetDeployablePatchSnapshotForInstance, __VA_ARGS__)
#define GetDeployablePatchSnapshotForInstanceCallable(REQUEST)  SubmitCallable(&SSMClient::GetDeployablePatchSnapshotForInstance, REQUEST)

#define GetDocumentAsync(...)  SubmitAsync(&SSMClient::GetDocument, __VA_ARGS__)
#define GetDocumentCallable(REQUEST)  SubmitCallable(&SSMClient::GetDocument, REQUEST)

#define GetInventoryAsync(...)  SubmitAsync(&SSMClient::GetInventory, __VA_ARGS__)
#define GetInventoryCallable(REQUEST)  SubmitCallable(&SSMClient::GetInventory, REQUEST)

#define GetInventorySchemaAsync(...)  SubmitAsync(&SSMClient::GetInventorySchema, __VA_ARGS__)
#define GetInventorySchemaCallable(REQUEST)  SubmitCallable(&SSMClient::GetInventorySchema, REQUEST)

#define GetMaintenanceWindowAsync(...)  SubmitAsync(&SSMClient::GetMaintenanceWindow, __VA_ARGS__)
#define GetMaintenanceWindowCallable(REQUEST)  SubmitCallable(&SSMClient::GetMaintenanceWindow, REQUEST)

#define GetMaintenanceWindowExecutionAsync(...)  SubmitAsync(&SSMClient::GetMaintenanceWindowExecution, __VA_ARGS__)
#define GetMaintenanceWindowExecutionCallable(REQUEST)  SubmitCallable(&SSMClient::GetMaintenanceWindowExecution, REQUEST)

#define GetMaintenanceWindowExecutionTaskAsync(...)  SubmitAsync(&SSMClient::GetMaintenanceWindowExecutionTask, __VA_ARGS__)
#define GetMaintenanceWindowExecutionTaskCallable(REQUEST)  SubmitCallable(&SSMClient::GetMaintenanceWindowExecutionTask, REQUEST)

#define GetMaintenanceWindowExecutionTaskInvocationAsync(...)  SubmitAsync(&SSMClient::GetMaintenanceWindowExecutionTaskInvocation, __VA_ARGS__)
#define GetMaintenanceWindowExecutionTaskInvocationCallable(REQUEST)  SubmitCallable(&SSMClient::GetMaintenanceWindowExecutionTaskInvocation, REQUEST)

#define GetMaintenanceWindowTaskAsync(...)  SubmitAsync(&SSMClient::GetMaintenanceWindowTask, __VA_ARGS__)
#define GetMaintenanceWindowTaskCallable(REQUEST)  SubmitCallable(&SSMClient::GetMaintenanceWindowTask, REQUEST)

#define GetOpsItemAsync(...)  SubmitAsync(&SSMClient::GetOpsItem, __VA_ARGS__)
#define GetOpsItemCallable(REQUEST)  SubmitCallable(&SSMClient::GetOpsItem, REQUEST)

#define GetOpsMetadataAsync(...)  SubmitAsync(&SSMClient::GetOpsMetadata, __VA_ARGS__)
#define GetOpsMetadataCallable(REQUEST)  SubmitCallable(&SSMClient::GetOpsMetadata, REQUEST)

#define GetOpsSummaryAsync(...)  SubmitAsync(&SSMClient::GetOpsSummary, __VA_ARGS__)
#define GetOpsSummaryCallable(REQUEST)  SubmitCallable(&SSMClient::GetOpsSummary, REQUEST)

#define GetParameterAsync(...)  SubmitAsync(&SSMClient::GetParameter, __VA_ARGS__)
#define GetParameterCallable(REQUEST)  SubmitCallable(&SSMClient::GetParameter, REQUEST)

#define GetParameterHistoryAsync(...)  SubmitAsync(&SSMClient::GetParameterHistory, __VA_ARGS__)
#define GetParameterHistoryCallable(REQUEST)  SubmitCallable(&SSMClient::GetParameterHistory, REQUEST)

#define GetParametersAsync(...)  SubmitAsync(&SSMClient::GetParameters, __VA_ARGS__)
#define GetParametersCallable(REQUEST)  SubmitCallable(&SSMClient::GetParameters, REQUEST)

#define GetParametersByPathAsync(...)  SubmitAsync(&SSMClient::GetParametersByPath, __VA_ARGS__)
#define GetParametersByPathCallable(REQUEST)  SubmitCallable(&SSMClient::GetParametersByPath, REQUEST)

#define GetPatchBaselineAsync(...)  SubmitAsync(&SSMClient::GetPatchBaseline, __VA_ARGS__)
#define GetPatchBaselineCallable(REQUEST)  SubmitCallable(&SSMClient::GetPatchBaseline, REQUEST)

#define GetPatchBaselineForPatchGroupAsync(...)  SubmitAsync(&SSMClient::GetPatchBaselineForPatchGroup, __VA_ARGS__)
#define GetPatchBaselineForPatchGroupCallable(REQUEST)  SubmitCallable(&SSMClient::GetPatchBaselineForPatchGroup, REQUEST)

#define GetResourcePoliciesAsync(...)  SubmitAsync(&SSMClient::GetResourcePolicies, __VA_ARGS__)
#define GetResourcePoliciesCallable(REQUEST)  SubmitCallable(&SSMClient::GetResourcePolicies, REQUEST)

#define GetServiceSettingAsync(...)  SubmitAsync(&SSMClient::GetServiceSetting, __VA_ARGS__)
#define GetServiceSettingCallable(REQUEST)  SubmitCallable(&SSMClient::GetServiceSetting, REQUEST)

#define LabelParameterVersionAsync(...)  SubmitAsync(&SSMClient::LabelParameterVersion, __VA_ARGS__)
#define LabelParameterVersionCallable(REQUEST)  SubmitCallable(&SSMClient::LabelParameterVersion, REQUEST)

#define ListAssociationVersionsAsync(...)  SubmitAsync(&SSMClient::ListAssociationVersions, __VA_ARGS__)
#define ListAssociationVersionsCallable(REQUEST)  SubmitCallable(&SSMClient::ListAssociationVersions, REQUEST)

#define ListAssociationsAsync(...)  SubmitAsync(&SSMClient::ListAssociations, __VA_ARGS__)
#define ListAssociationsCallable(REQUEST)  SubmitCallable(&SSMClient::ListAssociations, REQUEST)

#define ListCommandInvocationsAsync(...)  SubmitAsync(&SSMClient::ListCommandInvocations, __VA_ARGS__)
#define ListCommandInvocationsCallable(REQUEST)  SubmitCallable(&SSMClient::ListCommandInvocations, REQUEST)

#define ListCommandsAsync(...)  SubmitAsync(&SSMClient::ListCommands, __VA_ARGS__)
#define ListCommandsCallable(REQUEST)  SubmitCallable(&SSMClient::ListCommands, REQUEST)

#define ListComplianceItemsAsync(...)  SubmitAsync(&SSMClient::ListComplianceItems, __VA_ARGS__)
#define ListComplianceItemsCallable(REQUEST)  SubmitCallable(&SSMClient::ListComplianceItems, REQUEST)

#define ListComplianceSummariesAsync(...)  SubmitAsync(&SSMClient::ListComplianceSummaries, __VA_ARGS__)
#define ListComplianceSummariesCallable(REQUEST)  SubmitCallable(&SSMClient::ListComplianceSummaries, REQUEST)

#define ListDocumentMetadataHistoryAsync(...)  SubmitAsync(&SSMClient::ListDocumentMetadataHistory, __VA_ARGS__)
#define ListDocumentMetadataHistoryCallable(REQUEST)  SubmitCallable(&SSMClient::ListDocumentMetadataHistory, REQUEST)

#define ListDocumentVersionsAsync(...)  SubmitAsync(&SSMClient::ListDocumentVersions, __VA_ARGS__)
#define ListDocumentVersionsCallable(REQUEST)  SubmitCallable(&SSMClient::ListDocumentVersions, REQUEST)

#define ListDocumentsAsync(...)  SubmitAsync(&SSMClient::ListDocuments, __VA_ARGS__)
#define ListDocumentsCallable(REQUEST)  SubmitCallable(&SSMClient::ListDocuments, REQUEST)

#define ListInventoryEntriesAsync(...)  SubmitAsync(&SSMClient::ListInventoryEntries, __VA_ARGS__)
#define ListInventoryEntriesCallable(REQUEST)  SubmitCallable(&SSMClient::ListInventoryEntries, REQUEST)

#define ListOpsItemEventsAsync(...)  SubmitAsync(&SSMClient::ListOpsItemEvents, __VA_ARGS__)
#define ListOpsItemEventsCallable(REQUEST)  SubmitCallable(&SSMClient::ListOpsItemEvents, REQUEST)

#define ListOpsItemRelatedItemsAsync(...)  SubmitAsync(&SSMClient::ListOpsItemRelatedItems, __VA_ARGS__)
#define ListOpsItemRelatedItemsCallable(REQUEST)  SubmitCallable(&SSMClient::ListOpsItemRelatedItems, REQUEST)

#define ListOpsMetadataAsync(...)  SubmitAsync(&SSMClient::ListOpsMetadata, __VA_ARGS__)
#define ListOpsMetadataCallable(REQUEST)  SubmitCallable(&SSMClient::ListOpsMetadata, REQUEST)

#define ListResourceComplianceSummariesAsync(...)  SubmitAsync(&SSMClient::ListResourceComplianceSummaries, __VA_ARGS__)
#define ListResourceComplianceSummariesCallable(REQUEST)  SubmitCallable(&SSMClient::ListResourceComplianceSummaries, REQUEST)

#define ListResourceDataSyncAsync(...)  SubmitAsync(&SSMClient::ListResourceDataSync, __VA_ARGS__)
#define ListResourceDataSyncCallable(REQUEST)  SubmitCallable(&SSMClient::ListResourceDataSync, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SSMClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SSMClient::ListTagsForResource, REQUEST)

#define ModifyDocumentPermissionAsync(...)  SubmitAsync(&SSMClient::ModifyDocumentPermission, __VA_ARGS__)
#define ModifyDocumentPermissionCallable(REQUEST)  SubmitCallable(&SSMClient::ModifyDocumentPermission, REQUEST)

#define PutComplianceItemsAsync(...)  SubmitAsync(&SSMClient::PutComplianceItems, __VA_ARGS__)
#define PutComplianceItemsCallable(REQUEST)  SubmitCallable(&SSMClient::PutComplianceItems, REQUEST)

#define PutInventoryAsync(...)  SubmitAsync(&SSMClient::PutInventory, __VA_ARGS__)
#define PutInventoryCallable(REQUEST)  SubmitCallable(&SSMClient::PutInventory, REQUEST)

#define PutParameterAsync(...)  SubmitAsync(&SSMClient::PutParameter, __VA_ARGS__)
#define PutParameterCallable(REQUEST)  SubmitCallable(&SSMClient::PutParameter, REQUEST)

#define PutResourcePolicyAsync(...)  SubmitAsync(&SSMClient::PutResourcePolicy, __VA_ARGS__)
#define PutResourcePolicyCallable(REQUEST)  SubmitCallable(&SSMClient::PutResourcePolicy, REQUEST)

#define RegisterDefaultPatchBaselineAsync(...)  SubmitAsync(&SSMClient::RegisterDefaultPatchBaseline, __VA_ARGS__)
#define RegisterDefaultPatchBaselineCallable(REQUEST)  SubmitCallable(&SSMClient::RegisterDefaultPatchBaseline, REQUEST)

#define RegisterPatchBaselineForPatchGroupAsync(...)  SubmitAsync(&SSMClient::RegisterPatchBaselineForPatchGroup, __VA_ARGS__)
#define RegisterPatchBaselineForPatchGroupCallable(REQUEST)  SubmitCallable(&SSMClient::RegisterPatchBaselineForPatchGroup, REQUEST)

#define RegisterTargetWithMaintenanceWindowAsync(...)  SubmitAsync(&SSMClient::RegisterTargetWithMaintenanceWindow, __VA_ARGS__)
#define RegisterTargetWithMaintenanceWindowCallable(REQUEST)  SubmitCallable(&SSMClient::RegisterTargetWithMaintenanceWindow, REQUEST)

#define RegisterTaskWithMaintenanceWindowAsync(...)  SubmitAsync(&SSMClient::RegisterTaskWithMaintenanceWindow, __VA_ARGS__)
#define RegisterTaskWithMaintenanceWindowCallable(REQUEST)  SubmitCallable(&SSMClient::RegisterTaskWithMaintenanceWindow, REQUEST)

#define RemoveTagsFromResourceAsync(...)  SubmitAsync(&SSMClient::RemoveTagsFromResource, __VA_ARGS__)
#define RemoveTagsFromResourceCallable(REQUEST)  SubmitCallable(&SSMClient::RemoveTagsFromResource, REQUEST)

#define ResetServiceSettingAsync(...)  SubmitAsync(&SSMClient::ResetServiceSetting, __VA_ARGS__)
#define ResetServiceSettingCallable(REQUEST)  SubmitCallable(&SSMClient::ResetServiceSetting, REQUEST)

#define ResumeSessionAsync(...)  SubmitAsync(&SSMClient::ResumeSession, __VA_ARGS__)
#define ResumeSessionCallable(REQUEST)  SubmitCallable(&SSMClient::ResumeSession, REQUEST)

#define SendAutomationSignalAsync(...)  SubmitAsync(&SSMClient::SendAutomationSignal, __VA_ARGS__)
#define SendAutomationSignalCallable(REQUEST)  SubmitCallable(&SSMClient::SendAutomationSignal, REQUEST)

#define SendCommandAsync(...)  SubmitAsync(&SSMClient::SendCommand, __VA_ARGS__)
#define SendCommandCallable(REQUEST)  SubmitCallable(&SSMClient::SendCommand, REQUEST)

#define StartAssociationsOnceAsync(...)  SubmitAsync(&SSMClient::StartAssociationsOnce, __VA_ARGS__)
#define StartAssociationsOnceCallable(REQUEST)  SubmitCallable(&SSMClient::StartAssociationsOnce, REQUEST)

#define StartAutomationExecutionAsync(...)  SubmitAsync(&SSMClient::StartAutomationExecution, __VA_ARGS__)
#define StartAutomationExecutionCallable(REQUEST)  SubmitCallable(&SSMClient::StartAutomationExecution, REQUEST)

#define StartChangeRequestExecutionAsync(...)  SubmitAsync(&SSMClient::StartChangeRequestExecution, __VA_ARGS__)
#define StartChangeRequestExecutionCallable(REQUEST)  SubmitCallable(&SSMClient::StartChangeRequestExecution, REQUEST)

#define StartSessionAsync(...)  SubmitAsync(&SSMClient::StartSession, __VA_ARGS__)
#define StartSessionCallable(REQUEST)  SubmitCallable(&SSMClient::StartSession, REQUEST)

#define StopAutomationExecutionAsync(...)  SubmitAsync(&SSMClient::StopAutomationExecution, __VA_ARGS__)
#define StopAutomationExecutionCallable(REQUEST)  SubmitCallable(&SSMClient::StopAutomationExecution, REQUEST)

#define TerminateSessionAsync(...)  SubmitAsync(&SSMClient::TerminateSession, __VA_ARGS__)
#define TerminateSessionCallable(REQUEST)  SubmitCallable(&SSMClient::TerminateSession, REQUEST)

#define UnlabelParameterVersionAsync(...)  SubmitAsync(&SSMClient::UnlabelParameterVersion, __VA_ARGS__)
#define UnlabelParameterVersionCallable(REQUEST)  SubmitCallable(&SSMClient::UnlabelParameterVersion, REQUEST)

#define UpdateAssociationAsync(...)  SubmitAsync(&SSMClient::UpdateAssociation, __VA_ARGS__)
#define UpdateAssociationCallable(REQUEST)  SubmitCallable(&SSMClient::UpdateAssociation, REQUEST)

#define UpdateAssociationStatusAsync(...)  SubmitAsync(&SSMClient::UpdateAssociationStatus, __VA_ARGS__)
#define UpdateAssociationStatusCallable(REQUEST)  SubmitCallable(&SSMClient::UpdateAssociationStatus, REQUEST)

#define UpdateDocumentAsync(...)  SubmitAsync(&SSMClient::UpdateDocument, __VA_ARGS__)
#define UpdateDocumentCallable(REQUEST)  SubmitCallable(&SSMClient::UpdateDocument, REQUEST)

#define UpdateDocumentDefaultVersionAsync(...)  SubmitAsync(&SSMClient::UpdateDocumentDefaultVersion, __VA_ARGS__)
#define UpdateDocumentDefaultVersionCallable(REQUEST)  SubmitCallable(&SSMClient::UpdateDocumentDefaultVersion, REQUEST)

#define UpdateDocumentMetadataAsync(...)  SubmitAsync(&SSMClient::UpdateDocumentMetadata, __VA_ARGS__)
#define UpdateDocumentMetadataCallable(REQUEST)  SubmitCallable(&SSMClient::UpdateDocumentMetadata, REQUEST)

#define UpdateMaintenanceWindowAsync(...)  SubmitAsync(&SSMClient::UpdateMaintenanceWindow, __VA_ARGS__)
#define UpdateMaintenanceWindowCallable(REQUEST)  SubmitCallable(&SSMClient::UpdateMaintenanceWindow, REQUEST)

#define UpdateMaintenanceWindowTargetAsync(...)  SubmitAsync(&SSMClient::UpdateMaintenanceWindowTarget, __VA_ARGS__)
#define UpdateMaintenanceWindowTargetCallable(REQUEST)  SubmitCallable(&SSMClient::UpdateMaintenanceWindowTarget, REQUEST)

#define UpdateMaintenanceWindowTaskAsync(...)  SubmitAsync(&SSMClient::UpdateMaintenanceWindowTask, __VA_ARGS__)
#define UpdateMaintenanceWindowTaskCallable(REQUEST)  SubmitCallable(&SSMClient::UpdateMaintenanceWindowTask, REQUEST)

#define UpdateManagedInstanceRoleAsync(...)  SubmitAsync(&SSMClient::UpdateManagedInstanceRole, __VA_ARGS__)
#define UpdateManagedInstanceRoleCallable(REQUEST)  SubmitCallable(&SSMClient::UpdateManagedInstanceRole, REQUEST)

#define UpdateOpsItemAsync(...)  SubmitAsync(&SSMClient::UpdateOpsItem, __VA_ARGS__)
#define UpdateOpsItemCallable(REQUEST)  SubmitCallable(&SSMClient::UpdateOpsItem, REQUEST)

#define UpdateOpsMetadataAsync(...)  SubmitAsync(&SSMClient::UpdateOpsMetadata, __VA_ARGS__)
#define UpdateOpsMetadataCallable(REQUEST)  SubmitCallable(&SSMClient::UpdateOpsMetadata, REQUEST)

#define UpdatePatchBaselineAsync(...)  SubmitAsync(&SSMClient::UpdatePatchBaseline, __VA_ARGS__)
#define UpdatePatchBaselineCallable(REQUEST)  SubmitCallable(&SSMClient::UpdatePatchBaseline, REQUEST)

#define UpdateResourceDataSyncAsync(...)  SubmitAsync(&SSMClient::UpdateResourceDataSync, __VA_ARGS__)
#define UpdateResourceDataSyncCallable(REQUEST)  SubmitCallable(&SSMClient::UpdateResourceDataSync, REQUEST)

#define UpdateServiceSettingAsync(...)  SubmitAsync(&SSMClient::UpdateServiceSetting, __VA_ARGS__)
#define UpdateServiceSettingCallable(REQUEST)  SubmitCallable(&SSMClient::UpdateServiceSetting, REQUEST)

