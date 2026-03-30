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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddTagsToResourceOutcome(result.GetResultWithOwnership())
                            : AddTagsToResourceOutcome(std::move(result.GetError()));
}

AuthorizeCacheSecurityGroupIngressOutcome ElastiCacheClient::AuthorizeCacheSecurityGroupIngress(
    const AuthorizeCacheSecurityGroupIngressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AuthorizeCacheSecurityGroupIngressOutcome(result.GetResultWithOwnership())
                            : AuthorizeCacheSecurityGroupIngressOutcome(std::move(result.GetError()));
}

BatchApplyUpdateActionOutcome ElastiCacheClient::BatchApplyUpdateAction(const BatchApplyUpdateActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchApplyUpdateActionOutcome(result.GetResultWithOwnership())
                            : BatchApplyUpdateActionOutcome(std::move(result.GetError()));
}

BatchStopUpdateActionOutcome ElastiCacheClient::BatchStopUpdateAction(const BatchStopUpdateActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchStopUpdateActionOutcome(result.GetResultWithOwnership())
                            : BatchStopUpdateActionOutcome(std::move(result.GetError()));
}

CompleteMigrationOutcome ElastiCacheClient::CompleteMigration(const CompleteMigrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CompleteMigrationOutcome(result.GetResultWithOwnership())
                            : CompleteMigrationOutcome(std::move(result.GetError()));
}

CopyServerlessCacheSnapshotOutcome ElastiCacheClient::CopyServerlessCacheSnapshot(const CopyServerlessCacheSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyServerlessCacheSnapshotOutcome(result.GetResultWithOwnership())
                            : CopyServerlessCacheSnapshotOutcome(std::move(result.GetError()));
}

CopySnapshotOutcome ElastiCacheClient::CopySnapshot(const CopySnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopySnapshotOutcome(result.GetResultWithOwnership()) : CopySnapshotOutcome(std::move(result.GetError()));
}

CreateCacheClusterOutcome ElastiCacheClient::CreateCacheCluster(const CreateCacheClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCacheClusterOutcome(result.GetResultWithOwnership())
                            : CreateCacheClusterOutcome(std::move(result.GetError()));
}

CreateCacheParameterGroupOutcome ElastiCacheClient::CreateCacheParameterGroup(const CreateCacheParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCacheParameterGroupOutcome(result.GetResultWithOwnership())
                            : CreateCacheParameterGroupOutcome(std::move(result.GetError()));
}

CreateCacheSecurityGroupOutcome ElastiCacheClient::CreateCacheSecurityGroup(const CreateCacheSecurityGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCacheSecurityGroupOutcome(result.GetResultWithOwnership())
                            : CreateCacheSecurityGroupOutcome(std::move(result.GetError()));
}

CreateCacheSubnetGroupOutcome ElastiCacheClient::CreateCacheSubnetGroup(const CreateCacheSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCacheSubnetGroupOutcome(result.GetResultWithOwnership())
                            : CreateCacheSubnetGroupOutcome(std::move(result.GetError()));
}

CreateGlobalReplicationGroupOutcome ElastiCacheClient::CreateGlobalReplicationGroup(
    const CreateGlobalReplicationGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGlobalReplicationGroupOutcome(result.GetResultWithOwnership())
                            : CreateGlobalReplicationGroupOutcome(std::move(result.GetError()));
}

CreateReplicationGroupOutcome ElastiCacheClient::CreateReplicationGroup(const CreateReplicationGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateReplicationGroupOutcome(result.GetResultWithOwnership())
                            : CreateReplicationGroupOutcome(std::move(result.GetError()));
}

CreateServerlessCacheOutcome ElastiCacheClient::CreateServerlessCache(const CreateServerlessCacheRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateServerlessCacheOutcome(result.GetResultWithOwnership())
                            : CreateServerlessCacheOutcome(std::move(result.GetError()));
}

CreateServerlessCacheSnapshotOutcome ElastiCacheClient::CreateServerlessCacheSnapshot(
    const CreateServerlessCacheSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateServerlessCacheSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateServerlessCacheSnapshotOutcome(std::move(result.GetError()));
}

CreateSnapshotOutcome ElastiCacheClient::CreateSnapshot(const CreateSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSnapshotOutcome(result.GetResultWithOwnership()) : CreateSnapshotOutcome(std::move(result.GetError()));
}

CreateUserOutcome ElastiCacheClient::CreateUser(const CreateUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserOutcome(result.GetResultWithOwnership()) : CreateUserOutcome(std::move(result.GetError()));
}

CreateUserGroupOutcome ElastiCacheClient::CreateUserGroup(const CreateUserGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserGroupOutcome(result.GetResultWithOwnership())
                            : CreateUserGroupOutcome(std::move(result.GetError()));
}

DecreaseNodeGroupsInGlobalReplicationGroupOutcome ElastiCacheClient::DecreaseNodeGroupsInGlobalReplicationGroup(
    const DecreaseNodeGroupsInGlobalReplicationGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DecreaseNodeGroupsInGlobalReplicationGroupOutcome(result.GetResultWithOwnership())
                            : DecreaseNodeGroupsInGlobalReplicationGroupOutcome(std::move(result.GetError()));
}

DecreaseReplicaCountOutcome ElastiCacheClient::DecreaseReplicaCount(const DecreaseReplicaCountRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DecreaseReplicaCountOutcome(result.GetResultWithOwnership())
                            : DecreaseReplicaCountOutcome(std::move(result.GetError()));
}

DeleteCacheClusterOutcome ElastiCacheClient::DeleteCacheCluster(const DeleteCacheClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCacheClusterOutcome(result.GetResultWithOwnership())
                            : DeleteCacheClusterOutcome(std::move(result.GetError()));
}

DeleteCacheParameterGroupOutcome ElastiCacheClient::DeleteCacheParameterGroup(const DeleteCacheParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCacheParameterGroupOutcome(result.GetResultWithOwnership())
                            : DeleteCacheParameterGroupOutcome(std::move(result.GetError()));
}

DeleteCacheSecurityGroupOutcome ElastiCacheClient::DeleteCacheSecurityGroup(const DeleteCacheSecurityGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCacheSecurityGroupOutcome(result.GetResultWithOwnership())
                            : DeleteCacheSecurityGroupOutcome(std::move(result.GetError()));
}

DeleteCacheSubnetGroupOutcome ElastiCacheClient::DeleteCacheSubnetGroup(const DeleteCacheSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCacheSubnetGroupOutcome(result.GetResultWithOwnership())
                            : DeleteCacheSubnetGroupOutcome(std::move(result.GetError()));
}

DeleteGlobalReplicationGroupOutcome ElastiCacheClient::DeleteGlobalReplicationGroup(
    const DeleteGlobalReplicationGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteGlobalReplicationGroupOutcome(result.GetResultWithOwnership())
                            : DeleteGlobalReplicationGroupOutcome(std::move(result.GetError()));
}

DeleteReplicationGroupOutcome ElastiCacheClient::DeleteReplicationGroup(const DeleteReplicationGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteReplicationGroupOutcome(result.GetResultWithOwnership())
                            : DeleteReplicationGroupOutcome(std::move(result.GetError()));
}

DeleteServerlessCacheOutcome ElastiCacheClient::DeleteServerlessCache(const DeleteServerlessCacheRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteServerlessCacheOutcome(result.GetResultWithOwnership())
                            : DeleteServerlessCacheOutcome(std::move(result.GetError()));
}

DeleteServerlessCacheSnapshotOutcome ElastiCacheClient::DeleteServerlessCacheSnapshot(
    const DeleteServerlessCacheSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteServerlessCacheSnapshotOutcome(result.GetResultWithOwnership())
                            : DeleteServerlessCacheSnapshotOutcome(std::move(result.GetError()));
}

DeleteSnapshotOutcome ElastiCacheClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSnapshotOutcome(result.GetResultWithOwnership()) : DeleteSnapshotOutcome(std::move(result.GetError()));
}

DeleteUserOutcome ElastiCacheClient::DeleteUser(const DeleteUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserOutcome(result.GetResultWithOwnership()) : DeleteUserOutcome(std::move(result.GetError()));
}

DeleteUserGroupOutcome ElastiCacheClient::DeleteUserGroup(const DeleteUserGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserGroupOutcome(result.GetResultWithOwnership())
                            : DeleteUserGroupOutcome(std::move(result.GetError()));
}

DescribeCacheClustersOutcome ElastiCacheClient::DescribeCacheClusters(const DescribeCacheClustersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCacheClustersOutcome(result.GetResultWithOwnership())
                            : DescribeCacheClustersOutcome(std::move(result.GetError()));
}

DescribeCacheEngineVersionsOutcome ElastiCacheClient::DescribeCacheEngineVersions(const DescribeCacheEngineVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCacheEngineVersionsOutcome(result.GetResultWithOwnership())
                            : DescribeCacheEngineVersionsOutcome(std::move(result.GetError()));
}

DescribeCacheParameterGroupsOutcome ElastiCacheClient::DescribeCacheParameterGroups(
    const DescribeCacheParameterGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCacheParameterGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeCacheParameterGroupsOutcome(std::move(result.GetError()));
}

DescribeCacheParametersOutcome ElastiCacheClient::DescribeCacheParameters(const DescribeCacheParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCacheParametersOutcome(result.GetResultWithOwnership())
                            : DescribeCacheParametersOutcome(std::move(result.GetError()));
}

DescribeCacheSecurityGroupsOutcome ElastiCacheClient::DescribeCacheSecurityGroups(const DescribeCacheSecurityGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCacheSecurityGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeCacheSecurityGroupsOutcome(std::move(result.GetError()));
}

DescribeCacheSubnetGroupsOutcome ElastiCacheClient::DescribeCacheSubnetGroups(const DescribeCacheSubnetGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCacheSubnetGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeCacheSubnetGroupsOutcome(std::move(result.GetError()));
}

DescribeEngineDefaultParametersOutcome ElastiCacheClient::DescribeEngineDefaultParameters(
    const DescribeEngineDefaultParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEngineDefaultParametersOutcome(result.GetResultWithOwnership())
                            : DescribeEngineDefaultParametersOutcome(std::move(result.GetError()));
}

DescribeEventsOutcome ElastiCacheClient::DescribeEvents(const DescribeEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventsOutcome(result.GetResultWithOwnership()) : DescribeEventsOutcome(std::move(result.GetError()));
}

DescribeGlobalReplicationGroupsOutcome ElastiCacheClient::DescribeGlobalReplicationGroups(
    const DescribeGlobalReplicationGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeGlobalReplicationGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeGlobalReplicationGroupsOutcome(std::move(result.GetError()));
}

DescribeReplicationGroupsOutcome ElastiCacheClient::DescribeReplicationGroups(const DescribeReplicationGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplicationGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeReplicationGroupsOutcome(std::move(result.GetError()));
}

DescribeReservedCacheNodesOutcome ElastiCacheClient::DescribeReservedCacheNodes(const DescribeReservedCacheNodesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReservedCacheNodesOutcome(result.GetResultWithOwnership())
                            : DescribeReservedCacheNodesOutcome(std::move(result.GetError()));
}

DescribeReservedCacheNodesOfferingsOutcome ElastiCacheClient::DescribeReservedCacheNodesOfferings(
    const DescribeReservedCacheNodesOfferingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReservedCacheNodesOfferingsOutcome(result.GetResultWithOwnership())
                            : DescribeReservedCacheNodesOfferingsOutcome(std::move(result.GetError()));
}

DescribeServerlessCacheSnapshotsOutcome ElastiCacheClient::DescribeServerlessCacheSnapshots(
    const DescribeServerlessCacheSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeServerlessCacheSnapshotsOutcome(result.GetResultWithOwnership())
                            : DescribeServerlessCacheSnapshotsOutcome(std::move(result.GetError()));
}

DescribeServerlessCachesOutcome ElastiCacheClient::DescribeServerlessCaches(const DescribeServerlessCachesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeServerlessCachesOutcome(result.GetResultWithOwnership())
                            : DescribeServerlessCachesOutcome(std::move(result.GetError()));
}

DescribeServiceUpdatesOutcome ElastiCacheClient::DescribeServiceUpdates(const DescribeServiceUpdatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeServiceUpdatesOutcome(result.GetResultWithOwnership())
                            : DescribeServiceUpdatesOutcome(std::move(result.GetError()));
}

DescribeSnapshotsOutcome ElastiCacheClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSnapshotsOutcome(result.GetResultWithOwnership())
                            : DescribeSnapshotsOutcome(std::move(result.GetError()));
}

DescribeUpdateActionsOutcome ElastiCacheClient::DescribeUpdateActions(const DescribeUpdateActionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUpdateActionsOutcome(result.GetResultWithOwnership())
                            : DescribeUpdateActionsOutcome(std::move(result.GetError()));
}

DescribeUserGroupsOutcome ElastiCacheClient::DescribeUserGroups(const DescribeUserGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUserGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeUserGroupsOutcome(std::move(result.GetError()));
}

DescribeUsersOutcome ElastiCacheClient::DescribeUsers(const DescribeUsersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUsersOutcome(result.GetResultWithOwnership()) : DescribeUsersOutcome(std::move(result.GetError()));
}

DisassociateGlobalReplicationGroupOutcome ElastiCacheClient::DisassociateGlobalReplicationGroup(
    const DisassociateGlobalReplicationGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateGlobalReplicationGroupOutcome(result.GetResultWithOwnership())
                            : DisassociateGlobalReplicationGroupOutcome(std::move(result.GetError()));
}

ExportServerlessCacheSnapshotOutcome ElastiCacheClient::ExportServerlessCacheSnapshot(
    const ExportServerlessCacheSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExportServerlessCacheSnapshotOutcome(result.GetResultWithOwnership())
                            : ExportServerlessCacheSnapshotOutcome(std::move(result.GetError()));
}

FailoverGlobalReplicationGroupOutcome ElastiCacheClient::FailoverGlobalReplicationGroup(
    const FailoverGlobalReplicationGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FailoverGlobalReplicationGroupOutcome(result.GetResultWithOwnership())
                            : FailoverGlobalReplicationGroupOutcome(std::move(result.GetError()));
}

IncreaseNodeGroupsInGlobalReplicationGroupOutcome ElastiCacheClient::IncreaseNodeGroupsInGlobalReplicationGroup(
    const IncreaseNodeGroupsInGlobalReplicationGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? IncreaseNodeGroupsInGlobalReplicationGroupOutcome(result.GetResultWithOwnership())
                            : IncreaseNodeGroupsInGlobalReplicationGroupOutcome(std::move(result.GetError()));
}

IncreaseReplicaCountOutcome ElastiCacheClient::IncreaseReplicaCount(const IncreaseReplicaCountRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? IncreaseReplicaCountOutcome(result.GetResultWithOwnership())
                            : IncreaseReplicaCountOutcome(std::move(result.GetError()));
}

ListAllowedNodeTypeModificationsOutcome ElastiCacheClient::ListAllowedNodeTypeModifications(
    const ListAllowedNodeTypeModificationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAllowedNodeTypeModificationsOutcome(result.GetResultWithOwnership())
                            : ListAllowedNodeTypeModificationsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ElastiCacheClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ModifyCacheClusterOutcome ElastiCacheClient::ModifyCacheCluster(const ModifyCacheClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyCacheClusterOutcome(result.GetResultWithOwnership())
                            : ModifyCacheClusterOutcome(std::move(result.GetError()));
}

ModifyCacheParameterGroupOutcome ElastiCacheClient::ModifyCacheParameterGroup(const ModifyCacheParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyCacheParameterGroupOutcome(result.GetResultWithOwnership())
                            : ModifyCacheParameterGroupOutcome(std::move(result.GetError()));
}

ModifyCacheSubnetGroupOutcome ElastiCacheClient::ModifyCacheSubnetGroup(const ModifyCacheSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyCacheSubnetGroupOutcome(result.GetResultWithOwnership())
                            : ModifyCacheSubnetGroupOutcome(std::move(result.GetError()));
}

ModifyGlobalReplicationGroupOutcome ElastiCacheClient::ModifyGlobalReplicationGroup(
    const ModifyGlobalReplicationGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyGlobalReplicationGroupOutcome(result.GetResultWithOwnership())
                            : ModifyGlobalReplicationGroupOutcome(std::move(result.GetError()));
}

ModifyReplicationGroupOutcome ElastiCacheClient::ModifyReplicationGroup(const ModifyReplicationGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyReplicationGroupOutcome(result.GetResultWithOwnership())
                            : ModifyReplicationGroupOutcome(std::move(result.GetError()));
}

ModifyReplicationGroupShardConfigurationOutcome ElastiCacheClient::ModifyReplicationGroupShardConfiguration(
    const ModifyReplicationGroupShardConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyReplicationGroupShardConfigurationOutcome(result.GetResultWithOwnership())
                            : ModifyReplicationGroupShardConfigurationOutcome(std::move(result.GetError()));
}

ModifyServerlessCacheOutcome ElastiCacheClient::ModifyServerlessCache(const ModifyServerlessCacheRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyServerlessCacheOutcome(result.GetResultWithOwnership())
                            : ModifyServerlessCacheOutcome(std::move(result.GetError()));
}

ModifyUserOutcome ElastiCacheClient::ModifyUser(const ModifyUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyUserOutcome(result.GetResultWithOwnership()) : ModifyUserOutcome(std::move(result.GetError()));
}

ModifyUserGroupOutcome ElastiCacheClient::ModifyUserGroup(const ModifyUserGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyUserGroupOutcome(result.GetResultWithOwnership())
                            : ModifyUserGroupOutcome(std::move(result.GetError()));
}

PurchaseReservedCacheNodesOfferingOutcome ElastiCacheClient::PurchaseReservedCacheNodesOffering(
    const PurchaseReservedCacheNodesOfferingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PurchaseReservedCacheNodesOfferingOutcome(result.GetResultWithOwnership())
                            : PurchaseReservedCacheNodesOfferingOutcome(std::move(result.GetError()));
}

RebalanceSlotsInGlobalReplicationGroupOutcome ElastiCacheClient::RebalanceSlotsInGlobalReplicationGroup(
    const RebalanceSlotsInGlobalReplicationGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebalanceSlotsInGlobalReplicationGroupOutcome(result.GetResultWithOwnership())
                            : RebalanceSlotsInGlobalReplicationGroupOutcome(std::move(result.GetError()));
}

RebootCacheClusterOutcome ElastiCacheClient::RebootCacheCluster(const RebootCacheClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootCacheClusterOutcome(result.GetResultWithOwnership())
                            : RebootCacheClusterOutcome(std::move(result.GetError()));
}

RemoveTagsFromResourceOutcome ElastiCacheClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveTagsFromResourceOutcome(result.GetResultWithOwnership())
                            : RemoveTagsFromResourceOutcome(std::move(result.GetError()));
}

ResetCacheParameterGroupOutcome ElastiCacheClient::ResetCacheParameterGroup(const ResetCacheParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetCacheParameterGroupOutcome(result.GetResultWithOwnership())
                            : ResetCacheParameterGroupOutcome(std::move(result.GetError()));
}

RevokeCacheSecurityGroupIngressOutcome ElastiCacheClient::RevokeCacheSecurityGroupIngress(
    const RevokeCacheSecurityGroupIngressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RevokeCacheSecurityGroupIngressOutcome(result.GetResultWithOwnership())
                            : RevokeCacheSecurityGroupIngressOutcome(std::move(result.GetError()));
}

StartMigrationOutcome ElastiCacheClient::StartMigration(const StartMigrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMigrationOutcome(result.GetResultWithOwnership()) : StartMigrationOutcome(std::move(result.GetError()));
}

TestFailoverOutcome ElastiCacheClient::TestFailover(const TestFailoverRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestFailoverOutcome(result.GetResultWithOwnership()) : TestFailoverOutcome(std::move(result.GetError()));
}

TestMigrationOutcome ElastiCacheClient::TestMigration(const TestMigrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestMigrationOutcome(result.GetResultWithOwnership()) : TestMigrationOutcome(std::move(result.GetError()));
}
