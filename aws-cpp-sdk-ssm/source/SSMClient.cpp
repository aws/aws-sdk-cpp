/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/ssm/SSMClient.h>
#include <aws/ssm/SSMErrorMarshaller.h>
#include <aws/ssm/SSMEndpointProvider.h>
#include <aws/ssm/model/AddTagsToResourceRequest.h>
#include <aws/ssm/model/AssociateOpsItemRelatedItemRequest.h>
#include <aws/ssm/model/CancelCommandRequest.h>
#include <aws/ssm/model/CancelMaintenanceWindowExecutionRequest.h>
#include <aws/ssm/model/CreateActivationRequest.h>
#include <aws/ssm/model/CreateAssociationRequest.h>
#include <aws/ssm/model/CreateAssociationBatchRequest.h>
#include <aws/ssm/model/CreateDocumentRequest.h>
#include <aws/ssm/model/CreateMaintenanceWindowRequest.h>
#include <aws/ssm/model/CreateOpsItemRequest.h>
#include <aws/ssm/model/CreateOpsMetadataRequest.h>
#include <aws/ssm/model/CreatePatchBaselineRequest.h>
#include <aws/ssm/model/CreateResourceDataSyncRequest.h>
#include <aws/ssm/model/DeleteActivationRequest.h>
#include <aws/ssm/model/DeleteAssociationRequest.h>
#include <aws/ssm/model/DeleteDocumentRequest.h>
#include <aws/ssm/model/DeleteInventoryRequest.h>
#include <aws/ssm/model/DeleteMaintenanceWindowRequest.h>
#include <aws/ssm/model/DeleteOpsMetadataRequest.h>
#include <aws/ssm/model/DeleteParameterRequest.h>
#include <aws/ssm/model/DeleteParametersRequest.h>
#include <aws/ssm/model/DeletePatchBaselineRequest.h>
#include <aws/ssm/model/DeleteResourceDataSyncRequest.h>
#include <aws/ssm/model/DeleteResourcePolicyRequest.h>
#include <aws/ssm/model/DeregisterManagedInstanceRequest.h>
#include <aws/ssm/model/DeregisterPatchBaselineForPatchGroupRequest.h>
#include <aws/ssm/model/DeregisterTargetFromMaintenanceWindowRequest.h>
#include <aws/ssm/model/DeregisterTaskFromMaintenanceWindowRequest.h>
#include <aws/ssm/model/DescribeActivationsRequest.h>
#include <aws/ssm/model/DescribeAssociationRequest.h>
#include <aws/ssm/model/DescribeAssociationExecutionTargetsRequest.h>
#include <aws/ssm/model/DescribeAssociationExecutionsRequest.h>
#include <aws/ssm/model/DescribeAutomationExecutionsRequest.h>
#include <aws/ssm/model/DescribeAutomationStepExecutionsRequest.h>
#include <aws/ssm/model/DescribeAvailablePatchesRequest.h>
#include <aws/ssm/model/DescribeDocumentRequest.h>
#include <aws/ssm/model/DescribeDocumentPermissionRequest.h>
#include <aws/ssm/model/DescribeEffectiveInstanceAssociationsRequest.h>
#include <aws/ssm/model/DescribeEffectivePatchesForPatchBaselineRequest.h>
#include <aws/ssm/model/DescribeInstanceAssociationsStatusRequest.h>
#include <aws/ssm/model/DescribeInstanceInformationRequest.h>
#include <aws/ssm/model/DescribeInstancePatchStatesRequest.h>
#include <aws/ssm/model/DescribeInstancePatchStatesForPatchGroupRequest.h>
#include <aws/ssm/model/DescribeInstancePatchesRequest.h>
#include <aws/ssm/model/DescribeInventoryDeletionsRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTaskInvocationsRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTasksRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionsRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowScheduleRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTargetsRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTasksRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowsRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowsForTargetRequest.h>
#include <aws/ssm/model/DescribeOpsItemsRequest.h>
#include <aws/ssm/model/DescribeParametersRequest.h>
#include <aws/ssm/model/DescribePatchBaselinesRequest.h>
#include <aws/ssm/model/DescribePatchGroupStateRequest.h>
#include <aws/ssm/model/DescribePatchGroupsRequest.h>
#include <aws/ssm/model/DescribePatchPropertiesRequest.h>
#include <aws/ssm/model/DescribeSessionsRequest.h>
#include <aws/ssm/model/DisassociateOpsItemRelatedItemRequest.h>
#include <aws/ssm/model/GetAutomationExecutionRequest.h>
#include <aws/ssm/model/GetCalendarStateRequest.h>
#include <aws/ssm/model/GetCommandInvocationRequest.h>
#include <aws/ssm/model/GetConnectionStatusRequest.h>
#include <aws/ssm/model/GetDefaultPatchBaselineRequest.h>
#include <aws/ssm/model/GetDeployablePatchSnapshotForInstanceRequest.h>
#include <aws/ssm/model/GetDocumentRequest.h>
#include <aws/ssm/model/GetInventoryRequest.h>
#include <aws/ssm/model/GetInventorySchemaRequest.h>
#include <aws/ssm/model/GetMaintenanceWindowRequest.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionRequest.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskRequest.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskInvocationRequest.h>
#include <aws/ssm/model/GetMaintenanceWindowTaskRequest.h>
#include <aws/ssm/model/GetOpsItemRequest.h>
#include <aws/ssm/model/GetOpsMetadataRequest.h>
#include <aws/ssm/model/GetOpsSummaryRequest.h>
#include <aws/ssm/model/GetParameterRequest.h>
#include <aws/ssm/model/GetParameterHistoryRequest.h>
#include <aws/ssm/model/GetParametersRequest.h>
#include <aws/ssm/model/GetParametersByPathRequest.h>
#include <aws/ssm/model/GetPatchBaselineRequest.h>
#include <aws/ssm/model/GetPatchBaselineForPatchGroupRequest.h>
#include <aws/ssm/model/GetResourcePoliciesRequest.h>
#include <aws/ssm/model/GetServiceSettingRequest.h>
#include <aws/ssm/model/LabelParameterVersionRequest.h>
#include <aws/ssm/model/ListAssociationVersionsRequest.h>
#include <aws/ssm/model/ListAssociationsRequest.h>
#include <aws/ssm/model/ListCommandInvocationsRequest.h>
#include <aws/ssm/model/ListCommandsRequest.h>
#include <aws/ssm/model/ListComplianceItemsRequest.h>
#include <aws/ssm/model/ListComplianceSummariesRequest.h>
#include <aws/ssm/model/ListDocumentMetadataHistoryRequest.h>
#include <aws/ssm/model/ListDocumentVersionsRequest.h>
#include <aws/ssm/model/ListDocumentsRequest.h>
#include <aws/ssm/model/ListInventoryEntriesRequest.h>
#include <aws/ssm/model/ListOpsItemEventsRequest.h>
#include <aws/ssm/model/ListOpsItemRelatedItemsRequest.h>
#include <aws/ssm/model/ListOpsMetadataRequest.h>
#include <aws/ssm/model/ListResourceComplianceSummariesRequest.h>
#include <aws/ssm/model/ListResourceDataSyncRequest.h>
#include <aws/ssm/model/ListTagsForResourceRequest.h>
#include <aws/ssm/model/ModifyDocumentPermissionRequest.h>
#include <aws/ssm/model/PutComplianceItemsRequest.h>
#include <aws/ssm/model/PutInventoryRequest.h>
#include <aws/ssm/model/PutParameterRequest.h>
#include <aws/ssm/model/PutResourcePolicyRequest.h>
#include <aws/ssm/model/RegisterDefaultPatchBaselineRequest.h>
#include <aws/ssm/model/RegisterPatchBaselineForPatchGroupRequest.h>
#include <aws/ssm/model/RegisterTargetWithMaintenanceWindowRequest.h>
#include <aws/ssm/model/RegisterTaskWithMaintenanceWindowRequest.h>
#include <aws/ssm/model/RemoveTagsFromResourceRequest.h>
#include <aws/ssm/model/ResetServiceSettingRequest.h>
#include <aws/ssm/model/ResumeSessionRequest.h>
#include <aws/ssm/model/SendAutomationSignalRequest.h>
#include <aws/ssm/model/SendCommandRequest.h>
#include <aws/ssm/model/StartAssociationsOnceRequest.h>
#include <aws/ssm/model/StartAutomationExecutionRequest.h>
#include <aws/ssm/model/StartChangeRequestExecutionRequest.h>
#include <aws/ssm/model/StartSessionRequest.h>
#include <aws/ssm/model/StopAutomationExecutionRequest.h>
#include <aws/ssm/model/TerminateSessionRequest.h>
#include <aws/ssm/model/UnlabelParameterVersionRequest.h>
#include <aws/ssm/model/UpdateAssociationRequest.h>
#include <aws/ssm/model/UpdateAssociationStatusRequest.h>
#include <aws/ssm/model/UpdateDocumentRequest.h>
#include <aws/ssm/model/UpdateDocumentDefaultVersionRequest.h>
#include <aws/ssm/model/UpdateDocumentMetadataRequest.h>
#include <aws/ssm/model/UpdateMaintenanceWindowRequest.h>
#include <aws/ssm/model/UpdateMaintenanceWindowTargetRequest.h>
#include <aws/ssm/model/UpdateMaintenanceWindowTaskRequest.h>
#include <aws/ssm/model/UpdateManagedInstanceRoleRequest.h>
#include <aws/ssm/model/UpdateOpsItemRequest.h>
#include <aws/ssm/model/UpdateOpsMetadataRequest.h>
#include <aws/ssm/model/UpdatePatchBaselineRequest.h>
#include <aws/ssm/model/UpdateResourceDataSyncRequest.h>
#include <aws/ssm/model/UpdateServiceSettingRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SSM;
using namespace Aws::SSM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SSMClient::SERVICE_NAME = "ssm";
const char* SSMClient::ALLOCATION_TAG = "SSMClient";

SSMClient::SSMClient(const SSM::SSMClientConfiguration& clientConfiguration,
                     std::shared_ptr<SSMEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SSMClient::SSMClient(const AWSCredentials& credentials,
                     std::shared_ptr<SSMEndpointProviderBase> endpointProvider,
                     const SSM::SSMClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SSMClient::SSMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<SSMEndpointProviderBase> endpointProvider,
                     const SSM::SSMClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SSMClient::SSMClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SSMClient::SSMClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SSMClient::SSMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SSMClient::~SSMClient()
{
}

std::shared_ptr<SSMEndpointProviderBase>& SSMClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SSMClient::init(const SSM::SSMClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SSM");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SSMClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddTagsToResourceOutcome SSMClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTagsToResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTagsToResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddTagsToResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsToResourceOutcomeCallable SSMClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddTagsToResource(request), context);
    } );
}

AssociateOpsItemRelatedItemOutcome SSMClient::AssociateOpsItemRelatedItem(const AssociateOpsItemRelatedItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateOpsItemRelatedItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateOpsItemRelatedItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateOpsItemRelatedItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateOpsItemRelatedItemOutcomeCallable SSMClient::AssociateOpsItemRelatedItemCallable(const AssociateOpsItemRelatedItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateOpsItemRelatedItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateOpsItemRelatedItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::AssociateOpsItemRelatedItemAsync(const AssociateOpsItemRelatedItemRequest& request, const AssociateOpsItemRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateOpsItemRelatedItem(request), context);
    } );
}

CancelCommandOutcome SSMClient::CancelCommand(const CancelCommandRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelCommand, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelCommand, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelCommandOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelCommandOutcomeCallable SSMClient::CancelCommandCallable(const CancelCommandRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelCommandOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelCommand(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::CancelCommandAsync(const CancelCommandRequest& request, const CancelCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelCommand(request), context);
    } );
}

CancelMaintenanceWindowExecutionOutcome SSMClient::CancelMaintenanceWindowExecution(const CancelMaintenanceWindowExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelMaintenanceWindowExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelMaintenanceWindowExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelMaintenanceWindowExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelMaintenanceWindowExecutionOutcomeCallable SSMClient::CancelMaintenanceWindowExecutionCallable(const CancelMaintenanceWindowExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelMaintenanceWindowExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelMaintenanceWindowExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::CancelMaintenanceWindowExecutionAsync(const CancelMaintenanceWindowExecutionRequest& request, const CancelMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelMaintenanceWindowExecution(request), context);
    } );
}

CreateActivationOutcome SSMClient::CreateActivation(const CreateActivationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateActivation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateActivation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateActivationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateActivationOutcomeCallable SSMClient::CreateActivationCallable(const CreateActivationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateActivationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateActivation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::CreateActivationAsync(const CreateActivationRequest& request, const CreateActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateActivation(request), context);
    } );
}

CreateAssociationOutcome SSMClient::CreateAssociation(const CreateAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssociationOutcomeCallable SSMClient::CreateAssociationCallable(const CreateAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::CreateAssociationAsync(const CreateAssociationRequest& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAssociation(request), context);
    } );
}

CreateAssociationBatchOutcome SSMClient::CreateAssociationBatch(const CreateAssociationBatchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssociationBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAssociationBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAssociationBatchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssociationBatchOutcomeCallable SSMClient::CreateAssociationBatchCallable(const CreateAssociationBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssociationBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssociationBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::CreateAssociationBatchAsync(const CreateAssociationBatchRequest& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAssociationBatch(request), context);
    } );
}

CreateDocumentOutcome SSMClient::CreateDocument(const CreateDocumentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDocumentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDocumentOutcomeCallable SSMClient::CreateDocumentCallable(const CreateDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::CreateDocumentAsync(const CreateDocumentRequest& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDocument(request), context);
    } );
}

CreateMaintenanceWindowOutcome SSMClient::CreateMaintenanceWindow(const CreateMaintenanceWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateMaintenanceWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMaintenanceWindowOutcomeCallable SSMClient::CreateMaintenanceWindowCallable(const CreateMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::CreateMaintenanceWindowAsync(const CreateMaintenanceWindowRequest& request, const CreateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMaintenanceWindow(request), context);
    } );
}

CreateOpsItemOutcome SSMClient::CreateOpsItem(const CreateOpsItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOpsItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOpsItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateOpsItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOpsItemOutcomeCallable SSMClient::CreateOpsItemCallable(const CreateOpsItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOpsItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOpsItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::CreateOpsItemAsync(const CreateOpsItemRequest& request, const CreateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateOpsItem(request), context);
    } );
}

CreateOpsMetadataOutcome SSMClient::CreateOpsMetadata(const CreateOpsMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOpsMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOpsMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateOpsMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOpsMetadataOutcomeCallable SSMClient::CreateOpsMetadataCallable(const CreateOpsMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOpsMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOpsMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::CreateOpsMetadataAsync(const CreateOpsMetadataRequest& request, const CreateOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateOpsMetadata(request), context);
    } );
}

CreatePatchBaselineOutcome SSMClient::CreatePatchBaseline(const CreatePatchBaselineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePatchBaseline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePatchBaseline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePatchBaselineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePatchBaselineOutcomeCallable SSMClient::CreatePatchBaselineCallable(const CreatePatchBaselineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePatchBaselineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePatchBaseline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::CreatePatchBaselineAsync(const CreatePatchBaselineRequest& request, const CreatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePatchBaseline(request), context);
    } );
}

CreateResourceDataSyncOutcome SSMClient::CreateResourceDataSync(const CreateResourceDataSyncRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResourceDataSync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResourceDataSync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateResourceDataSyncOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceDataSyncOutcomeCallable SSMClient::CreateResourceDataSyncCallable(const CreateResourceDataSyncRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceDataSyncOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResourceDataSync(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::CreateResourceDataSyncAsync(const CreateResourceDataSyncRequest& request, const CreateResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateResourceDataSync(request), context);
    } );
}

DeleteActivationOutcome SSMClient::DeleteActivation(const DeleteActivationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteActivation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteActivation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteActivationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteActivationOutcomeCallable SSMClient::DeleteActivationCallable(const DeleteActivationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteActivationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteActivation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeleteActivationAsync(const DeleteActivationRequest& request, const DeleteActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteActivation(request), context);
    } );
}

DeleteAssociationOutcome SSMClient::DeleteAssociation(const DeleteAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssociationOutcomeCallable SSMClient::DeleteAssociationCallable(const DeleteAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeleteAssociationAsync(const DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAssociation(request), context);
    } );
}

DeleteDocumentOutcome SSMClient::DeleteDocument(const DeleteDocumentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDocumentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDocumentOutcomeCallable SSMClient::DeleteDocumentCallable(const DeleteDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeleteDocumentAsync(const DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDocument(request), context);
    } );
}

DeleteInventoryOutcome SSMClient::DeleteInventory(const DeleteInventoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInventory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInventory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInventoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInventoryOutcomeCallable SSMClient::DeleteInventoryCallable(const DeleteInventoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInventoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInventory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeleteInventoryAsync(const DeleteInventoryRequest& request, const DeleteInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInventory(request), context);
    } );
}

DeleteMaintenanceWindowOutcome SSMClient::DeleteMaintenanceWindow(const DeleteMaintenanceWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteMaintenanceWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMaintenanceWindowOutcomeCallable SSMClient::DeleteMaintenanceWindowCallable(const DeleteMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeleteMaintenanceWindowAsync(const DeleteMaintenanceWindowRequest& request, const DeleteMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMaintenanceWindow(request), context);
    } );
}

DeleteOpsMetadataOutcome SSMClient::DeleteOpsMetadata(const DeleteOpsMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOpsMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOpsMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteOpsMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteOpsMetadataOutcomeCallable SSMClient::DeleteOpsMetadataCallable(const DeleteOpsMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOpsMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOpsMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeleteOpsMetadataAsync(const DeleteOpsMetadataRequest& request, const DeleteOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteOpsMetadata(request), context);
    } );
}

DeleteParameterOutcome SSMClient::DeleteParameter(const DeleteParameterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteParameter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteParameter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteParameterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteParameterOutcomeCallable SSMClient::DeleteParameterCallable(const DeleteParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeleteParameterAsync(const DeleteParameterRequest& request, const DeleteParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteParameter(request), context);
    } );
}

DeleteParametersOutcome SSMClient::DeleteParameters(const DeleteParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteParametersOutcomeCallable SSMClient::DeleteParametersCallable(const DeleteParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeleteParametersAsync(const DeleteParametersRequest& request, const DeleteParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteParameters(request), context);
    } );
}

DeletePatchBaselineOutcome SSMClient::DeletePatchBaseline(const DeletePatchBaselineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePatchBaseline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePatchBaseline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePatchBaselineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePatchBaselineOutcomeCallable SSMClient::DeletePatchBaselineCallable(const DeletePatchBaselineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePatchBaselineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePatchBaseline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeletePatchBaselineAsync(const DeletePatchBaselineRequest& request, const DeletePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePatchBaseline(request), context);
    } );
}

DeleteResourceDataSyncOutcome SSMClient::DeleteResourceDataSync(const DeleteResourceDataSyncRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourceDataSync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourceDataSync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteResourceDataSyncOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceDataSyncOutcomeCallable SSMClient::DeleteResourceDataSyncCallable(const DeleteResourceDataSyncRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceDataSyncOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourceDataSync(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeleteResourceDataSyncAsync(const DeleteResourceDataSyncRequest& request, const DeleteResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourceDataSync(request), context);
    } );
}

DeleteResourcePolicyOutcome SSMClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable SSMClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourcePolicy(request), context);
    } );
}

DeregisterManagedInstanceOutcome SSMClient::DeregisterManagedInstance(const DeregisterManagedInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterManagedInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterManagedInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterManagedInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterManagedInstanceOutcomeCallable SSMClient::DeregisterManagedInstanceCallable(const DeregisterManagedInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterManagedInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterManagedInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeregisterManagedInstanceAsync(const DeregisterManagedInstanceRequest& request, const DeregisterManagedInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterManagedInstance(request), context);
    } );
}

DeregisterPatchBaselineForPatchGroupOutcome SSMClient::DeregisterPatchBaselineForPatchGroup(const DeregisterPatchBaselineForPatchGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterPatchBaselineForPatchGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterPatchBaselineForPatchGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterPatchBaselineForPatchGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterPatchBaselineForPatchGroupOutcomeCallable SSMClient::DeregisterPatchBaselineForPatchGroupCallable(const DeregisterPatchBaselineForPatchGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterPatchBaselineForPatchGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterPatchBaselineForPatchGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeregisterPatchBaselineForPatchGroupAsync(const DeregisterPatchBaselineForPatchGroupRequest& request, const DeregisterPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterPatchBaselineForPatchGroup(request), context);
    } );
}

DeregisterTargetFromMaintenanceWindowOutcome SSMClient::DeregisterTargetFromMaintenanceWindow(const DeregisterTargetFromMaintenanceWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterTargetFromMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterTargetFromMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterTargetFromMaintenanceWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterTargetFromMaintenanceWindowOutcomeCallable SSMClient::DeregisterTargetFromMaintenanceWindowCallable(const DeregisterTargetFromMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterTargetFromMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterTargetFromMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeregisterTargetFromMaintenanceWindowAsync(const DeregisterTargetFromMaintenanceWindowRequest& request, const DeregisterTargetFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterTargetFromMaintenanceWindow(request), context);
    } );
}

DeregisterTaskFromMaintenanceWindowOutcome SSMClient::DeregisterTaskFromMaintenanceWindow(const DeregisterTaskFromMaintenanceWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterTaskFromMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterTaskFromMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterTaskFromMaintenanceWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterTaskFromMaintenanceWindowOutcomeCallable SSMClient::DeregisterTaskFromMaintenanceWindowCallable(const DeregisterTaskFromMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterTaskFromMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterTaskFromMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DeregisterTaskFromMaintenanceWindowAsync(const DeregisterTaskFromMaintenanceWindowRequest& request, const DeregisterTaskFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterTaskFromMaintenanceWindow(request), context);
    } );
}

DescribeActivationsOutcome SSMClient::DescribeActivations(const DescribeActivationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeActivations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeActivations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeActivationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeActivationsOutcomeCallable SSMClient::DescribeActivationsCallable(const DescribeActivationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeActivationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeActivations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeActivationsAsync(const DescribeActivationsRequest& request, const DescribeActivationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeActivations(request), context);
    } );
}

DescribeAssociationOutcome SSMClient::DescribeAssociation(const DescribeAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAssociationOutcomeCallable SSMClient::DescribeAssociationCallable(const DescribeAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeAssociationAsync(const DescribeAssociationRequest& request, const DescribeAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAssociation(request), context);
    } );
}

DescribeAssociationExecutionTargetsOutcome SSMClient::DescribeAssociationExecutionTargets(const DescribeAssociationExecutionTargetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAssociationExecutionTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAssociationExecutionTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAssociationExecutionTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAssociationExecutionTargetsOutcomeCallable SSMClient::DescribeAssociationExecutionTargetsCallable(const DescribeAssociationExecutionTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAssociationExecutionTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAssociationExecutionTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeAssociationExecutionTargetsAsync(const DescribeAssociationExecutionTargetsRequest& request, const DescribeAssociationExecutionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAssociationExecutionTargets(request), context);
    } );
}

DescribeAssociationExecutionsOutcome SSMClient::DescribeAssociationExecutions(const DescribeAssociationExecutionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAssociationExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAssociationExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAssociationExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAssociationExecutionsOutcomeCallable SSMClient::DescribeAssociationExecutionsCallable(const DescribeAssociationExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAssociationExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAssociationExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeAssociationExecutionsAsync(const DescribeAssociationExecutionsRequest& request, const DescribeAssociationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAssociationExecutions(request), context);
    } );
}

DescribeAutomationExecutionsOutcome SSMClient::DescribeAutomationExecutions(const DescribeAutomationExecutionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAutomationExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAutomationExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAutomationExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAutomationExecutionsOutcomeCallable SSMClient::DescribeAutomationExecutionsCallable(const DescribeAutomationExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutomationExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutomationExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeAutomationExecutionsAsync(const DescribeAutomationExecutionsRequest& request, const DescribeAutomationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAutomationExecutions(request), context);
    } );
}

DescribeAutomationStepExecutionsOutcome SSMClient::DescribeAutomationStepExecutions(const DescribeAutomationStepExecutionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAutomationStepExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAutomationStepExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAutomationStepExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAutomationStepExecutionsOutcomeCallable SSMClient::DescribeAutomationStepExecutionsCallable(const DescribeAutomationStepExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutomationStepExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutomationStepExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeAutomationStepExecutionsAsync(const DescribeAutomationStepExecutionsRequest& request, const DescribeAutomationStepExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAutomationStepExecutions(request), context);
    } );
}

DescribeAvailablePatchesOutcome SSMClient::DescribeAvailablePatches(const DescribeAvailablePatchesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAvailablePatches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAvailablePatches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAvailablePatchesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAvailablePatchesOutcomeCallable SSMClient::DescribeAvailablePatchesCallable(const DescribeAvailablePatchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAvailablePatchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAvailablePatches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeAvailablePatchesAsync(const DescribeAvailablePatchesRequest& request, const DescribeAvailablePatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAvailablePatches(request), context);
    } );
}

DescribeDocumentOutcome SSMClient::DescribeDocument(const DescribeDocumentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDocumentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDocumentOutcomeCallable SSMClient::DescribeDocumentCallable(const DescribeDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeDocumentAsync(const DescribeDocumentRequest& request, const DescribeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDocument(request), context);
    } );
}

DescribeDocumentPermissionOutcome SSMClient::DescribeDocumentPermission(const DescribeDocumentPermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDocumentPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDocumentPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDocumentPermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDocumentPermissionOutcomeCallable SSMClient::DescribeDocumentPermissionCallable(const DescribeDocumentPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDocumentPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDocumentPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeDocumentPermissionAsync(const DescribeDocumentPermissionRequest& request, const DescribeDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDocumentPermission(request), context);
    } );
}

DescribeEffectiveInstanceAssociationsOutcome SSMClient::DescribeEffectiveInstanceAssociations(const DescribeEffectiveInstanceAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEffectiveInstanceAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEffectiveInstanceAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEffectiveInstanceAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEffectiveInstanceAssociationsOutcomeCallable SSMClient::DescribeEffectiveInstanceAssociationsCallable(const DescribeEffectiveInstanceAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEffectiveInstanceAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEffectiveInstanceAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeEffectiveInstanceAssociationsAsync(const DescribeEffectiveInstanceAssociationsRequest& request, const DescribeEffectiveInstanceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEffectiveInstanceAssociations(request), context);
    } );
}

DescribeEffectivePatchesForPatchBaselineOutcome SSMClient::DescribeEffectivePatchesForPatchBaseline(const DescribeEffectivePatchesForPatchBaselineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEffectivePatchesForPatchBaseline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEffectivePatchesForPatchBaseline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEffectivePatchesForPatchBaselineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEffectivePatchesForPatchBaselineOutcomeCallable SSMClient::DescribeEffectivePatchesForPatchBaselineCallable(const DescribeEffectivePatchesForPatchBaselineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEffectivePatchesForPatchBaselineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEffectivePatchesForPatchBaseline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeEffectivePatchesForPatchBaselineAsync(const DescribeEffectivePatchesForPatchBaselineRequest& request, const DescribeEffectivePatchesForPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEffectivePatchesForPatchBaseline(request), context);
    } );
}

DescribeInstanceAssociationsStatusOutcome SSMClient::DescribeInstanceAssociationsStatus(const DescribeInstanceAssociationsStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceAssociationsStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceAssociationsStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceAssociationsStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceAssociationsStatusOutcomeCallable SSMClient::DescribeInstanceAssociationsStatusCallable(const DescribeInstanceAssociationsStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceAssociationsStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceAssociationsStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeInstanceAssociationsStatusAsync(const DescribeInstanceAssociationsStatusRequest& request, const DescribeInstanceAssociationsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInstanceAssociationsStatus(request), context);
    } );
}

DescribeInstanceInformationOutcome SSMClient::DescribeInstanceInformation(const DescribeInstanceInformationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceInformation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceInformation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceInformationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceInformationOutcomeCallable SSMClient::DescribeInstanceInformationCallable(const DescribeInstanceInformationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceInformationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceInformation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeInstanceInformationAsync(const DescribeInstanceInformationRequest& request, const DescribeInstanceInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInstanceInformation(request), context);
    } );
}

DescribeInstancePatchStatesOutcome SSMClient::DescribeInstancePatchStates(const DescribeInstancePatchStatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstancePatchStates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstancePatchStates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstancePatchStatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstancePatchStatesOutcomeCallable SSMClient::DescribeInstancePatchStatesCallable(const DescribeInstancePatchStatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancePatchStatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstancePatchStates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeInstancePatchStatesAsync(const DescribeInstancePatchStatesRequest& request, const DescribeInstancePatchStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInstancePatchStates(request), context);
    } );
}

DescribeInstancePatchStatesForPatchGroupOutcome SSMClient::DescribeInstancePatchStatesForPatchGroup(const DescribeInstancePatchStatesForPatchGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstancePatchStatesForPatchGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstancePatchStatesForPatchGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstancePatchStatesForPatchGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstancePatchStatesForPatchGroupOutcomeCallable SSMClient::DescribeInstancePatchStatesForPatchGroupCallable(const DescribeInstancePatchStatesForPatchGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancePatchStatesForPatchGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstancePatchStatesForPatchGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeInstancePatchStatesForPatchGroupAsync(const DescribeInstancePatchStatesForPatchGroupRequest& request, const DescribeInstancePatchStatesForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInstancePatchStatesForPatchGroup(request), context);
    } );
}

DescribeInstancePatchesOutcome SSMClient::DescribeInstancePatches(const DescribeInstancePatchesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstancePatches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstancePatches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstancePatchesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstancePatchesOutcomeCallable SSMClient::DescribeInstancePatchesCallable(const DescribeInstancePatchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancePatchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstancePatches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeInstancePatchesAsync(const DescribeInstancePatchesRequest& request, const DescribeInstancePatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInstancePatches(request), context);
    } );
}

DescribeInventoryDeletionsOutcome SSMClient::DescribeInventoryDeletions(const DescribeInventoryDeletionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInventoryDeletions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInventoryDeletions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInventoryDeletionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInventoryDeletionsOutcomeCallable SSMClient::DescribeInventoryDeletionsCallable(const DescribeInventoryDeletionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInventoryDeletionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInventoryDeletions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeInventoryDeletionsAsync(const DescribeInventoryDeletionsRequest& request, const DescribeInventoryDeletionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInventoryDeletions(request), context);
    } );
}

DescribeMaintenanceWindowExecutionTaskInvocationsOutcome SSMClient::DescribeMaintenanceWindowExecutionTaskInvocations(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMaintenanceWindowExecutionTaskInvocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMaintenanceWindowExecutionTaskInvocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMaintenanceWindowExecutionTaskInvocationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowExecutionTaskInvocationsOutcomeCallable SSMClient::DescribeMaintenanceWindowExecutionTaskInvocationsCallable(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowExecutionTaskInvocationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindowExecutionTaskInvocations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeMaintenanceWindowExecutionTaskInvocationsAsync(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request, const DescribeMaintenanceWindowExecutionTaskInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMaintenanceWindowExecutionTaskInvocations(request), context);
    } );
}

DescribeMaintenanceWindowExecutionTasksOutcome SSMClient::DescribeMaintenanceWindowExecutionTasks(const DescribeMaintenanceWindowExecutionTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMaintenanceWindowExecutionTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMaintenanceWindowExecutionTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMaintenanceWindowExecutionTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowExecutionTasksOutcomeCallable SSMClient::DescribeMaintenanceWindowExecutionTasksCallable(const DescribeMaintenanceWindowExecutionTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowExecutionTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindowExecutionTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeMaintenanceWindowExecutionTasksAsync(const DescribeMaintenanceWindowExecutionTasksRequest& request, const DescribeMaintenanceWindowExecutionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMaintenanceWindowExecutionTasks(request), context);
    } );
}

DescribeMaintenanceWindowExecutionsOutcome SSMClient::DescribeMaintenanceWindowExecutions(const DescribeMaintenanceWindowExecutionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMaintenanceWindowExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMaintenanceWindowExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMaintenanceWindowExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowExecutionsOutcomeCallable SSMClient::DescribeMaintenanceWindowExecutionsCallable(const DescribeMaintenanceWindowExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindowExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeMaintenanceWindowExecutionsAsync(const DescribeMaintenanceWindowExecutionsRequest& request, const DescribeMaintenanceWindowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMaintenanceWindowExecutions(request), context);
    } );
}

DescribeMaintenanceWindowScheduleOutcome SSMClient::DescribeMaintenanceWindowSchedule(const DescribeMaintenanceWindowScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMaintenanceWindowSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMaintenanceWindowSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMaintenanceWindowScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowScheduleOutcomeCallable SSMClient::DescribeMaintenanceWindowScheduleCallable(const DescribeMaintenanceWindowScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindowSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeMaintenanceWindowScheduleAsync(const DescribeMaintenanceWindowScheduleRequest& request, const DescribeMaintenanceWindowScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMaintenanceWindowSchedule(request), context);
    } );
}

DescribeMaintenanceWindowTargetsOutcome SSMClient::DescribeMaintenanceWindowTargets(const DescribeMaintenanceWindowTargetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMaintenanceWindowTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMaintenanceWindowTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMaintenanceWindowTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowTargetsOutcomeCallable SSMClient::DescribeMaintenanceWindowTargetsCallable(const DescribeMaintenanceWindowTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindowTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeMaintenanceWindowTargetsAsync(const DescribeMaintenanceWindowTargetsRequest& request, const DescribeMaintenanceWindowTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMaintenanceWindowTargets(request), context);
    } );
}

DescribeMaintenanceWindowTasksOutcome SSMClient::DescribeMaintenanceWindowTasks(const DescribeMaintenanceWindowTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMaintenanceWindowTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMaintenanceWindowTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMaintenanceWindowTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowTasksOutcomeCallable SSMClient::DescribeMaintenanceWindowTasksCallable(const DescribeMaintenanceWindowTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindowTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeMaintenanceWindowTasksAsync(const DescribeMaintenanceWindowTasksRequest& request, const DescribeMaintenanceWindowTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMaintenanceWindowTasks(request), context);
    } );
}

DescribeMaintenanceWindowsOutcome SSMClient::DescribeMaintenanceWindows(const DescribeMaintenanceWindowsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMaintenanceWindows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMaintenanceWindows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMaintenanceWindowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowsOutcomeCallable SSMClient::DescribeMaintenanceWindowsCallable(const DescribeMaintenanceWindowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeMaintenanceWindowsAsync(const DescribeMaintenanceWindowsRequest& request, const DescribeMaintenanceWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMaintenanceWindows(request), context);
    } );
}

DescribeMaintenanceWindowsForTargetOutcome SSMClient::DescribeMaintenanceWindowsForTarget(const DescribeMaintenanceWindowsForTargetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMaintenanceWindowsForTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMaintenanceWindowsForTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMaintenanceWindowsForTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowsForTargetOutcomeCallable SSMClient::DescribeMaintenanceWindowsForTargetCallable(const DescribeMaintenanceWindowsForTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowsForTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindowsForTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeMaintenanceWindowsForTargetAsync(const DescribeMaintenanceWindowsForTargetRequest& request, const DescribeMaintenanceWindowsForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMaintenanceWindowsForTarget(request), context);
    } );
}

DescribeOpsItemsOutcome SSMClient::DescribeOpsItems(const DescribeOpsItemsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOpsItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOpsItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeOpsItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOpsItemsOutcomeCallable SSMClient::DescribeOpsItemsCallable(const DescribeOpsItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOpsItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOpsItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeOpsItemsAsync(const DescribeOpsItemsRequest& request, const DescribeOpsItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeOpsItems(request), context);
    } );
}

DescribeParametersOutcome SSMClient::DescribeParameters(const DescribeParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeParametersOutcomeCallable SSMClient::DescribeParametersCallable(const DescribeParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeParameters(request), context);
    } );
}

DescribePatchBaselinesOutcome SSMClient::DescribePatchBaselines(const DescribePatchBaselinesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePatchBaselines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePatchBaselines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePatchBaselinesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePatchBaselinesOutcomeCallable SSMClient::DescribePatchBaselinesCallable(const DescribePatchBaselinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePatchBaselinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePatchBaselines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribePatchBaselinesAsync(const DescribePatchBaselinesRequest& request, const DescribePatchBaselinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePatchBaselines(request), context);
    } );
}

DescribePatchGroupStateOutcome SSMClient::DescribePatchGroupState(const DescribePatchGroupStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePatchGroupState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePatchGroupState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePatchGroupStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePatchGroupStateOutcomeCallable SSMClient::DescribePatchGroupStateCallable(const DescribePatchGroupStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePatchGroupStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePatchGroupState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribePatchGroupStateAsync(const DescribePatchGroupStateRequest& request, const DescribePatchGroupStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePatchGroupState(request), context);
    } );
}

DescribePatchGroupsOutcome SSMClient::DescribePatchGroups(const DescribePatchGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePatchGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePatchGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePatchGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePatchGroupsOutcomeCallable SSMClient::DescribePatchGroupsCallable(const DescribePatchGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePatchGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePatchGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribePatchGroupsAsync(const DescribePatchGroupsRequest& request, const DescribePatchGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePatchGroups(request), context);
    } );
}

DescribePatchPropertiesOutcome SSMClient::DescribePatchProperties(const DescribePatchPropertiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePatchProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePatchProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePatchPropertiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePatchPropertiesOutcomeCallable SSMClient::DescribePatchPropertiesCallable(const DescribePatchPropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePatchPropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePatchProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribePatchPropertiesAsync(const DescribePatchPropertiesRequest& request, const DescribePatchPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePatchProperties(request), context);
    } );
}

DescribeSessionsOutcome SSMClient::DescribeSessions(const DescribeSessionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSessionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSessionsOutcomeCallable SSMClient::DescribeSessionsCallable(const DescribeSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DescribeSessionsAsync(const DescribeSessionsRequest& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSessions(request), context);
    } );
}

DisassociateOpsItemRelatedItemOutcome SSMClient::DisassociateOpsItemRelatedItem(const DisassociateOpsItemRelatedItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateOpsItemRelatedItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateOpsItemRelatedItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateOpsItemRelatedItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateOpsItemRelatedItemOutcomeCallable SSMClient::DisassociateOpsItemRelatedItemCallable(const DisassociateOpsItemRelatedItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateOpsItemRelatedItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateOpsItemRelatedItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::DisassociateOpsItemRelatedItemAsync(const DisassociateOpsItemRelatedItemRequest& request, const DisassociateOpsItemRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateOpsItemRelatedItem(request), context);
    } );
}

GetAutomationExecutionOutcome SSMClient::GetAutomationExecution(const GetAutomationExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAutomationExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAutomationExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAutomationExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAutomationExecutionOutcomeCallable SSMClient::GetAutomationExecutionCallable(const GetAutomationExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAutomationExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAutomationExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetAutomationExecutionAsync(const GetAutomationExecutionRequest& request, const GetAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAutomationExecution(request), context);
    } );
}

GetCalendarStateOutcome SSMClient::GetCalendarState(const GetCalendarStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCalendarState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCalendarState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCalendarStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCalendarStateOutcomeCallable SSMClient::GetCalendarStateCallable(const GetCalendarStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCalendarStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCalendarState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetCalendarStateAsync(const GetCalendarStateRequest& request, const GetCalendarStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCalendarState(request), context);
    } );
}

GetCommandInvocationOutcome SSMClient::GetCommandInvocation(const GetCommandInvocationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCommandInvocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCommandInvocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCommandInvocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommandInvocationOutcomeCallable SSMClient::GetCommandInvocationCallable(const GetCommandInvocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCommandInvocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCommandInvocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetCommandInvocationAsync(const GetCommandInvocationRequest& request, const GetCommandInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCommandInvocation(request), context);
    } );
}

GetConnectionStatusOutcome SSMClient::GetConnectionStatus(const GetConnectionStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConnectionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConnectionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetConnectionStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetConnectionStatusOutcomeCallable SSMClient::GetConnectionStatusCallable(const GetConnectionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnectionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetConnectionStatusAsync(const GetConnectionStatusRequest& request, const GetConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetConnectionStatus(request), context);
    } );
}

GetDefaultPatchBaselineOutcome SSMClient::GetDefaultPatchBaseline(const GetDefaultPatchBaselineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDefaultPatchBaseline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDefaultPatchBaseline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDefaultPatchBaselineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDefaultPatchBaselineOutcomeCallable SSMClient::GetDefaultPatchBaselineCallable(const GetDefaultPatchBaselineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDefaultPatchBaselineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDefaultPatchBaseline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetDefaultPatchBaselineAsync(const GetDefaultPatchBaselineRequest& request, const GetDefaultPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDefaultPatchBaseline(request), context);
    } );
}

GetDeployablePatchSnapshotForInstanceOutcome SSMClient::GetDeployablePatchSnapshotForInstance(const GetDeployablePatchSnapshotForInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeployablePatchSnapshotForInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeployablePatchSnapshotForInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDeployablePatchSnapshotForInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeployablePatchSnapshotForInstanceOutcomeCallable SSMClient::GetDeployablePatchSnapshotForInstanceCallable(const GetDeployablePatchSnapshotForInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeployablePatchSnapshotForInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployablePatchSnapshotForInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetDeployablePatchSnapshotForInstanceAsync(const GetDeployablePatchSnapshotForInstanceRequest& request, const GetDeployablePatchSnapshotForInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeployablePatchSnapshotForInstance(request), context);
    } );
}

GetDocumentOutcome SSMClient::GetDocument(const GetDocumentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDocumentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDocumentOutcomeCallable SSMClient::GetDocumentCallable(const GetDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetDocumentAsync(const GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDocument(request), context);
    } );
}

GetInventoryOutcome SSMClient::GetInventory(const GetInventoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInventory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInventory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInventoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInventoryOutcomeCallable SSMClient::GetInventoryCallable(const GetInventoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInventoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInventory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetInventoryAsync(const GetInventoryRequest& request, const GetInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInventory(request), context);
    } );
}

GetInventorySchemaOutcome SSMClient::GetInventorySchema(const GetInventorySchemaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInventorySchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInventorySchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInventorySchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInventorySchemaOutcomeCallable SSMClient::GetInventorySchemaCallable(const GetInventorySchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInventorySchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInventorySchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetInventorySchemaAsync(const GetInventorySchemaRequest& request, const GetInventorySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInventorySchema(request), context);
    } );
}

GetMaintenanceWindowOutcome SSMClient::GetMaintenanceWindow(const GetMaintenanceWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMaintenanceWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMaintenanceWindowOutcomeCallable SSMClient::GetMaintenanceWindowCallable(const GetMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetMaintenanceWindowAsync(const GetMaintenanceWindowRequest& request, const GetMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMaintenanceWindow(request), context);
    } );
}

GetMaintenanceWindowExecutionOutcome SSMClient::GetMaintenanceWindowExecution(const GetMaintenanceWindowExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMaintenanceWindowExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMaintenanceWindowExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMaintenanceWindowExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMaintenanceWindowExecutionOutcomeCallable SSMClient::GetMaintenanceWindowExecutionCallable(const GetMaintenanceWindowExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMaintenanceWindowExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMaintenanceWindowExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetMaintenanceWindowExecutionAsync(const GetMaintenanceWindowExecutionRequest& request, const GetMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMaintenanceWindowExecution(request), context);
    } );
}

GetMaintenanceWindowExecutionTaskOutcome SSMClient::GetMaintenanceWindowExecutionTask(const GetMaintenanceWindowExecutionTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMaintenanceWindowExecutionTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMaintenanceWindowExecutionTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMaintenanceWindowExecutionTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMaintenanceWindowExecutionTaskOutcomeCallable SSMClient::GetMaintenanceWindowExecutionTaskCallable(const GetMaintenanceWindowExecutionTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMaintenanceWindowExecutionTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMaintenanceWindowExecutionTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetMaintenanceWindowExecutionTaskAsync(const GetMaintenanceWindowExecutionTaskRequest& request, const GetMaintenanceWindowExecutionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMaintenanceWindowExecutionTask(request), context);
    } );
}

GetMaintenanceWindowExecutionTaskInvocationOutcome SSMClient::GetMaintenanceWindowExecutionTaskInvocation(const GetMaintenanceWindowExecutionTaskInvocationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMaintenanceWindowExecutionTaskInvocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMaintenanceWindowExecutionTaskInvocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMaintenanceWindowExecutionTaskInvocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMaintenanceWindowExecutionTaskInvocationOutcomeCallable SSMClient::GetMaintenanceWindowExecutionTaskInvocationCallable(const GetMaintenanceWindowExecutionTaskInvocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMaintenanceWindowExecutionTaskInvocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMaintenanceWindowExecutionTaskInvocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetMaintenanceWindowExecutionTaskInvocationAsync(const GetMaintenanceWindowExecutionTaskInvocationRequest& request, const GetMaintenanceWindowExecutionTaskInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMaintenanceWindowExecutionTaskInvocation(request), context);
    } );
}

GetMaintenanceWindowTaskOutcome SSMClient::GetMaintenanceWindowTask(const GetMaintenanceWindowTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMaintenanceWindowTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMaintenanceWindowTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMaintenanceWindowTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMaintenanceWindowTaskOutcomeCallable SSMClient::GetMaintenanceWindowTaskCallable(const GetMaintenanceWindowTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMaintenanceWindowTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMaintenanceWindowTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetMaintenanceWindowTaskAsync(const GetMaintenanceWindowTaskRequest& request, const GetMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMaintenanceWindowTask(request), context);
    } );
}

GetOpsItemOutcome SSMClient::GetOpsItem(const GetOpsItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOpsItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOpsItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOpsItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOpsItemOutcomeCallable SSMClient::GetOpsItemCallable(const GetOpsItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOpsItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOpsItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetOpsItemAsync(const GetOpsItemRequest& request, const GetOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetOpsItem(request), context);
    } );
}

GetOpsMetadataOutcome SSMClient::GetOpsMetadata(const GetOpsMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOpsMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOpsMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOpsMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOpsMetadataOutcomeCallable SSMClient::GetOpsMetadataCallable(const GetOpsMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOpsMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOpsMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetOpsMetadataAsync(const GetOpsMetadataRequest& request, const GetOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetOpsMetadata(request), context);
    } );
}

GetOpsSummaryOutcome SSMClient::GetOpsSummary(const GetOpsSummaryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOpsSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOpsSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOpsSummaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOpsSummaryOutcomeCallable SSMClient::GetOpsSummaryCallable(const GetOpsSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOpsSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOpsSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetOpsSummaryAsync(const GetOpsSummaryRequest& request, const GetOpsSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetOpsSummary(request), context);
    } );
}

GetParameterOutcome SSMClient::GetParameter(const GetParameterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetParameter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetParameter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetParameterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetParameterOutcomeCallable SSMClient::GetParameterCallable(const GetParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetParameterAsync(const GetParameterRequest& request, const GetParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetParameter(request), context);
    } );
}

GetParameterHistoryOutcome SSMClient::GetParameterHistory(const GetParameterHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetParameterHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetParameterHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetParameterHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetParameterHistoryOutcomeCallable SSMClient::GetParameterHistoryCallable(const GetParameterHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetParameterHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetParameterHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetParameterHistoryAsync(const GetParameterHistoryRequest& request, const GetParameterHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetParameterHistory(request), context);
    } );
}

GetParametersOutcome SSMClient::GetParameters(const GetParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetParametersOutcomeCallable SSMClient::GetParametersCallable(const GetParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetParametersAsync(const GetParametersRequest& request, const GetParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetParameters(request), context);
    } );
}

GetParametersByPathOutcome SSMClient::GetParametersByPath(const GetParametersByPathRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetParametersByPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetParametersByPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetParametersByPathOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetParametersByPathOutcomeCallable SSMClient::GetParametersByPathCallable(const GetParametersByPathRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetParametersByPathOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetParametersByPath(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetParametersByPathAsync(const GetParametersByPathRequest& request, const GetParametersByPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetParametersByPath(request), context);
    } );
}

GetPatchBaselineOutcome SSMClient::GetPatchBaseline(const GetPatchBaselineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPatchBaseline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPatchBaseline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPatchBaselineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPatchBaselineOutcomeCallable SSMClient::GetPatchBaselineCallable(const GetPatchBaselineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPatchBaselineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPatchBaseline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetPatchBaselineAsync(const GetPatchBaselineRequest& request, const GetPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPatchBaseline(request), context);
    } );
}

GetPatchBaselineForPatchGroupOutcome SSMClient::GetPatchBaselineForPatchGroup(const GetPatchBaselineForPatchGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPatchBaselineForPatchGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPatchBaselineForPatchGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPatchBaselineForPatchGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPatchBaselineForPatchGroupOutcomeCallable SSMClient::GetPatchBaselineForPatchGroupCallable(const GetPatchBaselineForPatchGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPatchBaselineForPatchGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPatchBaselineForPatchGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetPatchBaselineForPatchGroupAsync(const GetPatchBaselineForPatchGroupRequest& request, const GetPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPatchBaselineForPatchGroup(request), context);
    } );
}

GetResourcePoliciesOutcome SSMClient::GetResourcePolicies(const GetResourcePoliciesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourcePolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourcePolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetResourcePoliciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePoliciesOutcomeCallable SSMClient::GetResourcePoliciesCallable(const GetResourcePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourcePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetResourcePoliciesAsync(const GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourcePolicies(request), context);
    } );
}

GetServiceSettingOutcome SSMClient::GetServiceSetting(const GetServiceSettingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceSetting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServiceSetting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetServiceSettingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetServiceSettingOutcomeCallable SSMClient::GetServiceSettingCallable(const GetServiceSettingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceSettingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceSetting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::GetServiceSettingAsync(const GetServiceSettingRequest& request, const GetServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServiceSetting(request), context);
    } );
}

LabelParameterVersionOutcome SSMClient::LabelParameterVersion(const LabelParameterVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, LabelParameterVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, LabelParameterVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return LabelParameterVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

LabelParameterVersionOutcomeCallable SSMClient::LabelParameterVersionCallable(const LabelParameterVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< LabelParameterVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->LabelParameterVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::LabelParameterVersionAsync(const LabelParameterVersionRequest& request, const LabelParameterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, LabelParameterVersion(request), context);
    } );
}

ListAssociationVersionsOutcome SSMClient::ListAssociationVersions(const ListAssociationVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssociationVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssociationVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAssociationVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociationVersionsOutcomeCallable SSMClient::ListAssociationVersionsCallable(const ListAssociationVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociationVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociationVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListAssociationVersionsAsync(const ListAssociationVersionsRequest& request, const ListAssociationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssociationVersions(request), context);
    } );
}

ListAssociationsOutcome SSMClient::ListAssociations(const ListAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociationsOutcomeCallable SSMClient::ListAssociationsCallable(const ListAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListAssociationsAsync(const ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssociations(request), context);
    } );
}

ListCommandInvocationsOutcome SSMClient::ListCommandInvocations(const ListCommandInvocationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCommandInvocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCommandInvocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCommandInvocationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCommandInvocationsOutcomeCallable SSMClient::ListCommandInvocationsCallable(const ListCommandInvocationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCommandInvocationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCommandInvocations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListCommandInvocationsAsync(const ListCommandInvocationsRequest& request, const ListCommandInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCommandInvocations(request), context);
    } );
}

ListCommandsOutcome SSMClient::ListCommands(const ListCommandsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCommands, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCommands, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCommandsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCommandsOutcomeCallable SSMClient::ListCommandsCallable(const ListCommandsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCommandsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCommands(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListCommandsAsync(const ListCommandsRequest& request, const ListCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCommands(request), context);
    } );
}

ListComplianceItemsOutcome SSMClient::ListComplianceItems(const ListComplianceItemsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListComplianceItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListComplianceItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListComplianceItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListComplianceItemsOutcomeCallable SSMClient::ListComplianceItemsCallable(const ListComplianceItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComplianceItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComplianceItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListComplianceItemsAsync(const ListComplianceItemsRequest& request, const ListComplianceItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListComplianceItems(request), context);
    } );
}

ListComplianceSummariesOutcome SSMClient::ListComplianceSummaries(const ListComplianceSummariesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListComplianceSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListComplianceSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListComplianceSummariesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListComplianceSummariesOutcomeCallable SSMClient::ListComplianceSummariesCallable(const ListComplianceSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComplianceSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComplianceSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListComplianceSummariesAsync(const ListComplianceSummariesRequest& request, const ListComplianceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListComplianceSummaries(request), context);
    } );
}

ListDocumentMetadataHistoryOutcome SSMClient::ListDocumentMetadataHistory(const ListDocumentMetadataHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDocumentMetadataHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDocumentMetadataHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDocumentMetadataHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDocumentMetadataHistoryOutcomeCallable SSMClient::ListDocumentMetadataHistoryCallable(const ListDocumentMetadataHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDocumentMetadataHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDocumentMetadataHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListDocumentMetadataHistoryAsync(const ListDocumentMetadataHistoryRequest& request, const ListDocumentMetadataHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDocumentMetadataHistory(request), context);
    } );
}

ListDocumentVersionsOutcome SSMClient::ListDocumentVersions(const ListDocumentVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDocumentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDocumentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDocumentVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDocumentVersionsOutcomeCallable SSMClient::ListDocumentVersionsCallable(const ListDocumentVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDocumentVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDocumentVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListDocumentVersionsAsync(const ListDocumentVersionsRequest& request, const ListDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDocumentVersions(request), context);
    } );
}

ListDocumentsOutcome SSMClient::ListDocuments(const ListDocumentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDocuments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDocuments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDocumentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDocumentsOutcomeCallable SSMClient::ListDocumentsCallable(const ListDocumentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDocumentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDocuments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListDocumentsAsync(const ListDocumentsRequest& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDocuments(request), context);
    } );
}

ListInventoryEntriesOutcome SSMClient::ListInventoryEntries(const ListInventoryEntriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInventoryEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInventoryEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListInventoryEntriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInventoryEntriesOutcomeCallable SSMClient::ListInventoryEntriesCallable(const ListInventoryEntriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInventoryEntriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInventoryEntries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListInventoryEntriesAsync(const ListInventoryEntriesRequest& request, const ListInventoryEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInventoryEntries(request), context);
    } );
}

ListOpsItemEventsOutcome SSMClient::ListOpsItemEvents(const ListOpsItemEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOpsItemEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOpsItemEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListOpsItemEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOpsItemEventsOutcomeCallable SSMClient::ListOpsItemEventsCallable(const ListOpsItemEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOpsItemEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOpsItemEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListOpsItemEventsAsync(const ListOpsItemEventsRequest& request, const ListOpsItemEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListOpsItemEvents(request), context);
    } );
}

ListOpsItemRelatedItemsOutcome SSMClient::ListOpsItemRelatedItems(const ListOpsItemRelatedItemsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOpsItemRelatedItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOpsItemRelatedItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListOpsItemRelatedItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOpsItemRelatedItemsOutcomeCallable SSMClient::ListOpsItemRelatedItemsCallable(const ListOpsItemRelatedItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOpsItemRelatedItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOpsItemRelatedItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListOpsItemRelatedItemsAsync(const ListOpsItemRelatedItemsRequest& request, const ListOpsItemRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListOpsItemRelatedItems(request), context);
    } );
}

ListOpsMetadataOutcome SSMClient::ListOpsMetadata(const ListOpsMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOpsMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOpsMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListOpsMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOpsMetadataOutcomeCallable SSMClient::ListOpsMetadataCallable(const ListOpsMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOpsMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOpsMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListOpsMetadataAsync(const ListOpsMetadataRequest& request, const ListOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListOpsMetadata(request), context);
    } );
}

ListResourceComplianceSummariesOutcome SSMClient::ListResourceComplianceSummaries(const ListResourceComplianceSummariesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceComplianceSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceComplianceSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListResourceComplianceSummariesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourceComplianceSummariesOutcomeCallable SSMClient::ListResourceComplianceSummariesCallable(const ListResourceComplianceSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceComplianceSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceComplianceSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListResourceComplianceSummariesAsync(const ListResourceComplianceSummariesRequest& request, const ListResourceComplianceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResourceComplianceSummaries(request), context);
    } );
}

ListResourceDataSyncOutcome SSMClient::ListResourceDataSync(const ListResourceDataSyncRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceDataSync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceDataSync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListResourceDataSyncOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourceDataSyncOutcomeCallable SSMClient::ListResourceDataSyncCallable(const ListResourceDataSyncRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceDataSyncOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceDataSync(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListResourceDataSyncAsync(const ListResourceDataSyncRequest& request, const ListResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResourceDataSync(request), context);
    } );
}

ListTagsForResourceOutcome SSMClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SSMClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ModifyDocumentPermissionOutcome SSMClient::ModifyDocumentPermission(const ModifyDocumentPermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyDocumentPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyDocumentPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyDocumentPermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyDocumentPermissionOutcomeCallable SSMClient::ModifyDocumentPermissionCallable(const ModifyDocumentPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDocumentPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDocumentPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ModifyDocumentPermissionAsync(const ModifyDocumentPermissionRequest& request, const ModifyDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyDocumentPermission(request), context);
    } );
}

PutComplianceItemsOutcome SSMClient::PutComplianceItems(const PutComplianceItemsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutComplianceItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutComplianceItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutComplianceItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutComplianceItemsOutcomeCallable SSMClient::PutComplianceItemsCallable(const PutComplianceItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutComplianceItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutComplianceItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::PutComplianceItemsAsync(const PutComplianceItemsRequest& request, const PutComplianceItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutComplianceItems(request), context);
    } );
}

PutInventoryOutcome SSMClient::PutInventory(const PutInventoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutInventory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutInventory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutInventoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutInventoryOutcomeCallable SSMClient::PutInventoryCallable(const PutInventoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutInventoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutInventory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::PutInventoryAsync(const PutInventoryRequest& request, const PutInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutInventory(request), context);
    } );
}

PutParameterOutcome SSMClient::PutParameter(const PutParameterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutParameter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutParameter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutParameterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutParameterOutcomeCallable SSMClient::PutParameterCallable(const PutParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::PutParameterAsync(const PutParameterRequest& request, const PutParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutParameter(request), context);
    } );
}

PutResourcePolicyOutcome SSMClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable SSMClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutResourcePolicy(request), context);
    } );
}

RegisterDefaultPatchBaselineOutcome SSMClient::RegisterDefaultPatchBaseline(const RegisterDefaultPatchBaselineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterDefaultPatchBaseline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterDefaultPatchBaseline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterDefaultPatchBaselineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterDefaultPatchBaselineOutcomeCallable SSMClient::RegisterDefaultPatchBaselineCallable(const RegisterDefaultPatchBaselineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterDefaultPatchBaselineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterDefaultPatchBaseline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::RegisterDefaultPatchBaselineAsync(const RegisterDefaultPatchBaselineRequest& request, const RegisterDefaultPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterDefaultPatchBaseline(request), context);
    } );
}

RegisterPatchBaselineForPatchGroupOutcome SSMClient::RegisterPatchBaselineForPatchGroup(const RegisterPatchBaselineForPatchGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterPatchBaselineForPatchGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterPatchBaselineForPatchGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterPatchBaselineForPatchGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterPatchBaselineForPatchGroupOutcomeCallable SSMClient::RegisterPatchBaselineForPatchGroupCallable(const RegisterPatchBaselineForPatchGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterPatchBaselineForPatchGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterPatchBaselineForPatchGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::RegisterPatchBaselineForPatchGroupAsync(const RegisterPatchBaselineForPatchGroupRequest& request, const RegisterPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterPatchBaselineForPatchGroup(request), context);
    } );
}

RegisterTargetWithMaintenanceWindowOutcome SSMClient::RegisterTargetWithMaintenanceWindow(const RegisterTargetWithMaintenanceWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterTargetWithMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterTargetWithMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterTargetWithMaintenanceWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterTargetWithMaintenanceWindowOutcomeCallable SSMClient::RegisterTargetWithMaintenanceWindowCallable(const RegisterTargetWithMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterTargetWithMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterTargetWithMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::RegisterTargetWithMaintenanceWindowAsync(const RegisterTargetWithMaintenanceWindowRequest& request, const RegisterTargetWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterTargetWithMaintenanceWindow(request), context);
    } );
}

RegisterTaskWithMaintenanceWindowOutcome SSMClient::RegisterTaskWithMaintenanceWindow(const RegisterTaskWithMaintenanceWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterTaskWithMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterTaskWithMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterTaskWithMaintenanceWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterTaskWithMaintenanceWindowOutcomeCallable SSMClient::RegisterTaskWithMaintenanceWindowCallable(const RegisterTaskWithMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterTaskWithMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterTaskWithMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::RegisterTaskWithMaintenanceWindowAsync(const RegisterTaskWithMaintenanceWindowRequest& request, const RegisterTaskWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterTaskWithMaintenanceWindow(request), context);
    } );
}

RemoveTagsFromResourceOutcome SSMClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTagsFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveTagsFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveTagsFromResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsFromResourceOutcomeCallable SSMClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveTagsFromResource(request), context);
    } );
}

ResetServiceSettingOutcome SSMClient::ResetServiceSetting(const ResetServiceSettingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetServiceSetting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetServiceSetting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetServiceSettingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResetServiceSettingOutcomeCallable SSMClient::ResetServiceSettingCallable(const ResetServiceSettingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetServiceSettingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetServiceSetting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ResetServiceSettingAsync(const ResetServiceSettingRequest& request, const ResetServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResetServiceSetting(request), context);
    } );
}

ResumeSessionOutcome SSMClient::ResumeSession(const ResumeSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResumeSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResumeSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResumeSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResumeSessionOutcomeCallable SSMClient::ResumeSessionCallable(const ResumeSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResumeSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResumeSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::ResumeSessionAsync(const ResumeSessionRequest& request, const ResumeSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResumeSession(request), context);
    } );
}

SendAutomationSignalOutcome SSMClient::SendAutomationSignal(const SendAutomationSignalRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendAutomationSignal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendAutomationSignal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendAutomationSignalOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendAutomationSignalOutcomeCallable SSMClient::SendAutomationSignalCallable(const SendAutomationSignalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendAutomationSignalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendAutomationSignal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::SendAutomationSignalAsync(const SendAutomationSignalRequest& request, const SendAutomationSignalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendAutomationSignal(request), context);
    } );
}

SendCommandOutcome SSMClient::SendCommand(const SendCommandRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendCommand, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendCommand, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendCommandOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendCommandOutcomeCallable SSMClient::SendCommandCallable(const SendCommandRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendCommandOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendCommand(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::SendCommandAsync(const SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendCommand(request), context);
    } );
}

StartAssociationsOnceOutcome SSMClient::StartAssociationsOnce(const StartAssociationsOnceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAssociationsOnce, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartAssociationsOnce, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartAssociationsOnceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAssociationsOnceOutcomeCallable SSMClient::StartAssociationsOnceCallable(const StartAssociationsOnceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAssociationsOnceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAssociationsOnce(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::StartAssociationsOnceAsync(const StartAssociationsOnceRequest& request, const StartAssociationsOnceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartAssociationsOnce(request), context);
    } );
}

StartAutomationExecutionOutcome SSMClient::StartAutomationExecution(const StartAutomationExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAutomationExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartAutomationExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartAutomationExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAutomationExecutionOutcomeCallable SSMClient::StartAutomationExecutionCallable(const StartAutomationExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAutomationExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAutomationExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::StartAutomationExecutionAsync(const StartAutomationExecutionRequest& request, const StartAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartAutomationExecution(request), context);
    } );
}

StartChangeRequestExecutionOutcome SSMClient::StartChangeRequestExecution(const StartChangeRequestExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartChangeRequestExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartChangeRequestExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartChangeRequestExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartChangeRequestExecutionOutcomeCallable SSMClient::StartChangeRequestExecutionCallable(const StartChangeRequestExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartChangeRequestExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartChangeRequestExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::StartChangeRequestExecutionAsync(const StartChangeRequestExecutionRequest& request, const StartChangeRequestExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartChangeRequestExecution(request), context);
    } );
}

StartSessionOutcome SSMClient::StartSession(const StartSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSessionOutcomeCallable SSMClient::StartSessionCallable(const StartSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::StartSessionAsync(const StartSessionRequest& request, const StartSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartSession(request), context);
    } );
}

StopAutomationExecutionOutcome SSMClient::StopAutomationExecution(const StopAutomationExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopAutomationExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopAutomationExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopAutomationExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopAutomationExecutionOutcomeCallable SSMClient::StopAutomationExecutionCallable(const StopAutomationExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopAutomationExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopAutomationExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::StopAutomationExecutionAsync(const StopAutomationExecutionRequest& request, const StopAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopAutomationExecution(request), context);
    } );
}

TerminateSessionOutcome SSMClient::TerminateSession(const TerminateSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TerminateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TerminateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TerminateSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateSessionOutcomeCallable SSMClient::TerminateSessionCallable(const TerminateSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::TerminateSessionAsync(const TerminateSessionRequest& request, const TerminateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TerminateSession(request), context);
    } );
}

UnlabelParameterVersionOutcome SSMClient::UnlabelParameterVersion(const UnlabelParameterVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnlabelParameterVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnlabelParameterVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnlabelParameterVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnlabelParameterVersionOutcomeCallable SSMClient::UnlabelParameterVersionCallable(const UnlabelParameterVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnlabelParameterVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnlabelParameterVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UnlabelParameterVersionAsync(const UnlabelParameterVersionRequest& request, const UnlabelParameterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UnlabelParameterVersion(request), context);
    } );
}

UpdateAssociationOutcome SSMClient::UpdateAssociation(const UpdateAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssociationOutcomeCallable SSMClient::UpdateAssociationCallable(const UpdateAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UpdateAssociationAsync(const UpdateAssociationRequest& request, const UpdateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAssociation(request), context);
    } );
}

UpdateAssociationStatusOutcome SSMClient::UpdateAssociationStatus(const UpdateAssociationStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAssociationStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAssociationStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAssociationStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssociationStatusOutcomeCallable SSMClient::UpdateAssociationStatusCallable(const UpdateAssociationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssociationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssociationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UpdateAssociationStatusAsync(const UpdateAssociationStatusRequest& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAssociationStatus(request), context);
    } );
}

UpdateDocumentOutcome SSMClient::UpdateDocument(const UpdateDocumentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDocumentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDocumentOutcomeCallable SSMClient::UpdateDocumentCallable(const UpdateDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UpdateDocumentAsync(const UpdateDocumentRequest& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDocument(request), context);
    } );
}

UpdateDocumentDefaultVersionOutcome SSMClient::UpdateDocumentDefaultVersion(const UpdateDocumentDefaultVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDocumentDefaultVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDocumentDefaultVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDocumentDefaultVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDocumentDefaultVersionOutcomeCallable SSMClient::UpdateDocumentDefaultVersionCallable(const UpdateDocumentDefaultVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDocumentDefaultVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDocumentDefaultVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UpdateDocumentDefaultVersionAsync(const UpdateDocumentDefaultVersionRequest& request, const UpdateDocumentDefaultVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDocumentDefaultVersion(request), context);
    } );
}

UpdateDocumentMetadataOutcome SSMClient::UpdateDocumentMetadata(const UpdateDocumentMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDocumentMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDocumentMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDocumentMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDocumentMetadataOutcomeCallable SSMClient::UpdateDocumentMetadataCallable(const UpdateDocumentMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDocumentMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDocumentMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UpdateDocumentMetadataAsync(const UpdateDocumentMetadataRequest& request, const UpdateDocumentMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDocumentMetadata(request), context);
    } );
}

UpdateMaintenanceWindowOutcome SSMClient::UpdateMaintenanceWindow(const UpdateMaintenanceWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateMaintenanceWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMaintenanceWindowOutcomeCallable SSMClient::UpdateMaintenanceWindowCallable(const UpdateMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UpdateMaintenanceWindowAsync(const UpdateMaintenanceWindowRequest& request, const UpdateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMaintenanceWindow(request), context);
    } );
}

UpdateMaintenanceWindowTargetOutcome SSMClient::UpdateMaintenanceWindowTarget(const UpdateMaintenanceWindowTargetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMaintenanceWindowTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMaintenanceWindowTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateMaintenanceWindowTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMaintenanceWindowTargetOutcomeCallable SSMClient::UpdateMaintenanceWindowTargetCallable(const UpdateMaintenanceWindowTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMaintenanceWindowTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMaintenanceWindowTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UpdateMaintenanceWindowTargetAsync(const UpdateMaintenanceWindowTargetRequest& request, const UpdateMaintenanceWindowTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMaintenanceWindowTarget(request), context);
    } );
}

UpdateMaintenanceWindowTaskOutcome SSMClient::UpdateMaintenanceWindowTask(const UpdateMaintenanceWindowTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMaintenanceWindowTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMaintenanceWindowTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateMaintenanceWindowTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMaintenanceWindowTaskOutcomeCallable SSMClient::UpdateMaintenanceWindowTaskCallable(const UpdateMaintenanceWindowTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMaintenanceWindowTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMaintenanceWindowTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UpdateMaintenanceWindowTaskAsync(const UpdateMaintenanceWindowTaskRequest& request, const UpdateMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMaintenanceWindowTask(request), context);
    } );
}

UpdateManagedInstanceRoleOutcome SSMClient::UpdateManagedInstanceRole(const UpdateManagedInstanceRoleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateManagedInstanceRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateManagedInstanceRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateManagedInstanceRoleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateManagedInstanceRoleOutcomeCallable SSMClient::UpdateManagedInstanceRoleCallable(const UpdateManagedInstanceRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateManagedInstanceRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateManagedInstanceRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UpdateManagedInstanceRoleAsync(const UpdateManagedInstanceRoleRequest& request, const UpdateManagedInstanceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateManagedInstanceRole(request), context);
    } );
}

UpdateOpsItemOutcome SSMClient::UpdateOpsItem(const UpdateOpsItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateOpsItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateOpsItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateOpsItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateOpsItemOutcomeCallable SSMClient::UpdateOpsItemCallable(const UpdateOpsItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOpsItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOpsItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UpdateOpsItemAsync(const UpdateOpsItemRequest& request, const UpdateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateOpsItem(request), context);
    } );
}

UpdateOpsMetadataOutcome SSMClient::UpdateOpsMetadata(const UpdateOpsMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateOpsMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateOpsMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateOpsMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateOpsMetadataOutcomeCallable SSMClient::UpdateOpsMetadataCallable(const UpdateOpsMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOpsMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOpsMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UpdateOpsMetadataAsync(const UpdateOpsMetadataRequest& request, const UpdateOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateOpsMetadata(request), context);
    } );
}

UpdatePatchBaselineOutcome SSMClient::UpdatePatchBaseline(const UpdatePatchBaselineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePatchBaseline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePatchBaseline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePatchBaselineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePatchBaselineOutcomeCallable SSMClient::UpdatePatchBaselineCallable(const UpdatePatchBaselineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePatchBaselineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePatchBaseline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UpdatePatchBaselineAsync(const UpdatePatchBaselineRequest& request, const UpdatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePatchBaseline(request), context);
    } );
}

UpdateResourceDataSyncOutcome SSMClient::UpdateResourceDataSync(const UpdateResourceDataSyncRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResourceDataSync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResourceDataSync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateResourceDataSyncOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceDataSyncOutcomeCallable SSMClient::UpdateResourceDataSyncCallable(const UpdateResourceDataSyncRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceDataSyncOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResourceDataSync(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UpdateResourceDataSyncAsync(const UpdateResourceDataSyncRequest& request, const UpdateResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResourceDataSync(request), context);
    } );
}

UpdateServiceSettingOutcome SSMClient::UpdateServiceSetting(const UpdateServiceSettingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateServiceSetting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateServiceSetting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateServiceSettingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceSettingOutcomeCallable SSMClient::UpdateServiceSettingCallable(const UpdateServiceSettingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceSettingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceSetting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClient::UpdateServiceSettingAsync(const UpdateServiceSettingRequest& request, const UpdateServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateServiceSetting(request), context);
    } );
}

