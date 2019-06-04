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
#include <aws/elasticache/model/CopySnapshotRequest.h>
#include <aws/elasticache/model/CreateCacheClusterRequest.h>
#include <aws/elasticache/model/CreateCacheParameterGroupRequest.h>
#include <aws/elasticache/model/CreateCacheSecurityGroupRequest.h>
#include <aws/elasticache/model/CreateCacheSubnetGroupRequest.h>
#include <aws/elasticache/model/CreateReplicationGroupRequest.h>
#include <aws/elasticache/model/CreateSnapshotRequest.h>
#include <aws/elasticache/model/DecreaseReplicaCountRequest.h>
#include <aws/elasticache/model/DeleteCacheClusterRequest.h>
#include <aws/elasticache/model/DeleteCacheParameterGroupRequest.h>
#include <aws/elasticache/model/DeleteCacheSecurityGroupRequest.h>
#include <aws/elasticache/model/DeleteCacheSubnetGroupRequest.h>
#include <aws/elasticache/model/DeleteReplicationGroupRequest.h>
#include <aws/elasticache/model/DeleteSnapshotRequest.h>
#include <aws/elasticache/model/DescribeCacheClustersRequest.h>
#include <aws/elasticache/model/DescribeCacheEngineVersionsRequest.h>
#include <aws/elasticache/model/DescribeCacheParameterGroupsRequest.h>
#include <aws/elasticache/model/DescribeCacheParametersRequest.h>
#include <aws/elasticache/model/DescribeCacheSecurityGroupsRequest.h>
#include <aws/elasticache/model/DescribeCacheSubnetGroupsRequest.h>
#include <aws/elasticache/model/DescribeEngineDefaultParametersRequest.h>
#include <aws/elasticache/model/DescribeEventsRequest.h>
#include <aws/elasticache/model/DescribeReplicationGroupsRequest.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesRequest.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesOfferingsRequest.h>
#include <aws/elasticache/model/DescribeServiceUpdatesRequest.h>
#include <aws/elasticache/model/DescribeSnapshotsRequest.h>
#include <aws/elasticache/model/DescribeUpdateActionsRequest.h>
#include <aws/elasticache/model/IncreaseReplicaCountRequest.h>
#include <aws/elasticache/model/ListAllowedNodeTypeModificationsRequest.h>
#include <aws/elasticache/model/ListTagsForResourceRequest.h>
#include <aws/elasticache/model/ModifyCacheClusterRequest.h>
#include <aws/elasticache/model/ModifyCacheParameterGroupRequest.h>
#include <aws/elasticache/model/ModifyCacheSubnetGroupRequest.h>
#include <aws/elasticache/model/ModifyReplicationGroupRequest.h>
#include <aws/elasticache/model/ModifyReplicationGroupShardConfigurationRequest.h>
#include <aws/elasticache/model/PurchaseReservedCacheNodesOfferingRequest.h>
#include <aws/elasticache/model/RebootCacheClusterRequest.h>
#include <aws/elasticache/model/RemoveTagsFromResourceRequest.h>
#include <aws/elasticache/model/ResetCacheParameterGroupRequest.h>
#include <aws/elasticache/model/RevokeCacheSecurityGroupIngressRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElastiCacheClient::ElastiCacheClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElastiCacheClient::ElastiCacheClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElastiCacheClient::~ElastiCacheClient()
{
}

void ElastiCacheClient::init(const ClientConfiguration& config)
{
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
  return GeneratePresignedUrl(uri, HttpMethod::HTTP_GET, region, 3600);
}

AddTagsToResourceOutcome ElastiCacheClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddTagsToResourceOutcome(AddTagsToResourceResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsToResourceOutcome(outcome.GetError());
  }
}

AddTagsToResourceOutcomeCallable ElastiCacheClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsToResourceAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::AddTagsToResourceAsyncHelper(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToResource(request), context);
}

AuthorizeCacheSecurityGroupIngressOutcome ElastiCacheClient::AuthorizeCacheSecurityGroupIngress(const AuthorizeCacheSecurityGroupIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AuthorizeCacheSecurityGroupIngressOutcome(AuthorizeCacheSecurityGroupIngressResult(outcome.GetResult()));
  }
  else
  {
    return AuthorizeCacheSecurityGroupIngressOutcome(outcome.GetError());
  }
}

AuthorizeCacheSecurityGroupIngressOutcomeCallable ElastiCacheClient::AuthorizeCacheSecurityGroupIngressCallable(const AuthorizeCacheSecurityGroupIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeCacheSecurityGroupIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeCacheSecurityGroupIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::AuthorizeCacheSecurityGroupIngressAsync(const AuthorizeCacheSecurityGroupIngressRequest& request, const AuthorizeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AuthorizeCacheSecurityGroupIngressAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::AuthorizeCacheSecurityGroupIngressAsyncHelper(const AuthorizeCacheSecurityGroupIngressRequest& request, const AuthorizeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AuthorizeCacheSecurityGroupIngress(request), context);
}

BatchApplyUpdateActionOutcome ElastiCacheClient::BatchApplyUpdateAction(const BatchApplyUpdateActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchApplyUpdateActionOutcome(BatchApplyUpdateActionResult(outcome.GetResult()));
  }
  else
  {
    return BatchApplyUpdateActionOutcome(outcome.GetError());
  }
}

BatchApplyUpdateActionOutcomeCallable ElastiCacheClient::BatchApplyUpdateActionCallable(const BatchApplyUpdateActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchApplyUpdateActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchApplyUpdateAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::BatchApplyUpdateActionAsync(const BatchApplyUpdateActionRequest& request, const BatchApplyUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchApplyUpdateActionAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::BatchApplyUpdateActionAsyncHelper(const BatchApplyUpdateActionRequest& request, const BatchApplyUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchApplyUpdateAction(request), context);
}

BatchStopUpdateActionOutcome ElastiCacheClient::BatchStopUpdateAction(const BatchStopUpdateActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchStopUpdateActionOutcome(BatchStopUpdateActionResult(outcome.GetResult()));
  }
  else
  {
    return BatchStopUpdateActionOutcome(outcome.GetError());
  }
}

BatchStopUpdateActionOutcomeCallable ElastiCacheClient::BatchStopUpdateActionCallable(const BatchStopUpdateActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchStopUpdateActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchStopUpdateAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::BatchStopUpdateActionAsync(const BatchStopUpdateActionRequest& request, const BatchStopUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchStopUpdateActionAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::BatchStopUpdateActionAsyncHelper(const BatchStopUpdateActionRequest& request, const BatchStopUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchStopUpdateAction(request), context);
}

CopySnapshotOutcome ElastiCacheClient::CopySnapshot(const CopySnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CopySnapshotOutcome(CopySnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CopySnapshotOutcome(outcome.GetError());
  }
}

CopySnapshotOutcomeCallable ElastiCacheClient::CopySnapshotCallable(const CopySnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopySnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopySnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::CopySnapshotAsync(const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopySnapshotAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::CopySnapshotAsyncHelper(const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopySnapshot(request), context);
}

CreateCacheClusterOutcome ElastiCacheClient::CreateCacheCluster(const CreateCacheClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCacheClusterOutcome(CreateCacheClusterResult(outcome.GetResult()));
  }
  else
  {
    return CreateCacheClusterOutcome(outcome.GetError());
  }
}

CreateCacheClusterOutcomeCallable ElastiCacheClient::CreateCacheClusterCallable(const CreateCacheClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCacheClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCacheCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::CreateCacheClusterAsync(const CreateCacheClusterRequest& request, const CreateCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCacheClusterAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::CreateCacheClusterAsyncHelper(const CreateCacheClusterRequest& request, const CreateCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCacheCluster(request), context);
}

CreateCacheParameterGroupOutcome ElastiCacheClient::CreateCacheParameterGroup(const CreateCacheParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCacheParameterGroupOutcome(CreateCacheParameterGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateCacheParameterGroupOutcome(outcome.GetError());
  }
}

CreateCacheParameterGroupOutcomeCallable ElastiCacheClient::CreateCacheParameterGroupCallable(const CreateCacheParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCacheParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCacheParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::CreateCacheParameterGroupAsync(const CreateCacheParameterGroupRequest& request, const CreateCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCacheParameterGroupAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::CreateCacheParameterGroupAsyncHelper(const CreateCacheParameterGroupRequest& request, const CreateCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCacheParameterGroup(request), context);
}

CreateCacheSecurityGroupOutcome ElastiCacheClient::CreateCacheSecurityGroup(const CreateCacheSecurityGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCacheSecurityGroupOutcome(CreateCacheSecurityGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateCacheSecurityGroupOutcome(outcome.GetError());
  }
}

CreateCacheSecurityGroupOutcomeCallable ElastiCacheClient::CreateCacheSecurityGroupCallable(const CreateCacheSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCacheSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCacheSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::CreateCacheSecurityGroupAsync(const CreateCacheSecurityGroupRequest& request, const CreateCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCacheSecurityGroupAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::CreateCacheSecurityGroupAsyncHelper(const CreateCacheSecurityGroupRequest& request, const CreateCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCacheSecurityGroup(request), context);
}

CreateCacheSubnetGroupOutcome ElastiCacheClient::CreateCacheSubnetGroup(const CreateCacheSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCacheSubnetGroupOutcome(CreateCacheSubnetGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateCacheSubnetGroupOutcome(outcome.GetError());
  }
}

CreateCacheSubnetGroupOutcomeCallable ElastiCacheClient::CreateCacheSubnetGroupCallable(const CreateCacheSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCacheSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCacheSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::CreateCacheSubnetGroupAsync(const CreateCacheSubnetGroupRequest& request, const CreateCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCacheSubnetGroupAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::CreateCacheSubnetGroupAsyncHelper(const CreateCacheSubnetGroupRequest& request, const CreateCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCacheSubnetGroup(request), context);
}

CreateReplicationGroupOutcome ElastiCacheClient::CreateReplicationGroup(const CreateReplicationGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateReplicationGroupOutcome(CreateReplicationGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateReplicationGroupOutcome(outcome.GetError());
  }
}

CreateReplicationGroupOutcomeCallable ElastiCacheClient::CreateReplicationGroupCallable(const CreateReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::CreateReplicationGroupAsync(const CreateReplicationGroupRequest& request, const CreateReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateReplicationGroupAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::CreateReplicationGroupAsyncHelper(const CreateReplicationGroupRequest& request, const CreateReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateReplicationGroup(request), context);
}

CreateSnapshotOutcome ElastiCacheClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateSnapshotOutcome(CreateSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CreateSnapshotOutcome(outcome.GetError());
  }
}

CreateSnapshotOutcomeCallable ElastiCacheClient::CreateSnapshotCallable(const CreateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSnapshotAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::CreateSnapshotAsyncHelper(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSnapshot(request), context);
}

DecreaseReplicaCountOutcome ElastiCacheClient::DecreaseReplicaCount(const DecreaseReplicaCountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DecreaseReplicaCountOutcome(DecreaseReplicaCountResult(outcome.GetResult()));
  }
  else
  {
    return DecreaseReplicaCountOutcome(outcome.GetError());
  }
}

DecreaseReplicaCountOutcomeCallable ElastiCacheClient::DecreaseReplicaCountCallable(const DecreaseReplicaCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DecreaseReplicaCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DecreaseReplicaCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DecreaseReplicaCountAsync(const DecreaseReplicaCountRequest& request, const DecreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DecreaseReplicaCountAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DecreaseReplicaCountAsyncHelper(const DecreaseReplicaCountRequest& request, const DecreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DecreaseReplicaCount(request), context);
}

DeleteCacheClusterOutcome ElastiCacheClient::DeleteCacheCluster(const DeleteCacheClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteCacheClusterOutcome(DeleteCacheClusterResult(outcome.GetResult()));
  }
  else
  {
    return DeleteCacheClusterOutcome(outcome.GetError());
  }
}

DeleteCacheClusterOutcomeCallable ElastiCacheClient::DeleteCacheClusterCallable(const DeleteCacheClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCacheClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCacheCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DeleteCacheClusterAsync(const DeleteCacheClusterRequest& request, const DeleteCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCacheClusterAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DeleteCacheClusterAsyncHelper(const DeleteCacheClusterRequest& request, const DeleteCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCacheCluster(request), context);
}

DeleteCacheParameterGroupOutcome ElastiCacheClient::DeleteCacheParameterGroup(const DeleteCacheParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteCacheParameterGroupOutcome(NoResult());
  }
  else
  {
    return DeleteCacheParameterGroupOutcome(outcome.GetError());
  }
}

DeleteCacheParameterGroupOutcomeCallable ElastiCacheClient::DeleteCacheParameterGroupCallable(const DeleteCacheParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCacheParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCacheParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DeleteCacheParameterGroupAsync(const DeleteCacheParameterGroupRequest& request, const DeleteCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCacheParameterGroupAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DeleteCacheParameterGroupAsyncHelper(const DeleteCacheParameterGroupRequest& request, const DeleteCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCacheParameterGroup(request), context);
}

DeleteCacheSecurityGroupOutcome ElastiCacheClient::DeleteCacheSecurityGroup(const DeleteCacheSecurityGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteCacheSecurityGroupOutcome(NoResult());
  }
  else
  {
    return DeleteCacheSecurityGroupOutcome(outcome.GetError());
  }
}

DeleteCacheSecurityGroupOutcomeCallable ElastiCacheClient::DeleteCacheSecurityGroupCallable(const DeleteCacheSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCacheSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCacheSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DeleteCacheSecurityGroupAsync(const DeleteCacheSecurityGroupRequest& request, const DeleteCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCacheSecurityGroupAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DeleteCacheSecurityGroupAsyncHelper(const DeleteCacheSecurityGroupRequest& request, const DeleteCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCacheSecurityGroup(request), context);
}

DeleteCacheSubnetGroupOutcome ElastiCacheClient::DeleteCacheSubnetGroup(const DeleteCacheSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteCacheSubnetGroupOutcome(NoResult());
  }
  else
  {
    return DeleteCacheSubnetGroupOutcome(outcome.GetError());
  }
}

DeleteCacheSubnetGroupOutcomeCallable ElastiCacheClient::DeleteCacheSubnetGroupCallable(const DeleteCacheSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCacheSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCacheSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DeleteCacheSubnetGroupAsync(const DeleteCacheSubnetGroupRequest& request, const DeleteCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCacheSubnetGroupAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DeleteCacheSubnetGroupAsyncHelper(const DeleteCacheSubnetGroupRequest& request, const DeleteCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCacheSubnetGroup(request), context);
}

DeleteReplicationGroupOutcome ElastiCacheClient::DeleteReplicationGroup(const DeleteReplicationGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteReplicationGroupOutcome(DeleteReplicationGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteReplicationGroupOutcome(outcome.GetError());
  }
}

DeleteReplicationGroupOutcomeCallable ElastiCacheClient::DeleteReplicationGroupCallable(const DeleteReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DeleteReplicationGroupAsync(const DeleteReplicationGroupRequest& request, const DeleteReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReplicationGroupAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DeleteReplicationGroupAsyncHelper(const DeleteReplicationGroupRequest& request, const DeleteReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReplicationGroup(request), context);
}

DeleteSnapshotOutcome ElastiCacheClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteSnapshotOutcome(DeleteSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSnapshotOutcome(outcome.GetError());
  }
}

DeleteSnapshotOutcomeCallable ElastiCacheClient::DeleteSnapshotCallable(const DeleteSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSnapshotAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DeleteSnapshotAsyncHelper(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSnapshot(request), context);
}

DescribeCacheClustersOutcome ElastiCacheClient::DescribeCacheClusters(const DescribeCacheClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeCacheClustersOutcome(DescribeCacheClustersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCacheClustersOutcome(outcome.GetError());
  }
}

DescribeCacheClustersOutcomeCallable ElastiCacheClient::DescribeCacheClustersCallable(const DescribeCacheClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCacheClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCacheClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeCacheClustersAsync(const DescribeCacheClustersRequest& request, const DescribeCacheClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCacheClustersAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DescribeCacheClustersAsyncHelper(const DescribeCacheClustersRequest& request, const DescribeCacheClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCacheClusters(request), context);
}

DescribeCacheEngineVersionsOutcome ElastiCacheClient::DescribeCacheEngineVersions(const DescribeCacheEngineVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeCacheEngineVersionsOutcome(DescribeCacheEngineVersionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCacheEngineVersionsOutcome(outcome.GetError());
  }
}

DescribeCacheEngineVersionsOutcomeCallable ElastiCacheClient::DescribeCacheEngineVersionsCallable(const DescribeCacheEngineVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCacheEngineVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCacheEngineVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeCacheEngineVersionsAsync(const DescribeCacheEngineVersionsRequest& request, const DescribeCacheEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCacheEngineVersionsAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DescribeCacheEngineVersionsAsyncHelper(const DescribeCacheEngineVersionsRequest& request, const DescribeCacheEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCacheEngineVersions(request), context);
}

DescribeCacheParameterGroupsOutcome ElastiCacheClient::DescribeCacheParameterGroups(const DescribeCacheParameterGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeCacheParameterGroupsOutcome(DescribeCacheParameterGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCacheParameterGroupsOutcome(outcome.GetError());
  }
}

DescribeCacheParameterGroupsOutcomeCallable ElastiCacheClient::DescribeCacheParameterGroupsCallable(const DescribeCacheParameterGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCacheParameterGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCacheParameterGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeCacheParameterGroupsAsync(const DescribeCacheParameterGroupsRequest& request, const DescribeCacheParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCacheParameterGroupsAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DescribeCacheParameterGroupsAsyncHelper(const DescribeCacheParameterGroupsRequest& request, const DescribeCacheParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCacheParameterGroups(request), context);
}

DescribeCacheParametersOutcome ElastiCacheClient::DescribeCacheParameters(const DescribeCacheParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeCacheParametersOutcome(DescribeCacheParametersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCacheParametersOutcome(outcome.GetError());
  }
}

DescribeCacheParametersOutcomeCallable ElastiCacheClient::DescribeCacheParametersCallable(const DescribeCacheParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCacheParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCacheParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeCacheParametersAsync(const DescribeCacheParametersRequest& request, const DescribeCacheParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCacheParametersAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DescribeCacheParametersAsyncHelper(const DescribeCacheParametersRequest& request, const DescribeCacheParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCacheParameters(request), context);
}

DescribeCacheSecurityGroupsOutcome ElastiCacheClient::DescribeCacheSecurityGroups(const DescribeCacheSecurityGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeCacheSecurityGroupsOutcome(DescribeCacheSecurityGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCacheSecurityGroupsOutcome(outcome.GetError());
  }
}

DescribeCacheSecurityGroupsOutcomeCallable ElastiCacheClient::DescribeCacheSecurityGroupsCallable(const DescribeCacheSecurityGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCacheSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCacheSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeCacheSecurityGroupsAsync(const DescribeCacheSecurityGroupsRequest& request, const DescribeCacheSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCacheSecurityGroupsAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DescribeCacheSecurityGroupsAsyncHelper(const DescribeCacheSecurityGroupsRequest& request, const DescribeCacheSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCacheSecurityGroups(request), context);
}

DescribeCacheSubnetGroupsOutcome ElastiCacheClient::DescribeCacheSubnetGroups(const DescribeCacheSubnetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeCacheSubnetGroupsOutcome(DescribeCacheSubnetGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCacheSubnetGroupsOutcome(outcome.GetError());
  }
}

DescribeCacheSubnetGroupsOutcomeCallable ElastiCacheClient::DescribeCacheSubnetGroupsCallable(const DescribeCacheSubnetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCacheSubnetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCacheSubnetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeCacheSubnetGroupsAsync(const DescribeCacheSubnetGroupsRequest& request, const DescribeCacheSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCacheSubnetGroupsAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DescribeCacheSubnetGroupsAsyncHelper(const DescribeCacheSubnetGroupsRequest& request, const DescribeCacheSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCacheSubnetGroups(request), context);
}

DescribeEngineDefaultParametersOutcome ElastiCacheClient::DescribeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEngineDefaultParametersOutcome(DescribeEngineDefaultParametersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEngineDefaultParametersOutcome(outcome.GetError());
  }
}

DescribeEngineDefaultParametersOutcomeCallable ElastiCacheClient::DescribeEngineDefaultParametersCallable(const DescribeEngineDefaultParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEngineDefaultParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEngineDefaultParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeEngineDefaultParametersAsync(const DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEngineDefaultParametersAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DescribeEngineDefaultParametersAsyncHelper(const DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEngineDefaultParameters(request), context);
}

DescribeEventsOutcome ElastiCacheClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEventsOutcome(DescribeEventsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventsOutcome(outcome.GetError());
  }
}

DescribeEventsOutcomeCallable ElastiCacheClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventsAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DescribeEventsAsyncHelper(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEvents(request), context);
}

DescribeReplicationGroupsOutcome ElastiCacheClient::DescribeReplicationGroups(const DescribeReplicationGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeReplicationGroupsOutcome(DescribeReplicationGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReplicationGroupsOutcome(outcome.GetError());
  }
}

DescribeReplicationGroupsOutcomeCallable ElastiCacheClient::DescribeReplicationGroupsCallable(const DescribeReplicationGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeReplicationGroupsAsync(const DescribeReplicationGroupsRequest& request, const DescribeReplicationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReplicationGroupsAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DescribeReplicationGroupsAsyncHelper(const DescribeReplicationGroupsRequest& request, const DescribeReplicationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReplicationGroups(request), context);
}

DescribeReservedCacheNodesOutcome ElastiCacheClient::DescribeReservedCacheNodes(const DescribeReservedCacheNodesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeReservedCacheNodesOutcome(DescribeReservedCacheNodesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReservedCacheNodesOutcome(outcome.GetError());
  }
}

DescribeReservedCacheNodesOutcomeCallable ElastiCacheClient::DescribeReservedCacheNodesCallable(const DescribeReservedCacheNodesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedCacheNodesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedCacheNodes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeReservedCacheNodesAsync(const DescribeReservedCacheNodesRequest& request, const DescribeReservedCacheNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReservedCacheNodesAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DescribeReservedCacheNodesAsyncHelper(const DescribeReservedCacheNodesRequest& request, const DescribeReservedCacheNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedCacheNodes(request), context);
}

DescribeReservedCacheNodesOfferingsOutcome ElastiCacheClient::DescribeReservedCacheNodesOfferings(const DescribeReservedCacheNodesOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeReservedCacheNodesOfferingsOutcome(DescribeReservedCacheNodesOfferingsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReservedCacheNodesOfferingsOutcome(outcome.GetError());
  }
}

DescribeReservedCacheNodesOfferingsOutcomeCallable ElastiCacheClient::DescribeReservedCacheNodesOfferingsCallable(const DescribeReservedCacheNodesOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedCacheNodesOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedCacheNodesOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeReservedCacheNodesOfferingsAsync(const DescribeReservedCacheNodesOfferingsRequest& request, const DescribeReservedCacheNodesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReservedCacheNodesOfferingsAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DescribeReservedCacheNodesOfferingsAsyncHelper(const DescribeReservedCacheNodesOfferingsRequest& request, const DescribeReservedCacheNodesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedCacheNodesOfferings(request), context);
}

DescribeServiceUpdatesOutcome ElastiCacheClient::DescribeServiceUpdates(const DescribeServiceUpdatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeServiceUpdatesOutcome(DescribeServiceUpdatesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeServiceUpdatesOutcome(outcome.GetError());
  }
}

DescribeServiceUpdatesOutcomeCallable ElastiCacheClient::DescribeServiceUpdatesCallable(const DescribeServiceUpdatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceUpdatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServiceUpdates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeServiceUpdatesAsync(const DescribeServiceUpdatesRequest& request, const DescribeServiceUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeServiceUpdatesAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DescribeServiceUpdatesAsyncHelper(const DescribeServiceUpdatesRequest& request, const DescribeServiceUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeServiceUpdates(request), context);
}

DescribeSnapshotsOutcome ElastiCacheClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSnapshotsOutcome(DescribeSnapshotsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSnapshotsOutcome(outcome.GetError());
  }
}

DescribeSnapshotsOutcomeCallable ElastiCacheClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSnapshotsAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DescribeSnapshotsAsyncHelper(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSnapshots(request), context);
}

DescribeUpdateActionsOutcome ElastiCacheClient::DescribeUpdateActions(const DescribeUpdateActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeUpdateActionsOutcome(DescribeUpdateActionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUpdateActionsOutcome(outcome.GetError());
  }
}

DescribeUpdateActionsOutcomeCallable ElastiCacheClient::DescribeUpdateActionsCallable(const DescribeUpdateActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUpdateActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUpdateActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeUpdateActionsAsync(const DescribeUpdateActionsRequest& request, const DescribeUpdateActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUpdateActionsAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::DescribeUpdateActionsAsyncHelper(const DescribeUpdateActionsRequest& request, const DescribeUpdateActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUpdateActions(request), context);
}

IncreaseReplicaCountOutcome ElastiCacheClient::IncreaseReplicaCount(const IncreaseReplicaCountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return IncreaseReplicaCountOutcome(IncreaseReplicaCountResult(outcome.GetResult()));
  }
  else
  {
    return IncreaseReplicaCountOutcome(outcome.GetError());
  }
}

IncreaseReplicaCountOutcomeCallable ElastiCacheClient::IncreaseReplicaCountCallable(const IncreaseReplicaCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IncreaseReplicaCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IncreaseReplicaCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::IncreaseReplicaCountAsync(const IncreaseReplicaCountRequest& request, const IncreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->IncreaseReplicaCountAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::IncreaseReplicaCountAsyncHelper(const IncreaseReplicaCountRequest& request, const IncreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, IncreaseReplicaCount(request), context);
}

ListAllowedNodeTypeModificationsOutcome ElastiCacheClient::ListAllowedNodeTypeModifications(const ListAllowedNodeTypeModificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAllowedNodeTypeModificationsOutcome(ListAllowedNodeTypeModificationsResult(outcome.GetResult()));
  }
  else
  {
    return ListAllowedNodeTypeModificationsOutcome(outcome.GetError());
  }
}

ListAllowedNodeTypeModificationsOutcomeCallable ElastiCacheClient::ListAllowedNodeTypeModificationsCallable(const ListAllowedNodeTypeModificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAllowedNodeTypeModificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAllowedNodeTypeModifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::ListAllowedNodeTypeModificationsAsync(const ListAllowedNodeTypeModificationsRequest& request, const ListAllowedNodeTypeModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAllowedNodeTypeModificationsAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::ListAllowedNodeTypeModificationsAsyncHelper(const ListAllowedNodeTypeModificationsRequest& request, const ListAllowedNodeTypeModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAllowedNodeTypeModifications(request), context);
}

ListTagsForResourceOutcome ElastiCacheClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable ElastiCacheClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ModifyCacheClusterOutcome ElastiCacheClient::ModifyCacheCluster(const ModifyCacheClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyCacheClusterOutcome(ModifyCacheClusterResult(outcome.GetResult()));
  }
  else
  {
    return ModifyCacheClusterOutcome(outcome.GetError());
  }
}

ModifyCacheClusterOutcomeCallable ElastiCacheClient::ModifyCacheClusterCallable(const ModifyCacheClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyCacheClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCacheCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::ModifyCacheClusterAsync(const ModifyCacheClusterRequest& request, const ModifyCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyCacheClusterAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::ModifyCacheClusterAsyncHelper(const ModifyCacheClusterRequest& request, const ModifyCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyCacheCluster(request), context);
}

ModifyCacheParameterGroupOutcome ElastiCacheClient::ModifyCacheParameterGroup(const ModifyCacheParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyCacheParameterGroupOutcome(ModifyCacheParameterGroupResult(outcome.GetResult()));
  }
  else
  {
    return ModifyCacheParameterGroupOutcome(outcome.GetError());
  }
}

ModifyCacheParameterGroupOutcomeCallable ElastiCacheClient::ModifyCacheParameterGroupCallable(const ModifyCacheParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyCacheParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCacheParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::ModifyCacheParameterGroupAsync(const ModifyCacheParameterGroupRequest& request, const ModifyCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyCacheParameterGroupAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::ModifyCacheParameterGroupAsyncHelper(const ModifyCacheParameterGroupRequest& request, const ModifyCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyCacheParameterGroup(request), context);
}

ModifyCacheSubnetGroupOutcome ElastiCacheClient::ModifyCacheSubnetGroup(const ModifyCacheSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyCacheSubnetGroupOutcome(ModifyCacheSubnetGroupResult(outcome.GetResult()));
  }
  else
  {
    return ModifyCacheSubnetGroupOutcome(outcome.GetError());
  }
}

ModifyCacheSubnetGroupOutcomeCallable ElastiCacheClient::ModifyCacheSubnetGroupCallable(const ModifyCacheSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyCacheSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCacheSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::ModifyCacheSubnetGroupAsync(const ModifyCacheSubnetGroupRequest& request, const ModifyCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyCacheSubnetGroupAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::ModifyCacheSubnetGroupAsyncHelper(const ModifyCacheSubnetGroupRequest& request, const ModifyCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyCacheSubnetGroup(request), context);
}

ModifyReplicationGroupOutcome ElastiCacheClient::ModifyReplicationGroup(const ModifyReplicationGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyReplicationGroupOutcome(ModifyReplicationGroupResult(outcome.GetResult()));
  }
  else
  {
    return ModifyReplicationGroupOutcome(outcome.GetError());
  }
}

ModifyReplicationGroupOutcomeCallable ElastiCacheClient::ModifyReplicationGroupCallable(const ModifyReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::ModifyReplicationGroupAsync(const ModifyReplicationGroupRequest& request, const ModifyReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyReplicationGroupAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::ModifyReplicationGroupAsyncHelper(const ModifyReplicationGroupRequest& request, const ModifyReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyReplicationGroup(request), context);
}

ModifyReplicationGroupShardConfigurationOutcome ElastiCacheClient::ModifyReplicationGroupShardConfiguration(const ModifyReplicationGroupShardConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyReplicationGroupShardConfigurationOutcome(ModifyReplicationGroupShardConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return ModifyReplicationGroupShardConfigurationOutcome(outcome.GetError());
  }
}

ModifyReplicationGroupShardConfigurationOutcomeCallable ElastiCacheClient::ModifyReplicationGroupShardConfigurationCallable(const ModifyReplicationGroupShardConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReplicationGroupShardConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReplicationGroupShardConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::ModifyReplicationGroupShardConfigurationAsync(const ModifyReplicationGroupShardConfigurationRequest& request, const ModifyReplicationGroupShardConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyReplicationGroupShardConfigurationAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::ModifyReplicationGroupShardConfigurationAsyncHelper(const ModifyReplicationGroupShardConfigurationRequest& request, const ModifyReplicationGroupShardConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyReplicationGroupShardConfiguration(request), context);
}

PurchaseReservedCacheNodesOfferingOutcome ElastiCacheClient::PurchaseReservedCacheNodesOffering(const PurchaseReservedCacheNodesOfferingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PurchaseReservedCacheNodesOfferingOutcome(PurchaseReservedCacheNodesOfferingResult(outcome.GetResult()));
  }
  else
  {
    return PurchaseReservedCacheNodesOfferingOutcome(outcome.GetError());
  }
}

PurchaseReservedCacheNodesOfferingOutcomeCallable ElastiCacheClient::PurchaseReservedCacheNodesOfferingCallable(const PurchaseReservedCacheNodesOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseReservedCacheNodesOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseReservedCacheNodesOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::PurchaseReservedCacheNodesOfferingAsync(const PurchaseReservedCacheNodesOfferingRequest& request, const PurchaseReservedCacheNodesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PurchaseReservedCacheNodesOfferingAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::PurchaseReservedCacheNodesOfferingAsyncHelper(const PurchaseReservedCacheNodesOfferingRequest& request, const PurchaseReservedCacheNodesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurchaseReservedCacheNodesOffering(request), context);
}

RebootCacheClusterOutcome ElastiCacheClient::RebootCacheCluster(const RebootCacheClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RebootCacheClusterOutcome(RebootCacheClusterResult(outcome.GetResult()));
  }
  else
  {
    return RebootCacheClusterOutcome(outcome.GetError());
  }
}

RebootCacheClusterOutcomeCallable ElastiCacheClient::RebootCacheClusterCallable(const RebootCacheClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootCacheClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootCacheCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::RebootCacheClusterAsync(const RebootCacheClusterRequest& request, const RebootCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RebootCacheClusterAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::RebootCacheClusterAsyncHelper(const RebootCacheClusterRequest& request, const RebootCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebootCacheCluster(request), context);
}

RemoveTagsFromResourceOutcome ElastiCacheClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveTagsFromResourceOutcome(RemoveTagsFromResourceResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTagsFromResourceOutcome(outcome.GetError());
  }
}

RemoveTagsFromResourceOutcomeCallable ElastiCacheClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsFromResourceAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::RemoveTagsFromResourceAsyncHelper(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromResource(request), context);
}

ResetCacheParameterGroupOutcome ElastiCacheClient::ResetCacheParameterGroup(const ResetCacheParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResetCacheParameterGroupOutcome(ResetCacheParameterGroupResult(outcome.GetResult()));
  }
  else
  {
    return ResetCacheParameterGroupOutcome(outcome.GetError());
  }
}

ResetCacheParameterGroupOutcomeCallable ElastiCacheClient::ResetCacheParameterGroupCallable(const ResetCacheParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetCacheParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetCacheParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::ResetCacheParameterGroupAsync(const ResetCacheParameterGroupRequest& request, const ResetCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetCacheParameterGroupAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::ResetCacheParameterGroupAsyncHelper(const ResetCacheParameterGroupRequest& request, const ResetCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetCacheParameterGroup(request), context);
}

RevokeCacheSecurityGroupIngressOutcome ElastiCacheClient::RevokeCacheSecurityGroupIngress(const RevokeCacheSecurityGroupIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RevokeCacheSecurityGroupIngressOutcome(RevokeCacheSecurityGroupIngressResult(outcome.GetResult()));
  }
  else
  {
    return RevokeCacheSecurityGroupIngressOutcome(outcome.GetError());
  }
}

RevokeCacheSecurityGroupIngressOutcomeCallable ElastiCacheClient::RevokeCacheSecurityGroupIngressCallable(const RevokeCacheSecurityGroupIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeCacheSecurityGroupIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeCacheSecurityGroupIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::RevokeCacheSecurityGroupIngressAsync(const RevokeCacheSecurityGroupIngressRequest& request, const RevokeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeCacheSecurityGroupIngressAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::RevokeCacheSecurityGroupIngressAsyncHelper(const RevokeCacheSecurityGroupIngressRequest& request, const RevokeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeCacheSecurityGroupIngress(request), context);
}

TestFailoverOutcome ElastiCacheClient::TestFailover(const TestFailoverRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TestFailoverOutcome(TestFailoverResult(outcome.GetResult()));
  }
  else
  {
    return TestFailoverOutcome(outcome.GetError());
  }
}

TestFailoverOutcomeCallable ElastiCacheClient::TestFailoverCallable(const TestFailoverRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestFailoverOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestFailover(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::TestFailoverAsync(const TestFailoverRequest& request, const TestFailoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TestFailoverAsyncHelper( request, handler, context ); } );
}

void ElastiCacheClient::TestFailoverAsyncHelper(const TestFailoverRequest& request, const TestFailoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestFailover(request), context);
}



