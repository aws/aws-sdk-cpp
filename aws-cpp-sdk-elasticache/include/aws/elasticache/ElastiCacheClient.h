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
#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Event.h>
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
#include <future>

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

  typedef Utils::Outcome<AddTagsToResourceResult, Client::AWSError<ElastiCacheErrors>> AddTagsToResourceOutcome;
  typedef Utils::Outcome<AuthorizeCacheSecurityGroupIngressResult, Client::AWSError<ElastiCacheErrors>> AuthorizeCacheSecurityGroupIngressOutcome;
  typedef Utils::Outcome<CopySnapshotResult, Client::AWSError<ElastiCacheErrors>> CopySnapshotOutcome;
  typedef Utils::Outcome<CreateCacheClusterResult, Client::AWSError<ElastiCacheErrors>> CreateCacheClusterOutcome;
  typedef Utils::Outcome<CreateCacheParameterGroupResult, Client::AWSError<ElastiCacheErrors>> CreateCacheParameterGroupOutcome;
  typedef Utils::Outcome<CreateCacheSecurityGroupResult, Client::AWSError<ElastiCacheErrors>> CreateCacheSecurityGroupOutcome;
  typedef Utils::Outcome<CreateCacheSubnetGroupResult, Client::AWSError<ElastiCacheErrors>> CreateCacheSubnetGroupOutcome;
  typedef Utils::Outcome<CreateReplicationGroupResult, Client::AWSError<ElastiCacheErrors>> CreateReplicationGroupOutcome;
  typedef Utils::Outcome<CreateSnapshotResult, Client::AWSError<ElastiCacheErrors>> CreateSnapshotOutcome;
  typedef Utils::Outcome<DeleteCacheClusterResult, Client::AWSError<ElastiCacheErrors>> DeleteCacheClusterOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<ElastiCacheErrors>> DeleteCacheParameterGroupOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<ElastiCacheErrors>> DeleteCacheSecurityGroupOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<ElastiCacheErrors>> DeleteCacheSubnetGroupOutcome;
  typedef Utils::Outcome<DeleteReplicationGroupResult, Client::AWSError<ElastiCacheErrors>> DeleteReplicationGroupOutcome;
  typedef Utils::Outcome<DeleteSnapshotResult, Client::AWSError<ElastiCacheErrors>> DeleteSnapshotOutcome;
  typedef Utils::Outcome<DescribeCacheClustersResult, Client::AWSError<ElastiCacheErrors>> DescribeCacheClustersOutcome;
  typedef Utils::Outcome<DescribeCacheEngineVersionsResult, Client::AWSError<ElastiCacheErrors>> DescribeCacheEngineVersionsOutcome;
  typedef Utils::Outcome<DescribeCacheParameterGroupsResult, Client::AWSError<ElastiCacheErrors>> DescribeCacheParameterGroupsOutcome;
  typedef Utils::Outcome<DescribeCacheParametersResult, Client::AWSError<ElastiCacheErrors>> DescribeCacheParametersOutcome;
  typedef Utils::Outcome<DescribeCacheSecurityGroupsResult, Client::AWSError<ElastiCacheErrors>> DescribeCacheSecurityGroupsOutcome;
  typedef Utils::Outcome<DescribeCacheSubnetGroupsResult, Client::AWSError<ElastiCacheErrors>> DescribeCacheSubnetGroupsOutcome;
  typedef Utils::Outcome<DescribeEngineDefaultParametersResult, Client::AWSError<ElastiCacheErrors>> DescribeEngineDefaultParametersOutcome;
  typedef Utils::Outcome<DescribeEventsResult, Client::AWSError<ElastiCacheErrors>> DescribeEventsOutcome;
  typedef Utils::Outcome<DescribeReplicationGroupsResult, Client::AWSError<ElastiCacheErrors>> DescribeReplicationGroupsOutcome;
  typedef Utils::Outcome<DescribeReservedCacheNodesResult, Client::AWSError<ElastiCacheErrors>> DescribeReservedCacheNodesOutcome;
  typedef Utils::Outcome<DescribeReservedCacheNodesOfferingsResult, Client::AWSError<ElastiCacheErrors>> DescribeReservedCacheNodesOfferingsOutcome;
  typedef Utils::Outcome<DescribeSnapshotsResult, Client::AWSError<ElastiCacheErrors>> DescribeSnapshotsOutcome;
  typedef Utils::Outcome<ListTagsForResourceResult, Client::AWSError<ElastiCacheErrors>> ListTagsForResourceOutcome;
  typedef Utils::Outcome<ModifyCacheClusterResult, Client::AWSError<ElastiCacheErrors>> ModifyCacheClusterOutcome;
  typedef Utils::Outcome<ModifyCacheParameterGroupResult, Client::AWSError<ElastiCacheErrors>> ModifyCacheParameterGroupOutcome;
  typedef Utils::Outcome<ModifyCacheSubnetGroupResult, Client::AWSError<ElastiCacheErrors>> ModifyCacheSubnetGroupOutcome;
  typedef Utils::Outcome<ModifyReplicationGroupResult, Client::AWSError<ElastiCacheErrors>> ModifyReplicationGroupOutcome;
  typedef Utils::Outcome<PurchaseReservedCacheNodesOfferingResult, Client::AWSError<ElastiCacheErrors>> PurchaseReservedCacheNodesOfferingOutcome;
  typedef Utils::Outcome<RebootCacheClusterResult, Client::AWSError<ElastiCacheErrors>> RebootCacheClusterOutcome;
  typedef Utils::Outcome<RemoveTagsFromResourceResult, Client::AWSError<ElastiCacheErrors>> RemoveTagsFromResourceOutcome;
  typedef Utils::Outcome<ResetCacheParameterGroupResult, Client::AWSError<ElastiCacheErrors>> ResetCacheParameterGroupOutcome;
  typedef Utils::Outcome<RevokeCacheSecurityGroupIngressResult, Client::AWSError<ElastiCacheErrors>> RevokeCacheSecurityGroupIngressOutcome;

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

  typedef Aws::Utils::Event<ElastiCacheClient, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&> AddTagsToResourceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::AuthorizeCacheSecurityGroupIngressRequest&, const Model::AuthorizeCacheSecurityGroupIngressOutcome&> AuthorizeCacheSecurityGroupIngressOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::CopySnapshotRequest&, const Model::CopySnapshotOutcome&> CopySnapshotOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::CreateCacheClusterRequest&, const Model::CreateCacheClusterOutcome&> CreateCacheClusterOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::CreateCacheParameterGroupRequest&, const Model::CreateCacheParameterGroupOutcome&> CreateCacheParameterGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::CreateCacheSecurityGroupRequest&, const Model::CreateCacheSecurityGroupOutcome&> CreateCacheSecurityGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::CreateCacheSubnetGroupRequest&, const Model::CreateCacheSubnetGroupOutcome&> CreateCacheSubnetGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::CreateReplicationGroupRequest&, const Model::CreateReplicationGroupOutcome&> CreateReplicationGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&> CreateSnapshotOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DeleteCacheClusterRequest&, const Model::DeleteCacheClusterOutcome&> DeleteCacheClusterOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DeleteCacheParameterGroupRequest&, const Model::DeleteCacheParameterGroupOutcome&> DeleteCacheParameterGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DeleteCacheSecurityGroupRequest&, const Model::DeleteCacheSecurityGroupOutcome&> DeleteCacheSecurityGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DeleteCacheSubnetGroupRequest&, const Model::DeleteCacheSubnetGroupOutcome&> DeleteCacheSubnetGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DeleteReplicationGroupRequest&, const Model::DeleteReplicationGroupOutcome&> DeleteReplicationGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DeleteSnapshotRequest&, const Model::DeleteSnapshotOutcome&> DeleteSnapshotOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DescribeCacheClustersRequest&, const Model::DescribeCacheClustersOutcome&> DescribeCacheClustersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DescribeCacheEngineVersionsRequest&, const Model::DescribeCacheEngineVersionsOutcome&> DescribeCacheEngineVersionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DescribeCacheParameterGroupsRequest&, const Model::DescribeCacheParameterGroupsOutcome&> DescribeCacheParameterGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DescribeCacheParametersRequest&, const Model::DescribeCacheParametersOutcome&> DescribeCacheParametersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DescribeCacheSecurityGroupsRequest&, const Model::DescribeCacheSecurityGroupsOutcome&> DescribeCacheSecurityGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DescribeCacheSubnetGroupsRequest&, const Model::DescribeCacheSubnetGroupsOutcome&> DescribeCacheSubnetGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DescribeEngineDefaultParametersRequest&, const Model::DescribeEngineDefaultParametersOutcome&> DescribeEngineDefaultParametersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&> DescribeEventsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DescribeReplicationGroupsRequest&, const Model::DescribeReplicationGroupsOutcome&> DescribeReplicationGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DescribeReservedCacheNodesRequest&, const Model::DescribeReservedCacheNodesOutcome&> DescribeReservedCacheNodesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DescribeReservedCacheNodesOfferingsRequest&, const Model::DescribeReservedCacheNodesOfferingsOutcome&> DescribeReservedCacheNodesOfferingsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::DescribeSnapshotsRequest&, const Model::DescribeSnapshotsOutcome&> DescribeSnapshotsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&> ListTagsForResourceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::ModifyCacheClusterRequest&, const Model::ModifyCacheClusterOutcome&> ModifyCacheClusterOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::ModifyCacheParameterGroupRequest&, const Model::ModifyCacheParameterGroupOutcome&> ModifyCacheParameterGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::ModifyCacheSubnetGroupRequest&, const Model::ModifyCacheSubnetGroupOutcome&> ModifyCacheSubnetGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::ModifyReplicationGroupRequest&, const Model::ModifyReplicationGroupOutcome&> ModifyReplicationGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::PurchaseReservedCacheNodesOfferingRequest&, const Model::PurchaseReservedCacheNodesOfferingOutcome&> PurchaseReservedCacheNodesOfferingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::RebootCacheClusterRequest&, const Model::RebootCacheClusterOutcome&> RebootCacheClusterOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&> RemoveTagsFromResourceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::ResetCacheParameterGroupRequest&, const Model::ResetCacheParameterGroupOutcome&> ResetCacheParameterGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElastiCacheClient, const Model::RevokeCacheSecurityGroupIngressRequest&, const Model::RevokeCacheSecurityGroupIngressOutcome&> RevokeCacheSecurityGroupIngressOutcomeReceivedEvent;

  /*
    <fullname>Amazon ElastiCache</fullname> <p>Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the cloud.</p> <p>With ElastiCache, customers gain all of the benefits of a high-performance, in-memory cache with far less of the administrative burden of launching and managing a distributed cache. The service makes setup, scaling, and cluster failure handling much simpler than in a self-managed cache deployment.</p> <p>In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance statistics associated with their cache and can receive alarms if a part of their cache runs hot.</p>
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
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~ElastiCacheClient();

     /*
       <p>The <i>AddTagsToResource</i> action adds up to 10 cost allocation tags to the named resource. A <i>cost allocation tag</i> is a key-value pair where the key and value are case-sensitive. Cost allocation tags can be used to categorize and track your AWS costs.</p> <p> When you apply tags to your ElastiCache resources, AWS generates a cost allocation report as a comma-separated value (CSV) file with your usage and costs aggregated by your tags. You can apply tags that represent business categories (such as cost centers, application names, or owners) to organize your costs across multiple services. For more information, see <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Tagging.html">Using Cost Allocation Tags in Amazon ElastiCache</a>.</p>
     */
     Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

     /*
       <p>The <i>AddTagsToResource</i> action adds up to 10 cost allocation tags to the named resource. A <i>cost allocation tag</i> is a key-value pair where the key and value are case-sensitive. Cost allocation tags can be used to categorize and track your AWS costs.</p> <p> When you apply tags to your ElastiCache resources, AWS generates a cost allocation report as a comma-separated value (CSV) file with your usage and costs aggregated by your tags. You can apply tags that represent business categories (such as cost centers, application names, or owners) to organize your costs across multiple services. For more information, see <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Tagging.html">Using Cost Allocation Tags in Amazon ElastiCache</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

     /*
       <p>The <i>AddTagsToResource</i> action adds up to 10 cost allocation tags to the named resource. A <i>cost allocation tag</i> is a key-value pair where the key and value are case-sensitive. Cost allocation tags can be used to categorize and track your AWS costs.</p> <p> When you apply tags to your ElastiCache resources, AWS generates a cost allocation report as a comma-separated value (CSV) file with your usage and costs aggregated by your tags. You can apply tags that represent business categories (such as cost centers, application names, or owners) to organize your costs across multiple services. For more information, see <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Tagging.html">Using Cost Allocation Tags in Amazon ElastiCache</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request) const;

     /*
       <p>The <i>AuthorizeCacheSecurityGroupIngress</i> action allows network ingress to a cache security group. Applications using ElastiCache must be running on Amazon EC2, and Amazon EC2 security groups are used as the authorization mechanism.</p> <note>You cannot authorize ingress from an Amazon EC2 security group in one region to an ElastiCache cluster in another region. </note>
     */
     Model::AuthorizeCacheSecurityGroupIngressOutcome AuthorizeCacheSecurityGroupIngress(const Model::AuthorizeCacheSecurityGroupIngressRequest& request) const;

     /*
       <p>The <i>AuthorizeCacheSecurityGroupIngress</i> action allows network ingress to a cache security group. Applications using ElastiCache must be running on Amazon EC2, and Amazon EC2 security groups are used as the authorization mechanism.</p> <note>You cannot authorize ingress from an Amazon EC2 security group in one region to an ElastiCache cluster in another region. </note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AuthorizeCacheSecurityGroupIngressOutcomeCallable AuthorizeCacheSecurityGroupIngressCallable(const Model::AuthorizeCacheSecurityGroupIngressRequest& request) const;

     /*
       <p>The <i>AuthorizeCacheSecurityGroupIngress</i> action allows network ingress to a cache security group. Applications using ElastiCache must be running on Amazon EC2, and Amazon EC2 security groups are used as the authorization mechanism.</p> <note>You cannot authorize ingress from an Amazon EC2 security group in one region to an ElastiCache cluster in another region. </note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AuthorizeCacheSecurityGroupIngressAsync(const Model::AuthorizeCacheSecurityGroupIngressRequest& request) const;

     /*
       <p>The <i>CopySnapshot</i> action makes a copy of an existing snapshot.</p>
     */
     Model::CopySnapshotOutcome CopySnapshot(const Model::CopySnapshotRequest& request) const;

     /*
       <p>The <i>CopySnapshot</i> action makes a copy of an existing snapshot.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CopySnapshotOutcomeCallable CopySnapshotCallable(const Model::CopySnapshotRequest& request) const;

     /*
       <p>The <i>CopySnapshot</i> action makes a copy of an existing snapshot.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CopySnapshotAsync(const Model::CopySnapshotRequest& request) const;

     /*
       <p>The <i>CreateCacheCluster</i> action creates a cache cluster. All nodes in the cache cluster run the same protocol-compliant cache engine software, either Memcached or Redis.</p>
     */
     Model::CreateCacheClusterOutcome CreateCacheCluster(const Model::CreateCacheClusterRequest& request) const;

     /*
       <p>The <i>CreateCacheCluster</i> action creates a cache cluster. All nodes in the cache cluster run the same protocol-compliant cache engine software, either Memcached or Redis.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateCacheClusterOutcomeCallable CreateCacheClusterCallable(const Model::CreateCacheClusterRequest& request) const;

     /*
       <p>The <i>CreateCacheCluster</i> action creates a cache cluster. All nodes in the cache cluster run the same protocol-compliant cache engine software, either Memcached or Redis.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateCacheClusterAsync(const Model::CreateCacheClusterRequest& request) const;

     /*
       <p>The <i>CreateCacheParameterGroup</i> action creates a new cache parameter group. A cache parameter group is a collection of parameters that you apply to all of the nodes in a cache cluster.</p>
     */
     Model::CreateCacheParameterGroupOutcome CreateCacheParameterGroup(const Model::CreateCacheParameterGroupRequest& request) const;

     /*
       <p>The <i>CreateCacheParameterGroup</i> action creates a new cache parameter group. A cache parameter group is a collection of parameters that you apply to all of the nodes in a cache cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateCacheParameterGroupOutcomeCallable CreateCacheParameterGroupCallable(const Model::CreateCacheParameterGroupRequest& request) const;

     /*
       <p>The <i>CreateCacheParameterGroup</i> action creates a new cache parameter group. A cache parameter group is a collection of parameters that you apply to all of the nodes in a cache cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateCacheParameterGroupAsync(const Model::CreateCacheParameterGroupRequest& request) const;

     /*
       <p>The <i>CreateCacheSecurityGroup</i> action creates a new cache security group. Use a cache security group to control access to one or more cache clusters.</p> <p>Cache security groups are only used when you are creating a cache cluster outside of an Amazon Virtual Private Cloud (VPC). If you are creating a cache cluster inside of a VPC, use a cache subnet group instead. For more information, see <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_CreateCacheSubnetGroup.html">CreateCacheSubnetGroup</a>.</p>
     */
     Model::CreateCacheSecurityGroupOutcome CreateCacheSecurityGroup(const Model::CreateCacheSecurityGroupRequest& request) const;

     /*
       <p>The <i>CreateCacheSecurityGroup</i> action creates a new cache security group. Use a cache security group to control access to one or more cache clusters.</p> <p>Cache security groups are only used when you are creating a cache cluster outside of an Amazon Virtual Private Cloud (VPC). If you are creating a cache cluster inside of a VPC, use a cache subnet group instead. For more information, see <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_CreateCacheSubnetGroup.html">CreateCacheSubnetGroup</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateCacheSecurityGroupOutcomeCallable CreateCacheSecurityGroupCallable(const Model::CreateCacheSecurityGroupRequest& request) const;

     /*
       <p>The <i>CreateCacheSecurityGroup</i> action creates a new cache security group. Use a cache security group to control access to one or more cache clusters.</p> <p>Cache security groups are only used when you are creating a cache cluster outside of an Amazon Virtual Private Cloud (VPC). If you are creating a cache cluster inside of a VPC, use a cache subnet group instead. For more information, see <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_CreateCacheSubnetGroup.html">CreateCacheSubnetGroup</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateCacheSecurityGroupAsync(const Model::CreateCacheSecurityGroupRequest& request) const;

     /*
       <p>The <i>CreateCacheSubnetGroup</i> action creates a new cache subnet group.</p> <p>Use this parameter only when you are creating a cluster in an Amazon Virtual Private Cloud (VPC).</p>
     */
     Model::CreateCacheSubnetGroupOutcome CreateCacheSubnetGroup(const Model::CreateCacheSubnetGroupRequest& request) const;

     /*
       <p>The <i>CreateCacheSubnetGroup</i> action creates a new cache subnet group.</p> <p>Use this parameter only when you are creating a cluster in an Amazon Virtual Private Cloud (VPC).</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateCacheSubnetGroupOutcomeCallable CreateCacheSubnetGroupCallable(const Model::CreateCacheSubnetGroupRequest& request) const;

     /*
       <p>The <i>CreateCacheSubnetGroup</i> action creates a new cache subnet group.</p> <p>Use this parameter only when you are creating a cluster in an Amazon Virtual Private Cloud (VPC).</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateCacheSubnetGroupAsync(const Model::CreateCacheSubnetGroupRequest& request) const;

     /*
       <p>The <i>CreateReplicationGroup</i> action creates a replication group. A replication group is a collection of cache clusters, where one of the cache clusters is a read/write primary and the others are read-only replicas. Writes to the primary are automatically propagated to the replicas.</p> <p>When you create a replication group, you must specify an existing cache cluster that is in the primary role. When the replication group has been successfully created, you can add one or more read replica replicas to it, up to a total of five read replicas.</p> <p><b>Note:</b> This action is valid only for Redis.</p>
     */
     Model::CreateReplicationGroupOutcome CreateReplicationGroup(const Model::CreateReplicationGroupRequest& request) const;

     /*
       <p>The <i>CreateReplicationGroup</i> action creates a replication group. A replication group is a collection of cache clusters, where one of the cache clusters is a read/write primary and the others are read-only replicas. Writes to the primary are automatically propagated to the replicas.</p> <p>When you create a replication group, you must specify an existing cache cluster that is in the primary role. When the replication group has been successfully created, you can add one or more read replica replicas to it, up to a total of five read replicas.</p> <p><b>Note:</b> This action is valid only for Redis.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateReplicationGroupOutcomeCallable CreateReplicationGroupCallable(const Model::CreateReplicationGroupRequest& request) const;

     /*
       <p>The <i>CreateReplicationGroup</i> action creates a replication group. A replication group is a collection of cache clusters, where one of the cache clusters is a read/write primary and the others are read-only replicas. Writes to the primary are automatically propagated to the replicas.</p> <p>When you create a replication group, you must specify an existing cache cluster that is in the primary role. When the replication group has been successfully created, you can add one or more read replica replicas to it, up to a total of five read replicas.</p> <p><b>Note:</b> This action is valid only for Redis.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateReplicationGroupAsync(const Model::CreateReplicationGroupRequest& request) const;

     /*
       <p>The <i>CreateSnapshot</i> action creates a copy of an entire cache cluster at a specific moment in time.</p>
     */
     Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

     /*
       <p>The <i>CreateSnapshot</i> action creates a copy of an entire cache cluster at a specific moment in time.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request) const;

     /*
       <p>The <i>CreateSnapshot</i> action creates a copy of an entire cache cluster at a specific moment in time.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request) const;

     /*
       <p>The <i>DeleteCacheCluster</i> action deletes a previously provisioned cache cluster. <i>DeleteCacheCluster</i> deletes all associated cache nodes, node endpoints and the cache cluster itself. When you receive a successful response from this action, Amazon ElastiCache immediately begins deleting the cache cluster; you cannot cancel or revert this action.</p> <p>This API cannot be used to delete a cache cluster that is the last read replica of a replication group that has Multi-AZ mode enabled.</p>
     */
     Model::DeleteCacheClusterOutcome DeleteCacheCluster(const Model::DeleteCacheClusterRequest& request) const;

     /*
       <p>The <i>DeleteCacheCluster</i> action deletes a previously provisioned cache cluster. <i>DeleteCacheCluster</i> deletes all associated cache nodes, node endpoints and the cache cluster itself. When you receive a successful response from this action, Amazon ElastiCache immediately begins deleting the cache cluster; you cannot cancel or revert this action.</p> <p>This API cannot be used to delete a cache cluster that is the last read replica of a replication group that has Multi-AZ mode enabled.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteCacheClusterOutcomeCallable DeleteCacheClusterCallable(const Model::DeleteCacheClusterRequest& request) const;

     /*
       <p>The <i>DeleteCacheCluster</i> action deletes a previously provisioned cache cluster. <i>DeleteCacheCluster</i> deletes all associated cache nodes, node endpoints and the cache cluster itself. When you receive a successful response from this action, Amazon ElastiCache immediately begins deleting the cache cluster; you cannot cancel or revert this action.</p> <p>This API cannot be used to delete a cache cluster that is the last read replica of a replication group that has Multi-AZ mode enabled.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteCacheClusterAsync(const Model::DeleteCacheClusterRequest& request) const;

     /*
       <p>The <i>DeleteCacheParameterGroup</i> action deletes the specified cache parameter group. You cannot delete a cache parameter group if it is associated with any cache clusters.</p>
     */
     Model::DeleteCacheParameterGroupOutcome DeleteCacheParameterGroup(const Model::DeleteCacheParameterGroupRequest& request) const;

     /*
       <p>The <i>DeleteCacheParameterGroup</i> action deletes the specified cache parameter group. You cannot delete a cache parameter group if it is associated with any cache clusters.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteCacheParameterGroupOutcomeCallable DeleteCacheParameterGroupCallable(const Model::DeleteCacheParameterGroupRequest& request) const;

     /*
       <p>The <i>DeleteCacheParameterGroup</i> action deletes the specified cache parameter group. You cannot delete a cache parameter group if it is associated with any cache clusters.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteCacheParameterGroupAsync(const Model::DeleteCacheParameterGroupRequest& request) const;

     /*
       <p>The <i>DeleteCacheSecurityGroup</i> action deletes a cache security group.</p> <note>You cannot delete a cache security group if it is associated with any cache clusters.</note>
     */
     Model::DeleteCacheSecurityGroupOutcome DeleteCacheSecurityGroup(const Model::DeleteCacheSecurityGroupRequest& request) const;

     /*
       <p>The <i>DeleteCacheSecurityGroup</i> action deletes a cache security group.</p> <note>You cannot delete a cache security group if it is associated with any cache clusters.</note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteCacheSecurityGroupOutcomeCallable DeleteCacheSecurityGroupCallable(const Model::DeleteCacheSecurityGroupRequest& request) const;

     /*
       <p>The <i>DeleteCacheSecurityGroup</i> action deletes a cache security group.</p> <note>You cannot delete a cache security group if it is associated with any cache clusters.</note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteCacheSecurityGroupAsync(const Model::DeleteCacheSecurityGroupRequest& request) const;

     /*
       <p>The <i>DeleteCacheSubnetGroup</i> action deletes a cache subnet group.</p> <note>You cannot delete a cache subnet group if it is associated with any cache clusters.</note>
     */
     Model::DeleteCacheSubnetGroupOutcome DeleteCacheSubnetGroup(const Model::DeleteCacheSubnetGroupRequest& request) const;

     /*
       <p>The <i>DeleteCacheSubnetGroup</i> action deletes a cache subnet group.</p> <note>You cannot delete a cache subnet group if it is associated with any cache clusters.</note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteCacheSubnetGroupOutcomeCallable DeleteCacheSubnetGroupCallable(const Model::DeleteCacheSubnetGroupRequest& request) const;

     /*
       <p>The <i>DeleteCacheSubnetGroup</i> action deletes a cache subnet group.</p> <note>You cannot delete a cache subnet group if it is associated with any cache clusters.</note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteCacheSubnetGroupAsync(const Model::DeleteCacheSubnetGroupRequest& request) const;

     /*
       <p>The <i>DeleteReplicationGroup</i> action deletes an existing replication group. By default, this action deletes the entire replication group, including the primary cluster and all of the read replicas. You can optionally delete only the read replicas, while retaining the primary cluster.</p> <p>When you receive a successful response from this action, Amazon ElastiCache immediately begins deleting the selected resources; you cannot cancel or revert this action.</p>
     */
     Model::DeleteReplicationGroupOutcome DeleteReplicationGroup(const Model::DeleteReplicationGroupRequest& request) const;

     /*
       <p>The <i>DeleteReplicationGroup</i> action deletes an existing replication group. By default, this action deletes the entire replication group, including the primary cluster and all of the read replicas. You can optionally delete only the read replicas, while retaining the primary cluster.</p> <p>When you receive a successful response from this action, Amazon ElastiCache immediately begins deleting the selected resources; you cannot cancel or revert this action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteReplicationGroupOutcomeCallable DeleteReplicationGroupCallable(const Model::DeleteReplicationGroupRequest& request) const;

     /*
       <p>The <i>DeleteReplicationGroup</i> action deletes an existing replication group. By default, this action deletes the entire replication group, including the primary cluster and all of the read replicas. You can optionally delete only the read replicas, while retaining the primary cluster.</p> <p>When you receive a successful response from this action, Amazon ElastiCache immediately begins deleting the selected resources; you cannot cancel or revert this action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteReplicationGroupAsync(const Model::DeleteReplicationGroupRequest& request) const;

     /*
       <p>The <i>DeleteSnapshot</i> action deletes an existing snapshot. When you receive a successful response from this action, ElastiCache immediately begins deleting the snapshot; you cannot cancel or revert this action.</p>
     */
     Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;

     /*
       <p>The <i>DeleteSnapshot</i> action deletes an existing snapshot. When you receive a successful response from this action, ElastiCache immediately begins deleting the snapshot; you cannot cancel or revert this action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;

     /*
       <p>The <i>DeleteSnapshot</i> action deletes an existing snapshot. When you receive a successful response from this action, ElastiCache immediately begins deleting the snapshot; you cannot cancel or revert this action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteSnapshotAsync(const Model::DeleteSnapshotRequest& request) const;

     /*
       <p>The <i>DescribeCacheClusters</i> action returns information about all provisioned cache clusters if no cache cluster identifier is specified, or about a specific cache cluster if a cache cluster identifier is supplied.</p> <p>By default, abbreviated information about the cache clusters(s) will be returned. You can use the optional <i>ShowDetails</i> flag to retrieve detailed information about the cache nodes associated with the cache clusters. These details include the DNS address and port for the cache node endpoint.</p> <p>If the cluster is in the CREATING state, only cluster level information will be displayed until all of the nodes are successfully provisioned.</p> <p>If the cluster is in the DELETING state, only cluster level information will be displayed.</p> <p>If cache nodes are currently being added to the cache cluster, node endpoint information and creation time for the additional nodes will not be displayed until they are completely provisioned. When the cache cluster state is <i>available</i>, the cluster is ready for use.</p> <p>If cache nodes are currently being removed from the cache cluster, no endpoint information for the removed nodes is displayed.</p>
     */
     Model::DescribeCacheClustersOutcome DescribeCacheClusters(const Model::DescribeCacheClustersRequest& request) const;

     /*
       <p>The <i>DescribeCacheClusters</i> action returns information about all provisioned cache clusters if no cache cluster identifier is specified, or about a specific cache cluster if a cache cluster identifier is supplied.</p> <p>By default, abbreviated information about the cache clusters(s) will be returned. You can use the optional <i>ShowDetails</i> flag to retrieve detailed information about the cache nodes associated with the cache clusters. These details include the DNS address and port for the cache node endpoint.</p> <p>If the cluster is in the CREATING state, only cluster level information will be displayed until all of the nodes are successfully provisioned.</p> <p>If the cluster is in the DELETING state, only cluster level information will be displayed.</p> <p>If cache nodes are currently being added to the cache cluster, node endpoint information and creation time for the additional nodes will not be displayed until they are completely provisioned. When the cache cluster state is <i>available</i>, the cluster is ready for use.</p> <p>If cache nodes are currently being removed from the cache cluster, no endpoint information for the removed nodes is displayed.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeCacheClustersOutcomeCallable DescribeCacheClustersCallable(const Model::DescribeCacheClustersRequest& request) const;

     /*
       <p>The <i>DescribeCacheClusters</i> action returns information about all provisioned cache clusters if no cache cluster identifier is specified, or about a specific cache cluster if a cache cluster identifier is supplied.</p> <p>By default, abbreviated information about the cache clusters(s) will be returned. You can use the optional <i>ShowDetails</i> flag to retrieve detailed information about the cache nodes associated with the cache clusters. These details include the DNS address and port for the cache node endpoint.</p> <p>If the cluster is in the CREATING state, only cluster level information will be displayed until all of the nodes are successfully provisioned.</p> <p>If the cluster is in the DELETING state, only cluster level information will be displayed.</p> <p>If cache nodes are currently being added to the cache cluster, node endpoint information and creation time for the additional nodes will not be displayed until they are completely provisioned. When the cache cluster state is <i>available</i>, the cluster is ready for use.</p> <p>If cache nodes are currently being removed from the cache cluster, no endpoint information for the removed nodes is displayed.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeCacheClustersAsync(const Model::DescribeCacheClustersRequest& request) const;

     /*
       <p>The <i>DescribeCacheEngineVersions</i> action returns a list of the available cache engines and their versions.</p>
     */
     Model::DescribeCacheEngineVersionsOutcome DescribeCacheEngineVersions(const Model::DescribeCacheEngineVersionsRequest& request) const;

     /*
       <p>The <i>DescribeCacheEngineVersions</i> action returns a list of the available cache engines and their versions.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeCacheEngineVersionsOutcomeCallable DescribeCacheEngineVersionsCallable(const Model::DescribeCacheEngineVersionsRequest& request) const;

     /*
       <p>The <i>DescribeCacheEngineVersions</i> action returns a list of the available cache engines and their versions.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeCacheEngineVersionsAsync(const Model::DescribeCacheEngineVersionsRequest& request) const;

     /*
       <p>The <i>DescribeCacheParameterGroups</i> action returns a list of cache parameter group descriptions. If a cache parameter group name is specified, the list will contain only the descriptions for that group.</p>
     */
     Model::DescribeCacheParameterGroupsOutcome DescribeCacheParameterGroups(const Model::DescribeCacheParameterGroupsRequest& request) const;

     /*
       <p>The <i>DescribeCacheParameterGroups</i> action returns a list of cache parameter group descriptions. If a cache parameter group name is specified, the list will contain only the descriptions for that group.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeCacheParameterGroupsOutcomeCallable DescribeCacheParameterGroupsCallable(const Model::DescribeCacheParameterGroupsRequest& request) const;

     /*
       <p>The <i>DescribeCacheParameterGroups</i> action returns a list of cache parameter group descriptions. If a cache parameter group name is specified, the list will contain only the descriptions for that group.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeCacheParameterGroupsAsync(const Model::DescribeCacheParameterGroupsRequest& request) const;

     /*
       <p>The <i>DescribeCacheParameters</i> action returns the detailed parameter list for a particular cache parameter group.</p>
     */
     Model::DescribeCacheParametersOutcome DescribeCacheParameters(const Model::DescribeCacheParametersRequest& request) const;

     /*
       <p>The <i>DescribeCacheParameters</i> action returns the detailed parameter list for a particular cache parameter group.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeCacheParametersOutcomeCallable DescribeCacheParametersCallable(const Model::DescribeCacheParametersRequest& request) const;

     /*
       <p>The <i>DescribeCacheParameters</i> action returns the detailed parameter list for a particular cache parameter group.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeCacheParametersAsync(const Model::DescribeCacheParametersRequest& request) const;

     /*
       <p>The <i>DescribeCacheSecurityGroups</i> action returns a list of cache security group descriptions. If a cache security group name is specified, the list will contain only the description of that group.</p>
     */
     Model::DescribeCacheSecurityGroupsOutcome DescribeCacheSecurityGroups(const Model::DescribeCacheSecurityGroupsRequest& request) const;

     /*
       <p>The <i>DescribeCacheSecurityGroups</i> action returns a list of cache security group descriptions. If a cache security group name is specified, the list will contain only the description of that group.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeCacheSecurityGroupsOutcomeCallable DescribeCacheSecurityGroupsCallable(const Model::DescribeCacheSecurityGroupsRequest& request) const;

     /*
       <p>The <i>DescribeCacheSecurityGroups</i> action returns a list of cache security group descriptions. If a cache security group name is specified, the list will contain only the description of that group.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeCacheSecurityGroupsAsync(const Model::DescribeCacheSecurityGroupsRequest& request) const;

     /*
       <p>The <i>DescribeCacheSubnetGroups</i> action returns a list of cache subnet group descriptions. If a subnet group name is specified, the list will contain only the description of that group.</p>
     */
     Model::DescribeCacheSubnetGroupsOutcome DescribeCacheSubnetGroups(const Model::DescribeCacheSubnetGroupsRequest& request) const;

     /*
       <p>The <i>DescribeCacheSubnetGroups</i> action returns a list of cache subnet group descriptions. If a subnet group name is specified, the list will contain only the description of that group.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeCacheSubnetGroupsOutcomeCallable DescribeCacheSubnetGroupsCallable(const Model::DescribeCacheSubnetGroupsRequest& request) const;

     /*
       <p>The <i>DescribeCacheSubnetGroups</i> action returns a list of cache subnet group descriptions. If a subnet group name is specified, the list will contain only the description of that group.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeCacheSubnetGroupsAsync(const Model::DescribeCacheSubnetGroupsRequest& request) const;

     /*
       <p>The <i>DescribeEngineDefaultParameters</i> action returns the default engine and system parameter information for the specified cache engine.</p>
     */
     Model::DescribeEngineDefaultParametersOutcome DescribeEngineDefaultParameters(const Model::DescribeEngineDefaultParametersRequest& request) const;

     /*
       <p>The <i>DescribeEngineDefaultParameters</i> action returns the default engine and system parameter information for the specified cache engine.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeEngineDefaultParametersOutcomeCallable DescribeEngineDefaultParametersCallable(const Model::DescribeEngineDefaultParametersRequest& request) const;

     /*
       <p>The <i>DescribeEngineDefaultParameters</i> action returns the default engine and system parameter information for the specified cache engine.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeEngineDefaultParametersAsync(const Model::DescribeEngineDefaultParametersRequest& request) const;

     /*
       <p>The <i>DescribeEvents</i> action returns events related to cache clusters, cache security groups, and cache parameter groups. You can obtain events specific to a particular cache cluster, cache security group, or cache parameter group by providing the name as a parameter.</p> <p>By default, only the events occurring within the last hour are returned; however, you can retrieve up to 14 days' worth of events if necessary.</p>
     */
     Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

     /*
       <p>The <i>DescribeEvents</i> action returns events related to cache clusters, cache security groups, and cache parameter groups. You can obtain events specific to a particular cache cluster, cache security group, or cache parameter group by providing the name as a parameter.</p> <p>By default, only the events occurring within the last hour are returned; however, you can retrieve up to 14 days' worth of events if necessary.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

     /*
       <p>The <i>DescribeEvents</i> action returns events related to cache clusters, cache security groups, and cache parameter groups. You can obtain events specific to a particular cache cluster, cache security group, or cache parameter group by providing the name as a parameter.</p> <p>By default, only the events occurring within the last hour are returned; however, you can retrieve up to 14 days' worth of events if necessary.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeEventsAsync(const Model::DescribeEventsRequest& request) const;

     /*
       <p>The <i>DescribeReplicationGroups</i> action returns information about a particular replication group. If no identifier is specified, <i>DescribeReplicationGroups</i> returns information about all replication groups.</p>
     */
     Model::DescribeReplicationGroupsOutcome DescribeReplicationGroups(const Model::DescribeReplicationGroupsRequest& request) const;

     /*
       <p>The <i>DescribeReplicationGroups</i> action returns information about a particular replication group. If no identifier is specified, <i>DescribeReplicationGroups</i> returns information about all replication groups.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeReplicationGroupsOutcomeCallable DescribeReplicationGroupsCallable(const Model::DescribeReplicationGroupsRequest& request) const;

     /*
       <p>The <i>DescribeReplicationGroups</i> action returns information about a particular replication group. If no identifier is specified, <i>DescribeReplicationGroups</i> returns information about all replication groups.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeReplicationGroupsAsync(const Model::DescribeReplicationGroupsRequest& request) const;

     /*
       <p>The <i>DescribeReservedCacheNodes</i> action returns information about reserved cache nodes for this account, or about a specified reserved cache node.</p>
     */
     Model::DescribeReservedCacheNodesOutcome DescribeReservedCacheNodes(const Model::DescribeReservedCacheNodesRequest& request) const;

     /*
       <p>The <i>DescribeReservedCacheNodes</i> action returns information about reserved cache nodes for this account, or about a specified reserved cache node.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeReservedCacheNodesOutcomeCallable DescribeReservedCacheNodesCallable(const Model::DescribeReservedCacheNodesRequest& request) const;

     /*
       <p>The <i>DescribeReservedCacheNodes</i> action returns information about reserved cache nodes for this account, or about a specified reserved cache node.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeReservedCacheNodesAsync(const Model::DescribeReservedCacheNodesRequest& request) const;

     /*
       <p>The <i>DescribeReservedCacheNodesOfferings</i> action lists available reserved cache node offerings.</p>
     */
     Model::DescribeReservedCacheNodesOfferingsOutcome DescribeReservedCacheNodesOfferings(const Model::DescribeReservedCacheNodesOfferingsRequest& request) const;

     /*
       <p>The <i>DescribeReservedCacheNodesOfferings</i> action lists available reserved cache node offerings.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeReservedCacheNodesOfferingsOutcomeCallable DescribeReservedCacheNodesOfferingsCallable(const Model::DescribeReservedCacheNodesOfferingsRequest& request) const;

     /*
       <p>The <i>DescribeReservedCacheNodesOfferings</i> action lists available reserved cache node offerings.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeReservedCacheNodesOfferingsAsync(const Model::DescribeReservedCacheNodesOfferingsRequest& request) const;

     /*
       <p>The <i>DescribeSnapshots</i> action returns information about cache cluster snapshots. By default, <i>DescribeSnapshots</i> lists all of your snapshots; it can optionally describe a single snapshot, or just the snapshots associated with a particular cache cluster.</p>
     */
     Model::DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest& request) const;

     /*
       <p>The <i>DescribeSnapshots</i> action returns information about cache cluster snapshots. By default, <i>DescribeSnapshots</i> lists all of your snapshots; it can optionally describe a single snapshot, or just the snapshots associated with a particular cache cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;

     /*
       <p>The <i>DescribeSnapshots</i> action returns information about cache cluster snapshots. By default, <i>DescribeSnapshots</i> lists all of your snapshots; it can optionally describe a single snapshot, or just the snapshots associated with a particular cache cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request) const;

     /*
       <p>The <i>ListTagsForResource</i> action lists all cost allocation tags currently on the named resource. A <i>cost allocation tag</i> is a key-value pair where the key is case-sensitive and the value is optional. Cost allocation tags can be used to categorize and track your AWS costs.</p> <p>You can have a maximum of 10 cost allocation tags on an ElastiCache resource. For more information, see <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/BestPractices.html">Using Cost Allocation Tags in Amazon ElastiCache</a>.</p>
     */
     Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

     /*
       <p>The <i>ListTagsForResource</i> action lists all cost allocation tags currently on the named resource. A <i>cost allocation tag</i> is a key-value pair where the key is case-sensitive and the value is optional. Cost allocation tags can be used to categorize and track your AWS costs.</p> <p>You can have a maximum of 10 cost allocation tags on an ElastiCache resource. For more information, see <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/BestPractices.html">Using Cost Allocation Tags in Amazon ElastiCache</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

     /*
       <p>The <i>ListTagsForResource</i> action lists all cost allocation tags currently on the named resource. A <i>cost allocation tag</i> is a key-value pair where the key is case-sensitive and the value is optional. Cost allocation tags can be used to categorize and track your AWS costs.</p> <p>You can have a maximum of 10 cost allocation tags on an ElastiCache resource. For more information, see <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/BestPractices.html">Using Cost Allocation Tags in Amazon ElastiCache</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request) const;

     /*
       <p>The <i>ModifyCacheCluster</i> action modifies the settings for a cache cluster. You can use this action to change one or more cluster configuration parameters by specifying the parameters and the new values.</p>
     */
     Model::ModifyCacheClusterOutcome ModifyCacheCluster(const Model::ModifyCacheClusterRequest& request) const;

     /*
       <p>The <i>ModifyCacheCluster</i> action modifies the settings for a cache cluster. You can use this action to change one or more cluster configuration parameters by specifying the parameters and the new values.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyCacheClusterOutcomeCallable ModifyCacheClusterCallable(const Model::ModifyCacheClusterRequest& request) const;

     /*
       <p>The <i>ModifyCacheCluster</i> action modifies the settings for a cache cluster. You can use this action to change one or more cluster configuration parameters by specifying the parameters and the new values.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyCacheClusterAsync(const Model::ModifyCacheClusterRequest& request) const;

     /*
       <p>The <i>ModifyCacheParameterGroup</i> action modifies the parameters of a cache parameter group. You can modify up to 20 parameters in a single request by submitting a list parameter name and value pairs.</p>
     */
     Model::ModifyCacheParameterGroupOutcome ModifyCacheParameterGroup(const Model::ModifyCacheParameterGroupRequest& request) const;

     /*
       <p>The <i>ModifyCacheParameterGroup</i> action modifies the parameters of a cache parameter group. You can modify up to 20 parameters in a single request by submitting a list parameter name and value pairs.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyCacheParameterGroupOutcomeCallable ModifyCacheParameterGroupCallable(const Model::ModifyCacheParameterGroupRequest& request) const;

     /*
       <p>The <i>ModifyCacheParameterGroup</i> action modifies the parameters of a cache parameter group. You can modify up to 20 parameters in a single request by submitting a list parameter name and value pairs.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyCacheParameterGroupAsync(const Model::ModifyCacheParameterGroupRequest& request) const;

     /*
       <p>The <i>ModifyCacheSubnetGroup</i> action modifies an existing cache subnet group.</p>
     */
     Model::ModifyCacheSubnetGroupOutcome ModifyCacheSubnetGroup(const Model::ModifyCacheSubnetGroupRequest& request) const;

     /*
       <p>The <i>ModifyCacheSubnetGroup</i> action modifies an existing cache subnet group.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyCacheSubnetGroupOutcomeCallable ModifyCacheSubnetGroupCallable(const Model::ModifyCacheSubnetGroupRequest& request) const;

     /*
       <p>The <i>ModifyCacheSubnetGroup</i> action modifies an existing cache subnet group.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyCacheSubnetGroupAsync(const Model::ModifyCacheSubnetGroupRequest& request) const;

     /*
       <p>The <i>ModifyReplicationGroup</i> action modifies the settings for a replication group.</p>
     */
     Model::ModifyReplicationGroupOutcome ModifyReplicationGroup(const Model::ModifyReplicationGroupRequest& request) const;

     /*
       <p>The <i>ModifyReplicationGroup</i> action modifies the settings for a replication group.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyReplicationGroupOutcomeCallable ModifyReplicationGroupCallable(const Model::ModifyReplicationGroupRequest& request) const;

     /*
       <p>The <i>ModifyReplicationGroup</i> action modifies the settings for a replication group.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyReplicationGroupAsync(const Model::ModifyReplicationGroupRequest& request) const;

     /*
       <p>The <i>PurchaseReservedCacheNodesOffering</i> action allows you to purchase a reserved cache node offering.</p>
     */
     Model::PurchaseReservedCacheNodesOfferingOutcome PurchaseReservedCacheNodesOffering(const Model::PurchaseReservedCacheNodesOfferingRequest& request) const;

     /*
       <p>The <i>PurchaseReservedCacheNodesOffering</i> action allows you to purchase a reserved cache node offering.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PurchaseReservedCacheNodesOfferingOutcomeCallable PurchaseReservedCacheNodesOfferingCallable(const Model::PurchaseReservedCacheNodesOfferingRequest& request) const;

     /*
       <p>The <i>PurchaseReservedCacheNodesOffering</i> action allows you to purchase a reserved cache node offering.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PurchaseReservedCacheNodesOfferingAsync(const Model::PurchaseReservedCacheNodesOfferingRequest& request) const;

     /*
       <p>The <i>RebootCacheCluster</i> action reboots some, or all, of the cache nodes within a provisioned cache cluster. This API will apply any modified cache parameter groups to the cache cluster. The reboot action takes place as soon as possible, and results in a momentary outage to the cache cluster. During the reboot, the cache cluster status is set to REBOOTING.</p> <p>The reboot causes the contents of the cache (for each cache node being rebooted) to be lost.</p> <p>When the reboot is complete, a cache cluster event is created.</p>
     */
     Model::RebootCacheClusterOutcome RebootCacheCluster(const Model::RebootCacheClusterRequest& request) const;

     /*
       <p>The <i>RebootCacheCluster</i> action reboots some, or all, of the cache nodes within a provisioned cache cluster. This API will apply any modified cache parameter groups to the cache cluster. The reboot action takes place as soon as possible, and results in a momentary outage to the cache cluster. During the reboot, the cache cluster status is set to REBOOTING.</p> <p>The reboot causes the contents of the cache (for each cache node being rebooted) to be lost.</p> <p>When the reboot is complete, a cache cluster event is created.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RebootCacheClusterOutcomeCallable RebootCacheClusterCallable(const Model::RebootCacheClusterRequest& request) const;

     /*
       <p>The <i>RebootCacheCluster</i> action reboots some, or all, of the cache nodes within a provisioned cache cluster. This API will apply any modified cache parameter groups to the cache cluster. The reboot action takes place as soon as possible, and results in a momentary outage to the cache cluster. During the reboot, the cache cluster status is set to REBOOTING.</p> <p>The reboot causes the contents of the cache (for each cache node being rebooted) to be lost.</p> <p>When the reboot is complete, a cache cluster event is created.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RebootCacheClusterAsync(const Model::RebootCacheClusterRequest& request) const;

     /*
       <p>The <i>RemoveTagsFromResource</i> action removes the tags identified by the <code>TagKeys</code> list from the named resource.</p>
     */
     Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

     /*
       <p>The <i>RemoveTagsFromResource</i> action removes the tags identified by the <code>TagKeys</code> list from the named resource.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

     /*
       <p>The <i>RemoveTagsFromResource</i> action removes the tags identified by the <code>TagKeys</code> list from the named resource.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request) const;

     /*
       <p>The <i>ResetCacheParameterGroup</i> action modifies the parameters of a cache parameter group to the engine or system default value. You can reset specific parameters by submitting a list of parameter names. To reset the entire cache parameter group, specify the <i>ResetAllParameters</i> and <i>CacheParameterGroupName</i> parameters.</p>
     */
     Model::ResetCacheParameterGroupOutcome ResetCacheParameterGroup(const Model::ResetCacheParameterGroupRequest& request) const;

     /*
       <p>The <i>ResetCacheParameterGroup</i> action modifies the parameters of a cache parameter group to the engine or system default value. You can reset specific parameters by submitting a list of parameter names. To reset the entire cache parameter group, specify the <i>ResetAllParameters</i> and <i>CacheParameterGroupName</i> parameters.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ResetCacheParameterGroupOutcomeCallable ResetCacheParameterGroupCallable(const Model::ResetCacheParameterGroupRequest& request) const;

     /*
       <p>The <i>ResetCacheParameterGroup</i> action modifies the parameters of a cache parameter group to the engine or system default value. You can reset specific parameters by submitting a list of parameter names. To reset the entire cache parameter group, specify the <i>ResetAllParameters</i> and <i>CacheParameterGroupName</i> parameters.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ResetCacheParameterGroupAsync(const Model::ResetCacheParameterGroupRequest& request) const;

     /*
       <p>The <i>RevokeCacheSecurityGroupIngress</i> action revokes ingress from a cache security group. Use this action to disallow access from an Amazon EC2 security group that had been previously authorized.</p>
     */
     Model::RevokeCacheSecurityGroupIngressOutcome RevokeCacheSecurityGroupIngress(const Model::RevokeCacheSecurityGroupIngressRequest& request) const;

     /*
       <p>The <i>RevokeCacheSecurityGroupIngress</i> action revokes ingress from a cache security group. Use this action to disallow access from an Amazon EC2 security group that had been previously authorized.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RevokeCacheSecurityGroupIngressOutcomeCallable RevokeCacheSecurityGroupIngressCallable(const Model::RevokeCacheSecurityGroupIngressRequest& request) const;

     /*
       <p>The <i>RevokeCacheSecurityGroupIngress</i> action revokes ingress from a cache security group. Use this action to disallow access from an Amazon EC2 security group that had been previously authorized.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RevokeCacheSecurityGroupIngressAsync(const Model::RevokeCacheSecurityGroupIngressRequest& request) const;

   /**
    * Adds an event handler for AddTagsToResourceAsync to call upon completion to the handler chain. You need to call this to
    * use AddTagsToResourceAsync.
    */
    inline void RegisterAddTagsToResourceOutcomeReceivedHandler(const AddTagsToResourceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAddTagsToResourceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AddTagsToResource.
    */
    inline void ClearAllAddTagsToResourceOutcomeReceivedHandlers()
    {
      m_onAddTagsToResourceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for AuthorizeCacheSecurityGroupIngressAsync to call upon completion to the handler chain. You need to call this to
    * use AuthorizeCacheSecurityGroupIngressAsync.
    */
    inline void RegisterAuthorizeCacheSecurityGroupIngressOutcomeReceivedHandler(const AuthorizeCacheSecurityGroupIngressOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAuthorizeCacheSecurityGroupIngressOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AuthorizeCacheSecurityGroupIngress.
    */
    inline void ClearAllAuthorizeCacheSecurityGroupIngressOutcomeReceivedHandlers()
    {
      m_onAuthorizeCacheSecurityGroupIngressOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CopySnapshotAsync to call upon completion to the handler chain. You need to call this to
    * use CopySnapshotAsync.
    */
    inline void RegisterCopySnapshotOutcomeReceivedHandler(const CopySnapshotOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCopySnapshotOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CopySnapshot.
    */
    inline void ClearAllCopySnapshotOutcomeReceivedHandlers()
    {
      m_onCopySnapshotOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateCacheClusterAsync to call upon completion to the handler chain. You need to call this to
    * use CreateCacheClusterAsync.
    */
    inline void RegisterCreateCacheClusterOutcomeReceivedHandler(const CreateCacheClusterOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateCacheClusterOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateCacheCluster.
    */
    inline void ClearAllCreateCacheClusterOutcomeReceivedHandlers()
    {
      m_onCreateCacheClusterOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateCacheParameterGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CreateCacheParameterGroupAsync.
    */
    inline void RegisterCreateCacheParameterGroupOutcomeReceivedHandler(const CreateCacheParameterGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateCacheParameterGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateCacheParameterGroup.
    */
    inline void ClearAllCreateCacheParameterGroupOutcomeReceivedHandlers()
    {
      m_onCreateCacheParameterGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateCacheSecurityGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CreateCacheSecurityGroupAsync.
    */
    inline void RegisterCreateCacheSecurityGroupOutcomeReceivedHandler(const CreateCacheSecurityGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateCacheSecurityGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateCacheSecurityGroup.
    */
    inline void ClearAllCreateCacheSecurityGroupOutcomeReceivedHandlers()
    {
      m_onCreateCacheSecurityGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateCacheSubnetGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CreateCacheSubnetGroupAsync.
    */
    inline void RegisterCreateCacheSubnetGroupOutcomeReceivedHandler(const CreateCacheSubnetGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateCacheSubnetGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateCacheSubnetGroup.
    */
    inline void ClearAllCreateCacheSubnetGroupOutcomeReceivedHandlers()
    {
      m_onCreateCacheSubnetGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateReplicationGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CreateReplicationGroupAsync.
    */
    inline void RegisterCreateReplicationGroupOutcomeReceivedHandler(const CreateReplicationGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateReplicationGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateReplicationGroup.
    */
    inline void ClearAllCreateReplicationGroupOutcomeReceivedHandlers()
    {
      m_onCreateReplicationGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateSnapshotAsync to call upon completion to the handler chain. You need to call this to
    * use CreateSnapshotAsync.
    */
    inline void RegisterCreateSnapshotOutcomeReceivedHandler(const CreateSnapshotOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateSnapshotOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateSnapshot.
    */
    inline void ClearAllCreateSnapshotOutcomeReceivedHandlers()
    {
      m_onCreateSnapshotOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteCacheClusterAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteCacheClusterAsync.
    */
    inline void RegisterDeleteCacheClusterOutcomeReceivedHandler(const DeleteCacheClusterOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteCacheClusterOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteCacheCluster.
    */
    inline void ClearAllDeleteCacheClusterOutcomeReceivedHandlers()
    {
      m_onDeleteCacheClusterOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteCacheParameterGroupAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteCacheParameterGroupAsync.
    */
    inline void RegisterDeleteCacheParameterGroupOutcomeReceivedHandler(const DeleteCacheParameterGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteCacheParameterGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteCacheParameterGroup.
    */
    inline void ClearAllDeleteCacheParameterGroupOutcomeReceivedHandlers()
    {
      m_onDeleteCacheParameterGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteCacheSecurityGroupAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteCacheSecurityGroupAsync.
    */
    inline void RegisterDeleteCacheSecurityGroupOutcomeReceivedHandler(const DeleteCacheSecurityGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteCacheSecurityGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteCacheSecurityGroup.
    */
    inline void ClearAllDeleteCacheSecurityGroupOutcomeReceivedHandlers()
    {
      m_onDeleteCacheSecurityGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteCacheSubnetGroupAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteCacheSubnetGroupAsync.
    */
    inline void RegisterDeleteCacheSubnetGroupOutcomeReceivedHandler(const DeleteCacheSubnetGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteCacheSubnetGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteCacheSubnetGroup.
    */
    inline void ClearAllDeleteCacheSubnetGroupOutcomeReceivedHandlers()
    {
      m_onDeleteCacheSubnetGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteReplicationGroupAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteReplicationGroupAsync.
    */
    inline void RegisterDeleteReplicationGroupOutcomeReceivedHandler(const DeleteReplicationGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteReplicationGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteReplicationGroup.
    */
    inline void ClearAllDeleteReplicationGroupOutcomeReceivedHandlers()
    {
      m_onDeleteReplicationGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteSnapshotAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteSnapshotAsync.
    */
    inline void RegisterDeleteSnapshotOutcomeReceivedHandler(const DeleteSnapshotOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteSnapshotOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteSnapshot.
    */
    inline void ClearAllDeleteSnapshotOutcomeReceivedHandlers()
    {
      m_onDeleteSnapshotOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeCacheClustersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeCacheClustersAsync.
    */
    inline void RegisterDescribeCacheClustersOutcomeReceivedHandler(const DescribeCacheClustersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeCacheClustersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeCacheClusters.
    */
    inline void ClearAllDescribeCacheClustersOutcomeReceivedHandlers()
    {
      m_onDescribeCacheClustersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeCacheEngineVersionsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeCacheEngineVersionsAsync.
    */
    inline void RegisterDescribeCacheEngineVersionsOutcomeReceivedHandler(const DescribeCacheEngineVersionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeCacheEngineVersionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeCacheEngineVersions.
    */
    inline void ClearAllDescribeCacheEngineVersionsOutcomeReceivedHandlers()
    {
      m_onDescribeCacheEngineVersionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeCacheParameterGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeCacheParameterGroupsAsync.
    */
    inline void RegisterDescribeCacheParameterGroupsOutcomeReceivedHandler(const DescribeCacheParameterGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeCacheParameterGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeCacheParameterGroups.
    */
    inline void ClearAllDescribeCacheParameterGroupsOutcomeReceivedHandlers()
    {
      m_onDescribeCacheParameterGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeCacheParametersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeCacheParametersAsync.
    */
    inline void RegisterDescribeCacheParametersOutcomeReceivedHandler(const DescribeCacheParametersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeCacheParametersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeCacheParameters.
    */
    inline void ClearAllDescribeCacheParametersOutcomeReceivedHandlers()
    {
      m_onDescribeCacheParametersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeCacheSecurityGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeCacheSecurityGroupsAsync.
    */
    inline void RegisterDescribeCacheSecurityGroupsOutcomeReceivedHandler(const DescribeCacheSecurityGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeCacheSecurityGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeCacheSecurityGroups.
    */
    inline void ClearAllDescribeCacheSecurityGroupsOutcomeReceivedHandlers()
    {
      m_onDescribeCacheSecurityGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeCacheSubnetGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeCacheSubnetGroupsAsync.
    */
    inline void RegisterDescribeCacheSubnetGroupsOutcomeReceivedHandler(const DescribeCacheSubnetGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeCacheSubnetGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeCacheSubnetGroups.
    */
    inline void ClearAllDescribeCacheSubnetGroupsOutcomeReceivedHandlers()
    {
      m_onDescribeCacheSubnetGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeEngineDefaultParametersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeEngineDefaultParametersAsync.
    */
    inline void RegisterDescribeEngineDefaultParametersOutcomeReceivedHandler(const DescribeEngineDefaultParametersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeEngineDefaultParametersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeEngineDefaultParameters.
    */
    inline void ClearAllDescribeEngineDefaultParametersOutcomeReceivedHandlers()
    {
      m_onDescribeEngineDefaultParametersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeEventsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeEventsAsync.
    */
    inline void RegisterDescribeEventsOutcomeReceivedHandler(const DescribeEventsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeEventsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeEvents.
    */
    inline void ClearAllDescribeEventsOutcomeReceivedHandlers()
    {
      m_onDescribeEventsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeReplicationGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeReplicationGroupsAsync.
    */
    inline void RegisterDescribeReplicationGroupsOutcomeReceivedHandler(const DescribeReplicationGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeReplicationGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeReplicationGroups.
    */
    inline void ClearAllDescribeReplicationGroupsOutcomeReceivedHandlers()
    {
      m_onDescribeReplicationGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeReservedCacheNodesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeReservedCacheNodesAsync.
    */
    inline void RegisterDescribeReservedCacheNodesOutcomeReceivedHandler(const DescribeReservedCacheNodesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeReservedCacheNodesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeReservedCacheNodes.
    */
    inline void ClearAllDescribeReservedCacheNodesOutcomeReceivedHandlers()
    {
      m_onDescribeReservedCacheNodesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeReservedCacheNodesOfferingsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeReservedCacheNodesOfferingsAsync.
    */
    inline void RegisterDescribeReservedCacheNodesOfferingsOutcomeReceivedHandler(const DescribeReservedCacheNodesOfferingsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeReservedCacheNodesOfferingsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeReservedCacheNodesOfferings.
    */
    inline void ClearAllDescribeReservedCacheNodesOfferingsOutcomeReceivedHandlers()
    {
      m_onDescribeReservedCacheNodesOfferingsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeSnapshotsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeSnapshotsAsync.
    */
    inline void RegisterDescribeSnapshotsOutcomeReceivedHandler(const DescribeSnapshotsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeSnapshotsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeSnapshots.
    */
    inline void ClearAllDescribeSnapshotsOutcomeReceivedHandlers()
    {
      m_onDescribeSnapshotsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListTagsForResourceAsync to call upon completion to the handler chain. You need to call this to
    * use ListTagsForResourceAsync.
    */
    inline void RegisterListTagsForResourceOutcomeReceivedHandler(const ListTagsForResourceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListTagsForResourceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListTagsForResource.
    */
    inline void ClearAllListTagsForResourceOutcomeReceivedHandlers()
    {
      m_onListTagsForResourceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyCacheClusterAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyCacheClusterAsync.
    */
    inline void RegisterModifyCacheClusterOutcomeReceivedHandler(const ModifyCacheClusterOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyCacheClusterOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyCacheCluster.
    */
    inline void ClearAllModifyCacheClusterOutcomeReceivedHandlers()
    {
      m_onModifyCacheClusterOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyCacheParameterGroupAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyCacheParameterGroupAsync.
    */
    inline void RegisterModifyCacheParameterGroupOutcomeReceivedHandler(const ModifyCacheParameterGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyCacheParameterGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyCacheParameterGroup.
    */
    inline void ClearAllModifyCacheParameterGroupOutcomeReceivedHandlers()
    {
      m_onModifyCacheParameterGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyCacheSubnetGroupAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyCacheSubnetGroupAsync.
    */
    inline void RegisterModifyCacheSubnetGroupOutcomeReceivedHandler(const ModifyCacheSubnetGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyCacheSubnetGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyCacheSubnetGroup.
    */
    inline void ClearAllModifyCacheSubnetGroupOutcomeReceivedHandlers()
    {
      m_onModifyCacheSubnetGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyReplicationGroupAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyReplicationGroupAsync.
    */
    inline void RegisterModifyReplicationGroupOutcomeReceivedHandler(const ModifyReplicationGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyReplicationGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyReplicationGroup.
    */
    inline void ClearAllModifyReplicationGroupOutcomeReceivedHandlers()
    {
      m_onModifyReplicationGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PurchaseReservedCacheNodesOfferingAsync to call upon completion to the handler chain. You need to call this to
    * use PurchaseReservedCacheNodesOfferingAsync.
    */
    inline void RegisterPurchaseReservedCacheNodesOfferingOutcomeReceivedHandler(const PurchaseReservedCacheNodesOfferingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPurchaseReservedCacheNodesOfferingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PurchaseReservedCacheNodesOffering.
    */
    inline void ClearAllPurchaseReservedCacheNodesOfferingOutcomeReceivedHandlers()
    {
      m_onPurchaseReservedCacheNodesOfferingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RebootCacheClusterAsync to call upon completion to the handler chain. You need to call this to
    * use RebootCacheClusterAsync.
    */
    inline void RegisterRebootCacheClusterOutcomeReceivedHandler(const RebootCacheClusterOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRebootCacheClusterOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RebootCacheCluster.
    */
    inline void ClearAllRebootCacheClusterOutcomeReceivedHandlers()
    {
      m_onRebootCacheClusterOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RemoveTagsFromResourceAsync to call upon completion to the handler chain. You need to call this to
    * use RemoveTagsFromResourceAsync.
    */
    inline void RegisterRemoveTagsFromResourceOutcomeReceivedHandler(const RemoveTagsFromResourceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRemoveTagsFromResourceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RemoveTagsFromResource.
    */
    inline void ClearAllRemoveTagsFromResourceOutcomeReceivedHandlers()
    {
      m_onRemoveTagsFromResourceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ResetCacheParameterGroupAsync to call upon completion to the handler chain. You need to call this to
    * use ResetCacheParameterGroupAsync.
    */
    inline void RegisterResetCacheParameterGroupOutcomeReceivedHandler(const ResetCacheParameterGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onResetCacheParameterGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ResetCacheParameterGroup.
    */
    inline void ClearAllResetCacheParameterGroupOutcomeReceivedHandlers()
    {
      m_onResetCacheParameterGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RevokeCacheSecurityGroupIngressAsync to call upon completion to the handler chain. You need to call this to
    * use RevokeCacheSecurityGroupIngressAsync.
    */
    inline void RegisterRevokeCacheSecurityGroupIngressOutcomeReceivedHandler(const RevokeCacheSecurityGroupIngressOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRevokeCacheSecurityGroupIngressOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RevokeCacheSecurityGroupIngress.
    */
    inline void ClearAllRevokeCacheSecurityGroupIngressOutcomeReceivedHandlers()
    {
      m_onRevokeCacheSecurityGroupIngressOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request) const;
    void AuthorizeCacheSecurityGroupIngressAsyncHelper(const Model::AuthorizeCacheSecurityGroupIngressRequest& request) const;
    void CopySnapshotAsyncHelper(const Model::CopySnapshotRequest& request) const;
    void CreateCacheClusterAsyncHelper(const Model::CreateCacheClusterRequest& request) const;
    void CreateCacheParameterGroupAsyncHelper(const Model::CreateCacheParameterGroupRequest& request) const;
    void CreateCacheSecurityGroupAsyncHelper(const Model::CreateCacheSecurityGroupRequest& request) const;
    void CreateCacheSubnetGroupAsyncHelper(const Model::CreateCacheSubnetGroupRequest& request) const;
    void CreateReplicationGroupAsyncHelper(const Model::CreateReplicationGroupRequest& request) const;
    void CreateSnapshotAsyncHelper(const Model::CreateSnapshotRequest& request) const;
    void DeleteCacheClusterAsyncHelper(const Model::DeleteCacheClusterRequest& request) const;
    void DeleteCacheParameterGroupAsyncHelper(const Model::DeleteCacheParameterGroupRequest& request) const;
    void DeleteCacheSecurityGroupAsyncHelper(const Model::DeleteCacheSecurityGroupRequest& request) const;
    void DeleteCacheSubnetGroupAsyncHelper(const Model::DeleteCacheSubnetGroupRequest& request) const;
    void DeleteReplicationGroupAsyncHelper(const Model::DeleteReplicationGroupRequest& request) const;
    void DeleteSnapshotAsyncHelper(const Model::DeleteSnapshotRequest& request) const;
    void DescribeCacheClustersAsyncHelper(const Model::DescribeCacheClustersRequest& request) const;
    void DescribeCacheEngineVersionsAsyncHelper(const Model::DescribeCacheEngineVersionsRequest& request) const;
    void DescribeCacheParameterGroupsAsyncHelper(const Model::DescribeCacheParameterGroupsRequest& request) const;
    void DescribeCacheParametersAsyncHelper(const Model::DescribeCacheParametersRequest& request) const;
    void DescribeCacheSecurityGroupsAsyncHelper(const Model::DescribeCacheSecurityGroupsRequest& request) const;
    void DescribeCacheSubnetGroupsAsyncHelper(const Model::DescribeCacheSubnetGroupsRequest& request) const;
    void DescribeEngineDefaultParametersAsyncHelper(const Model::DescribeEngineDefaultParametersRequest& request) const;
    void DescribeEventsAsyncHelper(const Model::DescribeEventsRequest& request) const;
    void DescribeReplicationGroupsAsyncHelper(const Model::DescribeReplicationGroupsRequest& request) const;
    void DescribeReservedCacheNodesAsyncHelper(const Model::DescribeReservedCacheNodesRequest& request) const;
    void DescribeReservedCacheNodesOfferingsAsyncHelper(const Model::DescribeReservedCacheNodesOfferingsRequest& request) const;
    void DescribeSnapshotsAsyncHelper(const Model::DescribeSnapshotsRequest& request) const;
    void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request) const;
    void ModifyCacheClusterAsyncHelper(const Model::ModifyCacheClusterRequest& request) const;
    void ModifyCacheParameterGroupAsyncHelper(const Model::ModifyCacheParameterGroupRequest& request) const;
    void ModifyCacheSubnetGroupAsyncHelper(const Model::ModifyCacheSubnetGroupRequest& request) const;
    void ModifyReplicationGroupAsyncHelper(const Model::ModifyReplicationGroupRequest& request) const;
    void PurchaseReservedCacheNodesOfferingAsyncHelper(const Model::PurchaseReservedCacheNodesOfferingRequest& request) const;
    void RebootCacheClusterAsyncHelper(const Model::RebootCacheClusterRequest& request) const;
    void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request) const;
    void ResetCacheParameterGroupAsyncHelper(const Model::ResetCacheParameterGroupRequest& request) const;
    void RevokeCacheSecurityGroupIngressAsyncHelper(const Model::RevokeCacheSecurityGroupIngressRequest& request) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    AddTagsToResourceOutcomeReceivedEvent m_onAddTagsToResourceOutcomeReceived;
    AuthorizeCacheSecurityGroupIngressOutcomeReceivedEvent m_onAuthorizeCacheSecurityGroupIngressOutcomeReceived;
    CopySnapshotOutcomeReceivedEvent m_onCopySnapshotOutcomeReceived;
    CreateCacheClusterOutcomeReceivedEvent m_onCreateCacheClusterOutcomeReceived;
    CreateCacheParameterGroupOutcomeReceivedEvent m_onCreateCacheParameterGroupOutcomeReceived;
    CreateCacheSecurityGroupOutcomeReceivedEvent m_onCreateCacheSecurityGroupOutcomeReceived;
    CreateCacheSubnetGroupOutcomeReceivedEvent m_onCreateCacheSubnetGroupOutcomeReceived;
    CreateReplicationGroupOutcomeReceivedEvent m_onCreateReplicationGroupOutcomeReceived;
    CreateSnapshotOutcomeReceivedEvent m_onCreateSnapshotOutcomeReceived;
    DeleteCacheClusterOutcomeReceivedEvent m_onDeleteCacheClusterOutcomeReceived;
    DeleteCacheParameterGroupOutcomeReceivedEvent m_onDeleteCacheParameterGroupOutcomeReceived;
    DeleteCacheSecurityGroupOutcomeReceivedEvent m_onDeleteCacheSecurityGroupOutcomeReceived;
    DeleteCacheSubnetGroupOutcomeReceivedEvent m_onDeleteCacheSubnetGroupOutcomeReceived;
    DeleteReplicationGroupOutcomeReceivedEvent m_onDeleteReplicationGroupOutcomeReceived;
    DeleteSnapshotOutcomeReceivedEvent m_onDeleteSnapshotOutcomeReceived;
    DescribeCacheClustersOutcomeReceivedEvent m_onDescribeCacheClustersOutcomeReceived;
    DescribeCacheEngineVersionsOutcomeReceivedEvent m_onDescribeCacheEngineVersionsOutcomeReceived;
    DescribeCacheParameterGroupsOutcomeReceivedEvent m_onDescribeCacheParameterGroupsOutcomeReceived;
    DescribeCacheParametersOutcomeReceivedEvent m_onDescribeCacheParametersOutcomeReceived;
    DescribeCacheSecurityGroupsOutcomeReceivedEvent m_onDescribeCacheSecurityGroupsOutcomeReceived;
    DescribeCacheSubnetGroupsOutcomeReceivedEvent m_onDescribeCacheSubnetGroupsOutcomeReceived;
    DescribeEngineDefaultParametersOutcomeReceivedEvent m_onDescribeEngineDefaultParametersOutcomeReceived;
    DescribeEventsOutcomeReceivedEvent m_onDescribeEventsOutcomeReceived;
    DescribeReplicationGroupsOutcomeReceivedEvent m_onDescribeReplicationGroupsOutcomeReceived;
    DescribeReservedCacheNodesOutcomeReceivedEvent m_onDescribeReservedCacheNodesOutcomeReceived;
    DescribeReservedCacheNodesOfferingsOutcomeReceivedEvent m_onDescribeReservedCacheNodesOfferingsOutcomeReceived;
    DescribeSnapshotsOutcomeReceivedEvent m_onDescribeSnapshotsOutcomeReceived;
    ListTagsForResourceOutcomeReceivedEvent m_onListTagsForResourceOutcomeReceived;
    ModifyCacheClusterOutcomeReceivedEvent m_onModifyCacheClusterOutcomeReceived;
    ModifyCacheParameterGroupOutcomeReceivedEvent m_onModifyCacheParameterGroupOutcomeReceived;
    ModifyCacheSubnetGroupOutcomeReceivedEvent m_onModifyCacheSubnetGroupOutcomeReceived;
    ModifyReplicationGroupOutcomeReceivedEvent m_onModifyReplicationGroupOutcomeReceived;
    PurchaseReservedCacheNodesOfferingOutcomeReceivedEvent m_onPurchaseReservedCacheNodesOfferingOutcomeReceived;
    RebootCacheClusterOutcomeReceivedEvent m_onRebootCacheClusterOutcomeReceived;
    RemoveTagsFromResourceOutcomeReceivedEvent m_onRemoveTagsFromResourceOutcomeReceived;
    ResetCacheParameterGroupOutcomeReceivedEvent m_onResetCacheParameterGroupOutcomeReceived;
    RevokeCacheSecurityGroupIngressOutcomeReceivedEvent m_onRevokeCacheSecurityGroupIngressOutcomeReceived;
  };

} // namespace ElastiCache
} // namespace Aws
