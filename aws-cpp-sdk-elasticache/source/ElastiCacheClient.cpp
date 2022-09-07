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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/elasticache/ElastiCacheClient.h>
#include <aws/elasticache/ElastiCacheEndpoint.h>
#include <aws/elasticache/ElastiCacheErrorMarshaller.h>
#include <aws/elasticache/model/AddTagsToResourceRequest.h>
#include <aws/elasticache/model/AuthorizeCacheSecurityGroupIngressRequest.h>
#include <aws/elasticache/model/BatchApplyUpdateActionRequest.h>
#include <aws/elasticache/model/BatchStopUpdateActionRequest.h>
#include <aws/elasticache/model/CompleteMigrationRequest.h>
#include <aws/elasticache/model/CopySnapshotRequest.h>
#include <aws/elasticache/model/CreateCacheClusterRequest.h>
#include <aws/elasticache/model/CreateCacheParameterGroupRequest.h>
#include <aws/elasticache/model/CreateCacheSecurityGroupRequest.h>
#include <aws/elasticache/model/CreateCacheSubnetGroupRequest.h>
#include <aws/elasticache/model/CreateGlobalReplicationGroupRequest.h>
#include <aws/elasticache/model/CreateReplicationGroupRequest.h>
#include <aws/elasticache/model/CreateSnapshotRequest.h>
#include <aws/elasticache/model/CreateUserRequest.h>
#include <aws/elasticache/model/CreateUserGroupRequest.h>
#include <aws/elasticache/model/DecreaseNodeGroupsInGlobalReplicationGroupRequest.h>
#include <aws/elasticache/model/DecreaseReplicaCountRequest.h>
#include <aws/elasticache/model/DeleteCacheClusterRequest.h>
#include <aws/elasticache/model/DeleteCacheParameterGroupRequest.h>
#include <aws/elasticache/model/DeleteCacheSecurityGroupRequest.h>
#include <aws/elasticache/model/DeleteCacheSubnetGroupRequest.h>
#include <aws/elasticache/model/DeleteGlobalReplicationGroupRequest.h>
#include <aws/elasticache/model/DeleteReplicationGroupRequest.h>
#include <aws/elasticache/model/DeleteSnapshotRequest.h>
#include <aws/elasticache/model/DeleteUserRequest.h>
#include <aws/elasticache/model/DeleteUserGroupRequest.h>
#include <aws/elasticache/model/DescribeCacheClustersRequest.h>
#include <aws/elasticache/model/DescribeCacheEngineVersionsRequest.h>
#include <aws/elasticache/model/DescribeCacheParameterGroupsRequest.h>
#include <aws/elasticache/model/DescribeCacheParametersRequest.h>
#include <aws/elasticache/model/DescribeCacheSecurityGroupsRequest.h>
#include <aws/elasticache/model/DescribeCacheSubnetGroupsRequest.h>
#include <aws/elasticache/model/DescribeEngineDefaultParametersRequest.h>
#include <aws/elasticache/model/DescribeEventsRequest.h>
#include <aws/elasticache/model/DescribeGlobalReplicationGroupsRequest.h>
#include <aws/elasticache/model/DescribeReplicationGroupsRequest.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesRequest.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesOfferingsRequest.h>
#include <aws/elasticache/model/DescribeServiceUpdatesRequest.h>
#include <aws/elasticache/model/DescribeSnapshotsRequest.h>
#include <aws/elasticache/model/DescribeUpdateActionsRequest.h>
#include <aws/elasticache/model/DescribeUserGroupsRequest.h>
#include <aws/elasticache/model/DescribeUsersRequest.h>
#include <aws/elasticache/model/DisassociateGlobalReplicationGroupRequest.h>
#include <aws/elasticache/model/FailoverGlobalReplicationGroupRequest.h>
#include <aws/elasticache/model/IncreaseNodeGroupsInGlobalReplicationGroupRequest.h>
#include <aws/elasticache/model/IncreaseReplicaCountRequest.h>
#include <aws/elasticache/model/ListAllowedNodeTypeModificationsRequest.h>
#include <aws/elasticache/model/ListTagsForResourceRequest.h>
#include <aws/elasticache/model/ModifyCacheClusterRequest.h>
#include <aws/elasticache/model/ModifyCacheParameterGroupRequest.h>
#include <aws/elasticache/model/ModifyCacheSubnetGroupRequest.h>
#include <aws/elasticache/model/ModifyGlobalReplicationGroupRequest.h>
#include <aws/elasticache/model/ModifyReplicationGroupRequest.h>
#include <aws/elasticache/model/ModifyReplicationGroupShardConfigurationRequest.h>
#include <aws/elasticache/model/ModifyUserRequest.h>
#include <aws/elasticache/model/ModifyUserGroupRequest.h>
#include <aws/elasticache/model/PurchaseReservedCacheNodesOfferingRequest.h>
#include <aws/elasticache/model/RebalanceSlotsInGlobalReplicationGroupRequest.h>
#include <aws/elasticache/model/RebootCacheClusterRequest.h>
#include <aws/elasticache/model/RemoveTagsFromResourceRequest.h>
#include <aws/elasticache/model/ResetCacheParameterGroupRequest.h>
#include <aws/elasticache/model/RevokeCacheSecurityGroupIngressRequest.h>
#include <aws/elasticache/model/StartMigrationRequest.h>
#include <aws/elasticache/model/TestFailoverRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElastiCache;
using namespace Aws::ElastiCache::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "elasticache";
static const char* ALLOCATION_TAG = "ElastiCacheClient";

ElastiCacheClient::ElastiCacheClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElastiCacheClient::ElastiCacheClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElastiCacheClient::ElastiCacheClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElastiCacheClient::~ElastiCacheClient()
{
}

void ElastiCacheClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ElastiCache");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ElastiCacheEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ElastiCacheClient::OverrideEndpoint(const Aws::String& endpoint)
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

Aws::String ElastiCacheClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << ElastiCacheEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AddTagsToResourceOutcome ElastiCacheClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsToResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddTagsToResourceOutcomeCallable ElastiCacheClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientAddTagsToResourceAsyncHelper(ElastiCacheClient const * const clientThis, const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTagsToResource(request), context);
}

void ElastiCacheClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientAddTagsToResourceAsyncHelper( this, request, handler, context ); } );
}

AuthorizeCacheSecurityGroupIngressOutcome ElastiCacheClient::AuthorizeCacheSecurityGroupIngress(const AuthorizeCacheSecurityGroupIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AuthorizeCacheSecurityGroupIngressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeCacheSecurityGroupIngressOutcomeCallable ElastiCacheClient::AuthorizeCacheSecurityGroupIngressCallable(const AuthorizeCacheSecurityGroupIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeCacheSecurityGroupIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeCacheSecurityGroupIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientAuthorizeCacheSecurityGroupIngressAsyncHelper(ElastiCacheClient const * const clientThis, const AuthorizeCacheSecurityGroupIngressRequest& request, const AuthorizeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AuthorizeCacheSecurityGroupIngress(request), context);
}

void ElastiCacheClient::AuthorizeCacheSecurityGroupIngressAsync(const AuthorizeCacheSecurityGroupIngressRequest& request, const AuthorizeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientAuthorizeCacheSecurityGroupIngressAsyncHelper( this, request, handler, context ); } );
}

BatchApplyUpdateActionOutcome ElastiCacheClient::BatchApplyUpdateAction(const BatchApplyUpdateActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchApplyUpdateActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

BatchApplyUpdateActionOutcomeCallable ElastiCacheClient::BatchApplyUpdateActionCallable(const BatchApplyUpdateActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchApplyUpdateActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchApplyUpdateAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientBatchApplyUpdateActionAsyncHelper(ElastiCacheClient const * const clientThis, const BatchApplyUpdateActionRequest& request, const BatchApplyUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchApplyUpdateAction(request), context);
}

void ElastiCacheClient::BatchApplyUpdateActionAsync(const BatchApplyUpdateActionRequest& request, const BatchApplyUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientBatchApplyUpdateActionAsyncHelper( this, request, handler, context ); } );
}

BatchStopUpdateActionOutcome ElastiCacheClient::BatchStopUpdateAction(const BatchStopUpdateActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchStopUpdateActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

BatchStopUpdateActionOutcomeCallable ElastiCacheClient::BatchStopUpdateActionCallable(const BatchStopUpdateActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchStopUpdateActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchStopUpdateAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientBatchStopUpdateActionAsyncHelper(ElastiCacheClient const * const clientThis, const BatchStopUpdateActionRequest& request, const BatchStopUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchStopUpdateAction(request), context);
}

void ElastiCacheClient::BatchStopUpdateActionAsync(const BatchStopUpdateActionRequest& request, const BatchStopUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientBatchStopUpdateActionAsyncHelper( this, request, handler, context ); } );
}

CompleteMigrationOutcome ElastiCacheClient::CompleteMigration(const CompleteMigrationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CompleteMigrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CompleteMigrationOutcomeCallable ElastiCacheClient::CompleteMigrationCallable(const CompleteMigrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CompleteMigrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompleteMigration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientCompleteMigrationAsyncHelper(ElastiCacheClient const * const clientThis, const CompleteMigrationRequest& request, const CompleteMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CompleteMigration(request), context);
}

void ElastiCacheClient::CompleteMigrationAsync(const CompleteMigrationRequest& request, const CompleteMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientCompleteMigrationAsyncHelper( this, request, handler, context ); } );
}

CopySnapshotOutcome ElastiCacheClient::CopySnapshot(const CopySnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CopySnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CopySnapshotOutcomeCallable ElastiCacheClient::CopySnapshotCallable(const CopySnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopySnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopySnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientCopySnapshotAsyncHelper(ElastiCacheClient const * const clientThis, const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopySnapshot(request), context);
}

void ElastiCacheClient::CopySnapshotAsync(const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientCopySnapshotAsyncHelper( this, request, handler, context ); } );
}

CreateCacheClusterOutcome ElastiCacheClient::CreateCacheCluster(const CreateCacheClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCacheClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateCacheClusterOutcomeCallable ElastiCacheClient::CreateCacheClusterCallable(const CreateCacheClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCacheClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCacheCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientCreateCacheClusterAsyncHelper(ElastiCacheClient const * const clientThis, const CreateCacheClusterRequest& request, const CreateCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCacheCluster(request), context);
}

void ElastiCacheClient::CreateCacheClusterAsync(const CreateCacheClusterRequest& request, const CreateCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientCreateCacheClusterAsyncHelper( this, request, handler, context ); } );
}

CreateCacheParameterGroupOutcome ElastiCacheClient::CreateCacheParameterGroup(const CreateCacheParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCacheParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateCacheParameterGroupOutcomeCallable ElastiCacheClient::CreateCacheParameterGroupCallable(const CreateCacheParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCacheParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCacheParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientCreateCacheParameterGroupAsyncHelper(ElastiCacheClient const * const clientThis, const CreateCacheParameterGroupRequest& request, const CreateCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCacheParameterGroup(request), context);
}

void ElastiCacheClient::CreateCacheParameterGroupAsync(const CreateCacheParameterGroupRequest& request, const CreateCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientCreateCacheParameterGroupAsyncHelper( this, request, handler, context ); } );
}

CreateCacheSecurityGroupOutcome ElastiCacheClient::CreateCacheSecurityGroup(const CreateCacheSecurityGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCacheSecurityGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateCacheSecurityGroupOutcomeCallable ElastiCacheClient::CreateCacheSecurityGroupCallable(const CreateCacheSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCacheSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCacheSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientCreateCacheSecurityGroupAsyncHelper(ElastiCacheClient const * const clientThis, const CreateCacheSecurityGroupRequest& request, const CreateCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCacheSecurityGroup(request), context);
}

void ElastiCacheClient::CreateCacheSecurityGroupAsync(const CreateCacheSecurityGroupRequest& request, const CreateCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientCreateCacheSecurityGroupAsyncHelper( this, request, handler, context ); } );
}

CreateCacheSubnetGroupOutcome ElastiCacheClient::CreateCacheSubnetGroup(const CreateCacheSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCacheSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateCacheSubnetGroupOutcomeCallable ElastiCacheClient::CreateCacheSubnetGroupCallable(const CreateCacheSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCacheSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCacheSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientCreateCacheSubnetGroupAsyncHelper(ElastiCacheClient const * const clientThis, const CreateCacheSubnetGroupRequest& request, const CreateCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCacheSubnetGroup(request), context);
}

void ElastiCacheClient::CreateCacheSubnetGroupAsync(const CreateCacheSubnetGroupRequest& request, const CreateCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientCreateCacheSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

CreateGlobalReplicationGroupOutcome ElastiCacheClient::CreateGlobalReplicationGroup(const CreateGlobalReplicationGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGlobalReplicationGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateGlobalReplicationGroupOutcomeCallable ElastiCacheClient::CreateGlobalReplicationGroupCallable(const CreateGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientCreateGlobalReplicationGroupAsyncHelper(ElastiCacheClient const * const clientThis, const CreateGlobalReplicationGroupRequest& request, const CreateGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGlobalReplicationGroup(request), context);
}

void ElastiCacheClient::CreateGlobalReplicationGroupAsync(const CreateGlobalReplicationGroupRequest& request, const CreateGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientCreateGlobalReplicationGroupAsyncHelper( this, request, handler, context ); } );
}

CreateReplicationGroupOutcome ElastiCacheClient::CreateReplicationGroup(const CreateReplicationGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateReplicationGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateReplicationGroupOutcomeCallable ElastiCacheClient::CreateReplicationGroupCallable(const CreateReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientCreateReplicationGroupAsyncHelper(ElastiCacheClient const * const clientThis, const CreateReplicationGroupRequest& request, const CreateReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateReplicationGroup(request), context);
}

void ElastiCacheClient::CreateReplicationGroupAsync(const CreateReplicationGroupRequest& request, const CreateReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientCreateReplicationGroupAsyncHelper( this, request, handler, context ); } );
}

CreateSnapshotOutcome ElastiCacheClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateSnapshotOutcomeCallable ElastiCacheClient::CreateSnapshotCallable(const CreateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientCreateSnapshotAsyncHelper(ElastiCacheClient const * const clientThis, const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSnapshot(request), context);
}

void ElastiCacheClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientCreateSnapshotAsyncHelper( this, request, handler, context ); } );
}

CreateUserOutcome ElastiCacheClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateUserOutcomeCallable ElastiCacheClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientCreateUserAsyncHelper(ElastiCacheClient const * const clientThis, const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUser(request), context);
}

void ElastiCacheClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientCreateUserAsyncHelper( this, request, handler, context ); } );
}

CreateUserGroupOutcome ElastiCacheClient::CreateUserGroup(const CreateUserGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUserGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateUserGroupOutcomeCallable ElastiCacheClient::CreateUserGroupCallable(const CreateUserGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientCreateUserGroupAsyncHelper(ElastiCacheClient const * const clientThis, const CreateUserGroupRequest& request, const CreateUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUserGroup(request), context);
}

void ElastiCacheClient::CreateUserGroupAsync(const CreateUserGroupRequest& request, const CreateUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientCreateUserGroupAsyncHelper( this, request, handler, context ); } );
}

DecreaseNodeGroupsInGlobalReplicationGroupOutcome ElastiCacheClient::DecreaseNodeGroupsInGlobalReplicationGroup(const DecreaseNodeGroupsInGlobalReplicationGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DecreaseNodeGroupsInGlobalReplicationGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DecreaseNodeGroupsInGlobalReplicationGroupOutcomeCallable ElastiCacheClient::DecreaseNodeGroupsInGlobalReplicationGroupCallable(const DecreaseNodeGroupsInGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DecreaseNodeGroupsInGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DecreaseNodeGroupsInGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDecreaseNodeGroupsInGlobalReplicationGroupAsyncHelper(ElastiCacheClient const * const clientThis, const DecreaseNodeGroupsInGlobalReplicationGroupRequest& request, const DecreaseNodeGroupsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DecreaseNodeGroupsInGlobalReplicationGroup(request), context);
}

void ElastiCacheClient::DecreaseNodeGroupsInGlobalReplicationGroupAsync(const DecreaseNodeGroupsInGlobalReplicationGroupRequest& request, const DecreaseNodeGroupsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDecreaseNodeGroupsInGlobalReplicationGroupAsyncHelper( this, request, handler, context ); } );
}

DecreaseReplicaCountOutcome ElastiCacheClient::DecreaseReplicaCount(const DecreaseReplicaCountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DecreaseReplicaCountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DecreaseReplicaCountOutcomeCallable ElastiCacheClient::DecreaseReplicaCountCallable(const DecreaseReplicaCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DecreaseReplicaCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DecreaseReplicaCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDecreaseReplicaCountAsyncHelper(ElastiCacheClient const * const clientThis, const DecreaseReplicaCountRequest& request, const DecreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DecreaseReplicaCount(request), context);
}

void ElastiCacheClient::DecreaseReplicaCountAsync(const DecreaseReplicaCountRequest& request, const DecreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDecreaseReplicaCountAsyncHelper( this, request, handler, context ); } );
}

DeleteCacheClusterOutcome ElastiCacheClient::DeleteCacheCluster(const DeleteCacheClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCacheClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCacheClusterOutcomeCallable ElastiCacheClient::DeleteCacheClusterCallable(const DeleteCacheClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCacheClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCacheCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDeleteCacheClusterAsyncHelper(ElastiCacheClient const * const clientThis, const DeleteCacheClusterRequest& request, const DeleteCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCacheCluster(request), context);
}

void ElastiCacheClient::DeleteCacheClusterAsync(const DeleteCacheClusterRequest& request, const DeleteCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDeleteCacheClusterAsyncHelper( this, request, handler, context ); } );
}

DeleteCacheParameterGroupOutcome ElastiCacheClient::DeleteCacheParameterGroup(const DeleteCacheParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCacheParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCacheParameterGroupOutcomeCallable ElastiCacheClient::DeleteCacheParameterGroupCallable(const DeleteCacheParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCacheParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCacheParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDeleteCacheParameterGroupAsyncHelper(ElastiCacheClient const * const clientThis, const DeleteCacheParameterGroupRequest& request, const DeleteCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCacheParameterGroup(request), context);
}

void ElastiCacheClient::DeleteCacheParameterGroupAsync(const DeleteCacheParameterGroupRequest& request, const DeleteCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDeleteCacheParameterGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteCacheSecurityGroupOutcome ElastiCacheClient::DeleteCacheSecurityGroup(const DeleteCacheSecurityGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCacheSecurityGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCacheSecurityGroupOutcomeCallable ElastiCacheClient::DeleteCacheSecurityGroupCallable(const DeleteCacheSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCacheSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCacheSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDeleteCacheSecurityGroupAsyncHelper(ElastiCacheClient const * const clientThis, const DeleteCacheSecurityGroupRequest& request, const DeleteCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCacheSecurityGroup(request), context);
}

void ElastiCacheClient::DeleteCacheSecurityGroupAsync(const DeleteCacheSecurityGroupRequest& request, const DeleteCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDeleteCacheSecurityGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteCacheSubnetGroupOutcome ElastiCacheClient::DeleteCacheSubnetGroup(const DeleteCacheSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCacheSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCacheSubnetGroupOutcomeCallable ElastiCacheClient::DeleteCacheSubnetGroupCallable(const DeleteCacheSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCacheSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCacheSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDeleteCacheSubnetGroupAsyncHelper(ElastiCacheClient const * const clientThis, const DeleteCacheSubnetGroupRequest& request, const DeleteCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCacheSubnetGroup(request), context);
}

void ElastiCacheClient::DeleteCacheSubnetGroupAsync(const DeleteCacheSubnetGroupRequest& request, const DeleteCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDeleteCacheSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteGlobalReplicationGroupOutcome ElastiCacheClient::DeleteGlobalReplicationGroup(const DeleteGlobalReplicationGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGlobalReplicationGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteGlobalReplicationGroupOutcomeCallable ElastiCacheClient::DeleteGlobalReplicationGroupCallable(const DeleteGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDeleteGlobalReplicationGroupAsyncHelper(ElastiCacheClient const * const clientThis, const DeleteGlobalReplicationGroupRequest& request, const DeleteGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGlobalReplicationGroup(request), context);
}

void ElastiCacheClient::DeleteGlobalReplicationGroupAsync(const DeleteGlobalReplicationGroupRequest& request, const DeleteGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDeleteGlobalReplicationGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteReplicationGroupOutcome ElastiCacheClient::DeleteReplicationGroup(const DeleteReplicationGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteReplicationGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteReplicationGroupOutcomeCallable ElastiCacheClient::DeleteReplicationGroupCallable(const DeleteReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDeleteReplicationGroupAsyncHelper(ElastiCacheClient const * const clientThis, const DeleteReplicationGroupRequest& request, const DeleteReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteReplicationGroup(request), context);
}

void ElastiCacheClient::DeleteReplicationGroupAsync(const DeleteReplicationGroupRequest& request, const DeleteReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDeleteReplicationGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteSnapshotOutcome ElastiCacheClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSnapshotOutcomeCallable ElastiCacheClient::DeleteSnapshotCallable(const DeleteSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDeleteSnapshotAsyncHelper(ElastiCacheClient const * const clientThis, const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSnapshot(request), context);
}

void ElastiCacheClient::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDeleteSnapshotAsyncHelper( this, request, handler, context ); } );
}

DeleteUserOutcome ElastiCacheClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteUserOutcomeCallable ElastiCacheClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDeleteUserAsyncHelper(ElastiCacheClient const * const clientThis, const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUser(request), context);
}

void ElastiCacheClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDeleteUserAsyncHelper( this, request, handler, context ); } );
}

DeleteUserGroupOutcome ElastiCacheClient::DeleteUserGroup(const DeleteUserGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteUserGroupOutcomeCallable ElastiCacheClient::DeleteUserGroupCallable(const DeleteUserGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDeleteUserGroupAsyncHelper(ElastiCacheClient const * const clientThis, const DeleteUserGroupRequest& request, const DeleteUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUserGroup(request), context);
}

void ElastiCacheClient::DeleteUserGroupAsync(const DeleteUserGroupRequest& request, const DeleteUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDeleteUserGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeCacheClustersOutcome ElastiCacheClient::DescribeCacheClusters(const DescribeCacheClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCacheClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCacheClustersOutcomeCallable ElastiCacheClient::DescribeCacheClustersCallable(const DescribeCacheClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCacheClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCacheClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeCacheClustersAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeCacheClustersRequest& request, const DescribeCacheClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCacheClusters(request), context);
}

void ElastiCacheClient::DescribeCacheClustersAsync(const DescribeCacheClustersRequest& request, const DescribeCacheClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeCacheClustersAsyncHelper( this, request, handler, context ); } );
}

DescribeCacheEngineVersionsOutcome ElastiCacheClient::DescribeCacheEngineVersions(const DescribeCacheEngineVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCacheEngineVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCacheEngineVersionsOutcomeCallable ElastiCacheClient::DescribeCacheEngineVersionsCallable(const DescribeCacheEngineVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCacheEngineVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCacheEngineVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeCacheEngineVersionsAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeCacheEngineVersionsRequest& request, const DescribeCacheEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCacheEngineVersions(request), context);
}

void ElastiCacheClient::DescribeCacheEngineVersionsAsync(const DescribeCacheEngineVersionsRequest& request, const DescribeCacheEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeCacheEngineVersionsAsyncHelper( this, request, handler, context ); } );
}

DescribeCacheParameterGroupsOutcome ElastiCacheClient::DescribeCacheParameterGroups(const DescribeCacheParameterGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCacheParameterGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCacheParameterGroupsOutcomeCallable ElastiCacheClient::DescribeCacheParameterGroupsCallable(const DescribeCacheParameterGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCacheParameterGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCacheParameterGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeCacheParameterGroupsAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeCacheParameterGroupsRequest& request, const DescribeCacheParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCacheParameterGroups(request), context);
}

void ElastiCacheClient::DescribeCacheParameterGroupsAsync(const DescribeCacheParameterGroupsRequest& request, const DescribeCacheParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeCacheParameterGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeCacheParametersOutcome ElastiCacheClient::DescribeCacheParameters(const DescribeCacheParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCacheParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCacheParametersOutcomeCallable ElastiCacheClient::DescribeCacheParametersCallable(const DescribeCacheParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCacheParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCacheParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeCacheParametersAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeCacheParametersRequest& request, const DescribeCacheParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCacheParameters(request), context);
}

void ElastiCacheClient::DescribeCacheParametersAsync(const DescribeCacheParametersRequest& request, const DescribeCacheParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeCacheParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeCacheSecurityGroupsOutcome ElastiCacheClient::DescribeCacheSecurityGroups(const DescribeCacheSecurityGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCacheSecurityGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCacheSecurityGroupsOutcomeCallable ElastiCacheClient::DescribeCacheSecurityGroupsCallable(const DescribeCacheSecurityGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCacheSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCacheSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeCacheSecurityGroupsAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeCacheSecurityGroupsRequest& request, const DescribeCacheSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCacheSecurityGroups(request), context);
}

void ElastiCacheClient::DescribeCacheSecurityGroupsAsync(const DescribeCacheSecurityGroupsRequest& request, const DescribeCacheSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeCacheSecurityGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeCacheSubnetGroupsOutcome ElastiCacheClient::DescribeCacheSubnetGroups(const DescribeCacheSubnetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCacheSubnetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCacheSubnetGroupsOutcomeCallable ElastiCacheClient::DescribeCacheSubnetGroupsCallable(const DescribeCacheSubnetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCacheSubnetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCacheSubnetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeCacheSubnetGroupsAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeCacheSubnetGroupsRequest& request, const DescribeCacheSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCacheSubnetGroups(request), context);
}

void ElastiCacheClient::DescribeCacheSubnetGroupsAsync(const DescribeCacheSubnetGroupsRequest& request, const DescribeCacheSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeCacheSubnetGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeEngineDefaultParametersOutcome ElastiCacheClient::DescribeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEngineDefaultParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEngineDefaultParametersOutcomeCallable ElastiCacheClient::DescribeEngineDefaultParametersCallable(const DescribeEngineDefaultParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEngineDefaultParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEngineDefaultParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeEngineDefaultParametersAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEngineDefaultParameters(request), context);
}

void ElastiCacheClient::DescribeEngineDefaultParametersAsync(const DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeEngineDefaultParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeEventsOutcome ElastiCacheClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventsOutcomeCallable ElastiCacheClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeEventsAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEvents(request), context);
}

void ElastiCacheClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeEventsAsyncHelper( this, request, handler, context ); } );
}

DescribeGlobalReplicationGroupsOutcome ElastiCacheClient::DescribeGlobalReplicationGroups(const DescribeGlobalReplicationGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGlobalReplicationGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeGlobalReplicationGroupsOutcomeCallable ElastiCacheClient::DescribeGlobalReplicationGroupsCallable(const DescribeGlobalReplicationGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGlobalReplicationGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGlobalReplicationGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeGlobalReplicationGroupsAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeGlobalReplicationGroupsRequest& request, const DescribeGlobalReplicationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGlobalReplicationGroups(request), context);
}

void ElastiCacheClient::DescribeGlobalReplicationGroupsAsync(const DescribeGlobalReplicationGroupsRequest& request, const DescribeGlobalReplicationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeGlobalReplicationGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeReplicationGroupsOutcome ElastiCacheClient::DescribeReplicationGroups(const DescribeReplicationGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReplicationGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReplicationGroupsOutcomeCallable ElastiCacheClient::DescribeReplicationGroupsCallable(const DescribeReplicationGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeReplicationGroupsAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeReplicationGroupsRequest& request, const DescribeReplicationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReplicationGroups(request), context);
}

void ElastiCacheClient::DescribeReplicationGroupsAsync(const DescribeReplicationGroupsRequest& request, const DescribeReplicationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeReplicationGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeReservedCacheNodesOutcome ElastiCacheClient::DescribeReservedCacheNodes(const DescribeReservedCacheNodesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReservedCacheNodesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedCacheNodesOutcomeCallable ElastiCacheClient::DescribeReservedCacheNodesCallable(const DescribeReservedCacheNodesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedCacheNodesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedCacheNodes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeReservedCacheNodesAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeReservedCacheNodesRequest& request, const DescribeReservedCacheNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReservedCacheNodes(request), context);
}

void ElastiCacheClient::DescribeReservedCacheNodesAsync(const DescribeReservedCacheNodesRequest& request, const DescribeReservedCacheNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeReservedCacheNodesAsyncHelper( this, request, handler, context ); } );
}

DescribeReservedCacheNodesOfferingsOutcome ElastiCacheClient::DescribeReservedCacheNodesOfferings(const DescribeReservedCacheNodesOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReservedCacheNodesOfferingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedCacheNodesOfferingsOutcomeCallable ElastiCacheClient::DescribeReservedCacheNodesOfferingsCallable(const DescribeReservedCacheNodesOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedCacheNodesOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedCacheNodesOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeReservedCacheNodesOfferingsAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeReservedCacheNodesOfferingsRequest& request, const DescribeReservedCacheNodesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReservedCacheNodesOfferings(request), context);
}

void ElastiCacheClient::DescribeReservedCacheNodesOfferingsAsync(const DescribeReservedCacheNodesOfferingsRequest& request, const DescribeReservedCacheNodesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeReservedCacheNodesOfferingsAsyncHelper( this, request, handler, context ); } );
}

DescribeServiceUpdatesOutcome ElastiCacheClient::DescribeServiceUpdates(const DescribeServiceUpdatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeServiceUpdatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeServiceUpdatesOutcomeCallable ElastiCacheClient::DescribeServiceUpdatesCallable(const DescribeServiceUpdatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceUpdatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServiceUpdates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeServiceUpdatesAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeServiceUpdatesRequest& request, const DescribeServiceUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeServiceUpdates(request), context);
}

void ElastiCacheClient::DescribeServiceUpdatesAsync(const DescribeServiceUpdatesRequest& request, const DescribeServiceUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeServiceUpdatesAsyncHelper( this, request, handler, context ); } );
}

DescribeSnapshotsOutcome ElastiCacheClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSnapshotsOutcomeCallable ElastiCacheClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeSnapshotsAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSnapshots(request), context);
}

void ElastiCacheClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeSnapshotsAsyncHelper( this, request, handler, context ); } );
}

DescribeUpdateActionsOutcome ElastiCacheClient::DescribeUpdateActions(const DescribeUpdateActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUpdateActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeUpdateActionsOutcomeCallable ElastiCacheClient::DescribeUpdateActionsCallable(const DescribeUpdateActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUpdateActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUpdateActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeUpdateActionsAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeUpdateActionsRequest& request, const DescribeUpdateActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUpdateActions(request), context);
}

void ElastiCacheClient::DescribeUpdateActionsAsync(const DescribeUpdateActionsRequest& request, const DescribeUpdateActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeUpdateActionsAsyncHelper( this, request, handler, context ); } );
}

DescribeUserGroupsOutcome ElastiCacheClient::DescribeUserGroups(const DescribeUserGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUserGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeUserGroupsOutcomeCallable ElastiCacheClient::DescribeUserGroupsCallable(const DescribeUserGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeUserGroupsAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeUserGroupsRequest& request, const DescribeUserGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUserGroups(request), context);
}

void ElastiCacheClient::DescribeUserGroupsAsync(const DescribeUserGroupsRequest& request, const DescribeUserGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeUserGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeUsersOutcome ElastiCacheClient::DescribeUsers(const DescribeUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeUsersOutcomeCallable ElastiCacheClient::DescribeUsersCallable(const DescribeUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDescribeUsersAsyncHelper(ElastiCacheClient const * const clientThis, const DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUsers(request), context);
}

void ElastiCacheClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDescribeUsersAsyncHelper( this, request, handler, context ); } );
}

DisassociateGlobalReplicationGroupOutcome ElastiCacheClient::DisassociateGlobalReplicationGroup(const DisassociateGlobalReplicationGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateGlobalReplicationGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateGlobalReplicationGroupOutcomeCallable ElastiCacheClient::DisassociateGlobalReplicationGroupCallable(const DisassociateGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientDisassociateGlobalReplicationGroupAsyncHelper(ElastiCacheClient const * const clientThis, const DisassociateGlobalReplicationGroupRequest& request, const DisassociateGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateGlobalReplicationGroup(request), context);
}

void ElastiCacheClient::DisassociateGlobalReplicationGroupAsync(const DisassociateGlobalReplicationGroupRequest& request, const DisassociateGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientDisassociateGlobalReplicationGroupAsyncHelper( this, request, handler, context ); } );
}

FailoverGlobalReplicationGroupOutcome ElastiCacheClient::FailoverGlobalReplicationGroup(const FailoverGlobalReplicationGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return FailoverGlobalReplicationGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

FailoverGlobalReplicationGroupOutcomeCallable ElastiCacheClient::FailoverGlobalReplicationGroupCallable(const FailoverGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FailoverGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FailoverGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientFailoverGlobalReplicationGroupAsyncHelper(ElastiCacheClient const * const clientThis, const FailoverGlobalReplicationGroupRequest& request, const FailoverGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->FailoverGlobalReplicationGroup(request), context);
}

void ElastiCacheClient::FailoverGlobalReplicationGroupAsync(const FailoverGlobalReplicationGroupRequest& request, const FailoverGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientFailoverGlobalReplicationGroupAsyncHelper( this, request, handler, context ); } );
}

IncreaseNodeGroupsInGlobalReplicationGroupOutcome ElastiCacheClient::IncreaseNodeGroupsInGlobalReplicationGroup(const IncreaseNodeGroupsInGlobalReplicationGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return IncreaseNodeGroupsInGlobalReplicationGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

IncreaseNodeGroupsInGlobalReplicationGroupOutcomeCallable ElastiCacheClient::IncreaseNodeGroupsInGlobalReplicationGroupCallable(const IncreaseNodeGroupsInGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IncreaseNodeGroupsInGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IncreaseNodeGroupsInGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientIncreaseNodeGroupsInGlobalReplicationGroupAsyncHelper(ElastiCacheClient const * const clientThis, const IncreaseNodeGroupsInGlobalReplicationGroupRequest& request, const IncreaseNodeGroupsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->IncreaseNodeGroupsInGlobalReplicationGroup(request), context);
}

void ElastiCacheClient::IncreaseNodeGroupsInGlobalReplicationGroupAsync(const IncreaseNodeGroupsInGlobalReplicationGroupRequest& request, const IncreaseNodeGroupsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientIncreaseNodeGroupsInGlobalReplicationGroupAsyncHelper( this, request, handler, context ); } );
}

IncreaseReplicaCountOutcome ElastiCacheClient::IncreaseReplicaCount(const IncreaseReplicaCountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return IncreaseReplicaCountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

IncreaseReplicaCountOutcomeCallable ElastiCacheClient::IncreaseReplicaCountCallable(const IncreaseReplicaCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IncreaseReplicaCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IncreaseReplicaCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientIncreaseReplicaCountAsyncHelper(ElastiCacheClient const * const clientThis, const IncreaseReplicaCountRequest& request, const IncreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->IncreaseReplicaCount(request), context);
}

void ElastiCacheClient::IncreaseReplicaCountAsync(const IncreaseReplicaCountRequest& request, const IncreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientIncreaseReplicaCountAsyncHelper( this, request, handler, context ); } );
}

ListAllowedNodeTypeModificationsOutcome ElastiCacheClient::ListAllowedNodeTypeModifications(const ListAllowedNodeTypeModificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAllowedNodeTypeModificationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListAllowedNodeTypeModificationsOutcomeCallable ElastiCacheClient::ListAllowedNodeTypeModificationsCallable(const ListAllowedNodeTypeModificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAllowedNodeTypeModificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAllowedNodeTypeModifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientListAllowedNodeTypeModificationsAsyncHelper(ElastiCacheClient const * const clientThis, const ListAllowedNodeTypeModificationsRequest& request, const ListAllowedNodeTypeModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAllowedNodeTypeModifications(request), context);
}

void ElastiCacheClient::ListAllowedNodeTypeModificationsAsync(const ListAllowedNodeTypeModificationsRequest& request, const ListAllowedNodeTypeModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientListAllowedNodeTypeModificationsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome ElastiCacheClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTagsForResourceOutcomeCallable ElastiCacheClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientListTagsForResourceAsyncHelper(ElastiCacheClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void ElastiCacheClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ModifyCacheClusterOutcome ElastiCacheClient::ModifyCacheCluster(const ModifyCacheClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyCacheClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyCacheClusterOutcomeCallable ElastiCacheClient::ModifyCacheClusterCallable(const ModifyCacheClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyCacheClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCacheCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientModifyCacheClusterAsyncHelper(ElastiCacheClient const * const clientThis, const ModifyCacheClusterRequest& request, const ModifyCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyCacheCluster(request), context);
}

void ElastiCacheClient::ModifyCacheClusterAsync(const ModifyCacheClusterRequest& request, const ModifyCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientModifyCacheClusterAsyncHelper( this, request, handler, context ); } );
}

ModifyCacheParameterGroupOutcome ElastiCacheClient::ModifyCacheParameterGroup(const ModifyCacheParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyCacheParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyCacheParameterGroupOutcomeCallable ElastiCacheClient::ModifyCacheParameterGroupCallable(const ModifyCacheParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyCacheParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCacheParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientModifyCacheParameterGroupAsyncHelper(ElastiCacheClient const * const clientThis, const ModifyCacheParameterGroupRequest& request, const ModifyCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyCacheParameterGroup(request), context);
}

void ElastiCacheClient::ModifyCacheParameterGroupAsync(const ModifyCacheParameterGroupRequest& request, const ModifyCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientModifyCacheParameterGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyCacheSubnetGroupOutcome ElastiCacheClient::ModifyCacheSubnetGroup(const ModifyCacheSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyCacheSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyCacheSubnetGroupOutcomeCallable ElastiCacheClient::ModifyCacheSubnetGroupCallable(const ModifyCacheSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyCacheSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCacheSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientModifyCacheSubnetGroupAsyncHelper(ElastiCacheClient const * const clientThis, const ModifyCacheSubnetGroupRequest& request, const ModifyCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyCacheSubnetGroup(request), context);
}

void ElastiCacheClient::ModifyCacheSubnetGroupAsync(const ModifyCacheSubnetGroupRequest& request, const ModifyCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientModifyCacheSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyGlobalReplicationGroupOutcome ElastiCacheClient::ModifyGlobalReplicationGroup(const ModifyGlobalReplicationGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyGlobalReplicationGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyGlobalReplicationGroupOutcomeCallable ElastiCacheClient::ModifyGlobalReplicationGroupCallable(const ModifyGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientModifyGlobalReplicationGroupAsyncHelper(ElastiCacheClient const * const clientThis, const ModifyGlobalReplicationGroupRequest& request, const ModifyGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyGlobalReplicationGroup(request), context);
}

void ElastiCacheClient::ModifyGlobalReplicationGroupAsync(const ModifyGlobalReplicationGroupRequest& request, const ModifyGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientModifyGlobalReplicationGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyReplicationGroupOutcome ElastiCacheClient::ModifyReplicationGroup(const ModifyReplicationGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyReplicationGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyReplicationGroupOutcomeCallable ElastiCacheClient::ModifyReplicationGroupCallable(const ModifyReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientModifyReplicationGroupAsyncHelper(ElastiCacheClient const * const clientThis, const ModifyReplicationGroupRequest& request, const ModifyReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyReplicationGroup(request), context);
}

void ElastiCacheClient::ModifyReplicationGroupAsync(const ModifyReplicationGroupRequest& request, const ModifyReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientModifyReplicationGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyReplicationGroupShardConfigurationOutcome ElastiCacheClient::ModifyReplicationGroupShardConfiguration(const ModifyReplicationGroupShardConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyReplicationGroupShardConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyReplicationGroupShardConfigurationOutcomeCallable ElastiCacheClient::ModifyReplicationGroupShardConfigurationCallable(const ModifyReplicationGroupShardConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReplicationGroupShardConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReplicationGroupShardConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientModifyReplicationGroupShardConfigurationAsyncHelper(ElastiCacheClient const * const clientThis, const ModifyReplicationGroupShardConfigurationRequest& request, const ModifyReplicationGroupShardConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyReplicationGroupShardConfiguration(request), context);
}

void ElastiCacheClient::ModifyReplicationGroupShardConfigurationAsync(const ModifyReplicationGroupShardConfigurationRequest& request, const ModifyReplicationGroupShardConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientModifyReplicationGroupShardConfigurationAsyncHelper( this, request, handler, context ); } );
}

ModifyUserOutcome ElastiCacheClient::ModifyUser(const ModifyUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyUserOutcomeCallable ElastiCacheClient::ModifyUserCallable(const ModifyUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientModifyUserAsyncHelper(ElastiCacheClient const * const clientThis, const ModifyUserRequest& request, const ModifyUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyUser(request), context);
}

void ElastiCacheClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientModifyUserAsyncHelper( this, request, handler, context ); } );
}

ModifyUserGroupOutcome ElastiCacheClient::ModifyUserGroup(const ModifyUserGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyUserGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyUserGroupOutcomeCallable ElastiCacheClient::ModifyUserGroupCallable(const ModifyUserGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyUserGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyUserGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientModifyUserGroupAsyncHelper(ElastiCacheClient const * const clientThis, const ModifyUserGroupRequest& request, const ModifyUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyUserGroup(request), context);
}

void ElastiCacheClient::ModifyUserGroupAsync(const ModifyUserGroupRequest& request, const ModifyUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientModifyUserGroupAsyncHelper( this, request, handler, context ); } );
}

PurchaseReservedCacheNodesOfferingOutcome ElastiCacheClient::PurchaseReservedCacheNodesOffering(const PurchaseReservedCacheNodesOfferingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PurchaseReservedCacheNodesOfferingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PurchaseReservedCacheNodesOfferingOutcomeCallable ElastiCacheClient::PurchaseReservedCacheNodesOfferingCallable(const PurchaseReservedCacheNodesOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseReservedCacheNodesOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseReservedCacheNodesOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientPurchaseReservedCacheNodesOfferingAsyncHelper(ElastiCacheClient const * const clientThis, const PurchaseReservedCacheNodesOfferingRequest& request, const PurchaseReservedCacheNodesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PurchaseReservedCacheNodesOffering(request), context);
}

void ElastiCacheClient::PurchaseReservedCacheNodesOfferingAsync(const PurchaseReservedCacheNodesOfferingRequest& request, const PurchaseReservedCacheNodesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientPurchaseReservedCacheNodesOfferingAsyncHelper( this, request, handler, context ); } );
}

RebalanceSlotsInGlobalReplicationGroupOutcome ElastiCacheClient::RebalanceSlotsInGlobalReplicationGroup(const RebalanceSlotsInGlobalReplicationGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RebalanceSlotsInGlobalReplicationGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RebalanceSlotsInGlobalReplicationGroupOutcomeCallable ElastiCacheClient::RebalanceSlotsInGlobalReplicationGroupCallable(const RebalanceSlotsInGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebalanceSlotsInGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebalanceSlotsInGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientRebalanceSlotsInGlobalReplicationGroupAsyncHelper(ElastiCacheClient const * const clientThis, const RebalanceSlotsInGlobalReplicationGroupRequest& request, const RebalanceSlotsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebalanceSlotsInGlobalReplicationGroup(request), context);
}

void ElastiCacheClient::RebalanceSlotsInGlobalReplicationGroupAsync(const RebalanceSlotsInGlobalReplicationGroupRequest& request, const RebalanceSlotsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientRebalanceSlotsInGlobalReplicationGroupAsyncHelper( this, request, handler, context ); } );
}

RebootCacheClusterOutcome ElastiCacheClient::RebootCacheCluster(const RebootCacheClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RebootCacheClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RebootCacheClusterOutcomeCallable ElastiCacheClient::RebootCacheClusterCallable(const RebootCacheClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootCacheClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootCacheCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientRebootCacheClusterAsyncHelper(ElastiCacheClient const * const clientThis, const RebootCacheClusterRequest& request, const RebootCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebootCacheCluster(request), context);
}

void ElastiCacheClient::RebootCacheClusterAsync(const RebootCacheClusterRequest& request, const RebootCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientRebootCacheClusterAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsFromResourceOutcome ElastiCacheClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveTagsFromResourceOutcomeCallable ElastiCacheClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientRemoveTagsFromResourceAsyncHelper(ElastiCacheClient const * const clientThis, const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTagsFromResource(request), context);
}

void ElastiCacheClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientRemoveTagsFromResourceAsyncHelper( this, request, handler, context ); } );
}

ResetCacheParameterGroupOutcome ElastiCacheClient::ResetCacheParameterGroup(const ResetCacheParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResetCacheParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResetCacheParameterGroupOutcomeCallable ElastiCacheClient::ResetCacheParameterGroupCallable(const ResetCacheParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetCacheParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetCacheParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientResetCacheParameterGroupAsyncHelper(ElastiCacheClient const * const clientThis, const ResetCacheParameterGroupRequest& request, const ResetCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResetCacheParameterGroup(request), context);
}

void ElastiCacheClient::ResetCacheParameterGroupAsync(const ResetCacheParameterGroupRequest& request, const ResetCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientResetCacheParameterGroupAsyncHelper( this, request, handler, context ); } );
}

RevokeCacheSecurityGroupIngressOutcome ElastiCacheClient::RevokeCacheSecurityGroupIngress(const RevokeCacheSecurityGroupIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RevokeCacheSecurityGroupIngressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RevokeCacheSecurityGroupIngressOutcomeCallable ElastiCacheClient::RevokeCacheSecurityGroupIngressCallable(const RevokeCacheSecurityGroupIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeCacheSecurityGroupIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeCacheSecurityGroupIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientRevokeCacheSecurityGroupIngressAsyncHelper(ElastiCacheClient const * const clientThis, const RevokeCacheSecurityGroupIngressRequest& request, const RevokeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RevokeCacheSecurityGroupIngress(request), context);
}

void ElastiCacheClient::RevokeCacheSecurityGroupIngressAsync(const RevokeCacheSecurityGroupIngressRequest& request, const RevokeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientRevokeCacheSecurityGroupIngressAsyncHelper( this, request, handler, context ); } );
}

StartMigrationOutcome ElastiCacheClient::StartMigration(const StartMigrationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartMigrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StartMigrationOutcomeCallable ElastiCacheClient::StartMigrationCallable(const StartMigrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMigrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMigration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientStartMigrationAsyncHelper(ElastiCacheClient const * const clientThis, const StartMigrationRequest& request, const StartMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartMigration(request), context);
}

void ElastiCacheClient::StartMigrationAsync(const StartMigrationRequest& request, const StartMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientStartMigrationAsyncHelper( this, request, handler, context ); } );
}

TestFailoverOutcome ElastiCacheClient::TestFailover(const TestFailoverRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TestFailoverOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TestFailoverOutcomeCallable ElastiCacheClient::TestFailoverCallable(const TestFailoverRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestFailoverOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestFailover(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClientTestFailoverAsyncHelper(ElastiCacheClient const * const clientThis, const TestFailoverRequest& request, const TestFailoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestFailover(request), context);
}

void ElastiCacheClient::TestFailoverAsync(const TestFailoverRequest& request, const TestFailoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElastiCacheClientTestFailoverAsyncHelper( this, request, handler, context ); } );
}

