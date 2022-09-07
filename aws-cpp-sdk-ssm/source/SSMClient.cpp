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

#include <aws/ssm/SSMClient.h>
#include <aws/ssm/SSMEndpoint.h>
#include <aws/ssm/SSMErrorMarshaller.h>
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

static const char* SERVICE_NAME = "ssm";
static const char* ALLOCATION_TAG = "SSMClient";

SSMClient::SSMClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMClient::SSMClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMClient::SSMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMClient::~SSMClient()
{
}

void SSMClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SSM");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SSMEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SSMClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AddTagsToResourceOutcome SSMClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsToResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsToResourceOutcomeCallable SSMClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientAddTagsToResourceAsyncHelper(SSMClient const * const clientThis, const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTagsToResource(request), context);
}

void SSMClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientAddTagsToResourceAsyncHelper( this, request, handler, context ); } );
}

AssociateOpsItemRelatedItemOutcome SSMClient::AssociateOpsItemRelatedItem(const AssociateOpsItemRelatedItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateOpsItemRelatedItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateOpsItemRelatedItemOutcomeCallable SSMClient::AssociateOpsItemRelatedItemCallable(const AssociateOpsItemRelatedItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateOpsItemRelatedItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateOpsItemRelatedItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientAssociateOpsItemRelatedItemAsyncHelper(SSMClient const * const clientThis, const AssociateOpsItemRelatedItemRequest& request, const AssociateOpsItemRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateOpsItemRelatedItem(request), context);
}

void SSMClient::AssociateOpsItemRelatedItemAsync(const AssociateOpsItemRelatedItemRequest& request, const AssociateOpsItemRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientAssociateOpsItemRelatedItemAsyncHelper( this, request, handler, context ); } );
}

CancelCommandOutcome SSMClient::CancelCommand(const CancelCommandRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelCommandOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelCommandOutcomeCallable SSMClient::CancelCommandCallable(const CancelCommandRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelCommandOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelCommand(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientCancelCommandAsyncHelper(SSMClient const * const clientThis, const CancelCommandRequest& request, const CancelCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelCommand(request), context);
}

void SSMClient::CancelCommandAsync(const CancelCommandRequest& request, const CancelCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientCancelCommandAsyncHelper( this, request, handler, context ); } );
}

CancelMaintenanceWindowExecutionOutcome SSMClient::CancelMaintenanceWindowExecution(const CancelMaintenanceWindowExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelMaintenanceWindowExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelMaintenanceWindowExecutionOutcomeCallable SSMClient::CancelMaintenanceWindowExecutionCallable(const CancelMaintenanceWindowExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelMaintenanceWindowExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelMaintenanceWindowExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientCancelMaintenanceWindowExecutionAsyncHelper(SSMClient const * const clientThis, const CancelMaintenanceWindowExecutionRequest& request, const CancelMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelMaintenanceWindowExecution(request), context);
}

void SSMClient::CancelMaintenanceWindowExecutionAsync(const CancelMaintenanceWindowExecutionRequest& request, const CancelMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientCancelMaintenanceWindowExecutionAsyncHelper( this, request, handler, context ); } );
}

CreateActivationOutcome SSMClient::CreateActivation(const CreateActivationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateActivationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateActivationOutcomeCallable SSMClient::CreateActivationCallable(const CreateActivationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateActivationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateActivation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientCreateActivationAsyncHelper(SSMClient const * const clientThis, const CreateActivationRequest& request, const CreateActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateActivation(request), context);
}

void SSMClient::CreateActivationAsync(const CreateActivationRequest& request, const CreateActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientCreateActivationAsyncHelper( this, request, handler, context ); } );
}

CreateAssociationOutcome SSMClient::CreateAssociation(const CreateAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssociationOutcomeCallable SSMClient::CreateAssociationCallable(const CreateAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientCreateAssociationAsyncHelper(SSMClient const * const clientThis, const CreateAssociationRequest& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAssociation(request), context);
}

void SSMClient::CreateAssociationAsync(const CreateAssociationRequest& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientCreateAssociationAsyncHelper( this, request, handler, context ); } );
}

CreateAssociationBatchOutcome SSMClient::CreateAssociationBatch(const CreateAssociationBatchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAssociationBatchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssociationBatchOutcomeCallable SSMClient::CreateAssociationBatchCallable(const CreateAssociationBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssociationBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssociationBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientCreateAssociationBatchAsyncHelper(SSMClient const * const clientThis, const CreateAssociationBatchRequest& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAssociationBatch(request), context);
}

void SSMClient::CreateAssociationBatchAsync(const CreateAssociationBatchRequest& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientCreateAssociationBatchAsyncHelper( this, request, handler, context ); } );
}

CreateDocumentOutcome SSMClient::CreateDocument(const CreateDocumentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDocumentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDocumentOutcomeCallable SSMClient::CreateDocumentCallable(const CreateDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientCreateDocumentAsyncHelper(SSMClient const * const clientThis, const CreateDocumentRequest& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDocument(request), context);
}

void SSMClient::CreateDocumentAsync(const CreateDocumentRequest& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientCreateDocumentAsyncHelper( this, request, handler, context ); } );
}

CreateMaintenanceWindowOutcome SSMClient::CreateMaintenanceWindow(const CreateMaintenanceWindowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateMaintenanceWindowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMaintenanceWindowOutcomeCallable SSMClient::CreateMaintenanceWindowCallable(const CreateMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientCreateMaintenanceWindowAsyncHelper(SSMClient const * const clientThis, const CreateMaintenanceWindowRequest& request, const CreateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMaintenanceWindow(request), context);
}

void SSMClient::CreateMaintenanceWindowAsync(const CreateMaintenanceWindowRequest& request, const CreateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientCreateMaintenanceWindowAsyncHelper( this, request, handler, context ); } );
}

CreateOpsItemOutcome SSMClient::CreateOpsItem(const CreateOpsItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateOpsItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOpsItemOutcomeCallable SSMClient::CreateOpsItemCallable(const CreateOpsItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOpsItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOpsItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientCreateOpsItemAsyncHelper(SSMClient const * const clientThis, const CreateOpsItemRequest& request, const CreateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateOpsItem(request), context);
}

void SSMClient::CreateOpsItemAsync(const CreateOpsItemRequest& request, const CreateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientCreateOpsItemAsyncHelper( this, request, handler, context ); } );
}

CreateOpsMetadataOutcome SSMClient::CreateOpsMetadata(const CreateOpsMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateOpsMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOpsMetadataOutcomeCallable SSMClient::CreateOpsMetadataCallable(const CreateOpsMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOpsMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOpsMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientCreateOpsMetadataAsyncHelper(SSMClient const * const clientThis, const CreateOpsMetadataRequest& request, const CreateOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateOpsMetadata(request), context);
}

void SSMClient::CreateOpsMetadataAsync(const CreateOpsMetadataRequest& request, const CreateOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientCreateOpsMetadataAsyncHelper( this, request, handler, context ); } );
}

CreatePatchBaselineOutcome SSMClient::CreatePatchBaseline(const CreatePatchBaselineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePatchBaselineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePatchBaselineOutcomeCallable SSMClient::CreatePatchBaselineCallable(const CreatePatchBaselineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePatchBaselineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePatchBaseline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientCreatePatchBaselineAsyncHelper(SSMClient const * const clientThis, const CreatePatchBaselineRequest& request, const CreatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePatchBaseline(request), context);
}

void SSMClient::CreatePatchBaselineAsync(const CreatePatchBaselineRequest& request, const CreatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientCreatePatchBaselineAsyncHelper( this, request, handler, context ); } );
}

CreateResourceDataSyncOutcome SSMClient::CreateResourceDataSync(const CreateResourceDataSyncRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateResourceDataSyncOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceDataSyncOutcomeCallable SSMClient::CreateResourceDataSyncCallable(const CreateResourceDataSyncRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceDataSyncOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResourceDataSync(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientCreateResourceDataSyncAsyncHelper(SSMClient const * const clientThis, const CreateResourceDataSyncRequest& request, const CreateResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateResourceDataSync(request), context);
}

void SSMClient::CreateResourceDataSyncAsync(const CreateResourceDataSyncRequest& request, const CreateResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientCreateResourceDataSyncAsyncHelper( this, request, handler, context ); } );
}

DeleteActivationOutcome SSMClient::DeleteActivation(const DeleteActivationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteActivationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteActivationOutcomeCallable SSMClient::DeleteActivationCallable(const DeleteActivationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteActivationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteActivation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDeleteActivationAsyncHelper(SSMClient const * const clientThis, const DeleteActivationRequest& request, const DeleteActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteActivation(request), context);
}

void SSMClient::DeleteActivationAsync(const DeleteActivationRequest& request, const DeleteActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDeleteActivationAsyncHelper( this, request, handler, context ); } );
}

DeleteAssociationOutcome SSMClient::DeleteAssociation(const DeleteAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssociationOutcomeCallable SSMClient::DeleteAssociationCallable(const DeleteAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDeleteAssociationAsyncHelper(SSMClient const * const clientThis, const DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAssociation(request), context);
}

void SSMClient::DeleteAssociationAsync(const DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDeleteAssociationAsyncHelper( this, request, handler, context ); } );
}

DeleteDocumentOutcome SSMClient::DeleteDocument(const DeleteDocumentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDocumentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDocumentOutcomeCallable SSMClient::DeleteDocumentCallable(const DeleteDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDeleteDocumentAsyncHelper(SSMClient const * const clientThis, const DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDocument(request), context);
}

void SSMClient::DeleteDocumentAsync(const DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDeleteDocumentAsyncHelper( this, request, handler, context ); } );
}

DeleteInventoryOutcome SSMClient::DeleteInventory(const DeleteInventoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteInventoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInventoryOutcomeCallable SSMClient::DeleteInventoryCallable(const DeleteInventoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInventoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInventory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDeleteInventoryAsyncHelper(SSMClient const * const clientThis, const DeleteInventoryRequest& request, const DeleteInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInventory(request), context);
}

void SSMClient::DeleteInventoryAsync(const DeleteInventoryRequest& request, const DeleteInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDeleteInventoryAsyncHelper( this, request, handler, context ); } );
}

DeleteMaintenanceWindowOutcome SSMClient::DeleteMaintenanceWindow(const DeleteMaintenanceWindowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMaintenanceWindowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMaintenanceWindowOutcomeCallable SSMClient::DeleteMaintenanceWindowCallable(const DeleteMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDeleteMaintenanceWindowAsyncHelper(SSMClient const * const clientThis, const DeleteMaintenanceWindowRequest& request, const DeleteMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMaintenanceWindow(request), context);
}

void SSMClient::DeleteMaintenanceWindowAsync(const DeleteMaintenanceWindowRequest& request, const DeleteMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDeleteMaintenanceWindowAsyncHelper( this, request, handler, context ); } );
}

DeleteOpsMetadataOutcome SSMClient::DeleteOpsMetadata(const DeleteOpsMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteOpsMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteOpsMetadataOutcomeCallable SSMClient::DeleteOpsMetadataCallable(const DeleteOpsMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOpsMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOpsMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDeleteOpsMetadataAsyncHelper(SSMClient const * const clientThis, const DeleteOpsMetadataRequest& request, const DeleteOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteOpsMetadata(request), context);
}

void SSMClient::DeleteOpsMetadataAsync(const DeleteOpsMetadataRequest& request, const DeleteOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDeleteOpsMetadataAsyncHelper( this, request, handler, context ); } );
}

DeleteParameterOutcome SSMClient::DeleteParameter(const DeleteParameterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteParameterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteParameterOutcomeCallable SSMClient::DeleteParameterCallable(const DeleteParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDeleteParameterAsyncHelper(SSMClient const * const clientThis, const DeleteParameterRequest& request, const DeleteParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteParameter(request), context);
}

void SSMClient::DeleteParameterAsync(const DeleteParameterRequest& request, const DeleteParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDeleteParameterAsyncHelper( this, request, handler, context ); } );
}

DeleteParametersOutcome SSMClient::DeleteParameters(const DeleteParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteParametersOutcomeCallable SSMClient::DeleteParametersCallable(const DeleteParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDeleteParametersAsyncHelper(SSMClient const * const clientThis, const DeleteParametersRequest& request, const DeleteParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteParameters(request), context);
}

void SSMClient::DeleteParametersAsync(const DeleteParametersRequest& request, const DeleteParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDeleteParametersAsyncHelper( this, request, handler, context ); } );
}

DeletePatchBaselineOutcome SSMClient::DeletePatchBaseline(const DeletePatchBaselineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePatchBaselineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePatchBaselineOutcomeCallable SSMClient::DeletePatchBaselineCallable(const DeletePatchBaselineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePatchBaselineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePatchBaseline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDeletePatchBaselineAsyncHelper(SSMClient const * const clientThis, const DeletePatchBaselineRequest& request, const DeletePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePatchBaseline(request), context);
}

void SSMClient::DeletePatchBaselineAsync(const DeletePatchBaselineRequest& request, const DeletePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDeletePatchBaselineAsyncHelper( this, request, handler, context ); } );
}

DeleteResourceDataSyncOutcome SSMClient::DeleteResourceDataSync(const DeleteResourceDataSyncRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourceDataSyncOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceDataSyncOutcomeCallable SSMClient::DeleteResourceDataSyncCallable(const DeleteResourceDataSyncRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceDataSyncOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourceDataSync(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDeleteResourceDataSyncAsyncHelper(SSMClient const * const clientThis, const DeleteResourceDataSyncRequest& request, const DeleteResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResourceDataSync(request), context);
}

void SSMClient::DeleteResourceDataSyncAsync(const DeleteResourceDataSyncRequest& request, const DeleteResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDeleteResourceDataSyncAsyncHelper( this, request, handler, context ); } );
}

DeregisterManagedInstanceOutcome SSMClient::DeregisterManagedInstance(const DeregisterManagedInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterManagedInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterManagedInstanceOutcomeCallable SSMClient::DeregisterManagedInstanceCallable(const DeregisterManagedInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterManagedInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterManagedInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDeregisterManagedInstanceAsyncHelper(SSMClient const * const clientThis, const DeregisterManagedInstanceRequest& request, const DeregisterManagedInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterManagedInstance(request), context);
}

void SSMClient::DeregisterManagedInstanceAsync(const DeregisterManagedInstanceRequest& request, const DeregisterManagedInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDeregisterManagedInstanceAsyncHelper( this, request, handler, context ); } );
}

DeregisterPatchBaselineForPatchGroupOutcome SSMClient::DeregisterPatchBaselineForPatchGroup(const DeregisterPatchBaselineForPatchGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterPatchBaselineForPatchGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterPatchBaselineForPatchGroupOutcomeCallable SSMClient::DeregisterPatchBaselineForPatchGroupCallable(const DeregisterPatchBaselineForPatchGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterPatchBaselineForPatchGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterPatchBaselineForPatchGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDeregisterPatchBaselineForPatchGroupAsyncHelper(SSMClient const * const clientThis, const DeregisterPatchBaselineForPatchGroupRequest& request, const DeregisterPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterPatchBaselineForPatchGroup(request), context);
}

void SSMClient::DeregisterPatchBaselineForPatchGroupAsync(const DeregisterPatchBaselineForPatchGroupRequest& request, const DeregisterPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDeregisterPatchBaselineForPatchGroupAsyncHelper( this, request, handler, context ); } );
}

DeregisterTargetFromMaintenanceWindowOutcome SSMClient::DeregisterTargetFromMaintenanceWindow(const DeregisterTargetFromMaintenanceWindowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterTargetFromMaintenanceWindowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterTargetFromMaintenanceWindowOutcomeCallable SSMClient::DeregisterTargetFromMaintenanceWindowCallable(const DeregisterTargetFromMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterTargetFromMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterTargetFromMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDeregisterTargetFromMaintenanceWindowAsyncHelper(SSMClient const * const clientThis, const DeregisterTargetFromMaintenanceWindowRequest& request, const DeregisterTargetFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterTargetFromMaintenanceWindow(request), context);
}

void SSMClient::DeregisterTargetFromMaintenanceWindowAsync(const DeregisterTargetFromMaintenanceWindowRequest& request, const DeregisterTargetFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDeregisterTargetFromMaintenanceWindowAsyncHelper( this, request, handler, context ); } );
}

DeregisterTaskFromMaintenanceWindowOutcome SSMClient::DeregisterTaskFromMaintenanceWindow(const DeregisterTaskFromMaintenanceWindowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterTaskFromMaintenanceWindowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterTaskFromMaintenanceWindowOutcomeCallable SSMClient::DeregisterTaskFromMaintenanceWindowCallable(const DeregisterTaskFromMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterTaskFromMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterTaskFromMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDeregisterTaskFromMaintenanceWindowAsyncHelper(SSMClient const * const clientThis, const DeregisterTaskFromMaintenanceWindowRequest& request, const DeregisterTaskFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterTaskFromMaintenanceWindow(request), context);
}

void SSMClient::DeregisterTaskFromMaintenanceWindowAsync(const DeregisterTaskFromMaintenanceWindowRequest& request, const DeregisterTaskFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDeregisterTaskFromMaintenanceWindowAsyncHelper( this, request, handler, context ); } );
}

DescribeActivationsOutcome SSMClient::DescribeActivations(const DescribeActivationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeActivationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeActivationsOutcomeCallable SSMClient::DescribeActivationsCallable(const DescribeActivationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeActivationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeActivations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeActivationsAsyncHelper(SSMClient const * const clientThis, const DescribeActivationsRequest& request, const DescribeActivationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeActivations(request), context);
}

void SSMClient::DescribeActivationsAsync(const DescribeActivationsRequest& request, const DescribeActivationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeActivationsAsyncHelper( this, request, handler, context ); } );
}

DescribeAssociationOutcome SSMClient::DescribeAssociation(const DescribeAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAssociationOutcomeCallable SSMClient::DescribeAssociationCallable(const DescribeAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeAssociationAsyncHelper(SSMClient const * const clientThis, const DescribeAssociationRequest& request, const DescribeAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAssociation(request), context);
}

void SSMClient::DescribeAssociationAsync(const DescribeAssociationRequest& request, const DescribeAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeAssociationAsyncHelper( this, request, handler, context ); } );
}

DescribeAssociationExecutionTargetsOutcome SSMClient::DescribeAssociationExecutionTargets(const DescribeAssociationExecutionTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAssociationExecutionTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAssociationExecutionTargetsOutcomeCallable SSMClient::DescribeAssociationExecutionTargetsCallable(const DescribeAssociationExecutionTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAssociationExecutionTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAssociationExecutionTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeAssociationExecutionTargetsAsyncHelper(SSMClient const * const clientThis, const DescribeAssociationExecutionTargetsRequest& request, const DescribeAssociationExecutionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAssociationExecutionTargets(request), context);
}

void SSMClient::DescribeAssociationExecutionTargetsAsync(const DescribeAssociationExecutionTargetsRequest& request, const DescribeAssociationExecutionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeAssociationExecutionTargetsAsyncHelper( this, request, handler, context ); } );
}

DescribeAssociationExecutionsOutcome SSMClient::DescribeAssociationExecutions(const DescribeAssociationExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAssociationExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAssociationExecutionsOutcomeCallable SSMClient::DescribeAssociationExecutionsCallable(const DescribeAssociationExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAssociationExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAssociationExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeAssociationExecutionsAsyncHelper(SSMClient const * const clientThis, const DescribeAssociationExecutionsRequest& request, const DescribeAssociationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAssociationExecutions(request), context);
}

void SSMClient::DescribeAssociationExecutionsAsync(const DescribeAssociationExecutionsRequest& request, const DescribeAssociationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeAssociationExecutionsAsyncHelper( this, request, handler, context ); } );
}

DescribeAutomationExecutionsOutcome SSMClient::DescribeAutomationExecutions(const DescribeAutomationExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAutomationExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAutomationExecutionsOutcomeCallable SSMClient::DescribeAutomationExecutionsCallable(const DescribeAutomationExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutomationExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutomationExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeAutomationExecutionsAsyncHelper(SSMClient const * const clientThis, const DescribeAutomationExecutionsRequest& request, const DescribeAutomationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAutomationExecutions(request), context);
}

void SSMClient::DescribeAutomationExecutionsAsync(const DescribeAutomationExecutionsRequest& request, const DescribeAutomationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeAutomationExecutionsAsyncHelper( this, request, handler, context ); } );
}

DescribeAutomationStepExecutionsOutcome SSMClient::DescribeAutomationStepExecutions(const DescribeAutomationStepExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAutomationStepExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAutomationStepExecutionsOutcomeCallable SSMClient::DescribeAutomationStepExecutionsCallable(const DescribeAutomationStepExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutomationStepExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutomationStepExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeAutomationStepExecutionsAsyncHelper(SSMClient const * const clientThis, const DescribeAutomationStepExecutionsRequest& request, const DescribeAutomationStepExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAutomationStepExecutions(request), context);
}

void SSMClient::DescribeAutomationStepExecutionsAsync(const DescribeAutomationStepExecutionsRequest& request, const DescribeAutomationStepExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeAutomationStepExecutionsAsyncHelper( this, request, handler, context ); } );
}

DescribeAvailablePatchesOutcome SSMClient::DescribeAvailablePatches(const DescribeAvailablePatchesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAvailablePatchesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAvailablePatchesOutcomeCallable SSMClient::DescribeAvailablePatchesCallable(const DescribeAvailablePatchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAvailablePatchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAvailablePatches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeAvailablePatchesAsyncHelper(SSMClient const * const clientThis, const DescribeAvailablePatchesRequest& request, const DescribeAvailablePatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAvailablePatches(request), context);
}

void SSMClient::DescribeAvailablePatchesAsync(const DescribeAvailablePatchesRequest& request, const DescribeAvailablePatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeAvailablePatchesAsyncHelper( this, request, handler, context ); } );
}

DescribeDocumentOutcome SSMClient::DescribeDocument(const DescribeDocumentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDocumentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDocumentOutcomeCallable SSMClient::DescribeDocumentCallable(const DescribeDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeDocumentAsyncHelper(SSMClient const * const clientThis, const DescribeDocumentRequest& request, const DescribeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDocument(request), context);
}

void SSMClient::DescribeDocumentAsync(const DescribeDocumentRequest& request, const DescribeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeDocumentAsyncHelper( this, request, handler, context ); } );
}

DescribeDocumentPermissionOutcome SSMClient::DescribeDocumentPermission(const DescribeDocumentPermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDocumentPermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDocumentPermissionOutcomeCallable SSMClient::DescribeDocumentPermissionCallable(const DescribeDocumentPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDocumentPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDocumentPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeDocumentPermissionAsyncHelper(SSMClient const * const clientThis, const DescribeDocumentPermissionRequest& request, const DescribeDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDocumentPermission(request), context);
}

void SSMClient::DescribeDocumentPermissionAsync(const DescribeDocumentPermissionRequest& request, const DescribeDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeDocumentPermissionAsyncHelper( this, request, handler, context ); } );
}

DescribeEffectiveInstanceAssociationsOutcome SSMClient::DescribeEffectiveInstanceAssociations(const DescribeEffectiveInstanceAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEffectiveInstanceAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEffectiveInstanceAssociationsOutcomeCallable SSMClient::DescribeEffectiveInstanceAssociationsCallable(const DescribeEffectiveInstanceAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEffectiveInstanceAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEffectiveInstanceAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeEffectiveInstanceAssociationsAsyncHelper(SSMClient const * const clientThis, const DescribeEffectiveInstanceAssociationsRequest& request, const DescribeEffectiveInstanceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEffectiveInstanceAssociations(request), context);
}

void SSMClient::DescribeEffectiveInstanceAssociationsAsync(const DescribeEffectiveInstanceAssociationsRequest& request, const DescribeEffectiveInstanceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeEffectiveInstanceAssociationsAsyncHelper( this, request, handler, context ); } );
}

DescribeEffectivePatchesForPatchBaselineOutcome SSMClient::DescribeEffectivePatchesForPatchBaseline(const DescribeEffectivePatchesForPatchBaselineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEffectivePatchesForPatchBaselineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEffectivePatchesForPatchBaselineOutcomeCallable SSMClient::DescribeEffectivePatchesForPatchBaselineCallable(const DescribeEffectivePatchesForPatchBaselineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEffectivePatchesForPatchBaselineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEffectivePatchesForPatchBaseline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeEffectivePatchesForPatchBaselineAsyncHelper(SSMClient const * const clientThis, const DescribeEffectivePatchesForPatchBaselineRequest& request, const DescribeEffectivePatchesForPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEffectivePatchesForPatchBaseline(request), context);
}

void SSMClient::DescribeEffectivePatchesForPatchBaselineAsync(const DescribeEffectivePatchesForPatchBaselineRequest& request, const DescribeEffectivePatchesForPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeEffectivePatchesForPatchBaselineAsyncHelper( this, request, handler, context ); } );
}

DescribeInstanceAssociationsStatusOutcome SSMClient::DescribeInstanceAssociationsStatus(const DescribeInstanceAssociationsStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInstanceAssociationsStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceAssociationsStatusOutcomeCallable SSMClient::DescribeInstanceAssociationsStatusCallable(const DescribeInstanceAssociationsStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceAssociationsStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceAssociationsStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeInstanceAssociationsStatusAsyncHelper(SSMClient const * const clientThis, const DescribeInstanceAssociationsStatusRequest& request, const DescribeInstanceAssociationsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstanceAssociationsStatus(request), context);
}

void SSMClient::DescribeInstanceAssociationsStatusAsync(const DescribeInstanceAssociationsStatusRequest& request, const DescribeInstanceAssociationsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeInstanceAssociationsStatusAsyncHelper( this, request, handler, context ); } );
}

DescribeInstanceInformationOutcome SSMClient::DescribeInstanceInformation(const DescribeInstanceInformationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInstanceInformationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceInformationOutcomeCallable SSMClient::DescribeInstanceInformationCallable(const DescribeInstanceInformationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceInformationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceInformation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeInstanceInformationAsyncHelper(SSMClient const * const clientThis, const DescribeInstanceInformationRequest& request, const DescribeInstanceInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstanceInformation(request), context);
}

void SSMClient::DescribeInstanceInformationAsync(const DescribeInstanceInformationRequest& request, const DescribeInstanceInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeInstanceInformationAsyncHelper( this, request, handler, context ); } );
}

DescribeInstancePatchStatesOutcome SSMClient::DescribeInstancePatchStates(const DescribeInstancePatchStatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInstancePatchStatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstancePatchStatesOutcomeCallable SSMClient::DescribeInstancePatchStatesCallable(const DescribeInstancePatchStatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancePatchStatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstancePatchStates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeInstancePatchStatesAsyncHelper(SSMClient const * const clientThis, const DescribeInstancePatchStatesRequest& request, const DescribeInstancePatchStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstancePatchStates(request), context);
}

void SSMClient::DescribeInstancePatchStatesAsync(const DescribeInstancePatchStatesRequest& request, const DescribeInstancePatchStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeInstancePatchStatesAsyncHelper( this, request, handler, context ); } );
}

DescribeInstancePatchStatesForPatchGroupOutcome SSMClient::DescribeInstancePatchStatesForPatchGroup(const DescribeInstancePatchStatesForPatchGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInstancePatchStatesForPatchGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstancePatchStatesForPatchGroupOutcomeCallable SSMClient::DescribeInstancePatchStatesForPatchGroupCallable(const DescribeInstancePatchStatesForPatchGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancePatchStatesForPatchGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstancePatchStatesForPatchGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeInstancePatchStatesForPatchGroupAsyncHelper(SSMClient const * const clientThis, const DescribeInstancePatchStatesForPatchGroupRequest& request, const DescribeInstancePatchStatesForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstancePatchStatesForPatchGroup(request), context);
}

void SSMClient::DescribeInstancePatchStatesForPatchGroupAsync(const DescribeInstancePatchStatesForPatchGroupRequest& request, const DescribeInstancePatchStatesForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeInstancePatchStatesForPatchGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeInstancePatchesOutcome SSMClient::DescribeInstancePatches(const DescribeInstancePatchesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInstancePatchesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstancePatchesOutcomeCallable SSMClient::DescribeInstancePatchesCallable(const DescribeInstancePatchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancePatchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstancePatches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeInstancePatchesAsyncHelper(SSMClient const * const clientThis, const DescribeInstancePatchesRequest& request, const DescribeInstancePatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstancePatches(request), context);
}

void SSMClient::DescribeInstancePatchesAsync(const DescribeInstancePatchesRequest& request, const DescribeInstancePatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeInstancePatchesAsyncHelper( this, request, handler, context ); } );
}

DescribeInventoryDeletionsOutcome SSMClient::DescribeInventoryDeletions(const DescribeInventoryDeletionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInventoryDeletionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInventoryDeletionsOutcomeCallable SSMClient::DescribeInventoryDeletionsCallable(const DescribeInventoryDeletionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInventoryDeletionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInventoryDeletions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeInventoryDeletionsAsyncHelper(SSMClient const * const clientThis, const DescribeInventoryDeletionsRequest& request, const DescribeInventoryDeletionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInventoryDeletions(request), context);
}

void SSMClient::DescribeInventoryDeletionsAsync(const DescribeInventoryDeletionsRequest& request, const DescribeInventoryDeletionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeInventoryDeletionsAsyncHelper( this, request, handler, context ); } );
}

DescribeMaintenanceWindowExecutionTaskInvocationsOutcome SSMClient::DescribeMaintenanceWindowExecutionTaskInvocations(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMaintenanceWindowExecutionTaskInvocationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowExecutionTaskInvocationsOutcomeCallable SSMClient::DescribeMaintenanceWindowExecutionTaskInvocationsCallable(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowExecutionTaskInvocationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindowExecutionTaskInvocations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeMaintenanceWindowExecutionTaskInvocationsAsyncHelper(SSMClient const * const clientThis, const DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request, const DescribeMaintenanceWindowExecutionTaskInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMaintenanceWindowExecutionTaskInvocations(request), context);
}

void SSMClient::DescribeMaintenanceWindowExecutionTaskInvocationsAsync(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request, const DescribeMaintenanceWindowExecutionTaskInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeMaintenanceWindowExecutionTaskInvocationsAsyncHelper( this, request, handler, context ); } );
}

DescribeMaintenanceWindowExecutionTasksOutcome SSMClient::DescribeMaintenanceWindowExecutionTasks(const DescribeMaintenanceWindowExecutionTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMaintenanceWindowExecutionTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowExecutionTasksOutcomeCallable SSMClient::DescribeMaintenanceWindowExecutionTasksCallable(const DescribeMaintenanceWindowExecutionTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowExecutionTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindowExecutionTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeMaintenanceWindowExecutionTasksAsyncHelper(SSMClient const * const clientThis, const DescribeMaintenanceWindowExecutionTasksRequest& request, const DescribeMaintenanceWindowExecutionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMaintenanceWindowExecutionTasks(request), context);
}

void SSMClient::DescribeMaintenanceWindowExecutionTasksAsync(const DescribeMaintenanceWindowExecutionTasksRequest& request, const DescribeMaintenanceWindowExecutionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeMaintenanceWindowExecutionTasksAsyncHelper( this, request, handler, context ); } );
}

DescribeMaintenanceWindowExecutionsOutcome SSMClient::DescribeMaintenanceWindowExecutions(const DescribeMaintenanceWindowExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMaintenanceWindowExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowExecutionsOutcomeCallable SSMClient::DescribeMaintenanceWindowExecutionsCallable(const DescribeMaintenanceWindowExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindowExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeMaintenanceWindowExecutionsAsyncHelper(SSMClient const * const clientThis, const DescribeMaintenanceWindowExecutionsRequest& request, const DescribeMaintenanceWindowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMaintenanceWindowExecutions(request), context);
}

void SSMClient::DescribeMaintenanceWindowExecutionsAsync(const DescribeMaintenanceWindowExecutionsRequest& request, const DescribeMaintenanceWindowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeMaintenanceWindowExecutionsAsyncHelper( this, request, handler, context ); } );
}

DescribeMaintenanceWindowScheduleOutcome SSMClient::DescribeMaintenanceWindowSchedule(const DescribeMaintenanceWindowScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMaintenanceWindowScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowScheduleOutcomeCallable SSMClient::DescribeMaintenanceWindowScheduleCallable(const DescribeMaintenanceWindowScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindowSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeMaintenanceWindowScheduleAsyncHelper(SSMClient const * const clientThis, const DescribeMaintenanceWindowScheduleRequest& request, const DescribeMaintenanceWindowScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMaintenanceWindowSchedule(request), context);
}

void SSMClient::DescribeMaintenanceWindowScheduleAsync(const DescribeMaintenanceWindowScheduleRequest& request, const DescribeMaintenanceWindowScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeMaintenanceWindowScheduleAsyncHelper( this, request, handler, context ); } );
}

DescribeMaintenanceWindowTargetsOutcome SSMClient::DescribeMaintenanceWindowTargets(const DescribeMaintenanceWindowTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMaintenanceWindowTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowTargetsOutcomeCallable SSMClient::DescribeMaintenanceWindowTargetsCallable(const DescribeMaintenanceWindowTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindowTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeMaintenanceWindowTargetsAsyncHelper(SSMClient const * const clientThis, const DescribeMaintenanceWindowTargetsRequest& request, const DescribeMaintenanceWindowTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMaintenanceWindowTargets(request), context);
}

void SSMClient::DescribeMaintenanceWindowTargetsAsync(const DescribeMaintenanceWindowTargetsRequest& request, const DescribeMaintenanceWindowTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeMaintenanceWindowTargetsAsyncHelper( this, request, handler, context ); } );
}

DescribeMaintenanceWindowTasksOutcome SSMClient::DescribeMaintenanceWindowTasks(const DescribeMaintenanceWindowTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMaintenanceWindowTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowTasksOutcomeCallable SSMClient::DescribeMaintenanceWindowTasksCallable(const DescribeMaintenanceWindowTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindowTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeMaintenanceWindowTasksAsyncHelper(SSMClient const * const clientThis, const DescribeMaintenanceWindowTasksRequest& request, const DescribeMaintenanceWindowTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMaintenanceWindowTasks(request), context);
}

void SSMClient::DescribeMaintenanceWindowTasksAsync(const DescribeMaintenanceWindowTasksRequest& request, const DescribeMaintenanceWindowTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeMaintenanceWindowTasksAsyncHelper( this, request, handler, context ); } );
}

DescribeMaintenanceWindowsOutcome SSMClient::DescribeMaintenanceWindows(const DescribeMaintenanceWindowsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMaintenanceWindowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowsOutcomeCallable SSMClient::DescribeMaintenanceWindowsCallable(const DescribeMaintenanceWindowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeMaintenanceWindowsAsyncHelper(SSMClient const * const clientThis, const DescribeMaintenanceWindowsRequest& request, const DescribeMaintenanceWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMaintenanceWindows(request), context);
}

void SSMClient::DescribeMaintenanceWindowsAsync(const DescribeMaintenanceWindowsRequest& request, const DescribeMaintenanceWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeMaintenanceWindowsAsyncHelper( this, request, handler, context ); } );
}

DescribeMaintenanceWindowsForTargetOutcome SSMClient::DescribeMaintenanceWindowsForTarget(const DescribeMaintenanceWindowsForTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMaintenanceWindowsForTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceWindowsForTargetOutcomeCallable SSMClient::DescribeMaintenanceWindowsForTargetCallable(const DescribeMaintenanceWindowsForTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceWindowsForTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceWindowsForTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeMaintenanceWindowsForTargetAsyncHelper(SSMClient const * const clientThis, const DescribeMaintenanceWindowsForTargetRequest& request, const DescribeMaintenanceWindowsForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMaintenanceWindowsForTarget(request), context);
}

void SSMClient::DescribeMaintenanceWindowsForTargetAsync(const DescribeMaintenanceWindowsForTargetRequest& request, const DescribeMaintenanceWindowsForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeMaintenanceWindowsForTargetAsyncHelper( this, request, handler, context ); } );
}

DescribeOpsItemsOutcome SSMClient::DescribeOpsItems(const DescribeOpsItemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOpsItemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOpsItemsOutcomeCallable SSMClient::DescribeOpsItemsCallable(const DescribeOpsItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOpsItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOpsItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeOpsItemsAsyncHelper(SSMClient const * const clientThis, const DescribeOpsItemsRequest& request, const DescribeOpsItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOpsItems(request), context);
}

void SSMClient::DescribeOpsItemsAsync(const DescribeOpsItemsRequest& request, const DescribeOpsItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeOpsItemsAsyncHelper( this, request, handler, context ); } );
}

DescribeParametersOutcome SSMClient::DescribeParameters(const DescribeParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeParametersOutcomeCallable SSMClient::DescribeParametersCallable(const DescribeParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeParametersAsyncHelper(SSMClient const * const clientThis, const DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeParameters(request), context);
}

void SSMClient::DescribeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeParametersAsyncHelper( this, request, handler, context ); } );
}

DescribePatchBaselinesOutcome SSMClient::DescribePatchBaselines(const DescribePatchBaselinesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePatchBaselinesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePatchBaselinesOutcomeCallable SSMClient::DescribePatchBaselinesCallable(const DescribePatchBaselinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePatchBaselinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePatchBaselines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribePatchBaselinesAsyncHelper(SSMClient const * const clientThis, const DescribePatchBaselinesRequest& request, const DescribePatchBaselinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePatchBaselines(request), context);
}

void SSMClient::DescribePatchBaselinesAsync(const DescribePatchBaselinesRequest& request, const DescribePatchBaselinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribePatchBaselinesAsyncHelper( this, request, handler, context ); } );
}

DescribePatchGroupStateOutcome SSMClient::DescribePatchGroupState(const DescribePatchGroupStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePatchGroupStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePatchGroupStateOutcomeCallable SSMClient::DescribePatchGroupStateCallable(const DescribePatchGroupStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePatchGroupStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePatchGroupState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribePatchGroupStateAsyncHelper(SSMClient const * const clientThis, const DescribePatchGroupStateRequest& request, const DescribePatchGroupStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePatchGroupState(request), context);
}

void SSMClient::DescribePatchGroupStateAsync(const DescribePatchGroupStateRequest& request, const DescribePatchGroupStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribePatchGroupStateAsyncHelper( this, request, handler, context ); } );
}

DescribePatchGroupsOutcome SSMClient::DescribePatchGroups(const DescribePatchGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePatchGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePatchGroupsOutcomeCallable SSMClient::DescribePatchGroupsCallable(const DescribePatchGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePatchGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePatchGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribePatchGroupsAsyncHelper(SSMClient const * const clientThis, const DescribePatchGroupsRequest& request, const DescribePatchGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePatchGroups(request), context);
}

void SSMClient::DescribePatchGroupsAsync(const DescribePatchGroupsRequest& request, const DescribePatchGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribePatchGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribePatchPropertiesOutcome SSMClient::DescribePatchProperties(const DescribePatchPropertiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePatchPropertiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePatchPropertiesOutcomeCallable SSMClient::DescribePatchPropertiesCallable(const DescribePatchPropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePatchPropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePatchProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribePatchPropertiesAsyncHelper(SSMClient const * const clientThis, const DescribePatchPropertiesRequest& request, const DescribePatchPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePatchProperties(request), context);
}

void SSMClient::DescribePatchPropertiesAsync(const DescribePatchPropertiesRequest& request, const DescribePatchPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribePatchPropertiesAsyncHelper( this, request, handler, context ); } );
}

DescribeSessionsOutcome SSMClient::DescribeSessions(const DescribeSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSessionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSessionsOutcomeCallable SSMClient::DescribeSessionsCallable(const DescribeSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDescribeSessionsAsyncHelper(SSMClient const * const clientThis, const DescribeSessionsRequest& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSessions(request), context);
}

void SSMClient::DescribeSessionsAsync(const DescribeSessionsRequest& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDescribeSessionsAsyncHelper( this, request, handler, context ); } );
}

DisassociateOpsItemRelatedItemOutcome SSMClient::DisassociateOpsItemRelatedItem(const DisassociateOpsItemRelatedItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateOpsItemRelatedItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateOpsItemRelatedItemOutcomeCallable SSMClient::DisassociateOpsItemRelatedItemCallable(const DisassociateOpsItemRelatedItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateOpsItemRelatedItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateOpsItemRelatedItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientDisassociateOpsItemRelatedItemAsyncHelper(SSMClient const * const clientThis, const DisassociateOpsItemRelatedItemRequest& request, const DisassociateOpsItemRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateOpsItemRelatedItem(request), context);
}

void SSMClient::DisassociateOpsItemRelatedItemAsync(const DisassociateOpsItemRelatedItemRequest& request, const DisassociateOpsItemRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientDisassociateOpsItemRelatedItemAsyncHelper( this, request, handler, context ); } );
}

GetAutomationExecutionOutcome SSMClient::GetAutomationExecution(const GetAutomationExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAutomationExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAutomationExecutionOutcomeCallable SSMClient::GetAutomationExecutionCallable(const GetAutomationExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAutomationExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAutomationExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetAutomationExecutionAsyncHelper(SSMClient const * const clientThis, const GetAutomationExecutionRequest& request, const GetAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAutomationExecution(request), context);
}

void SSMClient::GetAutomationExecutionAsync(const GetAutomationExecutionRequest& request, const GetAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetAutomationExecutionAsyncHelper( this, request, handler, context ); } );
}

GetCalendarStateOutcome SSMClient::GetCalendarState(const GetCalendarStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCalendarStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCalendarStateOutcomeCallable SSMClient::GetCalendarStateCallable(const GetCalendarStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCalendarStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCalendarState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetCalendarStateAsyncHelper(SSMClient const * const clientThis, const GetCalendarStateRequest& request, const GetCalendarStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCalendarState(request), context);
}

void SSMClient::GetCalendarStateAsync(const GetCalendarStateRequest& request, const GetCalendarStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetCalendarStateAsyncHelper( this, request, handler, context ); } );
}

GetCommandInvocationOutcome SSMClient::GetCommandInvocation(const GetCommandInvocationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCommandInvocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommandInvocationOutcomeCallable SSMClient::GetCommandInvocationCallable(const GetCommandInvocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCommandInvocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCommandInvocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetCommandInvocationAsyncHelper(SSMClient const * const clientThis, const GetCommandInvocationRequest& request, const GetCommandInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCommandInvocation(request), context);
}

void SSMClient::GetCommandInvocationAsync(const GetCommandInvocationRequest& request, const GetCommandInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetCommandInvocationAsyncHelper( this, request, handler, context ); } );
}

GetConnectionStatusOutcome SSMClient::GetConnectionStatus(const GetConnectionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetConnectionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetConnectionStatusOutcomeCallable SSMClient::GetConnectionStatusCallable(const GetConnectionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnectionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetConnectionStatusAsyncHelper(SSMClient const * const clientThis, const GetConnectionStatusRequest& request, const GetConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConnectionStatus(request), context);
}

void SSMClient::GetConnectionStatusAsync(const GetConnectionStatusRequest& request, const GetConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetConnectionStatusAsyncHelper( this, request, handler, context ); } );
}

GetDefaultPatchBaselineOutcome SSMClient::GetDefaultPatchBaseline(const GetDefaultPatchBaselineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDefaultPatchBaselineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDefaultPatchBaselineOutcomeCallable SSMClient::GetDefaultPatchBaselineCallable(const GetDefaultPatchBaselineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDefaultPatchBaselineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDefaultPatchBaseline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetDefaultPatchBaselineAsyncHelper(SSMClient const * const clientThis, const GetDefaultPatchBaselineRequest& request, const GetDefaultPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDefaultPatchBaseline(request), context);
}

void SSMClient::GetDefaultPatchBaselineAsync(const GetDefaultPatchBaselineRequest& request, const GetDefaultPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetDefaultPatchBaselineAsyncHelper( this, request, handler, context ); } );
}

GetDeployablePatchSnapshotForInstanceOutcome SSMClient::GetDeployablePatchSnapshotForInstance(const GetDeployablePatchSnapshotForInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDeployablePatchSnapshotForInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeployablePatchSnapshotForInstanceOutcomeCallable SSMClient::GetDeployablePatchSnapshotForInstanceCallable(const GetDeployablePatchSnapshotForInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeployablePatchSnapshotForInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployablePatchSnapshotForInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetDeployablePatchSnapshotForInstanceAsyncHelper(SSMClient const * const clientThis, const GetDeployablePatchSnapshotForInstanceRequest& request, const GetDeployablePatchSnapshotForInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeployablePatchSnapshotForInstance(request), context);
}

void SSMClient::GetDeployablePatchSnapshotForInstanceAsync(const GetDeployablePatchSnapshotForInstanceRequest& request, const GetDeployablePatchSnapshotForInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetDeployablePatchSnapshotForInstanceAsyncHelper( this, request, handler, context ); } );
}

GetDocumentOutcome SSMClient::GetDocument(const GetDocumentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDocumentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDocumentOutcomeCallable SSMClient::GetDocumentCallable(const GetDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetDocumentAsyncHelper(SSMClient const * const clientThis, const GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDocument(request), context);
}

void SSMClient::GetDocumentAsync(const GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetDocumentAsyncHelper( this, request, handler, context ); } );
}

GetInventoryOutcome SSMClient::GetInventory(const GetInventoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetInventoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInventoryOutcomeCallable SSMClient::GetInventoryCallable(const GetInventoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInventoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInventory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetInventoryAsyncHelper(SSMClient const * const clientThis, const GetInventoryRequest& request, const GetInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInventory(request), context);
}

void SSMClient::GetInventoryAsync(const GetInventoryRequest& request, const GetInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetInventoryAsyncHelper( this, request, handler, context ); } );
}

GetInventorySchemaOutcome SSMClient::GetInventorySchema(const GetInventorySchemaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetInventorySchemaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInventorySchemaOutcomeCallable SSMClient::GetInventorySchemaCallable(const GetInventorySchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInventorySchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInventorySchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetInventorySchemaAsyncHelper(SSMClient const * const clientThis, const GetInventorySchemaRequest& request, const GetInventorySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInventorySchema(request), context);
}

void SSMClient::GetInventorySchemaAsync(const GetInventorySchemaRequest& request, const GetInventorySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetInventorySchemaAsyncHelper( this, request, handler, context ); } );
}

GetMaintenanceWindowOutcome SSMClient::GetMaintenanceWindow(const GetMaintenanceWindowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMaintenanceWindowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMaintenanceWindowOutcomeCallable SSMClient::GetMaintenanceWindowCallable(const GetMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetMaintenanceWindowAsyncHelper(SSMClient const * const clientThis, const GetMaintenanceWindowRequest& request, const GetMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMaintenanceWindow(request), context);
}

void SSMClient::GetMaintenanceWindowAsync(const GetMaintenanceWindowRequest& request, const GetMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetMaintenanceWindowAsyncHelper( this, request, handler, context ); } );
}

GetMaintenanceWindowExecutionOutcome SSMClient::GetMaintenanceWindowExecution(const GetMaintenanceWindowExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMaintenanceWindowExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMaintenanceWindowExecutionOutcomeCallable SSMClient::GetMaintenanceWindowExecutionCallable(const GetMaintenanceWindowExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMaintenanceWindowExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMaintenanceWindowExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetMaintenanceWindowExecutionAsyncHelper(SSMClient const * const clientThis, const GetMaintenanceWindowExecutionRequest& request, const GetMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMaintenanceWindowExecution(request), context);
}

void SSMClient::GetMaintenanceWindowExecutionAsync(const GetMaintenanceWindowExecutionRequest& request, const GetMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetMaintenanceWindowExecutionAsyncHelper( this, request, handler, context ); } );
}

GetMaintenanceWindowExecutionTaskOutcome SSMClient::GetMaintenanceWindowExecutionTask(const GetMaintenanceWindowExecutionTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMaintenanceWindowExecutionTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMaintenanceWindowExecutionTaskOutcomeCallable SSMClient::GetMaintenanceWindowExecutionTaskCallable(const GetMaintenanceWindowExecutionTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMaintenanceWindowExecutionTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMaintenanceWindowExecutionTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetMaintenanceWindowExecutionTaskAsyncHelper(SSMClient const * const clientThis, const GetMaintenanceWindowExecutionTaskRequest& request, const GetMaintenanceWindowExecutionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMaintenanceWindowExecutionTask(request), context);
}

void SSMClient::GetMaintenanceWindowExecutionTaskAsync(const GetMaintenanceWindowExecutionTaskRequest& request, const GetMaintenanceWindowExecutionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetMaintenanceWindowExecutionTaskAsyncHelper( this, request, handler, context ); } );
}

GetMaintenanceWindowExecutionTaskInvocationOutcome SSMClient::GetMaintenanceWindowExecutionTaskInvocation(const GetMaintenanceWindowExecutionTaskInvocationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMaintenanceWindowExecutionTaskInvocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMaintenanceWindowExecutionTaskInvocationOutcomeCallable SSMClient::GetMaintenanceWindowExecutionTaskInvocationCallable(const GetMaintenanceWindowExecutionTaskInvocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMaintenanceWindowExecutionTaskInvocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMaintenanceWindowExecutionTaskInvocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetMaintenanceWindowExecutionTaskInvocationAsyncHelper(SSMClient const * const clientThis, const GetMaintenanceWindowExecutionTaskInvocationRequest& request, const GetMaintenanceWindowExecutionTaskInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMaintenanceWindowExecutionTaskInvocation(request), context);
}

void SSMClient::GetMaintenanceWindowExecutionTaskInvocationAsync(const GetMaintenanceWindowExecutionTaskInvocationRequest& request, const GetMaintenanceWindowExecutionTaskInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetMaintenanceWindowExecutionTaskInvocationAsyncHelper( this, request, handler, context ); } );
}

GetMaintenanceWindowTaskOutcome SSMClient::GetMaintenanceWindowTask(const GetMaintenanceWindowTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMaintenanceWindowTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMaintenanceWindowTaskOutcomeCallable SSMClient::GetMaintenanceWindowTaskCallable(const GetMaintenanceWindowTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMaintenanceWindowTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMaintenanceWindowTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetMaintenanceWindowTaskAsyncHelper(SSMClient const * const clientThis, const GetMaintenanceWindowTaskRequest& request, const GetMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMaintenanceWindowTask(request), context);
}

void SSMClient::GetMaintenanceWindowTaskAsync(const GetMaintenanceWindowTaskRequest& request, const GetMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetMaintenanceWindowTaskAsyncHelper( this, request, handler, context ); } );
}

GetOpsItemOutcome SSMClient::GetOpsItem(const GetOpsItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetOpsItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOpsItemOutcomeCallable SSMClient::GetOpsItemCallable(const GetOpsItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOpsItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOpsItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetOpsItemAsyncHelper(SSMClient const * const clientThis, const GetOpsItemRequest& request, const GetOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOpsItem(request), context);
}

void SSMClient::GetOpsItemAsync(const GetOpsItemRequest& request, const GetOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetOpsItemAsyncHelper( this, request, handler, context ); } );
}

GetOpsMetadataOutcome SSMClient::GetOpsMetadata(const GetOpsMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetOpsMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOpsMetadataOutcomeCallable SSMClient::GetOpsMetadataCallable(const GetOpsMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOpsMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOpsMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetOpsMetadataAsyncHelper(SSMClient const * const clientThis, const GetOpsMetadataRequest& request, const GetOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOpsMetadata(request), context);
}

void SSMClient::GetOpsMetadataAsync(const GetOpsMetadataRequest& request, const GetOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetOpsMetadataAsyncHelper( this, request, handler, context ); } );
}

GetOpsSummaryOutcome SSMClient::GetOpsSummary(const GetOpsSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetOpsSummaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOpsSummaryOutcomeCallable SSMClient::GetOpsSummaryCallable(const GetOpsSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOpsSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOpsSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetOpsSummaryAsyncHelper(SSMClient const * const clientThis, const GetOpsSummaryRequest& request, const GetOpsSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOpsSummary(request), context);
}

void SSMClient::GetOpsSummaryAsync(const GetOpsSummaryRequest& request, const GetOpsSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetOpsSummaryAsyncHelper( this, request, handler, context ); } );
}

GetParameterOutcome SSMClient::GetParameter(const GetParameterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetParameterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetParameterOutcomeCallable SSMClient::GetParameterCallable(const GetParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetParameterAsyncHelper(SSMClient const * const clientThis, const GetParameterRequest& request, const GetParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetParameter(request), context);
}

void SSMClient::GetParameterAsync(const GetParameterRequest& request, const GetParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetParameterAsyncHelper( this, request, handler, context ); } );
}

GetParameterHistoryOutcome SSMClient::GetParameterHistory(const GetParameterHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetParameterHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetParameterHistoryOutcomeCallable SSMClient::GetParameterHistoryCallable(const GetParameterHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetParameterHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetParameterHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetParameterHistoryAsyncHelper(SSMClient const * const clientThis, const GetParameterHistoryRequest& request, const GetParameterHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetParameterHistory(request), context);
}

void SSMClient::GetParameterHistoryAsync(const GetParameterHistoryRequest& request, const GetParameterHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetParameterHistoryAsyncHelper( this, request, handler, context ); } );
}

GetParametersOutcome SSMClient::GetParameters(const GetParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetParametersOutcomeCallable SSMClient::GetParametersCallable(const GetParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetParametersAsyncHelper(SSMClient const * const clientThis, const GetParametersRequest& request, const GetParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetParameters(request), context);
}

void SSMClient::GetParametersAsync(const GetParametersRequest& request, const GetParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetParametersAsyncHelper( this, request, handler, context ); } );
}

GetParametersByPathOutcome SSMClient::GetParametersByPath(const GetParametersByPathRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetParametersByPathOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetParametersByPathOutcomeCallable SSMClient::GetParametersByPathCallable(const GetParametersByPathRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetParametersByPathOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetParametersByPath(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetParametersByPathAsyncHelper(SSMClient const * const clientThis, const GetParametersByPathRequest& request, const GetParametersByPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetParametersByPath(request), context);
}

void SSMClient::GetParametersByPathAsync(const GetParametersByPathRequest& request, const GetParametersByPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetParametersByPathAsyncHelper( this, request, handler, context ); } );
}

GetPatchBaselineOutcome SSMClient::GetPatchBaseline(const GetPatchBaselineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPatchBaselineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPatchBaselineOutcomeCallable SSMClient::GetPatchBaselineCallable(const GetPatchBaselineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPatchBaselineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPatchBaseline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetPatchBaselineAsyncHelper(SSMClient const * const clientThis, const GetPatchBaselineRequest& request, const GetPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPatchBaseline(request), context);
}

void SSMClient::GetPatchBaselineAsync(const GetPatchBaselineRequest& request, const GetPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetPatchBaselineAsyncHelper( this, request, handler, context ); } );
}

GetPatchBaselineForPatchGroupOutcome SSMClient::GetPatchBaselineForPatchGroup(const GetPatchBaselineForPatchGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPatchBaselineForPatchGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPatchBaselineForPatchGroupOutcomeCallable SSMClient::GetPatchBaselineForPatchGroupCallable(const GetPatchBaselineForPatchGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPatchBaselineForPatchGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPatchBaselineForPatchGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetPatchBaselineForPatchGroupAsyncHelper(SSMClient const * const clientThis, const GetPatchBaselineForPatchGroupRequest& request, const GetPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPatchBaselineForPatchGroup(request), context);
}

void SSMClient::GetPatchBaselineForPatchGroupAsync(const GetPatchBaselineForPatchGroupRequest& request, const GetPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetPatchBaselineForPatchGroupAsyncHelper( this, request, handler, context ); } );
}

GetServiceSettingOutcome SSMClient::GetServiceSetting(const GetServiceSettingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetServiceSettingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetServiceSettingOutcomeCallable SSMClient::GetServiceSettingCallable(const GetServiceSettingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceSettingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceSetting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientGetServiceSettingAsyncHelper(SSMClient const * const clientThis, const GetServiceSettingRequest& request, const GetServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetServiceSetting(request), context);
}

void SSMClient::GetServiceSettingAsync(const GetServiceSettingRequest& request, const GetServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientGetServiceSettingAsyncHelper( this, request, handler, context ); } );
}

LabelParameterVersionOutcome SSMClient::LabelParameterVersion(const LabelParameterVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return LabelParameterVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

LabelParameterVersionOutcomeCallable SSMClient::LabelParameterVersionCallable(const LabelParameterVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< LabelParameterVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->LabelParameterVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientLabelParameterVersionAsyncHelper(SSMClient const * const clientThis, const LabelParameterVersionRequest& request, const LabelParameterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->LabelParameterVersion(request), context);
}

void SSMClient::LabelParameterVersionAsync(const LabelParameterVersionRequest& request, const LabelParameterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientLabelParameterVersionAsyncHelper( this, request, handler, context ); } );
}

ListAssociationVersionsOutcome SSMClient::ListAssociationVersions(const ListAssociationVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAssociationVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociationVersionsOutcomeCallable SSMClient::ListAssociationVersionsCallable(const ListAssociationVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociationVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociationVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListAssociationVersionsAsyncHelper(SSMClient const * const clientThis, const ListAssociationVersionsRequest& request, const ListAssociationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssociationVersions(request), context);
}

void SSMClient::ListAssociationVersionsAsync(const ListAssociationVersionsRequest& request, const ListAssociationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListAssociationVersionsAsyncHelper( this, request, handler, context ); } );
}

ListAssociationsOutcome SSMClient::ListAssociations(const ListAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociationsOutcomeCallable SSMClient::ListAssociationsCallable(const ListAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListAssociationsAsyncHelper(SSMClient const * const clientThis, const ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssociations(request), context);
}

void SSMClient::ListAssociationsAsync(const ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListAssociationsAsyncHelper( this, request, handler, context ); } );
}

ListCommandInvocationsOutcome SSMClient::ListCommandInvocations(const ListCommandInvocationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCommandInvocationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCommandInvocationsOutcomeCallable SSMClient::ListCommandInvocationsCallable(const ListCommandInvocationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCommandInvocationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCommandInvocations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListCommandInvocationsAsyncHelper(SSMClient const * const clientThis, const ListCommandInvocationsRequest& request, const ListCommandInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCommandInvocations(request), context);
}

void SSMClient::ListCommandInvocationsAsync(const ListCommandInvocationsRequest& request, const ListCommandInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListCommandInvocationsAsyncHelper( this, request, handler, context ); } );
}

ListCommandsOutcome SSMClient::ListCommands(const ListCommandsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCommandsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCommandsOutcomeCallable SSMClient::ListCommandsCallable(const ListCommandsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCommandsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCommands(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListCommandsAsyncHelper(SSMClient const * const clientThis, const ListCommandsRequest& request, const ListCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCommands(request), context);
}

void SSMClient::ListCommandsAsync(const ListCommandsRequest& request, const ListCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListCommandsAsyncHelper( this, request, handler, context ); } );
}

ListComplianceItemsOutcome SSMClient::ListComplianceItems(const ListComplianceItemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListComplianceItemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListComplianceItemsOutcomeCallable SSMClient::ListComplianceItemsCallable(const ListComplianceItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComplianceItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComplianceItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListComplianceItemsAsyncHelper(SSMClient const * const clientThis, const ListComplianceItemsRequest& request, const ListComplianceItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListComplianceItems(request), context);
}

void SSMClient::ListComplianceItemsAsync(const ListComplianceItemsRequest& request, const ListComplianceItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListComplianceItemsAsyncHelper( this, request, handler, context ); } );
}

ListComplianceSummariesOutcome SSMClient::ListComplianceSummaries(const ListComplianceSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListComplianceSummariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListComplianceSummariesOutcomeCallable SSMClient::ListComplianceSummariesCallable(const ListComplianceSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComplianceSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComplianceSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListComplianceSummariesAsyncHelper(SSMClient const * const clientThis, const ListComplianceSummariesRequest& request, const ListComplianceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListComplianceSummaries(request), context);
}

void SSMClient::ListComplianceSummariesAsync(const ListComplianceSummariesRequest& request, const ListComplianceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListComplianceSummariesAsyncHelper( this, request, handler, context ); } );
}

ListDocumentMetadataHistoryOutcome SSMClient::ListDocumentMetadataHistory(const ListDocumentMetadataHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDocumentMetadataHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDocumentMetadataHistoryOutcomeCallable SSMClient::ListDocumentMetadataHistoryCallable(const ListDocumentMetadataHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDocumentMetadataHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDocumentMetadataHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListDocumentMetadataHistoryAsyncHelper(SSMClient const * const clientThis, const ListDocumentMetadataHistoryRequest& request, const ListDocumentMetadataHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDocumentMetadataHistory(request), context);
}

void SSMClient::ListDocumentMetadataHistoryAsync(const ListDocumentMetadataHistoryRequest& request, const ListDocumentMetadataHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListDocumentMetadataHistoryAsyncHelper( this, request, handler, context ); } );
}

ListDocumentVersionsOutcome SSMClient::ListDocumentVersions(const ListDocumentVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDocumentVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDocumentVersionsOutcomeCallable SSMClient::ListDocumentVersionsCallable(const ListDocumentVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDocumentVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDocumentVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListDocumentVersionsAsyncHelper(SSMClient const * const clientThis, const ListDocumentVersionsRequest& request, const ListDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDocumentVersions(request), context);
}

void SSMClient::ListDocumentVersionsAsync(const ListDocumentVersionsRequest& request, const ListDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListDocumentVersionsAsyncHelper( this, request, handler, context ); } );
}

ListDocumentsOutcome SSMClient::ListDocuments(const ListDocumentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDocumentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDocumentsOutcomeCallable SSMClient::ListDocumentsCallable(const ListDocumentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDocumentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDocuments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListDocumentsAsyncHelper(SSMClient const * const clientThis, const ListDocumentsRequest& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDocuments(request), context);
}

void SSMClient::ListDocumentsAsync(const ListDocumentsRequest& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListDocumentsAsyncHelper( this, request, handler, context ); } );
}

ListInventoryEntriesOutcome SSMClient::ListInventoryEntries(const ListInventoryEntriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListInventoryEntriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInventoryEntriesOutcomeCallable SSMClient::ListInventoryEntriesCallable(const ListInventoryEntriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInventoryEntriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInventoryEntries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListInventoryEntriesAsyncHelper(SSMClient const * const clientThis, const ListInventoryEntriesRequest& request, const ListInventoryEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInventoryEntries(request), context);
}

void SSMClient::ListInventoryEntriesAsync(const ListInventoryEntriesRequest& request, const ListInventoryEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListInventoryEntriesAsyncHelper( this, request, handler, context ); } );
}

ListOpsItemEventsOutcome SSMClient::ListOpsItemEvents(const ListOpsItemEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOpsItemEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOpsItemEventsOutcomeCallable SSMClient::ListOpsItemEventsCallable(const ListOpsItemEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOpsItemEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOpsItemEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListOpsItemEventsAsyncHelper(SSMClient const * const clientThis, const ListOpsItemEventsRequest& request, const ListOpsItemEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOpsItemEvents(request), context);
}

void SSMClient::ListOpsItemEventsAsync(const ListOpsItemEventsRequest& request, const ListOpsItemEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListOpsItemEventsAsyncHelper( this, request, handler, context ); } );
}

ListOpsItemRelatedItemsOutcome SSMClient::ListOpsItemRelatedItems(const ListOpsItemRelatedItemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOpsItemRelatedItemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOpsItemRelatedItemsOutcomeCallable SSMClient::ListOpsItemRelatedItemsCallable(const ListOpsItemRelatedItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOpsItemRelatedItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOpsItemRelatedItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListOpsItemRelatedItemsAsyncHelper(SSMClient const * const clientThis, const ListOpsItemRelatedItemsRequest& request, const ListOpsItemRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOpsItemRelatedItems(request), context);
}

void SSMClient::ListOpsItemRelatedItemsAsync(const ListOpsItemRelatedItemsRequest& request, const ListOpsItemRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListOpsItemRelatedItemsAsyncHelper( this, request, handler, context ); } );
}

ListOpsMetadataOutcome SSMClient::ListOpsMetadata(const ListOpsMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOpsMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOpsMetadataOutcomeCallable SSMClient::ListOpsMetadataCallable(const ListOpsMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOpsMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOpsMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListOpsMetadataAsyncHelper(SSMClient const * const clientThis, const ListOpsMetadataRequest& request, const ListOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOpsMetadata(request), context);
}

void SSMClient::ListOpsMetadataAsync(const ListOpsMetadataRequest& request, const ListOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListOpsMetadataAsyncHelper( this, request, handler, context ); } );
}

ListResourceComplianceSummariesOutcome SSMClient::ListResourceComplianceSummaries(const ListResourceComplianceSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResourceComplianceSummariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourceComplianceSummariesOutcomeCallable SSMClient::ListResourceComplianceSummariesCallable(const ListResourceComplianceSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceComplianceSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceComplianceSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListResourceComplianceSummariesAsyncHelper(SSMClient const * const clientThis, const ListResourceComplianceSummariesRequest& request, const ListResourceComplianceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResourceComplianceSummaries(request), context);
}

void SSMClient::ListResourceComplianceSummariesAsync(const ListResourceComplianceSummariesRequest& request, const ListResourceComplianceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListResourceComplianceSummariesAsyncHelper( this, request, handler, context ); } );
}

ListResourceDataSyncOutcome SSMClient::ListResourceDataSync(const ListResourceDataSyncRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResourceDataSyncOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourceDataSyncOutcomeCallable SSMClient::ListResourceDataSyncCallable(const ListResourceDataSyncRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceDataSyncOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceDataSync(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListResourceDataSyncAsyncHelper(SSMClient const * const clientThis, const ListResourceDataSyncRequest& request, const ListResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResourceDataSync(request), context);
}

void SSMClient::ListResourceDataSyncAsync(const ListResourceDataSyncRequest& request, const ListResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListResourceDataSyncAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome SSMClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SSMClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientListTagsForResourceAsyncHelper(SSMClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void SSMClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ModifyDocumentPermissionOutcome SSMClient::ModifyDocumentPermission(const ModifyDocumentPermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyDocumentPermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyDocumentPermissionOutcomeCallable SSMClient::ModifyDocumentPermissionCallable(const ModifyDocumentPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyDocumentPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyDocumentPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientModifyDocumentPermissionAsyncHelper(SSMClient const * const clientThis, const ModifyDocumentPermissionRequest& request, const ModifyDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyDocumentPermission(request), context);
}

void SSMClient::ModifyDocumentPermissionAsync(const ModifyDocumentPermissionRequest& request, const ModifyDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientModifyDocumentPermissionAsyncHelper( this, request, handler, context ); } );
}

PutComplianceItemsOutcome SSMClient::PutComplianceItems(const PutComplianceItemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutComplianceItemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutComplianceItemsOutcomeCallable SSMClient::PutComplianceItemsCallable(const PutComplianceItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutComplianceItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutComplianceItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientPutComplianceItemsAsyncHelper(SSMClient const * const clientThis, const PutComplianceItemsRequest& request, const PutComplianceItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutComplianceItems(request), context);
}

void SSMClient::PutComplianceItemsAsync(const PutComplianceItemsRequest& request, const PutComplianceItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientPutComplianceItemsAsyncHelper( this, request, handler, context ); } );
}

PutInventoryOutcome SSMClient::PutInventory(const PutInventoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutInventoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutInventoryOutcomeCallable SSMClient::PutInventoryCallable(const PutInventoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutInventoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutInventory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientPutInventoryAsyncHelper(SSMClient const * const clientThis, const PutInventoryRequest& request, const PutInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutInventory(request), context);
}

void SSMClient::PutInventoryAsync(const PutInventoryRequest& request, const PutInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientPutInventoryAsyncHelper( this, request, handler, context ); } );
}

PutParameterOutcome SSMClient::PutParameter(const PutParameterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutParameterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutParameterOutcomeCallable SSMClient::PutParameterCallable(const PutParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientPutParameterAsyncHelper(SSMClient const * const clientThis, const PutParameterRequest& request, const PutParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutParameter(request), context);
}

void SSMClient::PutParameterAsync(const PutParameterRequest& request, const PutParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientPutParameterAsyncHelper( this, request, handler, context ); } );
}

RegisterDefaultPatchBaselineOutcome SSMClient::RegisterDefaultPatchBaseline(const RegisterDefaultPatchBaselineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterDefaultPatchBaselineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterDefaultPatchBaselineOutcomeCallable SSMClient::RegisterDefaultPatchBaselineCallable(const RegisterDefaultPatchBaselineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterDefaultPatchBaselineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterDefaultPatchBaseline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientRegisterDefaultPatchBaselineAsyncHelper(SSMClient const * const clientThis, const RegisterDefaultPatchBaselineRequest& request, const RegisterDefaultPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterDefaultPatchBaseline(request), context);
}

void SSMClient::RegisterDefaultPatchBaselineAsync(const RegisterDefaultPatchBaselineRequest& request, const RegisterDefaultPatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientRegisterDefaultPatchBaselineAsyncHelper( this, request, handler, context ); } );
}

RegisterPatchBaselineForPatchGroupOutcome SSMClient::RegisterPatchBaselineForPatchGroup(const RegisterPatchBaselineForPatchGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterPatchBaselineForPatchGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterPatchBaselineForPatchGroupOutcomeCallable SSMClient::RegisterPatchBaselineForPatchGroupCallable(const RegisterPatchBaselineForPatchGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterPatchBaselineForPatchGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterPatchBaselineForPatchGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientRegisterPatchBaselineForPatchGroupAsyncHelper(SSMClient const * const clientThis, const RegisterPatchBaselineForPatchGroupRequest& request, const RegisterPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterPatchBaselineForPatchGroup(request), context);
}

void SSMClient::RegisterPatchBaselineForPatchGroupAsync(const RegisterPatchBaselineForPatchGroupRequest& request, const RegisterPatchBaselineForPatchGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientRegisterPatchBaselineForPatchGroupAsyncHelper( this, request, handler, context ); } );
}

RegisterTargetWithMaintenanceWindowOutcome SSMClient::RegisterTargetWithMaintenanceWindow(const RegisterTargetWithMaintenanceWindowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterTargetWithMaintenanceWindowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterTargetWithMaintenanceWindowOutcomeCallable SSMClient::RegisterTargetWithMaintenanceWindowCallable(const RegisterTargetWithMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterTargetWithMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterTargetWithMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientRegisterTargetWithMaintenanceWindowAsyncHelper(SSMClient const * const clientThis, const RegisterTargetWithMaintenanceWindowRequest& request, const RegisterTargetWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterTargetWithMaintenanceWindow(request), context);
}

void SSMClient::RegisterTargetWithMaintenanceWindowAsync(const RegisterTargetWithMaintenanceWindowRequest& request, const RegisterTargetWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientRegisterTargetWithMaintenanceWindowAsyncHelper( this, request, handler, context ); } );
}

RegisterTaskWithMaintenanceWindowOutcome SSMClient::RegisterTaskWithMaintenanceWindow(const RegisterTaskWithMaintenanceWindowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterTaskWithMaintenanceWindowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterTaskWithMaintenanceWindowOutcomeCallable SSMClient::RegisterTaskWithMaintenanceWindowCallable(const RegisterTaskWithMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterTaskWithMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterTaskWithMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientRegisterTaskWithMaintenanceWindowAsyncHelper(SSMClient const * const clientThis, const RegisterTaskWithMaintenanceWindowRequest& request, const RegisterTaskWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterTaskWithMaintenanceWindow(request), context);
}

void SSMClient::RegisterTaskWithMaintenanceWindowAsync(const RegisterTaskWithMaintenanceWindowRequest& request, const RegisterTaskWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientRegisterTaskWithMaintenanceWindowAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsFromResourceOutcome SSMClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsFromResourceOutcomeCallable SSMClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientRemoveTagsFromResourceAsyncHelper(SSMClient const * const clientThis, const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTagsFromResource(request), context);
}

void SSMClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientRemoveTagsFromResourceAsyncHelper( this, request, handler, context ); } );
}

ResetServiceSettingOutcome SSMClient::ResetServiceSetting(const ResetServiceSettingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResetServiceSettingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResetServiceSettingOutcomeCallable SSMClient::ResetServiceSettingCallable(const ResetServiceSettingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetServiceSettingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetServiceSetting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientResetServiceSettingAsyncHelper(SSMClient const * const clientThis, const ResetServiceSettingRequest& request, const ResetServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResetServiceSetting(request), context);
}

void SSMClient::ResetServiceSettingAsync(const ResetServiceSettingRequest& request, const ResetServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientResetServiceSettingAsyncHelper( this, request, handler, context ); } );
}

ResumeSessionOutcome SSMClient::ResumeSession(const ResumeSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResumeSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResumeSessionOutcomeCallable SSMClient::ResumeSessionCallable(const ResumeSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResumeSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResumeSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientResumeSessionAsyncHelper(SSMClient const * const clientThis, const ResumeSessionRequest& request, const ResumeSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResumeSession(request), context);
}

void SSMClient::ResumeSessionAsync(const ResumeSessionRequest& request, const ResumeSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientResumeSessionAsyncHelper( this, request, handler, context ); } );
}

SendAutomationSignalOutcome SSMClient::SendAutomationSignal(const SendAutomationSignalRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendAutomationSignalOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendAutomationSignalOutcomeCallable SSMClient::SendAutomationSignalCallable(const SendAutomationSignalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendAutomationSignalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendAutomationSignal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientSendAutomationSignalAsyncHelper(SSMClient const * const clientThis, const SendAutomationSignalRequest& request, const SendAutomationSignalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendAutomationSignal(request), context);
}

void SSMClient::SendAutomationSignalAsync(const SendAutomationSignalRequest& request, const SendAutomationSignalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientSendAutomationSignalAsyncHelper( this, request, handler, context ); } );
}

SendCommandOutcome SSMClient::SendCommand(const SendCommandRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendCommandOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendCommandOutcomeCallable SSMClient::SendCommandCallable(const SendCommandRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendCommandOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendCommand(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientSendCommandAsyncHelper(SSMClient const * const clientThis, const SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendCommand(request), context);
}

void SSMClient::SendCommandAsync(const SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientSendCommandAsyncHelper( this, request, handler, context ); } );
}

StartAssociationsOnceOutcome SSMClient::StartAssociationsOnce(const StartAssociationsOnceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartAssociationsOnceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAssociationsOnceOutcomeCallable SSMClient::StartAssociationsOnceCallable(const StartAssociationsOnceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAssociationsOnceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAssociationsOnce(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientStartAssociationsOnceAsyncHelper(SSMClient const * const clientThis, const StartAssociationsOnceRequest& request, const StartAssociationsOnceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartAssociationsOnce(request), context);
}

void SSMClient::StartAssociationsOnceAsync(const StartAssociationsOnceRequest& request, const StartAssociationsOnceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientStartAssociationsOnceAsyncHelper( this, request, handler, context ); } );
}

StartAutomationExecutionOutcome SSMClient::StartAutomationExecution(const StartAutomationExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartAutomationExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAutomationExecutionOutcomeCallable SSMClient::StartAutomationExecutionCallable(const StartAutomationExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAutomationExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAutomationExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientStartAutomationExecutionAsyncHelper(SSMClient const * const clientThis, const StartAutomationExecutionRequest& request, const StartAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartAutomationExecution(request), context);
}

void SSMClient::StartAutomationExecutionAsync(const StartAutomationExecutionRequest& request, const StartAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientStartAutomationExecutionAsyncHelper( this, request, handler, context ); } );
}

StartChangeRequestExecutionOutcome SSMClient::StartChangeRequestExecution(const StartChangeRequestExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartChangeRequestExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartChangeRequestExecutionOutcomeCallable SSMClient::StartChangeRequestExecutionCallable(const StartChangeRequestExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartChangeRequestExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartChangeRequestExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientStartChangeRequestExecutionAsyncHelper(SSMClient const * const clientThis, const StartChangeRequestExecutionRequest& request, const StartChangeRequestExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartChangeRequestExecution(request), context);
}

void SSMClient::StartChangeRequestExecutionAsync(const StartChangeRequestExecutionRequest& request, const StartChangeRequestExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientStartChangeRequestExecutionAsyncHelper( this, request, handler, context ); } );
}

StartSessionOutcome SSMClient::StartSession(const StartSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSessionOutcomeCallable SSMClient::StartSessionCallable(const StartSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientStartSessionAsyncHelper(SSMClient const * const clientThis, const StartSessionRequest& request, const StartSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartSession(request), context);
}

void SSMClient::StartSessionAsync(const StartSessionRequest& request, const StartSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientStartSessionAsyncHelper( this, request, handler, context ); } );
}

StopAutomationExecutionOutcome SSMClient::StopAutomationExecution(const StopAutomationExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopAutomationExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopAutomationExecutionOutcomeCallable SSMClient::StopAutomationExecutionCallable(const StopAutomationExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopAutomationExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopAutomationExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientStopAutomationExecutionAsyncHelper(SSMClient const * const clientThis, const StopAutomationExecutionRequest& request, const StopAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopAutomationExecution(request), context);
}

void SSMClient::StopAutomationExecutionAsync(const StopAutomationExecutionRequest& request, const StopAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientStopAutomationExecutionAsyncHelper( this, request, handler, context ); } );
}

TerminateSessionOutcome SSMClient::TerminateSession(const TerminateSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TerminateSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateSessionOutcomeCallable SSMClient::TerminateSessionCallable(const TerminateSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientTerminateSessionAsyncHelper(SSMClient const * const clientThis, const TerminateSessionRequest& request, const TerminateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TerminateSession(request), context);
}

void SSMClient::TerminateSessionAsync(const TerminateSessionRequest& request, const TerminateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientTerminateSessionAsyncHelper( this, request, handler, context ); } );
}

UnlabelParameterVersionOutcome SSMClient::UnlabelParameterVersion(const UnlabelParameterVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UnlabelParameterVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnlabelParameterVersionOutcomeCallable SSMClient::UnlabelParameterVersionCallable(const UnlabelParameterVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnlabelParameterVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnlabelParameterVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUnlabelParameterVersionAsyncHelper(SSMClient const * const clientThis, const UnlabelParameterVersionRequest& request, const UnlabelParameterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UnlabelParameterVersion(request), context);
}

void SSMClient::UnlabelParameterVersionAsync(const UnlabelParameterVersionRequest& request, const UnlabelParameterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUnlabelParameterVersionAsyncHelper( this, request, handler, context ); } );
}

UpdateAssociationOutcome SSMClient::UpdateAssociation(const UpdateAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssociationOutcomeCallable SSMClient::UpdateAssociationCallable(const UpdateAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUpdateAssociationAsyncHelper(SSMClient const * const clientThis, const UpdateAssociationRequest& request, const UpdateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAssociation(request), context);
}

void SSMClient::UpdateAssociationAsync(const UpdateAssociationRequest& request, const UpdateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUpdateAssociationAsyncHelper( this, request, handler, context ); } );
}

UpdateAssociationStatusOutcome SSMClient::UpdateAssociationStatus(const UpdateAssociationStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAssociationStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssociationStatusOutcomeCallable SSMClient::UpdateAssociationStatusCallable(const UpdateAssociationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssociationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssociationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUpdateAssociationStatusAsyncHelper(SSMClient const * const clientThis, const UpdateAssociationStatusRequest& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAssociationStatus(request), context);
}

void SSMClient::UpdateAssociationStatusAsync(const UpdateAssociationStatusRequest& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUpdateAssociationStatusAsyncHelper( this, request, handler, context ); } );
}

UpdateDocumentOutcome SSMClient::UpdateDocument(const UpdateDocumentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDocumentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDocumentOutcomeCallable SSMClient::UpdateDocumentCallable(const UpdateDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUpdateDocumentAsyncHelper(SSMClient const * const clientThis, const UpdateDocumentRequest& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDocument(request), context);
}

void SSMClient::UpdateDocumentAsync(const UpdateDocumentRequest& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUpdateDocumentAsyncHelper( this, request, handler, context ); } );
}

UpdateDocumentDefaultVersionOutcome SSMClient::UpdateDocumentDefaultVersion(const UpdateDocumentDefaultVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDocumentDefaultVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDocumentDefaultVersionOutcomeCallable SSMClient::UpdateDocumentDefaultVersionCallable(const UpdateDocumentDefaultVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDocumentDefaultVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDocumentDefaultVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUpdateDocumentDefaultVersionAsyncHelper(SSMClient const * const clientThis, const UpdateDocumentDefaultVersionRequest& request, const UpdateDocumentDefaultVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDocumentDefaultVersion(request), context);
}

void SSMClient::UpdateDocumentDefaultVersionAsync(const UpdateDocumentDefaultVersionRequest& request, const UpdateDocumentDefaultVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUpdateDocumentDefaultVersionAsyncHelper( this, request, handler, context ); } );
}

UpdateDocumentMetadataOutcome SSMClient::UpdateDocumentMetadata(const UpdateDocumentMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDocumentMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDocumentMetadataOutcomeCallable SSMClient::UpdateDocumentMetadataCallable(const UpdateDocumentMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDocumentMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDocumentMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUpdateDocumentMetadataAsyncHelper(SSMClient const * const clientThis, const UpdateDocumentMetadataRequest& request, const UpdateDocumentMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDocumentMetadata(request), context);
}

void SSMClient::UpdateDocumentMetadataAsync(const UpdateDocumentMetadataRequest& request, const UpdateDocumentMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUpdateDocumentMetadataAsyncHelper( this, request, handler, context ); } );
}

UpdateMaintenanceWindowOutcome SSMClient::UpdateMaintenanceWindow(const UpdateMaintenanceWindowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateMaintenanceWindowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMaintenanceWindowOutcomeCallable SSMClient::UpdateMaintenanceWindowCallable(const UpdateMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUpdateMaintenanceWindowAsyncHelper(SSMClient const * const clientThis, const UpdateMaintenanceWindowRequest& request, const UpdateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMaintenanceWindow(request), context);
}

void SSMClient::UpdateMaintenanceWindowAsync(const UpdateMaintenanceWindowRequest& request, const UpdateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUpdateMaintenanceWindowAsyncHelper( this, request, handler, context ); } );
}

UpdateMaintenanceWindowTargetOutcome SSMClient::UpdateMaintenanceWindowTarget(const UpdateMaintenanceWindowTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateMaintenanceWindowTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMaintenanceWindowTargetOutcomeCallable SSMClient::UpdateMaintenanceWindowTargetCallable(const UpdateMaintenanceWindowTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMaintenanceWindowTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMaintenanceWindowTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUpdateMaintenanceWindowTargetAsyncHelper(SSMClient const * const clientThis, const UpdateMaintenanceWindowTargetRequest& request, const UpdateMaintenanceWindowTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMaintenanceWindowTarget(request), context);
}

void SSMClient::UpdateMaintenanceWindowTargetAsync(const UpdateMaintenanceWindowTargetRequest& request, const UpdateMaintenanceWindowTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUpdateMaintenanceWindowTargetAsyncHelper( this, request, handler, context ); } );
}

UpdateMaintenanceWindowTaskOutcome SSMClient::UpdateMaintenanceWindowTask(const UpdateMaintenanceWindowTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateMaintenanceWindowTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMaintenanceWindowTaskOutcomeCallable SSMClient::UpdateMaintenanceWindowTaskCallable(const UpdateMaintenanceWindowTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMaintenanceWindowTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMaintenanceWindowTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUpdateMaintenanceWindowTaskAsyncHelper(SSMClient const * const clientThis, const UpdateMaintenanceWindowTaskRequest& request, const UpdateMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMaintenanceWindowTask(request), context);
}

void SSMClient::UpdateMaintenanceWindowTaskAsync(const UpdateMaintenanceWindowTaskRequest& request, const UpdateMaintenanceWindowTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUpdateMaintenanceWindowTaskAsyncHelper( this, request, handler, context ); } );
}

UpdateManagedInstanceRoleOutcome SSMClient::UpdateManagedInstanceRole(const UpdateManagedInstanceRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateManagedInstanceRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateManagedInstanceRoleOutcomeCallable SSMClient::UpdateManagedInstanceRoleCallable(const UpdateManagedInstanceRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateManagedInstanceRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateManagedInstanceRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUpdateManagedInstanceRoleAsyncHelper(SSMClient const * const clientThis, const UpdateManagedInstanceRoleRequest& request, const UpdateManagedInstanceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateManagedInstanceRole(request), context);
}

void SSMClient::UpdateManagedInstanceRoleAsync(const UpdateManagedInstanceRoleRequest& request, const UpdateManagedInstanceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUpdateManagedInstanceRoleAsyncHelper( this, request, handler, context ); } );
}

UpdateOpsItemOutcome SSMClient::UpdateOpsItem(const UpdateOpsItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateOpsItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateOpsItemOutcomeCallable SSMClient::UpdateOpsItemCallable(const UpdateOpsItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOpsItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOpsItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUpdateOpsItemAsyncHelper(SSMClient const * const clientThis, const UpdateOpsItemRequest& request, const UpdateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateOpsItem(request), context);
}

void SSMClient::UpdateOpsItemAsync(const UpdateOpsItemRequest& request, const UpdateOpsItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUpdateOpsItemAsyncHelper( this, request, handler, context ); } );
}

UpdateOpsMetadataOutcome SSMClient::UpdateOpsMetadata(const UpdateOpsMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateOpsMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateOpsMetadataOutcomeCallable SSMClient::UpdateOpsMetadataCallable(const UpdateOpsMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOpsMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOpsMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUpdateOpsMetadataAsyncHelper(SSMClient const * const clientThis, const UpdateOpsMetadataRequest& request, const UpdateOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateOpsMetadata(request), context);
}

void SSMClient::UpdateOpsMetadataAsync(const UpdateOpsMetadataRequest& request, const UpdateOpsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUpdateOpsMetadataAsyncHelper( this, request, handler, context ); } );
}

UpdatePatchBaselineOutcome SSMClient::UpdatePatchBaseline(const UpdatePatchBaselineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePatchBaselineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePatchBaselineOutcomeCallable SSMClient::UpdatePatchBaselineCallable(const UpdatePatchBaselineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePatchBaselineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePatchBaseline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUpdatePatchBaselineAsyncHelper(SSMClient const * const clientThis, const UpdatePatchBaselineRequest& request, const UpdatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePatchBaseline(request), context);
}

void SSMClient::UpdatePatchBaselineAsync(const UpdatePatchBaselineRequest& request, const UpdatePatchBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUpdatePatchBaselineAsyncHelper( this, request, handler, context ); } );
}

UpdateResourceDataSyncOutcome SSMClient::UpdateResourceDataSync(const UpdateResourceDataSyncRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateResourceDataSyncOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceDataSyncOutcomeCallable SSMClient::UpdateResourceDataSyncCallable(const UpdateResourceDataSyncRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceDataSyncOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResourceDataSync(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUpdateResourceDataSyncAsyncHelper(SSMClient const * const clientThis, const UpdateResourceDataSyncRequest& request, const UpdateResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateResourceDataSync(request), context);
}

void SSMClient::UpdateResourceDataSyncAsync(const UpdateResourceDataSyncRequest& request, const UpdateResourceDataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUpdateResourceDataSyncAsyncHelper( this, request, handler, context ); } );
}

UpdateServiceSettingOutcome SSMClient::UpdateServiceSetting(const UpdateServiceSettingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServiceSettingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceSettingOutcomeCallable SSMClient::UpdateServiceSettingCallable(const UpdateServiceSettingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceSettingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceSetting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMClientUpdateServiceSettingAsyncHelper(SSMClient const * const clientThis, const UpdateServiceSettingRequest& request, const UpdateServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateServiceSetting(request), context);
}

void SSMClient::UpdateServiceSettingAsync(const UpdateServiceSettingRequest& request, const UpdateServiceSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMClientUpdateServiceSettingAsyncHelper( this, request, handler, context ); } );
}

