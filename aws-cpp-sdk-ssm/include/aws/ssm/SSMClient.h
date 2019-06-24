/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/ssm/model/CancelCommandResult.h>
#include <aws/ssm/model/CancelMaintenanceWindowExecutionResult.h>
#include <aws/ssm/model/CreateActivationResult.h>
#include <aws/ssm/model/CreateAssociationResult.h>
#include <aws/ssm/model/CreateAssociationBatchResult.h>
#include <aws/ssm/model/CreateDocumentResult.h>
#include <aws/ssm/model/CreateMaintenanceWindowResult.h>
#include <aws/ssm/model/CreateOpsItemResult.h>
#include <aws/ssm/model/CreatePatchBaselineResult.h>
#include <aws/ssm/model/CreateResourceDataSyncResult.h>
#include <aws/ssm/model/DeleteActivationResult.h>
#include <aws/ssm/model/DeleteAssociationResult.h>
#include <aws/ssm/model/DeleteDocumentResult.h>
#include <aws/ssm/model/DeleteInventoryResult.h>
#include <aws/ssm/model/DeleteMaintenanceWindowResult.h>
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
#include <aws/ssm/model/GetAutomationExecutionResult.h>
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
#include <aws/ssm/model/ListDocumentVersionsResult.h>
#include <aws/ssm/model/ListDocumentsResult.h>
#include <aws/ssm/model/ListInventoryEntriesResult.h>
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
#include <aws/ssm/model/StartSessionResult.h>
#include <aws/ssm/model/StopAutomationExecutionResult.h>
#include <aws/ssm/model/TerminateSessionResult.h>
#include <aws/ssm/model/UpdateAssociationResult.h>
#include <aws/ssm/model/UpdateAssociationStatusResult.h>
#include <aws/ssm/model/UpdateDocumentResult.h>
#include <aws/ssm/model/UpdateDocumentDefaultVersionResult.h>
#include <aws/ssm/model/UpdateMaintenanceWindowResult.h>
#include <aws/ssm/model/UpdateMaintenanceWindowTargetResult.h>
#include <aws/ssm/model/UpdateMaintenanceWindowTaskResult.h>
#include <aws/ssm/model/UpdateManagedInstanceRoleResult.h>
#include <aws/ssm/model/UpdateOpsItemResult.h>
#include <aws/ssm/model/UpdatePatchBaselineResult.h>
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
        class CancelCommandRequest;
        class CancelMaintenanceWindowExecutionRequest;
        class CreateActivationRequest;
        class CreateAssociationRequest;
        class CreateAssociationBatchRequest;
        class CreateDocumentRequest;
        class CreateMaintenanceWindowRequest;
        class CreateOpsItemRequest;
        class CreatePatchBaselineRequest;
        class CreateResourceDataSyncRequest;
        class DeleteActivationRequest;
        class DeleteAssociationRequest;
        class DeleteDocumentRequest;
        class DeleteInventoryRequest;
        class DeleteMaintenanceWindowRequest;
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
        class GetAutomationExecutionRequest;
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
        class ListDocumentVersionsRequest;
        class ListDocumentsRequest;
        class ListInventoryEntriesRequest;
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
        class StartSessionRequest;
        class StopAutomationExecutionRequest;
        class TerminateSessionRequest;
        class UpdateAssociationRequest;
        class UpdateAssociationStatusRequest;
        class UpdateDocumentRequest;
        class UpdateDocumentDefaultVersionRequest;
        class UpdateMaintenanceWindowRequest;
        class UpdateMaintenanceWindowTargetRequest;
        class UpdateMaintenanceWindowTaskRequest;
        class UpdateManagedInstanceRoleRequest;
        class UpdateOpsItemRequest;
        class UpdatePatchBaselineRequest;
        class UpdateServiceSettingRequest;

        typedef Aws::Utils::Outcome<AddTagsToResourceResult, Aws::Client::AWSError<SSMErrors>> AddTagsToResourceOutcome;
        typedef Aws::Utils::Outcome<CancelCommandResult, Aws::Client::AWSError<SSMErrors>> CancelCommandOutcome;
        typedef Aws::Utils::Outcome<CancelMaintenanceWindowExecutionResult, Aws::Client::AWSError<SSMErrors>> CancelMaintenanceWindowExecutionOutcome;
        typedef Aws::Utils::Outcome<CreateActivationResult, Aws::Client::AWSError<SSMErrors>> CreateActivationOutcome;
        typedef Aws::Utils::Outcome<CreateAssociationResult, Aws::Client::AWSError<SSMErrors>> CreateAssociationOutcome;
        typedef Aws::Utils::Outcome<CreateAssociationBatchResult, Aws::Client::AWSError<SSMErrors>> CreateAssociationBatchOutcome;
        typedef Aws::Utils::Outcome<CreateDocumentResult, Aws::Client::AWSError<SSMErrors>> CreateDocumentOutcome;
        typedef Aws::Utils::Outcome<CreateMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> CreateMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<CreateOpsItemResult, Aws::Client::AWSError<SSMErrors>> CreateOpsItemOutcome;
        typedef Aws::Utils::Outcome<CreatePatchBaselineResult, Aws::Client::AWSError<SSMErrors>> CreatePatchBaselineOutcome;
        typedef Aws::Utils::Outcome<CreateResourceDataSyncResult, Aws::Client::AWSError<SSMErrors>> CreateResourceDataSyncOutcome;
        typedef Aws::Utils::Outcome<DeleteActivationResult, Aws::Client::AWSError<SSMErrors>> DeleteActivationOutcome;
        typedef Aws::Utils::Outcome<DeleteAssociationResult, Aws::Client::AWSError<SSMErrors>> DeleteAssociationOutcome;
        typedef Aws::Utils::Outcome<DeleteDocumentResult, Aws::Client::AWSError<SSMErrors>> DeleteDocumentOutcome;
        typedef Aws::Utils::Outcome<DeleteInventoryResult, Aws::Client::AWSError<SSMErrors>> DeleteInventoryOutcome;
        typedef Aws::Utils::Outcome<DeleteMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> DeleteMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<DeleteParameterResult, Aws::Client::AWSError<SSMErrors>> DeleteParameterOutcome;
        typedef Aws::Utils::Outcome<DeleteParametersResult, Aws::Client::AWSError<SSMErrors>> DeleteParametersOutcome;
        typedef Aws::Utils::Outcome<DeletePatchBaselineResult, Aws::Client::AWSError<SSMErrors>> DeletePatchBaselineOutcome;
        typedef Aws::Utils::Outcome<DeleteResourceDataSyncResult, Aws::Client::AWSError<SSMErrors>> DeleteResourceDataSyncOutcome;
        typedef Aws::Utils::Outcome<DeregisterManagedInstanceResult, Aws::Client::AWSError<SSMErrors>> DeregisterManagedInstanceOutcome;
        typedef Aws::Utils::Outcome<DeregisterPatchBaselineForPatchGroupResult, Aws::Client::AWSError<SSMErrors>> DeregisterPatchBaselineForPatchGroupOutcome;
        typedef Aws::Utils::Outcome<DeregisterTargetFromMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> DeregisterTargetFromMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<DeregisterTaskFromMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> DeregisterTaskFromMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<DescribeActivationsResult, Aws::Client::AWSError<SSMErrors>> DescribeActivationsOutcome;
        typedef Aws::Utils::Outcome<DescribeAssociationResult, Aws::Client::AWSError<SSMErrors>> DescribeAssociationOutcome;
        typedef Aws::Utils::Outcome<DescribeAssociationExecutionTargetsResult, Aws::Client::AWSError<SSMErrors>> DescribeAssociationExecutionTargetsOutcome;
        typedef Aws::Utils::Outcome<DescribeAssociationExecutionsResult, Aws::Client::AWSError<SSMErrors>> DescribeAssociationExecutionsOutcome;
        typedef Aws::Utils::Outcome<DescribeAutomationExecutionsResult, Aws::Client::AWSError<SSMErrors>> DescribeAutomationExecutionsOutcome;
        typedef Aws::Utils::Outcome<DescribeAutomationStepExecutionsResult, Aws::Client::AWSError<SSMErrors>> DescribeAutomationStepExecutionsOutcome;
        typedef Aws::Utils::Outcome<DescribeAvailablePatchesResult, Aws::Client::AWSError<SSMErrors>> DescribeAvailablePatchesOutcome;
        typedef Aws::Utils::Outcome<DescribeDocumentResult, Aws::Client::AWSError<SSMErrors>> DescribeDocumentOutcome;
        typedef Aws::Utils::Outcome<DescribeDocumentPermissionResult, Aws::Client::AWSError<SSMErrors>> DescribeDocumentPermissionOutcome;
        typedef Aws::Utils::Outcome<DescribeEffectiveInstanceAssociationsResult, Aws::Client::AWSError<SSMErrors>> DescribeEffectiveInstanceAssociationsOutcome;
        typedef Aws::Utils::Outcome<DescribeEffectivePatchesForPatchBaselineResult, Aws::Client::AWSError<SSMErrors>> DescribeEffectivePatchesForPatchBaselineOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceAssociationsStatusResult, Aws::Client::AWSError<SSMErrors>> DescribeInstanceAssociationsStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceInformationResult, Aws::Client::AWSError<SSMErrors>> DescribeInstanceInformationOutcome;
        typedef Aws::Utils::Outcome<DescribeInstancePatchStatesResult, Aws::Client::AWSError<SSMErrors>> DescribeInstancePatchStatesOutcome;
        typedef Aws::Utils::Outcome<DescribeInstancePatchStatesForPatchGroupResult, Aws::Client::AWSError<SSMErrors>> DescribeInstancePatchStatesForPatchGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeInstancePatchesResult, Aws::Client::AWSError<SSMErrors>> DescribeInstancePatchesOutcome;
        typedef Aws::Utils::Outcome<DescribeInventoryDeletionsResult, Aws::Client::AWSError<SSMErrors>> DescribeInventoryDeletionsOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowExecutionTaskInvocationsResult, Aws::Client::AWSError<SSMErrors>> DescribeMaintenanceWindowExecutionTaskInvocationsOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowExecutionTasksResult, Aws::Client::AWSError<SSMErrors>> DescribeMaintenanceWindowExecutionTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowExecutionsResult, Aws::Client::AWSError<SSMErrors>> DescribeMaintenanceWindowExecutionsOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowScheduleResult, Aws::Client::AWSError<SSMErrors>> DescribeMaintenanceWindowScheduleOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowTargetsResult, Aws::Client::AWSError<SSMErrors>> DescribeMaintenanceWindowTargetsOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowTasksResult, Aws::Client::AWSError<SSMErrors>> DescribeMaintenanceWindowTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowsResult, Aws::Client::AWSError<SSMErrors>> DescribeMaintenanceWindowsOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowsForTargetResult, Aws::Client::AWSError<SSMErrors>> DescribeMaintenanceWindowsForTargetOutcome;
        typedef Aws::Utils::Outcome<DescribeOpsItemsResult, Aws::Client::AWSError<SSMErrors>> DescribeOpsItemsOutcome;
        typedef Aws::Utils::Outcome<DescribeParametersResult, Aws::Client::AWSError<SSMErrors>> DescribeParametersOutcome;
        typedef Aws::Utils::Outcome<DescribePatchBaselinesResult, Aws::Client::AWSError<SSMErrors>> DescribePatchBaselinesOutcome;
        typedef Aws::Utils::Outcome<DescribePatchGroupStateResult, Aws::Client::AWSError<SSMErrors>> DescribePatchGroupStateOutcome;
        typedef Aws::Utils::Outcome<DescribePatchGroupsResult, Aws::Client::AWSError<SSMErrors>> DescribePatchGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribePatchPropertiesResult, Aws::Client::AWSError<SSMErrors>> DescribePatchPropertiesOutcome;
        typedef Aws::Utils::Outcome<DescribeSessionsResult, Aws::Client::AWSError<SSMErrors>> DescribeSessionsOutcome;
        typedef Aws::Utils::Outcome<GetAutomationExecutionResult, Aws::Client::AWSError<SSMErrors>> GetAutomationExecutionOutcome;
        typedef Aws::Utils::Outcome<GetCommandInvocationResult, Aws::Client::AWSError<SSMErrors>> GetCommandInvocationOutcome;
        typedef Aws::Utils::Outcome<GetConnectionStatusResult, Aws::Client::AWSError<SSMErrors>> GetConnectionStatusOutcome;
        typedef Aws::Utils::Outcome<GetDefaultPatchBaselineResult, Aws::Client::AWSError<SSMErrors>> GetDefaultPatchBaselineOutcome;
        typedef Aws::Utils::Outcome<GetDeployablePatchSnapshotForInstanceResult, Aws::Client::AWSError<SSMErrors>> GetDeployablePatchSnapshotForInstanceOutcome;
        typedef Aws::Utils::Outcome<GetDocumentResult, Aws::Client::AWSError<SSMErrors>> GetDocumentOutcome;
        typedef Aws::Utils::Outcome<GetInventoryResult, Aws::Client::AWSError<SSMErrors>> GetInventoryOutcome;
        typedef Aws::Utils::Outcome<GetInventorySchemaResult, Aws::Client::AWSError<SSMErrors>> GetInventorySchemaOutcome;
        typedef Aws::Utils::Outcome<GetMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> GetMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<GetMaintenanceWindowExecutionResult, Aws::Client::AWSError<SSMErrors>> GetMaintenanceWindowExecutionOutcome;
        typedef Aws::Utils::Outcome<GetMaintenanceWindowExecutionTaskResult, Aws::Client::AWSError<SSMErrors>> GetMaintenanceWindowExecutionTaskOutcome;
        typedef Aws::Utils::Outcome<GetMaintenanceWindowExecutionTaskInvocationResult, Aws::Client::AWSError<SSMErrors>> GetMaintenanceWindowExecutionTaskInvocationOutcome;
        typedef Aws::Utils::Outcome<GetMaintenanceWindowTaskResult, Aws::Client::AWSError<SSMErrors>> GetMaintenanceWindowTaskOutcome;
        typedef Aws::Utils::Outcome<GetOpsItemResult, Aws::Client::AWSError<SSMErrors>> GetOpsItemOutcome;
        typedef Aws::Utils::Outcome<GetOpsSummaryResult, Aws::Client::AWSError<SSMErrors>> GetOpsSummaryOutcome;
        typedef Aws::Utils::Outcome<GetParameterResult, Aws::Client::AWSError<SSMErrors>> GetParameterOutcome;
        typedef Aws::Utils::Outcome<GetParameterHistoryResult, Aws::Client::AWSError<SSMErrors>> GetParameterHistoryOutcome;
        typedef Aws::Utils::Outcome<GetParametersResult, Aws::Client::AWSError<SSMErrors>> GetParametersOutcome;
        typedef Aws::Utils::Outcome<GetParametersByPathResult, Aws::Client::AWSError<SSMErrors>> GetParametersByPathOutcome;
        typedef Aws::Utils::Outcome<GetPatchBaselineResult, Aws::Client::AWSError<SSMErrors>> GetPatchBaselineOutcome;
        typedef Aws::Utils::Outcome<GetPatchBaselineForPatchGroupResult, Aws::Client::AWSError<SSMErrors>> GetPatchBaselineForPatchGroupOutcome;
        typedef Aws::Utils::Outcome<GetServiceSettingResult, Aws::Client::AWSError<SSMErrors>> GetServiceSettingOutcome;
        typedef Aws::Utils::Outcome<LabelParameterVersionResult, Aws::Client::AWSError<SSMErrors>> LabelParameterVersionOutcome;
        typedef Aws::Utils::Outcome<ListAssociationVersionsResult, Aws::Client::AWSError<SSMErrors>> ListAssociationVersionsOutcome;
        typedef Aws::Utils::Outcome<ListAssociationsResult, Aws::Client::AWSError<SSMErrors>> ListAssociationsOutcome;
        typedef Aws::Utils::Outcome<ListCommandInvocationsResult, Aws::Client::AWSError<SSMErrors>> ListCommandInvocationsOutcome;
        typedef Aws::Utils::Outcome<ListCommandsResult, Aws::Client::AWSError<SSMErrors>> ListCommandsOutcome;
        typedef Aws::Utils::Outcome<ListComplianceItemsResult, Aws::Client::AWSError<SSMErrors>> ListComplianceItemsOutcome;
        typedef Aws::Utils::Outcome<ListComplianceSummariesResult, Aws::Client::AWSError<SSMErrors>> ListComplianceSummariesOutcome;
        typedef Aws::Utils::Outcome<ListDocumentVersionsResult, Aws::Client::AWSError<SSMErrors>> ListDocumentVersionsOutcome;
        typedef Aws::Utils::Outcome<ListDocumentsResult, Aws::Client::AWSError<SSMErrors>> ListDocumentsOutcome;
        typedef Aws::Utils::Outcome<ListInventoryEntriesResult, Aws::Client::AWSError<SSMErrors>> ListInventoryEntriesOutcome;
        typedef Aws::Utils::Outcome<ListResourceComplianceSummariesResult, Aws::Client::AWSError<SSMErrors>> ListResourceComplianceSummariesOutcome;
        typedef Aws::Utils::Outcome<ListResourceDataSyncResult, Aws::Client::AWSError<SSMErrors>> ListResourceDataSyncOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<SSMErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ModifyDocumentPermissionResult, Aws::Client::AWSError<SSMErrors>> ModifyDocumentPermissionOutcome;
        typedef Aws::Utils::Outcome<PutComplianceItemsResult, Aws::Client::AWSError<SSMErrors>> PutComplianceItemsOutcome;
        typedef Aws::Utils::Outcome<PutInventoryResult, Aws::Client::AWSError<SSMErrors>> PutInventoryOutcome;
        typedef Aws::Utils::Outcome<PutParameterResult, Aws::Client::AWSError<SSMErrors>> PutParameterOutcome;
        typedef Aws::Utils::Outcome<RegisterDefaultPatchBaselineResult, Aws::Client::AWSError<SSMErrors>> RegisterDefaultPatchBaselineOutcome;
        typedef Aws::Utils::Outcome<RegisterPatchBaselineForPatchGroupResult, Aws::Client::AWSError<SSMErrors>> RegisterPatchBaselineForPatchGroupOutcome;
        typedef Aws::Utils::Outcome<RegisterTargetWithMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> RegisterTargetWithMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<RegisterTaskWithMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> RegisterTaskWithMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, Aws::Client::AWSError<SSMErrors>> RemoveTagsFromResourceOutcome;
        typedef Aws::Utils::Outcome<ResetServiceSettingResult, Aws::Client::AWSError<SSMErrors>> ResetServiceSettingOutcome;
        typedef Aws::Utils::Outcome<ResumeSessionResult, Aws::Client::AWSError<SSMErrors>> ResumeSessionOutcome;
        typedef Aws::Utils::Outcome<SendAutomationSignalResult, Aws::Client::AWSError<SSMErrors>> SendAutomationSignalOutcome;
        typedef Aws::Utils::Outcome<SendCommandResult, Aws::Client::AWSError<SSMErrors>> SendCommandOutcome;
        typedef Aws::Utils::Outcome<StartAssociationsOnceResult, Aws::Client::AWSError<SSMErrors>> StartAssociationsOnceOutcome;
        typedef Aws::Utils::Outcome<StartAutomationExecutionResult, Aws::Client::AWSError<SSMErrors>> StartAutomationExecutionOutcome;
        typedef Aws::Utils::Outcome<StartSessionResult, Aws::Client::AWSError<SSMErrors>> StartSessionOutcome;
        typedef Aws::Utils::Outcome<StopAutomationExecutionResult, Aws::Client::AWSError<SSMErrors>> StopAutomationExecutionOutcome;
        typedef Aws::Utils::Outcome<TerminateSessionResult, Aws::Client::AWSError<SSMErrors>> TerminateSessionOutcome;
        typedef Aws::Utils::Outcome<UpdateAssociationResult, Aws::Client::AWSError<SSMErrors>> UpdateAssociationOutcome;
        typedef Aws::Utils::Outcome<UpdateAssociationStatusResult, Aws::Client::AWSError<SSMErrors>> UpdateAssociationStatusOutcome;
        typedef Aws::Utils::Outcome<UpdateDocumentResult, Aws::Client::AWSError<SSMErrors>> UpdateDocumentOutcome;
        typedef Aws::Utils::Outcome<UpdateDocumentDefaultVersionResult, Aws::Client::AWSError<SSMErrors>> UpdateDocumentDefaultVersionOutcome;
        typedef Aws::Utils::Outcome<UpdateMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> UpdateMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<UpdateMaintenanceWindowTargetResult, Aws::Client::AWSError<SSMErrors>> UpdateMaintenanceWindowTargetOutcome;
        typedef Aws::Utils::Outcome<UpdateMaintenanceWindowTaskResult, Aws::Client::AWSError<SSMErrors>> UpdateMaintenanceWindowTaskOutcome;
        typedef Aws::Utils::Outcome<UpdateManagedInstanceRoleResult, Aws::Client::AWSError<SSMErrors>> UpdateManagedInstanceRoleOutcome;
        typedef Aws::Utils::Outcome<UpdateOpsItemResult, Aws::Client::AWSError<SSMErrors>> UpdateOpsItemOutcome;
        typedef Aws::Utils::Outcome<UpdatePatchBaselineResult, Aws::Client::AWSError<SSMErrors>> UpdatePatchBaselineOutcome;
        typedef Aws::Utils::Outcome<UpdateServiceSettingResult, Aws::Client::AWSError<SSMErrors>> UpdateServiceSettingOutcome;

        typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
        typedef std::future<CancelCommandOutcome> CancelCommandOutcomeCallable;
        typedef std::future<CancelMaintenanceWindowExecutionOutcome> CancelMaintenanceWindowExecutionOutcomeCallable;
        typedef std::future<CreateActivationOutcome> CreateActivationOutcomeCallable;
        typedef std::future<CreateAssociationOutcome> CreateAssociationOutcomeCallable;
        typedef std::future<CreateAssociationBatchOutcome> CreateAssociationBatchOutcomeCallable;
        typedef std::future<CreateDocumentOutcome> CreateDocumentOutcomeCallable;
        typedef std::future<CreateMaintenanceWindowOutcome> CreateMaintenanceWindowOutcomeCallable;
        typedef std::future<CreateOpsItemOutcome> CreateOpsItemOutcomeCallable;
        typedef std::future<CreatePatchBaselineOutcome> CreatePatchBaselineOutcomeCallable;
        typedef std::future<CreateResourceDataSyncOutcome> CreateResourceDataSyncOutcomeCallable;
        typedef std::future<DeleteActivationOutcome> DeleteActivationOutcomeCallable;
        typedef std::future<DeleteAssociationOutcome> DeleteAssociationOutcomeCallable;
        typedef std::future<DeleteDocumentOutcome> DeleteDocumentOutcomeCallable;
        typedef std::future<DeleteInventoryOutcome> DeleteInventoryOutcomeCallable;
        typedef std::future<DeleteMaintenanceWindowOutcome> DeleteMaintenanceWindowOutcomeCallable;
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
        typedef std::future<GetAutomationExecutionOutcome> GetAutomationExecutionOutcomeCallable;
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
        typedef std::future<ListDocumentVersionsOutcome> ListDocumentVersionsOutcomeCallable;
        typedef std::future<ListDocumentsOutcome> ListDocumentsOutcomeCallable;
        typedef std::future<ListInventoryEntriesOutcome> ListInventoryEntriesOutcomeCallable;
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
        typedef std::future<StartSessionOutcome> StartSessionOutcomeCallable;
        typedef std::future<StopAutomationExecutionOutcome> StopAutomationExecutionOutcomeCallable;
        typedef std::future<TerminateSessionOutcome> TerminateSessionOutcomeCallable;
        typedef std::future<UpdateAssociationOutcome> UpdateAssociationOutcomeCallable;
        typedef std::future<UpdateAssociationStatusOutcome> UpdateAssociationStatusOutcomeCallable;
        typedef std::future<UpdateDocumentOutcome> UpdateDocumentOutcomeCallable;
        typedef std::future<UpdateDocumentDefaultVersionOutcome> UpdateDocumentDefaultVersionOutcomeCallable;
        typedef std::future<UpdateMaintenanceWindowOutcome> UpdateMaintenanceWindowOutcomeCallable;
        typedef std::future<UpdateMaintenanceWindowTargetOutcome> UpdateMaintenanceWindowTargetOutcomeCallable;
        typedef std::future<UpdateMaintenanceWindowTaskOutcome> UpdateMaintenanceWindowTaskOutcomeCallable;
        typedef std::future<UpdateManagedInstanceRoleOutcome> UpdateManagedInstanceRoleOutcomeCallable;
        typedef std::future<UpdateOpsItemOutcome> UpdateOpsItemOutcomeCallable;
        typedef std::future<UpdatePatchBaselineOutcome> UpdatePatchBaselineOutcomeCallable;
        typedef std::future<UpdateServiceSettingOutcome> UpdateServiceSettingOutcomeCallable;
} // namespace Model

  class SSMClient;

    typedef std::function<void(const SSMClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CancelCommandRequest&, const Model::CancelCommandOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelCommandResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CancelMaintenanceWindowExecutionRequest&, const Model::CancelMaintenanceWindowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelMaintenanceWindowExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateActivationRequest&, const Model::CreateActivationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateActivationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateAssociationRequest&, const Model::CreateAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateAssociationBatchRequest&, const Model::CreateAssociationBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssociationBatchResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateDocumentRequest&, const Model::CreateDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateMaintenanceWindowRequest&, const Model::CreateMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateOpsItemRequest&, const Model::CreateOpsItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOpsItemResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreatePatchBaselineRequest&, const Model::CreatePatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateResourceDataSyncRequest&, const Model::CreateResourceDataSyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceDataSyncResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteActivationRequest&, const Model::DeleteActivationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteActivationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteAssociationRequest&, const Model::DeleteAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteDocumentRequest&, const Model::DeleteDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteInventoryRequest&, const Model::DeleteInventoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInventoryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteMaintenanceWindowRequest&, const Model::DeleteMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMaintenanceWindowResponseReceivedHandler;
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
    typedef std::function<void(const SSMClient*, const Model::GetAutomationExecutionRequest&, const Model::GetAutomationExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAutomationExecutionResponseReceivedHandler;
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
    typedef std::function<void(const SSMClient*, const Model::ListDocumentVersionsRequest&, const Model::ListDocumentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentVersionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListDocumentsRequest&, const Model::ListDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListInventoryEntriesRequest&, const Model::ListInventoryEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInventoryEntriesResponseReceivedHandler;
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
    typedef std::function<void(const SSMClient*, const Model::StartSessionRequest&, const Model::StartSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSessionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::StopAutomationExecutionRequest&, const Model::StopAutomationExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopAutomationExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::TerminateSessionRequest&, const Model::TerminateSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateSessionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateAssociationRequest&, const Model::UpdateAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateAssociationStatusRequest&, const Model::UpdateAssociationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssociationStatusResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateDocumentRequest&, const Model::UpdateDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateDocumentDefaultVersionRequest&, const Model::UpdateDocumentDefaultVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentDefaultVersionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateMaintenanceWindowRequest&, const Model::UpdateMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateMaintenanceWindowTargetRequest&, const Model::UpdateMaintenanceWindowTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMaintenanceWindowTargetResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateMaintenanceWindowTaskRequest&, const Model::UpdateMaintenanceWindowTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMaintenanceWindowTaskResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateManagedInstanceRoleRequest&, const Model::UpdateManagedInstanceRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateManagedInstanceRoleResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateOpsItemRequest&, const Model::UpdateOpsItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOpsItemResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdatePatchBaselineRequest&, const Model::UpdatePatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateServiceSettingRequest&, const Model::UpdateServiceSettingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceSettingResponseReceivedHandler;

  /**
   * <fullname>AWS Systems Manager</fullname> <p>AWS Systems Manager is a collection
   * of capabilities that helps you automate management tasks such as collecting
   * system inventory, applying operating system (OS) patches, automating the
   * creation of Amazon Machine Images (AMIs), and configuring operating systems
   * (OSs) and applications at scale. Systems Manager lets you remotely and securely
   * manage the configuration of your managed instances. A <i>managed instance</i> is
   * any Amazon EC2 instance or on-premises machine in your hybrid environment that
   * has been configured for Systems Manager.</p> <p>This reference is intended to be
   * used with the <a
   * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems
   * Manager User Guide</a>.</p> <p>To get started, verify prerequisites and
   * configure managed instances. For more information, see <a
   * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting
   * Up AWS Systems Manager</a> in the <i>AWS Systems Manager User Guide</i>.</p>
   * <p>For information about other API actions you can perform on Amazon EC2
   * instances, see the <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
   * Reference</a>. For information about how to use a Query API, see <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making
   * API Requests</a>. </p>
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

        inline virtual const char* GetServiceClientName() const override { return "SSM"; }


        /**
         * <p>Adds or overwrites one or more tags for the specified resource. Tags are
         * metadata that you can assign to your documents, managed instances, maintenance
         * windows, Parameter Store parameters, and patch baselines. Tags enable you to
         * categorize your resources in different ways, for example, by purpose, owner, or
         * environment. Each tag consists of a key and an optional value, both of which you
         * define. For example, you could define a set of tags for your account's managed
         * instances that helps you track each instance's owner and stack level. For
         * example: Key=Owner and Value=DbAdmin, SysAdmin, or Dev. Or Key=Stack and
         * Value=Production, Pre-Production, or Test.</p> <p>Each resource can have a
         * maximum of 50 tags. </p> <p>We recommend that you devise a set of tag keys that
         * meets your needs for each resource type. Using a consistent set of tag keys
         * makes it easier for you to manage your resources. You can search and filter the
         * resources based on the tags you add. Tags don't have any semantic meaning to
         * Amazon EC2 and are interpreted strictly as a string of characters. </p> <p>For
         * more information about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified resource. Tags are
         * metadata that you can assign to your documents, managed instances, maintenance
         * windows, Parameter Store parameters, and patch baselines. Tags enable you to
         * categorize your resources in different ways, for example, by purpose, owner, or
         * environment. Each tag consists of a key and an optional value, both of which you
         * define. For example, you could define a set of tags for your account's managed
         * instances that helps you track each instance's owner and stack level. For
         * example: Key=Owner and Value=DbAdmin, SysAdmin, or Dev. Or Key=Stack and
         * Value=Production, Pre-Production, or Test.</p> <p>Each resource can have a
         * maximum of 50 tags. </p> <p>We recommend that you devise a set of tag keys that
         * meets your needs for each resource type. Using a consistent set of tag keys
         * makes it easier for you to manage your resources. You can search and filter the
         * resources based on the tags you add. Tags don't have any semantic meaning to
         * Amazon EC2 and are interpreted strictly as a string of characters. </p> <p>For
         * more information about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified resource. Tags are
         * metadata that you can assign to your documents, managed instances, maintenance
         * windows, Parameter Store parameters, and patch baselines. Tags enable you to
         * categorize your resources in different ways, for example, by purpose, owner, or
         * environment. Each tag consists of a key and an optional value, both of which you
         * define. For example, you could define a set of tags for your account's managed
         * instances that helps you track each instance's owner and stack level. For
         * example: Key=Owner and Value=DbAdmin, SysAdmin, or Dev. Or Key=Stack and
         * Value=Production, Pre-Production, or Test.</p> <p>Each resource can have a
         * maximum of 50 tags. </p> <p>We recommend that you devise a set of tag keys that
         * meets your needs for each resource type. Using a consistent set of tag keys
         * makes it easier for you to manage your resources. You can search and filter the
         * resources based on the tags you add. Tags don't have any semantic meaning to
         * Amazon EC2 and are interpreted strictly as a string of characters. </p> <p>For
         * more information about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * any tasks in the window that have not already starting running. (Tasks already
         * in progress will continue to completion.)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CancelMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMaintenanceWindowExecutionOutcome CancelMaintenanceWindowExecution(const Model::CancelMaintenanceWindowExecutionRequest& request) const;

        /**
         * <p>Stops a maintenance window execution that is already in progress and cancels
         * any tasks in the window that have not already starting running. (Tasks already
         * in progress will continue to completion.)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CancelMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelMaintenanceWindowExecutionOutcomeCallable CancelMaintenanceWindowExecutionCallable(const Model::CancelMaintenanceWindowExecutionRequest& request) const;

        /**
         * <p>Stops a maintenance window execution that is already in progress and cancels
         * any tasks in the window that have not already starting running. (Tasks already
         * in progress will continue to completion.)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CancelMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelMaintenanceWindowExecutionAsync(const Model::CancelMaintenanceWindowExecutionRequest& request, const CancelMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers your on-premises server or virtual machine with Amazon EC2 so that
         * you can manage these resources using Run Command. An on-premises server or
         * virtual machine that has been registered with EC2 is called a managed instance.
         * For more information about activations, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-managedinstances.html">Setting
         * Up AWS Systems Manager for Hybrid Environments</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateActivation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateActivationOutcome CreateActivation(const Model::CreateActivationRequest& request) const;

        /**
         * <p>Registers your on-premises server or virtual machine with Amazon EC2 so that
         * you can manage these resources using Run Command. An on-premises server or
         * virtual machine that has been registered with EC2 is called a managed instance.
         * For more information about activations, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-managedinstances.html">Setting
         * Up AWS Systems Manager for Hybrid Environments</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateActivation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateActivationOutcomeCallable CreateActivationCallable(const Model::CreateActivationRequest& request) const;

        /**
         * <p>Registers your on-premises server or virtual machine with Amazon EC2 so that
         * you can manage these resources using Run Command. An on-premises server or
         * virtual machine that has been registered with EC2 is called a managed instance.
         * For more information about activations, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-managedinstances.html">Setting
         * Up AWS Systems Manager for Hybrid Environments</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateActivation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateActivationAsync(const Model::CreateActivationRequest& request, const CreateActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified Systems Manager document with the specified
         * instances or targets.</p> <p>When you associate a document with one or more
         * instances using instance IDs or tags, SSM Agent running on the instance
         * processes the document and configures the instance as specified.</p> <p>If you
         * associate a document with an instance that already has an associated document,
         * the system returns the AssociationAlreadyExists exception.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssociationOutcome CreateAssociation(const Model::CreateAssociationRequest& request) const;

        /**
         * <p>Associates the specified Systems Manager document with the specified
         * instances or targets.</p> <p>When you associate a document with one or more
         * instances using instance IDs or tags, SSM Agent running on the instance
         * processes the document and configures the instance as specified.</p> <p>If you
         * associate a document with an instance that already has an associated document,
         * the system returns the AssociationAlreadyExists exception.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssociationOutcomeCallable CreateAssociationCallable(const Model::CreateAssociationRequest& request) const;

        /**
         * <p>Associates the specified Systems Manager document with the specified
         * instances or targets.</p> <p>When you associate a document with one or more
         * instances using instance IDs or tags, SSM Agent running on the instance
         * processes the document and configures the instance as specified.</p> <p>If you
         * associate a document with an instance that already has an associated document,
         * the system returns the AssociationAlreadyExists exception.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssociationAsync(const Model::CreateAssociationRequest& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified Systems Manager document with the specified
         * instances or targets.</p> <p>When you associate a document with one or more
         * instances using instance IDs or tags, SSM Agent running on the instance
         * processes the document and configures the instance as specified.</p> <p>If you
         * associate a document with an instance that already has an associated document,
         * the system returns the AssociationAlreadyExists exception.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociationBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssociationBatchOutcome CreateAssociationBatch(const Model::CreateAssociationBatchRequest& request) const;

        /**
         * <p>Associates the specified Systems Manager document with the specified
         * instances or targets.</p> <p>When you associate a document with one or more
         * instances using instance IDs or tags, SSM Agent running on the instance
         * processes the document and configures the instance as specified.</p> <p>If you
         * associate a document with an instance that already has an associated document,
         * the system returns the AssociationAlreadyExists exception.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociationBatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssociationBatchOutcomeCallable CreateAssociationBatchCallable(const Model::CreateAssociationBatchRequest& request) const;

        /**
         * <p>Associates the specified Systems Manager document with the specified
         * instances or targets.</p> <p>When you associate a document with one or more
         * instances using instance IDs or tags, SSM Agent running on the instance
         * processes the document and configures the instance as specified.</p> <p>If you
         * associate a document with an instance that already has an associated document,
         * the system returns the AssociationAlreadyExists exception.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateAssociationBatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssociationBatchAsync(const Model::CreateAssociationBatchRequest& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Systems Manager document.</p> <p>After you create a document, you
         * can use CreateAssociation to associate it with one or more running
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDocumentOutcome CreateDocument(const Model::CreateDocumentRequest& request) const;

        /**
         * <p>Creates a Systems Manager document.</p> <p>After you create a document, you
         * can use CreateAssociation to associate it with one or more running
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDocumentOutcomeCallable CreateDocumentCallable(const Model::CreateDocumentRequest& request) const;

        /**
         * <p>Creates a Systems Manager document.</p> <p>After you create a document, you
         * can use CreateAssociation to associate it with one or more running
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDocumentAsync(const Model::CreateDocumentRequest& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMaintenanceWindowOutcome CreateMaintenanceWindow(const Model::CreateMaintenanceWindowRequest& request) const;

        /**
         * <p>Creates a new maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMaintenanceWindowOutcomeCallable CreateMaintenanceWindowCallable(const Model::CreateMaintenanceWindowRequest& request) const;

        /**
         * <p>Creates a new maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMaintenanceWindowAsync(const Model::CreateMaintenanceWindowRequest& request, const CreateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new OpsItem. You must have permission in AWS Identity and Access
         * Management (IAM) to create a new OpsItem. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * Started with OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.</p>
         * <p>Operations engineers and IT professionals use OpsCenter to view, investigate,
         * and remediate operational issues impacting the performance and health of their
         * AWS resources. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">AWS
         * Systems Manager OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateOpsItem">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOpsItemOutcome CreateOpsItem(const Model::CreateOpsItemRequest& request) const;

        /**
         * <p>Creates a new OpsItem. You must have permission in AWS Identity and Access
         * Management (IAM) to create a new OpsItem. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * Started with OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.</p>
         * <p>Operations engineers and IT professionals use OpsCenter to view, investigate,
         * and remediate operational issues impacting the performance and health of their
         * AWS resources. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">AWS
         * Systems Manager OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateOpsItem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOpsItemOutcomeCallable CreateOpsItemCallable(const Model::CreateOpsItemRequest& request) const;

        /**
         * <p>Creates a new OpsItem. You must have permission in AWS Identity and Access
         * Management (IAM) to create a new OpsItem. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * Started with OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.</p>
         * <p>Operations engineers and IT professionals use OpsCenter to view, investigate,
         * and remediate operational issues impacting the performance and health of their
         * AWS resources. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">AWS
         * Systems Manager OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateOpsItem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOpsItemAsync(const Model::CreateOpsItemRequest& request, const CreateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a patch baseline.</p> <note> <p>For information about valid key and
         * value pairs in <code>PatchFilters</code> for each supported operating system
         * type, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/APIReference/API_PatchFilter.html">PatchFilter</a>.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreatePatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePatchBaselineOutcome CreatePatchBaseline(const Model::CreatePatchBaselineRequest& request) const;

        /**
         * <p>Creates a patch baseline.</p> <note> <p>For information about valid key and
         * value pairs in <code>PatchFilters</code> for each supported operating system
         * type, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/APIReference/API_PatchFilter.html">PatchFilter</a>.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreatePatchBaseline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePatchBaselineOutcomeCallable CreatePatchBaselineCallable(const Model::CreatePatchBaselineRequest& request) const;

        /**
         * <p>Creates a patch baseline.</p> <note> <p>For information about valid key and
         * value pairs in <code>PatchFilters</code> for each supported operating system
         * type, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/APIReference/API_PatchFilter.html">PatchFilter</a>.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreatePatchBaseline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePatchBaselineAsync(const Model::CreatePatchBaselineRequest& request, const CreatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a resource data sync configuration to a single bucket in Amazon S3.
         * This is an asynchronous operation that returns immediately. After a successful
         * initial sync is completed, the system continuously syncs data to the Amazon S3
         * bucket. To check the status of the sync, use the
         * <a>ListResourceDataSync</a>.</p> <p>By default, data is not encrypted in Amazon
         * S3. We strongly recommend that you enable encryption in Amazon S3 to ensure
         * secure data storage. We also recommend that you secure access to the Amazon S3
         * bucket by creating a restrictive bucket policy. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-datasync.html">Configuring
         * Resource Data Sync for Inventory</a> in the <i>AWS Systems Manager User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateResourceDataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceDataSyncOutcome CreateResourceDataSync(const Model::CreateResourceDataSyncRequest& request) const;

        /**
         * <p>Creates a resource data sync configuration to a single bucket in Amazon S3.
         * This is an asynchronous operation that returns immediately. After a successful
         * initial sync is completed, the system continuously syncs data to the Amazon S3
         * bucket. To check the status of the sync, use the
         * <a>ListResourceDataSync</a>.</p> <p>By default, data is not encrypted in Amazon
         * S3. We strongly recommend that you enable encryption in Amazon S3 to ensure
         * secure data storage. We also recommend that you secure access to the Amazon S3
         * bucket by creating a restrictive bucket policy. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-datasync.html">Configuring
         * Resource Data Sync for Inventory</a> in the <i>AWS Systems Manager User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateResourceDataSync">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceDataSyncOutcomeCallable CreateResourceDataSyncCallable(const Model::CreateResourceDataSyncRequest& request) const;

        /**
         * <p>Creates a resource data sync configuration to a single bucket in Amazon S3.
         * This is an asynchronous operation that returns immediately. After a successful
         * initial sync is completed, the system continuously syncs data to the Amazon S3
         * bucket. To check the status of the sync, use the
         * <a>ListResourceDataSync</a>.</p> <p>By default, data is not encrypted in Amazon
         * S3. We strongly recommend that you enable encryption in Amazon S3 to ensure
         * secure data storage. We also recommend that you secure access to the Amazon S3
         * bucket by creating a restrictive bucket policy. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-datasync.html">Configuring
         * Resource Data Sync for Inventory</a> in the <i>AWS Systems Manager User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CreateResourceDataSync">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceDataSyncAsync(const Model::CreateResourceDataSyncRequest& request, const CreateResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an activation. You are not required to delete an activation. If you
         * delete an activation, you can no longer use it to register additional managed
         * instances. Deleting an activation does not de-register managed instances. You
         * must manually de-register managed instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteActivation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteActivationOutcome DeleteActivation(const Model::DeleteActivationRequest& request) const;

        /**
         * <p>Deletes an activation. You are not required to delete an activation. If you
         * delete an activation, you can no longer use it to register additional managed
         * instances. Deleting an activation does not de-register managed instances. You
         * must manually de-register managed instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteActivation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteActivationOutcomeCallable DeleteActivationCallable(const Model::DeleteActivationRequest& request) const;

        /**
         * <p>Deletes an activation. You are not required to delete an activation. If you
         * delete an activation, you can no longer use it to register additional managed
         * instances. Deleting an activation does not de-register managed instances. You
         * must manually de-register managed instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteActivation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteActivationAsync(const Model::DeleteActivationRequest& request, const DeleteActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified Systems Manager document from the specified
         * instance.</p> <p>When you disassociate a document from an instance, it does not
         * change the configuration of the instance. To change the configuration state of
         * an instance after you disassociate a document, you must create a new document
         * with the desired configuration and associate it with the instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssociationOutcome DeleteAssociation(const Model::DeleteAssociationRequest& request) const;

        /**
         * <p>Disassociates the specified Systems Manager document from the specified
         * instance.</p> <p>When you disassociate a document from an instance, it does not
         * change the configuration of the instance. To change the configuration state of
         * an instance after you disassociate a document, you must create a new document
         * with the desired configuration and associate it with the instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssociationOutcomeCallable DeleteAssociationCallable(const Model::DeleteAssociationRequest& request) const;

        /**
         * <p>Disassociates the specified Systems Manager document from the specified
         * instance.</p> <p>When you disassociate a document from an instance, it does not
         * change the configuration of the instance. To change the configuration state of
         * an instance after you disassociate a document, you must create a new document
         * with the desired configuration and associate it with the instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssociationAsync(const Model::DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Systems Manager document and all instance associations to the
         * document.</p> <p>Before you delete the document, we recommend that you use
         * <a>DeleteAssociation</a> to disassociate all instances that are associated with
         * the document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentOutcome DeleteDocument(const Model::DeleteDocumentRequest& request) const;

        /**
         * <p>Deletes the Systems Manager document and all instance associations to the
         * document.</p> <p>Before you delete the document, we recommend that you use
         * <a>DeleteAssociation</a> to disassociate all instances that are associated with
         * the document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDocumentOutcomeCallable DeleteDocumentCallable(const Model::DeleteDocumentRequest& request) const;

        /**
         * <p>Deletes the Systems Manager document and all instance associations to the
         * document.</p> <p>Before you delete the document, we recommend that you use
         * <a>DeleteAssociation</a> to disassociate all instances that are associated with
         * the document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDocumentAsync(const Model::DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a custom inventory type, or the data associated with a custom
         * Inventory type. Deleting a custom inventory type is also referred to as deleting
         * a custom inventory schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteInventory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInventoryOutcome DeleteInventory(const Model::DeleteInventoryRequest& request) const;

        /**
         * <p>Delete a custom inventory type, or the data associated with a custom
         * Inventory type. Deleting a custom inventory type is also referred to as deleting
         * a custom inventory schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteInventory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInventoryOutcomeCallable DeleteInventoryCallable(const Model::DeleteInventoryRequest& request) const;

        /**
         * <p>Delete a custom inventory type, or the data associated with a custom
         * Inventory type. Deleting a custom inventory type is also referred to as deleting
         * a custom inventory schema.</p><p><h3>See Also:</h3>   <a
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
         * <p>Delete a parameter from the system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParameterOutcome DeleteParameter(const Model::DeleteParameterRequest& request) const;

        /**
         * <p>Delete a parameter from the system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteParameterOutcomeCallable DeleteParameterCallable(const Model::DeleteParameterRequest& request) const;

        /**
         * <p>Delete a parameter from the system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteParameterAsync(const Model::DeleteParameterRequest& request, const DeleteParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a list of parameters. This API is used to delete parameters by using
         * the Amazon EC2 console.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParametersOutcome DeleteParameters(const Model::DeleteParametersRequest& request) const;

        /**
         * <p>Delete a list of parameters. This API is used to delete parameters by using
         * the Amazon EC2 console.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteParametersOutcomeCallable DeleteParametersCallable(const Model::DeleteParametersRequest& request) const;

        /**
         * <p>Delete a list of parameters. This API is used to delete parameters by using
         * the Amazon EC2 console.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a Resource Data Sync configuration. After the configuration is
         * deleted, changes to inventory data on managed instances are no longer synced
         * with the target Amazon S3 bucket. Deleting a sync configuration does not delete
         * data in the target Amazon S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteResourceDataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceDataSyncOutcome DeleteResourceDataSync(const Model::DeleteResourceDataSyncRequest& request) const;

        /**
         * <p>Deletes a Resource Data Sync configuration. After the configuration is
         * deleted, changes to inventory data on managed instances are no longer synced
         * with the target Amazon S3 bucket. Deleting a sync configuration does not delete
         * data in the target Amazon S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteResourceDataSync">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceDataSyncOutcomeCallable DeleteResourceDataSyncCallable(const Model::DeleteResourceDataSyncRequest& request) const;

        /**
         * <p>Deletes a Resource Data Sync configuration. After the configuration is
         * deleted, changes to inventory data on managed instances are no longer synced
         * with the target Amazon S3 bucket. Deleting a sync configuration does not delete
         * data in the target Amazon S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeleteResourceDataSync">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceDataSyncAsync(const Model::DeleteResourceDataSyncRequest& request, const DeleteResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the server or virtual machine from the list of registered servers.
         * You can reregister the instance again at any time. If you don't plan to use Run
         * Command on the server, we suggest uninstalling SSM Agent first.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DeregisterManagedInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterManagedInstanceOutcome DeregisterManagedInstance(const Model::DeregisterManagedInstanceRequest& request) const;

        /**
         * <p>Removes the server or virtual machine from the list of registered servers.
         * You can reregister the instance again at any time. If you don't plan to use Run
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
         * You can reregister the instance again at any time. If you don't plan to use Run
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
         * <p>Details about the activation, including: the date and time the activation was
         * created, the expiration date, the IAM role assigned to the instances in the
         * activation, and the number of instances activated by this
         * registration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeActivations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActivationsOutcome DescribeActivations(const Model::DescribeActivationsRequest& request) const;

        /**
         * <p>Details about the activation, including: the date and time the activation was
         * created, the expiration date, the IAM role assigned to the instances in the
         * activation, and the number of instances activated by this
         * registration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeActivations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeActivationsOutcomeCallable DescribeActivationsCallable(const Model::DescribeActivationsRequest& request) const;

        /**
         * <p>Details about the activation, including: the date and time the activation was
         * created, the expiration date, the IAM role assigned to the instances in the
         * activation, and the number of instances activated by this
         * registration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeActivations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeActivationsAsync(const Model::DescribeActivationsRequest& request, const DescribeActivationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the association for the specified target or instance. If you
         * created the association by using the <code>Targets</code> parameter, then you
         * must retrieve the association by using the association ID. If you created the
         * association by specifying an instance ID and a Systems Manager document, then
         * you retrieve the association by specifying the document name and the instance
         * ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssociationOutcome DescribeAssociation(const Model::DescribeAssociationRequest& request) const;

        /**
         * <p>Describes the association for the specified target or instance. If you
         * created the association by using the <code>Targets</code> parameter, then you
         * must retrieve the association by using the association ID. If you created the
         * association by specifying an instance ID and a Systems Manager document, then
         * you retrieve the association by specifying the document name and the instance
         * ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssociationOutcomeCallable DescribeAssociationCallable(const Model::DescribeAssociationRequest& request) const;

        /**
         * <p>Describes the association for the specified target or instance. If you
         * created the association by using the <code>Targets</code> parameter, then you
         * must retrieve the association by using the association ID. If you created the
         * association by specifying an instance ID and a Systems Manager document, then
         * you retrieve the association by specifying the document name and the instance
         * ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssociationAsync(const Model::DescribeAssociationRequest& request, const DescribeAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this API action to view information about a specific execution of a
         * specific association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutionTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssociationExecutionTargetsOutcome DescribeAssociationExecutionTargets(const Model::DescribeAssociationExecutionTargetsRequest& request) const;

        /**
         * <p>Use this API action to view information about a specific execution of a
         * specific association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutionTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssociationExecutionTargetsOutcomeCallable DescribeAssociationExecutionTargetsCallable(const Model::DescribeAssociationExecutionTargetsRequest& request) const;

        /**
         * <p>Use this API action to view information about a specific execution of a
         * specific association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutionTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssociationExecutionTargetsAsync(const Model::DescribeAssociationExecutionTargetsRequest& request, const DescribeAssociationExecutionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this API action to view all executions for a specific association ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssociationExecutionsOutcome DescribeAssociationExecutions(const Model::DescribeAssociationExecutionsRequest& request) const;

        /**
         * <p>Use this API action to view all executions for a specific association ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAssociationExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssociationExecutionsOutcomeCallable DescribeAssociationExecutionsCallable(const Model::DescribeAssociationExecutionsRequest& request) const;

        /**
         * <p>Use this API action to view all executions for a specific association ID.
         * </p><p><h3>See Also:</h3>   <a
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
         * <p>Lists all patches that could possibly be included in a patch
         * baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAvailablePatches">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAvailablePatchesOutcome DescribeAvailablePatches(const Model::DescribeAvailablePatchesRequest& request) const;

        /**
         * <p>Lists all patches that could possibly be included in a patch
         * baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAvailablePatches">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAvailablePatchesOutcomeCallable DescribeAvailablePatchesCallable(const Model::DescribeAvailablePatchesRequest& request) const;

        /**
         * <p>Lists all patches that could possibly be included in a patch
         * baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeAvailablePatches">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAvailablePatchesAsync(const Model::DescribeAvailablePatchesRequest& request, const DescribeAvailablePatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Systems Manager document.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentOutcome DescribeDocument(const Model::DescribeDocumentRequest& request) const;

        /**
         * <p>Describes the specified Systems Manager document.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDocumentOutcomeCallable DescribeDocumentCallable(const Model::DescribeDocumentRequest& request) const;

        /**
         * <p>Describes the specified Systems Manager document.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDocumentAsync(const Model::DescribeDocumentRequest& request, const DescribeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the permissions for a Systems Manager document. If you created the
         * document, you are the owner. If a document is shared, it can either be shared
         * privately (by specifying a user's AWS account ID) or publicly (<i>All</i>).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocumentPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentPermissionOutcome DescribeDocumentPermission(const Model::DescribeDocumentPermissionRequest& request) const;

        /**
         * <p>Describes the permissions for a Systems Manager document. If you created the
         * document, you are the owner. If a document is shared, it can either be shared
         * privately (by specifying a user's AWS account ID) or publicly (<i>All</i>).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocumentPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDocumentPermissionOutcomeCallable DescribeDocumentPermissionCallable(const Model::DescribeDocumentPermissionRequest& request) const;

        /**
         * <p>Describes the permissions for a Systems Manager document. If you created the
         * document, you are the owner. If a document is shared, it can either be shared
         * privately (by specifying a user's AWS account ID) or publicly (<i>All</i>).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeDocumentPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDocumentPermissionAsync(const Model::DescribeDocumentPermissionRequest& request, const DescribeDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>All associations for the instance(s).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectiveInstanceAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEffectiveInstanceAssociationsOutcome DescribeEffectiveInstanceAssociations(const Model::DescribeEffectiveInstanceAssociationsRequest& request) const;

        /**
         * <p>All associations for the instance(s).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectiveInstanceAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEffectiveInstanceAssociationsOutcomeCallable DescribeEffectiveInstanceAssociationsCallable(const Model::DescribeEffectiveInstanceAssociationsRequest& request) const;

        /**
         * <p>All associations for the instance(s).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectiveInstanceAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEffectiveInstanceAssociationsAsync(const Model::DescribeEffectiveInstanceAssociationsRequest& request, const DescribeEffectiveInstanceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current effective patches (the patch and the approval state)
         * for the specified patch baseline. Note that this API applies only to Windows
         * patch baselines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectivePatchesForPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEffectivePatchesForPatchBaselineOutcome DescribeEffectivePatchesForPatchBaseline(const Model::DescribeEffectivePatchesForPatchBaselineRequest& request) const;

        /**
         * <p>Retrieves the current effective patches (the patch and the approval state)
         * for the specified patch baseline. Note that this API applies only to Windows
         * patch baselines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectivePatchesForPatchBaseline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEffectivePatchesForPatchBaselineOutcomeCallable DescribeEffectivePatchesForPatchBaselineCallable(const Model::DescribeEffectivePatchesForPatchBaselineRequest& request) const;

        /**
         * <p>Retrieves the current effective patches (the patch and the approval state)
         * for the specified patch baseline. Note that this API applies only to Windows
         * patch baselines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeEffectivePatchesForPatchBaseline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEffectivePatchesForPatchBaselineAsync(const Model::DescribeEffectivePatchesForPatchBaselineRequest& request, const DescribeEffectivePatchesForPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The status of the associations for the instance(s).</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceAssociationsStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceAssociationsStatusOutcome DescribeInstanceAssociationsStatus(const Model::DescribeInstanceAssociationsStatusRequest& request) const;

        /**
         * <p>The status of the associations for the instance(s).</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceAssociationsStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceAssociationsStatusOutcomeCallable DescribeInstanceAssociationsStatusCallable(const Model::DescribeInstanceAssociationsStatusRequest& request) const;

        /**
         * <p>The status of the associations for the instance(s).</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceAssociationsStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceAssociationsStatusAsync(const Model::DescribeInstanceAssociationsStatusRequest& request, const DescribeInstanceAssociationsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your instances. You can use this to get information
         * about instances like the operating system platform, the SSM Agent version
         * (Linux), status etc. If you specify one or more instance IDs, it returns
         * information for those instances. If you do not specify instance IDs, it returns
         * information for all your instances. If you specify an instance ID that is not
         * valid or an instance that you do not own, you receive an error. </p> <note>
         * <p>The IamRole field for this API action is the Amazon Identity and Access
         * Management (IAM) role assigned to on-premises instances. This call does not
         * return the IAM role for Amazon EC2 instances.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceInformationOutcome DescribeInstanceInformation(const Model::DescribeInstanceInformationRequest& request) const;

        /**
         * <p>Describes one or more of your instances. You can use this to get information
         * about instances like the operating system platform, the SSM Agent version
         * (Linux), status etc. If you specify one or more instance IDs, it returns
         * information for those instances. If you do not specify instance IDs, it returns
         * information for all your instances. If you specify an instance ID that is not
         * valid or an instance that you do not own, you receive an error. </p> <note>
         * <p>The IamRole field for this API action is the Amazon Identity and Access
         * Management (IAM) role assigned to on-premises instances. This call does not
         * return the IAM role for Amazon EC2 instances.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceInformation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceInformationOutcomeCallable DescribeInstanceInformationCallable(const Model::DescribeInstanceInformationRequest& request) const;

        /**
         * <p>Describes one or more of your instances. You can use this to get information
         * about instances like the operating system platform, the SSM Agent version
         * (Linux), status etc. If you specify one or more instance IDs, it returns
         * information for those instances. If you do not specify instance IDs, it returns
         * information for all your instances. If you specify an instance ID that is not
         * valid or an instance that you do not own, you receive an error. </p> <note>
         * <p>The IamRole field for this API action is the Amazon Identity and Access
         * Management (IAM) role assigned to on-premises instances. This call does not
         * return the IAM role for Amazon EC2 instances.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstanceInformation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceInformationAsync(const Model::DescribeInstanceInformationRequest& request, const DescribeInstanceInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the high-level patch state of one or more instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancePatchStatesOutcome DescribeInstancePatchStates(const Model::DescribeInstancePatchStatesRequest& request) const;

        /**
         * <p>Retrieves the high-level patch state of one or more instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancePatchStatesOutcomeCallable DescribeInstancePatchStatesCallable(const Model::DescribeInstancePatchStatesRequest& request) const;

        /**
         * <p>Retrieves the high-level patch state of one or more instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancePatchStatesAsync(const Model::DescribeInstancePatchStatesRequest& request, const DescribeInstancePatchStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the high-level patch state for the instances in the specified patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStatesForPatchGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancePatchStatesForPatchGroupOutcome DescribeInstancePatchStatesForPatchGroup(const Model::DescribeInstancePatchStatesForPatchGroupRequest& request) const;

        /**
         * <p>Retrieves the high-level patch state for the instances in the specified patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStatesForPatchGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancePatchStatesForPatchGroupOutcomeCallable DescribeInstancePatchStatesForPatchGroupCallable(const Model::DescribeInstancePatchStatesForPatchGroupRequest& request) const;

        /**
         * <p>Retrieves the high-level patch state for the instances in the specified patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatchStatesForPatchGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancePatchStatesForPatchGroupAsync(const Model::DescribeInstancePatchStatesForPatchGroupRequest& request, const DescribeInstancePatchStatesForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the patches on the specified instance and their
         * state relative to the patch baseline being used for the instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatches">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancePatchesOutcome DescribeInstancePatches(const Model::DescribeInstancePatchesRequest& request) const;

        /**
         * <p>Retrieves information about the patches on the specified instance and their
         * state relative to the patch baseline being used for the instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeInstancePatches">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancePatchesOutcomeCallable DescribeInstancePatchesCallable(const Model::DescribeInstancePatchesRequest& request) const;

        /**
         * <p>Retrieves information about the patches on the specified instance and their
         * state relative to the patch baseline being used for the instance.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Lists the tasks in a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowTasksOutcome DescribeMaintenanceWindowTasks(const Model::DescribeMaintenanceWindowTasksRequest& request) const;

        /**
         * <p>Lists the tasks in a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowTasksOutcomeCallable DescribeMaintenanceWindowTasksCallable(const Model::DescribeMaintenanceWindowTasksRequest& request) const;

        /**
         * <p>Lists the tasks in a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowTasksAsync(const Model::DescribeMaintenanceWindowTasksRequest& request, const DescribeMaintenanceWindowTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the maintenance windows in an AWS account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindows">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowsOutcome DescribeMaintenanceWindows(const Model::DescribeMaintenanceWindowsRequest& request) const;

        /**
         * <p>Retrieves the maintenance windows in an AWS account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindows">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowsOutcomeCallable DescribeMaintenanceWindowsCallable(const Model::DescribeMaintenanceWindowsRequest& request) const;

        /**
         * <p>Retrieves the maintenance windows in an AWS account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindows">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowsAsync(const Model::DescribeMaintenanceWindowsRequest& request, const DescribeMaintenanceWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the maintenance window targets or tasks that an
         * instance is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowsForTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceWindowsForTargetOutcome DescribeMaintenanceWindowsForTarget(const Model::DescribeMaintenanceWindowsForTargetRequest& request) const;

        /**
         * <p>Retrieves information about the maintenance window targets or tasks that an
         * instance is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowsForTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowsForTargetOutcomeCallable DescribeMaintenanceWindowsForTargetCallable(const Model::DescribeMaintenanceWindowsForTargetRequest& request) const;

        /**
         * <p>Retrieves information about the maintenance window targets or tasks that an
         * instance is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeMaintenanceWindowsForTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowsForTargetAsync(const Model::DescribeMaintenanceWindowsForTargetRequest& request, const DescribeMaintenanceWindowsForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Query a set of OpsItems. You must have permission in AWS Identity and Access
         * Management (IAM) to query a list of OpsItems. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * Started with OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.</p>
         * <p>Operations engineers and IT professionals use OpsCenter to view, investigate,
         * and remediate operational issues impacting the performance and health of their
         * AWS resources. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">AWS
         * Systems Manager OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeOpsItems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOpsItemsOutcome DescribeOpsItems(const Model::DescribeOpsItemsRequest& request) const;

        /**
         * <p>Query a set of OpsItems. You must have permission in AWS Identity and Access
         * Management (IAM) to query a list of OpsItems. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * Started with OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.</p>
         * <p>Operations engineers and IT professionals use OpsCenter to view, investigate,
         * and remediate operational issues impacting the performance and health of their
         * AWS resources. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">AWS
         * Systems Manager OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeOpsItems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOpsItemsOutcomeCallable DescribeOpsItemsCallable(const Model::DescribeOpsItemsRequest& request) const;

        /**
         * <p>Query a set of OpsItems. You must have permission in AWS Identity and Access
         * Management (IAM) to query a list of OpsItems. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * Started with OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.</p>
         * <p>Operations engineers and IT professionals use OpsCenter to view, investigate,
         * and remediate operational issues impacting the performance and health of their
         * AWS resources. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">AWS
         * Systems Manager OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
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
         * subsequent call to get the next set of results.</p><p><h3>See Also:</h3>   <a
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
         * subsequent call to get the next set of results.</p><p><h3>See Also:</h3>   <a
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
         * subsequent call to get the next set of results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the patch baselines in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchBaselines">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchBaselinesOutcome DescribePatchBaselines(const Model::DescribePatchBaselinesRequest& request) const;

        /**
         * <p>Lists the patch baselines in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchBaselines">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePatchBaselinesOutcomeCallable DescribePatchBaselinesCallable(const Model::DescribePatchBaselinesRequest& request) const;

        /**
         * <p>Lists the patch baselines in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchBaselines">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePatchBaselinesAsync(const Model::DescribePatchBaselinesRequest& request, const DescribePatchBaselinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns high-level aggregated patch compliance state for a patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchGroupState">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchGroupStateOutcome DescribePatchGroupState(const Model::DescribePatchGroupStateRequest& request) const;

        /**
         * <p>Returns high-level aggregated patch compliance state for a patch
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchGroupState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePatchGroupStateOutcomeCallable DescribePatchGroupStateCallable(const Model::DescribePatchGroupStateRequest& request) const;

        /**
         * <p>Returns high-level aggregated patch compliance state for a patch
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
         * actions such as <a>CreatePatchBaseline</a>, <a>UpdatePatchBaseline</a>,
         * <a>DescribeAvailablePatches</a>, and <a>DescribePatchBaselines</a>.</p> <p>The
         * following section lists the properties that can be used in filters for each
         * major operating system type:</p> <dl> <dt>WINDOWS</dt> <dd> <p>Valid properties:
         * PRODUCT, PRODUCT_FAMILY, CLASSIFICATION, MSRC_SEVERITY</p> </dd>
         * <dt>AMAZON_LINUX</dt> <dd> <p>Valid properties: PRODUCT, CLASSIFICATION,
         * SEVERITY</p> </dd> <dt>AMAZON_LINUX_2</dt> <dd> <p>Valid properties: PRODUCT,
         * CLASSIFICATION, SEVERITY</p> </dd> <dt>UBUNTU </dt> <dd> <p>Valid properties:
         * PRODUCT, PRIORITY</p> </dd> <dt>REDHAT_ENTERPRISE_LINUX</dt> <dd> <p>Valid
         * properties: PRODUCT, CLASSIFICATION, SEVERITY</p> </dd> <dt>SUSE</dt> <dd>
         * <p>Valid properties: PRODUCT, CLASSIFICATION, SEVERITY</p> </dd> <dt>CENTOS</dt>
         * <dd> <p>Valid properties: PRODUCT, CLASSIFICATION, SEVERITY</p> </dd>
         * </dl><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribePatchProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePatchPropertiesOutcome DescribePatchProperties(const Model::DescribePatchPropertiesRequest& request) const;

        /**
         * <p>Lists the properties of available patches organized by product, product
         * family, classification, severity, and other properties of available patches. You
         * can use the reported properties in the filters you specify in requests for
         * actions such as <a>CreatePatchBaseline</a>, <a>UpdatePatchBaseline</a>,
         * <a>DescribeAvailablePatches</a>, and <a>DescribePatchBaselines</a>.</p> <p>The
         * following section lists the properties that can be used in filters for each
         * major operating system type:</p> <dl> <dt>WINDOWS</dt> <dd> <p>Valid properties:
         * PRODUCT, PRODUCT_FAMILY, CLASSIFICATION, MSRC_SEVERITY</p> </dd>
         * <dt>AMAZON_LINUX</dt> <dd> <p>Valid properties: PRODUCT, CLASSIFICATION,
         * SEVERITY</p> </dd> <dt>AMAZON_LINUX_2</dt> <dd> <p>Valid properties: PRODUCT,
         * CLASSIFICATION, SEVERITY</p> </dd> <dt>UBUNTU </dt> <dd> <p>Valid properties:
         * PRODUCT, PRIORITY</p> </dd> <dt>REDHAT_ENTERPRISE_LINUX</dt> <dd> <p>Valid
         * properties: PRODUCT, CLASSIFICATION, SEVERITY</p> </dd> <dt>SUSE</dt> <dd>
         * <p>Valid properties: PRODUCT, CLASSIFICATION, SEVERITY</p> </dd> <dt>CENTOS</dt>
         * <dd> <p>Valid properties: PRODUCT, CLASSIFICATION, SEVERITY</p> </dd>
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
         * actions such as <a>CreatePatchBaseline</a>, <a>UpdatePatchBaseline</a>,
         * <a>DescribeAvailablePatches</a>, and <a>DescribePatchBaselines</a>.</p> <p>The
         * following section lists the properties that can be used in filters for each
         * major operating system type:</p> <dl> <dt>WINDOWS</dt> <dd> <p>Valid properties:
         * PRODUCT, PRODUCT_FAMILY, CLASSIFICATION, MSRC_SEVERITY</p> </dd>
         * <dt>AMAZON_LINUX</dt> <dd> <p>Valid properties: PRODUCT, CLASSIFICATION,
         * SEVERITY</p> </dd> <dt>AMAZON_LINUX_2</dt> <dd> <p>Valid properties: PRODUCT,
         * CLASSIFICATION, SEVERITY</p> </dd> <dt>UBUNTU </dt> <dd> <p>Valid properties:
         * PRODUCT, PRIORITY</p> </dd> <dt>REDHAT_ENTERPRISE_LINUX</dt> <dd> <p>Valid
         * properties: PRODUCT, CLASSIFICATION, SEVERITY</p> </dd> <dt>SUSE</dt> <dd>
         * <p>Valid properties: PRODUCT, CLASSIFICATION, SEVERITY</p> </dd> <dt>CENTOS</dt>
         * <dd> <p>Valid properties: PRODUCT, CLASSIFICATION, SEVERITY</p> </dd>
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
         * <p>Returns detailed information about command execution for an invocation or
         * plugin. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetCommandInvocation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommandInvocationOutcome GetCommandInvocation(const Model::GetCommandInvocationRequest& request) const;

        /**
         * <p>Returns detailed information about command execution for an invocation or
         * plugin. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetCommandInvocation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCommandInvocationOutcomeCallable GetCommandInvocationCallable(const Model::GetCommandInvocationRequest& request) const;

        /**
         * <p>Returns detailed information about command execution for an invocation or
         * plugin. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetCommandInvocation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCommandInvocationAsync(const Model::GetCommandInvocationRequest& request, const GetCommandInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the Session Manager connection status for an instance to determine
         * whether it is connected and ready to receive Session Manager
         * connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetConnectionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionStatusOutcome GetConnectionStatus(const Model::GetConnectionStatusRequest& request) const;

        /**
         * <p>Retrieves the Session Manager connection status for an instance to determine
         * whether it is connected and ready to receive Session Manager
         * connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetConnectionStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectionStatusOutcomeCallable GetConnectionStatusCallable(const Model::GetConnectionStatusRequest& request) const;

        /**
         * <p>Retrieves the Session Manager connection status for an instance to determine
         * whether it is connected and ready to receive Session Manager
         * connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetConnectionStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectionStatusAsync(const Model::GetConnectionStatusRequest& request, const GetConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the default patch baseline. Note that Systems Manager supports
         * creating multiple default patch baselines. For example, you can create a default
         * patch baseline for each operating system.</p> <p>If you do not specify an
         * operating system value, the default patch baseline for Windows is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDefaultPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDefaultPatchBaselineOutcome GetDefaultPatchBaseline(const Model::GetDefaultPatchBaselineRequest& request) const;

        /**
         * <p>Retrieves the default patch baseline. Note that Systems Manager supports
         * creating multiple default patch baselines. For example, you can create a default
         * patch baseline for each operating system.</p> <p>If you do not specify an
         * operating system value, the default patch baseline for Windows is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDefaultPatchBaseline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDefaultPatchBaselineOutcomeCallable GetDefaultPatchBaselineCallable(const Model::GetDefaultPatchBaselineRequest& request) const;

        /**
         * <p>Retrieves the default patch baseline. Note that Systems Manager supports
         * creating multiple default patch baselines. For example, you can create a default
         * patch baseline for each operating system.</p> <p>If you do not specify an
         * operating system value, the default patch baseline for Windows is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDefaultPatchBaseline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDefaultPatchBaselineAsync(const Model::GetDefaultPatchBaselineRequest& request, const GetDefaultPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current snapshot for the patch baseline the instance uses. This
         * API is primarily used by the AWS-RunPatchBaseline Systems Manager document.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDeployablePatchSnapshotForInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeployablePatchSnapshotForInstanceOutcome GetDeployablePatchSnapshotForInstance(const Model::GetDeployablePatchSnapshotForInstanceRequest& request) const;

        /**
         * <p>Retrieves the current snapshot for the patch baseline the instance uses. This
         * API is primarily used by the AWS-RunPatchBaseline Systems Manager document.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDeployablePatchSnapshotForInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeployablePatchSnapshotForInstanceOutcomeCallable GetDeployablePatchSnapshotForInstanceCallable(const Model::GetDeployablePatchSnapshotForInstanceRequest& request) const;

        /**
         * <p>Retrieves the current snapshot for the patch baseline the instance uses. This
         * API is primarily used by the AWS-RunPatchBaseline Systems Manager document.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDeployablePatchSnapshotForInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeployablePatchSnapshotForInstanceAsync(const Model::GetDeployablePatchSnapshotForInstanceRequest& request, const GetDeployablePatchSnapshotForInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the contents of the specified Systems Manager document.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDocument">AWS API
         * Reference</a></p>
         */
        virtual Model::GetDocumentOutcome GetDocument(const Model::GetDocumentRequest& request) const;

        /**
         * <p>Gets the contents of the specified Systems Manager document.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDocument">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentOutcomeCallable GetDocumentCallable(const Model::GetDocumentRequest& request) const;

        /**
         * <p>Gets the contents of the specified Systems Manager document.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetDocument">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentAsync(const Model::GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Query inventory information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInventoryOutcome GetInventory(const Model::GetInventoryRequest& request) const;

        /**
         * <p>Query inventory information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInventoryOutcomeCallable GetInventoryCallable(const Model::GetInventoryRequest& request) const;

        /**
         * <p>Query inventory information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInventoryAsync(const Model::GetInventoryRequest& request, const GetInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Return a list of inventory type names for the account, or return a list of
         * attribute names for a specific Inventory item type. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventorySchema">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInventorySchemaOutcome GetInventorySchema(const Model::GetInventorySchemaRequest& request) const;

        /**
         * <p>Return a list of inventory type names for the account, or return a list of
         * attribute names for a specific Inventory item type. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetInventorySchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInventorySchemaOutcomeCallable GetInventorySchemaCallable(const Model::GetInventorySchemaRequest& request) const;

        /**
         * <p>Return a list of inventory type names for the account, or return a list of
         * attribute names for a specific Inventory item type. </p><p><h3>See Also:</h3>  
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
         * <p>Retrieves details about a specific task run as part of a maintenance window
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowExecutionOutcome GetMaintenanceWindowExecution(const Model::GetMaintenanceWindowExecutionRequest& request) const;

        /**
         * <p>Retrieves details about a specific task run as part of a maintenance window
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMaintenanceWindowExecutionOutcomeCallable GetMaintenanceWindowExecutionCallable(const Model::GetMaintenanceWindowExecutionRequest& request) const;

        /**
         * <p>Retrieves details about a specific task run as part of a maintenance window
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
         * <p>Retrieves a task invocation. A task invocation is a specific task running on
         * a specific target. maintenance windows report status for all invocations.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecutionTaskInvocation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowExecutionTaskInvocationOutcome GetMaintenanceWindowExecutionTaskInvocation(const Model::GetMaintenanceWindowExecutionTaskInvocationRequest& request) const;

        /**
         * <p>Retrieves a task invocation. A task invocation is a specific task running on
         * a specific target. maintenance windows report status for all invocations.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecutionTaskInvocation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMaintenanceWindowExecutionTaskInvocationOutcomeCallable GetMaintenanceWindowExecutionTaskInvocationCallable(const Model::GetMaintenanceWindowExecutionTaskInvocationRequest& request) const;

        /**
         * <p>Retrieves a task invocation. A task invocation is a specific task running on
         * a specific target. maintenance windows report status for all invocations.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowExecutionTaskInvocation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMaintenanceWindowExecutionTaskInvocationAsync(const Model::GetMaintenanceWindowExecutionTaskInvocationRequest& request, const GetMaintenanceWindowExecutionTaskInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tasks in a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMaintenanceWindowTaskOutcome GetMaintenanceWindowTask(const Model::GetMaintenanceWindowTaskRequest& request) const;

        /**
         * <p>Lists the tasks in a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMaintenanceWindowTaskOutcomeCallable GetMaintenanceWindowTaskCallable(const Model::GetMaintenanceWindowTaskRequest& request) const;

        /**
         * <p>Lists the tasks in a maintenance window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetMaintenanceWindowTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMaintenanceWindowTaskAsync(const Model::GetMaintenanceWindowTaskRequest& request, const GetMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about an OpsItem by using the ID. You must have permission in
         * AWS Identity and Access Management (IAM) to view information about an OpsItem.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * Started with OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.</p>
         * <p>Operations engineers and IT professionals use OpsCenter to view, investigate,
         * and remediate operational issues impacting the performance and health of their
         * AWS resources. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">AWS
         * Systems Manager OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsItem">AWS API
         * Reference</a></p>
         */
        virtual Model::GetOpsItemOutcome GetOpsItem(const Model::GetOpsItemRequest& request) const;

        /**
         * <p>Get information about an OpsItem by using the ID. You must have permission in
         * AWS Identity and Access Management (IAM) to view information about an OpsItem.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * Started with OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.</p>
         * <p>Operations engineers and IT professionals use OpsCenter to view, investigate,
         * and remediate operational issues impacting the performance and health of their
         * AWS resources. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">AWS
         * Systems Manager OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsItem">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOpsItemOutcomeCallable GetOpsItemCallable(const Model::GetOpsItemRequest& request) const;

        /**
         * <p>Get information about an OpsItem by using the ID. You must have permission in
         * AWS Identity and Access Management (IAM) to view information about an OpsItem.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * Started with OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.</p>
         * <p>Operations engineers and IT professionals use OpsCenter to view, investigate,
         * and remediate operational issues impacting the performance and health of their
         * AWS resources. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">AWS
         * Systems Manager OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsItem">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOpsItemAsync(const Model::GetOpsItemRequest& request, const GetOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>View a summary of OpsItems based on specified filters and
         * aggregators.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpsSummaryOutcome GetOpsSummary(const Model::GetOpsSummaryRequest& request) const;

        /**
         * <p>View a summary of OpsItems based on specified filters and
         * aggregators.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsSummary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOpsSummaryOutcomeCallable GetOpsSummaryCallable(const Model::GetOpsSummaryRequest& request) const;

        /**
         * <p>View a summary of OpsItems based on specified filters and
         * aggregators.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetOpsSummary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOpsSummaryAsync(const Model::GetOpsSummaryRequest& request, const GetOpsSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about a parameter by using the parameter name. Don't confuse
         * this API action with the <a>GetParameters</a> API action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParameterOutcome GetParameter(const Model::GetParameterRequest& request) const;

        /**
         * <p>Get information about a parameter by using the parameter name. Don't confuse
         * this API action with the <a>GetParameters</a> API action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetParameterOutcomeCallable GetParameterCallable(const Model::GetParameterRequest& request) const;

        /**
         * <p>Get information about a parameter by using the parameter name. Don't confuse
         * this API action with the <a>GetParameters</a> API action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetParameterAsync(const Model::GetParameterRequest& request, const GetParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Query a list of all parameters used by the AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameterHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParameterHistoryOutcome GetParameterHistory(const Model::GetParameterHistoryRequest& request) const;

        /**
         * <p>Query a list of all parameters used by the AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameterHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetParameterHistoryOutcomeCallable GetParameterHistoryCallable(const Model::GetParameterHistoryRequest& request) const;

        /**
         * <p>Query a list of all parameters used by the AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameterHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetParameterHistoryAsync(const Model::GetParameterHistoryRequest& request, const GetParameterHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get details of a parameter. Don't confuse this API action with the
         * <a>GetParameter</a> API action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParametersOutcome GetParameters(const Model::GetParametersRequest& request) const;

        /**
         * <p>Get details of a parameter. Don't confuse this API action with the
         * <a>GetParameter</a> API action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetParametersOutcomeCallable GetParametersCallable(const Model::GetParametersRequest& request) const;

        /**
         * <p>Get details of a parameter. Don't confuse this API action with the
         * <a>GetParameter</a> API action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetParametersAsync(const Model::GetParametersRequest& request, const GetParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve parameters in a specific hierarchy. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-working.html">Working
         * with Systems Manager Parameters</a> in the <i>AWS Systems Manager User
         * Guide</i>. </p> <p>Request results are returned on a best-effort basis. If you
         * specify <code>MaxResults</code> in the request, the response includes
         * information up to the limit specified. The number of items returned, however,
         * can be between zero and the value of <code>MaxResults</code>. If the service
         * reaches an internal limit while processing the results, it stops the operation
         * and returns the matching values up to that point and a <code>NextToken</code>.
         * You can specify the <code>NextToken</code> in a subsequent call to get the next
         * set of results.</p> <note> <p>This API action doesn't support filtering by tags.
         * </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParametersByPath">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParametersByPathOutcome GetParametersByPath(const Model::GetParametersByPathRequest& request) const;

        /**
         * <p>Retrieve parameters in a specific hierarchy. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-working.html">Working
         * with Systems Manager Parameters</a> in the <i>AWS Systems Manager User
         * Guide</i>. </p> <p>Request results are returned on a best-effort basis. If you
         * specify <code>MaxResults</code> in the request, the response includes
         * information up to the limit specified. The number of items returned, however,
         * can be between zero and the value of <code>MaxResults</code>. If the service
         * reaches an internal limit while processing the results, it stops the operation
         * and returns the matching values up to that point and a <code>NextToken</code>.
         * You can specify the <code>NextToken</code> in a subsequent call to get the next
         * set of results.</p> <note> <p>This API action doesn't support filtering by tags.
         * </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetParametersByPath">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetParametersByPathOutcomeCallable GetParametersByPathCallable(const Model::GetParametersByPathRequest& request) const;

        /**
         * <p>Retrieve parameters in a specific hierarchy. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-working.html">Working
         * with Systems Manager Parameters</a> in the <i>AWS Systems Manager User
         * Guide</i>. </p> <p>Request results are returned on a best-effort basis. If you
         * specify <code>MaxResults</code> in the request, the response includes
         * information up to the limit specified. The number of items returned, however,
         * can be between zero and the value of <code>MaxResults</code>. If the service
         * reaches an internal limit while processing the results, it stops the operation
         * and returns the matching values up to that point and a <code>NextToken</code>.
         * You can specify the <code>NextToken</code> in a subsequent call to get the next
         * set of results.</p> <note> <p>This API action doesn't support filtering by tags.
         * </p> </note><p><h3>See Also:</h3>   <a
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
         * <p> <code>ServiceSetting</code> is an account-level setting for an AWS service.
         * This setting defines how a user interacts with or uses a service or a feature of
         * a service. For example, if an AWS service charges money to the account based on
         * feature or service usage, then the AWS service team might create a default
         * setting of "false". This means the user can't use this feature unless they
         * change the setting to "true" and intentionally opt in for a paid feature.</p>
         * <p>Services map a <code>SettingId</code> object to a setting value. AWS services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>UpdateServiceSetting</a> API action to change the default setting. Or use the
         * <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the AWS service team.</p> <p>Query the current service setting for
         * the account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetServiceSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceSettingOutcome GetServiceSetting(const Model::GetServiceSettingRequest& request) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an AWS service.
         * This setting defines how a user interacts with or uses a service or a feature of
         * a service. For example, if an AWS service charges money to the account based on
         * feature or service usage, then the AWS service team might create a default
         * setting of "false". This means the user can't use this feature unless they
         * change the setting to "true" and intentionally opt in for a paid feature.</p>
         * <p>Services map a <code>SettingId</code> object to a setting value. AWS services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>UpdateServiceSetting</a> API action to change the default setting. Or use the
         * <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the AWS service team.</p> <p>Query the current service setting for
         * the account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetServiceSetting">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceSettingOutcomeCallable GetServiceSettingCallable(const Model::GetServiceSettingRequest& request) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an AWS service.
         * This setting defines how a user interacts with or uses a service or a feature of
         * a service. For example, if an AWS service charges money to the account based on
         * feature or service usage, then the AWS service team might create a default
         * setting of "false". This means the user can't use this feature unless they
         * change the setting to "true" and intentionally opt in for a paid feature.</p>
         * <p>Services map a <code>SettingId</code> object to a setting value. AWS services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>UpdateServiceSetting</a> API action to change the default setting. Or use the
         * <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the AWS service team.</p> <p>Query the current service setting for
         * the account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetServiceSetting">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceSettingAsync(const Model::GetServiceSettingRequest& request, const GetServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A parameter label is a user-defined alias to help you manage different
         * versions of a parameter. When you modify a parameter, Systems Manager
         * automatically saves a new version and increments the version number by one. A
         * label can help you remember the purpose of a parameter when there are multiple
         * versions. </p> <p>Parameter labels have the following requirements and
         * restrictions.</p> <ul> <li> <p>A version of a parameter can have a maximum of 10
         * labels.</p> </li> <li> <p>You can't attach the same label to different versions
         * of the same parameter. For example, if version 1 has the label Production, then
         * you can't attach Production to version 2.</p> </li> <li> <p>You can move a label
         * from one version of a parameter to another.</p> </li> <li> <p>You can't create a
         * label when you create a new parameter. You must attach a label to a specific
         * version of a parameter.</p> </li> <li> <p>You can't delete a parameter label. If
         * you no longer want to use a parameter label, then you must move it to a
         * different version of a parameter.</p> </li> <li> <p>A label can have a maximum
         * of 100 characters.</p> </li> <li> <p>Labels can contain letters (case
         * sensitive), numbers, periods (.), hyphens (-), or underscores (_).</p> </li>
         * <li> <p>Labels can't begin with a number, "aws," or "ssm" (not case sensitive).
         * If a label fails to meet these requirements, then the label is not associated
         * with a parameter and the system displays it in the list of InvalidLabels.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/LabelParameterVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::LabelParameterVersionOutcome LabelParameterVersion(const Model::LabelParameterVersionRequest& request) const;

        /**
         * <p>A parameter label is a user-defined alias to help you manage different
         * versions of a parameter. When you modify a parameter, Systems Manager
         * automatically saves a new version and increments the version number by one. A
         * label can help you remember the purpose of a parameter when there are multiple
         * versions. </p> <p>Parameter labels have the following requirements and
         * restrictions.</p> <ul> <li> <p>A version of a parameter can have a maximum of 10
         * labels.</p> </li> <li> <p>You can't attach the same label to different versions
         * of the same parameter. For example, if version 1 has the label Production, then
         * you can't attach Production to version 2.</p> </li> <li> <p>You can move a label
         * from one version of a parameter to another.</p> </li> <li> <p>You can't create a
         * label when you create a new parameter. You must attach a label to a specific
         * version of a parameter.</p> </li> <li> <p>You can't delete a parameter label. If
         * you no longer want to use a parameter label, then you must move it to a
         * different version of a parameter.</p> </li> <li> <p>A label can have a maximum
         * of 100 characters.</p> </li> <li> <p>Labels can contain letters (case
         * sensitive), numbers, periods (.), hyphens (-), or underscores (_).</p> </li>
         * <li> <p>Labels can't begin with a number, "aws," or "ssm" (not case sensitive).
         * If a label fails to meet these requirements, then the label is not associated
         * with a parameter and the system displays it in the list of InvalidLabels.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/LabelParameterVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LabelParameterVersionOutcomeCallable LabelParameterVersionCallable(const Model::LabelParameterVersionRequest& request) const;

        /**
         * <p>A parameter label is a user-defined alias to help you manage different
         * versions of a parameter. When you modify a parameter, Systems Manager
         * automatically saves a new version and increments the version number by one. A
         * label can help you remember the purpose of a parameter when there are multiple
         * versions. </p> <p>Parameter labels have the following requirements and
         * restrictions.</p> <ul> <li> <p>A version of a parameter can have a maximum of 10
         * labels.</p> </li> <li> <p>You can't attach the same label to different versions
         * of the same parameter. For example, if version 1 has the label Production, then
         * you can't attach Production to version 2.</p> </li> <li> <p>You can move a label
         * from one version of a parameter to another.</p> </li> <li> <p>You can't create a
         * label when you create a new parameter. You must attach a label to a specific
         * version of a parameter.</p> </li> <li> <p>You can't delete a parameter label. If
         * you no longer want to use a parameter label, then you must move it to a
         * different version of a parameter.</p> </li> <li> <p>A label can have a maximum
         * of 100 characters.</p> </li> <li> <p>Labels can contain letters (case
         * sensitive), numbers, periods (.), hyphens (-), or underscores (_).</p> </li>
         * <li> <p>Labels can't begin with a number, "aws," or "ssm" (not case sensitive).
         * If a label fails to meet these requirements, then the label is not associated
         * with a parameter and the system displays it in the list of InvalidLabels.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Lists the associations for the specified Systems Manager document or
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociationsOutcome ListAssociations(const Model::ListAssociationsRequest& request) const;

        /**
         * <p>Lists the associations for the specified Systems Manager document or
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociationsOutcomeCallable ListAssociationsCallable(const Model::ListAssociationsRequest& request) const;

        /**
         * <p>Lists the associations for the specified Systems Manager document or
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociationsAsync(const Model::ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An invocation is copy of a command sent to a specific instance. A command can
         * apply to one or more instances. A command invocation applies to one instance.
         * For example, if a user runs SendCommand against three instances, then a command
         * invocation is created for each requested instance ID. ListCommandInvocations
         * provide status about command execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommandInvocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCommandInvocationsOutcome ListCommandInvocations(const Model::ListCommandInvocationsRequest& request) const;

        /**
         * <p>An invocation is copy of a command sent to a specific instance. A command can
         * apply to one or more instances. A command invocation applies to one instance.
         * For example, if a user runs SendCommand against three instances, then a command
         * invocation is created for each requested instance ID. ListCommandInvocations
         * provide status about command execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommandInvocations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCommandInvocationsOutcomeCallable ListCommandInvocationsCallable(const Model::ListCommandInvocationsRequest& request) const;

        /**
         * <p>An invocation is copy of a command sent to a specific instance. A command can
         * apply to one or more instances. A command invocation applies to one instance.
         * For example, if a user runs SendCommand against three instances, then a command
         * invocation is created for each requested instance ID. ListCommandInvocations
         * provide status about command execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommandInvocations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCommandInvocationsAsync(const Model::ListCommandInvocationsRequest& request, const ListCommandInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the commands requested by users of the AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommands">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCommandsOutcome ListCommands(const Model::ListCommandsRequest& request) const;

        /**
         * <p>Lists the commands requested by users of the AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommands">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCommandsOutcomeCallable ListCommandsCallable(const Model::ListCommandsRequest& request) const;

        /**
         * <p>Lists the commands requested by users of the AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListCommands">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCommandsAsync(const Model::ListCommandsRequest& request, const ListCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For a specified resource ID, this API action returns a list of compliance
         * statuses for different resource types. Currently, you can only specify one
         * resource ID per call. List results depend on the criteria specified in the
         * filter. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListComplianceItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComplianceItemsOutcome ListComplianceItems(const Model::ListComplianceItemsRequest& request) const;

        /**
         * <p>For a specified resource ID, this API action returns a list of compliance
         * statuses for different resource types. Currently, you can only specify one
         * resource ID per call. List results depend on the criteria specified in the
         * filter. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListComplianceItems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComplianceItemsOutcomeCallable ListComplianceItemsCallable(const Model::ListComplianceItemsRequest& request) const;

        /**
         * <p>For a specified resource ID, this API action returns a list of compliance
         * statuses for different resource types. Currently, you can only specify one
         * resource ID per call. List results depend on the criteria specified in the
         * filter. </p><p><h3>See Also:</h3>   <a
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
         * specify. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListComplianceSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComplianceSummariesOutcome ListComplianceSummaries(const Model::ListComplianceSummariesRequest& request) const;

        /**
         * <p>Returns a summary count of compliant and non-compliant resources for a
         * compliance type. For example, this call can return State Manager associations,
         * patches, or custom compliance types according to the filter criteria that you
         * specify. </p><p><h3>See Also:</h3>   <a
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
         * specify. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListComplianceSummaries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComplianceSummariesAsync(const Model::ListComplianceSummariesRequest& request, const ListComplianceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Describes one or more of your Systems Manager documents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocuments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentsOutcome ListDocuments(const Model::ListDocumentsRequest& request) const;

        /**
         * <p>Describes one or more of your Systems Manager documents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListDocuments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDocumentsOutcomeCallable ListDocumentsCallable(const Model::ListDocumentsRequest& request) const;

        /**
         * <p>Describes one or more of your Systems Manager documents.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Returns a list of the tags assigned to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags assigned to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags assigned to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Shares a Systems Manager document publicly or privately. If you share a
         * document privately, you must specify the AWS user account IDs for those people
         * who can use the document. If you share a document publicly, you must specify
         * <i>All</i> as the account ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ModifyDocumentPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDocumentPermissionOutcome ModifyDocumentPermission(const Model::ModifyDocumentPermissionRequest& request) const;

        /**
         * <p>Shares a Systems Manager document publicly or privately. If you share a
         * document privately, you must specify the AWS user account IDs for those people
         * who can use the document. If you share a document publicly, you must specify
         * <i>All</i> as the account ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ModifyDocumentPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDocumentPermissionOutcomeCallable ModifyDocumentPermissionCallable(const Model::ModifyDocumentPermissionRequest& request) const;

        /**
         * <p>Shares a Systems Manager document publicly or privately. If you share a
         * document privately, you must specify the AWS user account IDs for those people
         * who can use the document. If you share a document publicly, you must specify
         * <i>All</i> as the account ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ModifyDocumentPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDocumentPermissionAsync(const Model::ModifyDocumentPermissionRequest& request, const ModifyDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a compliance type and other compliance details on a designated
         * resource. This action lets you register custom compliance details with a
         * resource. This call overwrites existing compliance information on the resource,
         * so you must provide a full list of compliance items each time that you send the
         * request.</p> <p>ComplianceType can be one of the following:</p> <ul> <li>
         * <p>ExecutionId: The execution ID when the patch, association, or custom
         * compliance item was applied.</p> </li> <li> <p>ExecutionType: Specify patch,
         * association, or Custom:<code>string</code>.</p> </li> <li> <p>ExecutionTime. The
         * time the patch, association, or custom compliance item was applied to the
         * instance.</p> </li> <li> <p>Id: The patch, association, or custom compliance
         * ID.</p> </li> <li> <p>Title: A title.</p> </li> <li> <p>Status: The status of
         * the compliance item. For example, <code>approved</code> for patches, or
         * <code>Failed</code> for associations.</p> </li> <li> <p>Severity: A patch
         * severity. For example, <code>critical</code>.</p> </li> <li> <p>DocumentName: A
         * SSM document name. For example, AWS-RunPatchBaseline.</p> </li> <li>
         * <p>DocumentVersion: An SSM document version number. For example, 4.</p> </li>
         * <li> <p>Classification: A patch classification. For example, <code>security
         * updates</code>.</p> </li> <li> <p>PatchBaselineId: A patch baseline ID.</p>
         * </li> <li> <p>PatchSeverity: A patch severity. For example,
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
         * resource. This action lets you register custom compliance details with a
         * resource. This call overwrites existing compliance information on the resource,
         * so you must provide a full list of compliance items each time that you send the
         * request.</p> <p>ComplianceType can be one of the following:</p> <ul> <li>
         * <p>ExecutionId: The execution ID when the patch, association, or custom
         * compliance item was applied.</p> </li> <li> <p>ExecutionType: Specify patch,
         * association, or Custom:<code>string</code>.</p> </li> <li> <p>ExecutionTime. The
         * time the patch, association, or custom compliance item was applied to the
         * instance.</p> </li> <li> <p>Id: The patch, association, or custom compliance
         * ID.</p> </li> <li> <p>Title: A title.</p> </li> <li> <p>Status: The status of
         * the compliance item. For example, <code>approved</code> for patches, or
         * <code>Failed</code> for associations.</p> </li> <li> <p>Severity: A patch
         * severity. For example, <code>critical</code>.</p> </li> <li> <p>DocumentName: A
         * SSM document name. For example, AWS-RunPatchBaseline.</p> </li> <li>
         * <p>DocumentVersion: An SSM document version number. For example, 4.</p> </li>
         * <li> <p>Classification: A patch classification. For example, <code>security
         * updates</code>.</p> </li> <li> <p>PatchBaselineId: A patch baseline ID.</p>
         * </li> <li> <p>PatchSeverity: A patch severity. For example,
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
         * resource. This action lets you register custom compliance details with a
         * resource. This call overwrites existing compliance information on the resource,
         * so you must provide a full list of compliance items each time that you send the
         * request.</p> <p>ComplianceType can be one of the following:</p> <ul> <li>
         * <p>ExecutionId: The execution ID when the patch, association, or custom
         * compliance item was applied.</p> </li> <li> <p>ExecutionType: Specify patch,
         * association, or Custom:<code>string</code>.</p> </li> <li> <p>ExecutionTime. The
         * time the patch, association, or custom compliance item was applied to the
         * instance.</p> </li> <li> <p>Id: The patch, association, or custom compliance
         * ID.</p> </li> <li> <p>Title: A title.</p> </li> <li> <p>Status: The status of
         * the compliance item. For example, <code>approved</code> for patches, or
         * <code>Failed</code> for associations.</p> </li> <li> <p>Severity: A patch
         * severity. For example, <code>critical</code>.</p> </li> <li> <p>DocumentName: A
         * SSM document name. For example, AWS-RunPatchBaseline.</p> </li> <li>
         * <p>DocumentVersion: An SSM document version number. For example, 4.</p> </li>
         * <li> <p>Classification: A patch classification. For example, <code>security
         * updates</code>.</p> </li> <li> <p>PatchBaselineId: A patch baseline ID.</p>
         * </li> <li> <p>PatchSeverity: A patch severity. For example,
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
         * <p>Bulk update custom inventory items on one more instance. The request adds an
         * inventory item, if it doesn't already exist, or updates an inventory item, if it
         * does exist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutInventory">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInventoryOutcome PutInventory(const Model::PutInventoryRequest& request) const;

        /**
         * <p>Bulk update custom inventory items on one more instance. The request adds an
         * inventory item, if it doesn't already exist, or updates an inventory item, if it
         * does exist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PutInventory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutInventoryOutcomeCallable PutInventoryCallable(const Model::PutInventoryRequest& request) const;

        /**
         * <p>Bulk update custom inventory items on one more instance. The request adds an
         * inventory item, if it doesn't already exist, or updates an inventory item, if it
         * does exist.</p><p><h3>See Also:</h3>   <a
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
         * <p>Defines the default patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterDefaultPatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDefaultPatchBaselineOutcome RegisterDefaultPatchBaseline(const Model::RegisterDefaultPatchBaselineRequest& request) const;

        /**
         * <p>Defines the default patch baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegisterDefaultPatchBaseline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterDefaultPatchBaselineOutcomeCallable RegisterDefaultPatchBaselineCallable(const Model::RegisterDefaultPatchBaselineRequest& request) const;

        /**
         * <p>Defines the default patch baseline.</p><p><h3>See Also:</h3>   <a
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
         * <p>Removes all tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes all tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes all tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an AWS service.
         * This setting defines how a user interacts with or uses a service or a feature of
         * a service. For example, if an AWS service charges money to the account based on
         * feature or service usage, then the AWS service team might create a default
         * setting of "false". This means the user can't use this feature unless they
         * change the setting to "true" and intentionally opt in for a paid feature.</p>
         * <p>Services map a <code>SettingId</code> object to a setting value. AWS services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API action to view the current value. Use the
         * <a>UpdateServiceSetting</a> API action to change the default setting. </p>
         * <p>Reset the service setting for the account to the default value as provisioned
         * by the AWS service team. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResetServiceSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetServiceSettingOutcome ResetServiceSetting(const Model::ResetServiceSettingRequest& request) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an AWS service.
         * This setting defines how a user interacts with or uses a service or a feature of
         * a service. For example, if an AWS service charges money to the account based on
         * feature or service usage, then the AWS service team might create a default
         * setting of "false". This means the user can't use this feature unless they
         * change the setting to "true" and intentionally opt in for a paid feature.</p>
         * <p>Services map a <code>SettingId</code> object to a setting value. AWS services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API action to view the current value. Use the
         * <a>UpdateServiceSetting</a> API action to change the default setting. </p>
         * <p>Reset the service setting for the account to the default value as provisioned
         * by the AWS service team. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResetServiceSetting">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetServiceSettingOutcomeCallable ResetServiceSettingCallable(const Model::ResetServiceSettingRequest& request) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an AWS service.
         * This setting defines how a user interacts with or uses a service or a feature of
         * a service. For example, if an AWS service charges money to the account based on
         * feature or service usage, then the AWS service team might create a default
         * setting of "false". This means the user can't use this feature unless they
         * change the setting to "true" and intentionally opt in for a paid feature.</p>
         * <p>Services map a <code>SettingId</code> object to a setting value. AWS services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API action to view the current value. Use the
         * <a>UpdateServiceSetting</a> API action to change the default setting. </p>
         * <p>Reset the service setting for the account to the default value as provisioned
         * by the AWS service team. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResetServiceSetting">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetServiceSettingAsync(const Model::ResetServiceSettingRequest& request, const ResetServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reconnects a session to an instance after it has been disconnected.
         * Connections can be resumed for disconnected sessions, but not terminated
         * sessions.</p> <note> <p>This command is primarily for use by client machines to
         * automatically reconnect during intermittent network issues. It is not intended
         * for any other use.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResumeSession">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeSessionOutcome ResumeSession(const Model::ResumeSessionRequest& request) const;

        /**
         * <p>Reconnects a session to an instance after it has been disconnected.
         * Connections can be resumed for disconnected sessions, but not terminated
         * sessions.</p> <note> <p>This command is primarily for use by client machines to
         * automatically reconnect during intermittent network issues. It is not intended
         * for any other use.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResumeSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResumeSessionOutcomeCallable ResumeSessionCallable(const Model::ResumeSessionRequest& request) const;

        /**
         * <p>Reconnects a session to an instance after it has been disconnected.
         * Connections can be resumed for disconnected sessions, but not terminated
         * sessions.</p> <note> <p>This command is primarily for use by client machines to
         * automatically reconnect during intermittent network issues. It is not intended
         * for any other use.</p> </note><p><h3>See Also:</h3>   <a
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
         * <p>Runs commands on one or more managed instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SendCommand">AWS API
         * Reference</a></p>
         */
        virtual Model::SendCommandOutcome SendCommand(const Model::SendCommandRequest& request) const;

        /**
         * <p>Runs commands on one or more managed instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SendCommand">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendCommandOutcomeCallable SendCommandCallable(const Model::SendCommandRequest& request) const;

        /**
         * <p>Runs commands on one or more managed instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SendCommand">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendCommandAsync(const Model::SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this API action to run an association immediately and only one time. This
         * action can be helpful when troubleshooting associations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAssociationsOnce">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAssociationsOnceOutcome StartAssociationsOnce(const Model::StartAssociationsOnceRequest& request) const;

        /**
         * <p>Use this API action to run an association immediately and only one time. This
         * action can be helpful when troubleshooting associations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAssociationsOnce">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAssociationsOnceOutcomeCallable StartAssociationsOnceCallable(const Model::StartAssociationsOnceRequest& request) const;

        /**
         * <p>Use this API action to run an association immediately and only one time. This
         * action can be helpful when troubleshooting associations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAssociationsOnce">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAssociationsOnceAsync(const Model::StartAssociationsOnceRequest& request, const StartAssociationsOnceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates execution of an Automation document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAutomationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAutomationExecutionOutcome StartAutomationExecution(const Model::StartAutomationExecutionRequest& request) const;

        /**
         * <p>Initiates execution of an Automation document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAutomationExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAutomationExecutionOutcomeCallable StartAutomationExecutionCallable(const Model::StartAutomationExecutionRequest& request) const;

        /**
         * <p>Initiates execution of an Automation document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartAutomationExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAutomationExecutionAsync(const Model::StartAutomationExecutionRequest& request, const StartAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a connection to a target (for example, an instance) for a Session
         * Manager session. Returns a URL and token that can be used to open a WebSocket
         * connection for sending input and receiving outputs.</p> <note> <p>AWS CLI usage:
         * <code>start-session</code> is an interactive command that requires the Session
         * Manager plugin to be installed on the client machine making the call. For
         * information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-install-plugin.html">
         * Install the Session Manager Plugin for the AWS CLI</a> in the <i>AWS Systems
         * Manager User Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSessionOutcome StartSession(const Model::StartSessionRequest& request) const;

        /**
         * <p>Initiates a connection to a target (for example, an instance) for a Session
         * Manager session. Returns a URL and token that can be used to open a WebSocket
         * connection for sending input and receiving outputs.</p> <note> <p>AWS CLI usage:
         * <code>start-session</code> is an interactive command that requires the Session
         * Manager plugin to be installed on the client machine making the call. For
         * information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-install-plugin.html">
         * Install the Session Manager Plugin for the AWS CLI</a> in the <i>AWS Systems
         * Manager User Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StartSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSessionOutcomeCallable StartSessionCallable(const Model::StartSessionRequest& request) const;

        /**
         * <p>Initiates a connection to a target (for example, an instance) for a Session
         * Manager session. Returns a URL and token that can be used to open a WebSocket
         * connection for sending input and receiving outputs.</p> <note> <p>AWS CLI usage:
         * <code>start-session</code> is an interactive command that requires the Session
         * Manager plugin to be installed on the client machine making the call. For
         * information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-install-plugin.html">
         * Install the Session Manager Plugin for the AWS CLI</a> in the <i>AWS Systems
         * Manager User Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
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
         * Manager client and SSM Agent on the instance. A terminated session cannot be
         * resumed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/TerminateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateSessionOutcome TerminateSession(const Model::TerminateSessionRequest& request) const;

        /**
         * <p>Permanently ends a session and closes the data connection between the Session
         * Manager client and SSM Agent on the instance. A terminated session cannot be
         * resumed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/TerminateSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateSessionOutcomeCallable TerminateSessionCallable(const Model::TerminateSessionRequest& request) const;

        /**
         * <p>Permanently ends a session and closes the data connection between the Session
         * Manager client and SSM Agent on the instance. A terminated session cannot be
         * resumed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/TerminateSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateSessionAsync(const Model::TerminateSessionRequest& request, const TerminateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an association. You can update the association name and version, the
         * document version, schedule, parameters, and Amazon S3 output.</p> <important>
         * <p>When you update an association, the association immediately runs against the
         * specified targets.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssociationOutcome UpdateAssociation(const Model::UpdateAssociationRequest& request) const;

        /**
         * <p>Updates an association. You can update the association name and version, the
         * document version, schedule, parameters, and Amazon S3 output.</p> <important>
         * <p>When you update an association, the association immediately runs against the
         * specified targets.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssociationOutcomeCallable UpdateAssociationCallable(const Model::UpdateAssociationRequest& request) const;

        /**
         * <p>Updates an association. You can update the association name and version, the
         * document version, schedule, parameters, and Amazon S3 output.</p> <important>
         * <p>When you update an association, the association immediately runs against the
         * specified targets.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssociationAsync(const Model::UpdateAssociationRequest& request, const UpdateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status of the Systems Manager document associated with the
         * specified instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssociationStatusOutcome UpdateAssociationStatus(const Model::UpdateAssociationStatusRequest& request) const;

        /**
         * <p>Updates the status of the Systems Manager document associated with the
         * specified instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociationStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssociationStatusOutcomeCallable UpdateAssociationStatusCallable(const Model::UpdateAssociationStatusRequest& request) const;

        /**
         * <p>Updates the status of the Systems Manager document associated with the
         * specified instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateAssociationStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssociationStatusAsync(const Model::UpdateAssociationStatusRequest& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The document you want to update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentOutcome UpdateDocument(const Model::UpdateDocumentRequest& request) const;

        /**
         * <p>The document you want to update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDocumentOutcomeCallable UpdateDocumentCallable(const Model::UpdateDocumentRequest& request) const;

        /**
         * <p>The document you want to update.</p><p><h3>See Also:</h3>   <a
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
         * <p>Updates an existing maintenance window. Only specified parameters are
         * modified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMaintenanceWindowOutcome UpdateMaintenanceWindow(const Model::UpdateMaintenanceWindowRequest& request) const;

        /**
         * <p>Updates an existing maintenance window. Only specified parameters are
         * modified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMaintenanceWindowOutcomeCallable UpdateMaintenanceWindowCallable(const Model::UpdateMaintenanceWindowRequest& request) const;

        /**
         * <p>Updates an existing maintenance window. Only specified parameters are
         * modified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMaintenanceWindowAsync(const Model::UpdateMaintenanceWindowRequest& request, const UpdateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the target of an existing maintenance window. You can't change the
         * target type, but you can change the following:</p> <p>The target from being an
         * ID target to a Tag target, or a Tag target to an ID target.</p> <p>IDs for an ID
         * target.</p> <p>Tags for a Tag target.</p> <p>Owner.</p> <p>Name.</p>
         * <p>Description.</p> <p>If a parameter is null, then the corresponding field is
         * not modified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMaintenanceWindowTargetOutcome UpdateMaintenanceWindowTarget(const Model::UpdateMaintenanceWindowTargetRequest& request) const;

        /**
         * <p>Modifies the target of an existing maintenance window. You can't change the
         * target type, but you can change the following:</p> <p>The target from being an
         * ID target to a Tag target, or a Tag target to an ID target.</p> <p>IDs for an ID
         * target.</p> <p>Tags for a Tag target.</p> <p>Owner.</p> <p>Name.</p>
         * <p>Description.</p> <p>If a parameter is null, then the corresponding field is
         * not modified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMaintenanceWindowTargetOutcomeCallable UpdateMaintenanceWindowTargetCallable(const Model::UpdateMaintenanceWindowTargetRequest& request) const;

        /**
         * <p>Modifies the target of an existing maintenance window. You can't change the
         * target type, but you can change the following:</p> <p>The target from being an
         * ID target to a Tag target, or a Tag target to an ID target.</p> <p>IDs for an ID
         * target.</p> <p>Tags for a Tag target.</p> <p>Owner.</p> <p>Name.</p>
         * <p>Description.</p> <p>If a parameter is null, then the corresponding field is
         * not modified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMaintenanceWindowTargetAsync(const Model::UpdateMaintenanceWindowTargetRequest& request, const UpdateMaintenanceWindowTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a task assigned to a maintenance window. You can't change the task
         * type, but you can change the following values:</p> <ul> <li> <p>TaskARN. For
         * example, you can change a RUN_COMMAND task from AWS-RunPowerShellScript to
         * AWS-RunShellScript.</p> </li> <li> <p>ServiceRoleArn</p> </li> <li>
         * <p>TaskInvocationParameters</p> </li> <li> <p>Priority</p> </li> <li>
         * <p>MaxConcurrency</p> </li> <li> <p>MaxErrors</p> </li> </ul> <p>If a parameter
         * is null, then the corresponding field is not modified. Also, if you set Replace
         * to true, then all fields required by the
         * <a>RegisterTaskWithMaintenanceWindow</a> action are required for this request.
         * Optional fields that aren't specified are set to null.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTask">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMaintenanceWindowTaskOutcome UpdateMaintenanceWindowTask(const Model::UpdateMaintenanceWindowTaskRequest& request) const;

        /**
         * <p>Modifies a task assigned to a maintenance window. You can't change the task
         * type, but you can change the following values:</p> <ul> <li> <p>TaskARN. For
         * example, you can change a RUN_COMMAND task from AWS-RunPowerShellScript to
         * AWS-RunShellScript.</p> </li> <li> <p>ServiceRoleArn</p> </li> <li>
         * <p>TaskInvocationParameters</p> </li> <li> <p>Priority</p> </li> <li>
         * <p>MaxConcurrency</p> </li> <li> <p>MaxErrors</p> </li> </ul> <p>If a parameter
         * is null, then the corresponding field is not modified. Also, if you set Replace
         * to true, then all fields required by the
         * <a>RegisterTaskWithMaintenanceWindow</a> action are required for this request.
         * Optional fields that aren't specified are set to null.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMaintenanceWindowTaskOutcomeCallable UpdateMaintenanceWindowTaskCallable(const Model::UpdateMaintenanceWindowTaskRequest& request) const;

        /**
         * <p>Modifies a task assigned to a maintenance window. You can't change the task
         * type, but you can change the following values:</p> <ul> <li> <p>TaskARN. For
         * example, you can change a RUN_COMMAND task from AWS-RunPowerShellScript to
         * AWS-RunShellScript.</p> </li> <li> <p>ServiceRoleArn</p> </li> <li>
         * <p>TaskInvocationParameters</p> </li> <li> <p>Priority</p> </li> <li>
         * <p>MaxConcurrency</p> </li> <li> <p>MaxErrors</p> </li> </ul> <p>If a parameter
         * is null, then the corresponding field is not modified. Also, if you set Replace
         * to true, then all fields required by the
         * <a>RegisterTaskWithMaintenanceWindow</a> action are required for this request.
         * Optional fields that aren't specified are set to null.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateMaintenanceWindowTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMaintenanceWindowTaskAsync(const Model::UpdateMaintenanceWindowTaskRequest& request, const UpdateMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns or changes an Amazon Identity and Access Management (IAM) role to the
         * managed instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateManagedInstanceRole">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateManagedInstanceRoleOutcome UpdateManagedInstanceRole(const Model::UpdateManagedInstanceRoleRequest& request) const;

        /**
         * <p>Assigns or changes an Amazon Identity and Access Management (IAM) role to the
         * managed instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateManagedInstanceRole">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateManagedInstanceRoleOutcomeCallable UpdateManagedInstanceRoleCallable(const Model::UpdateManagedInstanceRoleRequest& request) const;

        /**
         * <p>Assigns or changes an Amazon Identity and Access Management (IAM) role to the
         * managed instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateManagedInstanceRole">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateManagedInstanceRoleAsync(const Model::UpdateManagedInstanceRoleRequest& request, const UpdateManagedInstanceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Edit or change an OpsItem. You must have permission in AWS Identity and
         * Access Management (IAM) to update an OpsItem. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * Started with OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.</p>
         * <p>Operations engineers and IT professionals use OpsCenter to view, investigate,
         * and remediate operational issues impacting the performance and health of their
         * AWS resources. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">AWS
         * Systems Manager OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateOpsItem">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOpsItemOutcome UpdateOpsItem(const Model::UpdateOpsItemRequest& request) const;

        /**
         * <p>Edit or change an OpsItem. You must have permission in AWS Identity and
         * Access Management (IAM) to update an OpsItem. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * Started with OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.</p>
         * <p>Operations engineers and IT professionals use OpsCenter to view, investigate,
         * and remediate operational issues impacting the performance and health of their
         * AWS resources. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">AWS
         * Systems Manager OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateOpsItem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOpsItemOutcomeCallable UpdateOpsItemCallable(const Model::UpdateOpsItemRequest& request) const;

        /**
         * <p>Edit or change an OpsItem. You must have permission in AWS Identity and
         * Access Management (IAM) to update an OpsItem. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting
         * Started with OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.</p>
         * <p>Operations engineers and IT professionals use OpsCenter to view, investigate,
         * and remediate operational issues impacting the performance and health of their
         * AWS resources. For more information, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">AWS
         * Systems Manager OpsCenter</a> in the <i>AWS Systems Manager User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateOpsItem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOpsItemAsync(const Model::UpdateOpsItemRequest& request, const UpdateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing patch baseline. Fields not specified in the request are
         * left unchanged.</p> <note> <p>For information about valid key and value pairs in
         * <code>PatchFilters</code> for each supported operating system type, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/APIReference/API_PatchFilter.html">PatchFilter</a>.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdatePatchBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePatchBaselineOutcome UpdatePatchBaseline(const Model::UpdatePatchBaselineRequest& request) const;

        /**
         * <p>Modifies an existing patch baseline. Fields not specified in the request are
         * left unchanged.</p> <note> <p>For information about valid key and value pairs in
         * <code>PatchFilters</code> for each supported operating system type, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/APIReference/API_PatchFilter.html">PatchFilter</a>.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdatePatchBaseline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePatchBaselineOutcomeCallable UpdatePatchBaselineCallable(const Model::UpdatePatchBaselineRequest& request) const;

        /**
         * <p>Modifies an existing patch baseline. Fields not specified in the request are
         * left unchanged.</p> <note> <p>For information about valid key and value pairs in
         * <code>PatchFilters</code> for each supported operating system type, see <a
         * href="http://docs.aws.amazon.com/systems-manager/latest/APIReference/API_PatchFilter.html">PatchFilter</a>.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdatePatchBaseline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePatchBaselineAsync(const Model::UpdatePatchBaselineRequest& request, const UpdatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an AWS service.
         * This setting defines how a user interacts with or uses a service or a feature of
         * a service. For example, if an AWS service charges money to the account based on
         * feature or service usage, then the AWS service team might create a default
         * setting of "false". This means the user can't use this feature unless they
         * change the setting to "true" and intentionally opt in for a paid feature.</p>
         * <p>Services map a <code>SettingId</code> object to a setting value. AWS services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API action to view the current value. Or, use the
         * <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the AWS service team.</p> <p>Update the service setting for the
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateServiceSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceSettingOutcome UpdateServiceSetting(const Model::UpdateServiceSettingRequest& request) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an AWS service.
         * This setting defines how a user interacts with or uses a service or a feature of
         * a service. For example, if an AWS service charges money to the account based on
         * feature or service usage, then the AWS service team might create a default
         * setting of "false". This means the user can't use this feature unless they
         * change the setting to "true" and intentionally opt in for a paid feature.</p>
         * <p>Services map a <code>SettingId</code> object to a setting value. AWS services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API action to view the current value. Or, use the
         * <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the AWS service team.</p> <p>Update the service setting for the
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateServiceSetting">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceSettingOutcomeCallable UpdateServiceSettingCallable(const Model::UpdateServiceSettingRequest& request) const;

        /**
         * <p> <code>ServiceSetting</code> is an account-level setting for an AWS service.
         * This setting defines how a user interacts with or uses a service or a feature of
         * a service. For example, if an AWS service charges money to the account based on
         * feature or service usage, then the AWS service team might create a default
         * setting of "false". This means the user can't use this feature unless they
         * change the setting to "true" and intentionally opt in for a paid feature.</p>
         * <p>Services map a <code>SettingId</code> object to a setting value. AWS services
         * teams define the default value for a <code>SettingId</code>. You can't create a
         * new <code>SettingId</code>, but you can overwrite the default value if you have
         * the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
         * <a>GetServiceSetting</a> API action to view the current value. Or, use the
         * <a>ResetServiceSetting</a> to change the value back to the original value
         * defined by the AWS service team.</p> <p>Update the service setting for the
         * account. </p><p><h3>See Also:</h3>   <a
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
        void CancelCommandAsyncHelper(const Model::CancelCommandRequest& request, const CancelCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelMaintenanceWindowExecutionAsyncHelper(const Model::CancelMaintenanceWindowExecutionRequest& request, const CancelMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateActivationAsyncHelper(const Model::CreateActivationRequest& request, const CreateActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAssociationAsyncHelper(const Model::CreateAssociationRequest& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAssociationBatchAsyncHelper(const Model::CreateAssociationBatchRequest& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDocumentAsyncHelper(const Model::CreateDocumentRequest& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMaintenanceWindowAsyncHelper(const Model::CreateMaintenanceWindowRequest& request, const CreateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOpsItemAsyncHelper(const Model::CreateOpsItemRequest& request, const CreateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePatchBaselineAsyncHelper(const Model::CreatePatchBaselineRequest& request, const CreatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResourceDataSyncAsyncHelper(const Model::CreateResourceDataSyncRequest& request, const CreateResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteActivationAsyncHelper(const Model::DeleteActivationRequest& request, const DeleteActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAssociationAsyncHelper(const Model::DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDocumentAsyncHelper(const Model::DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInventoryAsyncHelper(const Model::DeleteInventoryRequest& request, const DeleteInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMaintenanceWindowAsyncHelper(const Model::DeleteMaintenanceWindowRequest& request, const DeleteMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void GetAutomationExecutionAsyncHelper(const Model::GetAutomationExecutionRequest& request, const GetAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void ListDocumentVersionsAsyncHelper(const Model::ListDocumentVersionsRequest& request, const ListDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDocumentsAsyncHelper(const Model::ListDocumentsRequest& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInventoryEntriesAsyncHelper(const Model::ListInventoryEntriesRequest& request, const ListInventoryEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void StartSessionAsyncHelper(const Model::StartSessionRequest& request, const StartSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopAutomationExecutionAsyncHelper(const Model::StopAutomationExecutionRequest& request, const StopAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateSessionAsyncHelper(const Model::TerminateSessionRequest& request, const TerminateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssociationAsyncHelper(const Model::UpdateAssociationRequest& request, const UpdateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssociationStatusAsyncHelper(const Model::UpdateAssociationStatusRequest& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDocumentAsyncHelper(const Model::UpdateDocumentRequest& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDocumentDefaultVersionAsyncHelper(const Model::UpdateDocumentDefaultVersionRequest& request, const UpdateDocumentDefaultVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMaintenanceWindowAsyncHelper(const Model::UpdateMaintenanceWindowRequest& request, const UpdateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMaintenanceWindowTargetAsyncHelper(const Model::UpdateMaintenanceWindowTargetRequest& request, const UpdateMaintenanceWindowTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMaintenanceWindowTaskAsyncHelper(const Model::UpdateMaintenanceWindowTaskRequest& request, const UpdateMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateManagedInstanceRoleAsyncHelper(const Model::UpdateManagedInstanceRoleRequest& request, const UpdateManagedInstanceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOpsItemAsyncHelper(const Model::UpdateOpsItemRequest& request, const UpdateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePatchBaselineAsyncHelper(const Model::UpdatePatchBaselineRequest& request, const UpdatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServiceSettingAsyncHelper(const Model::UpdateServiceSettingRequest& request, const UpdateServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SSM
} // namespace Aws
