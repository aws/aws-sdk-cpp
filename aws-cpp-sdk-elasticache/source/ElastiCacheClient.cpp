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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/elasticache/ElastiCacheClient.h>
#include <aws/elasticache/ElastiCacheErrorMarshaller.h>
#include <aws/elasticache/ElastiCacheEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* ElastiCacheClient::SERVICE_NAME = "elasticache";
const char* ElastiCacheClient::ALLOCATION_TAG = "ElastiCacheClient";

ElastiCacheClient::ElastiCacheClient(const ElastiCache::ElastiCacheClientConfiguration& clientConfiguration,
                                     std::shared_ptr<ElastiCacheEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ElastiCacheClient::ElastiCacheClient(const AWSCredentials& credentials,
                                     std::shared_ptr<ElastiCacheEndpointProviderBase> endpointProvider,
                                     const ElastiCache::ElastiCacheClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ElastiCacheClient::ElastiCacheClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<ElastiCacheEndpointProviderBase> endpointProvider,
                                     const ElastiCache::ElastiCacheClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ElastiCacheClient::ElastiCacheClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ElastiCacheEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ElastiCacheClient::ElastiCacheClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ElastiCacheEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ElastiCacheClient::ElastiCacheClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ElastiCacheEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ElastiCacheClient::~ElastiCacheClient()
{
}

std::shared_ptr<ElastiCacheEndpointProviderBase>& ElastiCacheClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ElastiCacheClient::init(const ElastiCache::ElastiCacheClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ElastiCache");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ElastiCacheClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String ElastiCacheClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  if (!m_endpointProvider)
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess())
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AddTagsToResourceOutcome ElastiCacheClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTagsToResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTagsToResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddTagsToResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddTagsToResource(request), context);
    } );
}

AuthorizeCacheSecurityGroupIngressOutcome ElastiCacheClient::AuthorizeCacheSecurityGroupIngress(const AuthorizeCacheSecurityGroupIngressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeCacheSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AuthorizeCacheSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AuthorizeCacheSecurityGroupIngressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AuthorizeCacheSecurityGroupIngress(request), context);
    } );
}

BatchApplyUpdateActionOutcome ElastiCacheClient::BatchApplyUpdateAction(const BatchApplyUpdateActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchApplyUpdateAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchApplyUpdateAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchApplyUpdateActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchApplyUpdateAction(request), context);
    } );
}

BatchStopUpdateActionOutcome ElastiCacheClient::BatchStopUpdateAction(const BatchStopUpdateActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchStopUpdateAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchStopUpdateAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchStopUpdateActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchStopUpdateAction(request), context);
    } );
}

CompleteMigrationOutcome ElastiCacheClient::CompleteMigration(const CompleteMigrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CompleteMigration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CompleteMigration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CompleteMigrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CompleteMigrationOutcomeCallable ElastiCacheClient::CompleteMigrationCallable(const CompleteMigrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CompleteMigrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompleteMigration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::CompleteMigrationAsync(const CompleteMigrationRequest& request, const CompleteMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CompleteMigration(request), context);
    } );
}

CopySnapshotOutcome ElastiCacheClient::CopySnapshot(const CopySnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopySnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopySnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopySnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CopySnapshot(request), context);
    } );
}

CreateCacheClusterOutcome ElastiCacheClient::CreateCacheCluster(const CreateCacheClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCacheCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCacheCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCacheClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCacheCluster(request), context);
    } );
}

CreateCacheParameterGroupOutcome ElastiCacheClient::CreateCacheParameterGroup(const CreateCacheParameterGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCacheParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCacheParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCacheParameterGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCacheParameterGroup(request), context);
    } );
}

CreateCacheSecurityGroupOutcome ElastiCacheClient::CreateCacheSecurityGroup(const CreateCacheSecurityGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCacheSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCacheSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCacheSecurityGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCacheSecurityGroup(request), context);
    } );
}

CreateCacheSubnetGroupOutcome ElastiCacheClient::CreateCacheSubnetGroup(const CreateCacheSubnetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCacheSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCacheSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCacheSubnetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCacheSubnetGroup(request), context);
    } );
}

CreateGlobalReplicationGroupOutcome ElastiCacheClient::CreateGlobalReplicationGroup(const CreateGlobalReplicationGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateGlobalReplicationGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateGlobalReplicationGroupOutcomeCallable ElastiCacheClient::CreateGlobalReplicationGroupCallable(const CreateGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::CreateGlobalReplicationGroupAsync(const CreateGlobalReplicationGroupRequest& request, const CreateGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateGlobalReplicationGroup(request), context);
    } );
}

CreateReplicationGroupOutcome ElastiCacheClient::CreateReplicationGroup(const CreateReplicationGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateReplicationGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateReplicationGroup(request), context);
    } );
}

CreateSnapshotOutcome ElastiCacheClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSnapshot(request), context);
    } );
}

CreateUserOutcome ElastiCacheClient::CreateUser(const CreateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateUserOutcomeCallable ElastiCacheClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUser(request), context);
    } );
}

CreateUserGroupOutcome ElastiCacheClient::CreateUserGroup(const CreateUserGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateUserGroupOutcomeCallable ElastiCacheClient::CreateUserGroupCallable(const CreateUserGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::CreateUserGroupAsync(const CreateUserGroupRequest& request, const CreateUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUserGroup(request), context);
    } );
}

DecreaseNodeGroupsInGlobalReplicationGroupOutcome ElastiCacheClient::DecreaseNodeGroupsInGlobalReplicationGroup(const DecreaseNodeGroupsInGlobalReplicationGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DecreaseNodeGroupsInGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DecreaseNodeGroupsInGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DecreaseNodeGroupsInGlobalReplicationGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DecreaseNodeGroupsInGlobalReplicationGroupOutcomeCallable ElastiCacheClient::DecreaseNodeGroupsInGlobalReplicationGroupCallable(const DecreaseNodeGroupsInGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DecreaseNodeGroupsInGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DecreaseNodeGroupsInGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DecreaseNodeGroupsInGlobalReplicationGroupAsync(const DecreaseNodeGroupsInGlobalReplicationGroupRequest& request, const DecreaseNodeGroupsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DecreaseNodeGroupsInGlobalReplicationGroup(request), context);
    } );
}

DecreaseReplicaCountOutcome ElastiCacheClient::DecreaseReplicaCount(const DecreaseReplicaCountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DecreaseReplicaCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DecreaseReplicaCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DecreaseReplicaCountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DecreaseReplicaCount(request), context);
    } );
}

DeleteCacheClusterOutcome ElastiCacheClient::DeleteCacheCluster(const DeleteCacheClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCacheCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCacheCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCacheClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCacheCluster(request), context);
    } );
}

DeleteCacheParameterGroupOutcome ElastiCacheClient::DeleteCacheParameterGroup(const DeleteCacheParameterGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCacheParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCacheParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCacheParameterGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCacheParameterGroup(request), context);
    } );
}

DeleteCacheSecurityGroupOutcome ElastiCacheClient::DeleteCacheSecurityGroup(const DeleteCacheSecurityGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCacheSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCacheSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCacheSecurityGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCacheSecurityGroup(request), context);
    } );
}

DeleteCacheSubnetGroupOutcome ElastiCacheClient::DeleteCacheSubnetGroup(const DeleteCacheSubnetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCacheSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCacheSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCacheSubnetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCacheSubnetGroup(request), context);
    } );
}

DeleteGlobalReplicationGroupOutcome ElastiCacheClient::DeleteGlobalReplicationGroup(const DeleteGlobalReplicationGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteGlobalReplicationGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteGlobalReplicationGroupOutcomeCallable ElastiCacheClient::DeleteGlobalReplicationGroupCallable(const DeleteGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DeleteGlobalReplicationGroupAsync(const DeleteGlobalReplicationGroupRequest& request, const DeleteGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteGlobalReplicationGroup(request), context);
    } );
}

DeleteReplicationGroupOutcome ElastiCacheClient::DeleteReplicationGroup(const DeleteReplicationGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteReplicationGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReplicationGroup(request), context);
    } );
}

DeleteSnapshotOutcome ElastiCacheClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSnapshot(request), context);
    } );
}

DeleteUserOutcome ElastiCacheClient::DeleteUser(const DeleteUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteUserOutcomeCallable ElastiCacheClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUser(request), context);
    } );
}

DeleteUserGroupOutcome ElastiCacheClient::DeleteUserGroup(const DeleteUserGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteUserGroupOutcomeCallable ElastiCacheClient::DeleteUserGroupCallable(const DeleteUserGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DeleteUserGroupAsync(const DeleteUserGroupRequest& request, const DeleteUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUserGroup(request), context);
    } );
}

DescribeCacheClustersOutcome ElastiCacheClient::DescribeCacheClusters(const DescribeCacheClustersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCacheClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCacheClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCacheClustersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCacheClusters(request), context);
    } );
}

DescribeCacheEngineVersionsOutcome ElastiCacheClient::DescribeCacheEngineVersions(const DescribeCacheEngineVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCacheEngineVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCacheEngineVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCacheEngineVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCacheEngineVersions(request), context);
    } );
}

DescribeCacheParameterGroupsOutcome ElastiCacheClient::DescribeCacheParameterGroups(const DescribeCacheParameterGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCacheParameterGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCacheParameterGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCacheParameterGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCacheParameterGroups(request), context);
    } );
}

DescribeCacheParametersOutcome ElastiCacheClient::DescribeCacheParameters(const DescribeCacheParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCacheParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCacheParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCacheParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCacheParameters(request), context);
    } );
}

DescribeCacheSecurityGroupsOutcome ElastiCacheClient::DescribeCacheSecurityGroups(const DescribeCacheSecurityGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCacheSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCacheSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCacheSecurityGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCacheSecurityGroups(request), context);
    } );
}

DescribeCacheSubnetGroupsOutcome ElastiCacheClient::DescribeCacheSubnetGroups(const DescribeCacheSubnetGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCacheSubnetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCacheSubnetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCacheSubnetGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCacheSubnetGroups(request), context);
    } );
}

DescribeEngineDefaultParametersOutcome ElastiCacheClient::DescribeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEngineDefaultParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEngineDefaultParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEngineDefaultParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEngineDefaultParameters(request), context);
    } );
}

DescribeEventsOutcome ElastiCacheClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEvents(request), context);
    } );
}

DescribeGlobalReplicationGroupsOutcome ElastiCacheClient::DescribeGlobalReplicationGroups(const DescribeGlobalReplicationGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGlobalReplicationGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGlobalReplicationGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeGlobalReplicationGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeGlobalReplicationGroupsOutcomeCallable ElastiCacheClient::DescribeGlobalReplicationGroupsCallable(const DescribeGlobalReplicationGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGlobalReplicationGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGlobalReplicationGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeGlobalReplicationGroupsAsync(const DescribeGlobalReplicationGroupsRequest& request, const DescribeGlobalReplicationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeGlobalReplicationGroups(request), context);
    } );
}

DescribeReplicationGroupsOutcome ElastiCacheClient::DescribeReplicationGroups(const DescribeReplicationGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReplicationGroups(request), context);
    } );
}

DescribeReservedCacheNodesOutcome ElastiCacheClient::DescribeReservedCacheNodes(const DescribeReservedCacheNodesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedCacheNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedCacheNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReservedCacheNodesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReservedCacheNodes(request), context);
    } );
}

DescribeReservedCacheNodesOfferingsOutcome ElastiCacheClient::DescribeReservedCacheNodesOfferings(const DescribeReservedCacheNodesOfferingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedCacheNodesOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedCacheNodesOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReservedCacheNodesOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReservedCacheNodesOfferings(request), context);
    } );
}

DescribeServiceUpdatesOutcome ElastiCacheClient::DescribeServiceUpdates(const DescribeServiceUpdatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeServiceUpdates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeServiceUpdates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeServiceUpdatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeServiceUpdates(request), context);
    } );
}

DescribeSnapshotsOutcome ElastiCacheClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSnapshots(request), context);
    } );
}

DescribeUpdateActionsOutcome ElastiCacheClient::DescribeUpdateActions(const DescribeUpdateActionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUpdateActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUpdateActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUpdateActionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeUpdateActions(request), context);
    } );
}

DescribeUserGroupsOutcome ElastiCacheClient::DescribeUserGroups(const DescribeUserGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUserGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUserGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUserGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeUserGroupsOutcomeCallable ElastiCacheClient::DescribeUserGroupsCallable(const DescribeUserGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeUserGroupsAsync(const DescribeUserGroupsRequest& request, const DescribeUserGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeUserGroups(request), context);
    } );
}

DescribeUsersOutcome ElastiCacheClient::DescribeUsers(const DescribeUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeUsersOutcomeCallable ElastiCacheClient::DescribeUsersCallable(const DescribeUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeUsers(request), context);
    } );
}

DisassociateGlobalReplicationGroupOutcome ElastiCacheClient::DisassociateGlobalReplicationGroup(const DisassociateGlobalReplicationGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateGlobalReplicationGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateGlobalReplicationGroupOutcomeCallable ElastiCacheClient::DisassociateGlobalReplicationGroupCallable(const DisassociateGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::DisassociateGlobalReplicationGroupAsync(const DisassociateGlobalReplicationGroupRequest& request, const DisassociateGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateGlobalReplicationGroup(request), context);
    } );
}

FailoverGlobalReplicationGroupOutcome ElastiCacheClient::FailoverGlobalReplicationGroup(const FailoverGlobalReplicationGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, FailoverGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, FailoverGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return FailoverGlobalReplicationGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

FailoverGlobalReplicationGroupOutcomeCallable ElastiCacheClient::FailoverGlobalReplicationGroupCallable(const FailoverGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FailoverGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FailoverGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::FailoverGlobalReplicationGroupAsync(const FailoverGlobalReplicationGroupRequest& request, const FailoverGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, FailoverGlobalReplicationGroup(request), context);
    } );
}

IncreaseNodeGroupsInGlobalReplicationGroupOutcome ElastiCacheClient::IncreaseNodeGroupsInGlobalReplicationGroup(const IncreaseNodeGroupsInGlobalReplicationGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, IncreaseNodeGroupsInGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, IncreaseNodeGroupsInGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return IncreaseNodeGroupsInGlobalReplicationGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

IncreaseNodeGroupsInGlobalReplicationGroupOutcomeCallable ElastiCacheClient::IncreaseNodeGroupsInGlobalReplicationGroupCallable(const IncreaseNodeGroupsInGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IncreaseNodeGroupsInGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IncreaseNodeGroupsInGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::IncreaseNodeGroupsInGlobalReplicationGroupAsync(const IncreaseNodeGroupsInGlobalReplicationGroupRequest& request, const IncreaseNodeGroupsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, IncreaseNodeGroupsInGlobalReplicationGroup(request), context);
    } );
}

IncreaseReplicaCountOutcome ElastiCacheClient::IncreaseReplicaCount(const IncreaseReplicaCountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, IncreaseReplicaCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, IncreaseReplicaCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return IncreaseReplicaCountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, IncreaseReplicaCount(request), context);
    } );
}

ListAllowedNodeTypeModificationsOutcome ElastiCacheClient::ListAllowedNodeTypeModifications(const ListAllowedNodeTypeModificationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAllowedNodeTypeModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAllowedNodeTypeModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAllowedNodeTypeModificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAllowedNodeTypeModifications(request), context);
    } );
}

ListTagsForResourceOutcome ElastiCacheClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ModifyCacheClusterOutcome ElastiCacheClient::ModifyCacheCluster(const ModifyCacheClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyCacheCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyCacheCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyCacheClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyCacheCluster(request), context);
    } );
}

ModifyCacheParameterGroupOutcome ElastiCacheClient::ModifyCacheParameterGroup(const ModifyCacheParameterGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyCacheParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyCacheParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyCacheParameterGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyCacheParameterGroup(request), context);
    } );
}

ModifyCacheSubnetGroupOutcome ElastiCacheClient::ModifyCacheSubnetGroup(const ModifyCacheSubnetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyCacheSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyCacheSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyCacheSubnetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyCacheSubnetGroup(request), context);
    } );
}

ModifyGlobalReplicationGroupOutcome ElastiCacheClient::ModifyGlobalReplicationGroup(const ModifyGlobalReplicationGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyGlobalReplicationGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyGlobalReplicationGroupOutcomeCallable ElastiCacheClient::ModifyGlobalReplicationGroupCallable(const ModifyGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::ModifyGlobalReplicationGroupAsync(const ModifyGlobalReplicationGroupRequest& request, const ModifyGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyGlobalReplicationGroup(request), context);
    } );
}

ModifyReplicationGroupOutcome ElastiCacheClient::ModifyReplicationGroup(const ModifyReplicationGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyReplicationGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyReplicationGroup(request), context);
    } );
}

ModifyReplicationGroupShardConfigurationOutcome ElastiCacheClient::ModifyReplicationGroupShardConfiguration(const ModifyReplicationGroupShardConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyReplicationGroupShardConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyReplicationGroupShardConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyReplicationGroupShardConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyReplicationGroupShardConfiguration(request), context);
    } );
}

ModifyUserOutcome ElastiCacheClient::ModifyUser(const ModifyUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyUserOutcomeCallable ElastiCacheClient::ModifyUserCallable(const ModifyUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyUser(request), context);
    } );
}

ModifyUserGroupOutcome ElastiCacheClient::ModifyUserGroup(const ModifyUserGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyUserGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyUserGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyUserGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyUserGroupOutcomeCallable ElastiCacheClient::ModifyUserGroupCallable(const ModifyUserGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyUserGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyUserGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::ModifyUserGroupAsync(const ModifyUserGroupRequest& request, const ModifyUserGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyUserGroup(request), context);
    } );
}

PurchaseReservedCacheNodesOfferingOutcome ElastiCacheClient::PurchaseReservedCacheNodesOffering(const PurchaseReservedCacheNodesOfferingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseReservedCacheNodesOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PurchaseReservedCacheNodesOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PurchaseReservedCacheNodesOfferingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PurchaseReservedCacheNodesOffering(request), context);
    } );
}

RebalanceSlotsInGlobalReplicationGroupOutcome ElastiCacheClient::RebalanceSlotsInGlobalReplicationGroup(const RebalanceSlotsInGlobalReplicationGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebalanceSlotsInGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebalanceSlotsInGlobalReplicationGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebalanceSlotsInGlobalReplicationGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RebalanceSlotsInGlobalReplicationGroupOutcomeCallable ElastiCacheClient::RebalanceSlotsInGlobalReplicationGroupCallable(const RebalanceSlotsInGlobalReplicationGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebalanceSlotsInGlobalReplicationGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebalanceSlotsInGlobalReplicationGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::RebalanceSlotsInGlobalReplicationGroupAsync(const RebalanceSlotsInGlobalReplicationGroupRequest& request, const RebalanceSlotsInGlobalReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RebalanceSlotsInGlobalReplicationGroup(request), context);
    } );
}

RebootCacheClusterOutcome ElastiCacheClient::RebootCacheCluster(const RebootCacheClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebootCacheCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebootCacheCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebootCacheClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RebootCacheCluster(request), context);
    } );
}

RemoveTagsFromResourceOutcome ElastiCacheClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTagsFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveTagsFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveTagsFromResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveTagsFromResource(request), context);
    } );
}

ResetCacheParameterGroupOutcome ElastiCacheClient::ResetCacheParameterGroup(const ResetCacheParameterGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetCacheParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetCacheParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetCacheParameterGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResetCacheParameterGroup(request), context);
    } );
}

RevokeCacheSecurityGroupIngressOutcome ElastiCacheClient::RevokeCacheSecurityGroupIngress(const RevokeCacheSecurityGroupIngressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeCacheSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeCacheSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeCacheSecurityGroupIngressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RevokeCacheSecurityGroupIngress(request), context);
    } );
}

StartMigrationOutcome ElastiCacheClient::StartMigration(const StartMigrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMigration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartMigration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartMigrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

StartMigrationOutcomeCallable ElastiCacheClient::StartMigrationCallable(const StartMigrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMigrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMigration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElastiCacheClient::StartMigrationAsync(const StartMigrationRequest& request, const StartMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartMigration(request), context);
    } );
}

TestFailoverOutcome ElastiCacheClient::TestFailover(const TestFailoverRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestFailover, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestFailover, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TestFailoverOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TestFailover(request), context);
    } );
}

