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

#include <aws/dms/DatabaseMigrationServiceClient.h>
#include <aws/dms/DatabaseMigrationServiceEndpoint.h>
#include <aws/dms/DatabaseMigrationServiceErrorMarshaller.h>
#include <aws/dms/model/AddTagsToResourceRequest.h>
#include <aws/dms/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/dms/model/CreateEndpointRequest.h>
#include <aws/dms/model/CreateEventSubscriptionRequest.h>
#include <aws/dms/model/CreateReplicationInstanceRequest.h>
#include <aws/dms/model/CreateReplicationSubnetGroupRequest.h>
#include <aws/dms/model/CreateReplicationTaskRequest.h>
#include <aws/dms/model/DeleteCertificateRequest.h>
#include <aws/dms/model/DeleteEndpointRequest.h>
#include <aws/dms/model/DeleteEventSubscriptionRequest.h>
#include <aws/dms/model/DeleteReplicationInstanceRequest.h>
#include <aws/dms/model/DeleteReplicationSubnetGroupRequest.h>
#include <aws/dms/model/DeleteReplicationTaskRequest.h>
#include <aws/dms/model/DescribeAccountAttributesRequest.h>
#include <aws/dms/model/DescribeCertificatesRequest.h>
#include <aws/dms/model/DescribeConnectionsRequest.h>
#include <aws/dms/model/DescribeEndpointTypesRequest.h>
#include <aws/dms/model/DescribeEndpointsRequest.h>
#include <aws/dms/model/DescribeEventCategoriesRequest.h>
#include <aws/dms/model/DescribeEventSubscriptionsRequest.h>
#include <aws/dms/model/DescribeEventsRequest.h>
#include <aws/dms/model/DescribeOrderableReplicationInstancesRequest.h>
#include <aws/dms/model/DescribePendingMaintenanceActionsRequest.h>
#include <aws/dms/model/DescribeRefreshSchemasStatusRequest.h>
#include <aws/dms/model/DescribeReplicationInstanceTaskLogsRequest.h>
#include <aws/dms/model/DescribeReplicationInstancesRequest.h>
#include <aws/dms/model/DescribeReplicationSubnetGroupsRequest.h>
#include <aws/dms/model/DescribeReplicationTaskAssessmentResultsRequest.h>
#include <aws/dms/model/DescribeReplicationTasksRequest.h>
#include <aws/dms/model/DescribeSchemasRequest.h>
#include <aws/dms/model/DescribeTableStatisticsRequest.h>
#include <aws/dms/model/ImportCertificateRequest.h>
#include <aws/dms/model/ListTagsForResourceRequest.h>
#include <aws/dms/model/ModifyEndpointRequest.h>
#include <aws/dms/model/ModifyEventSubscriptionRequest.h>
#include <aws/dms/model/ModifyReplicationInstanceRequest.h>
#include <aws/dms/model/ModifyReplicationSubnetGroupRequest.h>
#include <aws/dms/model/ModifyReplicationTaskRequest.h>
#include <aws/dms/model/RebootReplicationInstanceRequest.h>
#include <aws/dms/model/RefreshSchemasRequest.h>
#include <aws/dms/model/ReloadTablesRequest.h>
#include <aws/dms/model/RemoveTagsFromResourceRequest.h>
#include <aws/dms/model/StartReplicationTaskRequest.h>
#include <aws/dms/model/StartReplicationTaskAssessmentRequest.h>
#include <aws/dms/model/StopReplicationTaskRequest.h>
#include <aws/dms/model/TestConnectionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DatabaseMigrationService;
using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "dms";
static const char* ALLOCATION_TAG = "DatabaseMigrationServiceClient";


DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DatabaseMigrationServiceClient::~DatabaseMigrationServiceClient()
{
}

void DatabaseMigrationServiceClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DatabaseMigrationServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DatabaseMigrationServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddTagsToResourceOutcome DatabaseMigrationServiceClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddTagsToResourceOutcome(AddTagsToResourceResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsToResourceOutcome(outcome.GetError());
  }
}

AddTagsToResourceOutcomeCallable DatabaseMigrationServiceClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsToResourceAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::AddTagsToResourceAsyncHelper(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToResource(request), context);
}

ApplyPendingMaintenanceActionOutcome DatabaseMigrationServiceClient::ApplyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ApplyPendingMaintenanceActionOutcome(ApplyPendingMaintenanceActionResult(outcome.GetResult()));
  }
  else
  {
    return ApplyPendingMaintenanceActionOutcome(outcome.GetError());
  }
}

ApplyPendingMaintenanceActionOutcomeCallable DatabaseMigrationServiceClient::ApplyPendingMaintenanceActionCallable(const ApplyPendingMaintenanceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplyPendingMaintenanceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplyPendingMaintenanceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ApplyPendingMaintenanceActionAsync(const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ApplyPendingMaintenanceActionAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::ApplyPendingMaintenanceActionAsyncHelper(const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ApplyPendingMaintenanceAction(request), context);
}

CreateEndpointOutcome DatabaseMigrationServiceClient::CreateEndpoint(const CreateEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateEndpointOutcome(CreateEndpointResult(outcome.GetResult()));
  }
  else
  {
    return CreateEndpointOutcome(outcome.GetError());
  }
}

CreateEndpointOutcomeCallable DatabaseMigrationServiceClient::CreateEndpointCallable(const CreateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::CreateEndpointAsync(const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEndpointAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::CreateEndpointAsyncHelper(const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEndpoint(request), context);
}

CreateEventSubscriptionOutcome DatabaseMigrationServiceClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateEventSubscriptionOutcome(CreateEventSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return CreateEventSubscriptionOutcome(outcome.GetError());
  }
}

CreateEventSubscriptionOutcomeCallable DatabaseMigrationServiceClient::CreateEventSubscriptionCallable(const CreateEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::CreateEventSubscriptionAsync(const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEventSubscriptionAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::CreateEventSubscriptionAsyncHelper(const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEventSubscription(request), context);
}

CreateReplicationInstanceOutcome DatabaseMigrationServiceClient::CreateReplicationInstance(const CreateReplicationInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateReplicationInstanceOutcome(CreateReplicationInstanceResult(outcome.GetResult()));
  }
  else
  {
    return CreateReplicationInstanceOutcome(outcome.GetError());
  }
}

CreateReplicationInstanceOutcomeCallable DatabaseMigrationServiceClient::CreateReplicationInstanceCallable(const CreateReplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::CreateReplicationInstanceAsync(const CreateReplicationInstanceRequest& request, const CreateReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateReplicationInstanceAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::CreateReplicationInstanceAsyncHelper(const CreateReplicationInstanceRequest& request, const CreateReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateReplicationInstance(request), context);
}

CreateReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::CreateReplicationSubnetGroup(const CreateReplicationSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateReplicationSubnetGroupOutcome(CreateReplicationSubnetGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateReplicationSubnetGroupOutcome(outcome.GetError());
  }
}

CreateReplicationSubnetGroupOutcomeCallable DatabaseMigrationServiceClient::CreateReplicationSubnetGroupCallable(const CreateReplicationSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::CreateReplicationSubnetGroupAsync(const CreateReplicationSubnetGroupRequest& request, const CreateReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateReplicationSubnetGroupAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::CreateReplicationSubnetGroupAsyncHelper(const CreateReplicationSubnetGroupRequest& request, const CreateReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateReplicationSubnetGroup(request), context);
}

CreateReplicationTaskOutcome DatabaseMigrationServiceClient::CreateReplicationTask(const CreateReplicationTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateReplicationTaskOutcome(CreateReplicationTaskResult(outcome.GetResult()));
  }
  else
  {
    return CreateReplicationTaskOutcome(outcome.GetError());
  }
}

CreateReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::CreateReplicationTaskCallable(const CreateReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::CreateReplicationTaskAsync(const CreateReplicationTaskRequest& request, const CreateReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateReplicationTaskAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::CreateReplicationTaskAsyncHelper(const CreateReplicationTaskRequest& request, const CreateReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateReplicationTask(request), context);
}

DeleteCertificateOutcome DatabaseMigrationServiceClient::DeleteCertificate(const DeleteCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCertificateOutcome(DeleteCertificateResult(outcome.GetResult()));
  }
  else
  {
    return DeleteCertificateOutcome(outcome.GetError());
  }
}

DeleteCertificateOutcomeCallable DatabaseMigrationServiceClient::DeleteCertificateCallable(const DeleteCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCertificateAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DeleteCertificateAsyncHelper(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCertificate(request), context);
}

DeleteEndpointOutcome DatabaseMigrationServiceClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEndpointOutcome(DeleteEndpointResult(outcome.GetResult()));
  }
  else
  {
    return DeleteEndpointOutcome(outcome.GetError());
  }
}

DeleteEndpointOutcomeCallable DatabaseMigrationServiceClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEndpointAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DeleteEndpointAsyncHelper(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEndpoint(request), context);
}

DeleteEventSubscriptionOutcome DatabaseMigrationServiceClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEventSubscriptionOutcome(DeleteEventSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteEventSubscriptionOutcome(outcome.GetError());
  }
}

DeleteEventSubscriptionOutcomeCallable DatabaseMigrationServiceClient::DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEventSubscriptionAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DeleteEventSubscriptionAsyncHelper(const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEventSubscription(request), context);
}

DeleteReplicationInstanceOutcome DatabaseMigrationServiceClient::DeleteReplicationInstance(const DeleteReplicationInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteReplicationInstanceOutcome(DeleteReplicationInstanceResult(outcome.GetResult()));
  }
  else
  {
    return DeleteReplicationInstanceOutcome(outcome.GetError());
  }
}

DeleteReplicationInstanceOutcomeCallable DatabaseMigrationServiceClient::DeleteReplicationInstanceCallable(const DeleteReplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteReplicationInstanceAsync(const DeleteReplicationInstanceRequest& request, const DeleteReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReplicationInstanceAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DeleteReplicationInstanceAsyncHelper(const DeleteReplicationInstanceRequest& request, const DeleteReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReplicationInstance(request), context);
}

DeleteReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::DeleteReplicationSubnetGroup(const DeleteReplicationSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteReplicationSubnetGroupOutcome(DeleteReplicationSubnetGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteReplicationSubnetGroupOutcome(outcome.GetError());
  }
}

DeleteReplicationSubnetGroupOutcomeCallable DatabaseMigrationServiceClient::DeleteReplicationSubnetGroupCallable(const DeleteReplicationSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteReplicationSubnetGroupAsync(const DeleteReplicationSubnetGroupRequest& request, const DeleteReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReplicationSubnetGroupAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DeleteReplicationSubnetGroupAsyncHelper(const DeleteReplicationSubnetGroupRequest& request, const DeleteReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReplicationSubnetGroup(request), context);
}

DeleteReplicationTaskOutcome DatabaseMigrationServiceClient::DeleteReplicationTask(const DeleteReplicationTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteReplicationTaskOutcome(DeleteReplicationTaskResult(outcome.GetResult()));
  }
  else
  {
    return DeleteReplicationTaskOutcome(outcome.GetError());
  }
}

DeleteReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::DeleteReplicationTaskCallable(const DeleteReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteReplicationTaskAsync(const DeleteReplicationTaskRequest& request, const DeleteReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReplicationTaskAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DeleteReplicationTaskAsyncHelper(const DeleteReplicationTaskRequest& request, const DeleteReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReplicationTask(request), context);
}

DescribeAccountAttributesOutcome DatabaseMigrationServiceClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAccountAttributesOutcome(DescribeAccountAttributesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAccountAttributesOutcome(outcome.GetError());
  }
}

DescribeAccountAttributesOutcomeCallable DatabaseMigrationServiceClient::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountAttributesAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeAccountAttributesAsyncHelper(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountAttributes(request), context);
}

DescribeCertificatesOutcome DatabaseMigrationServiceClient::DescribeCertificates(const DescribeCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCertificatesOutcome(DescribeCertificatesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCertificatesOutcome(outcome.GetError());
  }
}

DescribeCertificatesOutcomeCallable DatabaseMigrationServiceClient::DescribeCertificatesCallable(const DescribeCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeCertificatesAsync(const DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCertificatesAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeCertificatesAsyncHelper(const DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCertificates(request), context);
}

DescribeConnectionsOutcome DatabaseMigrationServiceClient::DescribeConnections(const DescribeConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeConnectionsOutcome(DescribeConnectionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConnectionsOutcome(outcome.GetError());
  }
}

DescribeConnectionsOutcomeCallable DatabaseMigrationServiceClient::DescribeConnectionsCallable(const DescribeConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeConnectionsAsync(const DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConnectionsAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeConnectionsAsyncHelper(const DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConnections(request), context);
}

DescribeEndpointTypesOutcome DatabaseMigrationServiceClient::DescribeEndpointTypes(const DescribeEndpointTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEndpointTypesOutcome(DescribeEndpointTypesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEndpointTypesOutcome(outcome.GetError());
  }
}

DescribeEndpointTypesOutcomeCallable DatabaseMigrationServiceClient::DescribeEndpointTypesCallable(const DescribeEndpointTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpointTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeEndpointTypesAsync(const DescribeEndpointTypesRequest& request, const DescribeEndpointTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEndpointTypesAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeEndpointTypesAsyncHelper(const DescribeEndpointTypesRequest& request, const DescribeEndpointTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEndpointTypes(request), context);
}

DescribeEndpointsOutcome DatabaseMigrationServiceClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEndpointsOutcome(DescribeEndpointsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEndpointsOutcome(outcome.GetError());
  }
}

DescribeEndpointsOutcomeCallable DatabaseMigrationServiceClient::DescribeEndpointsCallable(const DescribeEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeEndpointsAsync(const DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEndpointsAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeEndpointsAsyncHelper(const DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEndpoints(request), context);
}

DescribeEventCategoriesOutcome DatabaseMigrationServiceClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEventCategoriesOutcome(DescribeEventCategoriesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventCategoriesOutcome(outcome.GetError());
  }
}

DescribeEventCategoriesOutcomeCallable DatabaseMigrationServiceClient::DescribeEventCategoriesCallable(const DescribeEventCategoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventCategoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventCategories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeEventCategoriesAsync(const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventCategoriesAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeEventCategoriesAsyncHelper(const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventCategories(request), context);
}

DescribeEventSubscriptionsOutcome DatabaseMigrationServiceClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEventSubscriptionsOutcome(DescribeEventSubscriptionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventSubscriptionsOutcome(outcome.GetError());
  }
}

DescribeEventSubscriptionsOutcomeCallable DatabaseMigrationServiceClient::DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventSubscriptionsAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeEventSubscriptionsAsyncHelper(const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventSubscriptions(request), context);
}

DescribeEventsOutcome DatabaseMigrationServiceClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEventsOutcome(DescribeEventsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventsOutcome(outcome.GetError());
  }
}

DescribeEventsOutcomeCallable DatabaseMigrationServiceClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventsAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeEventsAsyncHelper(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEvents(request), context);
}

DescribeOrderableReplicationInstancesOutcome DatabaseMigrationServiceClient::DescribeOrderableReplicationInstances(const DescribeOrderableReplicationInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeOrderableReplicationInstancesOutcome(DescribeOrderableReplicationInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeOrderableReplicationInstancesOutcome(outcome.GetError());
  }
}

DescribeOrderableReplicationInstancesOutcomeCallable DatabaseMigrationServiceClient::DescribeOrderableReplicationInstancesCallable(const DescribeOrderableReplicationInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrderableReplicationInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrderableReplicationInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeOrderableReplicationInstancesAsync(const DescribeOrderableReplicationInstancesRequest& request, const DescribeOrderableReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOrderableReplicationInstancesAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeOrderableReplicationInstancesAsyncHelper(const DescribeOrderableReplicationInstancesRequest& request, const DescribeOrderableReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOrderableReplicationInstances(request), context);
}

DescribePendingMaintenanceActionsOutcome DatabaseMigrationServiceClient::DescribePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribePendingMaintenanceActionsOutcome(DescribePendingMaintenanceActionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribePendingMaintenanceActionsOutcome(outcome.GetError());
  }
}

DescribePendingMaintenanceActionsOutcomeCallable DatabaseMigrationServiceClient::DescribePendingMaintenanceActionsCallable(const DescribePendingMaintenanceActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePendingMaintenanceActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePendingMaintenanceActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePendingMaintenanceActionsAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribePendingMaintenanceActionsAsyncHelper(const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePendingMaintenanceActions(request), context);
}

DescribeRefreshSchemasStatusOutcome DatabaseMigrationServiceClient::DescribeRefreshSchemasStatus(const DescribeRefreshSchemasStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRefreshSchemasStatusOutcome(DescribeRefreshSchemasStatusResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRefreshSchemasStatusOutcome(outcome.GetError());
  }
}

DescribeRefreshSchemasStatusOutcomeCallable DatabaseMigrationServiceClient::DescribeRefreshSchemasStatusCallable(const DescribeRefreshSchemasStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRefreshSchemasStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRefreshSchemasStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeRefreshSchemasStatusAsync(const DescribeRefreshSchemasStatusRequest& request, const DescribeRefreshSchemasStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRefreshSchemasStatusAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeRefreshSchemasStatusAsyncHelper(const DescribeRefreshSchemasStatusRequest& request, const DescribeRefreshSchemasStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRefreshSchemasStatus(request), context);
}

DescribeReplicationInstanceTaskLogsOutcome DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogs(const DescribeReplicationInstanceTaskLogsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeReplicationInstanceTaskLogsOutcome(DescribeReplicationInstanceTaskLogsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReplicationInstanceTaskLogsOutcome(outcome.GetError());
  }
}

DescribeReplicationInstanceTaskLogsOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogsCallable(const DescribeReplicationInstanceTaskLogsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationInstanceTaskLogsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationInstanceTaskLogs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogsAsync(const DescribeReplicationInstanceTaskLogsRequest& request, const DescribeReplicationInstanceTaskLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReplicationInstanceTaskLogsAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogsAsyncHelper(const DescribeReplicationInstanceTaskLogsRequest& request, const DescribeReplicationInstanceTaskLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReplicationInstanceTaskLogs(request), context);
}

DescribeReplicationInstancesOutcome DatabaseMigrationServiceClient::DescribeReplicationInstances(const DescribeReplicationInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeReplicationInstancesOutcome(DescribeReplicationInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReplicationInstancesOutcome(outcome.GetError());
  }
}

DescribeReplicationInstancesOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationInstancesCallable(const DescribeReplicationInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeReplicationInstancesAsync(const DescribeReplicationInstancesRequest& request, const DescribeReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReplicationInstancesAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeReplicationInstancesAsyncHelper(const DescribeReplicationInstancesRequest& request, const DescribeReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReplicationInstances(request), context);
}

DescribeReplicationSubnetGroupsOutcome DatabaseMigrationServiceClient::DescribeReplicationSubnetGroups(const DescribeReplicationSubnetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeReplicationSubnetGroupsOutcome(DescribeReplicationSubnetGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReplicationSubnetGroupsOutcome(outcome.GetError());
  }
}

DescribeReplicationSubnetGroupsOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationSubnetGroupsCallable(const DescribeReplicationSubnetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationSubnetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationSubnetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeReplicationSubnetGroupsAsync(const DescribeReplicationSubnetGroupsRequest& request, const DescribeReplicationSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReplicationSubnetGroupsAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeReplicationSubnetGroupsAsyncHelper(const DescribeReplicationSubnetGroupsRequest& request, const DescribeReplicationSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReplicationSubnetGroups(request), context);
}

DescribeReplicationTaskAssessmentResultsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResults(const DescribeReplicationTaskAssessmentResultsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeReplicationTaskAssessmentResultsOutcome(DescribeReplicationTaskAssessmentResultsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReplicationTaskAssessmentResultsOutcome(outcome.GetError());
  }
}

DescribeReplicationTaskAssessmentResultsOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResultsCallable(const DescribeReplicationTaskAssessmentResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationTaskAssessmentResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationTaskAssessmentResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResultsAsync(const DescribeReplicationTaskAssessmentResultsRequest& request, const DescribeReplicationTaskAssessmentResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReplicationTaskAssessmentResultsAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResultsAsyncHelper(const DescribeReplicationTaskAssessmentResultsRequest& request, const DescribeReplicationTaskAssessmentResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReplicationTaskAssessmentResults(request), context);
}

DescribeReplicationTasksOutcome DatabaseMigrationServiceClient::DescribeReplicationTasks(const DescribeReplicationTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeReplicationTasksOutcome(DescribeReplicationTasksResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReplicationTasksOutcome(outcome.GetError());
  }
}

DescribeReplicationTasksOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationTasksCallable(const DescribeReplicationTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeReplicationTasksAsync(const DescribeReplicationTasksRequest& request, const DescribeReplicationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReplicationTasksAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeReplicationTasksAsyncHelper(const DescribeReplicationTasksRequest& request, const DescribeReplicationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReplicationTasks(request), context);
}

DescribeSchemasOutcome DatabaseMigrationServiceClient::DescribeSchemas(const DescribeSchemasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSchemasOutcome(DescribeSchemasResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSchemasOutcome(outcome.GetError());
  }
}

DescribeSchemasOutcomeCallable DatabaseMigrationServiceClient::DescribeSchemasCallable(const DescribeSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeSchemasAsync(const DescribeSchemasRequest& request, const DescribeSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSchemasAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeSchemasAsyncHelper(const DescribeSchemasRequest& request, const DescribeSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSchemas(request), context);
}

DescribeTableStatisticsOutcome DatabaseMigrationServiceClient::DescribeTableStatistics(const DescribeTableStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTableStatisticsOutcome(DescribeTableStatisticsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTableStatisticsOutcome(outcome.GetError());
  }
}

DescribeTableStatisticsOutcomeCallable DatabaseMigrationServiceClient::DescribeTableStatisticsCallable(const DescribeTableStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTableStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTableStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeTableStatisticsAsync(const DescribeTableStatisticsRequest& request, const DescribeTableStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTableStatisticsAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::DescribeTableStatisticsAsyncHelper(const DescribeTableStatisticsRequest& request, const DescribeTableStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTableStatistics(request), context);
}

ImportCertificateOutcome DatabaseMigrationServiceClient::ImportCertificate(const ImportCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ImportCertificateOutcome(ImportCertificateResult(outcome.GetResult()));
  }
  else
  {
    return ImportCertificateOutcome(outcome.GetError());
  }
}

ImportCertificateOutcomeCallable DatabaseMigrationServiceClient::ImportCertificateCallable(const ImportCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ImportCertificateAsync(const ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportCertificateAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::ImportCertificateAsyncHelper(const ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportCertificate(request), context);
}

ListTagsForResourceOutcome DatabaseMigrationServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable DatabaseMigrationServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ModifyEndpointOutcome DatabaseMigrationServiceClient::ModifyEndpoint(const ModifyEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ModifyEndpointOutcome(ModifyEndpointResult(outcome.GetResult()));
  }
  else
  {
    return ModifyEndpointOutcome(outcome.GetError());
  }
}

ModifyEndpointOutcomeCallable DatabaseMigrationServiceClient::ModifyEndpointCallable(const ModifyEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ModifyEndpointAsync(const ModifyEndpointRequest& request, const ModifyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyEndpointAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::ModifyEndpointAsyncHelper(const ModifyEndpointRequest& request, const ModifyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyEndpoint(request), context);
}

ModifyEventSubscriptionOutcome DatabaseMigrationServiceClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ModifyEventSubscriptionOutcome(ModifyEventSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return ModifyEventSubscriptionOutcome(outcome.GetError());
  }
}

ModifyEventSubscriptionOutcomeCallable DatabaseMigrationServiceClient::ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyEventSubscriptionAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::ModifyEventSubscriptionAsyncHelper(const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyEventSubscription(request), context);
}

ModifyReplicationInstanceOutcome DatabaseMigrationServiceClient::ModifyReplicationInstance(const ModifyReplicationInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ModifyReplicationInstanceOutcome(ModifyReplicationInstanceResult(outcome.GetResult()));
  }
  else
  {
    return ModifyReplicationInstanceOutcome(outcome.GetError());
  }
}

ModifyReplicationInstanceOutcomeCallable DatabaseMigrationServiceClient::ModifyReplicationInstanceCallable(const ModifyReplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ModifyReplicationInstanceAsync(const ModifyReplicationInstanceRequest& request, const ModifyReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyReplicationInstanceAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::ModifyReplicationInstanceAsyncHelper(const ModifyReplicationInstanceRequest& request, const ModifyReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyReplicationInstance(request), context);
}

ModifyReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::ModifyReplicationSubnetGroup(const ModifyReplicationSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ModifyReplicationSubnetGroupOutcome(ModifyReplicationSubnetGroupResult(outcome.GetResult()));
  }
  else
  {
    return ModifyReplicationSubnetGroupOutcome(outcome.GetError());
  }
}

ModifyReplicationSubnetGroupOutcomeCallable DatabaseMigrationServiceClient::ModifyReplicationSubnetGroupCallable(const ModifyReplicationSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReplicationSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReplicationSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ModifyReplicationSubnetGroupAsync(const ModifyReplicationSubnetGroupRequest& request, const ModifyReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyReplicationSubnetGroupAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::ModifyReplicationSubnetGroupAsyncHelper(const ModifyReplicationSubnetGroupRequest& request, const ModifyReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyReplicationSubnetGroup(request), context);
}

ModifyReplicationTaskOutcome DatabaseMigrationServiceClient::ModifyReplicationTask(const ModifyReplicationTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ModifyReplicationTaskOutcome(ModifyReplicationTaskResult(outcome.GetResult()));
  }
  else
  {
    return ModifyReplicationTaskOutcome(outcome.GetError());
  }
}

ModifyReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::ModifyReplicationTaskCallable(const ModifyReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ModifyReplicationTaskAsync(const ModifyReplicationTaskRequest& request, const ModifyReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyReplicationTaskAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::ModifyReplicationTaskAsyncHelper(const ModifyReplicationTaskRequest& request, const ModifyReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyReplicationTask(request), context);
}

RebootReplicationInstanceOutcome DatabaseMigrationServiceClient::RebootReplicationInstance(const RebootReplicationInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RebootReplicationInstanceOutcome(RebootReplicationInstanceResult(outcome.GetResult()));
  }
  else
  {
    return RebootReplicationInstanceOutcome(outcome.GetError());
  }
}

RebootReplicationInstanceOutcomeCallable DatabaseMigrationServiceClient::RebootReplicationInstanceCallable(const RebootReplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootReplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootReplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::RebootReplicationInstanceAsync(const RebootReplicationInstanceRequest& request, const RebootReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RebootReplicationInstanceAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::RebootReplicationInstanceAsyncHelper(const RebootReplicationInstanceRequest& request, const RebootReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebootReplicationInstance(request), context);
}

RefreshSchemasOutcome DatabaseMigrationServiceClient::RefreshSchemas(const RefreshSchemasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RefreshSchemasOutcome(RefreshSchemasResult(outcome.GetResult()));
  }
  else
  {
    return RefreshSchemasOutcome(outcome.GetError());
  }
}

RefreshSchemasOutcomeCallable DatabaseMigrationServiceClient::RefreshSchemasCallable(const RefreshSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RefreshSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RefreshSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::RefreshSchemasAsync(const RefreshSchemasRequest& request, const RefreshSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RefreshSchemasAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::RefreshSchemasAsyncHelper(const RefreshSchemasRequest& request, const RefreshSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RefreshSchemas(request), context);
}

ReloadTablesOutcome DatabaseMigrationServiceClient::ReloadTables(const ReloadTablesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ReloadTablesOutcome(ReloadTablesResult(outcome.GetResult()));
  }
  else
  {
    return ReloadTablesOutcome(outcome.GetError());
  }
}

ReloadTablesOutcomeCallable DatabaseMigrationServiceClient::ReloadTablesCallable(const ReloadTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReloadTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReloadTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ReloadTablesAsync(const ReloadTablesRequest& request, const ReloadTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReloadTablesAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::ReloadTablesAsyncHelper(const ReloadTablesRequest& request, const ReloadTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReloadTables(request), context);
}

RemoveTagsFromResourceOutcome DatabaseMigrationServiceClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveTagsFromResourceOutcome(RemoveTagsFromResourceResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTagsFromResourceOutcome(outcome.GetError());
  }
}

RemoveTagsFromResourceOutcomeCallable DatabaseMigrationServiceClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsFromResourceAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::RemoveTagsFromResourceAsyncHelper(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromResource(request), context);
}

StartReplicationTaskOutcome DatabaseMigrationServiceClient::StartReplicationTask(const StartReplicationTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartReplicationTaskOutcome(StartReplicationTaskResult(outcome.GetResult()));
  }
  else
  {
    return StartReplicationTaskOutcome(outcome.GetError());
  }
}

StartReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::StartReplicationTaskCallable(const StartReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::StartReplicationTaskAsync(const StartReplicationTaskRequest& request, const StartReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartReplicationTaskAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::StartReplicationTaskAsyncHelper(const StartReplicationTaskRequest& request, const StartReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartReplicationTask(request), context);
}

StartReplicationTaskAssessmentOutcome DatabaseMigrationServiceClient::StartReplicationTaskAssessment(const StartReplicationTaskAssessmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartReplicationTaskAssessmentOutcome(StartReplicationTaskAssessmentResult(outcome.GetResult()));
  }
  else
  {
    return StartReplicationTaskAssessmentOutcome(outcome.GetError());
  }
}

StartReplicationTaskAssessmentOutcomeCallable DatabaseMigrationServiceClient::StartReplicationTaskAssessmentCallable(const StartReplicationTaskAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReplicationTaskAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReplicationTaskAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::StartReplicationTaskAssessmentAsync(const StartReplicationTaskAssessmentRequest& request, const StartReplicationTaskAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartReplicationTaskAssessmentAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::StartReplicationTaskAssessmentAsyncHelper(const StartReplicationTaskAssessmentRequest& request, const StartReplicationTaskAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartReplicationTaskAssessment(request), context);
}

StopReplicationTaskOutcome DatabaseMigrationServiceClient::StopReplicationTask(const StopReplicationTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopReplicationTaskOutcome(StopReplicationTaskResult(outcome.GetResult()));
  }
  else
  {
    return StopReplicationTaskOutcome(outcome.GetError());
  }
}

StopReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::StopReplicationTaskCallable(const StopReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::StopReplicationTaskAsync(const StopReplicationTaskRequest& request, const StopReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopReplicationTaskAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::StopReplicationTaskAsyncHelper(const StopReplicationTaskRequest& request, const StopReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopReplicationTask(request), context);
}

TestConnectionOutcome DatabaseMigrationServiceClient::TestConnection(const TestConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TestConnectionOutcome(TestConnectionResult(outcome.GetResult()));
  }
  else
  {
    return TestConnectionOutcome(outcome.GetError());
  }
}

TestConnectionOutcomeCallable DatabaseMigrationServiceClient::TestConnectionCallable(const TestConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::TestConnectionAsync(const TestConnectionRequest& request, const TestConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TestConnectionAsyncHelper( request, handler, context ); } );
}

void DatabaseMigrationServiceClient::TestConnectionAsyncHelper(const TestConnectionRequest& request, const TestConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestConnection(request), context);
}

