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

#include <aws/memorydb/MemoryDBClient.h>
#include <aws/memorydb/MemoryDBEndpoint.h>
#include <aws/memorydb/MemoryDBErrorMarshaller.h>
#include <aws/memorydb/model/BatchUpdateClusterRequest.h>
#include <aws/memorydb/model/CopySnapshotRequest.h>
#include <aws/memorydb/model/CreateACLRequest.h>
#include <aws/memorydb/model/CreateClusterRequest.h>
#include <aws/memorydb/model/CreateParameterGroupRequest.h>
#include <aws/memorydb/model/CreateSnapshotRequest.h>
#include <aws/memorydb/model/CreateSubnetGroupRequest.h>
#include <aws/memorydb/model/CreateUserRequest.h>
#include <aws/memorydb/model/DeleteACLRequest.h>
#include <aws/memorydb/model/DeleteClusterRequest.h>
#include <aws/memorydb/model/DeleteParameterGroupRequest.h>
#include <aws/memorydb/model/DeleteSnapshotRequest.h>
#include <aws/memorydb/model/DeleteSubnetGroupRequest.h>
#include <aws/memorydb/model/DeleteUserRequest.h>
#include <aws/memorydb/model/DescribeACLsRequest.h>
#include <aws/memorydb/model/DescribeClustersRequest.h>
#include <aws/memorydb/model/DescribeEngineVersionsRequest.h>
#include <aws/memorydb/model/DescribeEventsRequest.h>
#include <aws/memorydb/model/DescribeParameterGroupsRequest.h>
#include <aws/memorydb/model/DescribeParametersRequest.h>
#include <aws/memorydb/model/DescribeServiceUpdatesRequest.h>
#include <aws/memorydb/model/DescribeSnapshotsRequest.h>
#include <aws/memorydb/model/DescribeSubnetGroupsRequest.h>
#include <aws/memorydb/model/DescribeUsersRequest.h>
#include <aws/memorydb/model/FailoverShardRequest.h>
#include <aws/memorydb/model/ListAllowedNodeTypeUpdatesRequest.h>
#include <aws/memorydb/model/ListTagsRequest.h>
#include <aws/memorydb/model/ResetParameterGroupRequest.h>
#include <aws/memorydb/model/TagResourceRequest.h>
#include <aws/memorydb/model/UntagResourceRequest.h>
#include <aws/memorydb/model/UpdateACLRequest.h>
#include <aws/memorydb/model/UpdateClusterRequest.h>
#include <aws/memorydb/model/UpdateParameterGroupRequest.h>
#include <aws/memorydb/model/UpdateSubnetGroupRequest.h>
#include <aws/memorydb/model/UpdateUserRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MemoryDB;
using namespace Aws::MemoryDB::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "memorydb";
static const char* ALLOCATION_TAG = "MemoryDBClient";

MemoryDBClient::MemoryDBClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MemoryDBErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MemoryDBClient::MemoryDBClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MemoryDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MemoryDBClient::MemoryDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MemoryDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MemoryDBClient::~MemoryDBClient()
{
}

void MemoryDBClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("MemoryDB");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MemoryDBEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MemoryDBClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchUpdateClusterOutcome MemoryDBClient::BatchUpdateCluster(const BatchUpdateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchUpdateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchUpdateClusterOutcomeCallable MemoryDBClient::BatchUpdateClusterCallable(const BatchUpdateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::BatchUpdateClusterAsync(const BatchUpdateClusterRequest& request, const BatchUpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchUpdateClusterAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::BatchUpdateClusterAsyncHelper(const BatchUpdateClusterRequest& request, const BatchUpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchUpdateCluster(request), context);
}

CopySnapshotOutcome MemoryDBClient::CopySnapshot(const CopySnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CopySnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CopySnapshotOutcomeCallable MemoryDBClient::CopySnapshotCallable(const CopySnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopySnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopySnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::CopySnapshotAsync(const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopySnapshotAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::CopySnapshotAsyncHelper(const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopySnapshot(request), context);
}

CreateACLOutcome MemoryDBClient::CreateACL(const CreateACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateACLOutcomeCallable MemoryDBClient::CreateACLCallable(const CreateACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::CreateACLAsync(const CreateACLRequest& request, const CreateACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateACLAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::CreateACLAsyncHelper(const CreateACLRequest& request, const CreateACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateACL(request), context);
}

CreateClusterOutcome MemoryDBClient::CreateCluster(const CreateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateClusterOutcomeCallable MemoryDBClient::CreateClusterCallable(const CreateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateClusterAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::CreateClusterAsyncHelper(const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCluster(request), context);
}

CreateParameterGroupOutcome MemoryDBClient::CreateParameterGroup(const CreateParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateParameterGroupOutcomeCallable MemoryDBClient::CreateParameterGroupCallable(const CreateParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::CreateParameterGroupAsync(const CreateParameterGroupRequest& request, const CreateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateParameterGroupAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::CreateParameterGroupAsyncHelper(const CreateParameterGroupRequest& request, const CreateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateParameterGroup(request), context);
}

CreateSnapshotOutcome MemoryDBClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSnapshotOutcomeCallable MemoryDBClient::CreateSnapshotCallable(const CreateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSnapshotAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::CreateSnapshotAsyncHelper(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSnapshot(request), context);
}

CreateSubnetGroupOutcome MemoryDBClient::CreateSubnetGroup(const CreateSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSubnetGroupOutcomeCallable MemoryDBClient::CreateSubnetGroupCallable(const CreateSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::CreateSubnetGroupAsync(const CreateSubnetGroupRequest& request, const CreateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSubnetGroupAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::CreateSubnetGroupAsyncHelper(const CreateSubnetGroupRequest& request, const CreateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSubnetGroup(request), context);
}

CreateUserOutcome MemoryDBClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserOutcomeCallable MemoryDBClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::CreateUserAsyncHelper(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUser(request), context);
}

DeleteACLOutcome MemoryDBClient::DeleteACL(const DeleteACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteACLOutcomeCallable MemoryDBClient::DeleteACLCallable(const DeleteACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DeleteACLAsync(const DeleteACLRequest& request, const DeleteACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteACLAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DeleteACLAsyncHelper(const DeleteACLRequest& request, const DeleteACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteACL(request), context);
}

DeleteClusterOutcome MemoryDBClient::DeleteCluster(const DeleteClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteClusterOutcomeCallable MemoryDBClient::DeleteClusterCallable(const DeleteClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteClusterAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DeleteClusterAsyncHelper(const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCluster(request), context);
}

DeleteParameterGroupOutcome MemoryDBClient::DeleteParameterGroup(const DeleteParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteParameterGroupOutcomeCallable MemoryDBClient::DeleteParameterGroupCallable(const DeleteParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DeleteParameterGroupAsync(const DeleteParameterGroupRequest& request, const DeleteParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteParameterGroupAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DeleteParameterGroupAsyncHelper(const DeleteParameterGroupRequest& request, const DeleteParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteParameterGroup(request), context);
}

DeleteSnapshotOutcome MemoryDBClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSnapshotOutcomeCallable MemoryDBClient::DeleteSnapshotCallable(const DeleteSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSnapshotAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DeleteSnapshotAsyncHelper(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSnapshot(request), context);
}

DeleteSubnetGroupOutcome MemoryDBClient::DeleteSubnetGroup(const DeleteSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSubnetGroupOutcomeCallable MemoryDBClient::DeleteSubnetGroupCallable(const DeleteSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DeleteSubnetGroupAsync(const DeleteSubnetGroupRequest& request, const DeleteSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSubnetGroupAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DeleteSubnetGroupAsyncHelper(const DeleteSubnetGroupRequest& request, const DeleteSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSubnetGroup(request), context);
}

DeleteUserOutcome MemoryDBClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcomeCallable MemoryDBClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DeleteUserAsyncHelper(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUser(request), context);
}

DescribeACLsOutcome MemoryDBClient::DescribeACLs(const DescribeACLsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeACLsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeACLsOutcomeCallable MemoryDBClient::DescribeACLsCallable(const DescribeACLsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeACLsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeACLs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DescribeACLsAsync(const DescribeACLsRequest& request, const DescribeACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeACLsAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DescribeACLsAsyncHelper(const DescribeACLsRequest& request, const DescribeACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeACLs(request), context);
}

DescribeClustersOutcome MemoryDBClient::DescribeClusters(const DescribeClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeClustersOutcomeCallable MemoryDBClient::DescribeClustersCallable(const DescribeClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeClustersAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DescribeClustersAsyncHelper(const DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeClusters(request), context);
}

DescribeEngineVersionsOutcome MemoryDBClient::DescribeEngineVersions(const DescribeEngineVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEngineVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEngineVersionsOutcomeCallable MemoryDBClient::DescribeEngineVersionsCallable(const DescribeEngineVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEngineVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEngineVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DescribeEngineVersionsAsync(const DescribeEngineVersionsRequest& request, const DescribeEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEngineVersionsAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DescribeEngineVersionsAsyncHelper(const DescribeEngineVersionsRequest& request, const DescribeEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEngineVersions(request), context);
}

DescribeEventsOutcome MemoryDBClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventsOutcomeCallable MemoryDBClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventsAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DescribeEventsAsyncHelper(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEvents(request), context);
}

DescribeParameterGroupsOutcome MemoryDBClient::DescribeParameterGroups(const DescribeParameterGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeParameterGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeParameterGroupsOutcomeCallable MemoryDBClient::DescribeParameterGroupsCallable(const DescribeParameterGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeParameterGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeParameterGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DescribeParameterGroupsAsync(const DescribeParameterGroupsRequest& request, const DescribeParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeParameterGroupsAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DescribeParameterGroupsAsyncHelper(const DescribeParameterGroupsRequest& request, const DescribeParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeParameterGroups(request), context);
}

DescribeParametersOutcome MemoryDBClient::DescribeParameters(const DescribeParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeParametersOutcomeCallable MemoryDBClient::DescribeParametersCallable(const DescribeParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DescribeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeParametersAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DescribeParametersAsyncHelper(const DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeParameters(request), context);
}

DescribeServiceUpdatesOutcome MemoryDBClient::DescribeServiceUpdates(const DescribeServiceUpdatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeServiceUpdatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServiceUpdatesOutcomeCallable MemoryDBClient::DescribeServiceUpdatesCallable(const DescribeServiceUpdatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceUpdatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServiceUpdates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DescribeServiceUpdatesAsync(const DescribeServiceUpdatesRequest& request, const DescribeServiceUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeServiceUpdatesAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DescribeServiceUpdatesAsyncHelper(const DescribeServiceUpdatesRequest& request, const DescribeServiceUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeServiceUpdates(request), context);
}

DescribeSnapshotsOutcome MemoryDBClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSnapshotsOutcomeCallable MemoryDBClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSnapshotsAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DescribeSnapshotsAsyncHelper(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSnapshots(request), context);
}

DescribeSubnetGroupsOutcome MemoryDBClient::DescribeSubnetGroups(const DescribeSubnetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSubnetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSubnetGroupsOutcomeCallable MemoryDBClient::DescribeSubnetGroupsCallable(const DescribeSubnetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSubnetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSubnetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DescribeSubnetGroupsAsync(const DescribeSubnetGroupsRequest& request, const DescribeSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSubnetGroupsAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DescribeSubnetGroupsAsyncHelper(const DescribeSubnetGroupsRequest& request, const DescribeSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSubnetGroups(request), context);
}

DescribeUsersOutcome MemoryDBClient::DescribeUsers(const DescribeUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUsersOutcomeCallable MemoryDBClient::DescribeUsersCallable(const DescribeUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUsersAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::DescribeUsersAsyncHelper(const DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUsers(request), context);
}

FailoverShardOutcome MemoryDBClient::FailoverShard(const FailoverShardRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return FailoverShardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

FailoverShardOutcomeCallable MemoryDBClient::FailoverShardCallable(const FailoverShardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FailoverShardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FailoverShard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::FailoverShardAsync(const FailoverShardRequest& request, const FailoverShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->FailoverShardAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::FailoverShardAsyncHelper(const FailoverShardRequest& request, const FailoverShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, FailoverShard(request), context);
}

ListAllowedNodeTypeUpdatesOutcome MemoryDBClient::ListAllowedNodeTypeUpdates(const ListAllowedNodeTypeUpdatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAllowedNodeTypeUpdatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAllowedNodeTypeUpdatesOutcomeCallable MemoryDBClient::ListAllowedNodeTypeUpdatesCallable(const ListAllowedNodeTypeUpdatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAllowedNodeTypeUpdatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAllowedNodeTypeUpdates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::ListAllowedNodeTypeUpdatesAsync(const ListAllowedNodeTypeUpdatesRequest& request, const ListAllowedNodeTypeUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAllowedNodeTypeUpdatesAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::ListAllowedNodeTypeUpdatesAsyncHelper(const ListAllowedNodeTypeUpdatesRequest& request, const ListAllowedNodeTypeUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAllowedNodeTypeUpdates(request), context);
}

ListTagsOutcome MemoryDBClient::ListTags(const ListTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcomeCallable MemoryDBClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::ListTagsAsyncHelper(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTags(request), context);
}

ResetParameterGroupOutcome MemoryDBClient::ResetParameterGroup(const ResetParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResetParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResetParameterGroupOutcomeCallable MemoryDBClient::ResetParameterGroupCallable(const ResetParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::ResetParameterGroupAsync(const ResetParameterGroupRequest& request, const ResetParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetParameterGroupAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::ResetParameterGroupAsyncHelper(const ResetParameterGroupRequest& request, const ResetParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetParameterGroup(request), context);
}

TagResourceOutcome MemoryDBClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable MemoryDBClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome MemoryDBClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable MemoryDBClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateACLOutcome MemoryDBClient::UpdateACL(const UpdateACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateACLOutcomeCallable MemoryDBClient::UpdateACLCallable(const UpdateACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::UpdateACLAsync(const UpdateACLRequest& request, const UpdateACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateACLAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::UpdateACLAsyncHelper(const UpdateACLRequest& request, const UpdateACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateACL(request), context);
}

UpdateClusterOutcome MemoryDBClient::UpdateCluster(const UpdateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateClusterOutcomeCallable MemoryDBClient::UpdateClusterCallable(const UpdateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::UpdateClusterAsync(const UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateClusterAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::UpdateClusterAsyncHelper(const UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCluster(request), context);
}

UpdateParameterGroupOutcome MemoryDBClient::UpdateParameterGroup(const UpdateParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateParameterGroupOutcomeCallable MemoryDBClient::UpdateParameterGroupCallable(const UpdateParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::UpdateParameterGroupAsync(const UpdateParameterGroupRequest& request, const UpdateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateParameterGroupAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::UpdateParameterGroupAsyncHelper(const UpdateParameterGroupRequest& request, const UpdateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateParameterGroup(request), context);
}

UpdateSubnetGroupOutcome MemoryDBClient::UpdateSubnetGroup(const UpdateSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSubnetGroupOutcomeCallable MemoryDBClient::UpdateSubnetGroupCallable(const UpdateSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::UpdateSubnetGroupAsync(const UpdateSubnetGroupRequest& request, const UpdateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSubnetGroupAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::UpdateSubnetGroupAsyncHelper(const UpdateSubnetGroupRequest& request, const UpdateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSubnetGroup(request), context);
}

UpdateUserOutcome MemoryDBClient::UpdateUser(const UpdateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserOutcomeCallable MemoryDBClient::UpdateUserCallable(const UpdateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MemoryDBClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserAsyncHelper( request, handler, context ); } );
}

void MemoryDBClient::UpdateUserAsyncHelper(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUser(request), context);
}

