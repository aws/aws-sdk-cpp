/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticache/ElastiCacheClient.h>
#include <aws/elasticache/ElastiCacheEndpointProvider.h>
#include <aws/elasticache/ElastiCacheErrorMarshaller.h>
#include <aws/elasticache/model/AddTagsToResourceRequest.h>
#include <aws/elasticache/model/AuthorizeCacheSecurityGroupIngressRequest.h>
#include <aws/elasticache/model/BatchApplyUpdateActionRequest.h>
#include <aws/elasticache/model/BatchStopUpdateActionRequest.h>
#include <aws/elasticache/model/CompleteMigrationRequest.h>
#include <aws/elasticache/model/CopyServerlessCacheSnapshotRequest.h>
#include <aws/elasticache/model/CopySnapshotRequest.h>
#include <aws/elasticache/model/CreateCacheClusterRequest.h>
#include <aws/elasticache/model/CreateCacheParameterGroupRequest.h>
#include <aws/elasticache/model/CreateCacheSecurityGroupRequest.h>
#include <aws/elasticache/model/CreateCacheSubnetGroupRequest.h>
#include <aws/elasticache/model/CreateGlobalReplicationGroupRequest.h>
#include <aws/elasticache/model/CreateReplicationGroupRequest.h>
#include <aws/elasticache/model/CreateServerlessCacheRequest.h>
#include <aws/elasticache/model/CreateServerlessCacheSnapshotRequest.h>
#include <aws/elasticache/model/CreateSnapshotRequest.h>
#include <aws/elasticache/model/CreateUserGroupRequest.h>
#include <aws/elasticache/model/CreateUserRequest.h>
#include <aws/elasticache/model/DecreaseNodeGroupsInGlobalReplicationGroupRequest.h>
#include <aws/elasticache/model/DecreaseReplicaCountRequest.h>
#include <aws/elasticache/model/DeleteCacheClusterRequest.h>
#include <aws/elasticache/model/DeleteCacheParameterGroupRequest.h>
#include <aws/elasticache/model/DeleteCacheSecurityGroupRequest.h>
#include <aws/elasticache/model/DeleteCacheSubnetGroupRequest.h>
#include <aws/elasticache/model/DeleteGlobalReplicationGroupRequest.h>
#include <aws/elasticache/model/DeleteReplicationGroupRequest.h>
#include <aws/elasticache/model/DeleteServerlessCacheRequest.h>
#include <aws/elasticache/model/DeleteServerlessCacheSnapshotRequest.h>
#include <aws/elasticache/model/DeleteSnapshotRequest.h>
#include <aws/elasticache/model/DeleteUserGroupRequest.h>
#include <aws/elasticache/model/DeleteUserRequest.h>
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
#include <aws/elasticache/model/DescribeReservedCacheNodesOfferingsRequest.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesRequest.h>
#include <aws/elasticache/model/DescribeServerlessCacheSnapshotsRequest.h>
#include <aws/elasticache/model/DescribeServerlessCachesRequest.h>
#include <aws/elasticache/model/DescribeServiceUpdatesRequest.h>
#include <aws/elasticache/model/DescribeSnapshotsRequest.h>
#include <aws/elasticache/model/DescribeUpdateActionsRequest.h>
#include <aws/elasticache/model/DescribeUserGroupsRequest.h>
#include <aws/elasticache/model/DescribeUsersRequest.h>
#include <aws/elasticache/model/DisassociateGlobalReplicationGroupRequest.h>
#include <aws/elasticache/model/ExportServerlessCacheSnapshotRequest.h>
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
#include <aws/elasticache/model/ModifyServerlessCacheRequest.h>
#include <aws/elasticache/model/ModifyUserGroupRequest.h>
#include <aws/elasticache/model/ModifyUserRequest.h>
#include <aws/elasticache/model/PurchaseReservedCacheNodesOfferingRequest.h>
#include <aws/elasticache/model/RebalanceSlotsInGlobalReplicationGroupRequest.h>
#include <aws/elasticache/model/RebootCacheClusterRequest.h>
#include <aws/elasticache/model/RemoveTagsFromResourceRequest.h>
#include <aws/elasticache/model/ResetCacheParameterGroupRequest.h>
#include <aws/elasticache/model/RevokeCacheSecurityGroupIngressRequest.h>
#include <aws/elasticache/model/StartMigrationRequest.h>
#include <aws/elasticache/model/TestFailoverRequest.h>
#include <aws/elasticache/model/TestMigrationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElastiCache;
using namespace Aws::ElastiCache::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ElastiCache {
const char SERVICE_NAME[] = "elasticache";
const char ALLOCATION_TAG[] = "ElastiCacheClient";
}  // namespace ElastiCache
}  // namespace Aws
const char* ElastiCacheClient::GetServiceName() { return SERVICE_NAME; }
const char* ElastiCacheClient::GetAllocationTag() { return ALLOCATION_TAG; }

ElastiCacheClient::ElastiCacheClient(const ElastiCache::ElastiCacheClientConfiguration& clientConfiguration,
                                     std::shared_ptr<ElastiCacheEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ElastiCacheEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElastiCacheClient::ElastiCacheClient(const AWSCredentials& credentials, std::shared_ptr<ElastiCacheEndpointProviderBase> endpointProvider,
                                     const ElastiCache::ElastiCacheClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ElastiCacheEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElastiCacheClient::ElastiCacheClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<ElastiCacheEndpointProviderBase> endpointProvider,
                                     const ElastiCache::ElastiCacheClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ElastiCacheEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ElastiCacheClient::ElastiCacheClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ElastiCacheEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElastiCacheClient::ElastiCacheClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ElastiCacheEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElastiCacheClient::ElastiCacheClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElastiCacheErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ElastiCacheEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ElastiCacheClient::~ElastiCacheClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ElastiCacheEndpointProviderBase>& ElastiCacheClient::accessEndpointProvider() { return m_endpointProvider; }

void ElastiCacheClient::init(const ElastiCache::ElastiCacheClientConfiguration& config) {
  AWSClient::SetServiceClientName("ElastiCache");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "elasticache");
}

void ElastiCacheClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String ElastiCacheClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert,
                                                            const char* region) const {
  if (!m_endpointProvider) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess()) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

ElastiCacheClient::InvokeOperationOutcome ElastiCacheClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                                    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
AddTagsToResourceOutcome ElastiCacheClient::AddTagsToResource(const AddTagsToResourceRequest& request) const {
  return AddTagsToResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AuthorizeCacheSecurityGroupIngressOutcome ElastiCacheClient::AuthorizeCacheSecurityGroupIngress(
    const AuthorizeCacheSecurityGroupIngressRequest& request) const {
  return AuthorizeCacheSecurityGroupIngressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchApplyUpdateActionOutcome ElastiCacheClient::BatchApplyUpdateAction(const BatchApplyUpdateActionRequest& request) const {
  return BatchApplyUpdateActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchStopUpdateActionOutcome ElastiCacheClient::BatchStopUpdateAction(const BatchStopUpdateActionRequest& request) const {
  return BatchStopUpdateActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CompleteMigrationOutcome ElastiCacheClient::CompleteMigration(const CompleteMigrationRequest& request) const {
  return CompleteMigrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CopyServerlessCacheSnapshotOutcome ElastiCacheClient::CopyServerlessCacheSnapshot(const CopyServerlessCacheSnapshotRequest& request) const {
  return CopyServerlessCacheSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CopySnapshotOutcome ElastiCacheClient::CopySnapshot(const CopySnapshotRequest& request) const {
  return CopySnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCacheClusterOutcome ElastiCacheClient::CreateCacheCluster(const CreateCacheClusterRequest& request) const {
  return CreateCacheClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCacheParameterGroupOutcome ElastiCacheClient::CreateCacheParameterGroup(const CreateCacheParameterGroupRequest& request) const {
  return CreateCacheParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCacheSecurityGroupOutcome ElastiCacheClient::CreateCacheSecurityGroup(const CreateCacheSecurityGroupRequest& request) const {
  return CreateCacheSecurityGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCacheSubnetGroupOutcome ElastiCacheClient::CreateCacheSubnetGroup(const CreateCacheSubnetGroupRequest& request) const {
  return CreateCacheSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGlobalReplicationGroupOutcome ElastiCacheClient::CreateGlobalReplicationGroup(
    const CreateGlobalReplicationGroupRequest& request) const {
  return CreateGlobalReplicationGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReplicationGroupOutcome ElastiCacheClient::CreateReplicationGroup(const CreateReplicationGroupRequest& request) const {
  return CreateReplicationGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateServerlessCacheOutcome ElastiCacheClient::CreateServerlessCache(const CreateServerlessCacheRequest& request) const {
  return CreateServerlessCacheOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateServerlessCacheSnapshotOutcome ElastiCacheClient::CreateServerlessCacheSnapshot(
    const CreateServerlessCacheSnapshotRequest& request) const {
  return CreateServerlessCacheSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSnapshotOutcome ElastiCacheClient::CreateSnapshot(const CreateSnapshotRequest& request) const {
  return CreateSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserOutcome ElastiCacheClient::CreateUser(const CreateUserRequest& request) const {
  return CreateUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserGroupOutcome ElastiCacheClient::CreateUserGroup(const CreateUserGroupRequest& request) const {
  return CreateUserGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DecreaseNodeGroupsInGlobalReplicationGroupOutcome ElastiCacheClient::DecreaseNodeGroupsInGlobalReplicationGroup(
    const DecreaseNodeGroupsInGlobalReplicationGroupRequest& request) const {
  return DecreaseNodeGroupsInGlobalReplicationGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DecreaseReplicaCountOutcome ElastiCacheClient::DecreaseReplicaCount(const DecreaseReplicaCountRequest& request) const {
  return DecreaseReplicaCountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCacheClusterOutcome ElastiCacheClient::DeleteCacheCluster(const DeleteCacheClusterRequest& request) const {
  return DeleteCacheClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCacheParameterGroupOutcome ElastiCacheClient::DeleteCacheParameterGroup(const DeleteCacheParameterGroupRequest& request) const {
  return DeleteCacheParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCacheSecurityGroupOutcome ElastiCacheClient::DeleteCacheSecurityGroup(const DeleteCacheSecurityGroupRequest& request) const {
  return DeleteCacheSecurityGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCacheSubnetGroupOutcome ElastiCacheClient::DeleteCacheSubnetGroup(const DeleteCacheSubnetGroupRequest& request) const {
  return DeleteCacheSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGlobalReplicationGroupOutcome ElastiCacheClient::DeleteGlobalReplicationGroup(
    const DeleteGlobalReplicationGroupRequest& request) const {
  return DeleteGlobalReplicationGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteReplicationGroupOutcome ElastiCacheClient::DeleteReplicationGroup(const DeleteReplicationGroupRequest& request) const {
  return DeleteReplicationGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteServerlessCacheOutcome ElastiCacheClient::DeleteServerlessCache(const DeleteServerlessCacheRequest& request) const {
  return DeleteServerlessCacheOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteServerlessCacheSnapshotOutcome ElastiCacheClient::DeleteServerlessCacheSnapshot(
    const DeleteServerlessCacheSnapshotRequest& request) const {
  return DeleteServerlessCacheSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSnapshotOutcome ElastiCacheClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const {
  return DeleteSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserOutcome ElastiCacheClient::DeleteUser(const DeleteUserRequest& request) const {
  return DeleteUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserGroupOutcome ElastiCacheClient::DeleteUserGroup(const DeleteUserGroupRequest& request) const {
  return DeleteUserGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCacheClustersOutcome ElastiCacheClient::DescribeCacheClusters(const DescribeCacheClustersRequest& request) const {
  return DescribeCacheClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCacheEngineVersionsOutcome ElastiCacheClient::DescribeCacheEngineVersions(const DescribeCacheEngineVersionsRequest& request) const {
  return DescribeCacheEngineVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCacheParameterGroupsOutcome ElastiCacheClient::DescribeCacheParameterGroups(
    const DescribeCacheParameterGroupsRequest& request) const {
  return DescribeCacheParameterGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCacheParametersOutcome ElastiCacheClient::DescribeCacheParameters(const DescribeCacheParametersRequest& request) const {
  return DescribeCacheParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCacheSecurityGroupsOutcome ElastiCacheClient::DescribeCacheSecurityGroups(const DescribeCacheSecurityGroupsRequest& request) const {
  return DescribeCacheSecurityGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCacheSubnetGroupsOutcome ElastiCacheClient::DescribeCacheSubnetGroups(const DescribeCacheSubnetGroupsRequest& request) const {
  return DescribeCacheSubnetGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEngineDefaultParametersOutcome ElastiCacheClient::DescribeEngineDefaultParameters(
    const DescribeEngineDefaultParametersRequest& request) const {
  return DescribeEngineDefaultParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventsOutcome ElastiCacheClient::DescribeEvents(const DescribeEventsRequest& request) const {
  return DescribeEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGlobalReplicationGroupsOutcome ElastiCacheClient::DescribeGlobalReplicationGroups(
    const DescribeGlobalReplicationGroupsRequest& request) const {
  return DescribeGlobalReplicationGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplicationGroupsOutcome ElastiCacheClient::DescribeReplicationGroups(const DescribeReplicationGroupsRequest& request) const {
  return DescribeReplicationGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReservedCacheNodesOutcome ElastiCacheClient::DescribeReservedCacheNodes(const DescribeReservedCacheNodesRequest& request) const {
  return DescribeReservedCacheNodesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReservedCacheNodesOfferingsOutcome ElastiCacheClient::DescribeReservedCacheNodesOfferings(
    const DescribeReservedCacheNodesOfferingsRequest& request) const {
  return DescribeReservedCacheNodesOfferingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeServerlessCacheSnapshotsOutcome ElastiCacheClient::DescribeServerlessCacheSnapshots(
    const DescribeServerlessCacheSnapshotsRequest& request) const {
  return DescribeServerlessCacheSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeServerlessCachesOutcome ElastiCacheClient::DescribeServerlessCaches(const DescribeServerlessCachesRequest& request) const {
  return DescribeServerlessCachesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeServiceUpdatesOutcome ElastiCacheClient::DescribeServiceUpdates(const DescribeServiceUpdatesRequest& request) const {
  return DescribeServiceUpdatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSnapshotsOutcome ElastiCacheClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const {
  return DescribeSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUpdateActionsOutcome ElastiCacheClient::DescribeUpdateActions(const DescribeUpdateActionsRequest& request) const {
  return DescribeUpdateActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUserGroupsOutcome ElastiCacheClient::DescribeUserGroups(const DescribeUserGroupsRequest& request) const {
  return DescribeUserGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUsersOutcome ElastiCacheClient::DescribeUsers(const DescribeUsersRequest& request) const {
  return DescribeUsersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateGlobalReplicationGroupOutcome ElastiCacheClient::DisassociateGlobalReplicationGroup(
    const DisassociateGlobalReplicationGroupRequest& request) const {
  return DisassociateGlobalReplicationGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportServerlessCacheSnapshotOutcome ElastiCacheClient::ExportServerlessCacheSnapshot(
    const ExportServerlessCacheSnapshotRequest& request) const {
  return ExportServerlessCacheSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

FailoverGlobalReplicationGroupOutcome ElastiCacheClient::FailoverGlobalReplicationGroup(
    const FailoverGlobalReplicationGroupRequest& request) const {
  return FailoverGlobalReplicationGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

IncreaseNodeGroupsInGlobalReplicationGroupOutcome ElastiCacheClient::IncreaseNodeGroupsInGlobalReplicationGroup(
    const IncreaseNodeGroupsInGlobalReplicationGroupRequest& request) const {
  return IncreaseNodeGroupsInGlobalReplicationGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

IncreaseReplicaCountOutcome ElastiCacheClient::IncreaseReplicaCount(const IncreaseReplicaCountRequest& request) const {
  return IncreaseReplicaCountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAllowedNodeTypeModificationsOutcome ElastiCacheClient::ListAllowedNodeTypeModifications(
    const ListAllowedNodeTypeModificationsRequest& request) const {
  return ListAllowedNodeTypeModificationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ElastiCacheClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyCacheClusterOutcome ElastiCacheClient::ModifyCacheCluster(const ModifyCacheClusterRequest& request) const {
  return ModifyCacheClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyCacheParameterGroupOutcome ElastiCacheClient::ModifyCacheParameterGroup(const ModifyCacheParameterGroupRequest& request) const {
  return ModifyCacheParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyCacheSubnetGroupOutcome ElastiCacheClient::ModifyCacheSubnetGroup(const ModifyCacheSubnetGroupRequest& request) const {
  return ModifyCacheSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyGlobalReplicationGroupOutcome ElastiCacheClient::ModifyGlobalReplicationGroup(
    const ModifyGlobalReplicationGroupRequest& request) const {
  return ModifyGlobalReplicationGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyReplicationGroupOutcome ElastiCacheClient::ModifyReplicationGroup(const ModifyReplicationGroupRequest& request) const {
  return ModifyReplicationGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyReplicationGroupShardConfigurationOutcome ElastiCacheClient::ModifyReplicationGroupShardConfiguration(
    const ModifyReplicationGroupShardConfigurationRequest& request) const {
  return ModifyReplicationGroupShardConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyServerlessCacheOutcome ElastiCacheClient::ModifyServerlessCache(const ModifyServerlessCacheRequest& request) const {
  return ModifyServerlessCacheOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyUserOutcome ElastiCacheClient::ModifyUser(const ModifyUserRequest& request) const {
  return ModifyUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyUserGroupOutcome ElastiCacheClient::ModifyUserGroup(const ModifyUserGroupRequest& request) const {
  return ModifyUserGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PurchaseReservedCacheNodesOfferingOutcome ElastiCacheClient::PurchaseReservedCacheNodesOffering(
    const PurchaseReservedCacheNodesOfferingRequest& request) const {
  return PurchaseReservedCacheNodesOfferingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RebalanceSlotsInGlobalReplicationGroupOutcome ElastiCacheClient::RebalanceSlotsInGlobalReplicationGroup(
    const RebalanceSlotsInGlobalReplicationGroupRequest& request) const {
  return RebalanceSlotsInGlobalReplicationGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RebootCacheClusterOutcome ElastiCacheClient::RebootCacheCluster(const RebootCacheClusterRequest& request) const {
  return RebootCacheClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsFromResourceOutcome ElastiCacheClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const {
  return RemoveTagsFromResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetCacheParameterGroupOutcome ElastiCacheClient::ResetCacheParameterGroup(const ResetCacheParameterGroupRequest& request) const {
  return ResetCacheParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RevokeCacheSecurityGroupIngressOutcome ElastiCacheClient::RevokeCacheSecurityGroupIngress(
    const RevokeCacheSecurityGroupIngressRequest& request) const {
  return RevokeCacheSecurityGroupIngressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMigrationOutcome ElastiCacheClient::StartMigration(const StartMigrationRequest& request) const {
  return StartMigrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestFailoverOutcome ElastiCacheClient::TestFailover(const TestFailoverRequest& request) const {
  return TestFailoverOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestMigrationOutcome ElastiCacheClient::TestMigration(const TestMigrationRequest& request) const {
  return TestMigrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
