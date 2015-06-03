/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/ElastiCacheClient.h>
#include <aws/elasticache/ElastiCacheEndpoint.h>
#include <aws/elasticache/ElastiCacheErrorMarshaller.h>
#include <aws/elasticache/model/AddTagsToResourceRequest.h>
#include <aws/elasticache/model/AuthorizeCacheSecurityGroupIngressRequest.h>
#include <aws/elasticache/model/CopySnapshotRequest.h>
#include <aws/elasticache/model/CreateCacheClusterRequest.h>
#include <aws/elasticache/model/CreateCacheParameterGroupRequest.h>
#include <aws/elasticache/model/CreateCacheSecurityGroupRequest.h>
#include <aws/elasticache/model/CreateCacheSubnetGroupRequest.h>
#include <aws/elasticache/model/CreateReplicationGroupRequest.h>
#include <aws/elasticache/model/CreateSnapshotRequest.h>
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
#include <aws/elasticache/model/DescribeSnapshotsRequest.h>
#include <aws/elasticache/model/ListTagsForResourceRequest.h>
#include <aws/elasticache/model/ModifyCacheClusterRequest.h>
#include <aws/elasticache/model/ModifyCacheParameterGroupRequest.h>
#include <aws/elasticache/model/ModifyCacheSubnetGroupRequest.h>
#include <aws/elasticache/model/ModifyReplicationGroupRequest.h>
#include <aws/elasticache/model/PurchaseReservedCacheNodesOfferingRequest.h>
#include <aws/elasticache/model/RebootCacheClusterRequest.h>
#include <aws/elasticache/model/RemoveTagsFromResourceRequest.h>
#include <aws/elasticache/model/ResetCacheParameterGroupRequest.h>
#include <aws/elasticache/model/RevokeCacheSecurityGroupIngressRequest.h>

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
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElastiCacheClient::ElastiCacheClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElastiCacheClient::ElastiCacheClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << ElastiCacheEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AddTagsToResourceOutcome ElastiCacheClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::AddTagsToResource, this, request);
}

void ElastiCacheClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::AddTagsToResourceAsyncHelper, this, request);
}

void ElastiCacheClient::AddTagsToResourceAsyncHelper(const AddTagsToResourceRequest& request) const
{
  m_onAddTagsToResourceOutcomeReceived(this, request, AddTagsToResource(request));
}

AuthorizeCacheSecurityGroupIngressOutcome ElastiCacheClient::AuthorizeCacheSecurityGroupIngress(const AuthorizeCacheSecurityGroupIngressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::AuthorizeCacheSecurityGroupIngress, this, request);
}

void ElastiCacheClient::AuthorizeCacheSecurityGroupIngressAsync(const AuthorizeCacheSecurityGroupIngressRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::AuthorizeCacheSecurityGroupIngressAsyncHelper, this, request);
}

void ElastiCacheClient::AuthorizeCacheSecurityGroupIngressAsyncHelper(const AuthorizeCacheSecurityGroupIngressRequest& request) const
{
  m_onAuthorizeCacheSecurityGroupIngressOutcomeReceived(this, request, AuthorizeCacheSecurityGroupIngress(request));
}

CopySnapshotOutcome ElastiCacheClient::CopySnapshot(const CopySnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::CopySnapshot, this, request);
}

void ElastiCacheClient::CopySnapshotAsync(const CopySnapshotRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::CopySnapshotAsyncHelper, this, request);
}

void ElastiCacheClient::CopySnapshotAsyncHelper(const CopySnapshotRequest& request) const
{
  m_onCopySnapshotOutcomeReceived(this, request, CopySnapshot(request));
}

CreateCacheClusterOutcome ElastiCacheClient::CreateCacheCluster(const CreateCacheClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::CreateCacheCluster, this, request);
}

void ElastiCacheClient::CreateCacheClusterAsync(const CreateCacheClusterRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::CreateCacheClusterAsyncHelper, this, request);
}

void ElastiCacheClient::CreateCacheClusterAsyncHelper(const CreateCacheClusterRequest& request) const
{
  m_onCreateCacheClusterOutcomeReceived(this, request, CreateCacheCluster(request));
}

CreateCacheParameterGroupOutcome ElastiCacheClient::CreateCacheParameterGroup(const CreateCacheParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::CreateCacheParameterGroup, this, request);
}

void ElastiCacheClient::CreateCacheParameterGroupAsync(const CreateCacheParameterGroupRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::CreateCacheParameterGroupAsyncHelper, this, request);
}

void ElastiCacheClient::CreateCacheParameterGroupAsyncHelper(const CreateCacheParameterGroupRequest& request) const
{
  m_onCreateCacheParameterGroupOutcomeReceived(this, request, CreateCacheParameterGroup(request));
}

CreateCacheSecurityGroupOutcome ElastiCacheClient::CreateCacheSecurityGroup(const CreateCacheSecurityGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::CreateCacheSecurityGroup, this, request);
}

void ElastiCacheClient::CreateCacheSecurityGroupAsync(const CreateCacheSecurityGroupRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::CreateCacheSecurityGroupAsyncHelper, this, request);
}

void ElastiCacheClient::CreateCacheSecurityGroupAsyncHelper(const CreateCacheSecurityGroupRequest& request) const
{
  m_onCreateCacheSecurityGroupOutcomeReceived(this, request, CreateCacheSecurityGroup(request));
}

CreateCacheSubnetGroupOutcome ElastiCacheClient::CreateCacheSubnetGroup(const CreateCacheSubnetGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::CreateCacheSubnetGroup, this, request);
}

void ElastiCacheClient::CreateCacheSubnetGroupAsync(const CreateCacheSubnetGroupRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::CreateCacheSubnetGroupAsyncHelper, this, request);
}

void ElastiCacheClient::CreateCacheSubnetGroupAsyncHelper(const CreateCacheSubnetGroupRequest& request) const
{
  m_onCreateCacheSubnetGroupOutcomeReceived(this, request, CreateCacheSubnetGroup(request));
}

CreateReplicationGroupOutcome ElastiCacheClient::CreateReplicationGroup(const CreateReplicationGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::CreateReplicationGroup, this, request);
}

void ElastiCacheClient::CreateReplicationGroupAsync(const CreateReplicationGroupRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::CreateReplicationGroupAsyncHelper, this, request);
}

void ElastiCacheClient::CreateReplicationGroupAsyncHelper(const CreateReplicationGroupRequest& request) const
{
  m_onCreateReplicationGroupOutcomeReceived(this, request, CreateReplicationGroup(request));
}

CreateSnapshotOutcome ElastiCacheClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::CreateSnapshot, this, request);
}

void ElastiCacheClient::CreateSnapshotAsync(const CreateSnapshotRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::CreateSnapshotAsyncHelper, this, request);
}

void ElastiCacheClient::CreateSnapshotAsyncHelper(const CreateSnapshotRequest& request) const
{
  m_onCreateSnapshotOutcomeReceived(this, request, CreateSnapshot(request));
}

DeleteCacheClusterOutcome ElastiCacheClient::DeleteCacheCluster(const DeleteCacheClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DeleteCacheCluster, this, request);
}

void ElastiCacheClient::DeleteCacheClusterAsync(const DeleteCacheClusterRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DeleteCacheClusterAsyncHelper, this, request);
}

void ElastiCacheClient::DeleteCacheClusterAsyncHelper(const DeleteCacheClusterRequest& request) const
{
  m_onDeleteCacheClusterOutcomeReceived(this, request, DeleteCacheCluster(request));
}

DeleteCacheParameterGroupOutcome ElastiCacheClient::DeleteCacheParameterGroup(const DeleteCacheParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DeleteCacheParameterGroup, this, request);
}

void ElastiCacheClient::DeleteCacheParameterGroupAsync(const DeleteCacheParameterGroupRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DeleteCacheParameterGroupAsyncHelper, this, request);
}

void ElastiCacheClient::DeleteCacheParameterGroupAsyncHelper(const DeleteCacheParameterGroupRequest& request) const
{
  m_onDeleteCacheParameterGroupOutcomeReceived(this, request, DeleteCacheParameterGroup(request));
}

DeleteCacheSecurityGroupOutcome ElastiCacheClient::DeleteCacheSecurityGroup(const DeleteCacheSecurityGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DeleteCacheSecurityGroup, this, request);
}

void ElastiCacheClient::DeleteCacheSecurityGroupAsync(const DeleteCacheSecurityGroupRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DeleteCacheSecurityGroupAsyncHelper, this, request);
}

void ElastiCacheClient::DeleteCacheSecurityGroupAsyncHelper(const DeleteCacheSecurityGroupRequest& request) const
{
  m_onDeleteCacheSecurityGroupOutcomeReceived(this, request, DeleteCacheSecurityGroup(request));
}

DeleteCacheSubnetGroupOutcome ElastiCacheClient::DeleteCacheSubnetGroup(const DeleteCacheSubnetGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DeleteCacheSubnetGroup, this, request);
}

void ElastiCacheClient::DeleteCacheSubnetGroupAsync(const DeleteCacheSubnetGroupRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DeleteCacheSubnetGroupAsyncHelper, this, request);
}

void ElastiCacheClient::DeleteCacheSubnetGroupAsyncHelper(const DeleteCacheSubnetGroupRequest& request) const
{
  m_onDeleteCacheSubnetGroupOutcomeReceived(this, request, DeleteCacheSubnetGroup(request));
}

DeleteReplicationGroupOutcome ElastiCacheClient::DeleteReplicationGroup(const DeleteReplicationGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DeleteReplicationGroup, this, request);
}

void ElastiCacheClient::DeleteReplicationGroupAsync(const DeleteReplicationGroupRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DeleteReplicationGroupAsyncHelper, this, request);
}

void ElastiCacheClient::DeleteReplicationGroupAsyncHelper(const DeleteReplicationGroupRequest& request) const
{
  m_onDeleteReplicationGroupOutcomeReceived(this, request, DeleteReplicationGroup(request));
}

DeleteSnapshotOutcome ElastiCacheClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DeleteSnapshot, this, request);
}

void ElastiCacheClient::DeleteSnapshotAsync(const DeleteSnapshotRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DeleteSnapshotAsyncHelper, this, request);
}

void ElastiCacheClient::DeleteSnapshotAsyncHelper(const DeleteSnapshotRequest& request) const
{
  m_onDeleteSnapshotOutcomeReceived(this, request, DeleteSnapshot(request));
}

DescribeCacheClustersOutcome ElastiCacheClient::DescribeCacheClusters(const DescribeCacheClustersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DescribeCacheClusters, this, request);
}

void ElastiCacheClient::DescribeCacheClustersAsync(const DescribeCacheClustersRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DescribeCacheClustersAsyncHelper, this, request);
}

void ElastiCacheClient::DescribeCacheClustersAsyncHelper(const DescribeCacheClustersRequest& request) const
{
  m_onDescribeCacheClustersOutcomeReceived(this, request, DescribeCacheClusters(request));
}

DescribeCacheEngineVersionsOutcome ElastiCacheClient::DescribeCacheEngineVersions(const DescribeCacheEngineVersionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DescribeCacheEngineVersions, this, request);
}

void ElastiCacheClient::DescribeCacheEngineVersionsAsync(const DescribeCacheEngineVersionsRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DescribeCacheEngineVersionsAsyncHelper, this, request);
}

void ElastiCacheClient::DescribeCacheEngineVersionsAsyncHelper(const DescribeCacheEngineVersionsRequest& request) const
{
  m_onDescribeCacheEngineVersionsOutcomeReceived(this, request, DescribeCacheEngineVersions(request));
}

DescribeCacheParameterGroupsOutcome ElastiCacheClient::DescribeCacheParameterGroups(const DescribeCacheParameterGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DescribeCacheParameterGroups, this, request);
}

void ElastiCacheClient::DescribeCacheParameterGroupsAsync(const DescribeCacheParameterGroupsRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DescribeCacheParameterGroupsAsyncHelper, this, request);
}

void ElastiCacheClient::DescribeCacheParameterGroupsAsyncHelper(const DescribeCacheParameterGroupsRequest& request) const
{
  m_onDescribeCacheParameterGroupsOutcomeReceived(this, request, DescribeCacheParameterGroups(request));
}

DescribeCacheParametersOutcome ElastiCacheClient::DescribeCacheParameters(const DescribeCacheParametersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DescribeCacheParameters, this, request);
}

void ElastiCacheClient::DescribeCacheParametersAsync(const DescribeCacheParametersRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DescribeCacheParametersAsyncHelper, this, request);
}

void ElastiCacheClient::DescribeCacheParametersAsyncHelper(const DescribeCacheParametersRequest& request) const
{
  m_onDescribeCacheParametersOutcomeReceived(this, request, DescribeCacheParameters(request));
}

DescribeCacheSecurityGroupsOutcome ElastiCacheClient::DescribeCacheSecurityGroups(const DescribeCacheSecurityGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DescribeCacheSecurityGroups, this, request);
}

void ElastiCacheClient::DescribeCacheSecurityGroupsAsync(const DescribeCacheSecurityGroupsRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DescribeCacheSecurityGroupsAsyncHelper, this, request);
}

void ElastiCacheClient::DescribeCacheSecurityGroupsAsyncHelper(const DescribeCacheSecurityGroupsRequest& request) const
{
  m_onDescribeCacheSecurityGroupsOutcomeReceived(this, request, DescribeCacheSecurityGroups(request));
}

DescribeCacheSubnetGroupsOutcome ElastiCacheClient::DescribeCacheSubnetGroups(const DescribeCacheSubnetGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DescribeCacheSubnetGroups, this, request);
}

void ElastiCacheClient::DescribeCacheSubnetGroupsAsync(const DescribeCacheSubnetGroupsRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DescribeCacheSubnetGroupsAsyncHelper, this, request);
}

void ElastiCacheClient::DescribeCacheSubnetGroupsAsyncHelper(const DescribeCacheSubnetGroupsRequest& request) const
{
  m_onDescribeCacheSubnetGroupsOutcomeReceived(this, request, DescribeCacheSubnetGroups(request));
}

DescribeEngineDefaultParametersOutcome ElastiCacheClient::DescribeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DescribeEngineDefaultParameters, this, request);
}

void ElastiCacheClient::DescribeEngineDefaultParametersAsync(const DescribeEngineDefaultParametersRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DescribeEngineDefaultParametersAsyncHelper, this, request);
}

void ElastiCacheClient::DescribeEngineDefaultParametersAsyncHelper(const DescribeEngineDefaultParametersRequest& request) const
{
  m_onDescribeEngineDefaultParametersOutcomeReceived(this, request, DescribeEngineDefaultParameters(request));
}

DescribeEventsOutcome ElastiCacheClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DescribeEvents, this, request);
}

void ElastiCacheClient::DescribeEventsAsync(const DescribeEventsRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DescribeEventsAsyncHelper, this, request);
}

void ElastiCacheClient::DescribeEventsAsyncHelper(const DescribeEventsRequest& request) const
{
  m_onDescribeEventsOutcomeReceived(this, request, DescribeEvents(request));
}

DescribeReplicationGroupsOutcome ElastiCacheClient::DescribeReplicationGroups(const DescribeReplicationGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DescribeReplicationGroups, this, request);
}

void ElastiCacheClient::DescribeReplicationGroupsAsync(const DescribeReplicationGroupsRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DescribeReplicationGroupsAsyncHelper, this, request);
}

void ElastiCacheClient::DescribeReplicationGroupsAsyncHelper(const DescribeReplicationGroupsRequest& request) const
{
  m_onDescribeReplicationGroupsOutcomeReceived(this, request, DescribeReplicationGroups(request));
}

DescribeReservedCacheNodesOutcome ElastiCacheClient::DescribeReservedCacheNodes(const DescribeReservedCacheNodesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DescribeReservedCacheNodes, this, request);
}

void ElastiCacheClient::DescribeReservedCacheNodesAsync(const DescribeReservedCacheNodesRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DescribeReservedCacheNodesAsyncHelper, this, request);
}

void ElastiCacheClient::DescribeReservedCacheNodesAsyncHelper(const DescribeReservedCacheNodesRequest& request) const
{
  m_onDescribeReservedCacheNodesOutcomeReceived(this, request, DescribeReservedCacheNodes(request));
}

DescribeReservedCacheNodesOfferingsOutcome ElastiCacheClient::DescribeReservedCacheNodesOfferings(const DescribeReservedCacheNodesOfferingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DescribeReservedCacheNodesOfferings, this, request);
}

void ElastiCacheClient::DescribeReservedCacheNodesOfferingsAsync(const DescribeReservedCacheNodesOfferingsRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DescribeReservedCacheNodesOfferingsAsyncHelper, this, request);
}

void ElastiCacheClient::DescribeReservedCacheNodesOfferingsAsyncHelper(const DescribeReservedCacheNodesOfferingsRequest& request) const
{
  m_onDescribeReservedCacheNodesOfferingsOutcomeReceived(this, request, DescribeReservedCacheNodesOfferings(request));
}

DescribeSnapshotsOutcome ElastiCacheClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::DescribeSnapshots, this, request);
}

void ElastiCacheClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::DescribeSnapshotsAsyncHelper, this, request);
}

void ElastiCacheClient::DescribeSnapshotsAsyncHelper(const DescribeSnapshotsRequest& request) const
{
  m_onDescribeSnapshotsOutcomeReceived(this, request, DescribeSnapshots(request));
}

ListTagsForResourceOutcome ElastiCacheClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::ListTagsForResource, this, request);
}

void ElastiCacheClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::ListTagsForResourceAsyncHelper, this, request);
}

void ElastiCacheClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request) const
{
  m_onListTagsForResourceOutcomeReceived(this, request, ListTagsForResource(request));
}

ModifyCacheClusterOutcome ElastiCacheClient::ModifyCacheCluster(const ModifyCacheClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::ModifyCacheCluster, this, request);
}

void ElastiCacheClient::ModifyCacheClusterAsync(const ModifyCacheClusterRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::ModifyCacheClusterAsyncHelper, this, request);
}

void ElastiCacheClient::ModifyCacheClusterAsyncHelper(const ModifyCacheClusterRequest& request) const
{
  m_onModifyCacheClusterOutcomeReceived(this, request, ModifyCacheCluster(request));
}

ModifyCacheParameterGroupOutcome ElastiCacheClient::ModifyCacheParameterGroup(const ModifyCacheParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::ModifyCacheParameterGroup, this, request);
}

void ElastiCacheClient::ModifyCacheParameterGroupAsync(const ModifyCacheParameterGroupRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::ModifyCacheParameterGroupAsyncHelper, this, request);
}

void ElastiCacheClient::ModifyCacheParameterGroupAsyncHelper(const ModifyCacheParameterGroupRequest& request) const
{
  m_onModifyCacheParameterGroupOutcomeReceived(this, request, ModifyCacheParameterGroup(request));
}

ModifyCacheSubnetGroupOutcome ElastiCacheClient::ModifyCacheSubnetGroup(const ModifyCacheSubnetGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::ModifyCacheSubnetGroup, this, request);
}

void ElastiCacheClient::ModifyCacheSubnetGroupAsync(const ModifyCacheSubnetGroupRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::ModifyCacheSubnetGroupAsyncHelper, this, request);
}

void ElastiCacheClient::ModifyCacheSubnetGroupAsyncHelper(const ModifyCacheSubnetGroupRequest& request) const
{
  m_onModifyCacheSubnetGroupOutcomeReceived(this, request, ModifyCacheSubnetGroup(request));
}

ModifyReplicationGroupOutcome ElastiCacheClient::ModifyReplicationGroup(const ModifyReplicationGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::ModifyReplicationGroup, this, request);
}

void ElastiCacheClient::ModifyReplicationGroupAsync(const ModifyReplicationGroupRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::ModifyReplicationGroupAsyncHelper, this, request);
}

void ElastiCacheClient::ModifyReplicationGroupAsyncHelper(const ModifyReplicationGroupRequest& request) const
{
  m_onModifyReplicationGroupOutcomeReceived(this, request, ModifyReplicationGroup(request));
}

PurchaseReservedCacheNodesOfferingOutcome ElastiCacheClient::PurchaseReservedCacheNodesOffering(const PurchaseReservedCacheNodesOfferingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::PurchaseReservedCacheNodesOffering, this, request);
}

void ElastiCacheClient::PurchaseReservedCacheNodesOfferingAsync(const PurchaseReservedCacheNodesOfferingRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::PurchaseReservedCacheNodesOfferingAsyncHelper, this, request);
}

void ElastiCacheClient::PurchaseReservedCacheNodesOfferingAsyncHelper(const PurchaseReservedCacheNodesOfferingRequest& request) const
{
  m_onPurchaseReservedCacheNodesOfferingOutcomeReceived(this, request, PurchaseReservedCacheNodesOffering(request));
}

RebootCacheClusterOutcome ElastiCacheClient::RebootCacheCluster(const RebootCacheClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::RebootCacheCluster, this, request);
}

void ElastiCacheClient::RebootCacheClusterAsync(const RebootCacheClusterRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::RebootCacheClusterAsyncHelper, this, request);
}

void ElastiCacheClient::RebootCacheClusterAsyncHelper(const RebootCacheClusterRequest& request) const
{
  m_onRebootCacheClusterOutcomeReceived(this, request, RebootCacheCluster(request));
}

RemoveTagsFromResourceOutcome ElastiCacheClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::RemoveTagsFromResource, this, request);
}

void ElastiCacheClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::RemoveTagsFromResourceAsyncHelper, this, request);
}

void ElastiCacheClient::RemoveTagsFromResourceAsyncHelper(const RemoveTagsFromResourceRequest& request) const
{
  m_onRemoveTagsFromResourceOutcomeReceived(this, request, RemoveTagsFromResource(request));
}

ResetCacheParameterGroupOutcome ElastiCacheClient::ResetCacheParameterGroup(const ResetCacheParameterGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::ResetCacheParameterGroup, this, request);
}

void ElastiCacheClient::ResetCacheParameterGroupAsync(const ResetCacheParameterGroupRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::ResetCacheParameterGroupAsyncHelper, this, request);
}

void ElastiCacheClient::ResetCacheParameterGroupAsyncHelper(const ResetCacheParameterGroupRequest& request) const
{
  m_onResetCacheParameterGroupOutcomeReceived(this, request, ResetCacheParameterGroup(request));
}

RevokeCacheSecurityGroupIngressOutcome ElastiCacheClient::RevokeCacheSecurityGroupIngress(const RevokeCacheSecurityGroupIngressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &ElastiCacheClient::RevokeCacheSecurityGroupIngress, this, request);
}

void ElastiCacheClient::RevokeCacheSecurityGroupIngressAsync(const RevokeCacheSecurityGroupIngressRequest& request) const
{
  m_executor->Submit(&ElastiCacheClient::RevokeCacheSecurityGroupIngressAsyncHelper, this, request);
}

void ElastiCacheClient::RevokeCacheSecurityGroupIngressAsyncHelper(const RevokeCacheSecurityGroupIngressRequest& request) const
{
  m_onRevokeCacheSecurityGroupIngressOutcomeReceived(this, request, RevokeCacheSecurityGroupIngress(request));
}

