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

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticache/model/AddTagsToResourceResult.h>
#include <aws/elasticache/model/AuthorizeCacheSecurityGroupIngressResult.h>
#include <aws/elasticache/model/BatchApplyUpdateActionResult.h>
#include <aws/elasticache/model/BatchStopUpdateActionResult.h>
#include <aws/elasticache/model/CopySnapshotResult.h>
#include <aws/elasticache/model/CreateCacheClusterResult.h>
#include <aws/elasticache/model/CreateCacheParameterGroupResult.h>
#include <aws/elasticache/model/CreateCacheSecurityGroupResult.h>
#include <aws/elasticache/model/CreateCacheSubnetGroupResult.h>
#include <aws/elasticache/model/CreateReplicationGroupResult.h>
#include <aws/elasticache/model/CreateSnapshotResult.h>
#include <aws/elasticache/model/DecreaseReplicaCountResult.h>
#include <aws/elasticache/model/DeleteCacheClusterResult.h>
#include <aws/elasticache/model/DeleteReplicationGroupResult.h>
#include <aws/elasticache/model/DeleteSnapshotResult.h>
#include <aws/elasticache/model/DescribeCacheClustersResult.h>
#include <aws/elasticache/model/DescribeCacheEngineVersionsResult.h>
#include <aws/elasticache/model/DescribeCacheParameterGroupsResult.h>
#include <aws/elasticache/model/DescribeCacheParametersResult.h>
#include <aws/elasticache/model/DescribeCacheSecurityGroupsResult.h>
#include <aws/elasticache/model/DescribeCacheSubnetGroupsResult.h>
#include <aws/elasticache/model/DescribeEngineDefaultParametersResult.h>
#include <aws/elasticache/model/DescribeEventsResult.h>
#include <aws/elasticache/model/DescribeReplicationGroupsResult.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesResult.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesOfferingsResult.h>
#include <aws/elasticache/model/DescribeServiceUpdatesResult.h>
#include <aws/elasticache/model/DescribeSnapshotsResult.h>
#include <aws/elasticache/model/DescribeUpdateActionsResult.h>
#include <aws/elasticache/model/IncreaseReplicaCountResult.h>
#include <aws/elasticache/model/ListAllowedNodeTypeModificationsResult.h>
#include <aws/elasticache/model/ListTagsForResourceResult.h>
#include <aws/elasticache/model/ModifyCacheClusterResult.h>
#include <aws/elasticache/model/ModifyCacheParameterGroupResult.h>
#include <aws/elasticache/model/ModifyCacheSubnetGroupResult.h>
#include <aws/elasticache/model/ModifyReplicationGroupResult.h>
#include <aws/elasticache/model/ModifyReplicationGroupShardConfigurationResult.h>
#include <aws/elasticache/model/PurchaseReservedCacheNodesOfferingResult.h>
#include <aws/elasticache/model/RebootCacheClusterResult.h>
#include <aws/elasticache/model/RemoveTagsFromResourceResult.h>
#include <aws/elasticache/model/ResetCacheParameterGroupResult.h>
#include <aws/elasticache/model/RevokeCacheSecurityGroupIngressResult.h>
#include <aws/elasticache/model/TestFailoverResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace ElastiCache
{

namespace Model
{
        class AddTagsToResourceRequest;
        class AuthorizeCacheSecurityGroupIngressRequest;
        class BatchApplyUpdateActionRequest;
        class BatchStopUpdateActionRequest;
        class CopySnapshotRequest;
        class CreateCacheClusterRequest;
        class CreateCacheParameterGroupRequest;
        class CreateCacheSecurityGroupRequest;
        class CreateCacheSubnetGroupRequest;
        class CreateReplicationGroupRequest;
        class CreateSnapshotRequest;
        class DecreaseReplicaCountRequest;
        class DeleteCacheClusterRequest;
        class DeleteCacheParameterGroupRequest;
        class DeleteCacheSecurityGroupRequest;
        class DeleteCacheSubnetGroupRequest;
        class DeleteReplicationGroupRequest;
        class DeleteSnapshotRequest;
        class DescribeCacheClustersRequest;
        class DescribeCacheEngineVersionsRequest;
        class DescribeCacheParameterGroupsRequest;
        class DescribeCacheParametersRequest;
        class DescribeCacheSecurityGroupsRequest;
        class DescribeCacheSubnetGroupsRequest;
        class DescribeEngineDefaultParametersRequest;
        class DescribeEventsRequest;
        class DescribeReplicationGroupsRequest;
        class DescribeReservedCacheNodesRequest;
        class DescribeReservedCacheNodesOfferingsRequest;
        class DescribeServiceUpdatesRequest;
        class DescribeSnapshotsRequest;
        class DescribeUpdateActionsRequest;
        class IncreaseReplicaCountRequest;
        class ListAllowedNodeTypeModificationsRequest;
        class ListTagsForResourceRequest;
        class ModifyCacheClusterRequest;
        class ModifyCacheParameterGroupRequest;
        class ModifyCacheSubnetGroupRequest;
        class ModifyReplicationGroupRequest;
        class ModifyReplicationGroupShardConfigurationRequest;
        class PurchaseReservedCacheNodesOfferingRequest;
        class RebootCacheClusterRequest;
        class RemoveTagsFromResourceRequest;
        class ResetCacheParameterGroupRequest;
        class RevokeCacheSecurityGroupIngressRequest;
        class TestFailoverRequest;

        typedef Aws::Utils::Outcome<AddTagsToResourceResult, Aws::Client::AWSError<ElastiCacheErrors>> AddTagsToResourceOutcome;
        typedef Aws::Utils::Outcome<AuthorizeCacheSecurityGroupIngressResult, Aws::Client::AWSError<ElastiCacheErrors>> AuthorizeCacheSecurityGroupIngressOutcome;
        typedef Aws::Utils::Outcome<BatchApplyUpdateActionResult, Aws::Client::AWSError<ElastiCacheErrors>> BatchApplyUpdateActionOutcome;
        typedef Aws::Utils::Outcome<BatchStopUpdateActionResult, Aws::Client::AWSError<ElastiCacheErrors>> BatchStopUpdateActionOutcome;
        typedef Aws::Utils::Outcome<CopySnapshotResult, Aws::Client::AWSError<ElastiCacheErrors>> CopySnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateCacheClusterResult, Aws::Client::AWSError<ElastiCacheErrors>> CreateCacheClusterOutcome;
        typedef Aws::Utils::Outcome<CreateCacheParameterGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> CreateCacheParameterGroupOutcome;
        typedef Aws::Utils::Outcome<CreateCacheSecurityGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> CreateCacheSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<CreateCacheSubnetGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> CreateCacheSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<CreateReplicationGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> CreateReplicationGroupOutcome;
        typedef Aws::Utils::Outcome<CreateSnapshotResult, Aws::Client::AWSError<ElastiCacheErrors>> CreateSnapshotOutcome;
        typedef Aws::Utils::Outcome<DecreaseReplicaCountResult, Aws::Client::AWSError<ElastiCacheErrors>> DecreaseReplicaCountOutcome;
        typedef Aws::Utils::Outcome<DeleteCacheClusterResult, Aws::Client::AWSError<ElastiCacheErrors>> DeleteCacheClusterOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ElastiCacheErrors>> DeleteCacheParameterGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ElastiCacheErrors>> DeleteCacheSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ElastiCacheErrors>> DeleteCacheSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteReplicationGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> DeleteReplicationGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteSnapshotResult, Aws::Client::AWSError<ElastiCacheErrors>> DeleteSnapshotOutcome;
        typedef Aws::Utils::Outcome<DescribeCacheClustersResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeCacheClustersOutcome;
        typedef Aws::Utils::Outcome<DescribeCacheEngineVersionsResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeCacheEngineVersionsOutcome;
        typedef Aws::Utils::Outcome<DescribeCacheParameterGroupsResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeCacheParameterGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeCacheParametersResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeCacheParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeCacheSecurityGroupsResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeCacheSecurityGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeCacheSubnetGroupsResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeCacheSubnetGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeEngineDefaultParametersResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeEngineDefaultParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeEventsResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeEventsOutcome;
        typedef Aws::Utils::Outcome<DescribeReplicationGroupsResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeReplicationGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeReservedCacheNodesResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeReservedCacheNodesOutcome;
        typedef Aws::Utils::Outcome<DescribeReservedCacheNodesOfferingsResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeReservedCacheNodesOfferingsOutcome;
        typedef Aws::Utils::Outcome<DescribeServiceUpdatesResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeServiceUpdatesOutcome;
        typedef Aws::Utils::Outcome<DescribeSnapshotsResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeSnapshotsOutcome;
        typedef Aws::Utils::Outcome<DescribeUpdateActionsResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeUpdateActionsOutcome;
        typedef Aws::Utils::Outcome<IncreaseReplicaCountResult, Aws::Client::AWSError<ElastiCacheErrors>> IncreaseReplicaCountOutcome;
        typedef Aws::Utils::Outcome<ListAllowedNodeTypeModificationsResult, Aws::Client::AWSError<ElastiCacheErrors>> ListAllowedNodeTypeModificationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<ElastiCacheErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ModifyCacheClusterResult, Aws::Client::AWSError<ElastiCacheErrors>> ModifyCacheClusterOutcome;
        typedef Aws::Utils::Outcome<ModifyCacheParameterGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> ModifyCacheParameterGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyCacheSubnetGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> ModifyCacheSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyReplicationGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> ModifyReplicationGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyReplicationGroupShardConfigurationResult, Aws::Client::AWSError<ElastiCacheErrors>> ModifyReplicationGroupShardConfigurationOutcome;
        typedef Aws::Utils::Outcome<PurchaseReservedCacheNodesOfferingResult, Aws::Client::AWSError<ElastiCacheErrors>> PurchaseReservedCacheNodesOfferingOutcome;
        typedef Aws::Utils::Outcome<RebootCacheClusterResult, Aws::Client::AWSError<ElastiCacheErrors>> RebootCacheClusterOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, Aws::Client::AWSError<ElastiCacheErrors>> RemoveTagsFromResourceOutcome;
        typedef Aws::Utils::Outcome<ResetCacheParameterGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> ResetCacheParameterGroupOutcome;
        typedef Aws::Utils::Outcome<RevokeCacheSecurityGroupIngressResult, Aws::Client::AWSError<ElastiCacheErrors>> RevokeCacheSecurityGroupIngressOutcome;
        typedef Aws::Utils::Outcome<TestFailoverResult, Aws::Client::AWSError<ElastiCacheErrors>> TestFailoverOutcome;

        typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
        typedef std::future<AuthorizeCacheSecurityGroupIngressOutcome> AuthorizeCacheSecurityGroupIngressOutcomeCallable;
        typedef std::future<BatchApplyUpdateActionOutcome> BatchApplyUpdateActionOutcomeCallable;
        typedef std::future<BatchStopUpdateActionOutcome> BatchStopUpdateActionOutcomeCallable;
        typedef std::future<CopySnapshotOutcome> CopySnapshotOutcomeCallable;
        typedef std::future<CreateCacheClusterOutcome> CreateCacheClusterOutcomeCallable;
        typedef std::future<CreateCacheParameterGroupOutcome> CreateCacheParameterGroupOutcomeCallable;
        typedef std::future<CreateCacheSecurityGroupOutcome> CreateCacheSecurityGroupOutcomeCallable;
        typedef std::future<CreateCacheSubnetGroupOutcome> CreateCacheSubnetGroupOutcomeCallable;
        typedef std::future<CreateReplicationGroupOutcome> CreateReplicationGroupOutcomeCallable;
        typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
        typedef std::future<DecreaseReplicaCountOutcome> DecreaseReplicaCountOutcomeCallable;
        typedef std::future<DeleteCacheClusterOutcome> DeleteCacheClusterOutcomeCallable;
        typedef std::future<DeleteCacheParameterGroupOutcome> DeleteCacheParameterGroupOutcomeCallable;
        typedef std::future<DeleteCacheSecurityGroupOutcome> DeleteCacheSecurityGroupOutcomeCallable;
        typedef std::future<DeleteCacheSubnetGroupOutcome> DeleteCacheSubnetGroupOutcomeCallable;
        typedef std::future<DeleteReplicationGroupOutcome> DeleteReplicationGroupOutcomeCallable;
        typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
        typedef std::future<DescribeCacheClustersOutcome> DescribeCacheClustersOutcomeCallable;
        typedef std::future<DescribeCacheEngineVersionsOutcome> DescribeCacheEngineVersionsOutcomeCallable;
        typedef std::future<DescribeCacheParameterGroupsOutcome> DescribeCacheParameterGroupsOutcomeCallable;
        typedef std::future<DescribeCacheParametersOutcome> DescribeCacheParametersOutcomeCallable;
        typedef std::future<DescribeCacheSecurityGroupsOutcome> DescribeCacheSecurityGroupsOutcomeCallable;
        typedef std::future<DescribeCacheSubnetGroupsOutcome> DescribeCacheSubnetGroupsOutcomeCallable;
        typedef std::future<DescribeEngineDefaultParametersOutcome> DescribeEngineDefaultParametersOutcomeCallable;
        typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
        typedef std::future<DescribeReplicationGroupsOutcome> DescribeReplicationGroupsOutcomeCallable;
        typedef std::future<DescribeReservedCacheNodesOutcome> DescribeReservedCacheNodesOutcomeCallable;
        typedef std::future<DescribeReservedCacheNodesOfferingsOutcome> DescribeReservedCacheNodesOfferingsOutcomeCallable;
        typedef std::future<DescribeServiceUpdatesOutcome> DescribeServiceUpdatesOutcomeCallable;
        typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
        typedef std::future<DescribeUpdateActionsOutcome> DescribeUpdateActionsOutcomeCallable;
        typedef std::future<IncreaseReplicaCountOutcome> IncreaseReplicaCountOutcomeCallable;
        typedef std::future<ListAllowedNodeTypeModificationsOutcome> ListAllowedNodeTypeModificationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ModifyCacheClusterOutcome> ModifyCacheClusterOutcomeCallable;
        typedef std::future<ModifyCacheParameterGroupOutcome> ModifyCacheParameterGroupOutcomeCallable;
        typedef std::future<ModifyCacheSubnetGroupOutcome> ModifyCacheSubnetGroupOutcomeCallable;
        typedef std::future<ModifyReplicationGroupOutcome> ModifyReplicationGroupOutcomeCallable;
        typedef std::future<ModifyReplicationGroupShardConfigurationOutcome> ModifyReplicationGroupShardConfigurationOutcomeCallable;
        typedef std::future<PurchaseReservedCacheNodesOfferingOutcome> PurchaseReservedCacheNodesOfferingOutcomeCallable;
        typedef std::future<RebootCacheClusterOutcome> RebootCacheClusterOutcomeCallable;
        typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
        typedef std::future<ResetCacheParameterGroupOutcome> ResetCacheParameterGroupOutcomeCallable;
        typedef std::future<RevokeCacheSecurityGroupIngressOutcome> RevokeCacheSecurityGroupIngressOutcomeCallable;
        typedef std::future<TestFailoverOutcome> TestFailoverOutcomeCallable;
} // namespace Model

  class ElastiCacheClient;

    typedef std::function<void(const ElastiCacheClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::AuthorizeCacheSecurityGroupIngressRequest&, const Model::AuthorizeCacheSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeCacheSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::BatchApplyUpdateActionRequest&, const Model::BatchApplyUpdateActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchApplyUpdateActionResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::BatchStopUpdateActionRequest&, const Model::BatchStopUpdateActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchStopUpdateActionResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CopySnapshotRequest&, const Model::CopySnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopySnapshotResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateCacheClusterRequest&, const Model::CreateCacheClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCacheClusterResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateCacheParameterGroupRequest&, const Model::CreateCacheParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCacheParameterGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateCacheSecurityGroupRequest&, const Model::CreateCacheSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCacheSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateCacheSubnetGroupRequest&, const Model::CreateCacheSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCacheSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateReplicationGroupRequest&, const Model::CreateReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DecreaseReplicaCountRequest&, const Model::DecreaseReplicaCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DecreaseReplicaCountResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteCacheClusterRequest&, const Model::DeleteCacheClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCacheClusterResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteCacheParameterGroupRequest&, const Model::DeleteCacheParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCacheParameterGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteCacheSecurityGroupRequest&, const Model::DeleteCacheSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCacheSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteCacheSubnetGroupRequest&, const Model::DeleteCacheSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCacheSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteReplicationGroupRequest&, const Model::DeleteReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DeleteSnapshotRequest&, const Model::DeleteSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeCacheClustersRequest&, const Model::DescribeCacheClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCacheClustersResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeCacheEngineVersionsRequest&, const Model::DescribeCacheEngineVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCacheEngineVersionsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeCacheParameterGroupsRequest&, const Model::DescribeCacheParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCacheParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeCacheParametersRequest&, const Model::DescribeCacheParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCacheParametersResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeCacheSecurityGroupsRequest&, const Model::DescribeCacheSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCacheSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeCacheSubnetGroupsRequest&, const Model::DescribeCacheSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCacheSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeEngineDefaultParametersRequest&, const Model::DescribeEngineDefaultParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngineDefaultParametersResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeReplicationGroupsRequest&, const Model::DescribeReplicationGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationGroupsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeReservedCacheNodesRequest&, const Model::DescribeReservedCacheNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedCacheNodesResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeReservedCacheNodesOfferingsRequest&, const Model::DescribeReservedCacheNodesOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedCacheNodesOfferingsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeServiceUpdatesRequest&, const Model::DescribeServiceUpdatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceUpdatesResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeSnapshotsRequest&, const Model::DescribeSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeUpdateActionsRequest&, const Model::DescribeUpdateActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUpdateActionsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::IncreaseReplicaCountRequest&, const Model::IncreaseReplicaCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IncreaseReplicaCountResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ListAllowedNodeTypeModificationsRequest&, const Model::ListAllowedNodeTypeModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAllowedNodeTypeModificationsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyCacheClusterRequest&, const Model::ModifyCacheClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCacheClusterResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyCacheParameterGroupRequest&, const Model::ModifyCacheParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCacheParameterGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyCacheSubnetGroupRequest&, const Model::ModifyCacheSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCacheSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyReplicationGroupRequest&, const Model::ModifyReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyReplicationGroupShardConfigurationRequest&, const Model::ModifyReplicationGroupShardConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReplicationGroupShardConfigurationResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::PurchaseReservedCacheNodesOfferingRequest&, const Model::PurchaseReservedCacheNodesOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseReservedCacheNodesOfferingResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::RebootCacheClusterRequest&, const Model::RebootCacheClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootCacheClusterResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ResetCacheParameterGroupRequest&, const Model::ResetCacheParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetCacheParameterGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::RevokeCacheSecurityGroupIngressRequest&, const Model::RevokeCacheSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeCacheSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::TestFailoverRequest&, const Model::TestFailoverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestFailoverResponseReceivedHandler;

  /**
   * <fullname>Amazon ElastiCache</fullname> <p>Amazon ElastiCache is a web service
   * that makes it easier to set up, operate, and scale a distributed cache in the
   * cloud.</p> <p>With ElastiCache, customers get all of the benefits of a
   * high-performance, in-memory cache with less of the administrative burden
   * involved in launching and managing a distributed cache. The service makes setup,
   * scaling, and cluster failure handling much simpler than in a self-managed cache
   * deployment.</p> <p>In addition, through integration with Amazon CloudWatch,
   * customers get enhanced visibility into the key performance statistics associated
   * with their cache and can receive alarms if a part of their cache runs hot.</p>
   */
  class AWS_ELASTICACHE_API ElastiCacheClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElastiCacheClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElastiCacheClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElastiCacheClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ElastiCacheClient();

        inline virtual const char* GetServiceClientName() const override { return "ElastiCache"; }


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Adds up to 50 cost allocation tags to the named resource. A cost allocation
         * tag is a key-value pair where the key and value are case-sensitive. You can use
         * cost allocation tags to categorize and track your AWS costs.</p> <p> When you
         * apply tags to your ElastiCache resources, AWS generates a cost allocation report
         * as a comma-separated value (CSV) file with your usage and costs aggregated by
         * your tags. You can apply tags that represent business categories (such as cost
         * centers, application names, or owners) to organize your costs across multiple
         * services. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Tagging.html">Using
         * Cost Allocation Tags in Amazon ElastiCache</a> in the <i>ElastiCache User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds up to 50 cost allocation tags to the named resource. A cost allocation
         * tag is a key-value pair where the key and value are case-sensitive. You can use
         * cost allocation tags to categorize and track your AWS costs.</p> <p> When you
         * apply tags to your ElastiCache resources, AWS generates a cost allocation report
         * as a comma-separated value (CSV) file with your usage and costs aggregated by
         * your tags. You can apply tags that represent business categories (such as cost
         * centers, application names, or owners) to organize your costs across multiple
         * services. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Tagging.html">Using
         * Cost Allocation Tags in Amazon ElastiCache</a> in the <i>ElastiCache User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds up to 50 cost allocation tags to the named resource. A cost allocation
         * tag is a key-value pair where the key and value are case-sensitive. You can use
         * cost allocation tags to categorize and track your AWS costs.</p> <p> When you
         * apply tags to your ElastiCache resources, AWS generates a cost allocation report
         * as a comma-separated value (CSV) file with your usage and costs aggregated by
         * your tags. You can apply tags that represent business categories (such as cost
         * centers, application names, or owners) to organize your costs across multiple
         * services. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Tagging.html">Using
         * Cost Allocation Tags in Amazon ElastiCache</a> in the <i>ElastiCache User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows network ingress to a cache security group. Applications using
         * ElastiCache must be running on Amazon EC2, and Amazon EC2 security groups are
         * used as the authorization mechanism.</p> <note> <p>You cannot authorize ingress
         * from an Amazon EC2 security group in one region to an ElastiCache cluster in
         * another region.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/AuthorizeCacheSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeCacheSecurityGroupIngressOutcome AuthorizeCacheSecurityGroupIngress(const Model::AuthorizeCacheSecurityGroupIngressRequest& request) const;

        /**
         * <p>Allows network ingress to a cache security group. Applications using
         * ElastiCache must be running on Amazon EC2, and Amazon EC2 security groups are
         * used as the authorization mechanism.</p> <note> <p>You cannot authorize ingress
         * from an Amazon EC2 security group in one region to an ElastiCache cluster in
         * another region.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/AuthorizeCacheSecurityGroupIngress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeCacheSecurityGroupIngressOutcomeCallable AuthorizeCacheSecurityGroupIngressCallable(const Model::AuthorizeCacheSecurityGroupIngressRequest& request) const;

        /**
         * <p>Allows network ingress to a cache security group. Applications using
         * ElastiCache must be running on Amazon EC2, and Amazon EC2 security groups are
         * used as the authorization mechanism.</p> <note> <p>You cannot authorize ingress
         * from an Amazon EC2 security group in one region to an ElastiCache cluster in
         * another region.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/AuthorizeCacheSecurityGroupIngress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeCacheSecurityGroupIngressAsync(const Model::AuthorizeCacheSecurityGroupIngressRequest& request, const AuthorizeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Apply the service update. For more information on service updates and
         * applying them, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/applying-updates.html">Applying
         * Service Updates</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/BatchApplyUpdateAction">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchApplyUpdateActionOutcome BatchApplyUpdateAction(const Model::BatchApplyUpdateActionRequest& request) const;

        /**
         * <p>Apply the service update. For more information on service updates and
         * applying them, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/applying-updates.html">Applying
         * Service Updates</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/BatchApplyUpdateAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchApplyUpdateActionOutcomeCallable BatchApplyUpdateActionCallable(const Model::BatchApplyUpdateActionRequest& request) const;

        /**
         * <p>Apply the service update. For more information on service updates and
         * applying them, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/applying-updates.html">Applying
         * Service Updates</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/BatchApplyUpdateAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchApplyUpdateActionAsync(const Model::BatchApplyUpdateActionRequest& request, const BatchApplyUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stop the service update. For more information on service updates and stopping
         * them, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/stopping-self-service-updates.html">Stopping
         * Service Updates</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/BatchStopUpdateAction">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStopUpdateActionOutcome BatchStopUpdateAction(const Model::BatchStopUpdateActionRequest& request) const;

        /**
         * <p>Stop the service update. For more information on service updates and stopping
         * them, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/stopping-self-service-updates.html">Stopping
         * Service Updates</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/BatchStopUpdateAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchStopUpdateActionOutcomeCallable BatchStopUpdateActionCallable(const Model::BatchStopUpdateActionRequest& request) const;

        /**
         * <p>Stop the service update. For more information on service updates and stopping
         * them, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/stopping-self-service-updates.html">Stopping
         * Service Updates</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/BatchStopUpdateAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchStopUpdateActionAsync(const Model::BatchStopUpdateActionRequest& request, const BatchStopUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Makes a copy of an existing snapshot.</p> <note> <p>This operation is valid
         * for Redis only.</p> </note> <important> <p>Users or groups that have permissions
         * to use the <code>CopySnapshot</code> operation can create their own Amazon S3
         * buckets and copy snapshots to it. To control access to your snapshots, use an
         * IAM policy to control who has the ability to use the <code>CopySnapshot</code>
         * operation. For more information about using IAM to control the use of
         * ElastiCache operations, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html">Exporting
         * Snapshots</a> and <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/IAM.html">Authentication
         * &amp; Access Control</a>.</p> </important> <p>You could receive the following
         * error messages.</p> <p class="title"> <b>Error Messages</b> </p> <ul> <li> <p>
         * <b>Error Message:</b> The S3 bucket %s is outside of the region.</p> <p>
         * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The S3 bucket %s does not exist.</p> <p>
         * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The S3 bucket %s is not owned by the authenticated
         * user.</p> <p> <b>Solution:</b> Create an Amazon S3 bucket in the same region as
         * your snapshot. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The authenticated user does not have sufficient
         * permissions to perform the desired activity.</p> <p> <b>Solution:</b> Contact
         * your system administrator to get the needed permissions.</p> </li> <li> <p>
         * <b>Error Message:</b> The S3 bucket %s already contains an object with key
         * %s.</p> <p> <b>Solution:</b> Give the <code>TargetSnapshotName</code> a new and
         * unique value. If exporting a snapshot, you could alternatively create a new
         * Amazon S3 bucket and use this same value for
         * <code>TargetSnapshotName</code>.</p> </li> <li> <p> <b>Error Message: </b>
         * ElastiCache has not been granted READ permissions %s on the S3 Bucket.</p> <p>
         * <b>Solution:</b> Add List and Read permissions on the bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access.html">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> <li> <p> <b>Error Message: </b> ElastiCache has not been
         * granted WRITE permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add
         * Upload/Delete permissions on the bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access.html">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> <li> <p> <b>Error Message: </b> ElastiCache has not been
         * granted READ_ACP permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add
         * View Permissions on the bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access.html">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CopySnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopySnapshotOutcome CopySnapshot(const Model::CopySnapshotRequest& request) const;

        /**
         * <p>Makes a copy of an existing snapshot.</p> <note> <p>This operation is valid
         * for Redis only.</p> </note> <important> <p>Users or groups that have permissions
         * to use the <code>CopySnapshot</code> operation can create their own Amazon S3
         * buckets and copy snapshots to it. To control access to your snapshots, use an
         * IAM policy to control who has the ability to use the <code>CopySnapshot</code>
         * operation. For more information about using IAM to control the use of
         * ElastiCache operations, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html">Exporting
         * Snapshots</a> and <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/IAM.html">Authentication
         * &amp; Access Control</a>.</p> </important> <p>You could receive the following
         * error messages.</p> <p class="title"> <b>Error Messages</b> </p> <ul> <li> <p>
         * <b>Error Message:</b> The S3 bucket %s is outside of the region.</p> <p>
         * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The S3 bucket %s does not exist.</p> <p>
         * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The S3 bucket %s is not owned by the authenticated
         * user.</p> <p> <b>Solution:</b> Create an Amazon S3 bucket in the same region as
         * your snapshot. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The authenticated user does not have sufficient
         * permissions to perform the desired activity.</p> <p> <b>Solution:</b> Contact
         * your system administrator to get the needed permissions.</p> </li> <li> <p>
         * <b>Error Message:</b> The S3 bucket %s already contains an object with key
         * %s.</p> <p> <b>Solution:</b> Give the <code>TargetSnapshotName</code> a new and
         * unique value. If exporting a snapshot, you could alternatively create a new
         * Amazon S3 bucket and use this same value for
         * <code>TargetSnapshotName</code>.</p> </li> <li> <p> <b>Error Message: </b>
         * ElastiCache has not been granted READ permissions %s on the S3 Bucket.</p> <p>
         * <b>Solution:</b> Add List and Read permissions on the bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access.html">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> <li> <p> <b>Error Message: </b> ElastiCache has not been
         * granted WRITE permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add
         * Upload/Delete permissions on the bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access.html">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> <li> <p> <b>Error Message: </b> ElastiCache has not been
         * granted READ_ACP permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add
         * View Permissions on the bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access.html">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CopySnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopySnapshotOutcomeCallable CopySnapshotCallable(const Model::CopySnapshotRequest& request) const;

        /**
         * <p>Makes a copy of an existing snapshot.</p> <note> <p>This operation is valid
         * for Redis only.</p> </note> <important> <p>Users or groups that have permissions
         * to use the <code>CopySnapshot</code> operation can create their own Amazon S3
         * buckets and copy snapshots to it. To control access to your snapshots, use an
         * IAM policy to control who has the ability to use the <code>CopySnapshot</code>
         * operation. For more information about using IAM to control the use of
         * ElastiCache operations, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html">Exporting
         * Snapshots</a> and <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/IAM.html">Authentication
         * &amp; Access Control</a>.</p> </important> <p>You could receive the following
         * error messages.</p> <p class="title"> <b>Error Messages</b> </p> <ul> <li> <p>
         * <b>Error Message:</b> The S3 bucket %s is outside of the region.</p> <p>
         * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The S3 bucket %s does not exist.</p> <p>
         * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The S3 bucket %s is not owned by the authenticated
         * user.</p> <p> <b>Solution:</b> Create an Amazon S3 bucket in the same region as
         * your snapshot. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The authenticated user does not have sufficient
         * permissions to perform the desired activity.</p> <p> <b>Solution:</b> Contact
         * your system administrator to get the needed permissions.</p> </li> <li> <p>
         * <b>Error Message:</b> The S3 bucket %s already contains an object with key
         * %s.</p> <p> <b>Solution:</b> Give the <code>TargetSnapshotName</code> a new and
         * unique value. If exporting a snapshot, you could alternatively create a new
         * Amazon S3 bucket and use this same value for
         * <code>TargetSnapshotName</code>.</p> </li> <li> <p> <b>Error Message: </b>
         * ElastiCache has not been granted READ permissions %s on the S3 Bucket.</p> <p>
         * <b>Solution:</b> Add List and Read permissions on the bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access.html">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> <li> <p> <b>Error Message: </b> ElastiCache has not been
         * granted WRITE permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add
         * Upload/Delete permissions on the bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access.html">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> <li> <p> <b>Error Message: </b> ElastiCache has not been
         * granted READ_ACP permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add
         * View Permissions on the bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access.html">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CopySnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopySnapshotAsync(const Model::CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a cluster. All nodes in the cluster run the same protocol-compliant
         * cache engine software, either Memcached or Redis.</p> <p>This operation is not
         * supported for Redis (cluster mode enabled) clusters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCacheClusterOutcome CreateCacheCluster(const Model::CreateCacheClusterRequest& request) const;

        /**
         * <p>Creates a cluster. All nodes in the cluster run the same protocol-compliant
         * cache engine software, either Memcached or Redis.</p> <p>This operation is not
         * supported for Redis (cluster mode enabled) clusters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCacheClusterOutcomeCallable CreateCacheClusterCallable(const Model::CreateCacheClusterRequest& request) const;

        /**
         * <p>Creates a cluster. All nodes in the cluster run the same protocol-compliant
         * cache engine software, either Memcached or Redis.</p> <p>This operation is not
         * supported for Redis (cluster mode enabled) clusters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCacheClusterAsync(const Model::CreateCacheClusterRequest& request, const CreateCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon ElastiCache cache parameter group. An ElastiCache cache
         * parameter group is a collection of parameters and their values that are applied
         * to all of the nodes in any cluster or replication group using the
         * CacheParameterGroup.</p> <p>A newly created CacheParameterGroup is an exact
         * duplicate of the default parameter group for the CacheParameterGroupFamily. To
         * customize the newly created CacheParameterGroup you can change the values of
         * specific parameters. For more information, see:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_ModifyCacheParameterGroup.html">ModifyCacheParameterGroup</a>
         * in the ElastiCache API Reference.</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/ParameterGroups.html">Parameters
         * and Parameter Groups</a> in the ElastiCache User Guide.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCacheParameterGroupOutcome CreateCacheParameterGroup(const Model::CreateCacheParameterGroupRequest& request) const;

        /**
         * <p>Creates a new Amazon ElastiCache cache parameter group. An ElastiCache cache
         * parameter group is a collection of parameters and their values that are applied
         * to all of the nodes in any cluster or replication group using the
         * CacheParameterGroup.</p> <p>A newly created CacheParameterGroup is an exact
         * duplicate of the default parameter group for the CacheParameterGroupFamily. To
         * customize the newly created CacheParameterGroup you can change the values of
         * specific parameters. For more information, see:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_ModifyCacheParameterGroup.html">ModifyCacheParameterGroup</a>
         * in the ElastiCache API Reference.</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/ParameterGroups.html">Parameters
         * and Parameter Groups</a> in the ElastiCache User Guide.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCacheParameterGroupOutcomeCallable CreateCacheParameterGroupCallable(const Model::CreateCacheParameterGroupRequest& request) const;

        /**
         * <p>Creates a new Amazon ElastiCache cache parameter group. An ElastiCache cache
         * parameter group is a collection of parameters and their values that are applied
         * to all of the nodes in any cluster or replication group using the
         * CacheParameterGroup.</p> <p>A newly created CacheParameterGroup is an exact
         * duplicate of the default parameter group for the CacheParameterGroupFamily. To
         * customize the newly created CacheParameterGroup you can change the values of
         * specific parameters. For more information, see:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_ModifyCacheParameterGroup.html">ModifyCacheParameterGroup</a>
         * in the ElastiCache API Reference.</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/ParameterGroups.html">Parameters
         * and Parameter Groups</a> in the ElastiCache User Guide.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCacheParameterGroupAsync(const Model::CreateCacheParameterGroupRequest& request, const CreateCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new cache security group. Use a cache security group to control
         * access to one or more clusters.</p> <p>Cache security groups are only used when
         * you are creating a cluster outside of an Amazon Virtual Private Cloud (Amazon
         * VPC). If you are creating a cluster inside of a VPC, use a cache subnet group
         * instead. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_CreateCacheSubnetGroup.html">CreateCacheSubnetGroup</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCacheSecurityGroupOutcome CreateCacheSecurityGroup(const Model::CreateCacheSecurityGroupRequest& request) const;

        /**
         * <p>Creates a new cache security group. Use a cache security group to control
         * access to one or more clusters.</p> <p>Cache security groups are only used when
         * you are creating a cluster outside of an Amazon Virtual Private Cloud (Amazon
         * VPC). If you are creating a cluster inside of a VPC, use a cache subnet group
         * instead. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_CreateCacheSubnetGroup.html">CreateCacheSubnetGroup</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheSecurityGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCacheSecurityGroupOutcomeCallable CreateCacheSecurityGroupCallable(const Model::CreateCacheSecurityGroupRequest& request) const;

        /**
         * <p>Creates a new cache security group. Use a cache security group to control
         * access to one or more clusters.</p> <p>Cache security groups are only used when
         * you are creating a cluster outside of an Amazon Virtual Private Cloud (Amazon
         * VPC). If you are creating a cluster inside of a VPC, use a cache subnet group
         * instead. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_CreateCacheSubnetGroup.html">CreateCacheSubnetGroup</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheSecurityGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCacheSecurityGroupAsync(const Model::CreateCacheSecurityGroupRequest& request, const CreateCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new cache subnet group.</p> <p>Use this parameter only when you are
         * creating a cluster in an Amazon Virtual Private Cloud (Amazon
         * VPC).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCacheSubnetGroupOutcome CreateCacheSubnetGroup(const Model::CreateCacheSubnetGroupRequest& request) const;

        /**
         * <p>Creates a new cache subnet group.</p> <p>Use this parameter only when you are
         * creating a cluster in an Amazon Virtual Private Cloud (Amazon
         * VPC).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheSubnetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCacheSubnetGroupOutcomeCallable CreateCacheSubnetGroupCallable(const Model::CreateCacheSubnetGroupRequest& request) const;

        /**
         * <p>Creates a new cache subnet group.</p> <p>Use this parameter only when you are
         * creating a cluster in an Amazon Virtual Private Cloud (Amazon
         * VPC).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheSubnetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCacheSubnetGroupAsync(const Model::CreateCacheSubnetGroupRequest& request, const CreateCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Redis (cluster mode disabled) or a Redis (cluster mode enabled)
         * replication group.</p> <p>A Redis (cluster mode disabled) replication group is a
         * collection of clusters, where one of the clusters is a read/write primary and
         * the others are read-only replicas. Writes to the primary are asynchronously
         * propagated to the replicas.</p> <p>A Redis (cluster mode enabled) replication
         * group is a collection of 1 to 15 node groups (shards). Each node group (shard)
         * has one read/write primary node and up to 5 read-only replica nodes. Writes to
         * the primary are asynchronously propagated to the replicas. Redis (cluster mode
         * enabled) replication groups partition the data across node groups (shards).</p>
         * <p>When a Redis (cluster mode disabled) replication group has been successfully
         * created, you can add one or more read replicas to it, up to a total of 5 read
         * replicas. You cannot alter a Redis (cluster mode enabled) replication group
         * after it has been created. However, if you need to increase or decrease the
         * number of node groups (console: shards), you can avail yourself of ElastiCache
         * for Redis' enhanced backup and restore. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-restoring.html">Restoring
         * From a Backup with Cluster Resizing</a> in the <i>ElastiCache User
         * Guide</i>.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationGroupOutcome CreateReplicationGroup(const Model::CreateReplicationGroupRequest& request) const;

        /**
         * <p>Creates a Redis (cluster mode disabled) or a Redis (cluster mode enabled)
         * replication group.</p> <p>A Redis (cluster mode disabled) replication group is a
         * collection of clusters, where one of the clusters is a read/write primary and
         * the others are read-only replicas. Writes to the primary are asynchronously
         * propagated to the replicas.</p> <p>A Redis (cluster mode enabled) replication
         * group is a collection of 1 to 15 node groups (shards). Each node group (shard)
         * has one read/write primary node and up to 5 read-only replica nodes. Writes to
         * the primary are asynchronously propagated to the replicas. Redis (cluster mode
         * enabled) replication groups partition the data across node groups (shards).</p>
         * <p>When a Redis (cluster mode disabled) replication group has been successfully
         * created, you can add one or more read replicas to it, up to a total of 5 read
         * replicas. You cannot alter a Redis (cluster mode enabled) replication group
         * after it has been created. However, if you need to increase or decrease the
         * number of node groups (console: shards), you can avail yourself of ElastiCache
         * for Redis' enhanced backup and restore. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-restoring.html">Restoring
         * From a Backup with Cluster Resizing</a> in the <i>ElastiCache User
         * Guide</i>.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateReplicationGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationGroupOutcomeCallable CreateReplicationGroupCallable(const Model::CreateReplicationGroupRequest& request) const;

        /**
         * <p>Creates a Redis (cluster mode disabled) or a Redis (cluster mode enabled)
         * replication group.</p> <p>A Redis (cluster mode disabled) replication group is a
         * collection of clusters, where one of the clusters is a read/write primary and
         * the others are read-only replicas. Writes to the primary are asynchronously
         * propagated to the replicas.</p> <p>A Redis (cluster mode enabled) replication
         * group is a collection of 1 to 15 node groups (shards). Each node group (shard)
         * has one read/write primary node and up to 5 read-only replica nodes. Writes to
         * the primary are asynchronously propagated to the replicas. Redis (cluster mode
         * enabled) replication groups partition the data across node groups (shards).</p>
         * <p>When a Redis (cluster mode disabled) replication group has been successfully
         * created, you can add one or more read replicas to it, up to a total of 5 read
         * replicas. You cannot alter a Redis (cluster mode enabled) replication group
         * after it has been created. However, if you need to increase or decrease the
         * number of node groups (console: shards), you can avail yourself of ElastiCache
         * for Redis' enhanced backup and restore. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-restoring.html">Restoring
         * From a Backup with Cluster Resizing</a> in the <i>ElastiCache User
         * Guide</i>.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateReplicationGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationGroupAsync(const Model::CreateReplicationGroupRequest& request, const CreateReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a copy of an entire cluster or replication group at a specific moment
         * in time.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * <p>Creates a copy of an entire cluster or replication group at a specific moment
         * in time.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request) const;

        /**
         * <p>Creates a copy of an entire cluster or replication group at a specific moment
         * in time.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Dynamically decreases the number of replics in a Redis (cluster mode
         * disabled) replication group or the number of replica nodes in one or more node
         * groups (shards) of a Redis (cluster mode enabled) replication group. This
         * operation is performed with no cluster down time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DecreaseReplicaCount">AWS
         * API Reference</a></p>
         */
        virtual Model::DecreaseReplicaCountOutcome DecreaseReplicaCount(const Model::DecreaseReplicaCountRequest& request) const;

        /**
         * <p>Dynamically decreases the number of replics in a Redis (cluster mode
         * disabled) replication group or the number of replica nodes in one or more node
         * groups (shards) of a Redis (cluster mode enabled) replication group. This
         * operation is performed with no cluster down time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DecreaseReplicaCount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DecreaseReplicaCountOutcomeCallable DecreaseReplicaCountCallable(const Model::DecreaseReplicaCountRequest& request) const;

        /**
         * <p>Dynamically decreases the number of replics in a Redis (cluster mode
         * disabled) replication group or the number of replica nodes in one or more node
         * groups (shards) of a Redis (cluster mode enabled) replication group. This
         * operation is performed with no cluster down time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DecreaseReplicaCount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DecreaseReplicaCountAsync(const Model::DecreaseReplicaCountRequest& request, const DecreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a previously provisioned cluster. <code>DeleteCacheCluster</code>
         * deletes all associated cache nodes, node endpoints and the cluster itself. When
         * you receive a successful response from this operation, Amazon ElastiCache
         * immediately begins deleting the cluster; you cannot cancel or revert this
         * operation.</p> <p>This operation is not valid for:</p> <ul> <li> <p>Redis
         * (cluster mode enabled) clusters</p> </li> <li> <p>A cluster that is the last
         * read replica of a replication group</p> </li> <li> <p>A node group (shard) that
         * has Multi-AZ mode enabled</p> </li> <li> <p>A cluster from a Redis (cluster mode
         * enabled) replication group</p> </li> <li> <p>A cluster that is not in the
         * <code>available</code> state</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCacheClusterOutcome DeleteCacheCluster(const Model::DeleteCacheClusterRequest& request) const;

        /**
         * <p>Deletes a previously provisioned cluster. <code>DeleteCacheCluster</code>
         * deletes all associated cache nodes, node endpoints and the cluster itself. When
         * you receive a successful response from this operation, Amazon ElastiCache
         * immediately begins deleting the cluster; you cannot cancel or revert this
         * operation.</p> <p>This operation is not valid for:</p> <ul> <li> <p>Redis
         * (cluster mode enabled) clusters</p> </li> <li> <p>A cluster that is the last
         * read replica of a replication group</p> </li> <li> <p>A node group (shard) that
         * has Multi-AZ mode enabled</p> </li> <li> <p>A cluster from a Redis (cluster mode
         * enabled) replication group</p> </li> <li> <p>A cluster that is not in the
         * <code>available</code> state</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCacheClusterOutcomeCallable DeleteCacheClusterCallable(const Model::DeleteCacheClusterRequest& request) const;

        /**
         * <p>Deletes a previously provisioned cluster. <code>DeleteCacheCluster</code>
         * deletes all associated cache nodes, node endpoints and the cluster itself. When
         * you receive a successful response from this operation, Amazon ElastiCache
         * immediately begins deleting the cluster; you cannot cancel or revert this
         * operation.</p> <p>This operation is not valid for:</p> <ul> <li> <p>Redis
         * (cluster mode enabled) clusters</p> </li> <li> <p>A cluster that is the last
         * read replica of a replication group</p> </li> <li> <p>A node group (shard) that
         * has Multi-AZ mode enabled</p> </li> <li> <p>A cluster from a Redis (cluster mode
         * enabled) replication group</p> </li> <li> <p>A cluster that is not in the
         * <code>available</code> state</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCacheClusterAsync(const Model::DeleteCacheClusterRequest& request, const DeleteCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified cache parameter group. You cannot delete a cache
         * parameter group if it is associated with any cache clusters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCacheParameterGroupOutcome DeleteCacheParameterGroup(const Model::DeleteCacheParameterGroupRequest& request) const;

        /**
         * <p>Deletes the specified cache parameter group. You cannot delete a cache
         * parameter group if it is associated with any cache clusters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCacheParameterGroupOutcomeCallable DeleteCacheParameterGroupCallable(const Model::DeleteCacheParameterGroupRequest& request) const;

        /**
         * <p>Deletes the specified cache parameter group. You cannot delete a cache
         * parameter group if it is associated with any cache clusters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCacheParameterGroupAsync(const Model::DeleteCacheParameterGroupRequest& request, const DeleteCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a cache security group.</p> <note> <p>You cannot delete a cache
         * security group if it is associated with any clusters.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCacheSecurityGroupOutcome DeleteCacheSecurityGroup(const Model::DeleteCacheSecurityGroupRequest& request) const;

        /**
         * <p>Deletes a cache security group.</p> <note> <p>You cannot delete a cache
         * security group if it is associated with any clusters.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheSecurityGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCacheSecurityGroupOutcomeCallable DeleteCacheSecurityGroupCallable(const Model::DeleteCacheSecurityGroupRequest& request) const;

        /**
         * <p>Deletes a cache security group.</p> <note> <p>You cannot delete a cache
         * security group if it is associated with any clusters.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheSecurityGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCacheSecurityGroupAsync(const Model::DeleteCacheSecurityGroupRequest& request, const DeleteCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a cache subnet group.</p> <note> <p>You cannot delete a cache subnet
         * group if it is associated with any clusters.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCacheSubnetGroupOutcome DeleteCacheSubnetGroup(const Model::DeleteCacheSubnetGroupRequest& request) const;

        /**
         * <p>Deletes a cache subnet group.</p> <note> <p>You cannot delete a cache subnet
         * group if it is associated with any clusters.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheSubnetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCacheSubnetGroupOutcomeCallable DeleteCacheSubnetGroupCallable(const Model::DeleteCacheSubnetGroupRequest& request) const;

        /**
         * <p>Deletes a cache subnet group.</p> <note> <p>You cannot delete a cache subnet
         * group if it is associated with any clusters.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheSubnetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCacheSubnetGroupAsync(const Model::DeleteCacheSubnetGroupRequest& request, const DeleteCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing replication group. By default, this operation deletes the
         * entire replication group, including the primary/primaries and all of the read
         * replicas. If the replication group has only one primary, you can optionally
         * delete only the read replicas, while retaining the primary by setting
         * <code>RetainPrimaryCluster=true</code>.</p> <p>When you receive a successful
         * response from this operation, Amazon ElastiCache immediately begins deleting the
         * selected resources; you cannot cancel or revert this operation.</p> <note>
         * <p>This operation is valid for Redis only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationGroupOutcome DeleteReplicationGroup(const Model::DeleteReplicationGroupRequest& request) const;

        /**
         * <p>Deletes an existing replication group. By default, this operation deletes the
         * entire replication group, including the primary/primaries and all of the read
         * replicas. If the replication group has only one primary, you can optionally
         * delete only the read replicas, while retaining the primary by setting
         * <code>RetainPrimaryCluster=true</code>.</p> <p>When you receive a successful
         * response from this operation, Amazon ElastiCache immediately begins deleting the
         * selected resources; you cannot cancel or revert this operation.</p> <note>
         * <p>This operation is valid for Redis only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteReplicationGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationGroupOutcomeCallable DeleteReplicationGroupCallable(const Model::DeleteReplicationGroupRequest& request) const;

        /**
         * <p>Deletes an existing replication group. By default, this operation deletes the
         * entire replication group, including the primary/primaries and all of the read
         * replicas. If the replication group has only one primary, you can optionally
         * delete only the read replicas, while retaining the primary by setting
         * <code>RetainPrimaryCluster=true</code>.</p> <p>When you receive a successful
         * response from this operation, Amazon ElastiCache immediately begins deleting the
         * selected resources; you cannot cancel or revert this operation.</p> <note>
         * <p>This operation is valid for Redis only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteReplicationGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationGroupAsync(const Model::DeleteReplicationGroupRequest& request, const DeleteReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing snapshot. When you receive a successful response from
         * this operation, ElastiCache immediately begins deleting the snapshot; you cannot
         * cancel or revert this operation.</p> <note> <p>This operation is valid for Redis
         * only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;

        /**
         * <p>Deletes an existing snapshot. When you receive a successful response from
         * this operation, ElastiCache immediately begins deleting the snapshot; you cannot
         * cancel or revert this operation.</p> <note> <p>This operation is valid for Redis
         * only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;

        /**
         * <p>Deletes an existing snapshot. When you receive a successful response from
         * this operation, ElastiCache immediately begins deleting the snapshot; you cannot
         * cancel or revert this operation.</p> <note> <p>This operation is valid for Redis
         * only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all provisioned clusters if no cluster identifier
         * is specified, or about a specific cache cluster if a cluster identifier is
         * supplied.</p> <p>By default, abbreviated information about the clusters is
         * returned. You can use the optional <i>ShowCacheNodeInfo</i> flag to retrieve
         * detailed information about the cache nodes associated with the clusters. These
         * details include the DNS address and port for the cache node endpoint.</p> <p>If
         * the cluster is in the <i>creating</i> state, only cluster-level information is
         * displayed until all of the nodes are successfully provisioned.</p> <p>If the
         * cluster is in the <i>deleting</i> state, only cluster-level information is
         * displayed.</p> <p>If cache nodes are currently being added to the cluster, node
         * endpoint information and creation time for the additional nodes are not
         * displayed until they are completely provisioned. When the cluster state is
         * <i>available</i>, the cluster is ready for use.</p> <p>If cache nodes are
         * currently being removed from the cluster, no endpoint information for the
         * removed nodes is displayed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCacheClustersOutcome DescribeCacheClusters(const Model::DescribeCacheClustersRequest& request) const;

        /**
         * <p>Returns information about all provisioned clusters if no cluster identifier
         * is specified, or about a specific cache cluster if a cluster identifier is
         * supplied.</p> <p>By default, abbreviated information about the clusters is
         * returned. You can use the optional <i>ShowCacheNodeInfo</i> flag to retrieve
         * detailed information about the cache nodes associated with the clusters. These
         * details include the DNS address and port for the cache node endpoint.</p> <p>If
         * the cluster is in the <i>creating</i> state, only cluster-level information is
         * displayed until all of the nodes are successfully provisioned.</p> <p>If the
         * cluster is in the <i>deleting</i> state, only cluster-level information is
         * displayed.</p> <p>If cache nodes are currently being added to the cluster, node
         * endpoint information and creation time for the additional nodes are not
         * displayed until they are completely provisioned. When the cluster state is
         * <i>available</i>, the cluster is ready for use.</p> <p>If cache nodes are
         * currently being removed from the cluster, no endpoint information for the
         * removed nodes is displayed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheClusters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCacheClustersOutcomeCallable DescribeCacheClustersCallable(const Model::DescribeCacheClustersRequest& request) const;

        /**
         * <p>Returns information about all provisioned clusters if no cluster identifier
         * is specified, or about a specific cache cluster if a cluster identifier is
         * supplied.</p> <p>By default, abbreviated information about the clusters is
         * returned. You can use the optional <i>ShowCacheNodeInfo</i> flag to retrieve
         * detailed information about the cache nodes associated with the clusters. These
         * details include the DNS address and port for the cache node endpoint.</p> <p>If
         * the cluster is in the <i>creating</i> state, only cluster-level information is
         * displayed until all of the nodes are successfully provisioned.</p> <p>If the
         * cluster is in the <i>deleting</i> state, only cluster-level information is
         * displayed.</p> <p>If cache nodes are currently being added to the cluster, node
         * endpoint information and creation time for the additional nodes are not
         * displayed until they are completely provisioned. When the cluster state is
         * <i>available</i>, the cluster is ready for use.</p> <p>If cache nodes are
         * currently being removed from the cluster, no endpoint information for the
         * removed nodes is displayed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheClusters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheClustersAsync(const Model::DescribeCacheClustersRequest& request, const DescribeCacheClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the available cache engines and their
         * versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCacheEngineVersionsOutcome DescribeCacheEngineVersions(const Model::DescribeCacheEngineVersionsRequest& request) const;

        /**
         * <p>Returns a list of the available cache engines and their
         * versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheEngineVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCacheEngineVersionsOutcomeCallable DescribeCacheEngineVersionsCallable(const Model::DescribeCacheEngineVersionsRequest& request) const;

        /**
         * <p>Returns a list of the available cache engines and their
         * versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheEngineVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheEngineVersionsAsync(const Model::DescribeCacheEngineVersionsRequest& request, const DescribeCacheEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of cache parameter group descriptions. If a cache parameter
         * group name is specified, the list contains only the descriptions for that
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCacheParameterGroupsOutcome DescribeCacheParameterGroups(const Model::DescribeCacheParameterGroupsRequest& request) const;

        /**
         * <p>Returns a list of cache parameter group descriptions. If a cache parameter
         * group name is specified, the list contains only the descriptions for that
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheParameterGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCacheParameterGroupsOutcomeCallable DescribeCacheParameterGroupsCallable(const Model::DescribeCacheParameterGroupsRequest& request) const;

        /**
         * <p>Returns a list of cache parameter group descriptions. If a cache parameter
         * group name is specified, the list contains only the descriptions for that
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheParameterGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheParameterGroupsAsync(const Model::DescribeCacheParameterGroupsRequest& request, const DescribeCacheParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the detailed parameter list for a particular cache parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCacheParametersOutcome DescribeCacheParameters(const Model::DescribeCacheParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular cache parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCacheParametersOutcomeCallable DescribeCacheParametersCallable(const Model::DescribeCacheParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular cache parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheParametersAsync(const Model::DescribeCacheParametersRequest& request, const DescribeCacheParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of cache security group descriptions. If a cache security
         * group name is specified, the list contains only the description of that group.
         * This applicable only when you have ElastiCache in Classic setup </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCacheSecurityGroupsOutcome DescribeCacheSecurityGroups(const Model::DescribeCacheSecurityGroupsRequest& request) const;

        /**
         * <p>Returns a list of cache security group descriptions. If a cache security
         * group name is specified, the list contains only the description of that group.
         * This applicable only when you have ElastiCache in Classic setup </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheSecurityGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCacheSecurityGroupsOutcomeCallable DescribeCacheSecurityGroupsCallable(const Model::DescribeCacheSecurityGroupsRequest& request) const;

        /**
         * <p>Returns a list of cache security group descriptions. If a cache security
         * group name is specified, the list contains only the description of that group.
         * This applicable only when you have ElastiCache in Classic setup </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheSecurityGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheSecurityGroupsAsync(const Model::DescribeCacheSecurityGroupsRequest& request, const DescribeCacheSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of cache subnet group descriptions. If a subnet group name is
         * specified, the list contains only the description of that group. This is
         * applicable only when you have ElastiCache in VPC setup. All ElastiCache clusters
         * now launch in VPC by default. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheSubnetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCacheSubnetGroupsOutcome DescribeCacheSubnetGroups(const Model::DescribeCacheSubnetGroupsRequest& request) const;

        /**
         * <p>Returns a list of cache subnet group descriptions. If a subnet group name is
         * specified, the list contains only the description of that group. This is
         * applicable only when you have ElastiCache in VPC setup. All ElastiCache clusters
         * now launch in VPC by default. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheSubnetGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCacheSubnetGroupsOutcomeCallable DescribeCacheSubnetGroupsCallable(const Model::DescribeCacheSubnetGroupsRequest& request) const;

        /**
         * <p>Returns a list of cache subnet group descriptions. If a subnet group name is
         * specified, the list contains only the description of that group. This is
         * applicable only when you have ElastiCache in VPC setup. All ElastiCache clusters
         * now launch in VPC by default. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeCacheSubnetGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheSubnetGroupsAsync(const Model::DescribeCacheSubnetGroupsRequest& request, const DescribeCacheSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * cache engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeEngineDefaultParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineDefaultParametersOutcome DescribeEngineDefaultParameters(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * cache engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeEngineDefaultParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEngineDefaultParametersOutcomeCallable DescribeEngineDefaultParametersCallable(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * cache engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeEngineDefaultParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEngineDefaultParametersAsync(const Model::DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns events related to clusters, cache security groups, and cache
         * parameter groups. You can obtain events specific to a particular cluster, cache
         * security group, or cache parameter group by providing the name as a
         * parameter.</p> <p>By default, only the events occurring within the last hour are
         * returned; however, you can retrieve up to 14 days' worth of events if
         * necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns events related to clusters, cache security groups, and cache
         * parameter groups. You can obtain events specific to a particular cluster, cache
         * security group, or cache parameter group by providing the name as a
         * parameter.</p> <p>By default, only the events occurring within the last hour are
         * returned; however, you can retrieve up to 14 days' worth of events if
         * necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns events related to clusters, cache security groups, and cache
         * parameter groups. You can obtain events specific to a particular cluster, cache
         * security group, or cache parameter group by providing the name as a
         * parameter.</p> <p>By default, only the events occurring within the last hour are
         * returned; however, you can retrieve up to 14 days' worth of events if
         * necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a particular replication group. If no identifier is
         * specified, <code>DescribeReplicationGroups</code> returns information about all
         * replication groups.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeReplicationGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationGroupsOutcome DescribeReplicationGroups(const Model::DescribeReplicationGroupsRequest& request) const;

        /**
         * <p>Returns information about a particular replication group. If no identifier is
         * specified, <code>DescribeReplicationGroups</code> returns information about all
         * replication groups.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeReplicationGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationGroupsOutcomeCallable DescribeReplicationGroupsCallable(const Model::DescribeReplicationGroupsRequest& request) const;

        /**
         * <p>Returns information about a particular replication group. If no identifier is
         * specified, <code>DescribeReplicationGroups</code> returns information about all
         * replication groups.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeReplicationGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationGroupsAsync(const Model::DescribeReplicationGroupsRequest& request, const DescribeReplicationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about reserved cache nodes for this account, or about a
         * specified reserved cache node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeReservedCacheNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedCacheNodesOutcome DescribeReservedCacheNodes(const Model::DescribeReservedCacheNodesRequest& request) const;

        /**
         * <p>Returns information about reserved cache nodes for this account, or about a
         * specified reserved cache node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeReservedCacheNodes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedCacheNodesOutcomeCallable DescribeReservedCacheNodesCallable(const Model::DescribeReservedCacheNodesRequest& request) const;

        /**
         * <p>Returns information about reserved cache nodes for this account, or about a
         * specified reserved cache node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeReservedCacheNodes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedCacheNodesAsync(const Model::DescribeReservedCacheNodesRequest& request, const DescribeReservedCacheNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists available reserved cache node offerings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeReservedCacheNodesOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedCacheNodesOfferingsOutcome DescribeReservedCacheNodesOfferings(const Model::DescribeReservedCacheNodesOfferingsRequest& request) const;

        /**
         * <p>Lists available reserved cache node offerings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeReservedCacheNodesOfferings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedCacheNodesOfferingsOutcomeCallable DescribeReservedCacheNodesOfferingsCallable(const Model::DescribeReservedCacheNodesOfferingsRequest& request) const;

        /**
         * <p>Lists available reserved cache node offerings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeReservedCacheNodesOfferings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedCacheNodesOfferingsAsync(const Model::DescribeReservedCacheNodesOfferingsRequest& request, const DescribeReservedCacheNodesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details of the service updates</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeServiceUpdates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceUpdatesOutcome DescribeServiceUpdates(const Model::DescribeServiceUpdatesRequest& request) const;

        /**
         * <p>Returns details of the service updates</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeServiceUpdates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServiceUpdatesOutcomeCallable DescribeServiceUpdatesCallable(const Model::DescribeServiceUpdatesRequest& request) const;

        /**
         * <p>Returns details of the service updates</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeServiceUpdates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServiceUpdatesAsync(const Model::DescribeServiceUpdatesRequest& request, const DescribeServiceUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about cluster or replication group snapshots. By default,
         * <code>DescribeSnapshots</code> lists all of your snapshots; it can optionally
         * describe a single snapshot, or just the snapshots associated with a particular
         * cache cluster.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * <p>Returns information about cluster or replication group snapshots. By default,
         * <code>DescribeSnapshots</code> lists all of your snapshots; it can optionally
         * describe a single snapshot, or just the snapshots associated with a particular
         * cache cluster.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeSnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * <p>Returns information about cluster or replication group snapshots. By default,
         * <code>DescribeSnapshots</code> lists all of your snapshots; it can optionally
         * describe a single snapshot, or just the snapshots associated with a particular
         * cache cluster.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeSnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details of the update actions </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeUpdateActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUpdateActionsOutcome DescribeUpdateActions(const Model::DescribeUpdateActionsRequest& request) const;

        /**
         * <p>Returns details of the update actions </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeUpdateActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUpdateActionsOutcomeCallable DescribeUpdateActionsCallable(const Model::DescribeUpdateActionsRequest& request) const;

        /**
         * <p>Returns details of the update actions </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeUpdateActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUpdateActionsAsync(const Model::DescribeUpdateActionsRequest& request, const DescribeUpdateActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Dynamically increases the number of replics in a Redis (cluster mode
         * disabled) replication group or the number of replica nodes in one or more node
         * groups (shards) of a Redis (cluster mode enabled) replication group. This
         * operation is performed with no cluster down time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/IncreaseReplicaCount">AWS
         * API Reference</a></p>
         */
        virtual Model::IncreaseReplicaCountOutcome IncreaseReplicaCount(const Model::IncreaseReplicaCountRequest& request) const;

        /**
         * <p>Dynamically increases the number of replics in a Redis (cluster mode
         * disabled) replication group or the number of replica nodes in one or more node
         * groups (shards) of a Redis (cluster mode enabled) replication group. This
         * operation is performed with no cluster down time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/IncreaseReplicaCount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::IncreaseReplicaCountOutcomeCallable IncreaseReplicaCountCallable(const Model::IncreaseReplicaCountRequest& request) const;

        /**
         * <p>Dynamically increases the number of replics in a Redis (cluster mode
         * disabled) replication group or the number of replica nodes in one or more node
         * groups (shards) of a Redis (cluster mode enabled) replication group. This
         * operation is performed with no cluster down time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/IncreaseReplicaCount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void IncreaseReplicaCountAsync(const Model::IncreaseReplicaCountRequest& request, const IncreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all available node types that you can scale your Redis cluster's or
         * replication group's current node type up to.</p> <p>When you use the
         * <code>ModifyCacheCluster</code> or <code>ModifyReplicationGroup</code>
         * operations to scale up your cluster or replication group, the value of the
         * <code>CacheNodeType</code> parameter must be one of the node types returned by
         * this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ListAllowedNodeTypeModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAllowedNodeTypeModificationsOutcome ListAllowedNodeTypeModifications(const Model::ListAllowedNodeTypeModificationsRequest& request) const;

        /**
         * <p>Lists all available node types that you can scale your Redis cluster's or
         * replication group's current node type up to.</p> <p>When you use the
         * <code>ModifyCacheCluster</code> or <code>ModifyReplicationGroup</code>
         * operations to scale up your cluster or replication group, the value of the
         * <code>CacheNodeType</code> parameter must be one of the node types returned by
         * this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ListAllowedNodeTypeModifications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAllowedNodeTypeModificationsOutcomeCallable ListAllowedNodeTypeModificationsCallable(const Model::ListAllowedNodeTypeModificationsRequest& request) const;

        /**
         * <p>Lists all available node types that you can scale your Redis cluster's or
         * replication group's current node type up to.</p> <p>When you use the
         * <code>ModifyCacheCluster</code> or <code>ModifyReplicationGroup</code>
         * operations to scale up your cluster or replication group, the value of the
         * <code>CacheNodeType</code> parameter must be one of the node types returned by
         * this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ListAllowedNodeTypeModifications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAllowedNodeTypeModificationsAsync(const Model::ListAllowedNodeTypeModificationsRequest& request, const ListAllowedNodeTypeModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all cost allocation tags currently on the named resource. A <code>cost
         * allocation tag</code> is a key-value pair where the key is case-sensitive and
         * the value is optional. You can use cost allocation tags to categorize and track
         * your AWS costs.</p> <p>If the cluster is not in the <i>available</i> state,
         * <code>ListTagsForResource</code> returns an error.</p> <p>You can have a maximum
         * of 50 cost allocation tags on an ElastiCache resource. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Tagging.html">Monitoring
         * Costs with Tags</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all cost allocation tags currently on the named resource. A <code>cost
         * allocation tag</code> is a key-value pair where the key is case-sensitive and
         * the value is optional. You can use cost allocation tags to categorize and track
         * your AWS costs.</p> <p>If the cluster is not in the <i>available</i> state,
         * <code>ListTagsForResource</code> returns an error.</p> <p>You can have a maximum
         * of 50 cost allocation tags on an ElastiCache resource. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Tagging.html">Monitoring
         * Costs with Tags</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all cost allocation tags currently on the named resource. A <code>cost
         * allocation tag</code> is a key-value pair where the key is case-sensitive and
         * the value is optional. You can use cost allocation tags to categorize and track
         * your AWS costs.</p> <p>If the cluster is not in the <i>available</i> state,
         * <code>ListTagsForResource</code> returns an error.</p> <p>You can have a maximum
         * of 50 cost allocation tags on an ElastiCache resource. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Tagging.html">Monitoring
         * Costs with Tags</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the settings for a cluster. You can use this operation to change one
         * or more cluster configuration parameters by specifying the parameters and the
         * new values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCacheClusterOutcome ModifyCacheCluster(const Model::ModifyCacheClusterRequest& request) const;

        /**
         * <p>Modifies the settings for a cluster. You can use this operation to change one
         * or more cluster configuration parameters by specifying the parameters and the
         * new values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyCacheClusterOutcomeCallable ModifyCacheClusterCallable(const Model::ModifyCacheClusterRequest& request) const;

        /**
         * <p>Modifies the settings for a cluster. You can use this operation to change one
         * or more cluster configuration parameters by specifying the parameters and the
         * new values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCacheClusterAsync(const Model::ModifyCacheClusterRequest& request, const ModifyCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the parameters of a cache parameter group. You can modify up to 20
         * parameters in a single request by submitting a list parameter name and value
         * pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCacheParameterGroupOutcome ModifyCacheParameterGroup(const Model::ModifyCacheParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a cache parameter group. You can modify up to 20
         * parameters in a single request by submitting a list parameter name and value
         * pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyCacheParameterGroupOutcomeCallable ModifyCacheParameterGroupCallable(const Model::ModifyCacheParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a cache parameter group. You can modify up to 20
         * parameters in a single request by submitting a list parameter name and value
         * pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCacheParameterGroupAsync(const Model::ModifyCacheParameterGroupRequest& request, const ModifyCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing cache subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCacheSubnetGroupOutcome ModifyCacheSubnetGroup(const Model::ModifyCacheSubnetGroupRequest& request) const;

        /**
         * <p>Modifies an existing cache subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheSubnetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyCacheSubnetGroupOutcomeCallable ModifyCacheSubnetGroupCallable(const Model::ModifyCacheSubnetGroupRequest& request) const;

        /**
         * <p>Modifies an existing cache subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheSubnetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCacheSubnetGroupAsync(const Model::ModifyCacheSubnetGroupRequest& request, const ModifyCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the settings for a replication group.</p> <p>For Redis (cluster mode
         * enabled) clusters, this operation cannot be used to change a cluster's node type
         * or engine version. For more information, see:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/scaling-redis-cluster-mode-enabled.html">Scaling
         * for Amazon ElastiCache for Redis (cluster mode enabled)</a> in the ElastiCache
         * User Guide</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_ModifyReplicationGroupShardConfiguration.html">ModifyReplicationGroupShardConfiguration</a>
         * in the ElastiCache API Reference</p> </li> </ul> <note> <p>This operation is
         * valid for Redis only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyReplicationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReplicationGroupOutcome ModifyReplicationGroup(const Model::ModifyReplicationGroupRequest& request) const;

        /**
         * <p>Modifies the settings for a replication group.</p> <p>For Redis (cluster mode
         * enabled) clusters, this operation cannot be used to change a cluster's node type
         * or engine version. For more information, see:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/scaling-redis-cluster-mode-enabled.html">Scaling
         * for Amazon ElastiCache for Redis (cluster mode enabled)</a> in the ElastiCache
         * User Guide</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_ModifyReplicationGroupShardConfiguration.html">ModifyReplicationGroupShardConfiguration</a>
         * in the ElastiCache API Reference</p> </li> </ul> <note> <p>This operation is
         * valid for Redis only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyReplicationGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyReplicationGroupOutcomeCallable ModifyReplicationGroupCallable(const Model::ModifyReplicationGroupRequest& request) const;

        /**
         * <p>Modifies the settings for a replication group.</p> <p>For Redis (cluster mode
         * enabled) clusters, this operation cannot be used to change a cluster's node type
         * or engine version. For more information, see:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/scaling-redis-cluster-mode-enabled.html">Scaling
         * for Amazon ElastiCache for Redis (cluster mode enabled)</a> in the ElastiCache
         * User Guide</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_ModifyReplicationGroupShardConfiguration.html">ModifyReplicationGroupShardConfiguration</a>
         * in the ElastiCache API Reference</p> </li> </ul> <note> <p>This operation is
         * valid for Redis only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyReplicationGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyReplicationGroupAsync(const Model::ModifyReplicationGroupRequest& request, const ModifyReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a replication group's shards (node groups) by allowing you to add
         * shards, remove shards, or rebalance the keyspaces among exisiting
         * shards.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyReplicationGroupShardConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReplicationGroupShardConfigurationOutcome ModifyReplicationGroupShardConfiguration(const Model::ModifyReplicationGroupShardConfigurationRequest& request) const;

        /**
         * <p>Modifies a replication group's shards (node groups) by allowing you to add
         * shards, remove shards, or rebalance the keyspaces among exisiting
         * shards.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyReplicationGroupShardConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyReplicationGroupShardConfigurationOutcomeCallable ModifyReplicationGroupShardConfigurationCallable(const Model::ModifyReplicationGroupShardConfigurationRequest& request) const;

        /**
         * <p>Modifies a replication group's shards (node groups) by allowing you to add
         * shards, remove shards, or rebalance the keyspaces among exisiting
         * shards.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyReplicationGroupShardConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyReplicationGroupShardConfigurationAsync(const Model::ModifyReplicationGroupShardConfigurationRequest& request, const ModifyReplicationGroupShardConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows you to purchase a reserved cache node offering.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/PurchaseReservedCacheNodesOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseReservedCacheNodesOfferingOutcome PurchaseReservedCacheNodesOffering(const Model::PurchaseReservedCacheNodesOfferingRequest& request) const;

        /**
         * <p>Allows you to purchase a reserved cache node offering.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/PurchaseReservedCacheNodesOffering">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseReservedCacheNodesOfferingOutcomeCallable PurchaseReservedCacheNodesOfferingCallable(const Model::PurchaseReservedCacheNodesOfferingRequest& request) const;

        /**
         * <p>Allows you to purchase a reserved cache node offering.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/PurchaseReservedCacheNodesOffering">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseReservedCacheNodesOfferingAsync(const Model::PurchaseReservedCacheNodesOfferingRequest& request, const PurchaseReservedCacheNodesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reboots some, or all, of the cache nodes within a provisioned cluster. This
         * operation applies any modified cache parameter groups to the cluster. The reboot
         * operation takes place as soon as possible, and results in a momentary outage to
         * the cluster. During the reboot, the cluster status is set to REBOOTING.</p>
         * <p>The reboot causes the contents of the cache (for each cache node being
         * rebooted) to be lost.</p> <p>When the reboot is complete, a cluster event is
         * created.</p> <p>Rebooting a cluster is currently supported on Memcached and
         * Redis (cluster mode disabled) clusters. Rebooting is not supported on Redis
         * (cluster mode enabled) clusters.</p> <p>If you make changes to parameters that
         * require a Redis (cluster mode enabled) cluster reboot for the changes to be
         * applied, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Clusters.Rebooting.html">Rebooting
         * a Cluster</a> for an alternate process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RebootCacheCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootCacheClusterOutcome RebootCacheCluster(const Model::RebootCacheClusterRequest& request) const;

        /**
         * <p>Reboots some, or all, of the cache nodes within a provisioned cluster. This
         * operation applies any modified cache parameter groups to the cluster. The reboot
         * operation takes place as soon as possible, and results in a momentary outage to
         * the cluster. During the reboot, the cluster status is set to REBOOTING.</p>
         * <p>The reboot causes the contents of the cache (for each cache node being
         * rebooted) to be lost.</p> <p>When the reboot is complete, a cluster event is
         * created.</p> <p>Rebooting a cluster is currently supported on Memcached and
         * Redis (cluster mode disabled) clusters. Rebooting is not supported on Redis
         * (cluster mode enabled) clusters.</p> <p>If you make changes to parameters that
         * require a Redis (cluster mode enabled) cluster reboot for the changes to be
         * applied, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Clusters.Rebooting.html">Rebooting
         * a Cluster</a> for an alternate process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RebootCacheCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootCacheClusterOutcomeCallable RebootCacheClusterCallable(const Model::RebootCacheClusterRequest& request) const;

        /**
         * <p>Reboots some, or all, of the cache nodes within a provisioned cluster. This
         * operation applies any modified cache parameter groups to the cluster. The reboot
         * operation takes place as soon as possible, and results in a momentary outage to
         * the cluster. During the reboot, the cluster status is set to REBOOTING.</p>
         * <p>The reboot causes the contents of the cache (for each cache node being
         * rebooted) to be lost.</p> <p>When the reboot is complete, a cluster event is
         * created.</p> <p>Rebooting a cluster is currently supported on Memcached and
         * Redis (cluster mode disabled) clusters. Rebooting is not supported on Redis
         * (cluster mode enabled) clusters.</p> <p>If you make changes to parameters that
         * require a Redis (cluster mode enabled) cluster reboot for the changes to be
         * applied, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Clusters.Rebooting.html">Rebooting
         * a Cluster</a> for an alternate process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RebootCacheCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootCacheClusterAsync(const Model::RebootCacheClusterRequest& request, const RebootCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the tags identified by the <code>TagKeys</code> list from the named
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes the tags identified by the <code>TagKeys</code> list from the named
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes the tags identified by the <code>TagKeys</code> list from the named
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the parameters of a cache parameter group to the engine or system
         * default value. You can reset specific parameters by submitting a list of
         * parameter names. To reset the entire cache parameter group, specify the
         * <code>ResetAllParameters</code> and <code>CacheParameterGroupName</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ResetCacheParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetCacheParameterGroupOutcome ResetCacheParameterGroup(const Model::ResetCacheParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a cache parameter group to the engine or system
         * default value. You can reset specific parameters by submitting a list of
         * parameter names. To reset the entire cache parameter group, specify the
         * <code>ResetAllParameters</code> and <code>CacheParameterGroupName</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ResetCacheParameterGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetCacheParameterGroupOutcomeCallable ResetCacheParameterGroupCallable(const Model::ResetCacheParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a cache parameter group to the engine or system
         * default value. You can reset specific parameters by submitting a list of
         * parameter names. To reset the entire cache parameter group, specify the
         * <code>ResetAllParameters</code> and <code>CacheParameterGroupName</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ResetCacheParameterGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetCacheParameterGroupAsync(const Model::ResetCacheParameterGroupRequest& request, const ResetCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes ingress from a cache security group. Use this operation to disallow
         * access from an Amazon EC2 security group that had been previously
         * authorized.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RevokeCacheSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeCacheSecurityGroupIngressOutcome RevokeCacheSecurityGroupIngress(const Model::RevokeCacheSecurityGroupIngressRequest& request) const;

        /**
         * <p>Revokes ingress from a cache security group. Use this operation to disallow
         * access from an Amazon EC2 security group that had been previously
         * authorized.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RevokeCacheSecurityGroupIngress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeCacheSecurityGroupIngressOutcomeCallable RevokeCacheSecurityGroupIngressCallable(const Model::RevokeCacheSecurityGroupIngressRequest& request) const;

        /**
         * <p>Revokes ingress from a cache security group. Use this operation to disallow
         * access from an Amazon EC2 security group that had been previously
         * authorized.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RevokeCacheSecurityGroupIngress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeCacheSecurityGroupIngressAsync(const Model::RevokeCacheSecurityGroupIngressRequest& request, const RevokeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents the input of a <code>TestFailover</code> operation which test
         * automatic failover on a specified node group (called shard in the console) in a
         * replication group (called cluster in the console).</p> <p class="title"> <b>Note
         * the following</b> </p> <ul> <li> <p>A customer can use this operation to test
         * automatic failover on up to 5 shards (called node groups in the ElastiCache API
         * and AWS CLI) in any rolling 24-hour period.</p> </li> <li> <p>If calling this
         * operation on shards in different clusters (called replication groups in the API
         * and CLI), the calls can be made concurrently.</p> <p> </p> </li> <li> <p>If
         * calling this operation multiple times on different shards in the same Redis
         * (cluster mode enabled) replication group, the first node replacement must
         * complete before a subsequent call can be made.</p> </li> <li> <p>To determine
         * whether the node replacement is complete you can check Events using the Amazon
         * ElastiCache console, the AWS CLI, or the ElastiCache API. Look for the following
         * automatic failover related events, listed here in order of occurrance:</p> <ol>
         * <li> <p>Replication group message: <code>Test Failover API called for node group
         * &lt;node-group-id&gt;</code> </p> </li> <li> <p>Cache cluster message:
         * <code>Failover from master node &lt;primary-node-id&gt; to replica node
         * &lt;node-id&gt; completed</code> </p> </li> <li> <p>Replication group message:
         * <code>Failover from master node &lt;primary-node-id&gt; to replica node
         * &lt;node-id&gt; completed</code> </p> </li> <li> <p>Cache cluster message:
         * <code>Recovering cache nodes &lt;node-id&gt;</code> </p> </li> <li> <p>Cache
         * cluster message: <code>Finished recovery for cache nodes &lt;node-id&gt;</code>
         * </p> </li> </ol> <p>For more information see:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/ECEvents.Viewing.html">Viewing
         * ElastiCache Events</a> in the <i>ElastiCache User Guide</i> </p> </li> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_DescribeEvents.html">DescribeEvents</a>
         * in the ElastiCache API Reference</p> </li> </ul> </li> </ul> <p>Also see, <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html#auto-failover-test">Testing
         * Multi-AZ with Automatic Failover</a> in the <i>ElastiCache User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/TestFailover">AWS
         * API Reference</a></p>
         */
        virtual Model::TestFailoverOutcome TestFailover(const Model::TestFailoverRequest& request) const;

        /**
         * <p>Represents the input of a <code>TestFailover</code> operation which test
         * automatic failover on a specified node group (called shard in the console) in a
         * replication group (called cluster in the console).</p> <p class="title"> <b>Note
         * the following</b> </p> <ul> <li> <p>A customer can use this operation to test
         * automatic failover on up to 5 shards (called node groups in the ElastiCache API
         * and AWS CLI) in any rolling 24-hour period.</p> </li> <li> <p>If calling this
         * operation on shards in different clusters (called replication groups in the API
         * and CLI), the calls can be made concurrently.</p> <p> </p> </li> <li> <p>If
         * calling this operation multiple times on different shards in the same Redis
         * (cluster mode enabled) replication group, the first node replacement must
         * complete before a subsequent call can be made.</p> </li> <li> <p>To determine
         * whether the node replacement is complete you can check Events using the Amazon
         * ElastiCache console, the AWS CLI, or the ElastiCache API. Look for the following
         * automatic failover related events, listed here in order of occurrance:</p> <ol>
         * <li> <p>Replication group message: <code>Test Failover API called for node group
         * &lt;node-group-id&gt;</code> </p> </li> <li> <p>Cache cluster message:
         * <code>Failover from master node &lt;primary-node-id&gt; to replica node
         * &lt;node-id&gt; completed</code> </p> </li> <li> <p>Replication group message:
         * <code>Failover from master node &lt;primary-node-id&gt; to replica node
         * &lt;node-id&gt; completed</code> </p> </li> <li> <p>Cache cluster message:
         * <code>Recovering cache nodes &lt;node-id&gt;</code> </p> </li> <li> <p>Cache
         * cluster message: <code>Finished recovery for cache nodes &lt;node-id&gt;</code>
         * </p> </li> </ol> <p>For more information see:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/ECEvents.Viewing.html">Viewing
         * ElastiCache Events</a> in the <i>ElastiCache User Guide</i> </p> </li> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_DescribeEvents.html">DescribeEvents</a>
         * in the ElastiCache API Reference</p> </li> </ul> </li> </ul> <p>Also see, <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html#auto-failover-test">Testing
         * Multi-AZ with Automatic Failover</a> in the <i>ElastiCache User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/TestFailover">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestFailoverOutcomeCallable TestFailoverCallable(const Model::TestFailoverRequest& request) const;

        /**
         * <p>Represents the input of a <code>TestFailover</code> operation which test
         * automatic failover on a specified node group (called shard in the console) in a
         * replication group (called cluster in the console).</p> <p class="title"> <b>Note
         * the following</b> </p> <ul> <li> <p>A customer can use this operation to test
         * automatic failover on up to 5 shards (called node groups in the ElastiCache API
         * and AWS CLI) in any rolling 24-hour period.</p> </li> <li> <p>If calling this
         * operation on shards in different clusters (called replication groups in the API
         * and CLI), the calls can be made concurrently.</p> <p> </p> </li> <li> <p>If
         * calling this operation multiple times on different shards in the same Redis
         * (cluster mode enabled) replication group, the first node replacement must
         * complete before a subsequent call can be made.</p> </li> <li> <p>To determine
         * whether the node replacement is complete you can check Events using the Amazon
         * ElastiCache console, the AWS CLI, or the ElastiCache API. Look for the following
         * automatic failover related events, listed here in order of occurrance:</p> <ol>
         * <li> <p>Replication group message: <code>Test Failover API called for node group
         * &lt;node-group-id&gt;</code> </p> </li> <li> <p>Cache cluster message:
         * <code>Failover from master node &lt;primary-node-id&gt; to replica node
         * &lt;node-id&gt; completed</code> </p> </li> <li> <p>Replication group message:
         * <code>Failover from master node &lt;primary-node-id&gt; to replica node
         * &lt;node-id&gt; completed</code> </p> </li> <li> <p>Cache cluster message:
         * <code>Recovering cache nodes &lt;node-id&gt;</code> </p> </li> <li> <p>Cache
         * cluster message: <code>Finished recovery for cache nodes &lt;node-id&gt;</code>
         * </p> </li> </ol> <p>For more information see:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/ECEvents.Viewing.html">Viewing
         * ElastiCache Events</a> in the <i>ElastiCache User Guide</i> </p> </li> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_DescribeEvents.html">DescribeEvents</a>
         * in the ElastiCache API Reference</p> </li> </ul> </li> </ul> <p>Also see, <a
         * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html#auto-failover-test">Testing
         * Multi-AZ with Automatic Failover</a> in the <i>ElastiCache User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/TestFailover">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestFailoverAsync(const Model::TestFailoverRequest& request, const TestFailoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      
        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AuthorizeCacheSecurityGroupIngressAsyncHelper(const Model::AuthorizeCacheSecurityGroupIngressRequest& request, const AuthorizeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchApplyUpdateActionAsyncHelper(const Model::BatchApplyUpdateActionRequest& request, const BatchApplyUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchStopUpdateActionAsyncHelper(const Model::BatchStopUpdateActionRequest& request, const BatchStopUpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopySnapshotAsyncHelper(const Model::CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCacheClusterAsyncHelper(const Model::CreateCacheClusterRequest& request, const CreateCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCacheParameterGroupAsyncHelper(const Model::CreateCacheParameterGroupRequest& request, const CreateCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCacheSecurityGroupAsyncHelper(const Model::CreateCacheSecurityGroupRequest& request, const CreateCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCacheSubnetGroupAsyncHelper(const Model::CreateCacheSubnetGroupRequest& request, const CreateCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateReplicationGroupAsyncHelper(const Model::CreateReplicationGroupRequest& request, const CreateReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSnapshotAsyncHelper(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DecreaseReplicaCountAsyncHelper(const Model::DecreaseReplicaCountRequest& request, const DecreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCacheClusterAsyncHelper(const Model::DeleteCacheClusterRequest& request, const DeleteCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCacheParameterGroupAsyncHelper(const Model::DeleteCacheParameterGroupRequest& request, const DeleteCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCacheSecurityGroupAsyncHelper(const Model::DeleteCacheSecurityGroupRequest& request, const DeleteCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCacheSubnetGroupAsyncHelper(const Model::DeleteCacheSubnetGroupRequest& request, const DeleteCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReplicationGroupAsyncHelper(const Model::DeleteReplicationGroupRequest& request, const DeleteReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSnapshotAsyncHelper(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCacheClustersAsyncHelper(const Model::DescribeCacheClustersRequest& request, const DescribeCacheClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCacheEngineVersionsAsyncHelper(const Model::DescribeCacheEngineVersionsRequest& request, const DescribeCacheEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCacheParameterGroupsAsyncHelper(const Model::DescribeCacheParameterGroupsRequest& request, const DescribeCacheParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCacheParametersAsyncHelper(const Model::DescribeCacheParametersRequest& request, const DescribeCacheParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCacheSecurityGroupsAsyncHelper(const Model::DescribeCacheSecurityGroupsRequest& request, const DescribeCacheSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCacheSubnetGroupsAsyncHelper(const Model::DescribeCacheSubnetGroupsRequest& request, const DescribeCacheSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEngineDefaultParametersAsyncHelper(const Model::DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventsAsyncHelper(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReplicationGroupsAsyncHelper(const Model::DescribeReplicationGroupsRequest& request, const DescribeReplicationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedCacheNodesAsyncHelper(const Model::DescribeReservedCacheNodesRequest& request, const DescribeReservedCacheNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedCacheNodesOfferingsAsyncHelper(const Model::DescribeReservedCacheNodesOfferingsRequest& request, const DescribeReservedCacheNodesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeServiceUpdatesAsyncHelper(const Model::DescribeServiceUpdatesRequest& request, const DescribeServiceUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSnapshotsAsyncHelper(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUpdateActionsAsyncHelper(const Model::DescribeUpdateActionsRequest& request, const DescribeUpdateActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void IncreaseReplicaCountAsyncHelper(const Model::IncreaseReplicaCountRequest& request, const IncreaseReplicaCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAllowedNodeTypeModificationsAsyncHelper(const Model::ListAllowedNodeTypeModificationsRequest& request, const ListAllowedNodeTypeModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyCacheClusterAsyncHelper(const Model::ModifyCacheClusterRequest& request, const ModifyCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyCacheParameterGroupAsyncHelper(const Model::ModifyCacheParameterGroupRequest& request, const ModifyCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyCacheSubnetGroupAsyncHelper(const Model::ModifyCacheSubnetGroupRequest& request, const ModifyCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyReplicationGroupAsyncHelper(const Model::ModifyReplicationGroupRequest& request, const ModifyReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyReplicationGroupShardConfigurationAsyncHelper(const Model::ModifyReplicationGroupShardConfigurationRequest& request, const ModifyReplicationGroupShardConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseReservedCacheNodesOfferingAsyncHelper(const Model::PurchaseReservedCacheNodesOfferingRequest& request, const PurchaseReservedCacheNodesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootCacheClusterAsyncHelper(const Model::RebootCacheClusterRequest& request, const RebootCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetCacheParameterGroupAsyncHelper(const Model::ResetCacheParameterGroupRequest& request, const ResetCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeCacheSecurityGroupIngressAsyncHelper(const Model::RevokeCacheSecurityGroupIngressRequest& request, const RevokeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestFailoverAsyncHelper(const Model::TestFailoverRequest& request, const TestFailoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ElastiCache
} // namespace Aws
