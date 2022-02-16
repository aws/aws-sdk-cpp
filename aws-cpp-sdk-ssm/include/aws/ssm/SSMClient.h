/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/AddTagsToResourceResult.h>
#include <aws/ssm/model/AssociateOpsItemRelatedItemResult.h>
#include <aws/ssm/model/CancelCommandResult.h>
#include <aws/ssm/model/CancelMaintenanceWindowExecutionResult.h>
#include <aws/ssm/model/CreateActivationResult.h>
#include <aws/ssm/model/CreateAssociationResult.h>
#include <aws/ssm/model/CreateAssociationBatchResult.h>
#include <aws/ssm/model/CreateDocumentResult.h>
#include <aws/ssm/model/CreateMaintenanceWindowResult.h>
#include <aws/ssm/model/CreateOpsItemResult.h>
#include <aws/ssm/model/CreateOpsMetadataResult.h>
#include <aws/ssm/model/CreatePatchBaselineResult.h>
#include <aws/ssm/model/CreateResourceDataSyncResult.h>
#include <aws/ssm/model/DeleteActivationResult.h>
#include <aws/ssm/model/DeleteAssociationResult.h>
#include <aws/ssm/model/DeleteDocumentResult.h>
#include <aws/ssm/model/DeleteInventoryResult.h>
#include <aws/ssm/model/DeleteMaintenanceWindowResult.h>
#include <aws/ssm/model/DeleteOpsMetadataResult.h>
#include <aws/ssm/model/DeleteParameterResult.h>
#include <aws/ssm/model/DeleteParametersResult.h>
#include <aws/ssm/model/DeletePatchBaselineResult.h>
#include <aws/ssm/model/DeleteResourceDataSyncResult.h>
#include <aws/ssm/model/DeregisterManagedInstanceResult.h>
#include <aws/ssm/model/DeregisterPatchBaselineForPatchGroupResult.h>
#include <aws/ssm/model/DeregisterTargetFromMaintenanceWindowResult.h>
#include <aws/ssm/model/DeregisterTaskFromMaintenanceWindowResult.h>
#include <aws/ssm/model/DescribeActivationsResult.h>
#include <aws/ssm/model/DescribeAssociationResult.h>
#include <aws/ssm/model/DescribeAssociationExecutionTargetsResult.h>
#include <aws/ssm/model/DescribeAssociationExecutionsResult.h>
#include <aws/ssm/model/DescribeAutomationExecutionsResult.h>
#include <aws/ssm/model/DescribeAutomationStepExecutionsResult.h>
#include <aws/ssm/model/DescribeAvailablePatchesResult.h>
#include <aws/ssm/model/DescribeDocumentResult.h>
#include <aws/ssm/model/DescribeDocumentPermissionResult.h>
#include <aws/ssm/model/DescribeEffectiveInstanceAssociationsResult.h>
#include <aws/ssm/model/DescribeEffectivePatchesForPatchBaselineResult.h>
#include <aws/ssm/model/DescribeInstanceAssociationsStatusResult.h>
#include <aws/ssm/model/DescribeInstanceInformationResult.h>
#include <aws/ssm/model/DescribeInstancePatchStatesResult.h>
#include <aws/ssm/model/DescribeInstancePatchStatesForPatchGroupResult.h>
#include <aws/ssm/model/DescribeInstancePatchesResult.h>
#include <aws/ssm/model/DescribeInventoryDeletionsResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTaskInvocationsResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTasksResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionsResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowScheduleResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTargetsResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTasksResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowsResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowsForTargetResult.h>
#include <aws/ssm/model/DescribeOpsItemsResult.h>
#include <aws/ssm/model/DescribeParametersResult.h>
#include <aws/ssm/model/DescribePatchBaselinesResult.h>
#include <aws/ssm/model/DescribePatchGroupStateResult.h>
#include <aws/ssm/model/DescribePatchGroupsResult.h>
#include <aws/ssm/model/DescribePatchPropertiesResult.h>
#include <aws/ssm/model/DescribeSessionsResult.h>
#include <aws/ssm/model/DisassociateOpsItemRelatedItemResult.h>
#include <aws/ssm/model/GetAutomationExecutionResult.h>
#include <aws/ssm/model/GetCalendarStateResult.h>
#include <aws/ssm/model/GetCommandInvocationResult.h>
#include <aws/ssm/model/GetConnectionStatusResult.h>
#include <aws/ssm/model/GetDefaultPatchBaselineResult.h>
#include <aws/ssm/model/GetDeployablePatchSnapshotForInstanceResult.h>
#include <aws/ssm/model/GetDocumentResult.h>
#include <aws/ssm/model/GetInventoryResult.h>
#include <aws/ssm/model/GetInventorySchemaResult.h>
#include <aws/ssm/model/GetMaintenanceWindowResult.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionResult.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskResult.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskInvocationResult.h>
#include <aws/ssm/model/GetMaintenanceWindowTaskResult.h>
#include <aws/ssm/model/GetOpsItemResult.h>
#include <aws/ssm/model/GetOpsMetadataResult.h>
#include <aws/ssm/model/GetOpsSummaryResult.h>
#include <aws/ssm/model/GetParameterResult.h>
#include <aws/ssm/model/GetParameterHistoryResult.h>
#include <aws/ssm/model/GetParametersResult.h>
#include <aws/ssm/model/GetParametersByPathResult.h>
#include <aws/ssm/model/GetPatchBaselineResult.h>
#include <aws/ssm/model/GetPatchBaselineForPatchGroupResult.h>
#include <aws/ssm/model/GetServiceSettingResult.h>
#include <aws/ssm/model/LabelParameterVersionResult.h>
#include <aws/ssm/model/ListAssociationVersionsResult.h>
#include <aws/ssm/model/ListAssociationsResult.h>
#include <aws/ssm/model/ListCommandInvocationsResult.h>
#include <aws/ssm/model/ListCommandsResult.h>
#include <aws/ssm/model/ListComplianceItemsResult.h>
#include <aws/ssm/model/ListComplianceSummariesResult.h>
#include <aws/ssm/model/ListDocumentMetadataHistoryResult.h>
#include <aws/ssm/model/ListDocumentVersionsResult.h>
#include <aws/ssm/model/ListDocumentsResult.h>
#include <aws/ssm/model/ListInventoryEntriesResult.h>
#include <aws/ssm/model/ListOpsItemEventsResult.h>
#include <aws/ssm/model/ListOpsItemRelatedItemsResult.h>
#include <aws/ssm/model/ListOpsMetadataResult.h>
#include <aws/ssm/model/ListResourceComplianceSummariesResult.h>
#include <aws/ssm/model/ListResourceDataSyncResult.h>
#include <aws/ssm/model/ListTagsForResourceResult.h>
#include <aws/ssm/model/ModifyDocumentPermissionResult.h>
#include <aws/ssm/model/PutComplianceItemsResult.h>
#include <aws/ssm/model/PutInventoryResult.h>
#include <aws/ssm/model/PutParameterResult.h>
#include <aws/ssm/model/RegisterDefaultPatchBaselineResult.h>
#include <aws/ssm/model/RegisterPatchBaselineForPatchGroupResult.h>
#include <aws/ssm/model/RegisterTargetWithMaintenanceWindowResult.h>
#include <aws/ssm/model/RegisterTaskWithMaintenanceWindowResult.h>
#include <aws/ssm/model/RemoveTagsFromResourceResult.h>
#include <aws/ssm/model/ResetServiceSettingResult.h>
#include <aws/ssm/model/ResumeSessionResult.h>
#include <aws/ssm/model/SendAutomationSignalResult.h>
#include <aws/ssm/model/SendCommandResult.h>
#include <aws/ssm/model/StartAssociationsOnceResult.h>
#include <aws/ssm/model/StartAutomationExecutionResult.h>
#include <aws/ssm/model/StartChangeRequestExecutionResult.h>
#include <aws/ssm/model/StartSessionResult.h>
#include <aws/ssm/model/StopAutomationExecutionResult.h>
#include <aws/ssm/model/TerminateSessionResult.h>
#include <aws/ssm/model/UnlabelParameterVersionResult.h>
#include <aws/ssm/model/UpdateAssociationResult.h>
#include <aws/ssm/model/UpdateAssociationStatusResult.h>
#include <aws/ssm/model/UpdateDocumentResult.h>
#include <aws/ssm/model/UpdateDocumentDefaultVersionResult.h>
#include <aws/ssm/model/UpdateDocumentMetadataResult.h>
#include <aws/ssm/model/UpdateMaintenanceWindowResult.h>
#include <aws/ssm/model/UpdateMaintenanceWindowTargetResult.h>
#include <aws/ssm/model/UpdateMaintenanceWindowTaskResult.h>
#include <aws/ssm/model/UpdateManagedInstanceRoleResult.h>
#include <aws/ssm/model/UpdateOpsItemResult.h>
#include <aws/ssm/model/UpdateOpsMetadataResult.h>
#include <aws/ssm/model/UpdatePatchBaselineResult.h>
#include <aws/ssm/model/UpdateResourceDataSyncResult.h>
#include <aws/ssm/model/UpdateServiceSettingResult.h>
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

namespace SSM
{

namespace Model
{
        class AddTagsToResourceRequest;
        class AssociateOpsItemRelatedItemRequest;
        class CancelCommandRequest;
        class CancelMaintenanceWindowExecutionRequest;
        class CreateActivationRequest;
        class CreateAssociationRequest;
        class CreateAssociationBatchRequest;
        class CreateDocumentRequest;
        class CreateMaintenanceWindowRequest;
        class CreateOpsItemRequest;
        class CreateOpsMetadataRequest;
        class CreatePatchBaselineRequest;
        class CreateResourceDataSyncRequest;
        class DeleteActivationRequest;
        class DeleteAssociationRequest;
        class DeleteDocumentRequest;
        class DeleteInventoryRequest;
        class DeleteMaintenanceWindowRequest;
        class DeleteOpsMetadataRequest;
        class DeleteParameterRequest;
        class DeleteParametersRequest;
        class DeletePatchBaselineRequest;
        class DeleteResourceDataSyncRequest;
        class DeregisterManagedInstanceRequest;
        class DeregisterPatchBaselineForPatchGroupRequest;
        class DeregisterTargetFromMaintenanceWindowRequest;
        class DeregisterTaskFromMaintenanceWindowRequest;
        class DescribeActivationsRequest;
        class DescribeAssociationRequest;
        class DescribeAssociationExecutionTargetsRequest;
        class DescribeAssociationExecutionsRequest;
        class DescribeAutomationExecutionsRequest;
        class DescribeAutomationStepExecutionsRequest;
        class DescribeAvailablePatchesRequest;
        class DescribeDocumentRequest;
        class DescribeDocumentPermissionRequest;
        class DescribeEffectiveInstanceAssociationsRequest;
        class DescribeEffectivePatchesForPatchBaselineRequest;
        class DescribeInstanceAssociationsStatusRequest;
        class DescribeInstanceInformationRequest;
        class DescribeInstancePatchStatesRequest;
        class DescribeInstancePatchStatesForPatchGroupRequest;
        class DescribeInstancePatchesRequest;
        class DescribeInventoryDeletionsRequest;
        class DescribeMaintenanceWindowExecutionTaskInvocationsRequest;
        class DescribeMaintenanceWindowExecutionTasksRequest;
        class DescribeMaintenanceWindowExecutionsRequest;
        class DescribeMaintenanceWindowScheduleRequest;
        class DescribeMaintenanceWindowTargetsRequest;
        class DescribeMaintenanceWindowTasksRequest;
        class DescribeMaintenanceWindowsRequest;
        class DescribeMaintenanceWindowsForTargetRequest;
        class DescribeOpsItemsRequest;
        class DescribeParametersRequest;
        class DescribePatchBaselinesRequest;
        class DescribePatchGroupStateRequest;
        class DescribePatchGroupsRequest;
        class DescribePatchPropertiesRequest;
        class DescribeSessionsRequest;
        class DisassociateOpsItemRelatedItemRequest;
        class GetAutomationExecutionRequest;
        class GetCalendarStateRequest;
        class GetCommandInvocationRequest;
        class GetConnectionStatusRequest;
        class GetDefaultPatchBaselineRequest;
        class GetDeployablePatchSnapshotForInstanceRequest;
        class GetDocumentRequest;
        class GetInventoryRequest;
        class GetInventorySchemaRequest;
        class GetMaintenanceWindowRequest;
        class GetMaintenanceWindowExecutionRequest;
        class GetMaintenanceWindowExecutionTaskRequest;
        class GetMaintenanceWindowExecutionTaskInvocationRequest;
        class GetMaintenanceWindowTaskRequest;
        class GetOpsItemRequest;
        class GetOpsMetadataRequest;
        class GetOpsSummaryRequest;
        class GetParameterRequest;
        class GetParameterHistoryRequest;
        class GetParametersRequest;
        class GetParametersByPathRequest;
        class GetPatchBaselineRequest;
        class GetPatchBaselineForPatchGroupRequest;
        class GetServiceSettingRequest;
        class LabelParameterVersionRequest;
        class ListAssociationVersionsRequest;
        class ListAssociationsRequest;
        class ListCommandInvocationsRequest;
        class ListCommandsRequest;
        class ListComplianceItemsRequest;
        class ListComplianceSummariesRequest;
        class ListDocumentMetadataHistoryRequest;
        class ListDocumentVersionsRequest;
        class ListDocumentsRequest;
        class ListInventoryEntriesRequest;
        class ListOpsItemEventsRequest;
        class ListOpsItemRelatedItemsRequest;
        class ListOpsMetadataRequest;
        class ListResourceComplianceSummariesRequest;
        class ListResourceDataSyncRequest;
        class ListTagsForResourceRequest;
        class ModifyDocumentPermissionRequest;
        class PutComplianceItemsRequest;
        class PutInventoryRequest;
        class PutParameterRequest;
        class RegisterDefaultPatchBaselineRequest;
        class RegisterPatchBaselineForPatchGroupRequest;
        class RegisterTargetWithMaintenanceWindowRequest;
        class RegisterTaskWithMaintenanceWindowRequest;
        class RemoveTagsFromResourceRequest;
        class ResetServiceSettingRequest;
        class ResumeSessionRequest;
        class SendAutomationSignalRequest;
        class SendCommandRequest;
        class StartAssociationsOnceRequest;
        class StartAutomationExecutionRequest;
        class StartChangeRequestExecutionRequest;
        class StartSessionRequest;
        class StopAutomationExecutionRequest;
        class TerminateSessionRequest;
        class UnlabelParameterVersionRequest;
        class UpdateAssociationRequest;
        class UpdateAssociationStatusRequest;
        class UpdateDocumentRequest;
        class UpdateDocumentDefaultVersionRequest;
        class UpdateDocumentMetadataRequest;
        class UpdateMaintenanceWindowRequest;
        class UpdateMaintenanceWindowTargetRequest;
        class UpdateMaintenanceWindowTaskRequest;
        class UpdateManagedInstanceRoleRequest;
        class UpdateOpsItemRequest;
        class UpdateOpsMetadataRequest;
        class UpdatePatchBaselineRequest;
        class UpdateResourceDataSyncRequest;
        class UpdateServiceSettingRequest;

        typedef Aws::Utils::Outcome<AddTagsToResourceResult, SSMError> AddTagsToResourceOutcome;
        typedef Aws::Utils::Outcome<AssociateOpsItemRelatedItemResult, SSMError> AssociateOpsItemRelatedItemOutcome;
        typedef Aws::Utils::Outcome<CancelCommandResult, SSMError> CancelCommandOutcome;
        typedef Aws::Utils::Outcome<CancelMaintenanceWindowExecutionResult, SSMError> CancelMaintenanceWindowExecutionOutcome;
        typedef Aws::Utils::Outcome<CreateActivationResult, SSMError> CreateActivationOutcome;
        typedef Aws::Utils::Outcome<CreateAssociationResult, SSMError> CreateAssociationOutcome;
        typedef Aws::Utils::Outcome<CreateAssociationBatchResult, SSMError> CreateAssociationBatchOutcome;
        typedef Aws::Utils::Outcome<CreateDocumentResult, SSMError> CreateDocumentOutcome;
        typedef Aws::Utils::Outcome<CreateMaintenanceWindowResult, SSMError> CreateMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<CreateOpsItemResult, SSMError> CreateOpsItemOutcome;
        typedef Aws::Utils::Outcome<CreateOpsMetadataResult, SSMError> CreateOpsMetadataOutcome;
        typedef Aws::Utils::Outcome<CreatePatchBaselineResult, SSMError> CreatePatchBaselineOutcome;
        typedef Aws::Utils::Outcome<CreateResourceDataSyncResult, SSMError> CreateResourceDataSyncOutcome;
        typedef Aws::Utils::Outcome<DeleteActivationResult, SSMError> DeleteActivationOutcome;
        typedef Aws::Utils::Outcome<DeleteAssociationResult, SSMError> DeleteAssociationOutcome;
        typedef Aws::Utils::Outcome<DeleteDocumentResult, SSMError> DeleteDocumentOutcome;
        typedef Aws::Utils::Outcome<DeleteInventoryResult, SSMError> DeleteInventoryOutcome;
        typedef Aws::Utils::Outcome<DeleteMaintenanceWindowResult, SSMError> DeleteMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<DeleteOpsMetadataResult, SSMError> DeleteOpsMetadataOutcome;
        typedef Aws::Utils::Outcome<DeleteParameterResult, SSMError> DeleteParameterOutcome;
        typedef Aws::Utils::Outcome<DeleteParametersResult, SSMError> DeleteParametersOutcome;
        typedef Aws::Utils::Outcome<DeletePatchBaselineResult, SSMError> DeletePatchBaselineOutcome;
        typedef Aws::Utils::Outcome<DeleteResourceDataSyncResult, SSMError> DeleteResourceDataSyncOutcome;
        typedef Aws::Utils::Outcome<DeregisterManagedInstanceResult, SSMError> DeregisterManagedInstanceOutcome;
        typedef Aws::Utils::Outcome<DeregisterPatchBaselineForPatchGroupResult, SSMError> DeregisterPatchBaselineForPatchGroupOutcome;
        typedef Aws::Utils::Outcome<DeregisterTargetFromMaintenanceWindowResult, SSMError> DeregisterTargetFromMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<DeregisterTaskFromMaintenanceWindowResult, SSMError> DeregisterTaskFromMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<DescribeActivationsResult, SSMError> DescribeActivationsOutcome;
        typedef Aws::Utils::Outcome<DescribeAssociationResult, SSMError> DescribeAssociationOutcome;
        typedef Aws::Utils::Outcome<DescribeAssociationExecutionTargetsResult, SSMError> DescribeAssociationExecutionTargetsOutcome;
        typedef Aws::Utils::Outcome<DescribeAssociationExecutionsResult, SSMError> DescribeAssociationExecutionsOutcome;
        typedef Aws::Utils::Outcome<DescribeAutomationExecutionsResult, SSMError> DescribeAutomationExecutionsOutcome;
        typedef Aws::Utils::Outcome<DescribeAutomationStepExecutionsResult, SSMError> DescribeAutomationStepExecutionsOutcome;
        typedef Aws::Utils::Outcome<DescribeAvailablePatchesResult, SSMError> DescribeAvailablePatchesOutcome;
        typedef Aws::Utils::Outcome<DescribeDocumentResult, SSMError> DescribeDocumentOutcome;
        typedef Aws::Utils::Outcome<DescribeDocumentPermissionResult, SSMError> DescribeDocumentPermissionOutcome;
        typedef Aws::Utils::Outcome<DescribeEffectiveInstanceAssociationsResult, SSMError> DescribeEffectiveInstanceAssociationsOutcome;
        typedef Aws::Utils::Outcome<DescribeEffectivePatchesForPatchBaselineResult, SSMError> DescribeEffectivePatchesForPatchBaselineOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceAssociationsStatusResult, SSMError> DescribeInstanceAssociationsStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceInformationResult, SSMError> DescribeInstanceInformationOutcome;
        typedef Aws::Utils::Outcome<DescribeInstancePatchStatesResult, SSMError> DescribeInstancePatchStatesOutcome;
        typedef Aws::Utils::Outcome<DescribeInstancePatchStatesForPatchGroupResult, SSMError> DescribeInstancePatchStatesForPatchGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeInstancePatchesResult, SSMError> DescribeInstancePatchesOutcome;
        typedef Aws::Utils::Outcome<DescribeInventoryDeletionsResult, SSMError> DescribeInventoryDeletionsOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowExecutionTaskInvocationsResult, SSMError> DescribeMaintenanceWindowExecutionTaskInvocationsOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowExecutionTasksResult, SSMError> DescribeMaintenanceWindowExecutionTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowExecutionsResult, SSMError> DescribeMaintenanceWindowExecutionsOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowScheduleResult, SSMError> DescribeMaintenanceWindowScheduleOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowTargetsResult, SSMError> DescribeMaintenanceWindowTargetsOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowTasksResult, SSMError> DescribeMaintenanceWindowTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowsResult, SSMError> DescribeMaintenanceWindowsOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowsForTargetResult, SSMError> DescribeMaintenanceWindowsForTargetOutcome;
        typedef Aws::Utils::Outcome<DescribeOpsItemsResult, SSMError> DescribeOpsItemsOutcome;
        typedef Aws::Utils::Outcome<DescribeParametersResult, SSMError> DescribeParametersOutcome;
        typedef Aws::Utils::Outcome<DescribePatchBaselinesResult, SSMError> DescribePatchBaselinesOutcome;
        typedef Aws::Utils::Outcome<DescribePatchGroupStateResult, SSMError> DescribePatchGroupStateOutcome;
        typedef Aws::Utils::Outcome<DescribePatchGroupsResult, SSMError> DescribePatchGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribePatchPropertiesResult, SSMError> DescribePatchPropertiesOutcome;
        typedef Aws::Utils::Outcome<DescribeSessionsResult, SSMError> DescribeSessionsOutcome;
        typedef Aws::Utils::Outcome<DisassociateOpsItemRelatedItemResult, SSMError> DisassociateOpsItemRelatedItemOutcome;
        typedef Aws::Utils::Outcome<GetAutomationExecutionResult, SSMError> GetAutomationExecutionOutcome;
        typedef Aws::Utils::Outcome<GetCalendarStateResult, SSMError> GetCalendarStateOutcome;
        typedef Aws::Utils::Outcome<GetCommandInvocationResult, SSMError> GetCommandInvocationOutcome;
        typedef Aws::Utils::Outcome<GetConnectionStatusResult, SSMError> GetConnectionStatusOutcome;
        typedef Aws::Utils::Outcome<GetDefaultPatchBaselineResult, SSMError> GetDefaultPatchBaselineOutcome;
        typedef Aws::Utils::Outcome<GetDeployablePatchSnapshotForInstanceResult, SSMError> GetDeployablePatchSnapshotForInstanceOutcome;
        typedef Aws::Utils::Outcome<GetDocumentResult, SSMError> GetDocumentOutcome;
        typedef Aws::Utils::Outcome<GetInventoryResult, SSMError> GetInventoryOutcome;
        typedef Aws::Utils::Outcome<GetInventorySchemaResult, SSMError> GetInventorySchemaOutcome;
        typedef Aws::Utils::Outcome<GetMaintenanceWindowResult, SSMError> GetMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<GetMaintenanceWindowExecutionResult, SSMError> GetMaintenanceWindowExecutionOutcome;
        typedef Aws::Utils::Outcome<GetMaintenanceWindowExecutionTaskResult, SSMError> GetMaintenanceWindowExecutionTaskOutcome;
        typedef Aws::Utils::Outcome<GetMaintenanceWindowExecutionTaskInvocationResult, SSMError> GetMaintenanceWindowExecutionTaskInvocationOutcome;
        typedef Aws::Utils::Outcome<GetMaintenanceWindowTaskResult, SSMError> GetMaintenanceWindowTaskOutcome;
        typedef Aws::Utils::Outcome<GetOpsItemResult, SSMError> GetOpsItemOutcome;
        typedef Aws::Utils::Outcome<GetOpsMetadataResult, SSMError> GetOpsMetadataOutcome;
        typedef Aws::Utils::Outcome<GetOpsSummaryResult, SSMError> GetOpsSummaryOutcome;
        typedef Aws::Utils::Outcome<GetParameterResult, SSMError> GetParameterOutcome;
        typedef Aws::Utils::Outcome<GetParameterHistoryResult, SSMError> GetParameterHistoryOutcome;
        typedef Aws::Utils::Outcome<GetParametersResult, SSMError> GetParametersOutcome;
        typedef Aws::Utils::Outcome<GetParametersByPathResult, SSMError> GetParametersByPathOutcome;
        typedef Aws::Utils::Outcome<GetPatchBaselineResult, SSMError> GetPatchBaselineOutcome;
        typedef Aws::Utils::Outcome<GetPatchBaselineForPatchGroupResult, SSMError> GetPatchBaselineForPatchGroupOutcome;
        typedef Aws::Utils::Outcome<GetServiceSettingResult, SSMError> GetServiceSettingOutcome;
        typedef Aws::Utils::Outcome<LabelParameterVersionResult, SSMError> LabelParameterVersionOutcome;
        typedef Aws::Utils::Outcome<ListAssociationVersionsResult, SSMError> ListAssociationVersionsOutcome;
        typedef Aws::Utils::Outcome<ListAssociationsResult, SSMError> ListAssociationsOutcome;
        typedef Aws::Utils::Outcome<ListCommandInvocationsResult, SSMError> ListCommandInvocationsOutcome;
        typedef Aws::Utils::Outcome<ListCommandsResult, SSMError> ListCommandsOutcome;
        typedef Aws::Utils::Outcome<ListComplianceItemsResult, SSMError> ListComplianceItemsOutcome;
        typedef Aws::Utils::Outcome<ListComplianceSummariesResult, SSMError> ListComplianceSummariesOutcome;
        typedef Aws::Utils::Outcome<ListDocumentMetadataHistoryResult, SSMError> ListDocumentMetadataHistoryOutcome;
        typedef Aws::Utils::Outcome<ListDocumentVersionsResult, SSMError> ListDocumentVersionsOutcome;
        typedef Aws::Utils::Outcome<ListDocumentsResult, SSMError> ListDocumentsOutcome;
        typedef Aws::Utils::Outcome<ListInventoryEntriesResult, SSMError> ListInventoryEntriesOutcome;
        typedef Aws::Utils::Outcome<ListOpsItemEventsResult, SSMError> ListOpsItemEventsOutcome;
        typedef Aws::Utils::Outcome<ListOpsItemRelatedItemsResult, SSMError> ListOpsItemRelatedItemsOutcome;
        typedef Aws::Utils::Outcome<ListOpsMetadataResult, SSMError> ListOpsMetadataOutcome;
        typedef Aws::Utils::Outcome<ListResourceComplianceSummariesResult, SSMError> ListResourceComplianceSummariesOutcome;
        typedef Aws::Utils::Outcome<ListResourceDataSyncResult, SSMError> ListResourceDataSyncOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, SSMError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ModifyDocumentPermissionResult, SSMError> ModifyDocumentPermissionOutcome;
        typedef Aws::Utils::Outcome<PutComplianceItemsResult, SSMError> PutComplianceItemsOutcome;
        typedef Aws::Utils::Outcome<PutInventoryResult, SSMError> PutInventoryOutcome;
        typedef Aws::Utils::Outcome<PutParameterResult, SSMError> PutParameterOutcome;
        typedef Aws::Utils::Outcome<RegisterDefaultPatchBaselineResult, SSMError> RegisterDefaultPatchBaselineOutcome;
        typedef Aws::Utils::Outcome<RegisterPatchBaselineForPatchGroupResult, SSMError> RegisterPatchBaselineForPatchGroupOutcome;
        typedef Aws::Utils::Outcome<RegisterTargetWithMaintenanceWindowResult, SSMError> RegisterTargetWithMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<RegisterTaskWithMaintenanceWindowResult, SSMError> RegisterTaskWithMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, SSMError> RemoveTagsFromResourceOutcome;
        typedef Aws::Utils::Outcome<ResetServiceSettingResult, SSMError> ResetServiceSettingOutcome;
        typedef Aws::Utils::Outcome<ResumeSessionResult, SSMError> ResumeSessionOutcome;
        typedef Aws::Utils::Outcome<SendAutomationSignalResult, SSMError> SendAutomationSignalOutcome;
        typedef Aws::Utils::Outcome<SendCommandResult, SSMError> SendCommandOutcome;
        typedef Aws::Utils::Outcome<StartAssociationsOnceResult, SSMError> StartAssociationsOnceOutcome;
        typedef Aws::Utils::Outcome<StartAutomationExecutionResult, SSMError> StartAutomationExecutionOutcome;
        typedef Aws::Utils::Outcome<StartChangeRequestExecutionResult, SSMError> StartChangeRequestExecutionOutcome;
        typedef Aws::Utils::Outcome<StartSessionResult, SSMError> StartSessionOutcome;
        typedef Aws::Utils::Outcome<StopAutomationExecutionResult, SSMError> StopAutomationExecutionOutcome;
        typedef Aws::Utils::Outcome<TerminateSessionResult, SSMError> TerminateSessionOutcome;
        typedef Aws::Utils::Outcome<UnlabelParameterVersionResult, SSMError> UnlabelParameterVersionOutcome;
        typedef Aws::Utils::Outcome<UpdateAssociationResult, SSMError> UpdateAssociationOutcome;
        typedef Aws::Utils::Outcome<UpdateAssociationStatusResult, SSMError> UpdateAssociationStatusOutcome;
        typedef Aws::Utils::Outcome<UpdateDocumentResult, SSMError> UpdateDocumentOutcome;
        typedef Aws::Utils::Outcome<UpdateDocumentDefaultVersionResult, SSMError> UpdateDocumentDefaultVersionOutcome;
        typedef Aws::Utils::Outcome<UpdateDocumentMetadataResult, SSMError> UpdateDocumentMetadataOutcome;
        typedef Aws::Utils::Outcome<UpdateMaintenanceWindowResult, SSMError> UpdateMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<UpdateMaintenanceWindowTargetResult, SSMError> UpdateMaintenanceWindowTargetOutcome;
        typedef Aws::Utils::Outcome<UpdateMaintenanceWindowTaskResult, SSMError> UpdateMaintenanceWindowTaskOutcome;
        typedef Aws::Utils::Outcome<UpdateManagedInstanceRoleResult, SSMError> UpdateManagedInstanceRoleOutcome;
        typedef Aws::Utils::Outcome<UpdateOpsItemResult, SSMError> UpdateOpsItemOutcome;
        typedef Aws::Utils::Outcome<UpdateOpsMetadataResult, SSMError> UpdateOpsMetadataOutcome;
        typedef Aws::Utils::Outcome<UpdatePatchBaselineResult, SSMError> UpdatePatchBaselineOutcome;
        typedef Aws::Utils::Outcome<UpdateResourceDataSyncResult, SSMError> UpdateResourceDataSyncOutcome;
        typedef Aws::Utils::Outcome<UpdateServiceSettingResult, SSMError> UpdateServiceSettingOutcome;

        typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
        typedef std::future<AssociateOpsItemRelatedItemOutcome> AssociateOpsItemRelatedItemOutcomeCallable;
        typedef std::future<CancelCommandOutcome> CancelCommandOutcomeCallable;
        typedef std::future<CancelMaintenanceWindowExecutionOutcome> CancelMaintenanceWindowExecutionOutcomeCallable;
        typedef std::future<CreateActivationOutcome> CreateActivationOutcomeCallable;
        typedef std::future<CreateAssociationOutcome> CreateAssociationOutcomeCallable;
        typedef std::future<CreateAssociationBatchOutcome> CreateAssociationBatchOutcomeCallable;
        typedef std::future<CreateDocumentOutcome> CreateDocumentOutcomeCallable;
        typedef std::future<CreateMaintenanceWindowOutcome> CreateMaintenanceWindowOutcomeCallable;
        typedef std::future<CreateOpsItemOutcome> CreateOpsItemOutcomeCallable;
        typedef std::future<CreateOpsMetadataOutcome> CreateOpsMetadataOutcomeCallable;
        typedef std::future<CreatePatchBaselineOutcome> CreatePatchBaselineOutcomeCallable;
        typedef std::future<CreateResourceDataSyncOutcome> CreateResourceDataSyncOutcomeCallable;
        typedef std::future<DeleteActivationOutcome> DeleteActivationOutcomeCallable;
        typedef std::future<DeleteAssociationOutcome> DeleteAssociationOutcomeCallable;
        typedef std::future<DeleteDocumentOutcome> DeleteDocumentOutcomeCallable;
        typedef std::future<DeleteInventoryOutcome> DeleteInventoryOutcomeCallable;
        typedef std::future<DeleteMaintenanceWindowOutcome> DeleteMaintenanceWindowOutcomeCallable;
        typedef std::future<DeleteOpsMetadataOutcome> DeleteOpsMetadataOutcomeCallable;
        typedef std::future<DeleteParameterOutcome> DeleteParameterOutcomeCallable;
        typedef std::future<DeleteParametersOutcome> DeleteParametersOutcomeCallable;
        typedef std::future<DeletePatchBaselineOutcome> DeletePatchBaselineOutcomeCallable;
        typedef std::future<DeleteResourceDataSyncOutcome> DeleteResourceDataSyncOutcomeCallable;
        typedef std::future<DeregisterManagedInstanceOutcome> DeregisterManagedInstanceOutcomeCallable;
        typedef std::future<DeregisterPatchBaselineForPatchGroupOutcome> DeregisterPatchBaselineForPatchGroupOutcomeCallable;
        typedef std::future<DeregisterTargetFromMaintenanceWindowOutcome> DeregisterTargetFromMaintenanceWindowOutcomeCallable;
        typedef std::future<DeregisterTaskFromMaintenanceWindowOutcome> DeregisterTaskFromMaintenanceWindowOutcomeCallable;
        typedef std::future<DescribeActivationsOutcome> DescribeActivationsOutcomeCallable;
        typedef std::future<DescribeAssociationOutcome> DescribeAssociationOutcomeCallable;
        typedef std::future<DescribeAssociationExecutionTargetsOutcome> DescribeAssociationExecutionTargetsOutcomeCallable;
        typedef std::future<DescribeAssociationExecutionsOutcome> DescribeAssociationExecutionsOutcomeCallable;
        typedef std::future<DescribeAutomationExecutionsOutcome> DescribeAutomationExecutionsOutcomeCallable;
        typedef std::future<DescribeAutomationStepExecutionsOutcome> DescribeAutomationStepExecutionsOutcomeCallable;
        typedef std::future<DescribeAvailablePatchesOutcome> DescribeAvailablePatchesOutcomeCallable;
        typedef std::future<DescribeDocumentOutcome> DescribeDocumentOutcomeCallable;
        typedef std::future<DescribeDocumentPermissionOutcome> DescribeDocumentPermissionOutcomeCallable;
        typedef std::future<DescribeEffectiveInstanceAssociationsOutcome> DescribeEffectiveInstanceAssociationsOutcomeCallable;
        typedef std::future<DescribeEffectivePatchesForPatchBaselineOutcome> DescribeEffectivePatchesForPatchBaselineOutcomeCallable;
        typedef std::future<DescribeInstanceAssociationsStatusOutcome> DescribeInstanceAssociationsStatusOutcomeCallable;
        typedef std::future<DescribeInstanceInformationOutcome> DescribeInstanceInformationOutcomeCallable;
        typedef std::future<DescribeInstancePatchStatesOutcome> DescribeInstancePatchStatesOutcomeCallable;
        typedef std::future<DescribeInstancePatchStatesForPatchGroupOutcome> DescribeInstancePatchStatesForPatchGroupOutcomeCallable;
        typedef std::future<DescribeInstancePatchesOutcome> DescribeInstancePatchesOutcomeCallable;
        typedef std::future<DescribeInventoryDeletionsOutcome> DescribeInventoryDeletionsOutcomeCallable;
        typedef std::future<DescribeMaintenanceWindowExecutionTaskInvocationsOutcome> DescribeMaintenanceWindowExecutionTaskInvocationsOutcomeCallable;
        typedef std::future<DescribeMaintenanceWindowExecutionTasksOutcome> DescribeMaintenanceWindowExecutionTasksOutcomeCallable;
        typedef std::future<DescribeMaintenanceWindowExecutionsOutcome> DescribeMaintenanceWindowExecutionsOutcomeCallable;
        typedef std::future<DescribeMaintenanceWindowScheduleOutcome> DescribeMaintenanceWindowScheduleOutcomeCallable;
        typedef std::future<DescribeMaintenanceWindowTargetsOutcome> DescribeMaintenanceWindowTargetsOutcomeCallable;
        typedef std::future<DescribeMaintenanceWindowTasksOutcome> DescribeMaintenanceWindowTasksOutcomeCallable;
        typedef std::future<DescribeMaintenanceWindowsOutcome> DescribeMaintenanceWindowsOutcomeCallable;
        typedef std::future<DescribeMaintenanceWindowsForTargetOutcome> DescribeMaintenanceWindowsForTargetOutcomeCallable;
        typedef std::future<DescribeOpsItemsOutcome> DescribeOpsItemsOutcomeCallable;
        typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
        typedef std::future<DescribePatchBaselinesOutcome> DescribePatchBaselinesOutcomeCallable;
        typedef std::future<DescribePatchGroupStateOutcome> DescribePatchGroupStateOutcomeCallable;
        typedef std::future<DescribePatchGroupsOutcome> DescribePatchGroupsOutcomeCallable;
        typedef std::future<DescribePatchPropertiesOutcome> DescribePatchPropertiesOutcomeCallable;
        typedef std::future<DescribeSessionsOutcome> DescribeSessionsOutcomeCallable;
        typedef std::future<DisassociateOpsItemRelatedItemOutcome> DisassociateOpsItemRelatedItemOutcomeCallable;
        typedef std::future<GetAutomationExecutionOutcome> GetAutomationExecutionOutcomeCallable;
        typedef std::future<GetCalendarStateOutcome> GetCalendarStateOutcomeCallable;
        typedef std::future<GetCommandInvocationOutcome> GetCommandInvocationOutcomeCallable;
        typedef std::future<GetConnectionStatusOutcome> GetConnectionStatusOutcomeCallable;
        typedef std::future<GetDefaultPatchBaselineOutcome> GetDefaultPatchBaselineOutcomeCallable;
        typedef std::future<GetDeployablePatchSnapshotForInstanceOutcome> GetDeployablePatchSnapshotForInstanceOutcomeCallable;
        typedef std::future<GetDocumentOutcome> GetDocumentOutcomeCallable;
        typedef std::future<GetInventoryOutcome> GetInventoryOutcomeCallable;
        typedef std::future<GetInventorySchemaOutcome> GetInventorySchemaOutcomeCallable;
        typedef std::future<GetMaintenanceWindowOutcome> GetMaintenanceWindowOutcomeCallable;
        typedef std::future<GetMaintenanceWindowExecutionOutcome> GetMaintenanceWindowExecutionOutcomeCallable;
        typedef std::future<GetMaintenanceWindowExecutionTaskOutcome> GetMaintenanceWindowExecutionTaskOutcomeCallable;
        typedef std::future<GetMaintenanceWindowExecutionTaskInvocationOutcome> GetMaintenanceWindowExecutionTaskInvocationOutcomeCallable;
        typedef std::future<GetMaintenanceWindowTaskOutcome> GetMaintenanceWindowTaskOutcomeCallable;
        typedef std::future<GetOpsItemOutcome> GetOpsItemOutcomeCallable;
        typedef std::future<GetOpsMetadataOutcome> GetOpsMetadataOutcomeCallable;
        typedef std::future<GetOpsSummaryOutcome> GetOpsSummaryOutcomeCallable;
        typedef std::future<GetParameterOutcome> GetParameterOutcomeCallable;
        typedef std::future<GetParameterHistoryOutcome> GetParameterHistoryOutcomeCallable;
        typedef std::future<GetParametersOutcome> GetParametersOutcomeCallable;
        typedef std::future<GetParametersByPathOutcome> GetParametersByPathOutcomeCallable;
        typedef std::future<GetPatchBaselineOutcome> GetPatchBaselineOutcomeCallable;
        typedef std::future<GetPatchBaselineForPatchGroupOutcome> GetPatchBaselineForPatchGroupOutcomeCallable;
        typedef std::future<GetServiceSettingOutcome> GetServiceSettingOutcomeCallable;
        typedef std::future<LabelParameterVersionOutcome> LabelParameterVersionOutcomeCallable;
        typedef std::future<ListAssociationVersionsOutcome> ListAssociationVersionsOutcomeCallable;
        typedef std::future<ListAssociationsOutcome> ListAssociationsOutcomeCallable;
        typedef std::future<ListCommandInvocationsOutcome> ListCommandInvocationsOutcomeCallable;
        typedef std::future<ListCommandsOutcome> ListCommandsOutcomeCallable;
        typedef std::future<ListComplianceItemsOutcome> ListComplianceItemsOutcomeCallable;
        typedef std::future<ListComplianceSummariesOutcome> ListComplianceSummariesOutcomeCallable;
        typedef std::future<ListDocumentMetadataHistoryOutcome> ListDocumentMetadataHistoryOutcomeCallable;
        typedef std::future<ListDocumentVersionsOutcome> ListDocumentVersionsOutcomeCallable;
        typedef std::future<ListDocumentsOutcome> ListDocumentsOutcomeCallable;
        typedef std::future<ListInventoryEntriesOutcome> ListInventoryEntriesOutcomeCallable;
        typedef std::future<ListOpsItemEventsOutcome> ListOpsItemEventsOutcomeCallable;
        typedef std::future<ListOpsItemRelatedItemsOutcome> ListOpsItemRelatedItemsOutcomeCallable;
        typedef std::future<ListOpsMetadataOutcome> ListOpsMetadataOutcomeCallable;
        typedef std::future<ListResourceComplianceSummariesOutcome> ListResourceComplianceSummariesOutcomeCallable;
        typedef std::future<ListResourceDataSyncOutcome> ListResourceDataSyncOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ModifyDocumentPermissionOutcome> ModifyDocumentPermissionOutcomeCallable;
        typedef std::future<PutComplianceItemsOutcome> PutComplianceItemsOutcomeCallable;
        typedef std::future<PutInventoryOutcome> PutInventoryOutcomeCallable;
        typedef std::future<PutParameterOutcome> PutParameterOutcomeCallable;
        typedef std::future<RegisterDefaultPatchBaselineOutcome> RegisterDefaultPatchBaselineOutcomeCallable;
        typedef std::future<RegisterPatchBaselineForPatchGroupOutcome> RegisterPatchBaselineForPatchGroupOutcomeCallable;
        typedef std::future<RegisterTargetWithMaintenanceWindowOutcome> RegisterTargetWithMaintenanceWindowOutcomeCallable;
        typedef std::future<RegisterTaskWithMaintenanceWindowOutcome> RegisterTaskWithMaintenanceWindowOutcomeCallable;
        typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
        typedef std::future<ResetServiceSettingOutcome> ResetServiceSettingOutcomeCallable;
        typedef std::future<ResumeSessionOutcome> ResumeSessionOutcomeCallable;
        typedef std::future<SendAutomationSignalOutcome> SendAutomationSignalOutcomeCallable;
        typedef std::future<SendCommandOutcome> SendCommandOutcomeCallable;
        typedef std::future<StartAssociationsOnceOutcome> StartAssociationsOnceOutcomeCallable;
        typedef std::future<StartAutomationExecutionOutcome> StartAutomationExecutionOutcomeCallable;
        typedef std::future<StartChangeRequestExecutionOutcome> StartChangeRequestExecutionOutcomeCallable;
        typedef std::future<StartSessionOutcome> StartSessionOutcomeCallable;
        typedef std::future<StopAutomationExecutionOutcome> StopAutomationExecutionOutcomeCallable;
        typedef std::future<TerminateSessionOutcome> TerminateSessionOutcomeCallable;
        typedef std::future<UnlabelParameterVersionOutcome> UnlabelParameterVersionOutcomeCallable;
        typedef std::future<UpdateAssociationOutcome> UpdateAssociationOutcomeCallable;
        typedef std::future<UpdateAssociationStatusOutcome> UpdateAssociationStatusOutcomeCallable;
        typedef std::future<UpdateDocumentOutcome> UpdateDocumentOutcomeCallable;
        typedef std::future<UpdateDocumentDefaultVersionOutcome> UpdateDocumentDefaultVersionOutcomeCallable;
        typedef std::future<UpdateDocumentMetadataOutcome> UpdateDocumentMetadataOutcomeCallable;
        typedef std::future<UpdateMaintenanceWindowOutcome> UpdateMaintenanceWindowOutcomeCallable;
        typedef std::future<UpdateMaintenanceWindowTargetOutcome> UpdateMaintenanceWindowTargetOutcomeCallable;
        typedef std::future<UpdateMaintenanceWindowTaskOutcome> UpdateMaintenanceWindowTaskOutcomeCallable;
        typedef std::future<UpdateManagedInstanceRoleOutcome> UpdateManagedInstanceRoleOutcomeCallable;
        typedef std::future<UpdateOpsItemOutcome> UpdateOpsItemOutcomeCallable;
        typedef std::future<UpdateOpsMetadataOutcome> UpdateOpsMetadataOutcomeCallable;
        typedef std::future<UpdatePatchBaselineOutcome> UpdatePatchBaselineOutcomeCallable;
        typedef std::future<UpdateResourceDataSyncOutcome> UpdateResourceDataSyncOutcomeCallable;
        typedef std::future<UpdateServiceSettingOutcome> UpdateServiceSettingOutcomeCallable;
} // namespace Model

  class SSMClient;

    typedef std::function<void(const SSMClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::AssociateOpsItemRelatedItemRequest&, const Model::AssociateOpsItemRelatedItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateOpsItemRelatedItemResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CancelCommandRequest&, const Model::CancelCommandOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelCommandResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CancelMaintenanceWindowExecutionRequest&, const Model::CancelMaintenanceWindowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelMaintenanceWindowExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateActivationRequest&, const Model::CreateActivationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateActivationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateAssociationRequest&, const Model::CreateAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateAssociationBatchRequest&, const Model::CreateAssociationBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssociationBatchResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateDocumentRequest&, const Model::CreateDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateMaintenanceWindowRequest&, const Model::CreateMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateOpsItemRequest&, const Model::CreateOpsItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOpsItemResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateOpsMetadataRequest&, const Model::CreateOpsMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOpsMetadataResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreatePatchBaselineRequest&, const Model::CreatePatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateResourceDataSyncRequest&, const Model::CreateResourceDataSyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceDataSyncResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteActivationRequest&, const Model::DeleteActivationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteActivationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteAssociationRequest&, const Model::DeleteAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteDocumentRequest&, const Model::DeleteDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteInventoryRequest&, const Model::DeleteInventoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInventoryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteMaintenanceWindowRequest&, const Model::DeleteMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteOpsMetadataRequest&, const Model::DeleteOpsMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOpsMetadataResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteParameterRequest&, const Model::DeleteParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteParameterResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteParametersRequest&, const Model::DeleteParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteParametersResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeletePatchBaselineRequest&, const Model::DeletePatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteResourceDataSyncRequest&, const Model::DeleteResourceDataSyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceDataSyncResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeregisterManagedInstanceRequest&, const Model::DeregisterManagedInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterManagedInstanceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeregisterPatchBaselineForPatchGroupRequest&, const Model::DeregisterPatchBaselineForPatchGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterPatchBaselineForPatchGroupResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeregisterTargetFromMaintenanceWindowRequest&, const Model::DeregisterTargetFromMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTargetFromMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeregisterTaskFromMaintenanceWindowRequest&, const Model::DeregisterTaskFromMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTaskFromMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeActivationsRequest&, const Model::DescribeActivationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeActivationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAssociationRequest&, const Model::DescribeAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAssociationExecutionTargetsRequest&, const Model::DescribeAssociationExecutionTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssociationExecutionTargetsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAssociationExecutionsRequest&, const Model::DescribeAssociationExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssociationExecutionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAutomationExecutionsRequest&, const Model::DescribeAutomationExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutomationExecutionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAutomationStepExecutionsRequest&, const Model::DescribeAutomationStepExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutomationStepExecutionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAvailablePatchesRequest&, const Model::DescribeAvailablePatchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAvailablePatchesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeDocumentRequest&, const Model::DescribeDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeDocumentPermissionRequest&, const Model::DescribeDocumentPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentPermissionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeEffectiveInstanceAssociationsRequest&, const Model::DescribeEffectiveInstanceAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEffectiveInstanceAssociationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeEffectivePatchesForPatchBaselineRequest&, const Model::DescribeEffectivePatchesForPatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEffectivePatchesForPatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInstanceAssociationsStatusRequest&, const Model::DescribeInstanceAssociationsStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceAssociationsStatusResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInstanceInformationRequest&, const Model::DescribeInstanceInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceInformationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInstancePatchStatesRequest&, const Model::DescribeInstancePatchStatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstancePatchStatesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInstancePatchStatesForPatchGroupRequest&, const Model::DescribeInstancePatchStatesForPatchGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstancePatchStatesForPatchGroupResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInstancePatchesRequest&, const Model::DescribeInstancePatchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstancePatchesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInventoryDeletionsRequest&, const Model::DescribeInventoryDeletionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInventoryDeletionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest&, const Model::DescribeMaintenanceWindowExecutionTaskInvocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowExecutionTaskInvocationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowExecutionTasksRequest&, const Model::DescribeMaintenanceWindowExecutionTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowExecutionTasksResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowExecutionsRequest&, const Model::DescribeMaintenanceWindowExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowExecutionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowScheduleRequest&, const Model::DescribeMaintenanceWindowScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowScheduleResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowTargetsRequest&, const Model::DescribeMaintenanceWindowTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowTargetsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowTasksRequest&, const Model::DescribeMaintenanceWindowTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowTasksResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowsRequest&, const Model::DescribeMaintenanceWindowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowsForTargetRequest&, const Model::DescribeMaintenanceWindowsForTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowsForTargetResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeOpsItemsRequest&, const Model::DescribeOpsItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOpsItemsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeParametersRequest&, const Model::DescribeParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeParametersResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribePatchBaselinesRequest&, const Model::DescribePatchBaselinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePatchBaselinesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribePatchGroupStateRequest&, const Model::DescribePatchGroupStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePatchGroupStateResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribePatchGroupsRequest&, const Model::DescribePatchGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePatchGroupsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribePatchPropertiesRequest&, const Model::DescribePatchPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePatchPropertiesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeSessionsRequest&, const Model::DescribeSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSessionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DisassociateOpsItemRelatedItemRequest&, const Model::DisassociateOpsItemRelatedItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateOpsItemRelatedItemResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetAutomationExecutionRequest&, const Model::GetAutomationExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAutomationExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetCalendarStateRequest&, const Model::GetCalendarStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCalendarStateResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetCommandInvocationRequest&, const Model::GetCommandInvocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCommandInvocationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetConnectionStatusRequest&, const Model::GetConnectionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionStatusResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetDefaultPatchBaselineRequest&, const Model::GetDefaultPatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDefaultPatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetDeployablePatchSnapshotForInstanceRequest&, const Model::GetDeployablePatchSnapshotForInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeployablePatchSnapshotForInstanceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetDocumentRequest&, const Model::GetDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetInventoryRequest&, const Model::GetInventoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInventoryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetInventorySchemaRequest&, const Model::GetInventorySchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInventorySchemaResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetMaintenanceWindowRequest&, const Model::GetMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetMaintenanceWindowExecutionRequest&, const Model::GetMaintenanceWindowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMaintenanceWindowExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetMaintenanceWindowExecutionTaskRequest&, const Model::GetMaintenanceWindowExecutionTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMaintenanceWindowExecutionTaskResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetMaintenanceWindowExecutionTaskInvocationRequest&, const Model::GetMaintenanceWindowExecutionTaskInvocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMaintenanceWindowExecutionTaskInvocationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetMaintenanceWindowTaskRequest&, const Model::GetMaintenanceWindowTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMaintenanceWindowTaskResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetOpsItemRequest&, const Model::GetOpsItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOpsItemResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetOpsMetadataRequest&, const Model::GetOpsMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOpsMetadataResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetOpsSummaryRequest&, const Model::GetOpsSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOpsSummaryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetParameterRequest&, const Model::GetParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParameterResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetParameterHistoryRequest&, const Model::GetParameterHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParameterHistoryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetParametersRequest&, const Model::GetParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParametersResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetParametersByPathRequest&, const Model::GetParametersByPathOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParametersByPathResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetPatchBaselineRequest&, const Model::GetPatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetPatchBaselineForPatchGroupRequest&, const Model::GetPatchBaselineForPatchGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPatchBaselineForPatchGroupResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetServiceSettingRequest&, const Model::GetServiceSettingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceSettingResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::LabelParameterVersionRequest&, const Model::LabelParameterVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LabelParameterVersionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListAssociationVersionsRequest&, const Model::ListAssociationVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociationVersionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListAssociationsRequest&, const Model::ListAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListCommandInvocationsRequest&, const Model::ListCommandInvocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCommandInvocationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListCommandsRequest&, const Model::ListCommandsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCommandsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListComplianceItemsRequest&, const Model::ListComplianceItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComplianceItemsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListComplianceSummariesRequest&, const Model::ListComplianceSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComplianceSummariesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListDocumentMetadataHistoryRequest&, const Model::ListDocumentMetadataHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentMetadataHistoryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListDocumentVersionsRequest&, const Model::ListDocumentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentVersionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListDocumentsRequest&, const Model::ListDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListInventoryEntriesRequest&, const Model::ListInventoryEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInventoryEntriesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListOpsItemEventsRequest&, const Model::ListOpsItemEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOpsItemEventsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListOpsItemRelatedItemsRequest&, const Model::ListOpsItemRelatedItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOpsItemRelatedItemsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListOpsMetadataRequest&, const Model::ListOpsMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOpsMetadataResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListResourceComplianceSummariesRequest&, const Model::ListResourceComplianceSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceComplianceSummariesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListResourceDataSyncRequest&, const Model::ListResourceDataSyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceDataSyncResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ModifyDocumentPermissionRequest&, const Model::ModifyDocumentPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDocumentPermissionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::PutComplianceItemsRequest&, const Model::PutComplianceItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutComplianceItemsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::PutInventoryRequest&, const Model::PutInventoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInventoryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::PutParameterRequest&, const Model::PutParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutParameterResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::RegisterDefaultPatchBaselineRequest&, const Model::RegisterDefaultPatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterDefaultPatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::RegisterPatchBaselineForPatchGroupRequest&, const Model::RegisterPatchBaselineForPatchGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterPatchBaselineForPatchGroupResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::RegisterTargetWithMaintenanceWindowRequest&, const Model::RegisterTargetWithMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTargetWithMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::RegisterTaskWithMaintenanceWindowRequest&, const Model::RegisterTaskWithMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTaskWithMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ResetServiceSettingRequest&, const Model::ResetServiceSettingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetServiceSettingResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ResumeSessionRequest&, const Model::ResumeSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeSessionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::SendAutomationSignalRequest&, const Model::SendAutomationSignalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendAutomationSignalResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::SendCommandRequest&, const Model::SendCommandOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendCommandResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::StartAssociationsOnceRequest&, const Model::StartAssociationsOnceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAssociationsOnceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::StartAutomationExecutionRequest&, const Model::StartAutomationExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAutomationExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::StartChangeRequestExecutionRequest&, const Model::StartChangeRequestExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartChangeRequestExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::StartSessionRequest&, const Model::StartSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSessionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::StopAutomationExecutionRequest&, const Model::StopAutomationExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopAutomationExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::TerminateSessionRequest&, const Model::TerminateSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateSessionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UnlabelParameterVersionRequest&, const Model::UnlabelParameterVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnlabelParameterVersionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateAssociationRequest&, const Model::UpdateAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateAssociationStatusRequest&, const Model::UpdateAssociationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssociationStatusResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateDocumentRequest&, const Model::UpdateDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateDocumentDefaultVersionRequest&, const Model::UpdateDocumentDefaultVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentDefaultVersionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateDocumentMetadataRequest&, const Model::UpdateDocumentMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentMetadataResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateMaintenanceWindowRequest&, const Model::UpdateMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateMaintenanceWindowTargetRequest&, const Model::UpdateMaintenanceWindowTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMaintenanceWindowTargetResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateMaintenanceWindowTaskRequest&, const Model::UpdateMaintenanceWindowTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMaintenanceWindowTaskResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateManagedInstanceRoleRequest&, const Model::UpdateManagedInstanceRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateManagedInstanceRoleResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateOpsItemRequest&, const Model::UpdateOpsItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOpsItemResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateOpsMetadataRequest&, const Model::UpdateOpsMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOpsMetadataResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdatePatchBaselineRequest&, const Model::UpdatePatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateResourceDataSyncRequest&, const Model::UpdateResourceDataSyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceDataSyncResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateServiceSettingRequest&, const Model::UpdateServiceSettingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceSettingResponseReceivedHandler;

  /**
   * <p>Amazon Web Services Systems Manager is a collection of capabilities that
   * helps you automate management tasks such as collecting system inventory,
   * applying operating system (OS) patches, automating the creation of Amazon
   * Machine Images (AMIs), and configuring operating systems (OSs) and applications
   * at scale. Systems Manager lets you remotely and securely manage the
   * configuration of your managed nodes. A <i>managed node</i> is any Amazon Elastic
   * Compute Cloud (Amazon EC2) instance, edge device, or on-premises server or
   * virtual machine (VM) that has been configured for Systems Manager. </p> 
   * <p>With support for IoT Greengrass core devices, the phrase <i>managed
   * instance</i> has been changed to <i>managed node</i> in most of the Systems
   * Manager documentation. The Systems Manager console, API calls, error messages,
   * and SSM documents still use the term <i>instance</i>.</p>  <p>This
   * reference is intended to be used with the <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web
   * Services Systems Manager User Guide</a>.</p> <p>To get started, verify
   * prerequisites and configure managed nodes. For more information, see <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting
   * up Amazon Web Services Systems Manager</a> in the <i>Amazon Web Services Systems
   * Manager User Guide</i>.</p> <p class="title"> <b>Related resources</b> </p> <ul>
   * <li> <p>For information about how to use a Query API, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making
   * API requests</a>. </p> </li> <li> <p>For information about other API operations
   * you can perform on EC2 instances, see the <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
   * Reference</a>.</p> </li> <li> <p>For information about AppConfig, a capability
   * of Systems Manager, see the <a
   * href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User
   * Guide</a> and the <a
   * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig
   * API Reference</a>.</p> </li> <li> <p>For information about Incident Manager, a
   * capability of Systems Manager, see the <a
   * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident
   * Manager User Guide</a> and the <a
   * href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident
   * Manager API Reference</a>.</p> </li> </ul>
   */
  class AWS_SSM_API SSMClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SSMClient();


        /**
         * <p>Adds or overwrites one or more tags for the specified resource. Tags are
         * metadata that you can assign to your documents, managed nodes, maintenance
         * windows, Parameter Store parameters, and patch baselines. Tags enable you to
         * categorize your resources in different ways, for example, by purpose, owner, or
         * environment. Each tag consists of a key and an optional value, both of which you
         * define. For example, you could define a set of tags for your account's managed
         * nodes that helps you track each node's owner and stack level. For example:</p>
         * <ul> <li> <p> <code>Key=Owner,Value=DbAdmin</code> </p> </li> <li> <p>
         * <code>Key=Owner,Value=SysAdmin</code> </p> </li> <li> <p>
         * <code>Key=Owner,Value=Dev</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Production</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Pre-Production</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Test</code> </p> </li> </ul> <p>Each resource can have a
         * maximum of 50 tags.</p> <p>We recommend that you devise a set of tag keys that
         * meets your needs for each resource type. Using a consistent set of tag keys
         * makes it easier for you to manage your resources. You can search and filter the
         * resources based on the tags you add. Tags don't have any semantic meaning to and
         * are interpreted strictly as a string of characters. </p> <p>For more information
         * about using tags with Amazon Elastic Compute Cloud (Amazon EC2) instances, see
         * <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * your Amazon EC2 resources</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified resource. Tags are
         * metadata that you can assign to your documents, managed nodes, maintenance
         * windows, Parameter Store parameters, and patch baselines. Tags enable you to
         * categorize your resources in different ways, for example, by purpose, owner, or
         * environment. Each tag consists of a key and an optional value, both of which you
         * define. For example, you could define a set of tags for your account's managed
         * nodes that helps you track each node's owner and stack level. For example:</p>
         * <ul> <li> <p> <code>Key=Owner,Value=DbAdmin</code> </p> </li> <li> <p>
         * <code>Key=Owner,Value=SysAdmin</code> </p> </li> <li> <p>
         * <code>Key=Owner,Value=Dev</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Production</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Pre-Production</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Test</code> </p> </li> </ul> <p>Each resource can have a
         * maximum of 50 tags.</p> <p>We recommend that you devise a set of tag keys that
         * meets your needs for each resource type. Using a consistent set of tag keys
         * makes it easier for you to manage your resources. You can search and filter the
         * resources based on the tags you add. Tags don't have any semantic meaning to and
         * are interpreted strictly as a string of characters. </p> <p>For more information
         * about using tags with Amazon Elastic Compute Cloud (Amazon EC2) instances, see
         * <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * your Amazon EC2 resources</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified resource. Tags are
         * metadata that you can assign to your documents, managed nodes, maintenance
         * windows, Parameter Store parameters, and patch baselines. Tags enable you to
         * categorize your resources in different ways, for example, by purpose, owner, or
         * environment. Each tag consists of a key and an optional value, both of which you
         * define. For example, you could define a set of tags for your account's managed
         * nodes that helps you track each node's owner and stack level. For example:</p>
         * <ul> <li> <p> <code>Key=Owner,Value=DbAdmin</code> </p> </li> <li> <p>
         * <code>Key=Owner,Value=SysAdmin</code> </p> </li> <li> <p>
         * <code>Key=Owner,Value=Dev</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Production</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Pre-Production</code> </p> </li> <li> <p>
         * <code>Key=Stack,Value=Test</code> </p> </li> </ul> <p>Each resource can have a
         * maximum of 50 tags.</p> <p>We recommend that you devise a set of tag keys that
         * meets your needs for each resource type. Using a consistent set of tag keys
         * makes it easier for you to manage your resources. You can search and filter the
         * resources based on the tags you add. Tags don't have any semantic meaning to and
         * are interpreted strictly as a string of characters. </p> <p>For more information
         * about using tags with Amazon Elastic Compute Cloud (Amazon EC2) instances, see
         * <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * your Amazon EC2 resources</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a related item to a Systems Manager OpsCenter OpsItem. For
         * example, you can associate an Incident Manager incident or analysis with an
         * OpsItem. Incident Manager and OpsCenter are capabilities of Amazon Web Services
         * Systems Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociateOpsItemRelatedItem">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateOpsItemRelatedItemOutcome AssociateOpsItemRelatedItem(const Model::AssociateOpsItemRelatedItemRequest& request) const;

        /**
         * <p>Associates a related item to a Systems Manager OpsCenter OpsItem. For
         * example, you can associate an Incident Manager incident or analysis with an
         * OpsItem. Incident Manager and OpsCenter are capabilities of Amazon Web Services
         * Systems Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociateOpsItemRelatedItem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateOpsItemRelatedItemOutcomeCallable AssociateOpsItemRelatedItemCallable(const Model::AssociateOpsItemRelatedItemRequest& request) const;

        /**
         * <p>Associates a related item to a Systems Manager OpsCenter OpsItem. For
         * example, you can associate an Incident Manager incident or analysis with an
         * OpsItem. Incident Manager and OpsCenter are capabilities of Amazon Web Services
         * Systems Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociateOpsItemRelatedItem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateOpsItemRelatedItemAsync(const Model::AssociateOpsItemRelatedItemRequest& request, const AssociateOpsItemRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to cancel the command specified by the Command ID. There is no
         * guarantee that the command will be terminated and the underlying process
         * stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CancelCommand">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelCommandOutcome CancelCommand(const Model::CancelCommandRequest& request) const;

        /**
         * <p>Attempts to cancel the command specified by the Command ID. There is no
         * guarantee that the command will be terminated and the underlying process
         * stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CancelCommand">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelCommandOutcomeCallable CancelCommandCallable(const Model::CancelCommandRequest& request) const;

        /**
         * <p>Attempts to cancel the command specified by the Command ID. There is no
         * guarantee that the command will be terminated and the underlying process
         * stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CancelCommand">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelCommandAsync(const Model::CancelCommandRequest& request, const CancelCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a maintenance window execution that is already in progress and cancels
         * any tasks in the window that haven't already starting running. Tasks already in
         * progress will continue to completion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CancelMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMaintenanceWindowExecutionOutcome CancelMaintenanceWindowExecution(const Model::CancelMaintenanceWindowExecutionRequest& request) const;

        /**
         * <p>Stops a maintenance window execution that is already in progress and cancels
         * any tasks in the window that haven't already starting running. Tasks already in
         * progress will continue to completion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CancelMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelMaintenanceWindowExecutionOutcomeCallable CancelMaintenanceWindowExecutionCallable(const Model::CancelMaintenanceWindowExecutionRequest& request) const;

        /**
         * <p>Stops a maintenance window execution that is already in progress and cancels
         * any tasks in the window that haven't already starting running. Tasks already in
         * progress will continue to completion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CancelMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelMaintenanceWindowExecutionAsync(const Model::CancelMaintenanceWindowExecutionRequest& request, const CancelMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates an activation code and activation ID you can use to register your
         * on-premises servers, edge devices, or virtual machine (VM) with Amazon Web
         * Services Systems Manager. Registering these machines with Systems Manager makes
         * it possible to manage them using Systems Manager capabilities. You use the
         * activation code and ID when installing SSM Agent on machines in your hybrid
         * environment. For more information about requirements for managing on-premises
         * machines using Systems Manager, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-managedinstances.html">Setting
         * up Amazon Web Services Systems Manager for hybrid environments</a> in the
         * <i>Amazon Web Services Systems Manager User Guide</i>. </p>  <p>Amazon
         * Elastic Compute Cloud (Amazon EC2) instances, edge devices, and on-premises
         * servers and VMs that are configured for Systems Manager are all called
         * <i>managed nodes</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateActivation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateActivationOutcome CreateActivation(const Model::CreateActivationRequest& request) const;

        /**
         * <p>Generates an activation code and activation ID you can use to register your
         * on-premises servers, edge devices, or virtual machine (VM) with Amazon Web
         * Services Systems Manager. Registering these machines with Systems Manager makes
         * it possible to manage them using Systems Manager capabilities. You use the
         * activation code and ID when installing SSM Agent on machines in your hybrid
         * environment. For more information about requirements for managing on-premises
         * machines using Systems Manager, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-managedinstances.html">Setting
         * up Amazon Web Services Systems Manager for hybrid environments</a> in the
         * <i>Amazon Web Services Systems Manager User Guide</i>. </p>  <p>Amazon
         * Elastic Compute Cloud (Amazon EC2) instances, edge devices, and on-premises
         * servers and VMs that are configured for Systems Manager are all called
         * <i>managed nodes</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateActivation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateActivationOutcomeCallable CreateActivationCallable(const Model::CreateActivationRequest& request) const;

        /**
         * <p>Generates an activation code and activation ID you can use to register your
         * on-premises servers, edge devices, or virtual machine (VM) with Amazon Web
         * Services Systems Manager. Registering these machines with Systems Manager makes
         * it possible to manage them using Systems Manager capabilities. You use the
         * activation code and ID when installing SSM Agent on machines in your hybrid
         * environment. For more information about requirements for managing on-premises
         * machines using Systems Manager, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-managedinstances.html">Setting
         * up Amazon Web Services Systems Manager for hybrid environments</a> in the
         * <i>Amazon Web Services Systems Manager User Guide</i>. </p>  <p>Amazon
         * Elastic Compute Cloud (Amazon EC2) instances, edge devices, and on-premises
         * servers and VMs that are configured for Systems Manager are all called
         * <i>managed nodes</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateActivation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateActivationAsync(const Model::CreateActivationRequest& request, const CreateActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A State Manager association defines the state that you want to maintain on
         * your managed nodes. For example, an association can specify that anti-virus
         * software must be installed and running on your managed nodes, or that certain
         * ports must be closed. For static targets, the association specifies a schedule
         * for when the configuration is reapplied. For dynamic targets, such as an Amazon
         * Web Services resource group or an Amazon Web Services autoscaling group, State
         * Manager, a capability of Amazon Web Services Systems Manager applies the
         * configuration when new managed nodes are added to the group. The association
         * also specifies actions to take when applying the configuration. For example, an
         * association for anti-virus software might run once a day. If the software isn't
         * installed, then State Manager installs it. If the software is installed, but the
         * service isn't running, then the association might instruct State Manager to
         * start the service. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssociationOutcome CreateAssociation(const Model::CreateAssociationRequest& request) const;

        /**
         * <p>A State Manager association defines the state that you want to maintain on
         * your managed nodes. For example, an association can specify that anti-virus
         * software must be installed and running on your managed nodes, or that certain
         * ports must be closed. For static targets, the association specifies a schedule
         * for when the configuration is reapplied. For dynamic targets, such as an Amazon
         * Web Services resource group or an Amazon Web Services autoscaling group, State
         * Manager, a capability of Amazon Web Services Systems Manager applies the
         * configuration when new managed nodes are added to the group. The association
         * also specifies actions to take when applying the configuration. For example, an
         * association for anti-virus software might run once a day. If the software isn't
         * installed, then State Manager installs it. If the software is installed, but the
         * service isn't running, then the association might instruct State Manager to
         * start the service. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssociationOutcomeCallable CreateAssociationCallable(const Model::CreateAssociationRequest& request) const;

        /**
         * <p>A State Manager association defines the state that you want to maintain on
         * your managed nodes. For example, an association can specify that anti-virus
         * software must be installed and running on your managed nodes, or that certain
         * ports must be closed. For static targets, the association specifies a schedule
         * for when the configuration is reapplied. For dynamic targets, such as an Amazon
         * Web Services resource group or an Amazon Web Services autoscaling group, State
         * Manager, a capability of Amazon Web Services Systems Manager applies the
         * configuration when new managed nodes are added to the group. The association
         * also specifies actions to take when applying the configuration. For example, an
         * association for anti-virus software might run once a day. If the software isn't
         * installed, then State Manager installs it. If the software is installed, but the
         * service isn't running, then the association might instruct State Manager to
         * start the service. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssociationAsync(const Model::CreateAssociationRequest& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified Amazon Web Services Systems Manager document (SSM
         * document) with the specified managed nodes or targets.</p> <p>When you associate
         * a document with one or more managed nodes using IDs or tags, Amazon Web Services
         * Systems Manager Agent (SSM Agent) running on the managed node processes the
         * document and configures the node as specified.</p> <p>If you associate a
         * document with a managed node that already has an associated document, the system
         * returns the AssociationAlreadyExists exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociationBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssociationBatchOutcome CreateAssociationBatch(const Model::CreateAssociationBatchRequest& request) const;

        /**
         * <p>Associates the specified Amazon Web Services Systems Manager document (SSM
         * document) with the specified managed nodes or targets.</p> <p>When you associate
         * a document with one or more managed nodes using IDs or tags, Amazon Web Services
         * Systems Manager Agent (SSM Agent) running on the managed node processes the
         * document and configures the node as specified.</p> <p>If you associate a
         * document with a managed node that already has an associated document, the system
         * returns the AssociationAlreadyExists exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociationBatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssociationBatchOutcomeCallable CreateAssociationBatchCallable(const Model::CreateAssociationBatchRequest& request) const;

        /**
         * <p>Associates the specified Amazon Web Services Systems Manager document (SSM
         * document) with the specified managed nodes or targets.</p> <p>When you associate
         * a document with one or more managed nodes using IDs or tags, Amazon Web Services
         * Systems Manager Agent (SSM Agent) running on the managed node processes the
         * document and configures the node as specified.</p> <p>If you associate a
         * document with a managed node that already has an associated document, the system
         * returns the AssociationAlreadyExists exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociationBatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssociationBatchAsync(const Model::CreateAssociationBatchRequest& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Amazon Web Services Systems Manager (SSM document). An SSM document
         * defines the actions that Systems Manager performs on your managed nodes. For
         * more information about SSM documents, including information about supported
         * schemas, features, and syntax, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-ssm-docs.html">Amazon
         * Web Services Systems Manager Documents</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDocumentOutcome CreateDocument(const Model::CreateDocumentRequest& request) const;

        /**
         * <p>Creates a Amazon Web Services Systems Manager (SSM document). An SSM document
         * defines the actions that Systems Manager performs on your managed nodes. For
         * more information about SSM documents, including information about supported
         * schemas, features, and syntax, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-ssm-docs.html">Amazon
         * Web Services Systems Manager Documents</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDocumentOutcomeCallable CreateDocumentCallable(const Model::CreateDocumentRequest& request) const;

        /**
         * <p>Creates a Amazon Web Services Systems Manager (SSM document). An SSM document
         * defines the actions that Systems Manager performs on your managed nodes. For
         * more information about SSM documents, including information about supported
         * schemas, features, and syntax, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-ssm-docs.html">Amazon
         * Web Services Systems Manager Documents</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDocumentAsync(const Model::CreateDocumentRequest& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new maintenance window.</p>  <p>The value you specify for
         * <code>Duration</code> determines the specific end time for the maintenance
         * window based on the time it begins. No maintenance window tasks are permitted to
         * start after the resulting endtime minus the number of hours you specify for
         * <code>Cutoff</code>. For example, if the maintenance window starts at 3 PM, the
         * duration is three hours, and the value you specify for <code>Cutoff</code> is
         * one hour, no maintenance window tasks can start after 5 PM.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMaintenanceWindowOutcome CreateMaintenanceWindow(const Model::CreateMaintenanceWindowRequest& request) const;

        /**
         * <p>Creates a new maintenance window.</p>  <p>The value you specify for
         * <code>Duration</code> determines the specific end time for the maintenance
         * window based on the time it begins. No maintenance window tasks are permitted to
         * start after the resulting endtime minus the number of hours you specify for
         * <code>Cutoff</code>. For example, if the maintenance window starts at 3 PM, the
         * duration is three hours, and the value you specify for <code>Cutoff</code> is
         * one hour, no maintenance window tasks can start after 5 PM.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMaintenanceWindowOutcomeCallable CreateMaintenanceWindowCallable(const Model::CreateMaintenanceWindowRequest& request) const;

        /**
         * <p>Creates a new maintenance window.</p>  <p>The value you specify for
         * <code>Duration</code> determines the specific end time for the maintenance
         * window based on the time it begins. No maintenance window tasks are permitted to
         * start after the resulting endtime minus the number of hours you specify for
         * <code>Cutoff</code>. For example, if the maintenance window starts at 3 PM, the
         * duration is three hours, and the value you specify for <code>Cutoff</code> is
         * one hour, no maintenance window tasks can start after 5 PM.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMaintenanceWindowAsync(const Model::CreateMaintenanceWindowRequest& request, const CreateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new OpsItem. You must have permission in Identity and Access
         * Management (IAM) to create a new OpsItem. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">Amazon
         * Web Services Systems Manager OpsCenter</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateOpsItem">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOpsItemOutcome CreateOpsItem(const Model::CreateOpsItemRequest& request) const;

        /**
         * <p>Creates a new OpsItem. You must have permission in Identity and Access
         * Management (IAM) to create a new OpsItem. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">Amazon
         * Web Services Systems Manager OpsCenter</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateOpsItem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOpsItemOutcomeCallable CreateOpsItemCallable(const Model::CreateOpsItemRequest& request) const;

        /**
         * <p>Creates a new OpsItem. You must have permission in Identity and Access
         * Management (IAM) to create a new OpsItem. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">Amazon
         * Web Services Systems Manager OpsCenter</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateOpsItem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOpsItemAsync(const Model::CreateOpsItemRequest& request, const CreateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>If you create a new application in Application Manager, Amazon Web Services
         * Systems Manager calls this API operation to specify information about the new
         * application, including the application type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOpsMetadataOutcome CreateOpsMetadata(const Model::CreateOpsMetadataRequest& request) const;

        /**
         * <p>If you create a new application in Application Manager, Amazon Web Services
         * Systems Manager calls this API operation to specify information about the new
         * application, including the application type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateOpsMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOpsMetadataOutcomeCallable CreateOpsMetadataCallable(const Model::CreateOpsMetadataRequest& request) const;

        /**
         * <p>If you create a new application in Application Manager, Amazon Web Services
         * Systems Manager calls this API operation to specify information about the new
         * application, including the application type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateOpsMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOpsMetadataAsync(const Model::CreateOpsMetadataRequest& request, const CreateOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a patch baseline.</p>  <p>For information about valid key-value
         * pairs in <code>PatchFilters</code> for each supported operating system type, see
         * <a>PatchFilter</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreatePatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePatchBaselineOutcome CreatePatchBaseline(const Model::CreatePatchBaselineRequest& request) const;

        /**
         * <p>Creates a patch baseline.</p>  <p>For information about valid key-value
         * pairs in <code>PatchFilters</code> for each supported operating system type, see
         * <a>PatchFilter</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreatePatchBaseline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePatchBaselineOutcomeCallable CreatePatchBaselineCallable(const Model::CreatePatchBaselineRequest& request) const;

        /**
         * <p>Creates a patch baseline.</p>  <p>For information about valid key-value
         * pairs in <code>PatchFilters</code> for each supported operating system type, see
         * <a>PatchFilter</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreatePatchBaseline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePatchBaselineAsync(const Model::CreatePatchBaselineRequest& request, const CreatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A resource data sync helps you view data from multiple sources in a single
         * location. Amazon Web Services Systems Manager offers two types of resource data
         * sync: <code>SyncToDestination</code> and <code>SyncFromSource</code>.</p> <p>You
         * can configure Systems Manager Inventory to use the
         * <code>SyncToDestination</code> type to synchronize Inventory data from multiple
         * Amazon Web Services Regions to a single Amazon Simple Storage Service (Amazon
         * S3) bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-datasync.html">Configuring
         * resource data sync for Inventory</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>.</p> <p>You can configure Systems Manager Explorer to use
         * the <code>SyncFromSource</code> type to synchronize operational work items
         * (OpsItems) and operational data (OpsData) from multiple Amazon Web Services
         * Regions to a single Amazon S3 bucket. This type can synchronize OpsItems and
         * OpsData from multiple Amazon Web Services accounts and Amazon Web Services
         * Regions or <code>EntireOrganization</code> by using Organizations. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/Explorer-resource-data-sync.html">Setting
         * up Systems Manager Explorer to display data from multiple accounts and
         * Regions</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.</p>
         * <p>A resource data sync is an asynchronous operation that returns immediately.
         * After a successful initial sync is completed, the system continuously syncs
         * data. To check the status of a sync, use the <a>ListResourceDataSync</a>.</p>
         *  <p>By default, data isn't encrypted in Amazon S3. We strongly recommend
         * that you enable encryption in Amazon S3 to ensure secure data storage. We also
         * recommend that you secure access to the Amazon S3 bucket by creating a
         * restrictive bucket policy. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateResourceDataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceDataSyncOutcome CreateResourceDataSync(const Model::CreateResourceDataSyncRequest& request) const;

        /**
         * <p>A resource data sync helps you view data from multiple sources in a single
         * location. Amazon Web Services Systems Manager offers two types of resource data
         * sync: <code>SyncToDestination</code> and <code>SyncFromSource</code>.</p> <p>You
         * can configure Systems Manager Inventory to use the
         * <code>SyncToDestination</code> type to synchronize Inventory data from multiple
         * Amazon Web Services Regions to a single Amazon Simple Storage Service (Amazon
         * S3) bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-datasync.html">Configuring
         * resource data sync for Inventory</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>.</p> <p>You can configure Systems Manager Explorer to use
         * the <code>SyncFromSource</code> type to synchronize operational work items
         * (OpsItems) and operational data (OpsData) from multiple Amazon Web Services
         * Regions to a single Amazon S3 bucket. This type can synchronize OpsItems and
         * OpsData from multiple Amazon Web Services accounts and Amazon Web Services
         * Regions or <code>EntireOrganization</code> by using Organizations. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/Explorer-resource-data-sync.html">Setting
         * up Systems Manager Explorer to display data from multiple accounts and
         * Regions</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.</p>
         * <p>A resource data sync is an asynchronous operation that returns immediately.
         * After a successful initial sync is completed, the system continuously syncs
         * data. To check the status of a sync, use the <a>ListResourceDataSync</a>.</p>
         *  <p>By default, data isn't encrypted in Amazon S3. We strongly recommend
         * that you enable encryption in Amazon S3 to ensure secure data storage. We also
         * recommend that you secure access to the Amazon S3 bucket by creating a
         * restrictive bucket policy. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateResourceDataSync">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceDataSyncOutcomeCallable CreateResourceDataSyncCallable(const Model::CreateResourceDataSyncRequest& request) const;

        /**
         * <p>A resource data sync helps you view data from multiple sources in a single
         * location. Amazon Web Services Systems Manager offers two types of resource data
         * sync: <code>SyncToDestination</code> and <code>SyncFromSource</code>.</p> <p>You
         * can configure Systems Manager Inventory to use the
         * <code>SyncToDestination</code> type to synchronize Inventory data from multiple
         * Amazon Web Services Regions to a single Amazon Simple Storage Service (Amazon
         * S3) bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-datasync.html">Configuring
         * resource data sync for Inventory</a> in the <i>Amazon Web Services Systems
         * Manager User Guide</i>.</p> <p>You can configure Systems Manager Explorer to use
         * the <code>SyncFromSource</code> type to synchronize operational work items
         * (OpsItems) and operational data (OpsData) from multiple Amazon Web Services
         * Regions to a single Amazon S3 bucket. This type can synchronize OpsItems and
         * OpsData from multiple Amazon Web Services accounts and Amazon Web Services
         * Regions or <code>EntireOrganization</code> by using Organizations. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/Explorer-resource-data-sync.html">Setting
         * up Systems Manager Explorer to display data from multiple accounts and
         * Regions</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.</p>
         * <p>A resource data sync is an asynchronous operation that returns immediately.
         * After a successful initial sync is completed, the system continuously syncs
         * data. To check the status of a sync, use the <a>ListResourceDataSync</a>.</p>
         *  <p>By default, data isn't encrypted in Amazon S3. We strongly recommend
         * that you enable encryption in Amazon S3 to ensure secure data storage. We also
         * recommend that you secure access to the Amazon S3 bucket by creating a
         * restrictive bucket policy. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateResourceDataSync">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceDataSyncAsync(const Model::CreateResourceDataSyncRequest& request, const CreateResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an activation. You aren't required to delete an activation. If you
         * delete an activation, you can no longer use it to register additional managed
         * nodes. Deleting an activation doesn't de-register managed nodes. You must
         * manually de-register managed nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteActivation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteActivationOutcome DeleteActivation(const Model::DeleteActivationRequest& request) const;

        /**
         * <p>Deletes an activation. You aren't required to delete an activation. If you
         * delete an activation, you can no longer use it to register additional managed
         * nodes. Deleting an activation doesn't de-register managed nodes. You must
         * manually de-register managed nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteActivation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteActivationOutcomeCallable DeleteActivationCallable(const Model::DeleteActivationRequest& request) const;

        /**
         * <p>Deletes an activation. You aren't required to delete an activation. If you
         * delete an activation, you can no longer use it to register additional managed
         * nodes. Deleting an activation doesn't de-register managed nodes. You must
         * manually de-register managed nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteActivation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteActivationAsync(const Model::DeleteActivationRequest& request, const DeleteActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified Amazon Web Services Systems Manager document (SSM
         * document) from the specified managed node. If you created the association by
         * using the <code>Targets</code> parameter, then you must delete the association
         * by using the association ID.</p> <p>When you disassociate a document from a
         * managed node, it doesn't change the configuration of the node. To change the
         * configuration state of a managed node after you disassociate a document, you
         * must create a new document with the desired configuration and associate it with
         * the node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssociationOutcome DeleteAssociation(const Model::DeleteAssociationRequest& request) const;

        /**
         * <p>Disassociates the specified Amazon Web Services Systems Manager document (SSM
         * document) from the specified managed node. If you created the association by
         * using the <code>Targets</code> parameter, then you must delete the association
         * by using the association ID.</p> <p>When you disassociate a document from a
         * managed node, it doesn't change the configuration of the node. To change the
         * configuration state of a managed node after you disassociate a document, you
         * must create a new document with the desired configuration and associate it with
         * the node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssociationOutcomeCallable DeleteAssociationCallable(const Model::DeleteAssociationRequest& request) const;

        /**
         * <p>Disassociates the specified Amazon Web Services Systems Manager document (SSM
         * document) from the specified managed node. If you created the association by
         * using the <code>Targets</code> parameter, then you must delete the association
         * by using the association ID.</p> <p>When you disassociate a document from a
         * managed node, it doesn't change the configuration of the node. To change the
         * configuration state of a managed node after you disassociate a document, you
         * must create a new document with the desired configuration and associate it with
         * the node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssociationAsync(const Model::DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Amazon Web Services Systems Manager document (SSM document) and
         * all managed node associations to the document.</p> <p>Before you delete the
         * document, we recommend that you use <a>DeleteAssociation</a> to disassociate all
         * managed nodes that are associated with the document.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentOutcome DeleteDocument(const Model::DeleteDocumentRequest& request) const;

        /**
         * <p>Deletes the Amazon Web Services Systems Manager document (SSM document) and
         * all managed node associations to the document.</p> <p>Before you delete the
         * document, we recommend that you use <a>DeleteAssociation</a> to disassociate all
         * managed nodes that are associated with the document.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDocumentOutcomeCallable DeleteDocumentCallable(const Model::DeleteDocumentRequest& request) const;

        /**
         * <p>Deletes the Amazon Web Services Systems Manager document (SSM document) and
         * all managed node associations to the document.</p> <p>Before you delete the
         * document, we recommend that you use <a>DeleteAssociation</a> to disassociate all
         * managed nodes that are associated with the document.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDocumentAsync(const Model::DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a custom inventory type or the data associated with a custom Inventory
         * type. Deleting a custom inventory type is also referred to as deleting a custom
         * inventory schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteInventory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInventoryOutcome DeleteInventory(const Model::DeleteInventoryRequest& request) const;

        /**
         * <p>Delete a custom inventory type or the data associated with a custom Inventory
         * type. Deleting a custom inventory type is also referred to as deleting a custom
         * inventory schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteInventory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInventoryOutcomeCallable DeleteInventoryCallable(const Model::DeleteInventoryRequest& request) const;

        /**
         * <p>Delete a custom inventory type or the data associated with a custom Inventory
         * type. Deleting a custom inventory type is also referred to as deleting a custom
         * inventory schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteInventory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInventoryAsync(const Model::DeleteInventoryRequest& request, const DeleteInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMaintenanceWindowOutcome DeleteMaintenanceWindow(const Model::DeleteMaintenanceWindowRequest& request) const;

        /**
         * <p>Deletes a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMaintenanceWindowOutcomeCallable DeleteMaintenanceWindowCallable(const Model::DeleteMaintenanceWindowRequest& request) const;

        /**
         * <p>Deletes a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMaintenanceWindowAsync(const Model::DeleteMaintenanceWindowRequest& request, const DeleteMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete OpsMetadata related to an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOpsMetadataOutcome DeleteOpsMetadata(const Model::DeleteOpsMetadataRequest& request) const;

        /**
         * <p>Delete OpsMetadata related to an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteOpsMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOpsMetadataOutcomeCallable DeleteOpsMetadataCallable(const Model::DeleteOpsMetadataRequest& request) const;

        /**
         * <p>Delete OpsMetadata related to an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteOpsMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOpsMetadataAsync(const Model::DeleteOpsMetadataRequest& request, const DeleteOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a parameter from the system. After deleting a parameter, wait for at
         * least 30 seconds to create a parameter with the same name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParameterOutcome DeleteParameter(const Model::DeleteParameterRequest& request) const;

        /**
         * <p>Delete a parameter from the system. After deleting a parameter, wait for at
         * least 30 seconds to create a parameter with the same name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteParameterOutcomeCallable DeleteParameterCallable(const Model::DeleteParameterRequest& request) const;

        /**
         * <p>Delete a parameter from the system. After deleting a parameter, wait for at
         * least 30 seconds to create a parameter with the same name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteParameterAsync(const Model::DeleteParameterRequest& request, const DeleteParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a list of parameters. After deleting a parameter, wait for at least 30
         * seconds to create a parameter with the same name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParametersOutcome DeleteParameters(const Model::DeleteParametersRequest& request) const;

        /**
         * <p>Delete a list of parameters. After deleting a parameter, wait for at least 30
         * seconds to create a parameter with the same name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteParametersOutcomeCallable DeleteParametersCallable(const Model::DeleteParametersRequest& request) const;

        /**
         * <p>Delete a list of parameters. After deleting a parameter, wait for at least 30
         * seconds to create a parameter with the same name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteParametersAsync(const Model::DeleteParametersRequest& request, const DeleteParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeletePatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePatchBaselineOutcome DeletePatchBaseline(const Model::DeletePatchBaselineRequest& request) const;

        /**
         * <p>Deletes a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeletePatchBaseline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePatchBaselineOutcomeCallable DeletePatchBaselineCallable(const Model::DeletePatchBaselineRequest& request) const;

        /**
         * <p>Deletes a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeletePatchBaseline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePatchBaselineAsync(const Model::DeletePatchBaselineRequest& request, const DeletePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a resource data sync configuration. After the configuration is
         * deleted, changes to data on managed nodes are no longer synced to or from the
         * target. Deleting a sync configuration doesn't delete data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteResourceDataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceDataSyncOutcome DeleteResourceDataSync(const Model::DeleteResourceDataSyncRequest& request) const;

        /**
         * <p>Deletes a resource data sync configuration. After the configuration is
         * deleted, changes to data on managed nodes are no longer synced to or from the
         * target. Deleting a sync configuration doesn't delete data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteResourceDataSync">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceDataSyncOutcomeCallable DeleteResourceDataSyncCallable(const Model::DeleteResourceDataSyncRequest& request) const;

        /**
         * <p>Deletes a resource data sync configuration. After the configuration is
         * deleted, changes to data on managed nodes are no longer synced to or from the
         * target. Deleting a sync configuration doesn't delete data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteResourceDataSync">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceDataSyncAsync(const Model::DeleteResourceDataSyncRequest& request, const DeleteResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the server or virtual machine from the list of registered servers.
         * You can reregister the node again at any time. If you don't plan to use Run
         * Command on the server, we suggest uninstalling SSM Agent first.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterManagedInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterManagedInstanceOutcome DeregisterManagedInstance(const Model::DeregisterManagedInstanceRequest& request) const;

        /**
         * <p>Removes the server or virtual machine from the list of registered servers.
         * You can reregister the node again at any time. If you don't plan to use Run
         * Command on the server, we suggest uninstalling SSM Agent first.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterManagedInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterManagedInstanceOutcomeCallable DeregisterManagedInstanceCallable(const Model::DeregisterManagedInstanceRequest& request) const;

        /**
         * <p>Removes the server or virtual machine from the list of registered servers.
         * You can reregister the node again at any time. If you don't plan to use Run
         * Command on the server, we suggest uninstalling SSM Agent first.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterManagedInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterManagedInstanceAsync(const Model::DeregisterManagedInstanceRequest& request, const DeregisterManagedInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a patch group from a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterPatchBaselineForPatchGroupOutcome DeregisterPatchBaselineForPatchGroup(const Model::DeregisterPatchBaselineForPatchGroupRequest& request) const;

        /**
         * <p>Removes a patch group from a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterPatchBaselineForPatchGroupOutcomeCallable DeregisterPatchBaselineForPatchGroupCallable(const Model::DeregisterPatchBaselineForPatchGroupRequest& request) const;

        /**
         * <p>Removes a patch group from a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterPatchBaselineForPatchGroupAsync(const Model::DeregisterPatchBaselineForPatchGroupRequest& request, const DeregisterPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a target from a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterTargetFromMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTargetFromMaintenanceWindowOutcome DeregisterTargetFromMaintenanceWindow(const Model::DeregisterTargetFromMaintenanceWindowRequest& request) const;

        /**
         * <p>Removes a target from a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterTargetFromMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterTargetFromMaintenanceWindowOutcomeCallable DeregisterTargetFromMaintenanceWindowCallable(const Model::DeregisterTargetFromMaintenanceWindowRequest& request) const;

        /**
         * <p>Removes a target from a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterTargetFromMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterTargetFromMaintenanceWindowAsync(const Model::DeregisterTargetFromMaintenanceWindowRequest& request, const DeregisterTargetFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a task from a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterTaskFromMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTaskFromMaintenanceWindowOutcome DeregisterTaskFromMaintenanceWindow(const Model::DeregisterTaskFromMaintenanceWindowRequest& request) const;

        /**
         * <p>Removes a task from a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterTaskFromMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterTaskFromMaintenanceWindowOutcomeCallable DeregisterTaskFromMaintenanceWindowCallable(const Model::DeregisterTaskFromMaintenanceWindowRequest& request) const;

        /**
         * <p>Removes a task from a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterTaskFromMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterTaskFromMaintenanceWindowAsync(const Model::DeregisterTaskFromMaintenanceWindowRequest& request, const DeregisterTaskFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes details about the activation, such as the date and time the
         * activation was created, its expiration date, the Identity and Access Management
         * (IAM) role assigned to the managed nodes in the activation, and the number of
         * nodes registered by using this activation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeActivations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActivationsOutcome DescribeActivations(const Model::DescribeActivationsRequest& request) const;

        /**
         * <p>Describes details about the activation, such as the date and time the
         * activation was created, its expiration date, the Identity and Access Management
         * (IAM) role assigned to the managed nodes in the activation, and the number of
         * nodes registered by using this activation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeActivations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeActivationsOutcomeCallable DescribeActivationsCallable(const Model::DescribeActivationsRequest& request) const;

        /**
         * <p>Describes details about the activation, such as the date and time the
         * activation was created, its expiration date, the Identity and Access Management
         * (IAM) role assigned to the managed nodes in the activation, and the number of
         * nodes registered by using this activation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeActivations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeActivationsAsync(const Model::DescribeActivationsRequest& request, const DescribeActivationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the association for the specified target or managed node. If you
         * created the association by using the <code>Targets</code> parameter, then you
         * must retrieve the association by using the association ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssociationOutcome DescribeAssociation(const Model::DescribeAssociationRequest& request) const;

        /**
         * <p>Describes the association for the specified target or managed node. If you
         * created the association by using the <code>Targets</code> parameter, then you
         * must retrieve the association by using the association ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssociationOutcomeCallable DescribeAssociationCallable(const Model::DescribeAssociationRequest& request) const;

        /**
         * <p>Describes the association for the specified target or managed node. If you
         * created the association by using the <code>Targets</code> parameter, then you
         * must retrieve the association by using the association ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssociationAsync(const Model::DescribeAssociationRequest& request, const DescribeAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Views information about a specific execution of a specific
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutionTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssociationExecutionTargetsOutcome DescribeAssociationExecutionTargets(const Model::DescribeAssociationExecutionTargetsRequest& request) const;

        /**
         * <p>Views information about a specific execution of a specific
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutionTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssociationExecutionTargetsOutcomeCallable DescribeAssociationExecutionTargetsCallable(const Model::DescribeAssociationExecutionTargetsRequest& request) const;

        /**
         * <p>Views information about a specific execution of a specific
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutionTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssociationExecutionTargetsAsync(const Model::DescribeAssociationExecutionTargetsRequest& request, const DescribeAssociationExecutionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Views all executions for a specific association ID. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssociationExecutionsOutcome DescribeAssociationExecutions(const Model::DescribeAssociationExecutionsRequest& request) const;

        /**
         * <p>Views all executions for a specific association ID. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssociationExecutionsOutcomeCallable DescribeAssociationExecutionsCallable(const Model::DescribeAssociationExecutionsRequest& request) const;

        /**
         * <p>Views all executions for a specific association ID. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssociationExecutionsAsync(const Model::DescribeAssociationExecutionsRequest& request, const DescribeAssociationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides details about all active and terminated Automation
         * executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAutomationExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutomationExecutionsOutcome DescribeAutomationExecutions(const Model::DescribeAutomationExecutionsRequest& request) const;

        /**
         * <p>Provides details about all active and terminated Automation
         * executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAutomationExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAutomationExecutionsOutcomeCallable DescribeAutomationExecutionsCallable(const Model::DescribeAutomationExecutionsRequest& request) const;

        /**
         * <p>Provides details about all active and terminated Automation
         * executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAutomationExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAutomationExecutionsAsync(const Model::DescribeAutomationExecutionsRequest& request, const DescribeAutomationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Information about all active and terminated step executions in an Automation
         * workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAutomationStepExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutomationStepExecutionsOutcome DescribeAutomationStepExecutions(const Model::DescribeAutomationStepExecutionsRequest& request) const;

        /**
         * <p>Information about all active and terminated step executions in an Automation
         * workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAutomationStepExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAutomationStepExecutionsOutcomeCallable DescribeAutomationStepExecutionsCallable(const Model::DescribeAutomationStepExecutionsRequest& request) const;

        /**
         * <p>Information about all active and terminated step executions in an Automation
         * workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAutomationStepExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAutomationStepExecutionsAsync(const Model::DescribeAutomationStepExecutionsRequest& request, const DescribeAutomationStepExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all patches eligible to be included in a patch baseline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAvailablePatches">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAvailablePatchesOutcome DescribeAvailablePatches(const Model::DescribeAvailablePatchesRequest& request) const;

        /**
         * <p>Lists all patches eligible to be included in a patch baseline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAvailablePatches">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAvailablePatchesOutcomeCallable DescribeAvailablePatchesCallable(const Model::DescribeAvailablePatchesRequest& request) const;

        /**
         * <p>Lists all patches eligible to be included in a patch baseline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAvailablePatches">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAvailablePatchesAsync(const Model::DescribeAvailablePatchesRequest& request, const DescribeAvailablePatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Amazon Web Services Systems Manager document (SSM
         * document).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentOutcome DescribeDocument(const Model::DescribeDocumentRequest& request) const;

        /**
         * <p>Describes the specified Amazon Web Services Systems Manager document (SSM
         * document).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDocumentOutcomeCallable DescribeDocumentCallable(const Model::DescribeDocumentRequest& request) const;

        /**
         * <p>Describes the specified Amazon Web Services Systems Manager document (SSM
         * document).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDocumentAsync(const Model::DescribeDocumentRequest& request, const DescribeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the permissions for a Amazon Web Services Systems Manager document
         * (SSM document). If you created the document, you are the owner. If a document is
         * shared, it can either be shared privately (by specifying a user's Amazon Web
         * Services account ID) or publicly (<i>All</i>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocumentPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentPermissionOutcome DescribeDocumentPermission(const Model::DescribeDocumentPermissionRequest& request) const;

        /**
         * <p>Describes the permissions for a Amazon Web Services Systems Manager document
         * (SSM document). If you created the document, you are the owner. If a document is
         * shared, it can either be shared privately (by specifying a user's Amazon Web
         * Services account ID) or publicly (<i>All</i>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocumentPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDocumentPermissionOutcomeCallable DescribeDocumentPermissionCallable(const Model::DescribeDocumentPermissionRequest& request) const;

        /**
         * <p>Describes the permissions for a Amazon Web Services Systems Manager document
         * (SSM document). If you created the document, you are the owner. If a document is
         * shared, it can either be shared privately (by specifying a user's Amazon Web
         * Services account ID) or publicly (<i>All</i>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocumentPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDocumentPermissionAsync(const Model::DescribeDocumentPermissionRequest& request, const DescribeDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>All associations for the managed node(s).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectiveInstanceAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEffectiveInstanceAssociationsOutcome DescribeEffectiveInstanceAssociations(const Model::DescribeEffectiveInstanceAssociationsRequest& request) const;

        /**
         * <p>All associations for the managed node(s).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectiveInstanceAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEffectiveInstanceAssociationsOutcomeCallable DescribeEffectiveInstanceAssociationsCallable(const Model::DescribeEffectiveInstanceAssociationsRequest& request) const;

        /**
         * <p>All associations for the managed node(s).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectiveInstanceAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEffectiveInstanceAssociationsAsync(const Model::DescribeEffectiveInstanceAssociationsRequest& request, const DescribeEffectiveInstanceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current effective patches (the patch and the approval state)
         * for the specified patch baseline. Applies to patch baselines for Windows
         * only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectivePatchesForPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEffectivePatchesForPatchBaselineOutcome DescribeEffectivePatchesForPatchBaseline(const Model::DescribeEffectivePatchesForPatchBaselineRequest& request) const;

        /**
         * <p>Retrieves the current effective patches (the patch and the approval state)
         * for the specified patch baseline. Applies to patch baselines for Windows
         * only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectivePatchesForPatchBaseline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEffectivePatchesForPatchBaselineOutcomeCallable DescribeEffectivePatchesForPatchBaselineCallable(const Model::DescribeEffectivePatchesForPatchBaselineRequest& request) const;

        /**
         * <p>Retrieves the current effective patches (the patch and the approval state)
         * for the specified patch baseline. Applies to patch baselines for Windows
         * only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectivePatchesForPatchBaseline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEffectivePatchesForPatchBaselineAsync(const Model::DescribeEffectivePatchesForPatchBaselineRequest& request, const DescribeEffectivePatchesForPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The status of the associations for the managed node(s).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceAssociationsStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceAssociationsStatusOutcome DescribeInstanceAssociationsStatus(const Model::DescribeInstanceAssociationsStatusRequest& request) const;

        /**
         * <p>The status of the associations for the managed node(s).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceAssociationsStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceAssociationsStatusOutcomeCallable DescribeInstanceAssociationsStatusCallable(const Model::DescribeInstanceAssociationsStatusRequest& request) const;

        /**
         * <p>The status of the associations for the managed node(s).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceAssociationsStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceAssociationsStatusAsync(const Model::DescribeInstanceAssociationsStatusRequest& request, const DescribeInstanceAssociationsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your managed nodes, including information about the
         * operating system platform, the version of SSM Agent installed on the managed
         * node, node status, and so on.</p> <p>If you specify one or more managed node
         * IDs, it returns information for those managed nodes. If you don't specify node
         * IDs, it returns information for all your managed nodes. If you specify a node ID
         * that isn't valid or a node that you don't own, you receive an error.</p> 
         * <p>The <code>IamRole</code> field for this API operation is the Identity and
         * Access Management (IAM) role assigned to on-premises managed nodes. This call
         * doesn't return the IAM role for EC2 instances.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceInformationOutcome DescribeInstanceInformation(const Model::DescribeInstanceInformationRequest& request) const;

        /**
         * <p>Describes one or more of your managed nodes, including information about the
         * operating system platform, the version of SSM Agent installed on the managed
         * node, node status, and so on.</p> <p>If you specify one or more managed node
         * IDs, it returns information for those managed nodes. If you don't specify node
         * IDs, it returns information for all your managed nodes. If you specify a node ID
         * that isn't valid or a node that you don't own, you receive an error.</p> 
         * <p>The <code>IamRole</code> field for this API operation is the Identity and
         * Access Management (IAM) role assigned to on-premises managed nodes. This call
         * doesn't return the IAM role for EC2 instances.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceInformation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceInformationOutcomeCallable DescribeInstanceInformationCallable(const Model::DescribeInstanceInformationRequest& request) const;

        /**
         * <p>Describes one or more of your managed nodes, including information about the
         * operating system platform, the version of SSM Agent installed on the managed
         * node, node status, and so on.</p> <p>If you specify one or more managed node
         * IDs, it returns information for those managed nodes. If you don't specify node
         * IDs, it returns information for all your managed nodes. If you specify a node ID
         * that isn't valid or a node that you don't own, you receive an error.</p> 
         * <p>The <code>IamRole</code> field for this API operation is the Identity and
         * Access Management (IAM) role assigned to on-premises managed nodes. This call
         * doesn't return the IAM role for EC2 instances.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceInformation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceInformationAsync(const Model::DescribeInstanceInformationRequest& request, const DescribeInstanceInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the high-level patch state of one or more managed
         * nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancePatchStatesOutcome DescribeInstancePatchStates(const Model::DescribeInstancePatchStatesRequest& request) const;

        /**
         * <p>Retrieves the high-level patch state of one or more managed
         * nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancePatchStatesOutcomeCallable DescribeInstancePatchStatesCallable(const Model::DescribeInstancePatchStatesRequest& request) const;

        /**
         * <p>Retrieves the high-level patch state of one or more managed
         * nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancePatchStatesAsync(const Model::DescribeInstancePatchStatesRequest& request, const DescribeInstancePatchStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the high-level patch state for the managed nodes in the specified
         * patch group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStatesForPatchGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancePatchStatesForPatchGroupOutcome DescribeInstancePatchStatesForPatchGroup(const Model::DescribeInstancePatchStatesForPatchGroupRequest& request) const;

        /**
         * <p>Retrieves the high-level patch state for the managed nodes in the specified
         * patch group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStatesForPatchGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancePatchStatesForPatchGroupOutcomeCallable DescribeInstancePatchStatesForPatchGroupCallable(const Model::DescribeInstancePatchStatesForPatchGroupRequest& request) const;

        /**
         * <p>Retrieves the high-level patch state for the managed nodes in the specified
         * patch group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStatesForPatchGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancePatchStatesForPatchGroupAsync(const Model::DescribeInstancePatchStatesForPatchGroupRequest& request, const DescribeInstancePatchStatesForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the patches on the specified managed node and
         * their state relative to the patch baseline being used for the
         * node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatches">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancePatchesOutcome DescribeInstancePatches(const Model::DescribeInstancePatchesRequest& request) const;

        /**
         * <p>Retrieves information about the patches on the specified managed node and
         * their state relative to the patch baseline being used for the
         * node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatches">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancePatchesOutcomeCallable DescribeInstancePatchesCallable(const Model::DescribeInstancePatchesRequest& request) const;

        /**
         * <p>Retrieves information about the patches on the specified managed node and
         * their state relative to the patch baseline being used for the
         * node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatches">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancePatchesAsync(const Model::DescribeInstancePatchesRequest& request, const DescribeInstancePatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a specific delete inventory operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInventoryDeletions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInventoryDeletionsOutcome DescribeInventoryDeletions(const Model::DescribeInventoryDeletionsRequest& request) const;

        /**
         * <p>Describes a specific delete inventory operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInventoryDeletions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInventoryDeletionsOutcomeCallable DescribeInventoryDeletionsCallable(const Model::DescribeInventoryDeletionsRequest& request) const;

        /**
         * <p>Describes a specific delete inventory operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInventoryDeletions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInventoryDeletionsAsync(const Model::DescribeInventoryDeletionsRequest& request, const DescribeInventoryDeletionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the individual task executions (one per target) for a particular
         * task run as part of a maintenance window execution.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutionTaskInvocations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowExecutionTaskInvocationsOutcome DescribeMaintenanceWindowExecutionTaskInvocations(const Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request) const;

        /**
         * <p>Retrieves the individual task executions (one per target) for a particular
         * task run as part of a maintenance window execution.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutionTaskInvocations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowExecutionTaskInvocationsOutcomeCallable DescribeMaintenanceWindowExecutionTaskInvocationsCallable(const Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request) const;

        /**
         * <p>Retrieves the individual task executions (one per target) for a particular
         * task run as part of a maintenance window execution.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutionTaskInvocations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowExecutionTaskInvocationsAsync(const Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request, const DescribeMaintenanceWindowExecutionTaskInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For a given maintenance window execution, lists the tasks that were
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutionTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowExecutionTasksOutcome DescribeMaintenanceWindowExecutionTasks(const Model::DescribeMaintenanceWindowExecutionTasksRequest& request) const;

        /**
         * <p>For a given maintenance window execution, lists the tasks that were
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutionTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowExecutionTasksOutcomeCallable DescribeMaintenanceWindowExecutionTasksCallable(const Model::DescribeMaintenanceWindowExecutionTasksRequest& request) const;

        /**
         * <p>For a given maintenance window execution, lists the tasks that were
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutionTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowExecutionTasksAsync(const Model::DescribeMaintenanceWindowExecutionTasksRequest& request, const DescribeMaintenanceWindowExecutionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the executions of a maintenance window. This includes information about
         * when the maintenance window was scheduled to be active, and information about
         * tasks registered and run with the maintenance window.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowExecutionsOutcome DescribeMaintenanceWindowExecutions(const Model::DescribeMaintenanceWindowExecutionsRequest& request) const;

        /**
         * <p>Lists the executions of a maintenance window. This includes information about
         * when the maintenance window was scheduled to be active, and information about
         * tasks registered and run with the maintenance window.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowExecutionsOutcomeCallable DescribeMaintenanceWindowExecutionsCallable(const Model::DescribeMaintenanceWindowExecutionsRequest& request) const;

        /**
         * <p>Lists the executions of a maintenance window. This includes information about
         * when the maintenance window was scheduled to be active, and information about
         * tasks registered and run with the maintenance window.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowExecutionsAsync(const Model::DescribeMaintenanceWindowExecutionsRequest& request, const DescribeMaintenanceWindowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about upcoming executions of a maintenance
         * window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowScheduleOutcome DescribeMaintenanceWindowSchedule(const Model::DescribeMaintenanceWindowScheduleRequest& request) const;

        /**
         * <p>Retrieves information about upcoming executions of a maintenance
         * window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowScheduleOutcomeCallable DescribeMaintenanceWindowScheduleCallable(const Model::DescribeMaintenanceWindowScheduleRequest& request) const;

        /**
         * <p>Retrieves information about upcoming executions of a maintenance
         * window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowScheduleAsync(const Model::DescribeMaintenanceWindowScheduleRequest& request, const DescribeMaintenanceWindowScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the targets registered with the maintenance window.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowTargetsOutcome DescribeMaintenanceWindowTargets(const Model::DescribeMaintenanceWindowTargetsRequest& request) const;

        /**
         * <p>Lists the targets registered with the maintenance window.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowTargetsOutcomeCallable DescribeMaintenanceWindowTargetsCallable(const Model::DescribeMaintenanceWindowTargetsRequest& request) const;

        /**
         * <p>Lists the targets registered with the maintenance window.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowTargetsAsync(const Model::DescribeMaintenanceWindowTargetsRequest& request, const DescribeMaintenanceWindowTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tasks in a maintenance window.</p>  <p>For maintenance window
         * tasks without a specified target, you can't supply values for
         * <code>--max-errors</code> and <code>--max-concurrency</code>. Instead, the
         * system inserts a placeholder value of <code>1</code>, which may be reported in
         * the response to this command. These values don't affect the running of your task
         * and can be ignored.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowTasksOutcome DescribeMaintenanceWindowTasks(const Model::DescribeMaintenanceWindowTasksRequest& request) const;

        /**
         * <p>Lists the tasks in a maintenance window.</p>  <p>For maintenance window
         * tasks without a specified target, you can't supply values for
         * <code>--max-errors</code> and <code>--max-concurrency</code>. Instead, the
         * system inserts a placeholder value of <code>1</code>, which may be reported in
         * the response to this command. These values don't affect the running of your task
         * and can be ignored.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowTasksOutcomeCallable DescribeMaintenanceWindowTasksCallable(const Model::DescribeMaintenanceWindowTasksRequest& request) const;

        /**
         * <p>Lists the tasks in a maintenance window.</p>  <p>For maintenance window
         * tasks without a specified target, you can't supply values for
         * <code>--max-errors</code> and <code>--max-concurrency</code>. Instead, the
         * system inserts a placeholder value of <code>1</code>, which may be reported in
         * the response to this command. These values don't affect the running of your task
         * and can be ignored.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowTasksAsync(const Model::DescribeMaintenanceWindowTasksRequest& request, const DescribeMaintenanceWindowTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the maintenance windows in an Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindows">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowsOutcome DescribeMaintenanceWindows(const Model::DescribeMaintenanceWindowsRequest& request) const;

        /**
         * <p>Retrieves the maintenance windows in an Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindows">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowsOutcomeCallable DescribeMaintenanceWindowsCallable(const Model::DescribeMaintenanceWindowsRequest& request) const;

        /**
         * <p>Retrieves the maintenance windows in an Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindows">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowsAsync(const Model::DescribeMaintenanceWindowsRequest& request, const DescribeMaintenanceWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the maintenance window targets or tasks that a
         * managed node is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowsForTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowsForTargetOutcome DescribeMaintenanceWindowsForTarget(const Model::DescribeMaintenanceWindowsForTargetRequest& request) const;

        /**
         * <p>Retrieves information about the maintenance window targets or tasks that a
         * managed node is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowsForTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowsForTargetOutcomeCallable DescribeMaintenanceWindowsForTargetCallable(const Model::DescribeMaintenanceWindowsForTargetRequest& request) const;

        /**
         * <p>Retrieves information about the maintenance window targets or tasks that a
         * managed node is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowsForTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowsForTargetAsync(const Model::DescribeMaintenanceWindowsForTargetRequest& request, const DescribeMaintenanceWindowsForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Query a set of OpsItems. You must have permission in Identity and Access
         * Management (IAM) to query a list of OpsItems. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeOpsItems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOpsItemsOutcome DescribeOpsItems(const Model::DescribeOpsItemsRequest& request) const;

        /**
         * <p>Query a set of OpsItems. You must have permission in Identity and Access
         * Management (IAM) to query a list of OpsItems. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeOpsItems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOpsItemsOutcomeCallable DescribeOpsItemsCallable(const Model::DescribeOpsItemsRequest& request) const;

        /**
         * <p>Query a set of OpsItems. You must have permission in Identity and Access
         * Management (IAM) to query a list of OpsItems. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeOpsItems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOpsItemsAsync(const Model::DescribeOpsItemsRequest& request, const DescribeOpsItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about a parameter.</p> <p>Request results are returned on a
         * best-effort basis. If you specify <code>MaxResults</code> in the request, the
         * response includes information up to the limit specified. The number of items
         * returned, however, can be between zero and the value of <code>MaxResults</code>.
         * If the service reaches an internal limit while processing the results, it stops
         * the operation and returns the matching values up to that point and a
         * <code>NextToken</code>. You can specify the <code>NextToken</code> in a
         * subsequent call to get the next set of results.</p>  <p>If you change
         * the KMS key alias for the KMS key used to encrypt a parameter, then you must
         * also update the key alias the parameter uses to reference KMS. Otherwise,
         * <code>DescribeParameters</code> retrieves whatever the original key alias was
         * referencing.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeParametersOutcome DescribeParameters(const Model::DescribeParametersRequest& request) const;

        /**
         * <p>Get information about a parameter.</p> <p>Request results are returned on a
         * best-effort basis. If you specify <code>MaxResults</code> in the request, the
         * response includes information up to the limit specified. The number of items
         * returned, however, can be between zero and the value of <code>MaxResults</code>.
         * If the service reaches an internal limit while processing the results, it stops
         * the operation and returns the matching values up to that point and a
         * <code>NextToken</code>. You can specify the <code>NextToken</code> in a
         * subsequent call to get the next set of results.</p>  <p>If you change
         * the KMS key alias for the KMS key used to encrypt a parameter, then you must
         * also update the key alias the parameter uses to reference KMS. Otherwise,
         * <code>DescribeParameters</code> retrieves whatever the original key alias was
         * referencing.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeParametersOutcomeCallable DescribeParametersCallable(const Model::DescribeParametersRequest& request) const;

        /**
         * <p>Get information about a parameter.</p> <p>Request results are returned on a
         * best-effort basis. If you specify <code>MaxResults</code> in the request, the
         * response includes information up to the limit specified. The number of items
         * returned, however, can be between zero and the value of <code>MaxResults</code>.
         * If the service reaches an internal limit while processing the results, it stops
         * the operation and returns the matching values up to that point and a
         * <code>NextToken</code>. You can specify the <code>NextToken</code> in a
         * subsequent call to get the next set of results.</p>  <p>If you change
         * the KMS key alias for the KMS key used to encrypt a parameter, then you must
         * also update the key alias the parameter uses to reference KMS. Otherwise,
         * <code>DescribeParameters</code> retrieves whatever the original key alias was
         * referencing.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the patch baselines in your Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchBaselines">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchBaselinesOutcome DescribePatchBaselines(const Model::DescribePatchBaselinesRequest& request) const;

        /**
         * <p>Lists the patch baselines in your Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchBaselines">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePatchBaselinesOutcomeCallable DescribePatchBaselinesCallable(const Model::DescribePatchBaselinesRequest& request) const;

        /**
         * <p>Lists the patch baselines in your Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchBaselines">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePatchBaselinesAsync(const Model::DescribePatchBaselinesRequest& request, const DescribePatchBaselinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns high-level aggregated patch compliance state information for a patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchGroupState">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchGroupStateOutcome DescribePatchGroupState(const Model::DescribePatchGroupStateRequest& request) const;

        /**
         * <p>Returns high-level aggregated patch compliance state information for a patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchGroupState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePatchGroupStateOutcomeCallable DescribePatchGroupStateCallable(const Model::DescribePatchGroupStateRequest& request) const;

        /**
         * <p>Returns high-level aggregated patch compliance state information for a patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchGroupState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePatchGroupStateAsync(const Model::DescribePatchGroupStateRequest& request, const DescribePatchGroupStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all patch groups that have been registered with patch
         * baselines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchGroupsOutcome DescribePatchGroups(const Model::DescribePatchGroupsRequest& request) const;

        /**
         * <p>Lists all patch groups that have been registered with patch
         * baselines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePatchGroupsOutcomeCallable DescribePatchGroupsCallable(const Model::DescribePatchGroupsRequest& request) const;

        /**
         * <p>Lists all patch groups that have been registered with patch
         * baselines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePatchGroupsAsync(const Model::DescribePatchGroupsRequest& request, const DescribePatchGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the properties of available patches organized by product, product
         * family, classification, severity, and other properties of available patches. You
         * can use the reported properties in the filters you specify in requests for
         * operations such as <a>CreatePatchBaseline</a>, <a>UpdatePatchBaseline</a>,
         * <a>DescribeAvailablePatches</a>, and <a>DescribePatchBaselines</a>.</p> <p>The
         * following section lists the properties that can be used in filters for each
         * major operating system type:</p> <dl> <dt>AMAZON_LINUX</dt> <dd> <p>Valid
         * properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>AMAZON_LINUX_2</dt> <dd> <p>Valid
         * properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>CENTOS</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p>
         * </dd> <dt>DEBIAN</dt> <dd> <p>Valid properties: <code>PRODUCT</code> |
         * <code>PRIORITY</code> </p> </dd> <dt>MACOS</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>CLASSIFICATION</code> </p> </dd>
         * <dt>ORACLE_LINUX</dt> <dd> <p>Valid properties: <code>PRODUCT</code> |
         * <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p> </dd>
         * <dt>REDHAT_ENTERPRISE_LINUX</dt> <dd> <p>Valid properties: <code>PRODUCT</code>
         * | <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p> </dd> <dt>SUSE</dt>
         * <dd> <p>Valid properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>UBUNTU</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>PRIORITY</code> </p> </dd> <dt>WINDOWS</dt> <dd>
         * <p>Valid properties: <code>PRODUCT</code> | <code>PRODUCT_FAMILY</code> |
         * <code>CLASSIFICATION</code> | <code>MSRC_SEVERITY</code> </p> </dd>
         * </dl><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchPropertiesOutcome DescribePatchProperties(const Model::DescribePatchPropertiesRequest& request) const;

        /**
         * <p>Lists the properties of available patches organized by product, product
         * family, classification, severity, and other properties of available patches. You
         * can use the reported properties in the filters you specify in requests for
         * operations such as <a>CreatePatchBaseline</a>, <a>UpdatePatchBaseline</a>,
         * <a>DescribeAvailablePatches</a>, and <a>DescribePatchBaselines</a>.</p> <p>The
         * following section lists the properties that can be used in filters for each
         * major operating system type:</p> <dl> <dt>AMAZON_LINUX</dt> <dd> <p>Valid
         * properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>AMAZON_LINUX_2</dt> <dd> <p>Valid
         * properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>CENTOS</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p>
         * </dd> <dt>DEBIAN</dt> <dd> <p>Valid properties: <code>PRODUCT</code> |
         * <code>PRIORITY</code> </p> </dd> <dt>MACOS</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>CLASSIFICATION</code> </p> </dd>
         * <dt>ORACLE_LINUX</dt> <dd> <p>Valid properties: <code>PRODUCT</code> |
         * <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p> </dd>
         * <dt>REDHAT_ENTERPRISE_LINUX</dt> <dd> <p>Valid properties: <code>PRODUCT</code>
         * | <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p> </dd> <dt>SUSE</dt>
         * <dd> <p>Valid properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>UBUNTU</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>PRIORITY</code> </p> </dd> <dt>WINDOWS</dt> <dd>
         * <p>Valid properties: <code>PRODUCT</code> | <code>PRODUCT_FAMILY</code> |
         * <code>CLASSIFICATION</code> | <code>MSRC_SEVERITY</code> </p> </dd>
         * </dl><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchProperties">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePatchPropertiesOutcomeCallable DescribePatchPropertiesCallable(const Model::DescribePatchPropertiesRequest& request) const;

        /**
         * <p>Lists the properties of available patches organized by product, product
         * family, classification, severity, and other properties of available patches. You
         * can use the reported properties in the filters you specify in requests for
         * operations such as <a>CreatePatchBaseline</a>, <a>UpdatePatchBaseline</a>,
         * <a>DescribeAvailablePatches</a>, and <a>DescribePatchBaselines</a>.</p> <p>The
         * following section lists the properties that can be used in filters for each
         * major operating system type:</p> <dl> <dt>AMAZON_LINUX</dt> <dd> <p>Valid
         * properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>AMAZON_LINUX_2</dt> <dd> <p>Valid
         * properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>CENTOS</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p>
         * </dd> <dt>DEBIAN</dt> <dd> <p>Valid properties: <code>PRODUCT</code> |
         * <code>PRIORITY</code> </p> </dd> <dt>MACOS</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>CLASSIFICATION</code> </p> </dd>
         * <dt>ORACLE_LINUX</dt> <dd> <p>Valid properties: <code>PRODUCT</code> |
         * <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p> </dd>
         * <dt>REDHAT_ENTERPRISE_LINUX</dt> <dd> <p>Valid properties: <code>PRODUCT</code>
         * | <code>CLASSIFICATION</code> | <code>SEVERITY</code> </p> </dd> <dt>SUSE</dt>
         * <dd> <p>Valid properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> |
         * <code>SEVERITY</code> </p> </dd> <dt>UBUNTU</dt> <dd> <p>Valid properties:
         * <code>PRODUCT</code> | <code>PRIORITY</code> </p> </dd> <dt>WINDOWS</dt> <dd>
         * <p>Valid properties: <code>PRODUCT</code> | <code>PRODUCT_FAMILY</code> |
         * <code>CLASSIFICATION</code> | <code>MSRC_SEVERITY</code> </p> </dd>
         * </dl><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchProperties">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePatchPropertiesAsync(const Model::DescribePatchPropertiesRequest& request, const DescribePatchPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of all active sessions (both connected and disconnected) or
         * terminated sessions from the past 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSessionsOutcome DescribeSessions(const Model::DescribeSessionsRequest& request) const;

        /**
         * <p>Retrieves a list of all active sessions (both connected and disconnected) or
         * terminated sessions from the past 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeSessions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSessionsOutcomeCallable DescribeSessionsCallable(const Model::DescribeSessionsRequest& request) const;

        /**
         * <p>Retrieves a list of all active sessions (both connected and disconnected) or
         * terminated sessions from the past 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeSessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSessionsAsync(const Model::DescribeSessionsRequest& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the association between an OpsItem and a related item. For example,
         * this API operation can delete an Incident Manager incident from an OpsItem.
         * Incident Manager is a capability of Amazon Web Services Systems
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DisassociateOpsItemRelatedItem">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateOpsItemRelatedItemOutcome DisassociateOpsItemRelatedItem(const Model::DisassociateOpsItemRelatedItemRequest& request) const;

        /**
         * <p>Deletes the association between an OpsItem and a related item. For example,
         * this API operation can delete an Incident Manager incident from an OpsItem.
         * Incident Manager is a capability of Amazon Web Services Systems
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DisassociateOpsItemRelatedItem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateOpsItemRelatedItemOutcomeCallable DisassociateOpsItemRelatedItemCallable(const Model::DisassociateOpsItemRelatedItemRequest& request) const;

        /**
         * <p>Deletes the association between an OpsItem and a related item. For example,
         * this API operation can delete an Incident Manager incident from an OpsItem.
         * Incident Manager is a capability of Amazon Web Services Systems
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DisassociateOpsItemRelatedItem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateOpsItemRelatedItemAsync(const Model::DisassociateOpsItemRelatedItemRequest& request, const DisassociateOpsItemRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get detailed information about a particular Automation
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetAutomationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutomationExecutionOutcome GetAutomationExecution(const Model::GetAutomationExecutionRequest& request) const;

        /**
         * <p>Get detailed information about a particular Automation
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetAutomationExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAutomationExecutionOutcomeCallable GetAutomationExecutionCallable(const Model::GetAutomationExecutionRequest& request) const;

        /**
         * <p>Get detailed information about a particular Automation
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetAutomationExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAutomationExecutionAsync(const Model::GetAutomationExecutionRequest& request, const GetAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the state of a Amazon Web Services Systems Manager change calendar at
         * the current time or a specified time. If you specify a time,
         * <code>GetCalendarState</code> returns the state of the calendar at that specific
         * time, and returns the next time that the change calendar state will transition.
         * If you don't specify a time, <code>GetCalendarState</code> uses the current
         * time. Change Calendar entries have two possible states: <code>OPEN</code> or
         * <code>CLOSED</code>.</p> <p>If you specify more than one calendar in a request,
         * the command returns the status of <code>OPEN</code> only if all calendars in the
         * request are open. If one or more calendars in the request are closed, the status
         * returned is <code>CLOSED</code>.</p> <p>For more information about Change
         * Calendar, a capability of Amazon Web Services Systems Manager, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-change-calendar.html">Amazon
         * Web Services Systems Manager Change Calendar</a> in the <i>Amazon Web Services
         * Systems Manager User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetCalendarState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCalendarStateOutcome GetCalendarState(const Model::GetCalendarStateRequest& request) const;

        /**
         * <p>Gets the state of a Amazon Web Services Systems Manager change calendar at
         * the current time or a specified time. If you specify a time,
         * <code>GetCalendarState</code> returns the state of the calendar at that specific
         * time, and returns the next time that the change calendar state will transition.
         * If you don't specify a time, <code>GetCalendarState</code> uses the current
         * time. Change Calendar entries have two possible states: <code>OPEN</code> or
         * <code>CLOSED</code>.</p> <p>If you specify more than one calendar in a request,
         * the command returns the status of <code>OPEN</code> only if all calendars in the
         * request are open. If one or more calendars in the request are closed, the status
         * returned is <code>CLOSED</code>.</p> <p>For more information about Change
         * Calendar, a capability of Amazon Web Services Systems Manager, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-change-calendar.html">Amazon
         * Web Services Systems Manager Change Calendar</a> in the <i>Amazon Web Services
         * Systems Manager User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetCalendarState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCalendarStateOutcomeCallable GetCalendarStateCallable(const Model::GetCalendarStateRequest& request) const;

        /**
         * <p>Gets the state of a Amazon Web Services Systems Manager change calendar at
         * the current time or a specified time. If you specify a time,
         * <code>GetCalendarState</code> returns the state of the calendar at that specific
         * time, and returns the next time that the change calendar state will transition.
         * If you don't specify a time, <code>GetCalendarState</code> uses the current
         * time. Change Calendar entries have two possible states: <code>OPEN</code> or
         * <code>CLOSED</code>.</p> <p>If you specify more than one calendar in a request,
         * the command returns the status of <code>OPEN</code> only if all calendars in the
         * request are open. If one or more calendars in the request are closed, the status
         * returned is <code>CLOSED</code>.</p> <p>For more information about Change
         * Calendar, a capability of Amazon Web Services Systems Manager, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-change-calendar.html">Amazon
         * Web Services Systems Manager Change Calendar</a> in the <i>Amazon Web Services
         * Systems Manager User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetCalendarState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCalendarStateAsync(const Model::GetCalendarStateRequest& request, const GetCalendarStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about command execution for an invocation or
         * plugin.</p> <p> <code>GetCommandInvocation</code> only gives the execution
         * status of a plugin in a document. To get the command execution status on a
         * specific managed node, use <a>ListCommandInvocations</a>. To get the command
         * execution status across managed nodes, use <a>ListCommands</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetCommandInvocation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommandInvocationOutcome GetCommandInvocation(const Model::GetCommandInvocationRequest& request) const;

        /**
         * <p>Returns detailed information about command execution for an invocation or
         * plugin.</p> <p> <code>GetCommandInvocation</code> only gives the execution
         * status of a plugin in a document. To get the command execution status on a
         * specific managed node, use <a>ListCommandInvocations</a>. To get the command
         * execution status across managed nodes, use <a>ListCommands</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetCommandInvocation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCommandInvocationOutcomeCallable GetCommandInvocationCallable(const Model::GetCommandInvocationRequest& request) const;

        /**
         * <p>Returns detailed information about command execution for an invocation or
         * plugin.</p> <p> <code>GetCommandInvocation</code> only gives the execution
         * status of a plugin in a document. To get the command execution status on a
         * specific managed node, use <a>ListCommandInvocations</a>. To get the command
         * execution status across managed nodes, use <a>ListCommands</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetCommandInvocation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCommandInvocationAsync(const Model::GetCommandInvocationRequest& request, const GetCommandInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the Session Manager connection status for a managed node to
         * determine whether it is running and ready to receive Session Manager
         * connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetConnectionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionStatusOutcome GetConnectionStatus(const Model::GetConnectionStatusRequest& request) const;

        /**
         * <p>Retrieves the Session Manager connection status for a managed node to
         * determine whether it is running and ready to receive Session Manager
         * connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetConnectionStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectionStatusOutcomeCallable GetConnectionStatusCallable(const Model::GetConnectionStatusRequest& request) const;

        /**
         * <p>Retrieves the Session Manager connection status for a managed node to
         * determine whether it is running and ready to receive Session Manager
         * connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetConnectionStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectionStatusAsync(const Model::GetConnectionStatusRequest& request, const GetConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the default patch baseline. Amazon Web Services Systems Manager
         * supports creating multiple default patch baselines. For example, you can create
         * a default patch baseline for each operating system.</p> <p>If you don't specify
         * an operating system value, the default patch baseline for Windows is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDefaultPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDefaultPatchBaselineOutcome GetDefaultPatchBaseline(const Model::GetDefaultPatchBaselineRequest& request) const;

        /**
         * <p>Retrieves the default patch baseline. Amazon Web Services Systems Manager
         * supports creating multiple default patch baselines. For example, you can create
         * a default patch baseline for each operating system.</p> <p>If you don't specify
         * an operating system value, the default patch baseline for Windows is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDefaultPatchBaseline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDefaultPatchBaselineOutcomeCallable GetDefaultPatchBaselineCallable(const Model::GetDefaultPatchBaselineRequest& request) const;

        /**
         * <p>Retrieves the default patch baseline. Amazon Web Services Systems Manager
         * supports creating multiple default patch baselines. For example, you can create
         * a default patch baseline for each operating system.</p> <p>If you don't specify
         * an operating system value, the default patch baseline for Windows is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDefaultPatchBaseline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDefaultPatchBaselineAsync(const Model::GetDefaultPatchBaselineRequest& request, const GetDefaultPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current snapshot for the patch baseline the managed node uses.
         * This API is primarily used by the <code>AWS-RunPatchBaseline</code> Systems
         * Manager document (SSM document).</p>  <p>If you run the command locally,
         * such as with the Command Line Interface (CLI), the system attempts to use your
         * local Amazon Web Services credentials and the operation fails. To avoid this,
         * you can run the command in the Amazon Web Services Systems Manager console. Use
         * Run Command, a capability of Amazon Web Services Systems Manager, with an SSM
         * document that enables you to target a managed node with a script or command. For
         * example, run the command using the <code>AWS-RunShellScript</code> document or
         * the <code>AWS-RunPowerShellScript</code> document.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDeployablePatchSnapshotForInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeployablePatchSnapshotForInstanceOutcome GetDeployablePatchSnapshotForInstance(const Model::GetDeployablePatchSnapshotForInstanceRequest& request) const;

        /**
         * <p>Retrieves the current snapshot for the patch baseline the managed node uses.
         * This API is primarily used by the <code>AWS-RunPatchBaseline</code> Systems
         * Manager document (SSM document).</p>  <p>If you run the command locally,
         * such as with the Command Line Interface (CLI), the system attempts to use your
         * local Amazon Web Services credentials and the operation fails. To avoid this,
         * you can run the command in the Amazon Web Services Systems Manager console. Use
         * Run Command, a capability of Amazon Web Services Systems Manager, with an SSM
         * document that enables you to target a managed node with a script or command. For
         * example, run the command using the <code>AWS-RunShellScript</code> document or
         * the <code>AWS-RunPowerShellScript</code> document.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDeployablePatchSnapshotForInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeployablePatchSnapshotForInstanceOutcomeCallable GetDeployablePatchSnapshotForInstanceCallable(const Model::GetDeployablePatchSnapshotForInstanceRequest& request) const;

        /**
         * <p>Retrieves the current snapshot for the patch baseline the managed node uses.
         * This API is primarily used by the <code>AWS-RunPatchBaseline</code> Systems
         * Manager document (SSM document).</p>  <p>If you run the command locally,
         * such as with the Command Line Interface (CLI), the system attempts to use your
         * local Amazon Web Services credentials and the operation fails. To avoid this,
         * you can run the command in the Amazon Web Services Systems Manager console. Use
         * Run Command, a capability of Amazon Web Services Systems Manager, with an SSM
         * document that enables you to target a managed node with a script or command. For
         * example, run the command using the <code>AWS-RunShellScript</code> document or
         * the <code>AWS-RunPowerShellScript</code> document.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDeployablePatchSnapshotForInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeployablePatchSnapshotForInstanceAsync(const Model::GetDeployablePatchSnapshotForInstanceRequest& request, const GetDeployablePatchSnapshotForInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the contents of the specified Amazon Web Services Systems Manager
         * document (SSM document).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDocument">AWS API
         * Reference</a></p>
         */
        virtual Model::GetDocumentOutcome GetDocument(const Model::GetDocumentRequest& request) const;

        /**
         * <p>Gets the contents of the specified Amazon Web Services Systems Manager
         * document (SSM document).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDocument">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentOutcomeCallable GetDocumentCallable(const Model::GetDocumentRequest& request) const;

        /**
         * <p>Gets the contents of the specified Amazon Web Services Systems Manager
         * document (SSM document).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDocument">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentAsync(const Model::GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Query inventory information. This includes managed node status, such as
         * <code>Stopped</code> or <code>Terminated</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInventoryOutcome GetInventory(const Model::GetInventoryRequest& request) const;

        /**
         * <p>Query inventory information. This includes managed node status, such as
         * <code>Stopped</code> or <code>Terminated</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInventoryOutcomeCallable GetInventoryCallable(const Model::GetInventoryRequest& request) const;

        /**
         * <p>Query inventory information. This includes managed node status, such as
         * <code>Stopped</code> or <code>Terminated</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInventoryAsync(const Model::GetInventoryRequest& request, const GetInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Return a list of inventory type names for the account, or return a list of
         * attribute names for a specific Inventory item type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventorySchema">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInventorySchemaOutcome GetInventorySchema(const Model::GetInventorySchemaRequest& request) const;

        /**
         * <p>Return a list of inventory type names for the account, or return a list of
         * attribute names for a specific Inventory item type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventorySchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInventorySchemaOutcomeCallable GetInventorySchemaCallable(const Model::GetInventorySchemaRequest& request) const;

        /**
         * <p>Return a list of inventory type names for the account, or return a list of
         * attribute names for a specific Inventory item type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventorySchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInventorySchemaAsync(const Model::GetInventorySchemaRequest& request, const GetInventorySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowOutcome GetMaintenanceWindow(const Model::GetMaintenanceWindowRequest& request) const;

        /**
         * <p>Retrieves a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMaintenanceWindowOutcomeCallable GetMaintenanceWindowCallable(const Model::GetMaintenanceWindowRequest& request) const;

        /**
         * <p>Retrieves a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMaintenanceWindowAsync(const Model::GetMaintenanceWindowRequest& request, const GetMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details about a specific a maintenance window
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowExecutionOutcome GetMaintenanceWindowExecution(const Model::GetMaintenanceWindowExecutionRequest& request) const;

        /**
         * <p>Retrieves details about a specific a maintenance window
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMaintenanceWindowExecutionOutcomeCallable GetMaintenanceWindowExecutionCallable(const Model::GetMaintenanceWindowExecutionRequest& request) const;

        /**
         * <p>Retrieves details about a specific a maintenance window
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMaintenanceWindowExecutionAsync(const Model::GetMaintenanceWindowExecutionRequest& request, const GetMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details about a specific task run as part of a maintenance
         * window execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecutionTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowExecutionTaskOutcome GetMaintenanceWindowExecutionTask(const Model::GetMaintenanceWindowExecutionTaskRequest& request) const;

        /**
         * <p>Retrieves the details about a specific task run as part of a maintenance
         * window execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecutionTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMaintenanceWindowExecutionTaskOutcomeCallable GetMaintenanceWindowExecutionTaskCallable(const Model::GetMaintenanceWindowExecutionTaskRequest& request) const;

        /**
         * <p>Retrieves the details about a specific task run as part of a maintenance
         * window execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecutionTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMaintenanceWindowExecutionTaskAsync(const Model::GetMaintenanceWindowExecutionTaskRequest& request, const GetMaintenanceWindowExecutionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a specific task running on a specific
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecutionTaskInvocation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowExecutionTaskInvocationOutcome GetMaintenanceWindowExecutionTaskInvocation(const Model::GetMaintenanceWindowExecutionTaskInvocationRequest& request) const;

        /**
         * <p>Retrieves information about a specific task running on a specific
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecutionTaskInvocation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMaintenanceWindowExecutionTaskInvocationOutcomeCallable GetMaintenanceWindowExecutionTaskInvocationCallable(const Model::GetMaintenanceWindowExecutionTaskInvocationRequest& request) const;

        /**
         * <p>Retrieves information about a specific task running on a specific
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecutionTaskInvocation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMaintenanceWindowExecutionTaskInvocationAsync(const Model::GetMaintenanceWindowExecutionTaskInvocationRequest& request, const GetMaintenanceWindowExecutionTaskInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tasks in a maintenance window.</p>  <p>For maintenance window
         * tasks without a specified target, you can't supply values for
         * <code>--max-errors</code> and <code>--max-concurrency</code>. Instead, the
         * system inserts a placeholder value of <code>1</code>, which may be reported in
         * the response to this command. These values don't affect the running of your task
         * and can be ignored.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowTaskOutcome GetMaintenanceWindowTask(const Model::GetMaintenanceWindowTaskRequest& request) const;

        /**
         * <p>Lists the tasks in a maintenance window.</p>  <p>For maintenance window
         * tasks without a specified target, you can't supply values for
         * <code>--max-errors</code> and <code>--max-concurrency</code>. Instead, the
         * system inserts a placeholder value of <code>1</code>, which may be reported in
         * the response to this command. These values don't affect the running of your task
         * and can be ignored.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMaintenanceWindowTaskOutcomeCallable GetMaintenanceWindowTaskCallable(const Model::GetMaintenanceWindowTaskRequest& request) const;

        /**
         * <p>Lists the tasks in a maintenance window.</p>  <p>For maintenance window
         * tasks without a specified target, you can't supply values for
         * <code>--max-errors</code> and <code>--max-concurrency</code>. Instead, the
         * system inserts a placeholder value of <code>1</code>, which may be reported in
         * the response to this command. These values don't affect the running of your task
         * and can be ignored.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMaintenanceWindowTaskAsync(const Model::GetMaintenanceWindowTaskRequest& request, const GetMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about an OpsItem by using the ID. You must have permission in
         * Identity and Access Management (IAM) to view information about an OpsItem. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsItem">AWS API
         * Reference</a></p>
         */
        virtual Model::GetOpsItemOutcome GetOpsItem(const Model::GetOpsItemRequest& request) const;

        /**
         * <p>Get information about an OpsItem by using the ID. You must have permission in
         * Identity and Access Management (IAM) to view information about an OpsItem. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsItem">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOpsItemOutcomeCallable GetOpsItemCallable(const Model::GetOpsItemRequest& request) const;

        /**
         * <p>Get information about an OpsItem by using the ID. You must have permission in
         * Identity and Access Management (IAM) to view information about an OpsItem. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsItem">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOpsItemAsync(const Model::GetOpsItemRequest& request, const GetOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>View operational metadata related to an application in Application
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpsMetadataOutcome GetOpsMetadata(const Model::GetOpsMetadataRequest& request) const;

        /**
         * <p>View operational metadata related to an application in Application
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOpsMetadataOutcomeCallable GetOpsMetadataCallable(const Model::GetOpsMetadataRequest& request) const;

        /**
         * <p>View operational metadata related to an application in Application
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOpsMetadataAsync(const Model::GetOpsMetadataRequest& request, const GetOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>View a summary of operations metadata (OpsData) based on specified filters
         * and aggregators. OpsData can include information about Amazon Web Services
         * Systems Manager OpsCenter operational workitems (OpsItems) as well as
         * information about any Amazon Web Services resource or service configured to
         * report OpsData to Amazon Web Services Systems Manager Explorer. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpsSummaryOutcome GetOpsSummary(const Model::GetOpsSummaryRequest& request) const;

        /**
         * <p>View a summary of operations metadata (OpsData) based on specified filters
         * and aggregators. OpsData can include information about Amazon Web Services
         * Systems Manager OpsCenter operational workitems (OpsItems) as well as
         * information about any Amazon Web Services resource or service configured to
         * report OpsData to Amazon Web Services Systems Manager Explorer. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsSummary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOpsSummaryOutcomeCallable GetOpsSummaryCallable(const Model::GetOpsSummaryRequest& request) const;

        /**
         * <p>View a summary of operations metadata (OpsData) based on specified filters
         * and aggregators. OpsData can include information about Amazon Web Services
         * Systems Manager OpsCenter operational workitems (OpsItems) as well as
         * information about any Amazon Web Services resource or service configured to
         * report OpsData to Amazon Web Services Systems Manager Explorer. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsSummary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOpsSummaryAsync(const Model::GetOpsSummaryRequest& request, const GetOpsSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about a single parameter by specifying the parameter
         * name.</p>  <p>To get information about more than one parameter at a time,
         * use the <a>GetParameters</a> operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParameterOutcome GetParameter(const Model::GetParameterRequest& request) const;

        /**
         * <p>Get information about a single parameter by specifying the parameter
         * name.</p>  <p>To get information about more than one parameter at a time,
         * use the <a>GetParameters</a> operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetParameterOutcomeCallable GetParameterCallable(const Model::GetParameterRequest& request) const;

        /**
         * <p>Get information about a single parameter by specifying the parameter
         * name.</p>  <p>To get information about more than one parameter at a time,
         * use the <a>GetParameters</a> operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetParameterAsync(const Model::GetParameterRequest& request, const GetParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the history of all changes to a parameter.</p>  <p>If
         * you change the KMS key alias for the KMS key used to encrypt a parameter, then
         * you must also update the key alias the parameter uses to reference KMS.
         * Otherwise, <code>GetParameterHistory</code> retrieves whatever the original key
         * alias was referencing.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameterHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParameterHistoryOutcome GetParameterHistory(const Model::GetParameterHistoryRequest& request) const;

        /**
         * <p>Retrieves the history of all changes to a parameter.</p>  <p>If
         * you change the KMS key alias for the KMS key used to encrypt a parameter, then
         * you must also update the key alias the parameter uses to reference KMS.
         * Otherwise, <code>GetParameterHistory</code> retrieves whatever the original key
         * alias was referencing.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameterHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetParameterHistoryOutcomeCallable GetParameterHistoryCallable(const Model::GetParameterHistoryRequest& request) const;

        /**
         * <p>Retrieves the history of all changes to a parameter.</p>  <p>If
         * you change the KMS key alias for the KMS key used to encrypt a parameter, then
         * you must also update the key alias the parameter uses to reference KMS.
         * Otherwise, <code>GetParameterHistory</code> retrieves whatever the original key
         * alias was referencing.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameterHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetParameterHistoryAsync(const Model::GetParameterHistoryRequest& request, const GetParameterHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about one or more parameters by specifying multiple parameter
         * names.</p>  <p>To get information about a single parameter, you can use
         * the <a>GetParameter</a> operation instead.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParametersOutcome GetParameters(const Model::GetParametersRequest& request) const;

        /**
         * <p>Get information about one or more parameters by specifying multiple parameter
         * names.</p>  <p>To get information about a single parameter, you can use
         * the <a>GetParameter</a> operation instead.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetParametersOutcomeCallable GetParametersCallable(const Model::GetParametersRequest& request) const;

        /**
         * <p>Get information about one or more parameters by specifying multiple parameter
         * names.</p>  <p>To get information about a single parameter, you can use
         * the <a>GetParameter</a> operation instead.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetParametersAsync(const Model::GetParametersRequest& request, const GetParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve information about one or more parameters in a specific hierarchy.
         * </p> <p>Request results are returned on a best-effort basis. If you specify
         * <code>MaxResults</code> in the request, the response includes information up to
         * the limit specified. The number of items returned, however, can be between zero
         * and the value of <code>MaxResults</code>. If the service reaches an internal
         * limit while processing the results, it stops the operation and returns the
         * matching values up to that point and a <code>NextToken</code>. You can specify
         * the <code>NextToken</code> in a subsequent call to get the next set of
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParametersByPath">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParametersByPathOutcome GetParametersByPath(const Model::GetParametersByPathRequest& request) const;

        /**
         * <p>Retrieve information about one or more parameters in a specific hierarchy.
         * </p> <p>Request results are returned on a best-effort basis. If you specify
         * <code>MaxResults</code> in the request, the response includes information up to
         * the limit specified. The number of items returned, however, can be between zero
         * and the value of <code>MaxResults</code>. If the service reaches an internal
         * limit while processing the results, it stops the operation and returns the
         * matching values up to that point and a <code>NextToken</code>. You can specify
         * the <code>NextToken</code> in a subsequent call to get the next set of
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParametersByPath">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetParametersByPathOutcomeCallable GetParametersByPathCallable(const Model::GetParametersByPathRequest& request) const;

        /**
         * <p>Retrieve information about one or more parameters in a specific hierarchy.
         * </p> <p>Request results are returned on a best-effort basis. If you specify
         * <code>MaxResults</code> in the request, the response includes information up to
         * the limit specified. The number of items returned, however, can be between zero
         * and the value of <code>MaxResults</code>. If the service reaches an internal
         * limit while processing the results, it stops the operation and returns the
         * matching values up to that point and a <code>NextToken</code>. You can specify
         * the <code>NextToken</code> in a subsequent call to get the next set of
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParametersByPath">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetParametersByPathAsync(const Model::GetParametersByPathRequest& request, const GetParametersByPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPatchBaselineOutcome GetPatchBaseline(const Model::GetPatchBaselineRequest& request) const;

        /**
         * <p>Retrieves information about a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetPatchBaseline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPatchBaselineOutcomeCallable GetPatchBaselineCallable(const Model::GetPatchBaselineRequest& request) const;

        /**
         * <p>Retrieves information about a patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetPatchBaseline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPatchBaselineAsync(const Model::GetPatchBaselineRequest& request, const GetPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the patch baseline that should be used for the specified patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPatchBaselineForPatchGroupOutcome GetPatchBaselineForPatchGroup(const Model::GetPatchBaselineForPatchGroupRequest& request) const;

        /**
         * <p>Retrieves the patch baseline that should be used for the specified patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPatchBaselineForPatchGroupOutcomeCallable GetPatchBaselineForPatchGroupCallable(const Model::GetPatchBaselineForPatchGroupRequest& request) const;

        /**
         * <p>Retrieves the patch baseline that should be used for the specified patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPatchBaselineForPatchGroupAsync(const Model::GetPatchBaselineForPatchGroupRequest& request, const GetPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of
         * <code>false</code>. This means the user can't use this feature unless they
         * change the setting to <code>true</code> and intentionally opt in for a paid
         * feature.</p> <p>Services map a <code>SettingId</code> object to a setting value.
         * Amazon Web Services services teams define the default value for a
         * <code>SettingId</code>. You can't create a new <code>SettingId</code>, but you
         * can overwrite the default value if you have the
         * <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>UpdateServiceSetting</a> API operation to change the default setting. Or use
         * the <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the Amazon Web Services service team.</p> <p>Query the current
         * service setting for the Amazon Web Services account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetServiceSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceSettingOutcome GetServiceSetting(const Model::GetServiceSettingRequest& request) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of
         * <code>false</code>. This means the user can't use this feature unless they
         * change the setting to <code>true</code> and intentionally opt in for a paid
         * feature.</p> <p>Services map a <code>SettingId</code> object to a setting value.
         * Amazon Web Services services teams define the default value for a
         * <code>SettingId</code>. You can't create a new <code>SettingId</code>, but you
         * can overwrite the default value if you have the
         * <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>UpdateServiceSetting</a> API operation to change the default setting. Or use
         * the <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the Amazon Web Services service team.</p> <p>Query the current
         * service setting for the Amazon Web Services account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetServiceSetting">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceSettingOutcomeCallable GetServiceSettingCallable(const Model::GetServiceSettingRequest& request) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of
         * <code>false</code>. This means the user can't use this feature unless they
         * change the setting to <code>true</code> and intentionally opt in for a paid
         * feature.</p> <p>Services map a <code>SettingId</code> object to a setting value.
         * Amazon Web Services services teams define the default value for a
         * <code>SettingId</code>. You can't create a new <code>SettingId</code>, but you
         * can overwrite the default value if you have the
         * <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>UpdateServiceSetting</a> API operation to change the default setting. Or use
         * the <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the Amazon Web Services service team.</p> <p>Query the current
         * service setting for the Amazon Web Services account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetServiceSetting">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceSettingAsync(const Model::GetServiceSettingRequest& request, const GetServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A parameter label is a user-defined alias to help you manage different
         * versions of a parameter. When you modify a parameter, Amazon Web Services
         * Systems Manager automatically saves a new version and increments the version
         * number by one. A label can help you remember the purpose of a parameter when
         * there are multiple versions. </p> <p>Parameter labels have the following
         * requirements and restrictions.</p> <ul> <li> <p>A version of a parameter can
         * have a maximum of 10 labels.</p> </li> <li> <p>You can't attach the same label
         * to different versions of the same parameter. For example, if version 1 has the
         * label Production, then you can't attach Production to version 2.</p> </li> <li>
         * <p>You can move a label from one version of a parameter to another.</p> </li>
         * <li> <p>You can't create a label when you create a new parameter. You must
         * attach a label to a specific version of a parameter.</p> </li> <li> <p>If you no
         * longer want to use a parameter label, then you can either delete it or move it
         * to a different version of a parameter.</p> </li> <li> <p>A label can have a
         * maximum of 100 characters.</p> </li> <li> <p>Labels can contain letters (case
         * sensitive), numbers, periods (.), hyphens (-), or underscores (_).</p> </li>
         * <li> <p>Labels can't begin with a number, "<code>aws</code>" or
         * "<code>ssm</code>" (not case sensitive). If a label fails to meet these
         * requirements, then the label isn't associated with a parameter and the system
         * displays it in the list of InvalidLabels.</p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/LabelParameterVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::LabelParameterVersionOutcome LabelParameterVersion(const Model::LabelParameterVersionRequest& request) const;

        /**
         * <p>A parameter label is a user-defined alias to help you manage different
         * versions of a parameter. When you modify a parameter, Amazon Web Services
         * Systems Manager automatically saves a new version and increments the version
         * number by one. A label can help you remember the purpose of a parameter when
         * there are multiple versions. </p> <p>Parameter labels have the following
         * requirements and restrictions.</p> <ul> <li> <p>A version of a parameter can
         * have a maximum of 10 labels.</p> </li> <li> <p>You can't attach the same label
         * to different versions of the same parameter. For example, if version 1 has the
         * label Production, then you can't attach Production to version 2.</p> </li> <li>
         * <p>You can move a label from one version of a parameter to another.</p> </li>
         * <li> <p>You can't create a label when you create a new parameter. You must
         * attach a label to a specific version of a parameter.</p> </li> <li> <p>If you no
         * longer want to use a parameter label, then you can either delete it or move it
         * to a different version of a parameter.</p> </li> <li> <p>A label can have a
         * maximum of 100 characters.</p> </li> <li> <p>Labels can contain letters (case
         * sensitive), numbers, periods (.), hyphens (-), or underscores (_).</p> </li>
         * <li> <p>Labels can't begin with a number, "<code>aws</code>" or
         * "<code>ssm</code>" (not case sensitive). If a label fails to meet these
         * requirements, then the label isn't associated with a parameter and the system
         * displays it in the list of InvalidLabels.</p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/LabelParameterVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LabelParameterVersionOutcomeCallable LabelParameterVersionCallable(const Model::LabelParameterVersionRequest& request) const;

        /**
         * <p>A parameter label is a user-defined alias to help you manage different
         * versions of a parameter. When you modify a parameter, Amazon Web Services
         * Systems Manager automatically saves a new version and increments the version
         * number by one. A label can help you remember the purpose of a parameter when
         * there are multiple versions. </p> <p>Parameter labels have the following
         * requirements and restrictions.</p> <ul> <li> <p>A version of a parameter can
         * have a maximum of 10 labels.</p> </li> <li> <p>You can't attach the same label
         * to different versions of the same parameter. For example, if version 1 has the
         * label Production, then you can't attach Production to version 2.</p> </li> <li>
         * <p>You can move a label from one version of a parameter to another.</p> </li>
         * <li> <p>You can't create a label when you create a new parameter. You must
         * attach a label to a specific version of a parameter.</p> </li> <li> <p>If you no
         * longer want to use a parameter label, then you can either delete it or move it
         * to a different version of a parameter.</p> </li> <li> <p>A label can have a
         * maximum of 100 characters.</p> </li> <li> <p>Labels can contain letters (case
         * sensitive), numbers, periods (.), hyphens (-), or underscores (_).</p> </li>
         * <li> <p>Labels can't begin with a number, "<code>aws</code>" or
         * "<code>ssm</code>" (not case sensitive). If a label fails to meet these
         * requirements, then the label isn't associated with a parameter and the system
         * displays it in the list of InvalidLabels.</p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/LabelParameterVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LabelParameterVersionAsync(const Model::LabelParameterVersionRequest& request, const LabelParameterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all versions of an association for a specific association
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListAssociationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociationVersionsOutcome ListAssociationVersions(const Model::ListAssociationVersionsRequest& request) const;

        /**
         * <p>Retrieves all versions of an association for a specific association
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListAssociationVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociationVersionsOutcomeCallable ListAssociationVersionsCallable(const Model::ListAssociationVersionsRequest& request) const;

        /**
         * <p>Retrieves all versions of an association for a specific association
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListAssociationVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociationVersionsAsync(const Model::ListAssociationVersionsRequest& request, const ListAssociationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all State Manager associations in the current Amazon Web Services
         * account and Amazon Web Services Region. You can limit the results to a specific
         * State Manager association document or managed node by specifying a filter. State
         * Manager is a capability of Amazon Web Services Systems Manager.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociationsOutcome ListAssociations(const Model::ListAssociationsRequest& request) const;

        /**
         * <p>Returns all State Manager associations in the current Amazon Web Services
         * account and Amazon Web Services Region. You can limit the results to a specific
         * State Manager association document or managed node by specifying a filter. State
         * Manager is a capability of Amazon Web Services Systems Manager.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociationsOutcomeCallable ListAssociationsCallable(const Model::ListAssociationsRequest& request) const;

        /**
         * <p>Returns all State Manager associations in the current Amazon Web Services
         * account and Amazon Web Services Region. You can limit the results to a specific
         * State Manager association document or managed node by specifying a filter. State
         * Manager is a capability of Amazon Web Services Systems Manager.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociationsAsync(const Model::ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An invocation is copy of a command sent to a specific managed node. A command
         * can apply to one or more managed nodes. A command invocation applies to one
         * managed node. For example, if a user runs <code>SendCommand</code> against three
         * managed nodes, then a command invocation is created for each requested managed
         * node ID. <code>ListCommandInvocations</code> provide status about command
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommandInvocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCommandInvocationsOutcome ListCommandInvocations(const Model::ListCommandInvocationsRequest& request) const;

        /**
         * <p>An invocation is copy of a command sent to a specific managed node. A command
         * can apply to one or more managed nodes. A command invocation applies to one
         * managed node. For example, if a user runs <code>SendCommand</code> against three
         * managed nodes, then a command invocation is created for each requested managed
         * node ID. <code>ListCommandInvocations</code> provide status about command
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommandInvocations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCommandInvocationsOutcomeCallable ListCommandInvocationsCallable(const Model::ListCommandInvocationsRequest& request) const;

        /**
         * <p>An invocation is copy of a command sent to a specific managed node. A command
         * can apply to one or more managed nodes. A command invocation applies to one
         * managed node. For example, if a user runs <code>SendCommand</code> against three
         * managed nodes, then a command invocation is created for each requested managed
         * node ID. <code>ListCommandInvocations</code> provide status about command
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommandInvocations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCommandInvocationsAsync(const Model::ListCommandInvocationsRequest& request, const ListCommandInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the commands requested by users of the Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommands">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCommandsOutcome ListCommands(const Model::ListCommandsRequest& request) const;

        /**
         * <p>Lists the commands requested by users of the Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommands">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCommandsOutcomeCallable ListCommandsCallable(const Model::ListCommandsRequest& request) const;

        /**
         * <p>Lists the commands requested by users of the Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommands">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCommandsAsync(const Model::ListCommandsRequest& request, const ListCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For a specified resource ID, this API operation returns a list of compliance
         * statuses for different resource types. Currently, you can only specify one
         * resource ID per call. List results depend on the criteria specified in the
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListComplianceItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComplianceItemsOutcome ListComplianceItems(const Model::ListComplianceItemsRequest& request) const;

        /**
         * <p>For a specified resource ID, this API operation returns a list of compliance
         * statuses for different resource types. Currently, you can only specify one
         * resource ID per call. List results depend on the criteria specified in the
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListComplianceItems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComplianceItemsOutcomeCallable ListComplianceItemsCallable(const Model::ListComplianceItemsRequest& request) const;

        /**
         * <p>For a specified resource ID, this API operation returns a list of compliance
         * statuses for different resource types. Currently, you can only specify one
         * resource ID per call. List results depend on the criteria specified in the
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListComplianceItems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComplianceItemsAsync(const Model::ListComplianceItemsRequest& request, const ListComplianceItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a summary count of compliant and non-compliant resources for a
         * compliance type. For example, this call can return State Manager associations,
         * patches, or custom compliance types according to the filter criteria that you
         * specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListComplianceSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComplianceSummariesOutcome ListComplianceSummaries(const Model::ListComplianceSummariesRequest& request) const;

        /**
         * <p>Returns a summary count of compliant and non-compliant resources for a
         * compliance type. For example, this call can return State Manager associations,
         * patches, or custom compliance types according to the filter criteria that you
         * specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListComplianceSummaries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComplianceSummariesOutcomeCallable ListComplianceSummariesCallable(const Model::ListComplianceSummariesRequest& request) const;

        /**
         * <p>Returns a summary count of compliant and non-compliant resources for a
         * compliance type. For example, this call can return State Manager associations,
         * patches, or custom compliance types according to the filter criteria that you
         * specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListComplianceSummaries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComplianceSummariesAsync(const Model::ListComplianceSummariesRequest& request, const ListComplianceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Information about approval reviews for a version of a change template in
         * Change Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocumentMetadataHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentMetadataHistoryOutcome ListDocumentMetadataHistory(const Model::ListDocumentMetadataHistoryRequest& request) const;

        /**
         * <p>Information about approval reviews for a version of a change template in
         * Change Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocumentMetadataHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDocumentMetadataHistoryOutcomeCallable ListDocumentMetadataHistoryCallable(const Model::ListDocumentMetadataHistoryRequest& request) const;

        /**
         * <p>Information about approval reviews for a version of a change template in
         * Change Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocumentMetadataHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDocumentMetadataHistoryAsync(const Model::ListDocumentMetadataHistoryRequest& request, const ListDocumentMetadataHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all versions for a document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocumentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentVersionsOutcome ListDocumentVersions(const Model::ListDocumentVersionsRequest& request) const;

        /**
         * <p>List all versions for a document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocumentVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDocumentVersionsOutcomeCallable ListDocumentVersionsCallable(const Model::ListDocumentVersionsRequest& request) const;

        /**
         * <p>List all versions for a document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocumentVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDocumentVersionsAsync(const Model::ListDocumentVersionsRequest& request, const ListDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all Systems Manager (SSM) documents in the current Amazon Web
         * Services account and Amazon Web Services Region. You can limit the results of
         * this request by using a filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocuments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentsOutcome ListDocuments(const Model::ListDocumentsRequest& request) const;

        /**
         * <p>Returns all Systems Manager (SSM) documents in the current Amazon Web
         * Services account and Amazon Web Services Region. You can limit the results of
         * this request by using a filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocuments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDocumentsOutcomeCallable ListDocumentsCallable(const Model::ListDocumentsRequest& request) const;

        /**
         * <p>Returns all Systems Manager (SSM) documents in the current Amazon Web
         * Services account and Amazon Web Services Region. You can limit the results of
         * this request by using a filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocuments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDocumentsAsync(const Model::ListDocumentsRequest& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A list of inventory items returned by the request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListInventoryEntries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInventoryEntriesOutcome ListInventoryEntries(const Model::ListInventoryEntriesRequest& request) const;

        /**
         * <p>A list of inventory items returned by the request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListInventoryEntries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInventoryEntriesOutcomeCallable ListInventoryEntriesCallable(const Model::ListInventoryEntriesRequest& request) const;

        /**
         * <p>A list of inventory items returned by the request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListInventoryEntries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInventoryEntriesAsync(const Model::ListInventoryEntriesRequest& request, const ListInventoryEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all OpsItem events in the current Amazon Web Services
         * Region and Amazon Web Services account. You can limit the results to events
         * associated with specific OpsItems by specifying a filter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsItemEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpsItemEventsOutcome ListOpsItemEvents(const Model::ListOpsItemEventsRequest& request) const;

        /**
         * <p>Returns a list of all OpsItem events in the current Amazon Web Services
         * Region and Amazon Web Services account. You can limit the results to events
         * associated with specific OpsItems by specifying a filter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsItemEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOpsItemEventsOutcomeCallable ListOpsItemEventsCallable(const Model::ListOpsItemEventsRequest& request) const;

        /**
         * <p>Returns a list of all OpsItem events in the current Amazon Web Services
         * Region and Amazon Web Services account. You can limit the results to events
         * associated with specific OpsItems by specifying a filter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsItemEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOpsItemEventsAsync(const Model::ListOpsItemEventsRequest& request, const ListOpsItemEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all related-item resources associated with a Systems Manager OpsCenter
         * OpsItem. OpsCenter is a capability of Amazon Web Services Systems
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsItemRelatedItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpsItemRelatedItemsOutcome ListOpsItemRelatedItems(const Model::ListOpsItemRelatedItemsRequest& request) const;

        /**
         * <p>Lists all related-item resources associated with a Systems Manager OpsCenter
         * OpsItem. OpsCenter is a capability of Amazon Web Services Systems
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsItemRelatedItems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOpsItemRelatedItemsOutcomeCallable ListOpsItemRelatedItemsCallable(const Model::ListOpsItemRelatedItemsRequest& request) const;

        /**
         * <p>Lists all related-item resources associated with a Systems Manager OpsCenter
         * OpsItem. OpsCenter is a capability of Amazon Web Services Systems
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsItemRelatedItems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOpsItemRelatedItemsAsync(const Model::ListOpsItemRelatedItemsRequest& request, const ListOpsItemRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Amazon Web Services Systems Manager calls this API operation when displaying
         * all Application Manager OpsMetadata objects or blobs.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpsMetadataOutcome ListOpsMetadata(const Model::ListOpsMetadataRequest& request) const;

        /**
         * <p>Amazon Web Services Systems Manager calls this API operation when displaying
         * all Application Manager OpsMetadata objects or blobs.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOpsMetadataOutcomeCallable ListOpsMetadataCallable(const Model::ListOpsMetadataRequest& request) const;

        /**
         * <p>Amazon Web Services Systems Manager calls this API operation when displaying
         * all Application Manager OpsMetadata objects or blobs.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListOpsMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOpsMetadataAsync(const Model::ListOpsMetadataRequest& request, const ListOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a resource-level summary count. The summary includes information
         * about compliant and non-compliant statuses and detailed compliance-item severity
         * counts, according to the filter criteria you specify.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListResourceComplianceSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceComplianceSummariesOutcome ListResourceComplianceSummaries(const Model::ListResourceComplianceSummariesRequest& request) const;

        /**
         * <p>Returns a resource-level summary count. The summary includes information
         * about compliant and non-compliant statuses and detailed compliance-item severity
         * counts, according to the filter criteria you specify.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListResourceComplianceSummaries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceComplianceSummariesOutcomeCallable ListResourceComplianceSummariesCallable(const Model::ListResourceComplianceSummariesRequest& request) const;

        /**
         * <p>Returns a resource-level summary count. The summary includes information
         * about compliant and non-compliant statuses and detailed compliance-item severity
         * counts, according to the filter criteria you specify.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListResourceComplianceSummaries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceComplianceSummariesAsync(const Model::ListResourceComplianceSummariesRequest& request, const ListResourceComplianceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your resource data sync configurations. Includes information about the
         * last time a sync attempted to start, the last sync status, and the last time a
         * sync successfully completed.</p> <p>The number of sync configurations might be
         * too large to return using a single call to <code>ListResourceDataSync</code>.
         * You can limit the number of sync configurations returned by using the
         * <code>MaxResults</code> parameter. To determine whether there are more sync
         * configurations to list, check the value of <code>NextToken</code> in the output.
         * If there are more sync configurations to list, you can request them by
         * specifying the <code>NextToken</code> returned in the call to the parameter of a
         * subsequent call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListResourceDataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDataSyncOutcome ListResourceDataSync(const Model::ListResourceDataSyncRequest& request) const;

        /**
         * <p>Lists your resource data sync configurations. Includes information about the
         * last time a sync attempted to start, the last sync status, and the last time a
         * sync successfully completed.</p> <p>The number of sync configurations might be
         * too large to return using a single call to <code>ListResourceDataSync</code>.
         * You can limit the number of sync configurations returned by using the
         * <code>MaxResults</code> parameter. To determine whether there are more sync
         * configurations to list, check the value of <code>NextToken</code> in the output.
         * If there are more sync configurations to list, you can request them by
         * specifying the <code>NextToken</code> returned in the call to the parameter of a
         * subsequent call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListResourceDataSync">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceDataSyncOutcomeCallable ListResourceDataSyncCallable(const Model::ListResourceDataSyncRequest& request) const;

        /**
         * <p>Lists your resource data sync configurations. Includes information about the
         * last time a sync attempted to start, the last sync status, and the last time a
         * sync successfully completed.</p> <p>The number of sync configurations might be
         * too large to return using a single call to <code>ListResourceDataSync</code>.
         * You can limit the number of sync configurations returned by using the
         * <code>MaxResults</code> parameter. To determine whether there are more sync
         * configurations to list, check the value of <code>NextToken</code> in the output.
         * If there are more sync configurations to list, you can request them by
         * specifying the <code>NextToken</code> returned in the call to the parameter of a
         * subsequent call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListResourceDataSync">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceDataSyncAsync(const Model::ListResourceDataSyncRequest& request, const ListResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the tags assigned to the specified resource.</p> <p>For
         * information about the ID format for each supported resource type, see
         * <a>AddTagsToResource</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags assigned to the specified resource.</p> <p>For
         * information about the ID format for each supported resource type, see
         * <a>AddTagsToResource</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags assigned to the specified resource.</p> <p>For
         * information about the ID format for each supported resource type, see
         * <a>AddTagsToResource</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Shares a Amazon Web Services Systems Manager document (SSM document)publicly
         * or privately. If you share a document privately, you must specify the Amazon Web
         * Services user account IDs for those people who can use the document. If you
         * share a document publicly, you must specify <i>All</i> as the account
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ModifyDocumentPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDocumentPermissionOutcome ModifyDocumentPermission(const Model::ModifyDocumentPermissionRequest& request) const;

        /**
         * <p>Shares a Amazon Web Services Systems Manager document (SSM document)publicly
         * or privately. If you share a document privately, you must specify the Amazon Web
         * Services user account IDs for those people who can use the document. If you
         * share a document publicly, you must specify <i>All</i> as the account
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ModifyDocumentPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDocumentPermissionOutcomeCallable ModifyDocumentPermissionCallable(const Model::ModifyDocumentPermissionRequest& request) const;

        /**
         * <p>Shares a Amazon Web Services Systems Manager document (SSM document)publicly
         * or privately. If you share a document privately, you must specify the Amazon Web
         * Services user account IDs for those people who can use the document. If you
         * share a document publicly, you must specify <i>All</i> as the account
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ModifyDocumentPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDocumentPermissionAsync(const Model::ModifyDocumentPermissionRequest& request, const ModifyDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a compliance type and other compliance details on a designated
         * resource. This operation lets you register custom compliance details with a
         * resource. This call overwrites existing compliance information on the resource,
         * so you must provide a full list of compliance items each time that you send the
         * request.</p> <p>ComplianceType can be one of the following:</p> <ul> <li>
         * <p>ExecutionId: The execution ID when the patch, association, or custom
         * compliance item was applied.</p> </li> <li> <p>ExecutionType: Specify patch,
         * association, or Custom:<code>string</code>.</p> </li> <li> <p>ExecutionTime. The
         * time the patch, association, or custom compliance item was applied to the
         * managed node.</p> </li> <li> <p>Id: The patch, association, or custom compliance
         * ID.</p> </li> <li> <p>Title: A title.</p> </li> <li> <p>Status: The status of
         * the compliance item. For example, <code>approved</code> for patches, or
         * <code>Failed</code> for associations.</p> </li> <li> <p>Severity: A patch
         * severity. For example, <code>critical</code>.</p> </li> <li> <p>DocumentName: An
         * SSM document name. For example, <code>AWS-RunPatchBaseline</code>.</p> </li>
         * <li> <p>DocumentVersion: An SSM document version number. For example, 4.</p>
         * </li> <li> <p>Classification: A patch classification. For example,
         * <code>security updates</code>.</p> </li> <li> <p>PatchBaselineId: A patch
         * baseline ID.</p> </li> <li> <p>PatchSeverity: A patch severity. For example,
         * <code>Critical</code>.</p> </li> <li> <p>PatchState: A patch state. For example,
         * <code>InstancesWithFailedPatches</code>.</p> </li> <li> <p>PatchGroup: The name
         * of a patch group.</p> </li> <li> <p>InstalledTime: The time the association,
         * patch, or custom compliance item was applied to the resource. Specify the time
         * by using the following format: yyyy-MM-dd'T'HH:mm:ss'Z'</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutComplianceItems">AWS
         * API Reference</a></p>
         */
        virtual Model::PutComplianceItemsOutcome PutComplianceItems(const Model::PutComplianceItemsRequest& request) const;

        /**
         * <p>Registers a compliance type and other compliance details on a designated
         * resource. This operation lets you register custom compliance details with a
         * resource. This call overwrites existing compliance information on the resource,
         * so you must provide a full list of compliance items each time that you send the
         * request.</p> <p>ComplianceType can be one of the following:</p> <ul> <li>
         * <p>ExecutionId: The execution ID when the patch, association, or custom
         * compliance item was applied.</p> </li> <li> <p>ExecutionType: Specify patch,
         * association, or Custom:<code>string</code>.</p> </li> <li> <p>ExecutionTime. The
         * time the patch, association, or custom compliance item was applied to the
         * managed node.</p> </li> <li> <p>Id: The patch, association, or custom compliance
         * ID.</p> </li> <li> <p>Title: A title.</p> </li> <li> <p>Status: The status of
         * the compliance item. For example, <code>approved</code> for patches, or
         * <code>Failed</code> for associations.</p> </li> <li> <p>Severity: A patch
         * severity. For example, <code>critical</code>.</p> </li> <li> <p>DocumentName: An
         * SSM document name. For example, <code>AWS-RunPatchBaseline</code>.</p> </li>
         * <li> <p>DocumentVersion: An SSM document version number. For example, 4.</p>
         * </li> <li> <p>Classification: A patch classification. For example,
         * <code>security updates</code>.</p> </li> <li> <p>PatchBaselineId: A patch
         * baseline ID.</p> </li> <li> <p>PatchSeverity: A patch severity. For example,
         * <code>Critical</code>.</p> </li> <li> <p>PatchState: A patch state. For example,
         * <code>InstancesWithFailedPatches</code>.</p> </li> <li> <p>PatchGroup: The name
         * of a patch group.</p> </li> <li> <p>InstalledTime: The time the association,
         * patch, or custom compliance item was applied to the resource. Specify the time
         * by using the following format: yyyy-MM-dd'T'HH:mm:ss'Z'</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutComplianceItems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutComplianceItemsOutcomeCallable PutComplianceItemsCallable(const Model::PutComplianceItemsRequest& request) const;

        /**
         * <p>Registers a compliance type and other compliance details on a designated
         * resource. This operation lets you register custom compliance details with a
         * resource. This call overwrites existing compliance information on the resource,
         * so you must provide a full list of compliance items each time that you send the
         * request.</p> <p>ComplianceType can be one of the following:</p> <ul> <li>
         * <p>ExecutionId: The execution ID when the patch, association, or custom
         * compliance item was applied.</p> </li> <li> <p>ExecutionType: Specify patch,
         * association, or Custom:<code>string</code>.</p> </li> <li> <p>ExecutionTime. The
         * time the patch, association, or custom compliance item was applied to the
         * managed node.</p> </li> <li> <p>Id: The patch, association, or custom compliance
         * ID.</p> </li> <li> <p>Title: A title.</p> </li> <li> <p>Status: The status of
         * the compliance item. For example, <code>approved</code> for patches, or
         * <code>Failed</code> for associations.</p> </li> <li> <p>Severity: A patch
         * severity. For example, <code>critical</code>.</p> </li> <li> <p>DocumentName: An
         * SSM document name. For example, <code>AWS-RunPatchBaseline</code>.</p> </li>
         * <li> <p>DocumentVersion: An SSM document version number. For example, 4.</p>
         * </li> <li> <p>Classification: A patch classification. For example,
         * <code>security updates</code>.</p> </li> <li> <p>PatchBaselineId: A patch
         * baseline ID.</p> </li> <li> <p>PatchSeverity: A patch severity. For example,
         * <code>Critical</code>.</p> </li> <li> <p>PatchState: A patch state. For example,
         * <code>InstancesWithFailedPatches</code>.</p> </li> <li> <p>PatchGroup: The name
         * of a patch group.</p> </li> <li> <p>InstalledTime: The time the association,
         * patch, or custom compliance item was applied to the resource. Specify the time
         * by using the following format: yyyy-MM-dd'T'HH:mm:ss'Z'</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutComplianceItems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutComplianceItemsAsync(const Model::PutComplianceItemsRequest& request, const PutComplianceItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Bulk update custom inventory items on one or more managed nodes. The request
         * adds an inventory item, if it doesn't already exist, or updates an inventory
         * item, if it does exist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutInventory">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInventoryOutcome PutInventory(const Model::PutInventoryRequest& request) const;

        /**
         * <p>Bulk update custom inventory items on one or more managed nodes. The request
         * adds an inventory item, if it doesn't already exist, or updates an inventory
         * item, if it does exist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutInventory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutInventoryOutcomeCallable PutInventoryCallable(const Model::PutInventoryRequest& request) const;

        /**
         * <p>Bulk update custom inventory items on one or more managed nodes. The request
         * adds an inventory item, if it doesn't already exist, or updates an inventory
         * item, if it does exist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutInventory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutInventoryAsync(const Model::PutInventoryRequest& request, const PutInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add a parameter to the system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::PutParameterOutcome PutParameter(const Model::PutParameterRequest& request) const;

        /**
         * <p>Add a parameter to the system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutParameter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutParameterOutcomeCallable PutParameterCallable(const Model::PutParameterRequest& request) const;

        /**
         * <p>Add a parameter to the system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutParameter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutParameterAsync(const Model::PutParameterRequest& request, const PutParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines the default patch baseline for the relevant operating system.</p>
         * <p>To reset the Amazon Web Services-predefined patch baseline as the default,
         * specify the full patch baseline Amazon Resource Name (ARN) as the baseline ID
         * value. For example, for CentOS, specify
         * <code>arn:aws:ssm:us-east-2:733109147000:patchbaseline/pb-0574b43a65ea646ed</code>
         * instead of <code>pb-0574b43a65ea646ed</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterDefaultPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDefaultPatchBaselineOutcome RegisterDefaultPatchBaseline(const Model::RegisterDefaultPatchBaselineRequest& request) const;

        /**
         * <p>Defines the default patch baseline for the relevant operating system.</p>
         * <p>To reset the Amazon Web Services-predefined patch baseline as the default,
         * specify the full patch baseline Amazon Resource Name (ARN) as the baseline ID
         * value. For example, for CentOS, specify
         * <code>arn:aws:ssm:us-east-2:733109147000:patchbaseline/pb-0574b43a65ea646ed</code>
         * instead of <code>pb-0574b43a65ea646ed</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterDefaultPatchBaseline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterDefaultPatchBaselineOutcomeCallable RegisterDefaultPatchBaselineCallable(const Model::RegisterDefaultPatchBaselineRequest& request) const;

        /**
         * <p>Defines the default patch baseline for the relevant operating system.</p>
         * <p>To reset the Amazon Web Services-predefined patch baseline as the default,
         * specify the full patch baseline Amazon Resource Name (ARN) as the baseline ID
         * value. For example, for CentOS, specify
         * <code>arn:aws:ssm:us-east-2:733109147000:patchbaseline/pb-0574b43a65ea646ed</code>
         * instead of <code>pb-0574b43a65ea646ed</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterDefaultPatchBaseline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterDefaultPatchBaselineAsync(const Model::RegisterDefaultPatchBaselineRequest& request, const RegisterDefaultPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a patch baseline for a patch group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterPatchBaselineForPatchGroupOutcome RegisterPatchBaselineForPatchGroup(const Model::RegisterPatchBaselineForPatchGroupRequest& request) const;

        /**
         * <p>Registers a patch baseline for a patch group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterPatchBaselineForPatchGroupOutcomeCallable RegisterPatchBaselineForPatchGroupCallable(const Model::RegisterPatchBaselineForPatchGroupRequest& request) const;

        /**
         * <p>Registers a patch baseline for a patch group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterPatchBaselineForPatchGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterPatchBaselineForPatchGroupAsync(const Model::RegisterPatchBaselineForPatchGroupRequest& request, const RegisterPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a target with a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterTargetWithMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTargetWithMaintenanceWindowOutcome RegisterTargetWithMaintenanceWindow(const Model::RegisterTargetWithMaintenanceWindowRequest& request) const;

        /**
         * <p>Registers a target with a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterTargetWithMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterTargetWithMaintenanceWindowOutcomeCallable RegisterTargetWithMaintenanceWindowCallable(const Model::RegisterTargetWithMaintenanceWindowRequest& request) const;

        /**
         * <p>Registers a target with a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterTargetWithMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterTargetWithMaintenanceWindowAsync(const Model::RegisterTargetWithMaintenanceWindowRequest& request, const RegisterTargetWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a new task to a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterTaskWithMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTaskWithMaintenanceWindowOutcome RegisterTaskWithMaintenanceWindow(const Model::RegisterTaskWithMaintenanceWindowRequest& request) const;

        /**
         * <p>Adds a new task to a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterTaskWithMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterTaskWithMaintenanceWindowOutcomeCallable RegisterTaskWithMaintenanceWindowCallable(const Model::RegisterTaskWithMaintenanceWindowRequest& request) const;

        /**
         * <p>Adds a new task to a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterTaskWithMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterTaskWithMaintenanceWindowAsync(const Model::RegisterTaskWithMaintenanceWindowRequest& request, const RegisterTaskWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tag keys from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes tag keys from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes tag keys from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of "false". This
         * means the user can't use this feature unless they change the setting to "true"
         * and intentionally opt in for a paid feature.</p> <p>Services map a
         * <code>SettingId</code> object to a setting value. Amazon Web Services services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API operation to view the current value. Use the
         * <a>UpdateServiceSetting</a> API operation to change the default setting. </p>
         * <p>Reset the service setting for the account to the default value as provisioned
         * by the Amazon Web Services service team. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResetServiceSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetServiceSettingOutcome ResetServiceSetting(const Model::ResetServiceSettingRequest& request) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of "false". This
         * means the user can't use this feature unless they change the setting to "true"
         * and intentionally opt in for a paid feature.</p> <p>Services map a
         * <code>SettingId</code> object to a setting value. Amazon Web Services services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API operation to view the current value. Use the
         * <a>UpdateServiceSetting</a> API operation to change the default setting. </p>
         * <p>Reset the service setting for the account to the default value as provisioned
         * by the Amazon Web Services service team. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResetServiceSetting">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetServiceSettingOutcomeCallable ResetServiceSettingCallable(const Model::ResetServiceSettingRequest& request) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of "false". This
         * means the user can't use this feature unless they change the setting to "true"
         * and intentionally opt in for a paid feature.</p> <p>Services map a
         * <code>SettingId</code> object to a setting value. Amazon Web Services services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API operation to view the current value. Use the
         * <a>UpdateServiceSetting</a> API operation to change the default setting. </p>
         * <p>Reset the service setting for the account to the default value as provisioned
         * by the Amazon Web Services service team. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResetServiceSetting">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetServiceSettingAsync(const Model::ResetServiceSettingRequest& request, const ResetServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reconnects a session to a managed node after it has been disconnected.
         * Connections can be resumed for disconnected sessions, but not terminated
         * sessions.</p>  <p>This command is primarily for use by client machines to
         * automatically reconnect during intermittent network issues. It isn't intended
         * for any other use.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResumeSession">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeSessionOutcome ResumeSession(const Model::ResumeSessionRequest& request) const;

        /**
         * <p>Reconnects a session to a managed node after it has been disconnected.
         * Connections can be resumed for disconnected sessions, but not terminated
         * sessions.</p>  <p>This command is primarily for use by client machines to
         * automatically reconnect during intermittent network issues. It isn't intended
         * for any other use.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResumeSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResumeSessionOutcomeCallable ResumeSessionCallable(const Model::ResumeSessionRequest& request) const;

        /**
         * <p>Reconnects a session to a managed node after it has been disconnected.
         * Connections can be resumed for disconnected sessions, but not terminated
         * sessions.</p>  <p>This command is primarily for use by client machines to
         * automatically reconnect during intermittent network issues. It isn't intended
         * for any other use.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResumeSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResumeSessionAsync(const Model::ResumeSessionRequest& request, const ResumeSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a signal to an Automation execution to change the current behavior or
         * status of the execution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SendAutomationSignal">AWS
         * API Reference</a></p>
         */
        virtual Model::SendAutomationSignalOutcome SendAutomationSignal(const Model::SendAutomationSignalRequest& request) const;

        /**
         * <p>Sends a signal to an Automation execution to change the current behavior or
         * status of the execution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SendAutomationSignal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendAutomationSignalOutcomeCallable SendAutomationSignalCallable(const Model::SendAutomationSignalRequest& request) const;

        /**
         * <p>Sends a signal to an Automation execution to change the current behavior or
         * status of the execution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SendAutomationSignal">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendAutomationSignalAsync(const Model::SendAutomationSignalRequest& request, const SendAutomationSignalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Runs commands on one or more managed nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SendCommand">AWS API
         * Reference</a></p>
         */
        virtual Model::SendCommandOutcome SendCommand(const Model::SendCommandRequest& request) const;

        /**
         * <p>Runs commands on one or more managed nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SendCommand">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendCommandOutcomeCallable SendCommandCallable(const Model::SendCommandRequest& request) const;

        /**
         * <p>Runs commands on one or more managed nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SendCommand">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendCommandAsync(const Model::SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Runs an association immediately and only one time. This operation can be
         * helpful when troubleshooting associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAssociationsOnce">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAssociationsOnceOutcome StartAssociationsOnce(const Model::StartAssociationsOnceRequest& request) const;

        /**
         * <p>Runs an association immediately and only one time. This operation can be
         * helpful when troubleshooting associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAssociationsOnce">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAssociationsOnceOutcomeCallable StartAssociationsOnceCallable(const Model::StartAssociationsOnceRequest& request) const;

        /**
         * <p>Runs an association immediately and only one time. This operation can be
         * helpful when troubleshooting associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAssociationsOnce">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAssociationsOnceAsync(const Model::StartAssociationsOnceRequest& request, const StartAssociationsOnceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates execution of an Automation runbook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAutomationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAutomationExecutionOutcome StartAutomationExecution(const Model::StartAutomationExecutionRequest& request) const;

        /**
         * <p>Initiates execution of an Automation runbook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAutomationExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAutomationExecutionOutcomeCallable StartAutomationExecutionCallable(const Model::StartAutomationExecutionRequest& request) const;

        /**
         * <p>Initiates execution of an Automation runbook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAutomationExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAutomationExecutionAsync(const Model::StartAutomationExecutionRequest& request, const StartAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a change request for Change Manager. The Automation runbooks
         * specified in the change request run only after all required approvals for the
         * change request have been received.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartChangeRequestExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChangeRequestExecutionOutcome StartChangeRequestExecution(const Model::StartChangeRequestExecutionRequest& request) const;

        /**
         * <p>Creates a change request for Change Manager. The Automation runbooks
         * specified in the change request run only after all required approvals for the
         * change request have been received.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartChangeRequestExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartChangeRequestExecutionOutcomeCallable StartChangeRequestExecutionCallable(const Model::StartChangeRequestExecutionRequest& request) const;

        /**
         * <p>Creates a change request for Change Manager. The Automation runbooks
         * specified in the change request run only after all required approvals for the
         * change request have been received.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartChangeRequestExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartChangeRequestExecutionAsync(const Model::StartChangeRequestExecutionRequest& request, const StartChangeRequestExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a connection to a target (for example, a managed node) for a
         * Session Manager session. Returns a URL and token that can be used to open a
         * WebSocket connection for sending input and receiving outputs.</p> 
         * <p>Amazon Web Services CLI usage: <code>start-session</code> is an interactive
         * command that requires the Session Manager plugin to be installed on the client
         * machine making the call. For information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-install-plugin.html">Install
         * the Session Manager plugin for the Amazon Web Services CLI</a> in the <i>Amazon
         * Web Services Systems Manager User Guide</i>.</p> <p>Amazon Web Services Tools
         * for PowerShell usage: Start-SSMSession isn't currently supported by Amazon Web
         * Services Tools for PowerShell on Windows local machines.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSessionOutcome StartSession(const Model::StartSessionRequest& request) const;

        /**
         * <p>Initiates a connection to a target (for example, a managed node) for a
         * Session Manager session. Returns a URL and token that can be used to open a
         * WebSocket connection for sending input and receiving outputs.</p> 
         * <p>Amazon Web Services CLI usage: <code>start-session</code> is an interactive
         * command that requires the Session Manager plugin to be installed on the client
         * machine making the call. For information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-install-plugin.html">Install
         * the Session Manager plugin for the Amazon Web Services CLI</a> in the <i>Amazon
         * Web Services Systems Manager User Guide</i>.</p> <p>Amazon Web Services Tools
         * for PowerShell usage: Start-SSMSession isn't currently supported by Amazon Web
         * Services Tools for PowerShell on Windows local machines.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSessionOutcomeCallable StartSessionCallable(const Model::StartSessionRequest& request) const;

        /**
         * <p>Initiates a connection to a target (for example, a managed node) for a
         * Session Manager session. Returns a URL and token that can be used to open a
         * WebSocket connection for sending input and receiving outputs.</p> 
         * <p>Amazon Web Services CLI usage: <code>start-session</code> is an interactive
         * command that requires the Session Manager plugin to be installed on the client
         * machine making the call. For information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-install-plugin.html">Install
         * the Session Manager plugin for the Amazon Web Services CLI</a> in the <i>Amazon
         * Web Services Systems Manager User Guide</i>.</p> <p>Amazon Web Services Tools
         * for PowerShell usage: Start-SSMSession isn't currently supported by Amazon Web
         * Services Tools for PowerShell on Windows local machines.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSessionAsync(const Model::StartSessionRequest& request, const StartSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stop an Automation that is currently running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StopAutomationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAutomationExecutionOutcome StopAutomationExecution(const Model::StopAutomationExecutionRequest& request) const;

        /**
         * <p>Stop an Automation that is currently running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StopAutomationExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopAutomationExecutionOutcomeCallable StopAutomationExecutionCallable(const Model::StopAutomationExecutionRequest& request) const;

        /**
         * <p>Stop an Automation that is currently running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StopAutomationExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopAutomationExecutionAsync(const Model::StopAutomationExecutionRequest& request, const StopAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently ends a session and closes the data connection between the Session
         * Manager client and SSM Agent on the managed node. A terminated session can't be
         * resumed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/TerminateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateSessionOutcome TerminateSession(const Model::TerminateSessionRequest& request) const;

        /**
         * <p>Permanently ends a session and closes the data connection between the Session
         * Manager client and SSM Agent on the managed node. A terminated session can't be
         * resumed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/TerminateSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateSessionOutcomeCallable TerminateSessionCallable(const Model::TerminateSessionRequest& request) const;

        /**
         * <p>Permanently ends a session and closes the data connection between the Session
         * Manager client and SSM Agent on the managed node. A terminated session can't be
         * resumed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/TerminateSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateSessionAsync(const Model::TerminateSessionRequest& request, const TerminateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove a label or labels from a parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UnlabelParameterVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UnlabelParameterVersionOutcome UnlabelParameterVersion(const Model::UnlabelParameterVersionRequest& request) const;

        /**
         * <p>Remove a label or labels from a parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UnlabelParameterVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnlabelParameterVersionOutcomeCallable UnlabelParameterVersionCallable(const Model::UnlabelParameterVersionRequest& request) const;

        /**
         * <p>Remove a label or labels from a parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UnlabelParameterVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnlabelParameterVersionAsync(const Model::UnlabelParameterVersionRequest& request, const UnlabelParameterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an association. You can update the association name and version, the
         * document version, schedule, parameters, and Amazon Simple Storage Service
         * (Amazon S3) output. When you call <code>UpdateAssociation</code>, the system
         * removes all optional parameters from the request and overwrites the association
         * with null values for those parameters. This is by design. You must specify all
         * optional parameters in the call, even if you are not changing the parameters.
         * This includes the <code>Name</code> parameter. Before calling this API action,
         * we recommend that you call the <a>DescribeAssociation</a> API operation and make
         * a note of all optional parameters required for your
         * <code>UpdateAssociation</code> call.</p> <p>In order to call this API operation,
         * your Identity and Access Management (IAM) user account, group, or role must be
         * configured with permission to call the <a>DescribeAssociation</a> API operation.
         * If you don't have permission to call <code>DescribeAssociation</code>, then you
         * receive the following error: <code>An error occurred (AccessDeniedException)
         * when calling the UpdateAssociation operation: User: &lt;user_arn&gt; isn't
         * authorized to perform: ssm:DescribeAssociation on resource:
         * &lt;resource_arn&gt;</code> </p>  <p>When you update an association,
         * the association immediately runs against the specified targets. You can add the
         * <code>ApplyOnlyAtCronInterval</code> parameter to run the association during the
         * next schedule run.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssociationOutcome UpdateAssociation(const Model::UpdateAssociationRequest& request) const;

        /**
         * <p>Updates an association. You can update the association name and version, the
         * document version, schedule, parameters, and Amazon Simple Storage Service
         * (Amazon S3) output. When you call <code>UpdateAssociation</code>, the system
         * removes all optional parameters from the request and overwrites the association
         * with null values for those parameters. This is by design. You must specify all
         * optional parameters in the call, even if you are not changing the parameters.
         * This includes the <code>Name</code> parameter. Before calling this API action,
         * we recommend that you call the <a>DescribeAssociation</a> API operation and make
         * a note of all optional parameters required for your
         * <code>UpdateAssociation</code> call.</p> <p>In order to call this API operation,
         * your Identity and Access Management (IAM) user account, group, or role must be
         * configured with permission to call the <a>DescribeAssociation</a> API operation.
         * If you don't have permission to call <code>DescribeAssociation</code>, then you
         * receive the following error: <code>An error occurred (AccessDeniedException)
         * when calling the UpdateAssociation operation: User: &lt;user_arn&gt; isn't
         * authorized to perform: ssm:DescribeAssociation on resource:
         * &lt;resource_arn&gt;</code> </p>  <p>When you update an association,
         * the association immediately runs against the specified targets. You can add the
         * <code>ApplyOnlyAtCronInterval</code> parameter to run the association during the
         * next schedule run.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssociationOutcomeCallable UpdateAssociationCallable(const Model::UpdateAssociationRequest& request) const;

        /**
         * <p>Updates an association. You can update the association name and version, the
         * document version, schedule, parameters, and Amazon Simple Storage Service
         * (Amazon S3) output. When you call <code>UpdateAssociation</code>, the system
         * removes all optional parameters from the request and overwrites the association
         * with null values for those parameters. This is by design. You must specify all
         * optional parameters in the call, even if you are not changing the parameters.
         * This includes the <code>Name</code> parameter. Before calling this API action,
         * we recommend that you call the <a>DescribeAssociation</a> API operation and make
         * a note of all optional parameters required for your
         * <code>UpdateAssociation</code> call.</p> <p>In order to call this API operation,
         * your Identity and Access Management (IAM) user account, group, or role must be
         * configured with permission to call the <a>DescribeAssociation</a> API operation.
         * If you don't have permission to call <code>DescribeAssociation</code>, then you
         * receive the following error: <code>An error occurred (AccessDeniedException)
         * when calling the UpdateAssociation operation: User: &lt;user_arn&gt; isn't
         * authorized to perform: ssm:DescribeAssociation on resource:
         * &lt;resource_arn&gt;</code> </p>  <p>When you update an association,
         * the association immediately runs against the specified targets. You can add the
         * <code>ApplyOnlyAtCronInterval</code> parameter to run the association during the
         * next schedule run.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssociationAsync(const Model::UpdateAssociationRequest& request, const UpdateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status of the Amazon Web Services Systems Manager document (SSM
         * document) associated with the specified managed node.</p> <p>
         * <code>UpdateAssociationStatus</code> is primarily used by the Amazon Web
         * Services Systems Manager Agent (SSM Agent) to report status updates about your
         * associations and is only used for associations created with the
         * <code>InstanceId</code> legacy parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssociationStatusOutcome UpdateAssociationStatus(const Model::UpdateAssociationStatusRequest& request) const;

        /**
         * <p>Updates the status of the Amazon Web Services Systems Manager document (SSM
         * document) associated with the specified managed node.</p> <p>
         * <code>UpdateAssociationStatus</code> is primarily used by the Amazon Web
         * Services Systems Manager Agent (SSM Agent) to report status updates about your
         * associations and is only used for associations created with the
         * <code>InstanceId</code> legacy parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociationStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssociationStatusOutcomeCallable UpdateAssociationStatusCallable(const Model::UpdateAssociationStatusRequest& request) const;

        /**
         * <p>Updates the status of the Amazon Web Services Systems Manager document (SSM
         * document) associated with the specified managed node.</p> <p>
         * <code>UpdateAssociationStatus</code> is primarily used by the Amazon Web
         * Services Systems Manager Agent (SSM Agent) to report status updates about your
         * associations and is only used for associations created with the
         * <code>InstanceId</code> legacy parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociationStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssociationStatusAsync(const Model::UpdateAssociationStatusRequest& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates one or more values for an SSM document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentOutcome UpdateDocument(const Model::UpdateDocumentRequest& request) const;

        /**
         * <p>Updates one or more values for an SSM document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDocumentOutcomeCallable UpdateDocumentCallable(const Model::UpdateDocumentRequest& request) const;

        /**
         * <p>Updates one or more values for an SSM document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDocumentAsync(const Model::UpdateDocumentRequest& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set the default version of a document. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocumentDefaultVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentDefaultVersionOutcome UpdateDocumentDefaultVersion(const Model::UpdateDocumentDefaultVersionRequest& request) const;

        /**
         * <p>Set the default version of a document. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocumentDefaultVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDocumentDefaultVersionOutcomeCallable UpdateDocumentDefaultVersionCallable(const Model::UpdateDocumentDefaultVersionRequest& request) const;

        /**
         * <p>Set the default version of a document. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocumentDefaultVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDocumentDefaultVersionAsync(const Model::UpdateDocumentDefaultVersionRequest& request, const UpdateDocumentDefaultVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates information related to approval reviews for a specific version of a
         * change template in Change Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocumentMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentMetadataOutcome UpdateDocumentMetadata(const Model::UpdateDocumentMetadataRequest& request) const;

        /**
         * <p>Updates information related to approval reviews for a specific version of a
         * change template in Change Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocumentMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDocumentMetadataOutcomeCallable UpdateDocumentMetadataCallable(const Model::UpdateDocumentMetadataRequest& request) const;

        /**
         * <p>Updates information related to approval reviews for a specific version of a
         * change template in Change Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocumentMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDocumentMetadataAsync(const Model::UpdateDocumentMetadataRequest& request, const UpdateDocumentMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing maintenance window. Only specified parameters are
         * modified.</p>  <p>The value you specify for <code>Duration</code>
         * determines the specific end time for the maintenance window based on the time it
         * begins. No maintenance window tasks are permitted to start after the resulting
         * endtime minus the number of hours you specify for <code>Cutoff</code>. For
         * example, if the maintenance window starts at 3 PM, the duration is three hours,
         * and the value you specify for <code>Cutoff</code> is one hour, no maintenance
         * window tasks can start after 5 PM.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMaintenanceWindowOutcome UpdateMaintenanceWindow(const Model::UpdateMaintenanceWindowRequest& request) const;

        /**
         * <p>Updates an existing maintenance window. Only specified parameters are
         * modified.</p>  <p>The value you specify for <code>Duration</code>
         * determines the specific end time for the maintenance window based on the time it
         * begins. No maintenance window tasks are permitted to start after the resulting
         * endtime minus the number of hours you specify for <code>Cutoff</code>. For
         * example, if the maintenance window starts at 3 PM, the duration is three hours,
         * and the value you specify for <code>Cutoff</code> is one hour, no maintenance
         * window tasks can start after 5 PM.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMaintenanceWindowOutcomeCallable UpdateMaintenanceWindowCallable(const Model::UpdateMaintenanceWindowRequest& request) const;

        /**
         * <p>Updates an existing maintenance window. Only specified parameters are
         * modified.</p>  <p>The value you specify for <code>Duration</code>
         * determines the specific end time for the maintenance window based on the time it
         * begins. No maintenance window tasks are permitted to start after the resulting
         * endtime minus the number of hours you specify for <code>Cutoff</code>. For
         * example, if the maintenance window starts at 3 PM, the duration is three hours,
         * and the value you specify for <code>Cutoff</code> is one hour, no maintenance
         * window tasks can start after 5 PM.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMaintenanceWindowAsync(const Model::UpdateMaintenanceWindowRequest& request, const UpdateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the target of an existing maintenance window. You can change the
         * following:</p> <ul> <li> <p>Name</p> </li> <li> <p>Description</p> </li> <li>
         * <p>Owner</p> </li> <li> <p>IDs for an ID target</p> </li> <li> <p>Tags for a Tag
         * target</p> </li> <li> <p>From any supported tag type to another. The three
         * supported tag types are ID target, Tag target, and resource group. For more
         * information, see <a>Target</a>.</p> </li> </ul>  <p>If a parameter is
         * null, then the corresponding field isn't modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMaintenanceWindowTargetOutcome UpdateMaintenanceWindowTarget(const Model::UpdateMaintenanceWindowTargetRequest& request) const;

        /**
         * <p>Modifies the target of an existing maintenance window. You can change the
         * following:</p> <ul> <li> <p>Name</p> </li> <li> <p>Description</p> </li> <li>
         * <p>Owner</p> </li> <li> <p>IDs for an ID target</p> </li> <li> <p>Tags for a Tag
         * target</p> </li> <li> <p>From any supported tag type to another. The three
         * supported tag types are ID target, Tag target, and resource group. For more
         * information, see <a>Target</a>.</p> </li> </ul>  <p>If a parameter is
         * null, then the corresponding field isn't modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMaintenanceWindowTargetOutcomeCallable UpdateMaintenanceWindowTargetCallable(const Model::UpdateMaintenanceWindowTargetRequest& request) const;

        /**
         * <p>Modifies the target of an existing maintenance window. You can change the
         * following:</p> <ul> <li> <p>Name</p> </li> <li> <p>Description</p> </li> <li>
         * <p>Owner</p> </li> <li> <p>IDs for an ID target</p> </li> <li> <p>Tags for a Tag
         * target</p> </li> <li> <p>From any supported tag type to another. The three
         * supported tag types are ID target, Tag target, and resource group. For more
         * information, see <a>Target</a>.</p> </li> </ul>  <p>If a parameter is
         * null, then the corresponding field isn't modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMaintenanceWindowTargetAsync(const Model::UpdateMaintenanceWindowTargetRequest& request, const UpdateMaintenanceWindowTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a task assigned to a maintenance window. You can't change the task
         * type, but you can change the following values:</p> <ul> <li> <p>
         * <code>TaskARN</code>. For example, you can change a <code>RUN_COMMAND</code>
         * task from <code>AWS-RunPowerShellScript</code> to
         * <code>AWS-RunShellScript</code>.</p> </li> <li> <p> <code>ServiceRoleArn</code>
         * </p> </li> <li> <p> <code>TaskInvocationParameters</code> </p> </li> <li> <p>
         * <code>Priority</code> </p> </li> <li> <p> <code>MaxConcurrency</code> </p> </li>
         * <li> <p> <code>MaxErrors</code> </p> </li> </ul>  <p>One or more targets
         * must be specified for maintenance window Run Command-type tasks. Depending on
         * the task, targets are optional for other maintenance window task types
         * (Automation, Lambda, and Step Functions). For more information about running
         * tasks that don't specify targets, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">Registering
         * maintenance window tasks without targets</a> in the <i>Amazon Web Services
         * Systems Manager User Guide</i>.</p>  <p>If the value for a parameter in
         * <code>UpdateMaintenanceWindowTask</code> is null, then the corresponding field
         * isn't modified. If you set <code>Replace</code> to true, then all fields
         * required by the <a>RegisterTaskWithMaintenanceWindow</a> operation are required
         * for this request. Optional fields that aren't specified are set to null.</p>
         *  <p>When you update a maintenance window task that has options
         * specified in <code>TaskInvocationParameters</code>, you must provide again all
         * the <code>TaskInvocationParameters</code> values that you want to retain. The
         * values you don't specify again are removed. For example, suppose that when you
         * registered a Run Command task, you specified
         * <code>TaskInvocationParameters</code> values for <code>Comment</code>,
         * <code>NotificationConfig</code>, and <code>OutputS3BucketName</code>. If you
         * update the maintenance window task and specify only a different
         * <code>OutputS3BucketName</code> value, the values for <code>Comment</code> and
         * <code>NotificationConfig</code> are removed.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTask">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMaintenanceWindowTaskOutcome UpdateMaintenanceWindowTask(const Model::UpdateMaintenanceWindowTaskRequest& request) const;

        /**
         * <p>Modifies a task assigned to a maintenance window. You can't change the task
         * type, but you can change the following values:</p> <ul> <li> <p>
         * <code>TaskARN</code>. For example, you can change a <code>RUN_COMMAND</code>
         * task from <code>AWS-RunPowerShellScript</code> to
         * <code>AWS-RunShellScript</code>.</p> </li> <li> <p> <code>ServiceRoleArn</code>
         * </p> </li> <li> <p> <code>TaskInvocationParameters</code> </p> </li> <li> <p>
         * <code>Priority</code> </p> </li> <li> <p> <code>MaxConcurrency</code> </p> </li>
         * <li> <p> <code>MaxErrors</code> </p> </li> </ul>  <p>One or more targets
         * must be specified for maintenance window Run Command-type tasks. Depending on
         * the task, targets are optional for other maintenance window task types
         * (Automation, Lambda, and Step Functions). For more information about running
         * tasks that don't specify targets, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">Registering
         * maintenance window tasks without targets</a> in the <i>Amazon Web Services
         * Systems Manager User Guide</i>.</p>  <p>If the value for a parameter in
         * <code>UpdateMaintenanceWindowTask</code> is null, then the corresponding field
         * isn't modified. If you set <code>Replace</code> to true, then all fields
         * required by the <a>RegisterTaskWithMaintenanceWindow</a> operation are required
         * for this request. Optional fields that aren't specified are set to null.</p>
         *  <p>When you update a maintenance window task that has options
         * specified in <code>TaskInvocationParameters</code>, you must provide again all
         * the <code>TaskInvocationParameters</code> values that you want to retain. The
         * values you don't specify again are removed. For example, suppose that when you
         * registered a Run Command task, you specified
         * <code>TaskInvocationParameters</code> values for <code>Comment</code>,
         * <code>NotificationConfig</code>, and <code>OutputS3BucketName</code>. If you
         * update the maintenance window task and specify only a different
         * <code>OutputS3BucketName</code> value, the values for <code>Comment</code> and
         * <code>NotificationConfig</code> are removed.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMaintenanceWindowTaskOutcomeCallable UpdateMaintenanceWindowTaskCallable(const Model::UpdateMaintenanceWindowTaskRequest& request) const;

        /**
         * <p>Modifies a task assigned to a maintenance window. You can't change the task
         * type, but you can change the following values:</p> <ul> <li> <p>
         * <code>TaskARN</code>. For example, you can change a <code>RUN_COMMAND</code>
         * task from <code>AWS-RunPowerShellScript</code> to
         * <code>AWS-RunShellScript</code>.</p> </li> <li> <p> <code>ServiceRoleArn</code>
         * </p> </li> <li> <p> <code>TaskInvocationParameters</code> </p> </li> <li> <p>
         * <code>Priority</code> </p> </li> <li> <p> <code>MaxConcurrency</code> </p> </li>
         * <li> <p> <code>MaxErrors</code> </p> </li> </ul>  <p>One or more targets
         * must be specified for maintenance window Run Command-type tasks. Depending on
         * the task, targets are optional for other maintenance window task types
         * (Automation, Lambda, and Step Functions). For more information about running
         * tasks that don't specify targets, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">Registering
         * maintenance window tasks without targets</a> in the <i>Amazon Web Services
         * Systems Manager User Guide</i>.</p>  <p>If the value for a parameter in
         * <code>UpdateMaintenanceWindowTask</code> is null, then the corresponding field
         * isn't modified. If you set <code>Replace</code> to true, then all fields
         * required by the <a>RegisterTaskWithMaintenanceWindow</a> operation are required
         * for this request. Optional fields that aren't specified are set to null.</p>
         *  <p>When you update a maintenance window task that has options
         * specified in <code>TaskInvocationParameters</code>, you must provide again all
         * the <code>TaskInvocationParameters</code> values that you want to retain. The
         * values you don't specify again are removed. For example, suppose that when you
         * registered a Run Command task, you specified
         * <code>TaskInvocationParameters</code> values for <code>Comment</code>,
         * <code>NotificationConfig</code>, and <code>OutputS3BucketName</code>. If you
         * update the maintenance window task and specify only a different
         * <code>OutputS3BucketName</code> value, the values for <code>Comment</code> and
         * <code>NotificationConfig</code> are removed.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMaintenanceWindowTaskAsync(const Model::UpdateMaintenanceWindowTaskRequest& request, const UpdateMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the Identity and Access Management (IAM) role that is assigned to the
         * on-premises server, edge device, or virtual machines (VM). IAM roles are first
         * assigned to these hybrid nodes during the activation process. For more
         * information, see <a>CreateActivation</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateManagedInstanceRole">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateManagedInstanceRoleOutcome UpdateManagedInstanceRole(const Model::UpdateManagedInstanceRoleRequest& request) const;

        /**
         * <p>Changes the Identity and Access Management (IAM) role that is assigned to the
         * on-premises server, edge device, or virtual machines (VM). IAM roles are first
         * assigned to these hybrid nodes during the activation process. For more
         * information, see <a>CreateActivation</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateManagedInstanceRole">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateManagedInstanceRoleOutcomeCallable UpdateManagedInstanceRoleCallable(const Model::UpdateManagedInstanceRoleRequest& request) const;

        /**
         * <p>Changes the Identity and Access Management (IAM) role that is assigned to the
         * on-premises server, edge device, or virtual machines (VM). IAM roles are first
         * assigned to these hybrid nodes during the activation process. For more
         * information, see <a>CreateActivation</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateManagedInstanceRole">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateManagedInstanceRoleAsync(const Model::UpdateManagedInstanceRoleRequest& request, const UpdateManagedInstanceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Edit or change an OpsItem. You must have permission in Identity and Access
         * Management (IAM) to update an OpsItem. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateOpsItem">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOpsItemOutcome UpdateOpsItem(const Model::UpdateOpsItemRequest& request) const;

        /**
         * <p>Edit or change an OpsItem. You must have permission in Identity and Access
         * Management (IAM) to update an OpsItem. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateOpsItem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOpsItemOutcomeCallable UpdateOpsItemCallable(const Model::UpdateOpsItemRequest& request) const;

        /**
         * <p>Edit or change an OpsItem. You must have permission in Identity and Access
         * Management (IAM) to update an OpsItem. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * started with OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
         * Guide</i>.</p> <p>Operations engineers and IT professionals use Amazon Web
         * Services Systems Manager OpsCenter to view, investigate, and remediate
         * operational issues impacting the performance and health of their Amazon Web
         * Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a>
         * in the <i>Amazon Web Services Systems Manager User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateOpsItem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOpsItemAsync(const Model::UpdateOpsItemRequest& request, const UpdateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Amazon Web Services Systems Manager calls this API operation when you edit
         * OpsMetadata in Application Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateOpsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOpsMetadataOutcome UpdateOpsMetadata(const Model::UpdateOpsMetadataRequest& request) const;

        /**
         * <p>Amazon Web Services Systems Manager calls this API operation when you edit
         * OpsMetadata in Application Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateOpsMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOpsMetadataOutcomeCallable UpdateOpsMetadataCallable(const Model::UpdateOpsMetadataRequest& request) const;

        /**
         * <p>Amazon Web Services Systems Manager calls this API operation when you edit
         * OpsMetadata in Application Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateOpsMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOpsMetadataAsync(const Model::UpdateOpsMetadataRequest& request, const UpdateOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing patch baseline. Fields not specified in the request are
         * left unchanged.</p>  <p>For information about valid key-value pairs in
         * <code>PatchFilters</code> for each supported operating system type, see
         * <a>PatchFilter</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdatePatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePatchBaselineOutcome UpdatePatchBaseline(const Model::UpdatePatchBaselineRequest& request) const;

        /**
         * <p>Modifies an existing patch baseline. Fields not specified in the request are
         * left unchanged.</p>  <p>For information about valid key-value pairs in
         * <code>PatchFilters</code> for each supported operating system type, see
         * <a>PatchFilter</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdatePatchBaseline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePatchBaselineOutcomeCallable UpdatePatchBaselineCallable(const Model::UpdatePatchBaselineRequest& request) const;

        /**
         * <p>Modifies an existing patch baseline. Fields not specified in the request are
         * left unchanged.</p>  <p>For information about valid key-value pairs in
         * <code>PatchFilters</code> for each supported operating system type, see
         * <a>PatchFilter</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdatePatchBaseline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePatchBaselineAsync(const Model::UpdatePatchBaselineRequest& request, const UpdatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a resource data sync. After you create a resource data sync for a
         * Region, you can't change the account options for that sync. For example, if you
         * create a sync in the us-east-2 (Ohio) Region and you choose the <code>Include
         * only the current account</code> option, you can't edit that sync later and
         * choose the <code>Include all accounts from my Organizations configuration</code>
         * option. Instead, you must delete the first resource data sync, and create a new
         * one.</p>  <p>This API operation only supports a resource data sync that
         * was created with a SyncFromSource <code>SyncType</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateResourceDataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceDataSyncOutcome UpdateResourceDataSync(const Model::UpdateResourceDataSyncRequest& request) const;

        /**
         * <p>Update a resource data sync. After you create a resource data sync for a
         * Region, you can't change the account options for that sync. For example, if you
         * create a sync in the us-east-2 (Ohio) Region and you choose the <code>Include
         * only the current account</code> option, you can't edit that sync later and
         * choose the <code>Include all accounts from my Organizations configuration</code>
         * option. Instead, you must delete the first resource data sync, and create a new
         * one.</p>  <p>This API operation only supports a resource data sync that
         * was created with a SyncFromSource <code>SyncType</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateResourceDataSync">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceDataSyncOutcomeCallable UpdateResourceDataSyncCallable(const Model::UpdateResourceDataSyncRequest& request) const;

        /**
         * <p>Update a resource data sync. After you create a resource data sync for a
         * Region, you can't change the account options for that sync. For example, if you
         * create a sync in the us-east-2 (Ohio) Region and you choose the <code>Include
         * only the current account</code> option, you can't edit that sync later and
         * choose the <code>Include all accounts from my Organizations configuration</code>
         * option. Instead, you must delete the first resource data sync, and create a new
         * one.</p>  <p>This API operation only supports a resource data sync that
         * was created with a SyncFromSource <code>SyncType</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateResourceDataSync">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceDataSyncAsync(const Model::UpdateResourceDataSyncRequest& request, const UpdateResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of "false". This
         * means the user can't use this feature unless they change the setting to "true"
         * and intentionally opt in for a paid feature.</p> <p>Services map a
         * <code>SettingId</code> object to a setting value. Amazon Web Services services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API operation to view the current value. Or, use the
         * <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the Amazon Web Services service team.</p> <p>Update the service
         * setting for the account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateServiceSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceSettingOutcome UpdateServiceSetting(const Model::UpdateServiceSettingRequest& request) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of "false". This
         * means the user can't use this feature unless they change the setting to "true"
         * and intentionally opt in for a paid feature.</p> <p>Services map a
         * <code>SettingId</code> object to a setting value. Amazon Web Services services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API operation to view the current value. Or, use the
         * <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the Amazon Web Services service team.</p> <p>Update the service
         * setting for the account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateServiceSetting">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceSettingOutcomeCallable UpdateServiceSettingCallable(const Model::UpdateServiceSettingRequest& request) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an Amazon Web
         * Services service. This setting defines how a user interacts with or uses a
         * service or a feature of a service. For example, if an Amazon Web Services
         * service charges money to the account based on feature or service usage, then the
         * Amazon Web Services service team might create a default setting of "false". This
         * means the user can't use this feature unless they change the setting to "true"
         * and intentionally opt in for a paid feature.</p> <p>Services map a
         * <code>SettingId</code> object to a setting value. Amazon Web Services services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API operation to view the current value. Or, use the
         * <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the Amazon Web Services service team.</p> <p>Update the service
         * setting for the account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateServiceSetting">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceSettingAsync(const Model::UpdateServiceSettingRequest& request, const UpdateServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateOpsItemRelatedItemAsyncHelper(const Model::AssociateOpsItemRelatedItemRequest& request, const AssociateOpsItemRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelCommandAsyncHelper(const Model::CancelCommandRequest& request, const CancelCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelMaintenanceWindowExecutionAsyncHelper(const Model::CancelMaintenanceWindowExecutionRequest& request, const CancelMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateActivationAsyncHelper(const Model::CreateActivationRequest& request, const CreateActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAssociationAsyncHelper(const Model::CreateAssociationRequest& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAssociationBatchAsyncHelper(const Model::CreateAssociationBatchRequest& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDocumentAsyncHelper(const Model::CreateDocumentRequest& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMaintenanceWindowAsyncHelper(const Model::CreateMaintenanceWindowRequest& request, const CreateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOpsItemAsyncHelper(const Model::CreateOpsItemRequest& request, const CreateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOpsMetadataAsyncHelper(const Model::CreateOpsMetadataRequest& request, const CreateOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePatchBaselineAsyncHelper(const Model::CreatePatchBaselineRequest& request, const CreatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResourceDataSyncAsyncHelper(const Model::CreateResourceDataSyncRequest& request, const CreateResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteActivationAsyncHelper(const Model::DeleteActivationRequest& request, const DeleteActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAssociationAsyncHelper(const Model::DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDocumentAsyncHelper(const Model::DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInventoryAsyncHelper(const Model::DeleteInventoryRequest& request, const DeleteInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMaintenanceWindowAsyncHelper(const Model::DeleteMaintenanceWindowRequest& request, const DeleteMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOpsMetadataAsyncHelper(const Model::DeleteOpsMetadataRequest& request, const DeleteOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteParameterAsyncHelper(const Model::DeleteParameterRequest& request, const DeleteParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteParametersAsyncHelper(const Model::DeleteParametersRequest& request, const DeleteParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePatchBaselineAsyncHelper(const Model::DeletePatchBaselineRequest& request, const DeletePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourceDataSyncAsyncHelper(const Model::DeleteResourceDataSyncRequest& request, const DeleteResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterManagedInstanceAsyncHelper(const Model::DeregisterManagedInstanceRequest& request, const DeregisterManagedInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterPatchBaselineForPatchGroupAsyncHelper(const Model::DeregisterPatchBaselineForPatchGroupRequest& request, const DeregisterPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterTargetFromMaintenanceWindowAsyncHelper(const Model::DeregisterTargetFromMaintenanceWindowRequest& request, const DeregisterTargetFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterTaskFromMaintenanceWindowAsyncHelper(const Model::DeregisterTaskFromMaintenanceWindowRequest& request, const DeregisterTaskFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeActivationsAsyncHelper(const Model::DescribeActivationsRequest& request, const DescribeActivationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAssociationAsyncHelper(const Model::DescribeAssociationRequest& request, const DescribeAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAssociationExecutionTargetsAsyncHelper(const Model::DescribeAssociationExecutionTargetsRequest& request, const DescribeAssociationExecutionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAssociationExecutionsAsyncHelper(const Model::DescribeAssociationExecutionsRequest& request, const DescribeAssociationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutomationExecutionsAsyncHelper(const Model::DescribeAutomationExecutionsRequest& request, const DescribeAutomationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutomationStepExecutionsAsyncHelper(const Model::DescribeAutomationStepExecutionsRequest& request, const DescribeAutomationStepExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAvailablePatchesAsyncHelper(const Model::DescribeAvailablePatchesRequest& request, const DescribeAvailablePatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDocumentAsyncHelper(const Model::DescribeDocumentRequest& request, const DescribeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDocumentPermissionAsyncHelper(const Model::DescribeDocumentPermissionRequest& request, const DescribeDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEffectiveInstanceAssociationsAsyncHelper(const Model::DescribeEffectiveInstanceAssociationsRequest& request, const DescribeEffectiveInstanceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEffectivePatchesForPatchBaselineAsyncHelper(const Model::DescribeEffectivePatchesForPatchBaselineRequest& request, const DescribeEffectivePatchesForPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceAssociationsStatusAsyncHelper(const Model::DescribeInstanceAssociationsStatusRequest& request, const DescribeInstanceAssociationsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceInformationAsyncHelper(const Model::DescribeInstanceInformationRequest& request, const DescribeInstanceInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstancePatchStatesAsyncHelper(const Model::DescribeInstancePatchStatesRequest& request, const DescribeInstancePatchStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstancePatchStatesForPatchGroupAsyncHelper(const Model::DescribeInstancePatchStatesForPatchGroupRequest& request, const DescribeInstancePatchStatesForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstancePatchesAsyncHelper(const Model::DescribeInstancePatchesRequest& request, const DescribeInstancePatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInventoryDeletionsAsyncHelper(const Model::DescribeInventoryDeletionsRequest& request, const DescribeInventoryDeletionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceWindowExecutionTaskInvocationsAsyncHelper(const Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request, const DescribeMaintenanceWindowExecutionTaskInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceWindowExecutionTasksAsyncHelper(const Model::DescribeMaintenanceWindowExecutionTasksRequest& request, const DescribeMaintenanceWindowExecutionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceWindowExecutionsAsyncHelper(const Model::DescribeMaintenanceWindowExecutionsRequest& request, const DescribeMaintenanceWindowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceWindowScheduleAsyncHelper(const Model::DescribeMaintenanceWindowScheduleRequest& request, const DescribeMaintenanceWindowScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceWindowTargetsAsyncHelper(const Model::DescribeMaintenanceWindowTargetsRequest& request, const DescribeMaintenanceWindowTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceWindowTasksAsyncHelper(const Model::DescribeMaintenanceWindowTasksRequest& request, const DescribeMaintenanceWindowTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceWindowsAsyncHelper(const Model::DescribeMaintenanceWindowsRequest& request, const DescribeMaintenanceWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceWindowsForTargetAsyncHelper(const Model::DescribeMaintenanceWindowsForTargetRequest& request, const DescribeMaintenanceWindowsForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOpsItemsAsyncHelper(const Model::DescribeOpsItemsRequest& request, const DescribeOpsItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeParametersAsyncHelper(const Model::DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePatchBaselinesAsyncHelper(const Model::DescribePatchBaselinesRequest& request, const DescribePatchBaselinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePatchGroupStateAsyncHelper(const Model::DescribePatchGroupStateRequest& request, const DescribePatchGroupStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePatchGroupsAsyncHelper(const Model::DescribePatchGroupsRequest& request, const DescribePatchGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePatchPropertiesAsyncHelper(const Model::DescribePatchPropertiesRequest& request, const DescribePatchPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSessionsAsyncHelper(const Model::DescribeSessionsRequest& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateOpsItemRelatedItemAsyncHelper(const Model::DisassociateOpsItemRelatedItemRequest& request, const DisassociateOpsItemRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAutomationExecutionAsyncHelper(const Model::GetAutomationExecutionRequest& request, const GetAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCalendarStateAsyncHelper(const Model::GetCalendarStateRequest& request, const GetCalendarStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCommandInvocationAsyncHelper(const Model::GetCommandInvocationRequest& request, const GetCommandInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConnectionStatusAsyncHelper(const Model::GetConnectionStatusRequest& request, const GetConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDefaultPatchBaselineAsyncHelper(const Model::GetDefaultPatchBaselineRequest& request, const GetDefaultPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeployablePatchSnapshotForInstanceAsyncHelper(const Model::GetDeployablePatchSnapshotForInstanceRequest& request, const GetDeployablePatchSnapshotForInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDocumentAsyncHelper(const Model::GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInventoryAsyncHelper(const Model::GetInventoryRequest& request, const GetInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInventorySchemaAsyncHelper(const Model::GetInventorySchemaRequest& request, const GetInventorySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMaintenanceWindowAsyncHelper(const Model::GetMaintenanceWindowRequest& request, const GetMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMaintenanceWindowExecutionAsyncHelper(const Model::GetMaintenanceWindowExecutionRequest& request, const GetMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMaintenanceWindowExecutionTaskAsyncHelper(const Model::GetMaintenanceWindowExecutionTaskRequest& request, const GetMaintenanceWindowExecutionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMaintenanceWindowExecutionTaskInvocationAsyncHelper(const Model::GetMaintenanceWindowExecutionTaskInvocationRequest& request, const GetMaintenanceWindowExecutionTaskInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMaintenanceWindowTaskAsyncHelper(const Model::GetMaintenanceWindowTaskRequest& request, const GetMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOpsItemAsyncHelper(const Model::GetOpsItemRequest& request, const GetOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOpsMetadataAsyncHelper(const Model::GetOpsMetadataRequest& request, const GetOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOpsSummaryAsyncHelper(const Model::GetOpsSummaryRequest& request, const GetOpsSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetParameterAsyncHelper(const Model::GetParameterRequest& request, const GetParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetParameterHistoryAsyncHelper(const Model::GetParameterHistoryRequest& request, const GetParameterHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetParametersAsyncHelper(const Model::GetParametersRequest& request, const GetParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetParametersByPathAsyncHelper(const Model::GetParametersByPathRequest& request, const GetParametersByPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPatchBaselineAsyncHelper(const Model::GetPatchBaselineRequest& request, const GetPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPatchBaselineForPatchGroupAsyncHelper(const Model::GetPatchBaselineForPatchGroupRequest& request, const GetPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServiceSettingAsyncHelper(const Model::GetServiceSettingRequest& request, const GetServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void LabelParameterVersionAsyncHelper(const Model::LabelParameterVersionRequest& request, const LabelParameterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssociationVersionsAsyncHelper(const Model::ListAssociationVersionsRequest& request, const ListAssociationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssociationsAsyncHelper(const Model::ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCommandInvocationsAsyncHelper(const Model::ListCommandInvocationsRequest& request, const ListCommandInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCommandsAsyncHelper(const Model::ListCommandsRequest& request, const ListCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListComplianceItemsAsyncHelper(const Model::ListComplianceItemsRequest& request, const ListComplianceItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListComplianceSummariesAsyncHelper(const Model::ListComplianceSummariesRequest& request, const ListComplianceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDocumentMetadataHistoryAsyncHelper(const Model::ListDocumentMetadataHistoryRequest& request, const ListDocumentMetadataHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDocumentVersionsAsyncHelper(const Model::ListDocumentVersionsRequest& request, const ListDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDocumentsAsyncHelper(const Model::ListDocumentsRequest& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInventoryEntriesAsyncHelper(const Model::ListInventoryEntriesRequest& request, const ListInventoryEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOpsItemEventsAsyncHelper(const Model::ListOpsItemEventsRequest& request, const ListOpsItemEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOpsItemRelatedItemsAsyncHelper(const Model::ListOpsItemRelatedItemsRequest& request, const ListOpsItemRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOpsMetadataAsyncHelper(const Model::ListOpsMetadataRequest& request, const ListOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourceComplianceSummariesAsyncHelper(const Model::ListResourceComplianceSummariesRequest& request, const ListResourceComplianceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourceDataSyncAsyncHelper(const Model::ListResourceDataSyncRequest& request, const ListResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDocumentPermissionAsyncHelper(const Model::ModifyDocumentPermissionRequest& request, const ModifyDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutComplianceItemsAsyncHelper(const Model::PutComplianceItemsRequest& request, const PutComplianceItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutInventoryAsyncHelper(const Model::PutInventoryRequest& request, const PutInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutParameterAsyncHelper(const Model::PutParameterRequest& request, const PutParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterDefaultPatchBaselineAsyncHelper(const Model::RegisterDefaultPatchBaselineRequest& request, const RegisterDefaultPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterPatchBaselineForPatchGroupAsyncHelper(const Model::RegisterPatchBaselineForPatchGroupRequest& request, const RegisterPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterTargetWithMaintenanceWindowAsyncHelper(const Model::RegisterTargetWithMaintenanceWindowRequest& request, const RegisterTargetWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterTaskWithMaintenanceWindowAsyncHelper(const Model::RegisterTaskWithMaintenanceWindowRequest& request, const RegisterTaskWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetServiceSettingAsyncHelper(const Model::ResetServiceSettingRequest& request, const ResetServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResumeSessionAsyncHelper(const Model::ResumeSessionRequest& request, const ResumeSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendAutomationSignalAsyncHelper(const Model::SendAutomationSignalRequest& request, const SendAutomationSignalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendCommandAsyncHelper(const Model::SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartAssociationsOnceAsyncHelper(const Model::StartAssociationsOnceRequest& request, const StartAssociationsOnceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartAutomationExecutionAsyncHelper(const Model::StartAutomationExecutionRequest& request, const StartAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartChangeRequestExecutionAsyncHelper(const Model::StartChangeRequestExecutionRequest& request, const StartChangeRequestExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartSessionAsyncHelper(const Model::StartSessionRequest& request, const StartSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopAutomationExecutionAsyncHelper(const Model::StopAutomationExecutionRequest& request, const StopAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateSessionAsyncHelper(const Model::TerminateSessionRequest& request, const TerminateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnlabelParameterVersionAsyncHelper(const Model::UnlabelParameterVersionRequest& request, const UnlabelParameterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssociationAsyncHelper(const Model::UpdateAssociationRequest& request, const UpdateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssociationStatusAsyncHelper(const Model::UpdateAssociationStatusRequest& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDocumentAsyncHelper(const Model::UpdateDocumentRequest& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDocumentDefaultVersionAsyncHelper(const Model::UpdateDocumentDefaultVersionRequest& request, const UpdateDocumentDefaultVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDocumentMetadataAsyncHelper(const Model::UpdateDocumentMetadataRequest& request, const UpdateDocumentMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMaintenanceWindowAsyncHelper(const Model::UpdateMaintenanceWindowRequest& request, const UpdateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMaintenanceWindowTargetAsyncHelper(const Model::UpdateMaintenanceWindowTargetRequest& request, const UpdateMaintenanceWindowTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMaintenanceWindowTaskAsyncHelper(const Model::UpdateMaintenanceWindowTaskRequest& request, const UpdateMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateManagedInstanceRoleAsyncHelper(const Model::UpdateManagedInstanceRoleRequest& request, const UpdateManagedInstanceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOpsItemAsyncHelper(const Model::UpdateOpsItemRequest& request, const UpdateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOpsMetadataAsyncHelper(const Model::UpdateOpsMetadataRequest& request, const UpdateOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePatchBaselineAsyncHelper(const Model::UpdatePatchBaselineRequest& request, const UpdatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResourceDataSyncAsyncHelper(const Model::UpdateResourceDataSyncRequest& request, const UpdateResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServiceSettingAsyncHelper(const Model::UpdateServiceSettingRequest& request, const UpdateServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SSM
} // namespace Aws
