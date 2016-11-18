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
#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticache/model/AddTagsToResourceResult.h>
#include <aws/elasticache/model/AuthorizeCacheSecurityGroupIngressResult.h>
#include <aws/elasticache/model/CopySnapshotResult.h>
#include <aws/elasticache/model/CreateCacheClusterResult.h>
#include <aws/elasticache/model/CreateCacheParameterGroupResult.h>
#include <aws/elasticache/model/CreateCacheSecurityGroupResult.h>
#include <aws/elasticache/model/CreateCacheSubnetGroupResult.h>
#include <aws/elasticache/model/CreateReplicationGroupResult.h>
#include <aws/elasticache/model/CreateSnapshotResult.h>
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
#include <aws/elasticache/model/DescribeSnapshotsResult.h>
#include <aws/elasticache/model/ListAllowedNodeTypeModificationsResult.h>
#include <aws/elasticache/model/ListTagsForResourceResult.h>
#include <aws/elasticache/model/ModifyCacheClusterResult.h>
#include <aws/elasticache/model/ModifyCacheParameterGroupResult.h>
#include <aws/elasticache/model/ModifyCacheSubnetGroupResult.h>
#include <aws/elasticache/model/ModifyReplicationGroupResult.h>
#include <aws/elasticache/model/PurchaseReservedCacheNodesOfferingResult.h>
#include <aws/elasticache/model/RebootCacheClusterResult.h>
#include <aws/elasticache/model/RemoveTagsFromResourceResult.h>
#include <aws/elasticache/model/ResetCacheParameterGroupResult.h>
#include <aws/elasticache/model/RevokeCacheSecurityGroupIngressResult.h>
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
        class CopySnapshotRequest;
        class CreateCacheClusterRequest;
        class CreateCacheParameterGroupRequest;
        class CreateCacheSecurityGroupRequest;
        class CreateCacheSubnetGroupRequest;
        class CreateReplicationGroupRequest;
        class CreateSnapshotRequest;
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
        class DescribeSnapshotsRequest;
        class ListAllowedNodeTypeModificationsRequest;
        class ListTagsForResourceRequest;
        class ModifyCacheClusterRequest;
        class ModifyCacheParameterGroupRequest;
        class ModifyCacheSubnetGroupRequest;
        class ModifyReplicationGroupRequest;
        class PurchaseReservedCacheNodesOfferingRequest;
        class RebootCacheClusterRequest;
        class RemoveTagsFromResourceRequest;
        class ResetCacheParameterGroupRequest;
        class RevokeCacheSecurityGroupIngressRequest;

        typedef Aws::Utils::Outcome<AddTagsToResourceResult, Aws::Client::AWSError<ElastiCacheErrors>> AddTagsToResourceOutcome;
        typedef Aws::Utils::Outcome<AuthorizeCacheSecurityGroupIngressResult, Aws::Client::AWSError<ElastiCacheErrors>> AuthorizeCacheSecurityGroupIngressOutcome;
        typedef Aws::Utils::Outcome<CopySnapshotResult, Aws::Client::AWSError<ElastiCacheErrors>> CopySnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateCacheClusterResult, Aws::Client::AWSError<ElastiCacheErrors>> CreateCacheClusterOutcome;
        typedef Aws::Utils::Outcome<CreateCacheParameterGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> CreateCacheParameterGroupOutcome;
        typedef Aws::Utils::Outcome<CreateCacheSecurityGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> CreateCacheSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<CreateCacheSubnetGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> CreateCacheSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<CreateReplicationGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> CreateReplicationGroupOutcome;
        typedef Aws::Utils::Outcome<CreateSnapshotResult, Aws::Client::AWSError<ElastiCacheErrors>> CreateSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteCacheClusterResult, Aws::Client::AWSError<ElastiCacheErrors>> DeleteCacheClusterOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<ElastiCacheErrors>> DeleteCacheParameterGroupOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<ElastiCacheErrors>> DeleteCacheSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<ElastiCacheErrors>> DeleteCacheSubnetGroupOutcome;
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
        typedef Aws::Utils::Outcome<DescribeSnapshotsResult, Aws::Client::AWSError<ElastiCacheErrors>> DescribeSnapshotsOutcome;
        typedef Aws::Utils::Outcome<ListAllowedNodeTypeModificationsResult, Aws::Client::AWSError<ElastiCacheErrors>> ListAllowedNodeTypeModificationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<ElastiCacheErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ModifyCacheClusterResult, Aws::Client::AWSError<ElastiCacheErrors>> ModifyCacheClusterOutcome;
        typedef Aws::Utils::Outcome<ModifyCacheParameterGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> ModifyCacheParameterGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyCacheSubnetGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> ModifyCacheSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyReplicationGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> ModifyReplicationGroupOutcome;
        typedef Aws::Utils::Outcome<PurchaseReservedCacheNodesOfferingResult, Aws::Client::AWSError<ElastiCacheErrors>> PurchaseReservedCacheNodesOfferingOutcome;
        typedef Aws::Utils::Outcome<RebootCacheClusterResult, Aws::Client::AWSError<ElastiCacheErrors>> RebootCacheClusterOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, Aws::Client::AWSError<ElastiCacheErrors>> RemoveTagsFromResourceOutcome;
        typedef Aws::Utils::Outcome<ResetCacheParameterGroupResult, Aws::Client::AWSError<ElastiCacheErrors>> ResetCacheParameterGroupOutcome;
        typedef Aws::Utils::Outcome<RevokeCacheSecurityGroupIngressResult, Aws::Client::AWSError<ElastiCacheErrors>> RevokeCacheSecurityGroupIngressOutcome;

        typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
        typedef std::future<AuthorizeCacheSecurityGroupIngressOutcome> AuthorizeCacheSecurityGroupIngressOutcomeCallable;
        typedef std::future<CopySnapshotOutcome> CopySnapshotOutcomeCallable;
        typedef std::future<CreateCacheClusterOutcome> CreateCacheClusterOutcomeCallable;
        typedef std::future<CreateCacheParameterGroupOutcome> CreateCacheParameterGroupOutcomeCallable;
        typedef std::future<CreateCacheSecurityGroupOutcome> CreateCacheSecurityGroupOutcomeCallable;
        typedef std::future<CreateCacheSubnetGroupOutcome> CreateCacheSubnetGroupOutcomeCallable;
        typedef std::future<CreateReplicationGroupOutcome> CreateReplicationGroupOutcomeCallable;
        typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
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
        typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
        typedef std::future<ListAllowedNodeTypeModificationsOutcome> ListAllowedNodeTypeModificationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ModifyCacheClusterOutcome> ModifyCacheClusterOutcomeCallable;
        typedef std::future<ModifyCacheParameterGroupOutcome> ModifyCacheParameterGroupOutcomeCallable;
        typedef std::future<ModifyCacheSubnetGroupOutcome> ModifyCacheSubnetGroupOutcomeCallable;
        typedef std::future<ModifyReplicationGroupOutcome> ModifyReplicationGroupOutcomeCallable;
        typedef std::future<PurchaseReservedCacheNodesOfferingOutcome> PurchaseReservedCacheNodesOfferingOutcomeCallable;
        typedef std::future<RebootCacheClusterOutcome> RebootCacheClusterOutcomeCallable;
        typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
        typedef std::future<ResetCacheParameterGroupOutcome> ResetCacheParameterGroupOutcomeCallable;
        typedef std::future<RevokeCacheSecurityGroupIngressOutcome> RevokeCacheSecurityGroupIngressOutcomeCallable;
} // namespace Model

  class ElastiCacheClient;

    typedef std::function<void(const ElastiCacheClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::AuthorizeCacheSecurityGroupIngressRequest&, const Model::AuthorizeCacheSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeCacheSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CopySnapshotRequest&, const Model::CopySnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopySnapshotResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateCacheClusterRequest&, const Model::CreateCacheClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCacheClusterResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateCacheParameterGroupRequest&, const Model::CreateCacheParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCacheParameterGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateCacheSecurityGroupRequest&, const Model::CreateCacheSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCacheSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateCacheSubnetGroupRequest&, const Model::CreateCacheSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCacheSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateReplicationGroupRequest&, const Model::CreateReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
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
    typedef std::function<void(const ElastiCacheClient*, const Model::DescribeSnapshotsRequest&, const Model::DescribeSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ListAllowedNodeTypeModificationsRequest&, const Model::ListAllowedNodeTypeModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAllowedNodeTypeModificationsResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyCacheClusterRequest&, const Model::ModifyCacheClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCacheClusterResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyCacheParameterGroupRequest&, const Model::ModifyCacheParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCacheParameterGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyCacheSubnetGroupRequest&, const Model::ModifyCacheSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCacheSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ModifyReplicationGroupRequest&, const Model::ModifyReplicationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReplicationGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::PurchaseReservedCacheNodesOfferingRequest&, const Model::PurchaseReservedCacheNodesOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseReservedCacheNodesOfferingResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::RebootCacheClusterRequest&, const Model::RebootCacheClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootCacheClusterResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::ResetCacheParameterGroupRequest&, const Model::ResetCacheParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetCacheParameterGroupResponseReceivedHandler;
    typedef std::function<void(const ElastiCacheClient*, const Model::RevokeCacheSecurityGroupIngressRequest&, const Model::RevokeCacheSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeCacheSecurityGroupIngressResponseReceivedHandler;

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
        ElastiCacheClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElastiCacheClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElastiCacheClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~ElastiCacheClient();

        /**
         * <p>Adds up to 10 cost allocation tags to the named resource. A cost allocation
         * tag is a key-value pair where the key and value are case-sensitive. You can use
         * cost allocation tags to categorize and track your AWS costs.</p> <p> When you
         * apply tags to your ElastiCache resources, AWS generates a cost allocation report
         * as a comma-separated value (CSV) file with your usage and costs aggregated by
         * your tags. You can apply tags that represent business categories (such as cost
         * centers, application names, or owners) to organize your costs across multiple
         * services. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Tagging.html">Using
         * Cost Allocation Tags in Amazon ElastiCache</a> in the <i>ElastiCache User
         * Guide</i>.</p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds up to 10 cost allocation tags to the named resource. A cost allocation
         * tag is a key-value pair where the key and value are case-sensitive. You can use
         * cost allocation tags to categorize and track your AWS costs.</p> <p> When you
         * apply tags to your ElastiCache resources, AWS generates a cost allocation report
         * as a comma-separated value (CSV) file with your usage and costs aggregated by
         * your tags. You can apply tags that represent business categories (such as cost
         * centers, application names, or owners) to organize your costs across multiple
         * services. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Tagging.html">Using
         * Cost Allocation Tags in Amazon ElastiCache</a> in the <i>ElastiCache User
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds up to 10 cost allocation tags to the named resource. A cost allocation
         * tag is a key-value pair where the key and value are case-sensitive. You can use
         * cost allocation tags to categorize and track your AWS costs.</p> <p> When you
         * apply tags to your ElastiCache resources, AWS generates a cost allocation report
         * as a comma-separated value (CSV) file with your usage and costs aggregated by
         * your tags. You can apply tags that represent business categories (such as cost
         * centers, application names, or owners) to organize your costs across multiple
         * services. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Tagging.html">Using
         * Cost Allocation Tags in Amazon ElastiCache</a> in the <i>ElastiCache User
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows network ingress to a cache security group. Applications using
         * ElastiCache must be running on Amazon EC2, and Amazon EC2 security groups are
         * used as the authorization mechanism.</p> <note> <p>You cannot authorize ingress
         * from an Amazon EC2 security group in one region to an ElastiCache cluster in
         * another region.</p> </note>
         */
        virtual Model::AuthorizeCacheSecurityGroupIngressOutcome AuthorizeCacheSecurityGroupIngress(const Model::AuthorizeCacheSecurityGroupIngressRequest& request) const;

        /**
         * <p>Allows network ingress to a cache security group. Applications using
         * ElastiCache must be running on Amazon EC2, and Amazon EC2 security groups are
         * used as the authorization mechanism.</p> <note> <p>You cannot authorize ingress
         * from an Amazon EC2 security group in one region to an ElastiCache cluster in
         * another region.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeCacheSecurityGroupIngressOutcomeCallable AuthorizeCacheSecurityGroupIngressCallable(const Model::AuthorizeCacheSecurityGroupIngressRequest& request) const;

        /**
         * <p>Allows network ingress to a cache security group. Applications using
         * ElastiCache must be running on Amazon EC2, and Amazon EC2 security groups are
         * used as the authorization mechanism.</p> <note> <p>You cannot authorize ingress
         * from an Amazon EC2 security group in one region to an ElastiCache cluster in
         * another region.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeCacheSecurityGroupIngressAsync(const Model::AuthorizeCacheSecurityGroupIngressRequest& request, const AuthorizeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Makes a copy of an existing snapshot.</p> <note> <p>This operation is valid
         * for Redis only.</p> </note> <important> <p>Users or groups that have permissions
         * to use the <code>CopySnapshot</code> operation can create their own Amazon S3
         * buckets and copy snapshots to it. To control access to your snapshots, use an
         * IAM policy to control who has the ability to use the <code>CopySnapshot</code>
         * operation. For more information about using IAM to control the use of
         * ElastiCache operations, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html">Exporting
         * Snapshots</a> and <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/IAM.html">Authentication
         * &amp; Access Control</a>.</p> </important> <p>You could receive the following
         * error messages.</p> <p class="title"> <b>Error Messages</b> </p> <ul> <li> <p>
         * <b>Error Message:</b> The S3 bucket %s is outside of the region.</p> <p>
         * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The S3 bucket %s does not exist.</p> <p>
         * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The S3 bucket %s is not owned by the authenticated
         * user.</p> <p> <b>Solution:</b> Create an Amazon S3 bucket in the same region as
         * your snapshot. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
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
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> <li> <p> <b>Error Message: </b> ElastiCache has not been
         * granted WRITE permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add
         * Upload/Delete permissions on the bucket. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> <li> <p> <b>Error Message: </b> ElastiCache has not been
         * granted READ_ACP permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add
         * View Permissions on the bucket. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> </ul>
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
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html">Exporting
         * Snapshots</a> and <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/IAM.html">Authentication
         * &amp; Access Control</a>.</p> </important> <p>You could receive the following
         * error messages.</p> <p class="title"> <b>Error Messages</b> </p> <ul> <li> <p>
         * <b>Error Message:</b> The S3 bucket %s is outside of the region.</p> <p>
         * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The S3 bucket %s does not exist.</p> <p>
         * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The S3 bucket %s is not owned by the authenticated
         * user.</p> <p> <b>Solution:</b> Create an Amazon S3 bucket in the same region as
         * your snapshot. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
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
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> <li> <p> <b>Error Message: </b> ElastiCache has not been
         * granted WRITE permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add
         * Upload/Delete permissions on the bucket. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> <li> <p> <b>Error Message: </b> ElastiCache has not been
         * granted READ_ACP permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add
         * View Permissions on the bucket. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> </ul>
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
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html">Exporting
         * Snapshots</a> and <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/IAM.html">Authentication
         * &amp; Access Control</a>.</p> </important> <p>You could receive the following
         * error messages.</p> <p class="title"> <b>Error Messages</b> </p> <ul> <li> <p>
         * <b>Error Message:</b> The S3 bucket %s is outside of the region.</p> <p>
         * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The S3 bucket %s does not exist.</p> <p>
         * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
         * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User Guide.</p> </li> <li>
         * <p> <b>Error Message:</b> The S3 bucket %s is not owned by the authenticated
         * user.</p> <p> <b>Solution:</b> Create an Amazon S3 bucket in the same region as
         * your snapshot. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
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
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> <li> <p> <b>Error Message: </b> ElastiCache has not been
         * granted WRITE permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add
         * Upload/Delete permissions on the bucket. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> <li> <p> <b>Error Message: </b> ElastiCache has not been
         * granted READ_ACP permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add
         * View Permissions on the bucket. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
         * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
         * Guide.</p> </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopySnapshotAsync(const Model::CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a cache cluster. All nodes in the cache cluster run the same
         * protocol-compliant cache engine software, either Memcached or Redis.</p>
         * <important> <p>Due to current limitations on Redis (cluster mode disabled), this
         * operation or parameter is not supported on Redis (cluster mode enabled)
         * replication groups.</p> </important>
         */
        virtual Model::CreateCacheClusterOutcome CreateCacheCluster(const Model::CreateCacheClusterRequest& request) const;

        /**
         * <p>Creates a cache cluster. All nodes in the cache cluster run the same
         * protocol-compliant cache engine software, either Memcached or Redis.</p>
         * <important> <p>Due to current limitations on Redis (cluster mode disabled), this
         * operation or parameter is not supported on Redis (cluster mode enabled)
         * replication groups.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCacheClusterOutcomeCallable CreateCacheClusterCallable(const Model::CreateCacheClusterRequest& request) const;

        /**
         * <p>Creates a cache cluster. All nodes in the cache cluster run the same
         * protocol-compliant cache engine software, either Memcached or Redis.</p>
         * <important> <p>Due to current limitations on Redis (cluster mode disabled), this
         * operation or parameter is not supported on Redis (cluster mode enabled)
         * replication groups.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCacheClusterAsync(const Model::CreateCacheClusterRequest& request, const CreateCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new cache parameter group. A cache parameter group is a collection
         * of parameters that you apply to all of the nodes in a cache cluster.</p>
         */
        virtual Model::CreateCacheParameterGroupOutcome CreateCacheParameterGroup(const Model::CreateCacheParameterGroupRequest& request) const;

        /**
         * <p>Creates a new cache parameter group. A cache parameter group is a collection
         * of parameters that you apply to all of the nodes in a cache cluster.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCacheParameterGroupOutcomeCallable CreateCacheParameterGroupCallable(const Model::CreateCacheParameterGroupRequest& request) const;

        /**
         * <p>Creates a new cache parameter group. A cache parameter group is a collection
         * of parameters that you apply to all of the nodes in a cache cluster.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCacheParameterGroupAsync(const Model::CreateCacheParameterGroupRequest& request, const CreateCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new cache security group. Use a cache security group to control
         * access to one or more cache clusters.</p> <p>Cache security groups are only used
         * when you are creating a cache cluster outside of an Amazon Virtual Private Cloud
         * (Amazon VPC). If you are creating a cache cluster inside of a VPC, use a cache
         * subnet group instead. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_CreateCacheSubnetGroup.html">CreateCacheSubnetGroup</a>.</p>
         */
        virtual Model::CreateCacheSecurityGroupOutcome CreateCacheSecurityGroup(const Model::CreateCacheSecurityGroupRequest& request) const;

        /**
         * <p>Creates a new cache security group. Use a cache security group to control
         * access to one or more cache clusters.</p> <p>Cache security groups are only used
         * when you are creating a cache cluster outside of an Amazon Virtual Private Cloud
         * (Amazon VPC). If you are creating a cache cluster inside of a VPC, use a cache
         * subnet group instead. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_CreateCacheSubnetGroup.html">CreateCacheSubnetGroup</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCacheSecurityGroupOutcomeCallable CreateCacheSecurityGroupCallable(const Model::CreateCacheSecurityGroupRequest& request) const;

        /**
         * <p>Creates a new cache security group. Use a cache security group to control
         * access to one or more cache clusters.</p> <p>Cache security groups are only used
         * when you are creating a cache cluster outside of an Amazon Virtual Private Cloud
         * (Amazon VPC). If you are creating a cache cluster inside of a VPC, use a cache
         * subnet group instead. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_CreateCacheSubnetGroup.html">CreateCacheSubnetGroup</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCacheSecurityGroupAsync(const Model::CreateCacheSecurityGroupRequest& request, const CreateCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new cache subnet group.</p> <p>Use this parameter only when you are
         * creating a cluster in an Amazon Virtual Private Cloud (Amazon VPC).</p>
         */
        virtual Model::CreateCacheSubnetGroupOutcome CreateCacheSubnetGroup(const Model::CreateCacheSubnetGroupRequest& request) const;

        /**
         * <p>Creates a new cache subnet group.</p> <p>Use this parameter only when you are
         * creating a cluster in an Amazon Virtual Private Cloud (Amazon VPC).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCacheSubnetGroupOutcomeCallable CreateCacheSubnetGroupCallable(const Model::CreateCacheSubnetGroupRequest& request) const;

        /**
         * <p>Creates a new cache subnet group.</p> <p>Use this parameter only when you are
         * creating a cluster in an Amazon Virtual Private Cloud (Amazon VPC).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCacheSubnetGroupAsync(const Model::CreateCacheSubnetGroupRequest& request, const CreateCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Redis (cluster mode disabled) or a Redis (cluster mode enabled)
         * replication group.</p> <p>A Redis (cluster mode disabled) replication group is a
         * collection of cache clusters, where one of the cache clusters is a read/write
         * primary and the others are read-only replicas. Writes to the primary are
         * asynchronously propagated to the replicas.</p> <p>A Redis (cluster mode enabled)
         * replication group is a collection of 1 to 15 node groups (shards). Each node
         * group (shard) has one read/write primary node and up to 5 read-only replica
         * nodes. Writes to the primary are asynchronously propagated to the replicas.
         * Redis (cluster mode enabled) replication groups partition the data across node
         * groups (shards).</p> <p>When a Redis (cluster mode disabled) replication group
         * has been successfully created, you can add one or more read replicas to it, up
         * to a total of 5 read replicas. You cannot alter a Redis (cluster mode enabled)
         * replication group after it has been created.</p> <note> <p>This operation is
         * valid for Redis only.</p> </note>
         */
        virtual Model::CreateReplicationGroupOutcome CreateReplicationGroup(const Model::CreateReplicationGroupRequest& request) const;

        /**
         * <p>Creates a Redis (cluster mode disabled) or a Redis (cluster mode enabled)
         * replication group.</p> <p>A Redis (cluster mode disabled) replication group is a
         * collection of cache clusters, where one of the cache clusters is a read/write
         * primary and the others are read-only replicas. Writes to the primary are
         * asynchronously propagated to the replicas.</p> <p>A Redis (cluster mode enabled)
         * replication group is a collection of 1 to 15 node groups (shards). Each node
         * group (shard) has one read/write primary node and up to 5 read-only replica
         * nodes. Writes to the primary are asynchronously propagated to the replicas.
         * Redis (cluster mode enabled) replication groups partition the data across node
         * groups (shards).</p> <p>When a Redis (cluster mode disabled) replication group
         * has been successfully created, you can add one or more read replicas to it, up
         * to a total of 5 read replicas. You cannot alter a Redis (cluster mode enabled)
         * replication group after it has been created.</p> <note> <p>This operation is
         * valid for Redis only.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationGroupOutcomeCallable CreateReplicationGroupCallable(const Model::CreateReplicationGroupRequest& request) const;

        /**
         * <p>Creates a Redis (cluster mode disabled) or a Redis (cluster mode enabled)
         * replication group.</p> <p>A Redis (cluster mode disabled) replication group is a
         * collection of cache clusters, where one of the cache clusters is a read/write
         * primary and the others are read-only replicas. Writes to the primary are
         * asynchronously propagated to the replicas.</p> <p>A Redis (cluster mode enabled)
         * replication group is a collection of 1 to 15 node groups (shards). Each node
         * group (shard) has one read/write primary node and up to 5 read-only replica
         * nodes. Writes to the primary are asynchronously propagated to the replicas.
         * Redis (cluster mode enabled) replication groups partition the data across node
         * groups (shards).</p> <p>When a Redis (cluster mode disabled) replication group
         * has been successfully created, you can add one or more read replicas to it, up
         * to a total of 5 read replicas. You cannot alter a Redis (cluster mode enabled)
         * replication group after it has been created.</p> <note> <p>This operation is
         * valid for Redis only.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationGroupAsync(const Model::CreateReplicationGroupRequest& request, const CreateReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a copy of an entire cache cluster or replication group at a specific
         * moment in time.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * <p>Creates a copy of an entire cache cluster or replication group at a specific
         * moment in time.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request) const;

        /**
         * <p>Creates a copy of an entire cache cluster or replication group at a specific
         * moment in time.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a previously provisioned cache cluster.
         * <code>DeleteCacheCluster</code> deletes all associated cache nodes, node
         * endpoints and the cache cluster itself. When you receive a successful response
         * from this operation, Amazon ElastiCache immediately begins deleting the cache
         * cluster; you cannot cancel or revert this operation.</p> <p>This operation
         * cannot be used to delete a cache cluster that is the last read replica of a
         * replication group or node group (shard) that has Multi-AZ mode enabled or a
         * cache cluster from a Redis (cluster mode enabled) replication group.</p>
         * <important> <p>Due to current limitations on Redis (cluster mode disabled), this
         * operation or parameter is not supported on Redis (cluster mode enabled)
         * replication groups.</p> </important>
         */
        virtual Model::DeleteCacheClusterOutcome DeleteCacheCluster(const Model::DeleteCacheClusterRequest& request) const;

        /**
         * <p>Deletes a previously provisioned cache cluster.
         * <code>DeleteCacheCluster</code> deletes all associated cache nodes, node
         * endpoints and the cache cluster itself. When you receive a successful response
         * from this operation, Amazon ElastiCache immediately begins deleting the cache
         * cluster; you cannot cancel or revert this operation.</p> <p>This operation
         * cannot be used to delete a cache cluster that is the last read replica of a
         * replication group or node group (shard) that has Multi-AZ mode enabled or a
         * cache cluster from a Redis (cluster mode enabled) replication group.</p>
         * <important> <p>Due to current limitations on Redis (cluster mode disabled), this
         * operation or parameter is not supported on Redis (cluster mode enabled)
         * replication groups.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCacheClusterOutcomeCallable DeleteCacheClusterCallable(const Model::DeleteCacheClusterRequest& request) const;

        /**
         * <p>Deletes a previously provisioned cache cluster.
         * <code>DeleteCacheCluster</code> deletes all associated cache nodes, node
         * endpoints and the cache cluster itself. When you receive a successful response
         * from this operation, Amazon ElastiCache immediately begins deleting the cache
         * cluster; you cannot cancel or revert this operation.</p> <p>This operation
         * cannot be used to delete a cache cluster that is the last read replica of a
         * replication group or node group (shard) that has Multi-AZ mode enabled or a
         * cache cluster from a Redis (cluster mode enabled) replication group.</p>
         * <important> <p>Due to current limitations on Redis (cluster mode disabled), this
         * operation or parameter is not supported on Redis (cluster mode enabled)
         * replication groups.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCacheClusterAsync(const Model::DeleteCacheClusterRequest& request, const DeleteCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified cache parameter group. You cannot delete a cache
         * parameter group if it is associated with any cache clusters.</p>
         */
        virtual Model::DeleteCacheParameterGroupOutcome DeleteCacheParameterGroup(const Model::DeleteCacheParameterGroupRequest& request) const;

        /**
         * <p>Deletes the specified cache parameter group. You cannot delete a cache
         * parameter group if it is associated with any cache clusters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCacheParameterGroupOutcomeCallable DeleteCacheParameterGroupCallable(const Model::DeleteCacheParameterGroupRequest& request) const;

        /**
         * <p>Deletes the specified cache parameter group. You cannot delete a cache
         * parameter group if it is associated with any cache clusters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCacheParameterGroupAsync(const Model::DeleteCacheParameterGroupRequest& request, const DeleteCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a cache security group.</p> <note> <p>You cannot delete a cache
         * security group if it is associated with any cache clusters.</p> </note>
         */
        virtual Model::DeleteCacheSecurityGroupOutcome DeleteCacheSecurityGroup(const Model::DeleteCacheSecurityGroupRequest& request) const;

        /**
         * <p>Deletes a cache security group.</p> <note> <p>You cannot delete a cache
         * security group if it is associated with any cache clusters.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCacheSecurityGroupOutcomeCallable DeleteCacheSecurityGroupCallable(const Model::DeleteCacheSecurityGroupRequest& request) const;

        /**
         * <p>Deletes a cache security group.</p> <note> <p>You cannot delete a cache
         * security group if it is associated with any cache clusters.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCacheSecurityGroupAsync(const Model::DeleteCacheSecurityGroupRequest& request, const DeleteCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a cache subnet group.</p> <note> <p>You cannot delete a cache subnet
         * group if it is associated with any cache clusters.</p> </note>
         */
        virtual Model::DeleteCacheSubnetGroupOutcome DeleteCacheSubnetGroup(const Model::DeleteCacheSubnetGroupRequest& request) const;

        /**
         * <p>Deletes a cache subnet group.</p> <note> <p>You cannot delete a cache subnet
         * group if it is associated with any cache clusters.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCacheSubnetGroupOutcomeCallable DeleteCacheSubnetGroupCallable(const Model::DeleteCacheSubnetGroupRequest& request) const;

        /**
         * <p>Deletes a cache subnet group.</p> <note> <p>You cannot delete a cache subnet
         * group if it is associated with any cache clusters.</p> </note>
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
         * <p>This operation is valid for Redis only.</p> </note>
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
         * <p>This operation is valid for Redis only.</p> </note>
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
         * <p>This operation is valid for Redis only.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationGroupAsync(const Model::DeleteReplicationGroupRequest& request, const DeleteReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing snapshot. When you receive a successful response from
         * this operation, ElastiCache immediately begins deleting the snapshot; you cannot
         * cancel or revert this operation.</p> <note> <p>This operation is valid for Redis
         * only.</p> </note>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;

        /**
         * <p>Deletes an existing snapshot. When you receive a successful response from
         * this operation, ElastiCache immediately begins deleting the snapshot; you cannot
         * cancel or revert this operation.</p> <note> <p>This operation is valid for Redis
         * only.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;

        /**
         * <p>Deletes an existing snapshot. When you receive a successful response from
         * this operation, ElastiCache immediately begins deleting the snapshot; you cannot
         * cancel or revert this operation.</p> <note> <p>This operation is valid for Redis
         * only.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all provisioned cache clusters if no cache cluster
         * identifier is specified, or about a specific cache cluster if a cache cluster
         * identifier is supplied.</p> <p>By default, abbreviated information about the
         * cache clusters are returned. You can use the optional <code>ShowDetails</code>
         * flag to retrieve detailed information about the cache nodes associated with the
         * cache clusters. These details include the DNS address and port for the cache
         * node endpoint.</p> <p>If the cluster is in the CREATING state, only
         * cluster-level information is displayed until all of the nodes are successfully
         * provisioned.</p> <p>If the cluster is in the DELETING state, only cluster-level
         * information is displayed.</p> <p>If cache nodes are currently being added to the
         * cache cluster, node endpoint information and creation time for the additional
         * nodes are not displayed until they are completely provisioned. When the cache
         * cluster state is <code>available</code>, the cluster is ready for use.</p> <p>If
         * cache nodes are currently being removed from the cache cluster, no endpoint
         * information for the removed nodes is displayed.</p>
         */
        virtual Model::DescribeCacheClustersOutcome DescribeCacheClusters(const Model::DescribeCacheClustersRequest& request) const;

        /**
         * <p>Returns information about all provisioned cache clusters if no cache cluster
         * identifier is specified, or about a specific cache cluster if a cache cluster
         * identifier is supplied.</p> <p>By default, abbreviated information about the
         * cache clusters are returned. You can use the optional <code>ShowDetails</code>
         * flag to retrieve detailed information about the cache nodes associated with the
         * cache clusters. These details include the DNS address and port for the cache
         * node endpoint.</p> <p>If the cluster is in the CREATING state, only
         * cluster-level information is displayed until all of the nodes are successfully
         * provisioned.</p> <p>If the cluster is in the DELETING state, only cluster-level
         * information is displayed.</p> <p>If cache nodes are currently being added to the
         * cache cluster, node endpoint information and creation time for the additional
         * nodes are not displayed until they are completely provisioned. When the cache
         * cluster state is <code>available</code>, the cluster is ready for use.</p> <p>If
         * cache nodes are currently being removed from the cache cluster, no endpoint
         * information for the removed nodes is displayed.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCacheClustersOutcomeCallable DescribeCacheClustersCallable(const Model::DescribeCacheClustersRequest& request) const;

        /**
         * <p>Returns information about all provisioned cache clusters if no cache cluster
         * identifier is specified, or about a specific cache cluster if a cache cluster
         * identifier is supplied.</p> <p>By default, abbreviated information about the
         * cache clusters are returned. You can use the optional <code>ShowDetails</code>
         * flag to retrieve detailed information about the cache nodes associated with the
         * cache clusters. These details include the DNS address and port for the cache
         * node endpoint.</p> <p>If the cluster is in the CREATING state, only
         * cluster-level information is displayed until all of the nodes are successfully
         * provisioned.</p> <p>If the cluster is in the DELETING state, only cluster-level
         * information is displayed.</p> <p>If cache nodes are currently being added to the
         * cache cluster, node endpoint information and creation time for the additional
         * nodes are not displayed until they are completely provisioned. When the cache
         * cluster state is <code>available</code>, the cluster is ready for use.</p> <p>If
         * cache nodes are currently being removed from the cache cluster, no endpoint
         * information for the removed nodes is displayed.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheClustersAsync(const Model::DescribeCacheClustersRequest& request, const DescribeCacheClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the available cache engines and their versions.</p>
         */
        virtual Model::DescribeCacheEngineVersionsOutcome DescribeCacheEngineVersions(const Model::DescribeCacheEngineVersionsRequest& request) const;

        /**
         * <p>Returns a list of the available cache engines and their versions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCacheEngineVersionsOutcomeCallable DescribeCacheEngineVersionsCallable(const Model::DescribeCacheEngineVersionsRequest& request) const;

        /**
         * <p>Returns a list of the available cache engines and their versions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheEngineVersionsAsync(const Model::DescribeCacheEngineVersionsRequest& request, const DescribeCacheEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of cache parameter group descriptions. If a cache parameter
         * group name is specified, the list contains only the descriptions for that
         * group.</p>
         */
        virtual Model::DescribeCacheParameterGroupsOutcome DescribeCacheParameterGroups(const Model::DescribeCacheParameterGroupsRequest& request) const;

        /**
         * <p>Returns a list of cache parameter group descriptions. If a cache parameter
         * group name is specified, the list contains only the descriptions for that
         * group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCacheParameterGroupsOutcomeCallable DescribeCacheParameterGroupsCallable(const Model::DescribeCacheParameterGroupsRequest& request) const;

        /**
         * <p>Returns a list of cache parameter group descriptions. If a cache parameter
         * group name is specified, the list contains only the descriptions for that
         * group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheParameterGroupsAsync(const Model::DescribeCacheParameterGroupsRequest& request, const DescribeCacheParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the detailed parameter list for a particular cache parameter
         * group.</p>
         */
        virtual Model::DescribeCacheParametersOutcome DescribeCacheParameters(const Model::DescribeCacheParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular cache parameter
         * group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCacheParametersOutcomeCallable DescribeCacheParametersCallable(const Model::DescribeCacheParametersRequest& request) const;

        /**
         * <p>Returns the detailed parameter list for a particular cache parameter
         * group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheParametersAsync(const Model::DescribeCacheParametersRequest& request, const DescribeCacheParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of cache security group descriptions. If a cache security
         * group name is specified, the list contains only the description of that
         * group.</p>
         */
        virtual Model::DescribeCacheSecurityGroupsOutcome DescribeCacheSecurityGroups(const Model::DescribeCacheSecurityGroupsRequest& request) const;

        /**
         * <p>Returns a list of cache security group descriptions. If a cache security
         * group name is specified, the list contains only the description of that
         * group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCacheSecurityGroupsOutcomeCallable DescribeCacheSecurityGroupsCallable(const Model::DescribeCacheSecurityGroupsRequest& request) const;

        /**
         * <p>Returns a list of cache security group descriptions. If a cache security
         * group name is specified, the list contains only the description of that
         * group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheSecurityGroupsAsync(const Model::DescribeCacheSecurityGroupsRequest& request, const DescribeCacheSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of cache subnet group descriptions. If a subnet group name is
         * specified, the list contains only the description of that group.</p>
         */
        virtual Model::DescribeCacheSubnetGroupsOutcome DescribeCacheSubnetGroups(const Model::DescribeCacheSubnetGroupsRequest& request) const;

        /**
         * <p>Returns a list of cache subnet group descriptions. If a subnet group name is
         * specified, the list contains only the description of that group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCacheSubnetGroupsOutcomeCallable DescribeCacheSubnetGroupsCallable(const Model::DescribeCacheSubnetGroupsRequest& request) const;

        /**
         * <p>Returns a list of cache subnet group descriptions. If a subnet group name is
         * specified, the list contains only the description of that group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheSubnetGroupsAsync(const Model::DescribeCacheSubnetGroupsRequest& request, const DescribeCacheSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * cache engine.</p>
         */
        virtual Model::DescribeEngineDefaultParametersOutcome DescribeEngineDefaultParameters(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * cache engine.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEngineDefaultParametersOutcomeCallable DescribeEngineDefaultParametersCallable(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * cache engine.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEngineDefaultParametersAsync(const Model::DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns events related to cache clusters, cache security groups, and cache
         * parameter groups. You can obtain events specific to a particular cache cluster,
         * cache security group, or cache parameter group by providing the name as a
         * parameter.</p> <p>By default, only the events occurring within the last hour are
         * returned; however, you can retrieve up to 14 days' worth of events if
         * necessary.</p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns events related to cache clusters, cache security groups, and cache
         * parameter groups. You can obtain events specific to a particular cache cluster,
         * cache security group, or cache parameter group by providing the name as a
         * parameter.</p> <p>By default, only the events occurring within the last hour are
         * returned; however, you can retrieve up to 14 days' worth of events if
         * necessary.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns events related to cache clusters, cache security groups, and cache
         * parameter groups. You can obtain events specific to a particular cache cluster,
         * cache security group, or cache parameter group by providing the name as a
         * parameter.</p> <p>By default, only the events occurring within the last hour are
         * returned; however, you can retrieve up to 14 days' worth of events if
         * necessary.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a particular replication group. If no identifier is
         * specified, <code>DescribeReplicationGroups</code> returns information about all
         * replication groups.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note>
         */
        virtual Model::DescribeReplicationGroupsOutcome DescribeReplicationGroups(const Model::DescribeReplicationGroupsRequest& request) const;

        /**
         * <p>Returns information about a particular replication group. If no identifier is
         * specified, <code>DescribeReplicationGroups</code> returns information about all
         * replication groups.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationGroupsOutcomeCallable DescribeReplicationGroupsCallable(const Model::DescribeReplicationGroupsRequest& request) const;

        /**
         * <p>Returns information about a particular replication group. If no identifier is
         * specified, <code>DescribeReplicationGroups</code> returns information about all
         * replication groups.</p> <note> <p>This operation is valid for Redis only.</p>
         * </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationGroupsAsync(const Model::DescribeReplicationGroupsRequest& request, const DescribeReplicationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about reserved cache nodes for this account, or about a
         * specified reserved cache node.</p>
         */
        virtual Model::DescribeReservedCacheNodesOutcome DescribeReservedCacheNodes(const Model::DescribeReservedCacheNodesRequest& request) const;

        /**
         * <p>Returns information about reserved cache nodes for this account, or about a
         * specified reserved cache node.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedCacheNodesOutcomeCallable DescribeReservedCacheNodesCallable(const Model::DescribeReservedCacheNodesRequest& request) const;

        /**
         * <p>Returns information about reserved cache nodes for this account, or about a
         * specified reserved cache node.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedCacheNodesAsync(const Model::DescribeReservedCacheNodesRequest& request, const DescribeReservedCacheNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists available reserved cache node offerings.</p>
         */
        virtual Model::DescribeReservedCacheNodesOfferingsOutcome DescribeReservedCacheNodesOfferings(const Model::DescribeReservedCacheNodesOfferingsRequest& request) const;

        /**
         * <p>Lists available reserved cache node offerings.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedCacheNodesOfferingsOutcomeCallable DescribeReservedCacheNodesOfferingsCallable(const Model::DescribeReservedCacheNodesOfferingsRequest& request) const;

        /**
         * <p>Lists available reserved cache node offerings.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedCacheNodesOfferingsAsync(const Model::DescribeReservedCacheNodesOfferingsRequest& request, const DescribeReservedCacheNodesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about cache cluster or replication group snapshots. By
         * default, <code>DescribeSnapshots</code> lists all of your snapshots; it can
         * optionally describe a single snapshot, or just the snapshots associated with a
         * particular cache cluster.</p> <note> <p>This operation is valid for Redis
         * only.</p> </note>
         */
        virtual Model::DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * <p>Returns information about cache cluster or replication group snapshots. By
         * default, <code>DescribeSnapshots</code> lists all of your snapshots; it can
         * optionally describe a single snapshot, or just the snapshots associated with a
         * particular cache cluster.</p> <note> <p>This operation is valid for Redis
         * only.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * <p>Returns information about cache cluster or replication group snapshots. By
         * default, <code>DescribeSnapshots</code> lists all of your snapshots; it can
         * optionally describe a single snapshot, or just the snapshots associated with a
         * particular cache cluster.</p> <note> <p>This operation is valid for Redis
         * only.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all available node types that you can scale your Redis cluster's or
         * replication group's current node type up to.</p> <p>When you use the
         * <code>ModifyCacheCluster</code> or <code>ModifyReplicationGroup</code>
         * operations to scale up your cluster or replication group, the value of the
         * <code>CacheNodeType</code> parameter must be one of the node types returned by
         * this operation.</p>
         */
        virtual Model::ListAllowedNodeTypeModificationsOutcome ListAllowedNodeTypeModifications(const Model::ListAllowedNodeTypeModificationsRequest& request) const;

        /**
         * <p>Lists all available node types that you can scale your Redis cluster's or
         * replication group's current node type up to.</p> <p>When you use the
         * <code>ModifyCacheCluster</code> or <code>ModifyReplicationGroup</code>
         * operations to scale up your cluster or replication group, the value of the
         * <code>CacheNodeType</code> parameter must be one of the node types returned by
         * this operation.</p>
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
         * this operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAllowedNodeTypeModificationsAsync(const Model::ListAllowedNodeTypeModificationsRequest& request, const ListAllowedNodeTypeModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all cost allocation tags currently on the named resource. A <code>cost
         * allocation tag</code> is a key-value pair where the key is case-sensitive and
         * the value is optional. You can use cost allocation tags to categorize and track
         * your AWS costs.</p> <p>You can have a maximum of 10 cost allocation tags on an
         * ElastiCache resource. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/BestPractices.html">Using
         * Cost Allocation Tags in Amazon ElastiCache</a>.</p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all cost allocation tags currently on the named resource. A <code>cost
         * allocation tag</code> is a key-value pair where the key is case-sensitive and
         * the value is optional. You can use cost allocation tags to categorize and track
         * your AWS costs.</p> <p>You can have a maximum of 10 cost allocation tags on an
         * ElastiCache resource. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/BestPractices.html">Using
         * Cost Allocation Tags in Amazon ElastiCache</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all cost allocation tags currently on the named resource. A <code>cost
         * allocation tag</code> is a key-value pair where the key is case-sensitive and
         * the value is optional. You can use cost allocation tags to categorize and track
         * your AWS costs.</p> <p>You can have a maximum of 10 cost allocation tags on an
         * ElastiCache resource. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/BestPractices.html">Using
         * Cost Allocation Tags in Amazon ElastiCache</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the settings for a cache cluster. You can use this operation to
         * change one or more cluster configuration parameters by specifying the parameters
         * and the new values.</p>
         */
        virtual Model::ModifyCacheClusterOutcome ModifyCacheCluster(const Model::ModifyCacheClusterRequest& request) const;

        /**
         * <p>Modifies the settings for a cache cluster. You can use this operation to
         * change one or more cluster configuration parameters by specifying the parameters
         * and the new values.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyCacheClusterOutcomeCallable ModifyCacheClusterCallable(const Model::ModifyCacheClusterRequest& request) const;

        /**
         * <p>Modifies the settings for a cache cluster. You can use this operation to
         * change one or more cluster configuration parameters by specifying the parameters
         * and the new values.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCacheClusterAsync(const Model::ModifyCacheClusterRequest& request, const ModifyCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the parameters of a cache parameter group. You can modify up to 20
         * parameters in a single request by submitting a list parameter name and value
         * pairs.</p>
         */
        virtual Model::ModifyCacheParameterGroupOutcome ModifyCacheParameterGroup(const Model::ModifyCacheParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a cache parameter group. You can modify up to 20
         * parameters in a single request by submitting a list parameter name and value
         * pairs.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyCacheParameterGroupOutcomeCallable ModifyCacheParameterGroupCallable(const Model::ModifyCacheParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a cache parameter group. You can modify up to 20
         * parameters in a single request by submitting a list parameter name and value
         * pairs.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCacheParameterGroupAsync(const Model::ModifyCacheParameterGroupRequest& request, const ModifyCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing cache subnet group.</p>
         */
        virtual Model::ModifyCacheSubnetGroupOutcome ModifyCacheSubnetGroup(const Model::ModifyCacheSubnetGroupRequest& request) const;

        /**
         * <p>Modifies an existing cache subnet group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyCacheSubnetGroupOutcomeCallable ModifyCacheSubnetGroupCallable(const Model::ModifyCacheSubnetGroupRequest& request) const;

        /**
         * <p>Modifies an existing cache subnet group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCacheSubnetGroupAsync(const Model::ModifyCacheSubnetGroupRequest& request, const ModifyCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the settings for a replication group.</p> <important> <p>Due to
         * current limitations on Redis (cluster mode disabled), this operation or
         * parameter is not supported on Redis (cluster mode enabled) replication
         * groups.</p> </important> <note> <p>This operation is valid for Redis only.</p>
         * </note>
         */
        virtual Model::ModifyReplicationGroupOutcome ModifyReplicationGroup(const Model::ModifyReplicationGroupRequest& request) const;

        /**
         * <p>Modifies the settings for a replication group.</p> <important> <p>Due to
         * current limitations on Redis (cluster mode disabled), this operation or
         * parameter is not supported on Redis (cluster mode enabled) replication
         * groups.</p> </important> <note> <p>This operation is valid for Redis only.</p>
         * </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyReplicationGroupOutcomeCallable ModifyReplicationGroupCallable(const Model::ModifyReplicationGroupRequest& request) const;

        /**
         * <p>Modifies the settings for a replication group.</p> <important> <p>Due to
         * current limitations on Redis (cluster mode disabled), this operation or
         * parameter is not supported on Redis (cluster mode enabled) replication
         * groups.</p> </important> <note> <p>This operation is valid for Redis only.</p>
         * </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyReplicationGroupAsync(const Model::ModifyReplicationGroupRequest& request, const ModifyReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows you to purchase a reserved cache node offering.</p>
         */
        virtual Model::PurchaseReservedCacheNodesOfferingOutcome PurchaseReservedCacheNodesOffering(const Model::PurchaseReservedCacheNodesOfferingRequest& request) const;

        /**
         * <p>Allows you to purchase a reserved cache node offering.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseReservedCacheNodesOfferingOutcomeCallable PurchaseReservedCacheNodesOfferingCallable(const Model::PurchaseReservedCacheNodesOfferingRequest& request) const;

        /**
         * <p>Allows you to purchase a reserved cache node offering.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseReservedCacheNodesOfferingAsync(const Model::PurchaseReservedCacheNodesOfferingRequest& request, const PurchaseReservedCacheNodesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reboots some, or all, of the cache nodes within a provisioned cache cluster.
         * This operation applies any modified cache parameter groups to the cache cluster.
         * The reboot operation takes place as soon as possible, and results in a momentary
         * outage to the cache cluster. During the reboot, the cache cluster status is set
         * to REBOOTING.</p> <p>The reboot causes the contents of the cache (for each cache
         * node being rebooted) to be lost.</p> <p>When the reboot is complete, a cache
         * cluster event is created.</p>
         */
        virtual Model::RebootCacheClusterOutcome RebootCacheCluster(const Model::RebootCacheClusterRequest& request) const;

        /**
         * <p>Reboots some, or all, of the cache nodes within a provisioned cache cluster.
         * This operation applies any modified cache parameter groups to the cache cluster.
         * The reboot operation takes place as soon as possible, and results in a momentary
         * outage to the cache cluster. During the reboot, the cache cluster status is set
         * to REBOOTING.</p> <p>The reboot causes the contents of the cache (for each cache
         * node being rebooted) to be lost.</p> <p>When the reboot is complete, a cache
         * cluster event is created.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootCacheClusterOutcomeCallable RebootCacheClusterCallable(const Model::RebootCacheClusterRequest& request) const;

        /**
         * <p>Reboots some, or all, of the cache nodes within a provisioned cache cluster.
         * This operation applies any modified cache parameter groups to the cache cluster.
         * The reboot operation takes place as soon as possible, and results in a momentary
         * outage to the cache cluster. During the reboot, the cache cluster status is set
         * to REBOOTING.</p> <p>The reboot causes the contents of the cache (for each cache
         * node being rebooted) to be lost.</p> <p>When the reboot is complete, a cache
         * cluster event is created.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootCacheClusterAsync(const Model::RebootCacheClusterRequest& request, const RebootCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the tags identified by the <code>TagKeys</code> list from the named
         * resource.</p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes the tags identified by the <code>TagKeys</code> list from the named
         * resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes the tags identified by the <code>TagKeys</code> list from the named
         * resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the parameters of a cache parameter group to the engine or system
         * default value. You can reset specific parameters by submitting a list of
         * parameter names. To reset the entire cache parameter group, specify the
         * <code>ResetAllParameters</code> and <code>CacheParameterGroupName</code>
         * parameters.</p>
         */
        virtual Model::ResetCacheParameterGroupOutcome ResetCacheParameterGroup(const Model::ResetCacheParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a cache parameter group to the engine or system
         * default value. You can reset specific parameters by submitting a list of
         * parameter names. To reset the entire cache parameter group, specify the
         * <code>ResetAllParameters</code> and <code>CacheParameterGroupName</code>
         * parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetCacheParameterGroupOutcomeCallable ResetCacheParameterGroupCallable(const Model::ResetCacheParameterGroupRequest& request) const;

        /**
         * <p>Modifies the parameters of a cache parameter group to the engine or system
         * default value. You can reset specific parameters by submitting a list of
         * parameter names. To reset the entire cache parameter group, specify the
         * <code>ResetAllParameters</code> and <code>CacheParameterGroupName</code>
         * parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetCacheParameterGroupAsync(const Model::ResetCacheParameterGroupRequest& request, const ResetCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes ingress from a cache security group. Use this operation to disallow
         * access from an Amazon EC2 security group that had been previously
         * authorized.</p>
         */
        virtual Model::RevokeCacheSecurityGroupIngressOutcome RevokeCacheSecurityGroupIngress(const Model::RevokeCacheSecurityGroupIngressRequest& request) const;

        /**
         * <p>Revokes ingress from a cache security group. Use this operation to disallow
         * access from an Amazon EC2 security group that had been previously
         * authorized.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeCacheSecurityGroupIngressOutcomeCallable RevokeCacheSecurityGroupIngressCallable(const Model::RevokeCacheSecurityGroupIngressRequest& request) const;

        /**
         * <p>Revokes ingress from a cache security group. Use this operation to disallow
         * access from an Amazon EC2 security group that had been previously
         * authorized.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeCacheSecurityGroupIngressAsync(const Model::RevokeCacheSecurityGroupIngressRequest& request, const RevokeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AuthorizeCacheSecurityGroupIngressAsyncHelper(const Model::AuthorizeCacheSecurityGroupIngressRequest& request, const AuthorizeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopySnapshotAsyncHelper(const Model::CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCacheClusterAsyncHelper(const Model::CreateCacheClusterRequest& request, const CreateCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCacheParameterGroupAsyncHelper(const Model::CreateCacheParameterGroupRequest& request, const CreateCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCacheSecurityGroupAsyncHelper(const Model::CreateCacheSecurityGroupRequest& request, const CreateCacheSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCacheSubnetGroupAsyncHelper(const Model::CreateCacheSubnetGroupRequest& request, const CreateCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateReplicationGroupAsyncHelper(const Model::CreateReplicationGroupRequest& request, const CreateReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSnapshotAsyncHelper(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void DescribeSnapshotsAsyncHelper(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAllowedNodeTypeModificationsAsyncHelper(const Model::ListAllowedNodeTypeModificationsRequest& request, const ListAllowedNodeTypeModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyCacheClusterAsyncHelper(const Model::ModifyCacheClusterRequest& request, const ModifyCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyCacheParameterGroupAsyncHelper(const Model::ModifyCacheParameterGroupRequest& request, const ModifyCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyCacheSubnetGroupAsyncHelper(const Model::ModifyCacheSubnetGroupRequest& request, const ModifyCacheSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyReplicationGroupAsyncHelper(const Model::ModifyReplicationGroupRequest& request, const ModifyReplicationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseReservedCacheNodesOfferingAsyncHelper(const Model::PurchaseReservedCacheNodesOfferingRequest& request, const PurchaseReservedCacheNodesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootCacheClusterAsyncHelper(const Model::RebootCacheClusterRequest& request, const RebootCacheClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetCacheParameterGroupAsyncHelper(const Model::ResetCacheParameterGroupRequest& request, const ResetCacheParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeCacheSecurityGroupIngressAsyncHelper(const Model::RevokeCacheSecurityGroupIngressRequest& request, const RevokeCacheSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace ElastiCache
} // namespace Aws
