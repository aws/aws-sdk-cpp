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
#include <aws/dms/DatabaseMigrationServiceClient.h>
#include <aws/dms/DatabaseMigrationServiceEndpoint.h>
#include <aws/dms/DatabaseMigrationServiceErrorMarshaller.h>
#include <aws/dms/model/AddTagsToResourceRequest.h>
#include <aws/dms/model/CreateEndpointRequest.h>
#include <aws/dms/model/CreateReplicationInstanceRequest.h>
#include <aws/dms/model/CreateReplicationSubnetGroupRequest.h>
#include <aws/dms/model/CreateReplicationTaskRequest.h>
#include <aws/dms/model/DeleteCertificateRequest.h>
#include <aws/dms/model/DeleteEndpointRequest.h>
#include <aws/dms/model/DeleteReplicationInstanceRequest.h>
#include <aws/dms/model/DeleteReplicationSubnetGroupRequest.h>
#include <aws/dms/model/DeleteReplicationTaskRequest.h>
#include <aws/dms/model/DescribeAccountAttributesRequest.h>
#include <aws/dms/model/DescribeCertificatesRequest.h>
#include <aws/dms/model/DescribeConnectionsRequest.h>
#include <aws/dms/model/DescribeEndpointTypesRequest.h>
#include <aws/dms/model/DescribeEndpointsRequest.h>
#include <aws/dms/model/DescribeOrderableReplicationInstancesRequest.h>
#include <aws/dms/model/DescribeRefreshSchemasStatusRequest.h>
#include <aws/dms/model/DescribeReplicationInstancesRequest.h>
#include <aws/dms/model/DescribeReplicationSubnetGroupsRequest.h>
#include <aws/dms/model/DescribeReplicationTasksRequest.h>
#include <aws/dms/model/DescribeSchemasRequest.h>
#include <aws/dms/model/DescribeTableStatisticsRequest.h>
#include <aws/dms/model/ImportCertificateRequest.h>
#include <aws/dms/model/ListTagsForResourceRequest.h>
#include <aws/dms/model/ModifyEndpointRequest.h>
#include <aws/dms/model/ModifyReplicationInstanceRequest.h>
#include <aws/dms/model/ModifyReplicationSubnetGroupRequest.h>
#include <aws/dms/model/RefreshSchemasRequest.h>
#include <aws/dms/model/RemoveTagsFromResourceRequest.h>
#include <aws/dms/model/StartReplicationTaskRequest.h>
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << DatabaseMigrationServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AddTagsToResourceOutcome DatabaseMigrationServiceClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
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

CreateEndpointOutcome DatabaseMigrationServiceClient::CreateEndpoint(const CreateEndpointRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

CreateReplicationInstanceOutcome DatabaseMigrationServiceClient::CreateReplicationInstance(const CreateReplicationInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DeleteReplicationInstanceOutcome DatabaseMigrationServiceClient::DeleteReplicationInstance(const DeleteReplicationInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DescribeOrderableReplicationInstancesOutcome DatabaseMigrationServiceClient::DescribeOrderableReplicationInstances(const DescribeOrderableReplicationInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DescribeRefreshSchemasStatusOutcome DatabaseMigrationServiceClient::DescribeRefreshSchemasStatus(const DescribeRefreshSchemasStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DescribeReplicationInstancesOutcome DatabaseMigrationServiceClient::DescribeReplicationInstances(const DescribeReplicationInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DescribeReplicationTasksOutcome DatabaseMigrationServiceClient::DescribeReplicationTasks(const DescribeReplicationTasksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

ModifyReplicationInstanceOutcome DatabaseMigrationServiceClient::ModifyReplicationInstance(const ModifyReplicationInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

RefreshSchemasOutcome DatabaseMigrationServiceClient::RefreshSchemas(const RefreshSchemasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

RemoveTagsFromResourceOutcome DatabaseMigrationServiceClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

StopReplicationTaskOutcome DatabaseMigrationServiceClient::StopReplicationTask(const StopReplicationTaskRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

