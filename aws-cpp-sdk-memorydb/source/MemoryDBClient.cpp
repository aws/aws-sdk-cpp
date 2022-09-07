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
  AWSClient::SetServiceClientName("MemoryDB");
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

void MemoryDBClientBatchUpdateClusterAsyncHelper(MemoryDBClient const * const clientThis, const BatchUpdateClusterRequest& request, const BatchUpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchUpdateCluster(request), context);
}

void MemoryDBClient::BatchUpdateClusterAsync(const BatchUpdateClusterRequest& request, const BatchUpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientBatchUpdateClusterAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientCopySnapshotAsyncHelper(MemoryDBClient const * const clientThis, const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopySnapshot(request), context);
}

void MemoryDBClient::CopySnapshotAsync(const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientCopySnapshotAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientCreateACLAsyncHelper(MemoryDBClient const * const clientThis, const CreateACLRequest& request, const CreateACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateACL(request), context);
}

void MemoryDBClient::CreateACLAsync(const CreateACLRequest& request, const CreateACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientCreateACLAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientCreateClusterAsyncHelper(MemoryDBClient const * const clientThis, const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCluster(request), context);
}

void MemoryDBClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientCreateClusterAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientCreateParameterGroupAsyncHelper(MemoryDBClient const * const clientThis, const CreateParameterGroupRequest& request, const CreateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateParameterGroup(request), context);
}

void MemoryDBClient::CreateParameterGroupAsync(const CreateParameterGroupRequest& request, const CreateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientCreateParameterGroupAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientCreateSnapshotAsyncHelper(MemoryDBClient const * const clientThis, const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSnapshot(request), context);
}

void MemoryDBClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientCreateSnapshotAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientCreateSubnetGroupAsyncHelper(MemoryDBClient const * const clientThis, const CreateSubnetGroupRequest& request, const CreateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSubnetGroup(request), context);
}

void MemoryDBClient::CreateSubnetGroupAsync(const CreateSubnetGroupRequest& request, const CreateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientCreateSubnetGroupAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientCreateUserAsyncHelper(MemoryDBClient const * const clientThis, const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUser(request), context);
}

void MemoryDBClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientCreateUserAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDeleteACLAsyncHelper(MemoryDBClient const * const clientThis, const DeleteACLRequest& request, const DeleteACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteACL(request), context);
}

void MemoryDBClient::DeleteACLAsync(const DeleteACLRequest& request, const DeleteACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDeleteACLAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDeleteClusterAsyncHelper(MemoryDBClient const * const clientThis, const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCluster(request), context);
}

void MemoryDBClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDeleteClusterAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDeleteParameterGroupAsyncHelper(MemoryDBClient const * const clientThis, const DeleteParameterGroupRequest& request, const DeleteParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteParameterGroup(request), context);
}

void MemoryDBClient::DeleteParameterGroupAsync(const DeleteParameterGroupRequest& request, const DeleteParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDeleteParameterGroupAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDeleteSnapshotAsyncHelper(MemoryDBClient const * const clientThis, const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSnapshot(request), context);
}

void MemoryDBClient::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDeleteSnapshotAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDeleteSubnetGroupAsyncHelper(MemoryDBClient const * const clientThis, const DeleteSubnetGroupRequest& request, const DeleteSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSubnetGroup(request), context);
}

void MemoryDBClient::DeleteSubnetGroupAsync(const DeleteSubnetGroupRequest& request, const DeleteSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDeleteSubnetGroupAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDeleteUserAsyncHelper(MemoryDBClient const * const clientThis, const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUser(request), context);
}

void MemoryDBClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDeleteUserAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDescribeACLsAsyncHelper(MemoryDBClient const * const clientThis, const DescribeACLsRequest& request, const DescribeACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeACLs(request), context);
}

void MemoryDBClient::DescribeACLsAsync(const DescribeACLsRequest& request, const DescribeACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDescribeACLsAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDescribeClustersAsyncHelper(MemoryDBClient const * const clientThis, const DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeClusters(request), context);
}

void MemoryDBClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDescribeClustersAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDescribeEngineVersionsAsyncHelper(MemoryDBClient const * const clientThis, const DescribeEngineVersionsRequest& request, const DescribeEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEngineVersions(request), context);
}

void MemoryDBClient::DescribeEngineVersionsAsync(const DescribeEngineVersionsRequest& request, const DescribeEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDescribeEngineVersionsAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDescribeEventsAsyncHelper(MemoryDBClient const * const clientThis, const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEvents(request), context);
}

void MemoryDBClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDescribeEventsAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDescribeParameterGroupsAsyncHelper(MemoryDBClient const * const clientThis, const DescribeParameterGroupsRequest& request, const DescribeParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeParameterGroups(request), context);
}

void MemoryDBClient::DescribeParameterGroupsAsync(const DescribeParameterGroupsRequest& request, const DescribeParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDescribeParameterGroupsAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDescribeParametersAsyncHelper(MemoryDBClient const * const clientThis, const DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeParameters(request), context);
}

void MemoryDBClient::DescribeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDescribeParametersAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDescribeServiceUpdatesAsyncHelper(MemoryDBClient const * const clientThis, const DescribeServiceUpdatesRequest& request, const DescribeServiceUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeServiceUpdates(request), context);
}

void MemoryDBClient::DescribeServiceUpdatesAsync(const DescribeServiceUpdatesRequest& request, const DescribeServiceUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDescribeServiceUpdatesAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDescribeSnapshotsAsyncHelper(MemoryDBClient const * const clientThis, const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSnapshots(request), context);
}

void MemoryDBClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDescribeSnapshotsAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDescribeSubnetGroupsAsyncHelper(MemoryDBClient const * const clientThis, const DescribeSubnetGroupsRequest& request, const DescribeSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSubnetGroups(request), context);
}

void MemoryDBClient::DescribeSubnetGroupsAsync(const DescribeSubnetGroupsRequest& request, const DescribeSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDescribeSubnetGroupsAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientDescribeUsersAsyncHelper(MemoryDBClient const * const clientThis, const DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUsers(request), context);
}

void MemoryDBClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientDescribeUsersAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientFailoverShardAsyncHelper(MemoryDBClient const * const clientThis, const FailoverShardRequest& request, const FailoverShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->FailoverShard(request), context);
}

void MemoryDBClient::FailoverShardAsync(const FailoverShardRequest& request, const FailoverShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientFailoverShardAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientListAllowedNodeTypeUpdatesAsyncHelper(MemoryDBClient const * const clientThis, const ListAllowedNodeTypeUpdatesRequest& request, const ListAllowedNodeTypeUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAllowedNodeTypeUpdates(request), context);
}

void MemoryDBClient::ListAllowedNodeTypeUpdatesAsync(const ListAllowedNodeTypeUpdatesRequest& request, const ListAllowedNodeTypeUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientListAllowedNodeTypeUpdatesAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientListTagsAsyncHelper(MemoryDBClient const * const clientThis, const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTags(request), context);
}

void MemoryDBClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientListTagsAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientResetParameterGroupAsyncHelper(MemoryDBClient const * const clientThis, const ResetParameterGroupRequest& request, const ResetParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResetParameterGroup(request), context);
}

void MemoryDBClient::ResetParameterGroupAsync(const ResetParameterGroupRequest& request, const ResetParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientResetParameterGroupAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientTagResourceAsyncHelper(MemoryDBClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void MemoryDBClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientTagResourceAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientUntagResourceAsyncHelper(MemoryDBClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void MemoryDBClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientUntagResourceAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientUpdateACLAsyncHelper(MemoryDBClient const * const clientThis, const UpdateACLRequest& request, const UpdateACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateACL(request), context);
}

void MemoryDBClient::UpdateACLAsync(const UpdateACLRequest& request, const UpdateACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientUpdateACLAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientUpdateClusterAsyncHelper(MemoryDBClient const * const clientThis, const UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCluster(request), context);
}

void MemoryDBClient::UpdateClusterAsync(const UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientUpdateClusterAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientUpdateParameterGroupAsyncHelper(MemoryDBClient const * const clientThis, const UpdateParameterGroupRequest& request, const UpdateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateParameterGroup(request), context);
}

void MemoryDBClient::UpdateParameterGroupAsync(const UpdateParameterGroupRequest& request, const UpdateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientUpdateParameterGroupAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientUpdateSubnetGroupAsyncHelper(MemoryDBClient const * const clientThis, const UpdateSubnetGroupRequest& request, const UpdateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSubnetGroup(request), context);
}

void MemoryDBClient::UpdateSubnetGroupAsync(const UpdateSubnetGroupRequest& request, const UpdateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientUpdateSubnetGroupAsyncHelper( this, request, handler, context ); } );
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

void MemoryDBClientUpdateUserAsyncHelper(MemoryDBClient const * const clientThis, const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUser(request), context);
}

void MemoryDBClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MemoryDBClientUpdateUserAsyncHelper( this, request, handler, context ); } );
}

