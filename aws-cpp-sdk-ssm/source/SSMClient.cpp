/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/SSMClient.h>
#include <aws/ssm/SSMEndpoint.h>
#include <aws/ssm/SSMErrorMarshaller.h>
#include <aws/ssm/model/AddTagsToResourceRequest.h>
#include <aws/ssm/model/CancelCommandRequest.h>
#include <aws/ssm/model/CreateActivationRequest.h>
#include <aws/ssm/model/CreateAssociationRequest.h>
#include <aws/ssm/model/CreateAssociationBatchRequest.h>
#include <aws/ssm/model/CreateDocumentRequest.h>
#include <aws/ssm/model/CreateMaintenanceWindowRequest.h>
#include <aws/ssm/model/DeleteActivationRequest.h>
#include <aws/ssm/model/DeleteAssociationRequest.h>
#include <aws/ssm/model/DeleteDocumentRequest.h>
#include <aws/ssm/model/DeleteMaintenanceWindowRequest.h>
#include <aws/ssm/model/DeleteParameterRequest.h>
#include <aws/ssm/model/DeregisterManagedInstanceRequest.h>
#include <aws/ssm/model/DeregisterTargetFromMaintenanceWindowRequest.h>
#include <aws/ssm/model/DeregisterTaskFromMaintenanceWindowRequest.h>
#include <aws/ssm/model/DescribeActivationsRequest.h>
#include <aws/ssm/model/DescribeAssociationRequest.h>
#include <aws/ssm/model/DescribeAutomationExecutionsRequest.h>
#include <aws/ssm/model/DescribeDocumentRequest.h>
#include <aws/ssm/model/DescribeDocumentPermissionRequest.h>
#include <aws/ssm/model/DescribeEffectiveInstanceAssociationsRequest.h>
#include <aws/ssm/model/DescribeInstanceAssociationsStatusRequest.h>
#include <aws/ssm/model/DescribeInstanceInformationRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTaskInvocationsRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTasksRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionsRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTargetsRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTasksRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowsRequest.h>
#include <aws/ssm/model/DescribeParametersRequest.h>
#include <aws/ssm/model/GetAutomationExecutionRequest.h>
#include <aws/ssm/model/GetCommandInvocationRequest.h>
#include <aws/ssm/model/GetDocumentRequest.h>
#include <aws/ssm/model/GetInventoryRequest.h>
#include <aws/ssm/model/GetInventorySchemaRequest.h>
#include <aws/ssm/model/GetMaintenanceWindowRequest.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionRequest.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskRequest.h>
#include <aws/ssm/model/GetParameterHistoryRequest.h>
#include <aws/ssm/model/GetParametersRequest.h>
#include <aws/ssm/model/ListAssociationsRequest.h>
#include <aws/ssm/model/ListCommandInvocationsRequest.h>
#include <aws/ssm/model/ListCommandsRequest.h>
#include <aws/ssm/model/ListDocumentVersionsRequest.h>
#include <aws/ssm/model/ListDocumentsRequest.h>
#include <aws/ssm/model/ListInventoryEntriesRequest.h>
#include <aws/ssm/model/ListTagsForResourceRequest.h>
#include <aws/ssm/model/ModifyDocumentPermissionRequest.h>
#include <aws/ssm/model/PutInventoryRequest.h>
#include <aws/ssm/model/PutParameterRequest.h>
#include <aws/ssm/model/RegisterTargetWithMaintenanceWindowRequest.h>
#include <aws/ssm/model/RegisterTaskWithMaintenanceWindowRequest.h>
#include <aws/ssm/model/RemoveTagsFromResourceRequest.h>
#include <aws/ssm/model/SendCommandRequest.h>
#include <aws/ssm/model/StartAutomationExecutionRequest.h>
#include <aws/ssm/model/StopAutomationExecutionRequest.h>
#include <aws/ssm/model/UpdateAssociationRequest.h>
#include <aws/ssm/model/UpdateAssociationStatusRequest.h>
#include <aws/ssm/model/UpdateDocumentRequest.h>
#include <aws/ssm/model/UpdateDocumentDefaultVersionRequest.h>
#include <aws/ssm/model/UpdateMaintenanceWindowRequest.h>
#include <aws/ssm/model/UpdateManagedInstanceRoleRequest.h>

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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMClient::SSMClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMClient::SSMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMClient::~SSMClient()
{
}

void SSMClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << SSMEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AddTagsToResourceOutcome SSMClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddTagsToResourceOutcome(AddTagsToResourceResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsToResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsToResourceAsyncHelper( request, handler, context ); } );
}

void SSMClient::AddTagsToResourceAsyncHelper(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToResource(request), context);
}

CancelCommandOutcome SSMClient::CancelCommand(const CancelCommandRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CancelCommandOutcome(CancelCommandResult(outcome.GetResult()));
  }
  else
  {
    return CancelCommandOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CancelCommandAsyncHelper( request, handler, context ); } );
}

void SSMClient::CancelCommandAsyncHelper(const CancelCommandRequest& request, const CancelCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelCommand(request), context);
}

CreateActivationOutcome SSMClient::CreateActivation(const CreateActivationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateActivationOutcome(CreateActivationResult(outcome.GetResult()));
  }
  else
  {
    return CreateActivationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateActivationAsyncHelper( request, handler, context ); } );
}

void SSMClient::CreateActivationAsyncHelper(const CreateActivationRequest& request, const CreateActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateActivation(request), context);
}

CreateAssociationOutcome SSMClient::CreateAssociation(const CreateAssociationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateAssociationOutcome(CreateAssociationResult(outcome.GetResult()));
  }
  else
  {
    return CreateAssociationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateAssociationAsyncHelper( request, handler, context ); } );
}

void SSMClient::CreateAssociationAsyncHelper(const CreateAssociationRequest& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAssociation(request), context);
}

CreateAssociationBatchOutcome SSMClient::CreateAssociationBatch(const CreateAssociationBatchRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateAssociationBatchOutcome(CreateAssociationBatchResult(outcome.GetResult()));
  }
  else
  {
    return CreateAssociationBatchOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateAssociationBatchAsyncHelper( request, handler, context ); } );
}

void SSMClient::CreateAssociationBatchAsyncHelper(const CreateAssociationBatchRequest& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAssociationBatch(request), context);
}

CreateDocumentOutcome SSMClient::CreateDocument(const CreateDocumentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDocumentOutcome(CreateDocumentResult(outcome.GetResult()));
  }
  else
  {
    return CreateDocumentOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateDocumentAsyncHelper( request, handler, context ); } );
}

void SSMClient::CreateDocumentAsyncHelper(const CreateDocumentRequest& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDocument(request), context);
}

CreateMaintenanceWindowOutcome SSMClient::CreateMaintenanceWindow(const CreateMaintenanceWindowRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateMaintenanceWindowOutcome(CreateMaintenanceWindowResult(outcome.GetResult()));
  }
  else
  {
    return CreateMaintenanceWindowOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateMaintenanceWindowAsyncHelper( request, handler, context ); } );
}

void SSMClient::CreateMaintenanceWindowAsyncHelper(const CreateMaintenanceWindowRequest& request, const CreateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMaintenanceWindow(request), context);
}

DeleteActivationOutcome SSMClient::DeleteActivation(const DeleteActivationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteActivationOutcome(DeleteActivationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteActivationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteActivationAsyncHelper( request, handler, context ); } );
}

void SSMClient::DeleteActivationAsyncHelper(const DeleteActivationRequest& request, const DeleteActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteActivation(request), context);
}

DeleteAssociationOutcome SSMClient::DeleteAssociation(const DeleteAssociationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteAssociationOutcome(DeleteAssociationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAssociationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAssociationAsyncHelper( request, handler, context ); } );
}

void SSMClient::DeleteAssociationAsyncHelper(const DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAssociation(request), context);
}

DeleteDocumentOutcome SSMClient::DeleteDocument(const DeleteDocumentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDocumentOutcome(DeleteDocumentResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDocumentOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDocumentAsyncHelper( request, handler, context ); } );
}

void SSMClient::DeleteDocumentAsyncHelper(const DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDocument(request), context);
}

DeleteMaintenanceWindowOutcome SSMClient::DeleteMaintenanceWindow(const DeleteMaintenanceWindowRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteMaintenanceWindowOutcome(DeleteMaintenanceWindowResult(outcome.GetResult()));
  }
  else
  {
    return DeleteMaintenanceWindowOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMaintenanceWindowAsyncHelper( request, handler, context ); } );
}

void SSMClient::DeleteMaintenanceWindowAsyncHelper(const DeleteMaintenanceWindowRequest& request, const DeleteMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMaintenanceWindow(request), context);
}

DeleteParameterOutcome SSMClient::DeleteParameter(const DeleteParameterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteParameterOutcome(DeleteParameterResult(outcome.GetResult()));
  }
  else
  {
    return DeleteParameterOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteParameterAsyncHelper( request, handler, context ); } );
}

void SSMClient::DeleteParameterAsyncHelper(const DeleteParameterRequest& request, const DeleteParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteParameter(request), context);
}

DeregisterManagedInstanceOutcome SSMClient::DeregisterManagedInstance(const DeregisterManagedInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterManagedInstanceOutcome(DeregisterManagedInstanceResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterManagedInstanceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterManagedInstanceAsyncHelper( request, handler, context ); } );
}

void SSMClient::DeregisterManagedInstanceAsyncHelper(const DeregisterManagedInstanceRequest& request, const DeregisterManagedInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterManagedInstance(request), context);
}

DeregisterTargetFromMaintenanceWindowOutcome SSMClient::DeregisterTargetFromMaintenanceWindow(const DeregisterTargetFromMaintenanceWindowRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterTargetFromMaintenanceWindowOutcome(DeregisterTargetFromMaintenanceWindowResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterTargetFromMaintenanceWindowOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterTargetFromMaintenanceWindowAsyncHelper( request, handler, context ); } );
}

void SSMClient::DeregisterTargetFromMaintenanceWindowAsyncHelper(const DeregisterTargetFromMaintenanceWindowRequest& request, const DeregisterTargetFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterTargetFromMaintenanceWindow(request), context);
}

DeregisterTaskFromMaintenanceWindowOutcome SSMClient::DeregisterTaskFromMaintenanceWindow(const DeregisterTaskFromMaintenanceWindowRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterTaskFromMaintenanceWindowOutcome(DeregisterTaskFromMaintenanceWindowResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterTaskFromMaintenanceWindowOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterTaskFromMaintenanceWindowAsyncHelper( request, handler, context ); } );
}

void SSMClient::DeregisterTaskFromMaintenanceWindowAsyncHelper(const DeregisterTaskFromMaintenanceWindowRequest& request, const DeregisterTaskFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterTaskFromMaintenanceWindow(request), context);
}

DescribeActivationsOutcome SSMClient::DescribeActivations(const DescribeActivationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeActivationsOutcome(DescribeActivationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeActivationsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeActivationsAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeActivationsAsyncHelper(const DescribeActivationsRequest& request, const DescribeActivationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeActivations(request), context);
}

DescribeAssociationOutcome SSMClient::DescribeAssociation(const DescribeAssociationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAssociationOutcome(DescribeAssociationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAssociationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAssociationAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeAssociationAsyncHelper(const DescribeAssociationRequest& request, const DescribeAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAssociation(request), context);
}

DescribeAutomationExecutionsOutcome SSMClient::DescribeAutomationExecutions(const DescribeAutomationExecutionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAutomationExecutionsOutcome(DescribeAutomationExecutionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAutomationExecutionsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAutomationExecutionsAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeAutomationExecutionsAsyncHelper(const DescribeAutomationExecutionsRequest& request, const DescribeAutomationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAutomationExecutions(request), context);
}

DescribeDocumentOutcome SSMClient::DescribeDocument(const DescribeDocumentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDocumentOutcome(DescribeDocumentResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDocumentOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDocumentAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeDocumentAsyncHelper(const DescribeDocumentRequest& request, const DescribeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDocument(request), context);
}

DescribeDocumentPermissionOutcome SSMClient::DescribeDocumentPermission(const DescribeDocumentPermissionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDocumentPermissionOutcome(DescribeDocumentPermissionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDocumentPermissionOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDocumentPermissionAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeDocumentPermissionAsyncHelper(const DescribeDocumentPermissionRequest& request, const DescribeDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDocumentPermission(request), context);
}

DescribeEffectiveInstanceAssociationsOutcome SSMClient::DescribeEffectiveInstanceAssociations(const DescribeEffectiveInstanceAssociationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEffectiveInstanceAssociationsOutcome(DescribeEffectiveInstanceAssociationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEffectiveInstanceAssociationsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEffectiveInstanceAssociationsAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeEffectiveInstanceAssociationsAsyncHelper(const DescribeEffectiveInstanceAssociationsRequest& request, const DescribeEffectiveInstanceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEffectiveInstanceAssociations(request), context);
}

DescribeInstanceAssociationsStatusOutcome SSMClient::DescribeInstanceAssociationsStatus(const DescribeInstanceAssociationsStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeInstanceAssociationsStatusOutcome(DescribeInstanceAssociationsStatusResult(outcome.GetResult()));
  }
  else
  {
    return DescribeInstanceAssociationsStatusOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstanceAssociationsStatusAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeInstanceAssociationsStatusAsyncHelper(const DescribeInstanceAssociationsStatusRequest& request, const DescribeInstanceAssociationsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstanceAssociationsStatus(request), context);
}

DescribeInstanceInformationOutcome SSMClient::DescribeInstanceInformation(const DescribeInstanceInformationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeInstanceInformationOutcome(DescribeInstanceInformationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeInstanceInformationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstanceInformationAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeInstanceInformationAsyncHelper(const DescribeInstanceInformationRequest& request, const DescribeInstanceInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstanceInformation(request), context);
}

DescribeMaintenanceWindowExecutionTaskInvocationsOutcome SSMClient::DescribeMaintenanceWindowExecutionTaskInvocations(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeMaintenanceWindowExecutionTaskInvocationsOutcome(DescribeMaintenanceWindowExecutionTaskInvocationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMaintenanceWindowExecutionTaskInvocationsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMaintenanceWindowExecutionTaskInvocationsAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeMaintenanceWindowExecutionTaskInvocationsAsyncHelper(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request, const DescribeMaintenanceWindowExecutionTaskInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMaintenanceWindowExecutionTaskInvocations(request), context);
}

DescribeMaintenanceWindowExecutionTasksOutcome SSMClient::DescribeMaintenanceWindowExecutionTasks(const DescribeMaintenanceWindowExecutionTasksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeMaintenanceWindowExecutionTasksOutcome(DescribeMaintenanceWindowExecutionTasksResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMaintenanceWindowExecutionTasksOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMaintenanceWindowExecutionTasksAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeMaintenanceWindowExecutionTasksAsyncHelper(const DescribeMaintenanceWindowExecutionTasksRequest& request, const DescribeMaintenanceWindowExecutionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMaintenanceWindowExecutionTasks(request), context);
}

DescribeMaintenanceWindowExecutionsOutcome SSMClient::DescribeMaintenanceWindowExecutions(const DescribeMaintenanceWindowExecutionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeMaintenanceWindowExecutionsOutcome(DescribeMaintenanceWindowExecutionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMaintenanceWindowExecutionsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMaintenanceWindowExecutionsAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeMaintenanceWindowExecutionsAsyncHelper(const DescribeMaintenanceWindowExecutionsRequest& request, const DescribeMaintenanceWindowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMaintenanceWindowExecutions(request), context);
}

DescribeMaintenanceWindowTargetsOutcome SSMClient::DescribeMaintenanceWindowTargets(const DescribeMaintenanceWindowTargetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeMaintenanceWindowTargetsOutcome(DescribeMaintenanceWindowTargetsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMaintenanceWindowTargetsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMaintenanceWindowTargetsAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeMaintenanceWindowTargetsAsyncHelper(const DescribeMaintenanceWindowTargetsRequest& request, const DescribeMaintenanceWindowTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMaintenanceWindowTargets(request), context);
}

DescribeMaintenanceWindowTasksOutcome SSMClient::DescribeMaintenanceWindowTasks(const DescribeMaintenanceWindowTasksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeMaintenanceWindowTasksOutcome(DescribeMaintenanceWindowTasksResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMaintenanceWindowTasksOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMaintenanceWindowTasksAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeMaintenanceWindowTasksAsyncHelper(const DescribeMaintenanceWindowTasksRequest& request, const DescribeMaintenanceWindowTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMaintenanceWindowTasks(request), context);
}

DescribeMaintenanceWindowsOutcome SSMClient::DescribeMaintenanceWindows(const DescribeMaintenanceWindowsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeMaintenanceWindowsOutcome(DescribeMaintenanceWindowsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMaintenanceWindowsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMaintenanceWindowsAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeMaintenanceWindowsAsyncHelper(const DescribeMaintenanceWindowsRequest& request, const DescribeMaintenanceWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMaintenanceWindows(request), context);
}

DescribeParametersOutcome SSMClient::DescribeParameters(const DescribeParametersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeParametersOutcome(DescribeParametersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeParametersOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeParametersAsyncHelper( request, handler, context ); } );
}

void SSMClient::DescribeParametersAsyncHelper(const DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeParameters(request), context);
}

GetAutomationExecutionOutcome SSMClient::GetAutomationExecution(const GetAutomationExecutionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetAutomationExecutionOutcome(GetAutomationExecutionResult(outcome.GetResult()));
  }
  else
  {
    return GetAutomationExecutionOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetAutomationExecutionAsyncHelper( request, handler, context ); } );
}

void SSMClient::GetAutomationExecutionAsyncHelper(const GetAutomationExecutionRequest& request, const GetAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAutomationExecution(request), context);
}

GetCommandInvocationOutcome SSMClient::GetCommandInvocation(const GetCommandInvocationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetCommandInvocationOutcome(GetCommandInvocationResult(outcome.GetResult()));
  }
  else
  {
    return GetCommandInvocationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetCommandInvocationAsyncHelper( request, handler, context ); } );
}

void SSMClient::GetCommandInvocationAsyncHelper(const GetCommandInvocationRequest& request, const GetCommandInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCommandInvocation(request), context);
}

GetDocumentOutcome SSMClient::GetDocument(const GetDocumentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetDocumentOutcome(GetDocumentResult(outcome.GetResult()));
  }
  else
  {
    return GetDocumentOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetDocumentAsyncHelper( request, handler, context ); } );
}

void SSMClient::GetDocumentAsyncHelper(const GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDocument(request), context);
}

GetInventoryOutcome SSMClient::GetInventory(const GetInventoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetInventoryOutcome(GetInventoryResult(outcome.GetResult()));
  }
  else
  {
    return GetInventoryOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetInventoryAsyncHelper( request, handler, context ); } );
}

void SSMClient::GetInventoryAsyncHelper(const GetInventoryRequest& request, const GetInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInventory(request), context);
}

GetInventorySchemaOutcome SSMClient::GetInventorySchema(const GetInventorySchemaRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetInventorySchemaOutcome(GetInventorySchemaResult(outcome.GetResult()));
  }
  else
  {
    return GetInventorySchemaOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetInventorySchemaAsyncHelper( request, handler, context ); } );
}

void SSMClient::GetInventorySchemaAsyncHelper(const GetInventorySchemaRequest& request, const GetInventorySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInventorySchema(request), context);
}

GetMaintenanceWindowOutcome SSMClient::GetMaintenanceWindow(const GetMaintenanceWindowRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetMaintenanceWindowOutcome(GetMaintenanceWindowResult(outcome.GetResult()));
  }
  else
  {
    return GetMaintenanceWindowOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetMaintenanceWindowAsyncHelper( request, handler, context ); } );
}

void SSMClient::GetMaintenanceWindowAsyncHelper(const GetMaintenanceWindowRequest& request, const GetMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMaintenanceWindow(request), context);
}

GetMaintenanceWindowExecutionOutcome SSMClient::GetMaintenanceWindowExecution(const GetMaintenanceWindowExecutionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetMaintenanceWindowExecutionOutcome(GetMaintenanceWindowExecutionResult(outcome.GetResult()));
  }
  else
  {
    return GetMaintenanceWindowExecutionOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetMaintenanceWindowExecutionAsyncHelper( request, handler, context ); } );
}

void SSMClient::GetMaintenanceWindowExecutionAsyncHelper(const GetMaintenanceWindowExecutionRequest& request, const GetMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMaintenanceWindowExecution(request), context);
}

GetMaintenanceWindowExecutionTaskOutcome SSMClient::GetMaintenanceWindowExecutionTask(const GetMaintenanceWindowExecutionTaskRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetMaintenanceWindowExecutionTaskOutcome(GetMaintenanceWindowExecutionTaskResult(outcome.GetResult()));
  }
  else
  {
    return GetMaintenanceWindowExecutionTaskOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetMaintenanceWindowExecutionTaskAsyncHelper( request, handler, context ); } );
}

void SSMClient::GetMaintenanceWindowExecutionTaskAsyncHelper(const GetMaintenanceWindowExecutionTaskRequest& request, const GetMaintenanceWindowExecutionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMaintenanceWindowExecutionTask(request), context);
}

GetParameterHistoryOutcome SSMClient::GetParameterHistory(const GetParameterHistoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetParameterHistoryOutcome(GetParameterHistoryResult(outcome.GetResult()));
  }
  else
  {
    return GetParameterHistoryOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetParameterHistoryAsyncHelper( request, handler, context ); } );
}

void SSMClient::GetParameterHistoryAsyncHelper(const GetParameterHistoryRequest& request, const GetParameterHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetParameterHistory(request), context);
}

GetParametersOutcome SSMClient::GetParameters(const GetParametersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetParametersOutcome(GetParametersResult(outcome.GetResult()));
  }
  else
  {
    return GetParametersOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetParametersAsyncHelper( request, handler, context ); } );
}

void SSMClient::GetParametersAsyncHelper(const GetParametersRequest& request, const GetParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetParameters(request), context);
}

ListAssociationsOutcome SSMClient::ListAssociations(const ListAssociationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAssociationsOutcome(ListAssociationsResult(outcome.GetResult()));
  }
  else
  {
    return ListAssociationsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListAssociationsAsyncHelper( request, handler, context ); } );
}

void SSMClient::ListAssociationsAsyncHelper(const ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssociations(request), context);
}

ListCommandInvocationsOutcome SSMClient::ListCommandInvocations(const ListCommandInvocationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListCommandInvocationsOutcome(ListCommandInvocationsResult(outcome.GetResult()));
  }
  else
  {
    return ListCommandInvocationsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListCommandInvocationsAsyncHelper( request, handler, context ); } );
}

void SSMClient::ListCommandInvocationsAsyncHelper(const ListCommandInvocationsRequest& request, const ListCommandInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCommandInvocations(request), context);
}

ListCommandsOutcome SSMClient::ListCommands(const ListCommandsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListCommandsOutcome(ListCommandsResult(outcome.GetResult()));
  }
  else
  {
    return ListCommandsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListCommandsAsyncHelper( request, handler, context ); } );
}

void SSMClient::ListCommandsAsyncHelper(const ListCommandsRequest& request, const ListCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCommands(request), context);
}

ListDocumentVersionsOutcome SSMClient::ListDocumentVersions(const ListDocumentVersionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDocumentVersionsOutcome(ListDocumentVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListDocumentVersionsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListDocumentVersionsAsyncHelper( request, handler, context ); } );
}

void SSMClient::ListDocumentVersionsAsyncHelper(const ListDocumentVersionsRequest& request, const ListDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDocumentVersions(request), context);
}

ListDocumentsOutcome SSMClient::ListDocuments(const ListDocumentsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDocumentsOutcome(ListDocumentsResult(outcome.GetResult()));
  }
  else
  {
    return ListDocumentsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListDocumentsAsyncHelper( request, handler, context ); } );
}

void SSMClient::ListDocumentsAsyncHelper(const ListDocumentsRequest& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDocuments(request), context);
}

ListInventoryEntriesOutcome SSMClient::ListInventoryEntries(const ListInventoryEntriesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListInventoryEntriesOutcome(ListInventoryEntriesResult(outcome.GetResult()));
  }
  else
  {
    return ListInventoryEntriesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListInventoryEntriesAsyncHelper( request, handler, context ); } );
}

void SSMClient::ListInventoryEntriesAsyncHelper(const ListInventoryEntriesRequest& request, const ListInventoryEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInventoryEntries(request), context);
}

ListTagsForResourceOutcome SSMClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void SSMClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ModifyDocumentPermissionOutcome SSMClient::ModifyDocumentPermission(const ModifyDocumentPermissionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyDocumentPermissionOutcome(ModifyDocumentPermissionResult(outcome.GetResult()));
  }
  else
  {
    return ModifyDocumentPermissionOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ModifyDocumentPermissionAsyncHelper( request, handler, context ); } );
}

void SSMClient::ModifyDocumentPermissionAsyncHelper(const ModifyDocumentPermissionRequest& request, const ModifyDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyDocumentPermission(request), context);
}

PutInventoryOutcome SSMClient::PutInventory(const PutInventoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutInventoryOutcome(PutInventoryResult(outcome.GetResult()));
  }
  else
  {
    return PutInventoryOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutInventoryAsyncHelper( request, handler, context ); } );
}

void SSMClient::PutInventoryAsyncHelper(const PutInventoryRequest& request, const PutInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutInventory(request), context);
}

PutParameterOutcome SSMClient::PutParameter(const PutParameterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutParameterOutcome(PutParameterResult(outcome.GetResult()));
  }
  else
  {
    return PutParameterOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutParameterAsyncHelper( request, handler, context ); } );
}

void SSMClient::PutParameterAsyncHelper(const PutParameterRequest& request, const PutParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutParameter(request), context);
}

RegisterTargetWithMaintenanceWindowOutcome SSMClient::RegisterTargetWithMaintenanceWindow(const RegisterTargetWithMaintenanceWindowRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterTargetWithMaintenanceWindowOutcome(RegisterTargetWithMaintenanceWindowResult(outcome.GetResult()));
  }
  else
  {
    return RegisterTargetWithMaintenanceWindowOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->RegisterTargetWithMaintenanceWindowAsyncHelper( request, handler, context ); } );
}

void SSMClient::RegisterTargetWithMaintenanceWindowAsyncHelper(const RegisterTargetWithMaintenanceWindowRequest& request, const RegisterTargetWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterTargetWithMaintenanceWindow(request), context);
}

RegisterTaskWithMaintenanceWindowOutcome SSMClient::RegisterTaskWithMaintenanceWindow(const RegisterTaskWithMaintenanceWindowRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterTaskWithMaintenanceWindowOutcome(RegisterTaskWithMaintenanceWindowResult(outcome.GetResult()));
  }
  else
  {
    return RegisterTaskWithMaintenanceWindowOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->RegisterTaskWithMaintenanceWindowAsyncHelper( request, handler, context ); } );
}

void SSMClient::RegisterTaskWithMaintenanceWindowAsyncHelper(const RegisterTaskWithMaintenanceWindowRequest& request, const RegisterTaskWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterTaskWithMaintenanceWindow(request), context);
}

RemoveTagsFromResourceOutcome SSMClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveTagsFromResourceOutcome(RemoveTagsFromResourceResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTagsFromResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsFromResourceAsyncHelper( request, handler, context ); } );
}

void SSMClient::RemoveTagsFromResourceAsyncHelper(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromResource(request), context);
}

SendCommandOutcome SSMClient::SendCommand(const SendCommandRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SendCommandOutcome(SendCommandResult(outcome.GetResult()));
  }
  else
  {
    return SendCommandOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->SendCommandAsyncHelper( request, handler, context ); } );
}

void SSMClient::SendCommandAsyncHelper(const SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendCommand(request), context);
}

StartAutomationExecutionOutcome SSMClient::StartAutomationExecution(const StartAutomationExecutionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StartAutomationExecutionOutcome(StartAutomationExecutionResult(outcome.GetResult()));
  }
  else
  {
    return StartAutomationExecutionOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StartAutomationExecutionAsyncHelper( request, handler, context ); } );
}

void SSMClient::StartAutomationExecutionAsyncHelper(const StartAutomationExecutionRequest& request, const StartAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartAutomationExecution(request), context);
}

StopAutomationExecutionOutcome SSMClient::StopAutomationExecution(const StopAutomationExecutionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StopAutomationExecutionOutcome(StopAutomationExecutionResult(outcome.GetResult()));
  }
  else
  {
    return StopAutomationExecutionOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StopAutomationExecutionAsyncHelper( request, handler, context ); } );
}

void SSMClient::StopAutomationExecutionAsyncHelper(const StopAutomationExecutionRequest& request, const StopAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopAutomationExecution(request), context);
}

UpdateAssociationOutcome SSMClient::UpdateAssociation(const UpdateAssociationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateAssociationOutcome(UpdateAssociationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAssociationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAssociationAsyncHelper( request, handler, context ); } );
}

void SSMClient::UpdateAssociationAsyncHelper(const UpdateAssociationRequest& request, const UpdateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAssociation(request), context);
}

UpdateAssociationStatusOutcome SSMClient::UpdateAssociationStatus(const UpdateAssociationStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateAssociationStatusOutcome(UpdateAssociationStatusResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAssociationStatusOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAssociationStatusAsyncHelper( request, handler, context ); } );
}

void SSMClient::UpdateAssociationStatusAsyncHelper(const UpdateAssociationStatusRequest& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAssociationStatus(request), context);
}

UpdateDocumentOutcome SSMClient::UpdateDocument(const UpdateDocumentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateDocumentOutcome(UpdateDocumentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDocumentOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDocumentAsyncHelper( request, handler, context ); } );
}

void SSMClient::UpdateDocumentAsyncHelper(const UpdateDocumentRequest& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDocument(request), context);
}

UpdateDocumentDefaultVersionOutcome SSMClient::UpdateDocumentDefaultVersion(const UpdateDocumentDefaultVersionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateDocumentDefaultVersionOutcome(UpdateDocumentDefaultVersionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDocumentDefaultVersionOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDocumentDefaultVersionAsyncHelper( request, handler, context ); } );
}

void SSMClient::UpdateDocumentDefaultVersionAsyncHelper(const UpdateDocumentDefaultVersionRequest& request, const UpdateDocumentDefaultVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDocumentDefaultVersion(request), context);
}

UpdateMaintenanceWindowOutcome SSMClient::UpdateMaintenanceWindow(const UpdateMaintenanceWindowRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateMaintenanceWindowOutcome(UpdateMaintenanceWindowResult(outcome.GetResult()));
  }
  else
  {
    return UpdateMaintenanceWindowOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMaintenanceWindowAsyncHelper( request, handler, context ); } );
}

void SSMClient::UpdateMaintenanceWindowAsyncHelper(const UpdateMaintenanceWindowRequest& request, const UpdateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMaintenanceWindow(request), context);
}

UpdateManagedInstanceRoleOutcome SSMClient::UpdateManagedInstanceRole(const UpdateManagedInstanceRoleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateManagedInstanceRoleOutcome(UpdateManagedInstanceRoleResult(outcome.GetResult()));
  }
  else
  {
    return UpdateManagedInstanceRoleOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateManagedInstanceRoleAsyncHelper( request, handler, context ); } );
}

void SSMClient::UpdateManagedInstanceRoleAsyncHelper(const UpdateManagedInstanceRoleRequest& request, const UpdateManagedInstanceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateManagedInstanceRole(request), context);
}

