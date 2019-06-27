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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/BatchGetItemResult.h>
#include <aws/dynamodb/model/BatchWriteItemResult.h>
#include <aws/dynamodb/model/CreateBackupResult.h>
#include <aws/dynamodb/model/CreateGlobalTableResult.h>
#include <aws/dynamodb/model/CreateTableResult.h>
#include <aws/dynamodb/model/DeleteBackupResult.h>
#include <aws/dynamodb/model/DeleteItemResult.h>
#include <aws/dynamodb/model/DeleteTableResult.h>
#include <aws/dynamodb/model/DescribeBackupResult.h>
#include <aws/dynamodb/model/DescribeContinuousBackupsResult.h>
#include <aws/dynamodb/model/DescribeEndpointsResult.h>
#include <aws/dynamodb/model/DescribeGlobalTableResult.h>
#include <aws/dynamodb/model/DescribeGlobalTableSettingsResult.h>
#include <aws/dynamodb/model/DescribeLimitsResult.h>
#include <aws/dynamodb/model/DescribeTableResult.h>
#include <aws/dynamodb/model/DescribeTimeToLiveResult.h>
#include <aws/dynamodb/model/GetItemResult.h>
#include <aws/dynamodb/model/ListBackupsResult.h>
#include <aws/dynamodb/model/ListGlobalTablesResult.h>
#include <aws/dynamodb/model/ListTablesResult.h>
#include <aws/dynamodb/model/ListTagsOfResourceResult.h>
#include <aws/dynamodb/model/PutItemResult.h>
#include <aws/dynamodb/model/QueryResult.h>
#include <aws/dynamodb/model/RestoreTableFromBackupResult.h>
#include <aws/dynamodb/model/RestoreTableToPointInTimeResult.h>
#include <aws/dynamodb/model/ScanResult.h>
#include <aws/dynamodb/model/TransactGetItemsResult.h>
#include <aws/dynamodb/model/TransactWriteItemsResult.h>
#include <aws/dynamodb/model/UpdateContinuousBackupsResult.h>
#include <aws/dynamodb/model/UpdateGlobalTableResult.h>
#include <aws/dynamodb/model/UpdateGlobalTableSettingsResult.h>
#include <aws/dynamodb/model/UpdateItemResult.h>
#include <aws/dynamodb/model/UpdateTableResult.h>
#include <aws/dynamodb/model/UpdateTimeToLiveResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/ConcurrentCache.h>
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

namespace DynamoDB
{

namespace Model
{
        class BatchGetItemRequest;
        class BatchWriteItemRequest;
        class CreateBackupRequest;
        class CreateGlobalTableRequest;
        class CreateTableRequest;
        class DeleteBackupRequest;
        class DeleteItemRequest;
        class DeleteTableRequest;
        class DescribeBackupRequest;
        class DescribeContinuousBackupsRequest;
        class DescribeEndpointsRequest;
        class DescribeGlobalTableRequest;
        class DescribeGlobalTableSettingsRequest;
        class DescribeLimitsRequest;
        class DescribeTableRequest;
        class DescribeTimeToLiveRequest;
        class GetItemRequest;
        class ListBackupsRequest;
        class ListGlobalTablesRequest;
        class ListTablesRequest;
        class ListTagsOfResourceRequest;
        class PutItemRequest;
        class QueryRequest;
        class RestoreTableFromBackupRequest;
        class RestoreTableToPointInTimeRequest;
        class ScanRequest;
        class TagResourceRequest;
        class TransactGetItemsRequest;
        class TransactWriteItemsRequest;
        class UntagResourceRequest;
        class UpdateContinuousBackupsRequest;
        class UpdateGlobalTableRequest;
        class UpdateGlobalTableSettingsRequest;
        class UpdateItemRequest;
        class UpdateTableRequest;
        class UpdateTimeToLiveRequest;

        typedef Aws::Utils::Outcome<BatchGetItemResult, Aws::Client::AWSError<DynamoDBErrors>> BatchGetItemOutcome;
        typedef Aws::Utils::Outcome<BatchWriteItemResult, Aws::Client::AWSError<DynamoDBErrors>> BatchWriteItemOutcome;
        typedef Aws::Utils::Outcome<CreateBackupResult, Aws::Client::AWSError<DynamoDBErrors>> CreateBackupOutcome;
        typedef Aws::Utils::Outcome<CreateGlobalTableResult, Aws::Client::AWSError<DynamoDBErrors>> CreateGlobalTableOutcome;
        typedef Aws::Utils::Outcome<CreateTableResult, Aws::Client::AWSError<DynamoDBErrors>> CreateTableOutcome;
        typedef Aws::Utils::Outcome<DeleteBackupResult, Aws::Client::AWSError<DynamoDBErrors>> DeleteBackupOutcome;
        typedef Aws::Utils::Outcome<DeleteItemResult, Aws::Client::AWSError<DynamoDBErrors>> DeleteItemOutcome;
        typedef Aws::Utils::Outcome<DeleteTableResult, Aws::Client::AWSError<DynamoDBErrors>> DeleteTableOutcome;
        typedef Aws::Utils::Outcome<DescribeBackupResult, Aws::Client::AWSError<DynamoDBErrors>> DescribeBackupOutcome;
        typedef Aws::Utils::Outcome<DescribeContinuousBackupsResult, Aws::Client::AWSError<DynamoDBErrors>> DescribeContinuousBackupsOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointsResult, Aws::Client::AWSError<DynamoDBErrors>> DescribeEndpointsOutcome;
        typedef Aws::Utils::Outcome<DescribeGlobalTableResult, Aws::Client::AWSError<DynamoDBErrors>> DescribeGlobalTableOutcome;
        typedef Aws::Utils::Outcome<DescribeGlobalTableSettingsResult, Aws::Client::AWSError<DynamoDBErrors>> DescribeGlobalTableSettingsOutcome;
        typedef Aws::Utils::Outcome<DescribeLimitsResult, Aws::Client::AWSError<DynamoDBErrors>> DescribeLimitsOutcome;
        typedef Aws::Utils::Outcome<DescribeTableResult, Aws::Client::AWSError<DynamoDBErrors>> DescribeTableOutcome;
        typedef Aws::Utils::Outcome<DescribeTimeToLiveResult, Aws::Client::AWSError<DynamoDBErrors>> DescribeTimeToLiveOutcome;
        typedef Aws::Utils::Outcome<GetItemResult, Aws::Client::AWSError<DynamoDBErrors>> GetItemOutcome;
        typedef Aws::Utils::Outcome<ListBackupsResult, Aws::Client::AWSError<DynamoDBErrors>> ListBackupsOutcome;
        typedef Aws::Utils::Outcome<ListGlobalTablesResult, Aws::Client::AWSError<DynamoDBErrors>> ListGlobalTablesOutcome;
        typedef Aws::Utils::Outcome<ListTablesResult, Aws::Client::AWSError<DynamoDBErrors>> ListTablesOutcome;
        typedef Aws::Utils::Outcome<ListTagsOfResourceResult, Aws::Client::AWSError<DynamoDBErrors>> ListTagsOfResourceOutcome;
        typedef Aws::Utils::Outcome<PutItemResult, Aws::Client::AWSError<DynamoDBErrors>> PutItemOutcome;
        typedef Aws::Utils::Outcome<QueryResult, Aws::Client::AWSError<DynamoDBErrors>> QueryOutcome;
        typedef Aws::Utils::Outcome<RestoreTableFromBackupResult, Aws::Client::AWSError<DynamoDBErrors>> RestoreTableFromBackupOutcome;
        typedef Aws::Utils::Outcome<RestoreTableToPointInTimeResult, Aws::Client::AWSError<DynamoDBErrors>> RestoreTableToPointInTimeOutcome;
        typedef Aws::Utils::Outcome<ScanResult, Aws::Client::AWSError<DynamoDBErrors>> ScanOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<DynamoDBErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<TransactGetItemsResult, Aws::Client::AWSError<DynamoDBErrors>> TransactGetItemsOutcome;
        typedef Aws::Utils::Outcome<TransactWriteItemsResult, Aws::Client::AWSError<DynamoDBErrors>> TransactWriteItemsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<DynamoDBErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateContinuousBackupsResult, Aws::Client::AWSError<DynamoDBErrors>> UpdateContinuousBackupsOutcome;
        typedef Aws::Utils::Outcome<UpdateGlobalTableResult, Aws::Client::AWSError<DynamoDBErrors>> UpdateGlobalTableOutcome;
        typedef Aws::Utils::Outcome<UpdateGlobalTableSettingsResult, Aws::Client::AWSError<DynamoDBErrors>> UpdateGlobalTableSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateItemResult, Aws::Client::AWSError<DynamoDBErrors>> UpdateItemOutcome;
        typedef Aws::Utils::Outcome<UpdateTableResult, Aws::Client::AWSError<DynamoDBErrors>> UpdateTableOutcome;
        typedef Aws::Utils::Outcome<UpdateTimeToLiveResult, Aws::Client::AWSError<DynamoDBErrors>> UpdateTimeToLiveOutcome;

        typedef std::future<BatchGetItemOutcome> BatchGetItemOutcomeCallable;
        typedef std::future<BatchWriteItemOutcome> BatchWriteItemOutcomeCallable;
        typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
        typedef std::future<CreateGlobalTableOutcome> CreateGlobalTableOutcomeCallable;
        typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
        typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
        typedef std::future<DeleteItemOutcome> DeleteItemOutcomeCallable;
        typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
        typedef std::future<DescribeBackupOutcome> DescribeBackupOutcomeCallable;
        typedef std::future<DescribeContinuousBackupsOutcome> DescribeContinuousBackupsOutcomeCallable;
        typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
        typedef std::future<DescribeGlobalTableOutcome> DescribeGlobalTableOutcomeCallable;
        typedef std::future<DescribeGlobalTableSettingsOutcome> DescribeGlobalTableSettingsOutcomeCallable;
        typedef std::future<DescribeLimitsOutcome> DescribeLimitsOutcomeCallable;
        typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
        typedef std::future<DescribeTimeToLiveOutcome> DescribeTimeToLiveOutcomeCallable;
        typedef std::future<GetItemOutcome> GetItemOutcomeCallable;
        typedef std::future<ListBackupsOutcome> ListBackupsOutcomeCallable;
        typedef std::future<ListGlobalTablesOutcome> ListGlobalTablesOutcomeCallable;
        typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
        typedef std::future<ListTagsOfResourceOutcome> ListTagsOfResourceOutcomeCallable;
        typedef std::future<PutItemOutcome> PutItemOutcomeCallable;
        typedef std::future<QueryOutcome> QueryOutcomeCallable;
        typedef std::future<RestoreTableFromBackupOutcome> RestoreTableFromBackupOutcomeCallable;
        typedef std::future<RestoreTableToPointInTimeOutcome> RestoreTableToPointInTimeOutcomeCallable;
        typedef std::future<ScanOutcome> ScanOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<TransactGetItemsOutcome> TransactGetItemsOutcomeCallable;
        typedef std::future<TransactWriteItemsOutcome> TransactWriteItemsOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateContinuousBackupsOutcome> UpdateContinuousBackupsOutcomeCallable;
        typedef std::future<UpdateGlobalTableOutcome> UpdateGlobalTableOutcomeCallable;
        typedef std::future<UpdateGlobalTableSettingsOutcome> UpdateGlobalTableSettingsOutcomeCallable;
        typedef std::future<UpdateItemOutcome> UpdateItemOutcomeCallable;
        typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
        typedef std::future<UpdateTimeToLiveOutcome> UpdateTimeToLiveOutcomeCallable;
} // namespace Model

  class DynamoDBClient;

    typedef std::function<void(const DynamoDBClient*, const Model::BatchGetItemRequest&, const Model::BatchGetItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::BatchWriteItemRequest&, const Model::BatchWriteItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchWriteItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::CreateBackupRequest&, const Model::CreateBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::CreateGlobalTableRequest&, const Model::CreateGlobalTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGlobalTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::CreateTableRequest&, const Model::CreateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DeleteBackupRequest&, const Model::DeleteBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DeleteItemRequest&, const Model::DeleteItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DeleteTableRequest&, const Model::DeleteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeBackupRequest&, const Model::DescribeBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBackupResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeContinuousBackupsRequest&, const Model::DescribeContinuousBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContinuousBackupsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeEndpointsRequest&, const Model::DescribeEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeGlobalTableRequest&, const Model::DescribeGlobalTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGlobalTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeGlobalTableSettingsRequest&, const Model::DescribeGlobalTableSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGlobalTableSettingsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeLimitsRequest&, const Model::DescribeLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLimitsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeTableRequest&, const Model::DescribeTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeTimeToLiveRequest&, const Model::DescribeTimeToLiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTimeToLiveResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::GetItemRequest&, const Model::GetItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ListBackupsRequest&, const Model::ListBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBackupsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ListGlobalTablesRequest&, const Model::ListGlobalTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGlobalTablesResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ListTablesRequest&, const Model::ListTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTablesResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ListTagsOfResourceRequest&, const Model::ListTagsOfResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsOfResourceResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::PutItemRequest&, const Model::PutItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::QueryRequest&, const Model::QueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::RestoreTableFromBackupRequest&, const Model::RestoreTableFromBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreTableFromBackupResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::RestoreTableToPointInTimeRequest&, const Model::RestoreTableToPointInTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreTableToPointInTimeResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ScanRequest&, const Model::ScanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ScanResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::TransactGetItemsRequest&, const Model::TransactGetItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransactGetItemsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::TransactWriteItemsRequest&, const Model::TransactWriteItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransactWriteItemsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateContinuousBackupsRequest&, const Model::UpdateContinuousBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContinuousBackupsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateGlobalTableRequest&, const Model::UpdateGlobalTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlobalTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateGlobalTableSettingsRequest&, const Model::UpdateGlobalTableSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlobalTableSettingsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateItemRequest&, const Model::UpdateItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateTableRequest&, const Model::UpdateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateTimeToLiveRequest&, const Model::UpdateTimeToLiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTimeToLiveResponseReceivedHandler;

  /**
   * <fullname>Amazon DynamoDB</fullname> <p>Amazon DynamoDB is a fully managed NoSQL
   * database service that provides fast and predictable performance with seamless
   * scalability. DynamoDB lets you offload the administrative burdens of operating
   * and scaling a distributed database, so that you don't have to worry about
   * hardware provisioning, setup and configuration, replication, software patching,
   * or cluster scaling.</p> <p>With DynamoDB, you can create database tables that
   * can store and retrieve any amount of data, and serve any level of request
   * traffic. You can scale up or scale down your tables' throughput capacity without
   * downtime or performance degradation, and use the AWS Management Console to
   * monitor resource utilization and performance metrics.</p> <p>DynamoDB
   * automatically spreads the data and traffic for your tables over a sufficient
   * number of servers to handle your throughput and storage requirements, while
   * maintaining consistent and fast performance. All of your data is stored on solid
   * state disks (SSDs) and automatically replicated across multiple Availability
   * Zones in an AWS region, providing built-in high availability and data
   * durability. </p>
   */
  class AWS_DYNAMODB_API DynamoDBClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DynamoDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~DynamoDBClient();

        inline virtual const char* GetServiceClientName() const override { return "DynamoDB"; }


        /**
         * <p>The <code>BatchGetItem</code> operation returns the attributes of one or more
         * items from one or more tables. You identify requested items by primary key.</p>
         * <p>A single operation can retrieve up to 16 MB of data, which can contain as
         * many as 100 items. <code>BatchGetItem</code> returns a partial result if the
         * response size limit is exceeded, the table's provisioned throughput is exceeded,
         * or an internal processing failure occurs. If a partial result is returned, the
         * operation returns a value for <code>UnprocessedKeys</code>. You can use this
         * value to retry the operation starting with the next item to get.</p> <important>
         * <p>If you request more than 100 items, <code>BatchGetItem</code> returns a
         * <code>ValidationException</code> with the message "Too many items requested for
         * the BatchGetItem call."</p> </important> <p>For example, if you ask to retrieve
         * 100 items, but each individual item is 300 KB in size, the system returns 52
         * items (so as not to exceed the 16 MB limit). It also returns an appropriate
         * <code>UnprocessedKeys</code> value so you can get the next page of results. If
         * desired, your application can include its own logic to assemble the pages of
         * results into one dataset.</p> <p>If <i>none</i> of the items can be processed
         * due to insufficient provisioned throughput on all of the tables in the request,
         * then <code>BatchGetItem</code> returns a
         * <code>ProvisionedThroughputExceededException</code>. If <i>at least one</i> of
         * the items is successfully processed, then <code>BatchGetItem</code> completes
         * successfully, while returning the keys of the unread items in
         * <code>UnprocessedKeys</code>.</p> <important> <p>If DynamoDB returns any
         * unprocessed items, you should retry the batch operation on those items. However,
         * <i>we strongly recommend that you use an exponential backoff algorithm</i>. If
         * you retry the batch operation immediately, the underlying read or write requests
         * can still fail due to throttling on the individual tables. If you delay the
         * batch operation using exponential backoff, the individual requests in the batch
         * are much more likely to succeed.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ErrorHandling.html#BatchOperations">Batch
         * Operations and Error Handling</a> in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p> </important> <p>By default, <code>BatchGetItem</code> performs
         * eventually consistent reads on every table in the request. If you want strongly
         * consistent reads instead, you can set <code>ConsistentRead</code> to
         * <code>true</code> for any or all tables.</p> <p>In order to minimize response
         * latency, <code>BatchGetItem</code> retrieves items in parallel.</p> <p>When
         * designing your application, keep in mind that DynamoDB does not return items in
         * any particular order. To help parse the response by item, include the primary
         * key values for the items in your request in the
         * <code>ProjectionExpression</code> parameter.</p> <p>If a requested item does not
         * exist, it is not returned in the result. Requests for nonexistent items consume
         * the minimum read capacity units according to the type of read. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#CapacityUnitCalculations">Working
         * with Tables</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchGetItem">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetItemOutcome BatchGetItem(const Model::BatchGetItemRequest& request) const;

        /**
         * <p>The <code>BatchGetItem</code> operation returns the attributes of one or more
         * items from one or more tables. You identify requested items by primary key.</p>
         * <p>A single operation can retrieve up to 16 MB of data, which can contain as
         * many as 100 items. <code>BatchGetItem</code> returns a partial result if the
         * response size limit is exceeded, the table's provisioned throughput is exceeded,
         * or an internal processing failure occurs. If a partial result is returned, the
         * operation returns a value for <code>UnprocessedKeys</code>. You can use this
         * value to retry the operation starting with the next item to get.</p> <important>
         * <p>If you request more than 100 items, <code>BatchGetItem</code> returns a
         * <code>ValidationException</code> with the message "Too many items requested for
         * the BatchGetItem call."</p> </important> <p>For example, if you ask to retrieve
         * 100 items, but each individual item is 300 KB in size, the system returns 52
         * items (so as not to exceed the 16 MB limit). It also returns an appropriate
         * <code>UnprocessedKeys</code> value so you can get the next page of results. If
         * desired, your application can include its own logic to assemble the pages of
         * results into one dataset.</p> <p>If <i>none</i> of the items can be processed
         * due to insufficient provisioned throughput on all of the tables in the request,
         * then <code>BatchGetItem</code> returns a
         * <code>ProvisionedThroughputExceededException</code>. If <i>at least one</i> of
         * the items is successfully processed, then <code>BatchGetItem</code> completes
         * successfully, while returning the keys of the unread items in
         * <code>UnprocessedKeys</code>.</p> <important> <p>If DynamoDB returns any
         * unprocessed items, you should retry the batch operation on those items. However,
         * <i>we strongly recommend that you use an exponential backoff algorithm</i>. If
         * you retry the batch operation immediately, the underlying read or write requests
         * can still fail due to throttling on the individual tables. If you delay the
         * batch operation using exponential backoff, the individual requests in the batch
         * are much more likely to succeed.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ErrorHandling.html#BatchOperations">Batch
         * Operations and Error Handling</a> in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p> </important> <p>By default, <code>BatchGetItem</code> performs
         * eventually consistent reads on every table in the request. If you want strongly
         * consistent reads instead, you can set <code>ConsistentRead</code> to
         * <code>true</code> for any or all tables.</p> <p>In order to minimize response
         * latency, <code>BatchGetItem</code> retrieves items in parallel.</p> <p>When
         * designing your application, keep in mind that DynamoDB does not return items in
         * any particular order. To help parse the response by item, include the primary
         * key values for the items in your request in the
         * <code>ProjectionExpression</code> parameter.</p> <p>If a requested item does not
         * exist, it is not returned in the result. Requests for nonexistent items consume
         * the minimum read capacity units according to the type of read. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#CapacityUnitCalculations">Working
         * with Tables</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchGetItem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetItemOutcomeCallable BatchGetItemCallable(const Model::BatchGetItemRequest& request) const;

        /**
         * <p>The <code>BatchGetItem</code> operation returns the attributes of one or more
         * items from one or more tables. You identify requested items by primary key.</p>
         * <p>A single operation can retrieve up to 16 MB of data, which can contain as
         * many as 100 items. <code>BatchGetItem</code> returns a partial result if the
         * response size limit is exceeded, the table's provisioned throughput is exceeded,
         * or an internal processing failure occurs. If a partial result is returned, the
         * operation returns a value for <code>UnprocessedKeys</code>. You can use this
         * value to retry the operation starting with the next item to get.</p> <important>
         * <p>If you request more than 100 items, <code>BatchGetItem</code> returns a
         * <code>ValidationException</code> with the message "Too many items requested for
         * the BatchGetItem call."</p> </important> <p>For example, if you ask to retrieve
         * 100 items, but each individual item is 300 KB in size, the system returns 52
         * items (so as not to exceed the 16 MB limit). It also returns an appropriate
         * <code>UnprocessedKeys</code> value so you can get the next page of results. If
         * desired, your application can include its own logic to assemble the pages of
         * results into one dataset.</p> <p>If <i>none</i> of the items can be processed
         * due to insufficient provisioned throughput on all of the tables in the request,
         * then <code>BatchGetItem</code> returns a
         * <code>ProvisionedThroughputExceededException</code>. If <i>at least one</i> of
         * the items is successfully processed, then <code>BatchGetItem</code> completes
         * successfully, while returning the keys of the unread items in
         * <code>UnprocessedKeys</code>.</p> <important> <p>If DynamoDB returns any
         * unprocessed items, you should retry the batch operation on those items. However,
         * <i>we strongly recommend that you use an exponential backoff algorithm</i>. If
         * you retry the batch operation immediately, the underlying read or write requests
         * can still fail due to throttling on the individual tables. If you delay the
         * batch operation using exponential backoff, the individual requests in the batch
         * are much more likely to succeed.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ErrorHandling.html#BatchOperations">Batch
         * Operations and Error Handling</a> in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p> </important> <p>By default, <code>BatchGetItem</code> performs
         * eventually consistent reads on every table in the request. If you want strongly
         * consistent reads instead, you can set <code>ConsistentRead</code> to
         * <code>true</code> for any or all tables.</p> <p>In order to minimize response
         * latency, <code>BatchGetItem</code> retrieves items in parallel.</p> <p>When
         * designing your application, keep in mind that DynamoDB does not return items in
         * any particular order. To help parse the response by item, include the primary
         * key values for the items in your request in the
         * <code>ProjectionExpression</code> parameter.</p> <p>If a requested item does not
         * exist, it is not returned in the result. Requests for nonexistent items consume
         * the minimum read capacity units according to the type of read. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#CapacityUnitCalculations">Working
         * with Tables</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchGetItem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetItemAsync(const Model::BatchGetItemRequest& request, const BatchGetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>BatchWriteItem</code> operation puts or deletes multiple items in
         * one or more tables. A single call to <code>BatchWriteItem</code> can write up to
         * 16 MB of data, which can comprise as many as 25 put or delete requests.
         * Individual items to be written can be as large as 400 KB.</p> <note> <p>
         * <code>BatchWriteItem</code> cannot update items. To update items, use the
         * <code>UpdateItem</code> action.</p> </note> <p>The individual
         * <code>PutItem</code> and <code>DeleteItem</code> operations specified in
         * <code>BatchWriteItem</code> are atomic; however <code>BatchWriteItem</code> as a
         * whole is not. If any requested operations fail because the table's provisioned
         * throughput is exceeded or an internal processing failure occurs, the failed
         * operations are returned in the <code>UnprocessedItems</code> response parameter.
         * You can investigate and optionally resend the requests. Typically, you would
         * call <code>BatchWriteItem</code> in a loop. Each iteration would check for
         * unprocessed items and submit a new <code>BatchWriteItem</code> request with
         * those unprocessed items until all items have been processed.</p> <p>If
         * <i>none</i> of the items can be processed due to insufficient provisioned
         * throughput on all of the tables in the request, then <code>BatchWriteItem</code>
         * returns a <code>ProvisionedThroughputExceededException</code>.</p> <important>
         * <p>If DynamoDB returns any unprocessed items, you should retry the batch
         * operation on those items. However, <i>we strongly recommend that you use an
         * exponential backoff algorithm</i>. If you retry the batch operation immediately,
         * the underlying read or write requests can still fail due to throttling on the
         * individual tables. If you delay the batch operation using exponential backoff,
         * the individual requests in the batch are much more likely to succeed.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ErrorHandling.html#Programming.Errors.BatchOperations">Batch
         * Operations and Error Handling</a> in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p> </important> <p>With <code>BatchWriteItem</code>, you can
         * efficiently write or delete large amounts of data, such as from Amazon EMR, or
         * copy data from another database into DynamoDB. In order to improve performance
         * with these large-scale operations, <code>BatchWriteItem</code> does not behave
         * in the same way as individual <code>PutItem</code> and <code>DeleteItem</code>
         * calls would. For example, you cannot specify conditions on individual put and
         * delete requests, and <code>BatchWriteItem</code> does not return deleted items
         * in the response.</p> <p>If you use a programming language that supports
         * concurrency, you can use threads to write items in parallel. Your application
         * must include the necessary logic to manage the threads. With languages that
         * don't support threading, you must update or delete the specified items one at a
         * time. In both situations, <code>BatchWriteItem</code> performs the specified put
         * and delete operations in parallel, giving you the power of the thread pool
         * approach without having to introduce complexity into your application.</p>
         * <p>Parallel processing reduces latency, but each specified put and delete
         * request consumes the same number of write capacity units whether it is processed
         * in parallel or not. Delete operations on nonexistent items consume one write
         * capacity unit.</p> <p>If one or more of the following is true, DynamoDB rejects
         * the entire batch write operation:</p> <ul> <li> <p>One or more tables specified
         * in the <code>BatchWriteItem</code> request does not exist.</p> </li> <li>
         * <p>Primary key attributes specified on an item in the request do not match those
         * in the corresponding table's primary key schema.</p> </li> <li> <p>You try to
         * perform multiple operations on the same item in the same
         * <code>BatchWriteItem</code> request. For example, you cannot put and delete the
         * same item in the same <code>BatchWriteItem</code> request. </p> </li> <li> <p>
         * Your request contains at least two items with identical hash and range keys
         * (which essentially is two put operations). </p> </li> <li> <p>There are more
         * than 25 requests in the batch.</p> </li> <li> <p>Any individual item in a batch
         * exceeds 400 KB.</p> </li> <li> <p>The total request size exceeds 16 MB.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchWriteItem">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchWriteItemOutcome BatchWriteItem(const Model::BatchWriteItemRequest& request) const;

        /**
         * <p>The <code>BatchWriteItem</code> operation puts or deletes multiple items in
         * one or more tables. A single call to <code>BatchWriteItem</code> can write up to
         * 16 MB of data, which can comprise as many as 25 put or delete requests.
         * Individual items to be written can be as large as 400 KB.</p> <note> <p>
         * <code>BatchWriteItem</code> cannot update items. To update items, use the
         * <code>UpdateItem</code> action.</p> </note> <p>The individual
         * <code>PutItem</code> and <code>DeleteItem</code> operations specified in
         * <code>BatchWriteItem</code> are atomic; however <code>BatchWriteItem</code> as a
         * whole is not. If any requested operations fail because the table's provisioned
         * throughput is exceeded or an internal processing failure occurs, the failed
         * operations are returned in the <code>UnprocessedItems</code> response parameter.
         * You can investigate and optionally resend the requests. Typically, you would
         * call <code>BatchWriteItem</code> in a loop. Each iteration would check for
         * unprocessed items and submit a new <code>BatchWriteItem</code> request with
         * those unprocessed items until all items have been processed.</p> <p>If
         * <i>none</i> of the items can be processed due to insufficient provisioned
         * throughput on all of the tables in the request, then <code>BatchWriteItem</code>
         * returns a <code>ProvisionedThroughputExceededException</code>.</p> <important>
         * <p>If DynamoDB returns any unprocessed items, you should retry the batch
         * operation on those items. However, <i>we strongly recommend that you use an
         * exponential backoff algorithm</i>. If you retry the batch operation immediately,
         * the underlying read or write requests can still fail due to throttling on the
         * individual tables. If you delay the batch operation using exponential backoff,
         * the individual requests in the batch are much more likely to succeed.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ErrorHandling.html#Programming.Errors.BatchOperations">Batch
         * Operations and Error Handling</a> in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p> </important> <p>With <code>BatchWriteItem</code>, you can
         * efficiently write or delete large amounts of data, such as from Amazon EMR, or
         * copy data from another database into DynamoDB. In order to improve performance
         * with these large-scale operations, <code>BatchWriteItem</code> does not behave
         * in the same way as individual <code>PutItem</code> and <code>DeleteItem</code>
         * calls would. For example, you cannot specify conditions on individual put and
         * delete requests, and <code>BatchWriteItem</code> does not return deleted items
         * in the response.</p> <p>If you use a programming language that supports
         * concurrency, you can use threads to write items in parallel. Your application
         * must include the necessary logic to manage the threads. With languages that
         * don't support threading, you must update or delete the specified items one at a
         * time. In both situations, <code>BatchWriteItem</code> performs the specified put
         * and delete operations in parallel, giving you the power of the thread pool
         * approach without having to introduce complexity into your application.</p>
         * <p>Parallel processing reduces latency, but each specified put and delete
         * request consumes the same number of write capacity units whether it is processed
         * in parallel or not. Delete operations on nonexistent items consume one write
         * capacity unit.</p> <p>If one or more of the following is true, DynamoDB rejects
         * the entire batch write operation:</p> <ul> <li> <p>One or more tables specified
         * in the <code>BatchWriteItem</code> request does not exist.</p> </li> <li>
         * <p>Primary key attributes specified on an item in the request do not match those
         * in the corresponding table's primary key schema.</p> </li> <li> <p>You try to
         * perform multiple operations on the same item in the same
         * <code>BatchWriteItem</code> request. For example, you cannot put and delete the
         * same item in the same <code>BatchWriteItem</code> request. </p> </li> <li> <p>
         * Your request contains at least two items with identical hash and range keys
         * (which essentially is two put operations). </p> </li> <li> <p>There are more
         * than 25 requests in the batch.</p> </li> <li> <p>Any individual item in a batch
         * exceeds 400 KB.</p> </li> <li> <p>The total request size exceeds 16 MB.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchWriteItem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchWriteItemOutcomeCallable BatchWriteItemCallable(const Model::BatchWriteItemRequest& request) const;

        /**
         * <p>The <code>BatchWriteItem</code> operation puts or deletes multiple items in
         * one or more tables. A single call to <code>BatchWriteItem</code> can write up to
         * 16 MB of data, which can comprise as many as 25 put or delete requests.
         * Individual items to be written can be as large as 400 KB.</p> <note> <p>
         * <code>BatchWriteItem</code> cannot update items. To update items, use the
         * <code>UpdateItem</code> action.</p> </note> <p>The individual
         * <code>PutItem</code> and <code>DeleteItem</code> operations specified in
         * <code>BatchWriteItem</code> are atomic; however <code>BatchWriteItem</code> as a
         * whole is not. If any requested operations fail because the table's provisioned
         * throughput is exceeded or an internal processing failure occurs, the failed
         * operations are returned in the <code>UnprocessedItems</code> response parameter.
         * You can investigate and optionally resend the requests. Typically, you would
         * call <code>BatchWriteItem</code> in a loop. Each iteration would check for
         * unprocessed items and submit a new <code>BatchWriteItem</code> request with
         * those unprocessed items until all items have been processed.</p> <p>If
         * <i>none</i> of the items can be processed due to insufficient provisioned
         * throughput on all of the tables in the request, then <code>BatchWriteItem</code>
         * returns a <code>ProvisionedThroughputExceededException</code>.</p> <important>
         * <p>If DynamoDB returns any unprocessed items, you should retry the batch
         * operation on those items. However, <i>we strongly recommend that you use an
         * exponential backoff algorithm</i>. If you retry the batch operation immediately,
         * the underlying read or write requests can still fail due to throttling on the
         * individual tables. If you delay the batch operation using exponential backoff,
         * the individual requests in the batch are much more likely to succeed.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ErrorHandling.html#Programming.Errors.BatchOperations">Batch
         * Operations and Error Handling</a> in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p> </important> <p>With <code>BatchWriteItem</code>, you can
         * efficiently write or delete large amounts of data, such as from Amazon EMR, or
         * copy data from another database into DynamoDB. In order to improve performance
         * with these large-scale operations, <code>BatchWriteItem</code> does not behave
         * in the same way as individual <code>PutItem</code> and <code>DeleteItem</code>
         * calls would. For example, you cannot specify conditions on individual put and
         * delete requests, and <code>BatchWriteItem</code> does not return deleted items
         * in the response.</p> <p>If you use a programming language that supports
         * concurrency, you can use threads to write items in parallel. Your application
         * must include the necessary logic to manage the threads. With languages that
         * don't support threading, you must update or delete the specified items one at a
         * time. In both situations, <code>BatchWriteItem</code> performs the specified put
         * and delete operations in parallel, giving you the power of the thread pool
         * approach without having to introduce complexity into your application.</p>
         * <p>Parallel processing reduces latency, but each specified put and delete
         * request consumes the same number of write capacity units whether it is processed
         * in parallel or not. Delete operations on nonexistent items consume one write
         * capacity unit.</p> <p>If one or more of the following is true, DynamoDB rejects
         * the entire batch write operation:</p> <ul> <li> <p>One or more tables specified
         * in the <code>BatchWriteItem</code> request does not exist.</p> </li> <li>
         * <p>Primary key attributes specified on an item in the request do not match those
         * in the corresponding table's primary key schema.</p> </li> <li> <p>You try to
         * perform multiple operations on the same item in the same
         * <code>BatchWriteItem</code> request. For example, you cannot put and delete the
         * same item in the same <code>BatchWriteItem</code> request. </p> </li> <li> <p>
         * Your request contains at least two items with identical hash and range keys
         * (which essentially is two put operations). </p> </li> <li> <p>There are more
         * than 25 requests in the batch.</p> </li> <li> <p>Any individual item in a batch
         * exceeds 400 KB.</p> </li> <li> <p>The total request size exceeds 16 MB.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchWriteItem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchWriteItemAsync(const Model::BatchWriteItemRequest& request, const BatchWriteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a backup for an existing table.</p> <p> Each time you create an
         * on-demand backup, the entire table data is backed up. There is no limit to the
         * number of on-demand backups that can be taken. </p> <p> When you create an
         * on-demand backup, a time marker of the request is cataloged, and the backup is
         * created asynchronously, by applying all changes until the time of the request to
         * the last full table snapshot. Backup requests are processed instantaneously and
         * become available for restore within minutes. </p> <p>You can call
         * <code>CreateBackup</code> at a maximum rate of 50 times per second.</p> <p>All
         * backups in DynamoDB work without consuming any provisioned throughput on the
         * table.</p> <p> If you submit a backup request on 2018-12-14 at 14:25:00, the
         * backup is guaranteed to contain all data committed to the table up to 14:24:00,
         * and data committed after 14:26:00 will not be. The backup might contain data
         * modifications made between 14:24:00 and 14:26:00. On-demand backup does not
         * support causal consistency. </p> <p> Along with data, the following are also
         * included on the backups: </p> <ul> <li> <p>Global secondary indexes (GSIs)</p>
         * </li> <li> <p>Local secondary indexes (LSIs)</p> </li> <li> <p>Streams</p> </li>
         * <li> <p>Provisioned read and write capacity</p> </li> </ul><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackupOutcome CreateBackup(const Model::CreateBackupRequest& request) const;

        /**
         * <p>Creates a backup for an existing table.</p> <p> Each time you create an
         * on-demand backup, the entire table data is backed up. There is no limit to the
         * number of on-demand backups that can be taken. </p> <p> When you create an
         * on-demand backup, a time marker of the request is cataloged, and the backup is
         * created asynchronously, by applying all changes until the time of the request to
         * the last full table snapshot. Backup requests are processed instantaneously and
         * become available for restore within minutes. </p> <p>You can call
         * <code>CreateBackup</code> at a maximum rate of 50 times per second.</p> <p>All
         * backups in DynamoDB work without consuming any provisioned throughput on the
         * table.</p> <p> If you submit a backup request on 2018-12-14 at 14:25:00, the
         * backup is guaranteed to contain all data committed to the table up to 14:24:00,
         * and data committed after 14:26:00 will not be. The backup might contain data
         * modifications made between 14:24:00 and 14:26:00. On-demand backup does not
         * support causal consistency. </p> <p> Along with data, the following are also
         * included on the backups: </p> <ul> <li> <p>Global secondary indexes (GSIs)</p>
         * </li> <li> <p>Local secondary indexes (LSIs)</p> </li> <li> <p>Streams</p> </li>
         * <li> <p>Provisioned read and write capacity</p> </li> </ul><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateBackup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackupOutcomeCallable CreateBackupCallable(const Model::CreateBackupRequest& request) const;

        /**
         * <p>Creates a backup for an existing table.</p> <p> Each time you create an
         * on-demand backup, the entire table data is backed up. There is no limit to the
         * number of on-demand backups that can be taken. </p> <p> When you create an
         * on-demand backup, a time marker of the request is cataloged, and the backup is
         * created asynchronously, by applying all changes until the time of the request to
         * the last full table snapshot. Backup requests are processed instantaneously and
         * become available for restore within minutes. </p> <p>You can call
         * <code>CreateBackup</code> at a maximum rate of 50 times per second.</p> <p>All
         * backups in DynamoDB work without consuming any provisioned throughput on the
         * table.</p> <p> If you submit a backup request on 2018-12-14 at 14:25:00, the
         * backup is guaranteed to contain all data committed to the table up to 14:24:00,
         * and data committed after 14:26:00 will not be. The backup might contain data
         * modifications made between 14:24:00 and 14:26:00. On-demand backup does not
         * support causal consistency. </p> <p> Along with data, the following are also
         * included on the backups: </p> <ul> <li> <p>Global secondary indexes (GSIs)</p>
         * </li> <li> <p>Local secondary indexes (LSIs)</p> </li> <li> <p>Streams</p> </li>
         * <li> <p>Provisioned read and write capacity</p> </li> </ul><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateBackup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a global table from an existing table. A global table creates a
         * replication relationship between two or more DynamoDB tables with the same table
         * name in the provided Regions. </p> <p>If you want to add a new replica table to
         * a global table, each of the following conditions must be true:</p> <ul> <li>
         * <p>The table must have the same primary key as all of the other replicas.</p>
         * </li> <li> <p>The table must have the same name as all of the other
         * replicas.</p> </li> <li> <p>The table must have DynamoDB Streams enabled, with
         * the stream containing both the new and the old images of the item.</p> </li>
         * <li> <p>None of the replica tables in the global table can contain any data.</p>
         * </li> </ul> <p> If global secondary indexes are specified, then the following
         * conditions must also be met: </p> <ul> <li> <p> The global secondary indexes
         * must have the same name. </p> </li> <li> <p> The global secondary indexes must
         * have the same hash key and sort key (if present). </p> </li> </ul> <important>
         * <p> Write capacity settings should be set consistently across your replica
         * tables and secondary indexes. DynamoDB strongly recommends enabling auto scaling
         * to manage the write capacity settings for all of your global tables replicas and
         * indexes. </p> <p> If you prefer to manage write capacity settings manually, you
         * should provision equal replicated write capacity units to your replica tables.
         * You should also provision equal replicated write capacity units to matching
         * secondary indexes across your global table. </p> </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateGlobalTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGlobalTableOutcome CreateGlobalTable(const Model::CreateGlobalTableRequest& request) const;

        /**
         * <p>Creates a global table from an existing table. A global table creates a
         * replication relationship between two or more DynamoDB tables with the same table
         * name in the provided Regions. </p> <p>If you want to add a new replica table to
         * a global table, each of the following conditions must be true:</p> <ul> <li>
         * <p>The table must have the same primary key as all of the other replicas.</p>
         * </li> <li> <p>The table must have the same name as all of the other
         * replicas.</p> </li> <li> <p>The table must have DynamoDB Streams enabled, with
         * the stream containing both the new and the old images of the item.</p> </li>
         * <li> <p>None of the replica tables in the global table can contain any data.</p>
         * </li> </ul> <p> If global secondary indexes are specified, then the following
         * conditions must also be met: </p> <ul> <li> <p> The global secondary indexes
         * must have the same name. </p> </li> <li> <p> The global secondary indexes must
         * have the same hash key and sort key (if present). </p> </li> </ul> <important>
         * <p> Write capacity settings should be set consistently across your replica
         * tables and secondary indexes. DynamoDB strongly recommends enabling auto scaling
         * to manage the write capacity settings for all of your global tables replicas and
         * indexes. </p> <p> If you prefer to manage write capacity settings manually, you
         * should provision equal replicated write capacity units to your replica tables.
         * You should also provision equal replicated write capacity units to matching
         * secondary indexes across your global table. </p> </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateGlobalTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGlobalTableOutcomeCallable CreateGlobalTableCallable(const Model::CreateGlobalTableRequest& request) const;

        /**
         * <p>Creates a global table from an existing table. A global table creates a
         * replication relationship between two or more DynamoDB tables with the same table
         * name in the provided Regions. </p> <p>If you want to add a new replica table to
         * a global table, each of the following conditions must be true:</p> <ul> <li>
         * <p>The table must have the same primary key as all of the other replicas.</p>
         * </li> <li> <p>The table must have the same name as all of the other
         * replicas.</p> </li> <li> <p>The table must have DynamoDB Streams enabled, with
         * the stream containing both the new and the old images of the item.</p> </li>
         * <li> <p>None of the replica tables in the global table can contain any data.</p>
         * </li> </ul> <p> If global secondary indexes are specified, then the following
         * conditions must also be met: </p> <ul> <li> <p> The global secondary indexes
         * must have the same name. </p> </li> <li> <p> The global secondary indexes must
         * have the same hash key and sort key (if present). </p> </li> </ul> <important>
         * <p> Write capacity settings should be set consistently across your replica
         * tables and secondary indexes. DynamoDB strongly recommends enabling auto scaling
         * to manage the write capacity settings for all of your global tables replicas and
         * indexes. </p> <p> If you prefer to manage write capacity settings manually, you
         * should provision equal replicated write capacity units to your replica tables.
         * You should also provision equal replicated write capacity units to matching
         * secondary indexes across your global table. </p> </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateGlobalTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGlobalTableAsync(const Model::CreateGlobalTableRequest& request, const CreateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>CreateTable</code> operation adds a new table to your account. In
         * an AWS account, table names must be unique within each Region. That is, you can
         * have two tables with same name if you create the tables in different
         * Regions.</p> <p> <code>CreateTable</code> is an asynchronous operation. Upon
         * receiving a <code>CreateTable</code> request, DynamoDB immediately returns a
         * response with a <code>TableStatus</code> of <code>CREATING</code>. After the
         * table is created, DynamoDB sets the <code>TableStatus</code> to
         * <code>ACTIVE</code>. You can perform read and write operations only on an
         * <code>ACTIVE</code> table. </p> <p>You can optionally define secondary indexes
         * on the new table, as part of the <code>CreateTable</code> operation. If you want
         * to create multiple tables with secondary indexes on them, you must create the
         * tables sequentially. Only one table with secondary indexes can be in the
         * <code>CREATING</code> state at any given time.</p> <p>You can use the
         * <code>DescribeTable</code> action to check the table status.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTableOutcome CreateTable(const Model::CreateTableRequest& request) const;

        /**
         * <p>The <code>CreateTable</code> operation adds a new table to your account. In
         * an AWS account, table names must be unique within each Region. That is, you can
         * have two tables with same name if you create the tables in different
         * Regions.</p> <p> <code>CreateTable</code> is an asynchronous operation. Upon
         * receiving a <code>CreateTable</code> request, DynamoDB immediately returns a
         * response with a <code>TableStatus</code> of <code>CREATING</code>. After the
         * table is created, DynamoDB sets the <code>TableStatus</code> to
         * <code>ACTIVE</code>. You can perform read and write operations only on an
         * <code>ACTIVE</code> table. </p> <p>You can optionally define secondary indexes
         * on the new table, as part of the <code>CreateTable</code> operation. If you want
         * to create multiple tables with secondary indexes on them, you must create the
         * tables sequentially. Only one table with secondary indexes can be in the
         * <code>CREATING</code> state at any given time.</p> <p>You can use the
         * <code>DescribeTable</code> action to check the table status.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTableOutcomeCallable CreateTableCallable(const Model::CreateTableRequest& request) const;

        /**
         * <p>The <code>CreateTable</code> operation adds a new table to your account. In
         * an AWS account, table names must be unique within each Region. That is, you can
         * have two tables with same name if you create the tables in different
         * Regions.</p> <p> <code>CreateTable</code> is an asynchronous operation. Upon
         * receiving a <code>CreateTable</code> request, DynamoDB immediately returns a
         * response with a <code>TableStatus</code> of <code>CREATING</code>. After the
         * table is created, DynamoDB sets the <code>TableStatus</code> to
         * <code>ACTIVE</code>. You can perform read and write operations only on an
         * <code>ACTIVE</code> table. </p> <p>You can optionally define secondary indexes
         * on the new table, as part of the <code>CreateTable</code> operation. If you want
         * to create multiple tables with secondary indexes on them, you must create the
         * tables sequentially. Only one table with secondary indexes can be in the
         * <code>CREATING</code> state at any given time.</p> <p>You can use the
         * <code>DescribeTable</code> action to check the table status.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTableAsync(const Model::CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing backup of a table.</p> <p>You can call
         * <code>DeleteBackup</code> at a maximum rate of 10 times per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupOutcome DeleteBackup(const Model::DeleteBackupRequest& request) const;

        /**
         * <p>Deletes an existing backup of a table.</p> <p>You can call
         * <code>DeleteBackup</code> at a maximum rate of 10 times per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteBackup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupOutcomeCallable DeleteBackupCallable(const Model::DeleteBackupRequest& request) const;

        /**
         * <p>Deletes an existing backup of a table.</p> <p>You can call
         * <code>DeleteBackup</code> at a maximum rate of 10 times per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteBackup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackupAsync(const Model::DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a single item in a table by primary key. You can perform a
         * conditional delete operation that deletes the item if it exists, or if it has an
         * expected attribute value.</p> <p>In addition to deleting an item, you can also
         * return the item's attribute values in the same operation, using the
         * <code>ReturnValues</code> parameter.</p> <p>Unless you specify conditions, the
         * <code>DeleteItem</code> is an idempotent operation; running it multiple times on
         * the same item or attribute does <i>not</i> result in an error response.</p>
         * <p>Conditional deletes are useful for deleting items only if specific conditions
         * are met. If those conditions are met, DynamoDB performs the delete. Otherwise,
         * the item is not deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteItem">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteItemOutcome DeleteItem(const Model::DeleteItemRequest& request) const;

        /**
         * <p>Deletes a single item in a table by primary key. You can perform a
         * conditional delete operation that deletes the item if it exists, or if it has an
         * expected attribute value.</p> <p>In addition to deleting an item, you can also
         * return the item's attribute values in the same operation, using the
         * <code>ReturnValues</code> parameter.</p> <p>Unless you specify conditions, the
         * <code>DeleteItem</code> is an idempotent operation; running it multiple times on
         * the same item or attribute does <i>not</i> result in an error response.</p>
         * <p>Conditional deletes are useful for deleting items only if specific conditions
         * are met. If those conditions are met, DynamoDB performs the delete. Otherwise,
         * the item is not deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteItem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteItemOutcomeCallable DeleteItemCallable(const Model::DeleteItemRequest& request) const;

        /**
         * <p>Deletes a single item in a table by primary key. You can perform a
         * conditional delete operation that deletes the item if it exists, or if it has an
         * expected attribute value.</p> <p>In addition to deleting an item, you can also
         * return the item's attribute values in the same operation, using the
         * <code>ReturnValues</code> parameter.</p> <p>Unless you specify conditions, the
         * <code>DeleteItem</code> is an idempotent operation; running it multiple times on
         * the same item or attribute does <i>not</i> result in an error response.</p>
         * <p>Conditional deletes are useful for deleting items only if specific conditions
         * are met. If those conditions are met, DynamoDB performs the delete. Otherwise,
         * the item is not deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteItem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteItemAsync(const Model::DeleteItemRequest& request, const DeleteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>DeleteTable</code> operation deletes a table and all of its items.
         * After a <code>DeleteTable</code> request, the specified table is in the
         * <code>DELETING</code> state until DynamoDB completes the deletion. If the table
         * is in the <code>ACTIVE</code> state, you can delete it. If a table is in
         * <code>CREATING</code> or <code>UPDATING</code> states, then DynamoDB returns a
         * <code>ResourceInUseException</code>. If the specified table does not exist,
         * DynamoDB returns a <code>ResourceNotFoundException</code>. If table is already
         * in the <code>DELETING</code> state, no error is returned. </p> <note>
         * <p>DynamoDB might continue to accept data read and write operations, such as
         * <code>GetItem</code> and <code>PutItem</code>, on a table in the
         * <code>DELETING</code> state until the table deletion is complete.</p> </note>
         * <p>When you delete a table, any indexes on that table are also deleted.</p>
         * <p>If you have DynamoDB Streams enabled on the table, then the corresponding
         * stream on that table goes into the <code>DISABLED</code> state, and the stream
         * is automatically deleted after 24 hours.</p> <p>Use the
         * <code>DescribeTable</code> action to check the status of the table.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTableOutcome DeleteTable(const Model::DeleteTableRequest& request) const;

        /**
         * <p>The <code>DeleteTable</code> operation deletes a table and all of its items.
         * After a <code>DeleteTable</code> request, the specified table is in the
         * <code>DELETING</code> state until DynamoDB completes the deletion. If the table
         * is in the <code>ACTIVE</code> state, you can delete it. If a table is in
         * <code>CREATING</code> or <code>UPDATING</code> states, then DynamoDB returns a
         * <code>ResourceInUseException</code>. If the specified table does not exist,
         * DynamoDB returns a <code>ResourceNotFoundException</code>. If table is already
         * in the <code>DELETING</code> state, no error is returned. </p> <note>
         * <p>DynamoDB might continue to accept data read and write operations, such as
         * <code>GetItem</code> and <code>PutItem</code>, on a table in the
         * <code>DELETING</code> state until the table deletion is complete.</p> </note>
         * <p>When you delete a table, any indexes on that table are also deleted.</p>
         * <p>If you have DynamoDB Streams enabled on the table, then the corresponding
         * stream on that table goes into the <code>DISABLED</code> state, and the stream
         * is automatically deleted after 24 hours.</p> <p>Use the
         * <code>DescribeTable</code> action to check the status of the table.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTableOutcomeCallable DeleteTableCallable(const Model::DeleteTableRequest& request) const;

        /**
         * <p>The <code>DeleteTable</code> operation deletes a table and all of its items.
         * After a <code>DeleteTable</code> request, the specified table is in the
         * <code>DELETING</code> state until DynamoDB completes the deletion. If the table
         * is in the <code>ACTIVE</code> state, you can delete it. If a table is in
         * <code>CREATING</code> or <code>UPDATING</code> states, then DynamoDB returns a
         * <code>ResourceInUseException</code>. If the specified table does not exist,
         * DynamoDB returns a <code>ResourceNotFoundException</code>. If table is already
         * in the <code>DELETING</code> state, no error is returned. </p> <note>
         * <p>DynamoDB might continue to accept data read and write operations, such as
         * <code>GetItem</code> and <code>PutItem</code>, on a table in the
         * <code>DELETING</code> state until the table deletion is complete.</p> </note>
         * <p>When you delete a table, any indexes on that table are also deleted.</p>
         * <p>If you have DynamoDB Streams enabled on the table, then the corresponding
         * stream on that table goes into the <code>DISABLED</code> state, and the stream
         * is automatically deleted after 24 hours.</p> <p>Use the
         * <code>DescribeTable</code> action to check the status of the table.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTableAsync(const Model::DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing backup of a table.</p> <p>You can call
         * <code>DescribeBackup</code> at a maximum rate of 10 times per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBackupOutcome DescribeBackup(const Model::DescribeBackupRequest& request) const;

        /**
         * <p>Describes an existing backup of a table.</p> <p>You can call
         * <code>DescribeBackup</code> at a maximum rate of 10 times per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeBackup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBackupOutcomeCallable DescribeBackupCallable(const Model::DescribeBackupRequest& request) const;

        /**
         * <p>Describes an existing backup of a table.</p> <p>You can call
         * <code>DescribeBackup</code> at a maximum rate of 10 times per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeBackup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBackupAsync(const Model::DescribeBackupRequest& request, const DescribeBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Checks the status of continuous backups and point in time recovery on the
         * specified table. Continuous backups are <code>ENABLED</code> on all tables at
         * table creation. If point in time recovery is enabled,
         * <code>PointInTimeRecoveryStatus</code> will be set to ENABLED.</p> <p> After
         * continuous backups and point in time recovery are enabled, you can restore to
         * any point in time within <code>EarliestRestorableDateTime</code> and
         * <code>LatestRestorableDateTime</code>. </p> <p>
         * <code>LatestRestorableDateTime</code> is typically 5 minutes before the current
         * time. You can restore your table to any point in time during the last 35 days.
         * </p> <p>You can call <code>DescribeContinuousBackups</code> at a maximum rate of
         * 10 times per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeContinuousBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContinuousBackupsOutcome DescribeContinuousBackups(const Model::DescribeContinuousBackupsRequest& request) const;

        /**
         * <p>Checks the status of continuous backups and point in time recovery on the
         * specified table. Continuous backups are <code>ENABLED</code> on all tables at
         * table creation. If point in time recovery is enabled,
         * <code>PointInTimeRecoveryStatus</code> will be set to ENABLED.</p> <p> After
         * continuous backups and point in time recovery are enabled, you can restore to
         * any point in time within <code>EarliestRestorableDateTime</code> and
         * <code>LatestRestorableDateTime</code>. </p> <p>
         * <code>LatestRestorableDateTime</code> is typically 5 minutes before the current
         * time. You can restore your table to any point in time during the last 35 days.
         * </p> <p>You can call <code>DescribeContinuousBackups</code> at a maximum rate of
         * 10 times per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeContinuousBackups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeContinuousBackupsOutcomeCallable DescribeContinuousBackupsCallable(const Model::DescribeContinuousBackupsRequest& request) const;

        /**
         * <p>Checks the status of continuous backups and point in time recovery on the
         * specified table. Continuous backups are <code>ENABLED</code> on all tables at
         * table creation. If point in time recovery is enabled,
         * <code>PointInTimeRecoveryStatus</code> will be set to ENABLED.</p> <p> After
         * continuous backups and point in time recovery are enabled, you can restore to
         * any point in time within <code>EarliestRestorableDateTime</code> and
         * <code>LatestRestorableDateTime</code>. </p> <p>
         * <code>LatestRestorableDateTime</code> is typically 5 minutes before the current
         * time. You can restore your table to any point in time during the last 35 days.
         * </p> <p>You can call <code>DescribeContinuousBackups</code> at a maximum rate of
         * 10 times per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeContinuousBackups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeContinuousBackupsAsync(const Model::DescribeContinuousBackupsRequest& request, const DescribeContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the regional endpoint information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointsOutcome DescribeEndpoints(const Model::DescribeEndpointsRequest& request) const;

        /**
         * <p>Returns the regional endpoint information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointsOutcomeCallable DescribeEndpointsCallable(const Model::DescribeEndpointsRequest& request) const;

        /**
         * <p>Returns the regional endpoint information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointsAsync(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified global table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeGlobalTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGlobalTableOutcome DescribeGlobalTable(const Model::DescribeGlobalTableRequest& request) const;

        /**
         * <p>Returns information about the specified global table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeGlobalTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGlobalTableOutcomeCallable DescribeGlobalTableCallable(const Model::DescribeGlobalTableRequest& request) const;

        /**
         * <p>Returns information about the specified global table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeGlobalTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGlobalTableAsync(const Model::DescribeGlobalTableRequest& request, const DescribeGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes Region-specific settings for a global table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeGlobalTableSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGlobalTableSettingsOutcome DescribeGlobalTableSettings(const Model::DescribeGlobalTableSettingsRequest& request) const;

        /**
         * <p>Describes Region-specific settings for a global table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeGlobalTableSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGlobalTableSettingsOutcomeCallable DescribeGlobalTableSettingsCallable(const Model::DescribeGlobalTableSettingsRequest& request) const;

        /**
         * <p>Describes Region-specific settings for a global table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeGlobalTableSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGlobalTableSettingsAsync(const Model::DescribeGlobalTableSettingsRequest& request, const DescribeGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current provisioned-capacity limits for your AWS account in a
         * Region, both for the Region as a whole and for any one DynamoDB table that you
         * create there.</p> <p>When you establish an AWS account, the account has initial
         * limits on the maximum read capacity units and write capacity units that you can
         * provision across all of your DynamoDB tables in a given Region. Also, there are
         * per-table limits that apply when you create a table there. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
         * page in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Although you can
         * increase these limits by filing a case at <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support Center</a>,
         * obtaining the increase is not instantaneous. The <code>DescribeLimits</code>
         * action lets you write code to compare the capacity you are currently using to
         * those limits imposed by your account so that you have enough time to apply for
         * an increase before you hit a limit.</p> <p>For example, you could use one of the
         * AWS SDKs to do the following:</p> <ol> <li> <p>Call <code>DescribeLimits</code>
         * for a particular Region to obtain your current account limits on provisioned
         * capacity there.</p> </li> <li> <p>Create a variable to hold the aggregate read
         * capacity units provisioned for all your tables in that Region, and one to hold
         * the aggregate write capacity units. Zero them both.</p> </li> <li> <p>Call
         * <code>ListTables</code> to obtain a list of all your DynamoDB tables.</p> </li>
         * <li> <p>For each table name listed by <code>ListTables</code>, do the
         * following:</p> <ul> <li> <p>Call <code>DescribeTable</code> with the table
         * name.</p> </li> <li> <p>Use the data returned by <code>DescribeTable</code> to
         * add the read capacity units and write capacity units provisioned for the table
         * itself to your variables.</p> </li> <li> <p>If the table has one or more global
         * secondary indexes (GSIs), loop over these GSIs and add their provisioned
         * capacity values to your variables as well.</p> </li> </ul> </li> <li> <p>Report
         * the account limits for that Region returned by <code>DescribeLimits</code>,
         * along with the total current provisioned capacity levels you have
         * calculated.</p> </li> </ol> <p>This will let you see whether you are getting
         * close to your account-level limits.</p> <p>The per-table limits apply only when
         * you are creating a new table. They restrict the sum of the provisioned capacity
         * of the new table itself and all its global secondary indexes.</p> <p>For
         * existing tables and their GSIs, DynamoDB doesn't let you increase provisioned
         * capacity extremely rapidly. But the only upper limit that applies is that the
         * aggregate provisioned capacity over all your tables and GSIs cannot exceed
         * either of the per-account limits.</p> <note> <p> <code>DescribeLimits</code>
         * should only be called periodically. You can expect throttling errors if you call
         * it more than once in a minute.</p> </note> <p>The <code>DescribeLimits</code>
         * Request element has no content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLimitsOutcome DescribeLimits(const Model::DescribeLimitsRequest& request) const;

        /**
         * <p>Returns the current provisioned-capacity limits for your AWS account in a
         * Region, both for the Region as a whole and for any one DynamoDB table that you
         * create there.</p> <p>When you establish an AWS account, the account has initial
         * limits on the maximum read capacity units and write capacity units that you can
         * provision across all of your DynamoDB tables in a given Region. Also, there are
         * per-table limits that apply when you create a table there. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
         * page in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Although you can
         * increase these limits by filing a case at <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support Center</a>,
         * obtaining the increase is not instantaneous. The <code>DescribeLimits</code>
         * action lets you write code to compare the capacity you are currently using to
         * those limits imposed by your account so that you have enough time to apply for
         * an increase before you hit a limit.</p> <p>For example, you could use one of the
         * AWS SDKs to do the following:</p> <ol> <li> <p>Call <code>DescribeLimits</code>
         * for a particular Region to obtain your current account limits on provisioned
         * capacity there.</p> </li> <li> <p>Create a variable to hold the aggregate read
         * capacity units provisioned for all your tables in that Region, and one to hold
         * the aggregate write capacity units. Zero them both.</p> </li> <li> <p>Call
         * <code>ListTables</code> to obtain a list of all your DynamoDB tables.</p> </li>
         * <li> <p>For each table name listed by <code>ListTables</code>, do the
         * following:</p> <ul> <li> <p>Call <code>DescribeTable</code> with the table
         * name.</p> </li> <li> <p>Use the data returned by <code>DescribeTable</code> to
         * add the read capacity units and write capacity units provisioned for the table
         * itself to your variables.</p> </li> <li> <p>If the table has one or more global
         * secondary indexes (GSIs), loop over these GSIs and add their provisioned
         * capacity values to your variables as well.</p> </li> </ul> </li> <li> <p>Report
         * the account limits for that Region returned by <code>DescribeLimits</code>,
         * along with the total current provisioned capacity levels you have
         * calculated.</p> </li> </ol> <p>This will let you see whether you are getting
         * close to your account-level limits.</p> <p>The per-table limits apply only when
         * you are creating a new table. They restrict the sum of the provisioned capacity
         * of the new table itself and all its global secondary indexes.</p> <p>For
         * existing tables and their GSIs, DynamoDB doesn't let you increase provisioned
         * capacity extremely rapidly. But the only upper limit that applies is that the
         * aggregate provisioned capacity over all your tables and GSIs cannot exceed
         * either of the per-account limits.</p> <note> <p> <code>DescribeLimits</code>
         * should only be called periodically. You can expect throttling errors if you call
         * it more than once in a minute.</p> </note> <p>The <code>DescribeLimits</code>
         * Request element has no content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeLimits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLimitsOutcomeCallable DescribeLimitsCallable(const Model::DescribeLimitsRequest& request) const;

        /**
         * <p>Returns the current provisioned-capacity limits for your AWS account in a
         * Region, both for the Region as a whole and for any one DynamoDB table that you
         * create there.</p> <p>When you establish an AWS account, the account has initial
         * limits on the maximum read capacity units and write capacity units that you can
         * provision across all of your DynamoDB tables in a given Region. Also, there are
         * per-table limits that apply when you create a table there. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
         * page in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Although you can
         * increase these limits by filing a case at <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support Center</a>,
         * obtaining the increase is not instantaneous. The <code>DescribeLimits</code>
         * action lets you write code to compare the capacity you are currently using to
         * those limits imposed by your account so that you have enough time to apply for
         * an increase before you hit a limit.</p> <p>For example, you could use one of the
         * AWS SDKs to do the following:</p> <ol> <li> <p>Call <code>DescribeLimits</code>
         * for a particular Region to obtain your current account limits on provisioned
         * capacity there.</p> </li> <li> <p>Create a variable to hold the aggregate read
         * capacity units provisioned for all your tables in that Region, and one to hold
         * the aggregate write capacity units. Zero them both.</p> </li> <li> <p>Call
         * <code>ListTables</code> to obtain a list of all your DynamoDB tables.</p> </li>
         * <li> <p>For each table name listed by <code>ListTables</code>, do the
         * following:</p> <ul> <li> <p>Call <code>DescribeTable</code> with the table
         * name.</p> </li> <li> <p>Use the data returned by <code>DescribeTable</code> to
         * add the read capacity units and write capacity units provisioned for the table
         * itself to your variables.</p> </li> <li> <p>If the table has one or more global
         * secondary indexes (GSIs), loop over these GSIs and add their provisioned
         * capacity values to your variables as well.</p> </li> </ul> </li> <li> <p>Report
         * the account limits for that Region returned by <code>DescribeLimits</code>,
         * along with the total current provisioned capacity levels you have
         * calculated.</p> </li> </ol> <p>This will let you see whether you are getting
         * close to your account-level limits.</p> <p>The per-table limits apply only when
         * you are creating a new table. They restrict the sum of the provisioned capacity
         * of the new table itself and all its global secondary indexes.</p> <p>For
         * existing tables and their GSIs, DynamoDB doesn't let you increase provisioned
         * capacity extremely rapidly. But the only upper limit that applies is that the
         * aggregate provisioned capacity over all your tables and GSIs cannot exceed
         * either of the per-account limits.</p> <note> <p> <code>DescribeLimits</code>
         * should only be called periodically. You can expect throttling errors if you call
         * it more than once in a minute.</p> </note> <p>The <code>DescribeLimits</code>
         * Request element has no content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeLimits">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLimitsAsync(const Model::DescribeLimitsRequest& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the table, including the current status of the
         * table, when it was created, the primary key schema, and any indexes on the
         * table.</p> <note> <p>If you issue a <code>DescribeTable</code> request
         * immediately after a <code>CreateTable</code> request, DynamoDB might return a
         * <code>ResourceNotFoundException</code>. This is because
         * <code>DescribeTable</code> uses an eventually consistent query, and the metadata
         * for your table might not be available at that moment. Wait for a few seconds,
         * and then try the <code>DescribeTable</code> request again.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest& request) const;

        /**
         * <p>Returns information about the table, including the current status of the
         * table, when it was created, the primary key schema, and any indexes on the
         * table.</p> <note> <p>If you issue a <code>DescribeTable</code> request
         * immediately after a <code>CreateTable</code> request, DynamoDB might return a
         * <code>ResourceNotFoundException</code>. This is because
         * <code>DescribeTable</code> uses an eventually consistent query, and the metadata
         * for your table might not be available at that moment. Wait for a few seconds,
         * and then try the <code>DescribeTable</code> request again.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTableOutcomeCallable DescribeTableCallable(const Model::DescribeTableRequest& request) const;

        /**
         * <p>Returns information about the table, including the current status of the
         * table, when it was created, the primary key schema, and any indexes on the
         * table.</p> <note> <p>If you issue a <code>DescribeTable</code> request
         * immediately after a <code>CreateTable</code> request, DynamoDB might return a
         * <code>ResourceNotFoundException</code>. This is because
         * <code>DescribeTable</code> uses an eventually consistent query, and the metadata
         * for your table might not be available at that moment. Wait for a few seconds,
         * and then try the <code>DescribeTable</code> request again.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTableAsync(const Model::DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gives a description of the Time to Live (TTL) status on the specified table.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeTimeToLive">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTimeToLiveOutcome DescribeTimeToLive(const Model::DescribeTimeToLiveRequest& request) const;

        /**
         * <p>Gives a description of the Time to Live (TTL) status on the specified table.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeTimeToLive">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTimeToLiveOutcomeCallable DescribeTimeToLiveCallable(const Model::DescribeTimeToLiveRequest& request) const;

        /**
         * <p>Gives a description of the Time to Live (TTL) status on the specified table.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeTimeToLive">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTimeToLiveAsync(const Model::DescribeTimeToLiveRequest& request, const DescribeTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>GetItem</code> operation returns a set of attributes for the item
         * with the given primary key. If there is no matching item, <code>GetItem</code>
         * does not return any data and there will be no <code>Item</code> element in the
         * response.</p> <p> <code>GetItem</code> provides an eventually consistent read by
         * default. If your application requires a strongly consistent read, set
         * <code>ConsistentRead</code> to <code>true</code>. Although a strongly consistent
         * read might take more time than an eventually consistent read, it always returns
         * the last updated value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GetItem">AWS
         * API Reference</a></p>
         */
        virtual Model::GetItemOutcome GetItem(const Model::GetItemRequest& request) const;

        /**
         * <p>The <code>GetItem</code> operation returns a set of attributes for the item
         * with the given primary key. If there is no matching item, <code>GetItem</code>
         * does not return any data and there will be no <code>Item</code> element in the
         * response.</p> <p> <code>GetItem</code> provides an eventually consistent read by
         * default. If your application requires a strongly consistent read, set
         * <code>ConsistentRead</code> to <code>true</code>. Although a strongly consistent
         * read might take more time than an eventually consistent read, it always returns
         * the last updated value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GetItem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetItemOutcomeCallable GetItemCallable(const Model::GetItemRequest& request) const;

        /**
         * <p>The <code>GetItem</code> operation returns a set of attributes for the item
         * with the given primary key. If there is no matching item, <code>GetItem</code>
         * does not return any data and there will be no <code>Item</code> element in the
         * response.</p> <p> <code>GetItem</code> provides an eventually consistent read by
         * default. If your application requires a strongly consistent read, set
         * <code>ConsistentRead</code> to <code>true</code>. Although a strongly consistent
         * read might take more time than an eventually consistent read, it always returns
         * the last updated value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GetItem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetItemAsync(const Model::GetItemRequest& request, const GetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List backups associated with an AWS account. To list backups for a given
         * table, specify <code>TableName</code>. <code>ListBackups</code> returns a
         * paginated list of results with at most 1 MB worth of items in a page. You can
         * also specify a limit for the maximum number of entries to be returned in a page.
         * </p> <p>In the request, start time is inclusive, but end time is exclusive. Note
         * that these limits are for the time at which the original backup was
         * requested.</p> <p>You can call <code>ListBackups</code> a maximum of five times
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupsOutcome ListBackups(const Model::ListBackupsRequest& request) const;

        /**
         * <p>List backups associated with an AWS account. To list backups for a given
         * table, specify <code>TableName</code>. <code>ListBackups</code> returns a
         * paginated list of results with at most 1 MB worth of items in a page. You can
         * also specify a limit for the maximum number of entries to be returned in a page.
         * </p> <p>In the request, start time is inclusive, but end time is exclusive. Note
         * that these limits are for the time at which the original backup was
         * requested.</p> <p>You can call <code>ListBackups</code> a maximum of five times
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListBackups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackupsOutcomeCallable ListBackupsCallable(const Model::ListBackupsRequest& request) const;

        /**
         * <p>List backups associated with an AWS account. To list backups for a given
         * table, specify <code>TableName</code>. <code>ListBackups</code> returns a
         * paginated list of results with at most 1 MB worth of items in a page. You can
         * also specify a limit for the maximum number of entries to be returned in a page.
         * </p> <p>In the request, start time is inclusive, but end time is exclusive. Note
         * that these limits are for the time at which the original backup was
         * requested.</p> <p>You can call <code>ListBackups</code> a maximum of five times
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListBackups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBackupsAsync(const Model::ListBackupsRequest& request, const ListBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all global tables that have a replica in the specified
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListGlobalTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGlobalTablesOutcome ListGlobalTables(const Model::ListGlobalTablesRequest& request) const;

        /**
         * <p>Lists all global tables that have a replica in the specified
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListGlobalTables">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGlobalTablesOutcomeCallable ListGlobalTablesCallable(const Model::ListGlobalTablesRequest& request) const;

        /**
         * <p>Lists all global tables that have a replica in the specified
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListGlobalTables">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGlobalTablesAsync(const Model::ListGlobalTablesRequest& request, const ListGlobalTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of table names associated with the current account and
         * endpoint. The output from <code>ListTables</code> is paginated, with each page
         * returning a maximum of 100 table names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request) const;

        /**
         * <p>Returns an array of table names associated with the current account and
         * endpoint. The output from <code>ListTables</code> is paginated, with each page
         * returning a maximum of 100 table names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListTables">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTablesOutcomeCallable ListTablesCallable(const Model::ListTablesRequest& request) const;

        /**
         * <p>Returns an array of table names associated with the current account and
         * endpoint. The output from <code>ListTables</code> is paginated, with each page
         * returning a maximum of 100 table names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListTables">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTablesAsync(const Model::ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all tags on an Amazon DynamoDB resource. You can call ListTagsOfResource
         * up to 10 times per second, per account.</p> <p>For an overview on tagging
         * DynamoDB resources, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
         * for DynamoDB</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListTagsOfResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOfResourceOutcome ListTagsOfResource(const Model::ListTagsOfResourceRequest& request) const;

        /**
         * <p>List all tags on an Amazon DynamoDB resource. You can call ListTagsOfResource
         * up to 10 times per second, per account.</p> <p>For an overview on tagging
         * DynamoDB resources, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
         * for DynamoDB</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListTagsOfResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOfResourceOutcomeCallable ListTagsOfResourceCallable(const Model::ListTagsOfResourceRequest& request) const;

        /**
         * <p>List all tags on an Amazon DynamoDB resource. You can call ListTagsOfResource
         * up to 10 times per second, per account.</p> <p>For an overview on tagging
         * DynamoDB resources, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
         * for DynamoDB</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListTagsOfResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsOfResourceAsync(const Model::ListTagsOfResourceRequest& request, const ListTagsOfResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new item, or replaces an old item with a new item. If an item that
         * has the same primary key as the new item already exists in the specified table,
         * the new item completely replaces the existing item. You can perform a
         * conditional put operation (add a new item if one with the specified primary key
         * doesn't exist), or replace an existing item if it has certain attribute values.
         * You can return the item's attribute values in the same operation, using the
         * <code>ReturnValues</code> parameter.</p> <important> <p>This topic provides
         * general information about the <code>PutItem</code> API.</p> <p>For information
         * on how to call the <code>PutItem</code> API using the AWS SDK in specific
         * languages, see the following:</p> <ul> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/aws-cli/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS Command Line Interface</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/DotNetSDKV3/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for .NET</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForCpp/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for C++</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForGoV1/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for Go</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForJava/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for Java</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/AWSJavaScriptSDK/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for JavaScript</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForPHPV3/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for PHP V3</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/boto3/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for Python</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForRubyV2/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for Ruby V2</a> </p> </li> </ul> </important> <p>When you
         * add an item, the primary key attributes are the only required attributes.
         * Attribute values cannot be null. String and Binary type attributes must have
         * lengths greater than zero. Set type attributes cannot be empty. Requests with
         * empty values will be rejected with a <code>ValidationException</code>
         * exception.</p> <note> <p>To prevent a new item from replacing an existing item,
         * use a conditional expression that contains the <code>attribute_not_exists</code>
         * function with the name of the attribute being used as the partition key for the
         * table. Since every record must contain that attribute, the
         * <code>attribute_not_exists</code> function will only succeed if no matching item
         * exists.</p> </note> <p>For more information about <code>PutItem</code>, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithItems.html">Working
         * with Items</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/PutItem">AWS
         * API Reference</a></p>
         */
        virtual Model::PutItemOutcome PutItem(const Model::PutItemRequest& request) const;

        /**
         * <p>Creates a new item, or replaces an old item with a new item. If an item that
         * has the same primary key as the new item already exists in the specified table,
         * the new item completely replaces the existing item. You can perform a
         * conditional put operation (add a new item if one with the specified primary key
         * doesn't exist), or replace an existing item if it has certain attribute values.
         * You can return the item's attribute values in the same operation, using the
         * <code>ReturnValues</code> parameter.</p> <important> <p>This topic provides
         * general information about the <code>PutItem</code> API.</p> <p>For information
         * on how to call the <code>PutItem</code> API using the AWS SDK in specific
         * languages, see the following:</p> <ul> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/aws-cli/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS Command Line Interface</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/DotNetSDKV3/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for .NET</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForCpp/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for C++</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForGoV1/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for Go</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForJava/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for Java</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/AWSJavaScriptSDK/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for JavaScript</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForPHPV3/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for PHP V3</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/boto3/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for Python</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForRubyV2/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for Ruby V2</a> </p> </li> </ul> </important> <p>When you
         * add an item, the primary key attributes are the only required attributes.
         * Attribute values cannot be null. String and Binary type attributes must have
         * lengths greater than zero. Set type attributes cannot be empty. Requests with
         * empty values will be rejected with a <code>ValidationException</code>
         * exception.</p> <note> <p>To prevent a new item from replacing an existing item,
         * use a conditional expression that contains the <code>attribute_not_exists</code>
         * function with the name of the attribute being used as the partition key for the
         * table. Since every record must contain that attribute, the
         * <code>attribute_not_exists</code> function will only succeed if no matching item
         * exists.</p> </note> <p>For more information about <code>PutItem</code>, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithItems.html">Working
         * with Items</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/PutItem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutItemOutcomeCallable PutItemCallable(const Model::PutItemRequest& request) const;

        /**
         * <p>Creates a new item, or replaces an old item with a new item. If an item that
         * has the same primary key as the new item already exists in the specified table,
         * the new item completely replaces the existing item. You can perform a
         * conditional put operation (add a new item if one with the specified primary key
         * doesn't exist), or replace an existing item if it has certain attribute values.
         * You can return the item's attribute values in the same operation, using the
         * <code>ReturnValues</code> parameter.</p> <important> <p>This topic provides
         * general information about the <code>PutItem</code> API.</p> <p>For information
         * on how to call the <code>PutItem</code> API using the AWS SDK in specific
         * languages, see the following:</p> <ul> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/aws-cli/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS Command Line Interface</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/DotNetSDKV3/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for .NET</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForCpp/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for C++</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForGoV1/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for Go</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForJava/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for Java</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/AWSJavaScriptSDK/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for JavaScript</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForPHPV3/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for PHP V3</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/boto3/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for Python</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/goto/SdkForRubyV2/dynamodb-2012-08-10/PutItem">
         * PutItem in the AWS SDK for Ruby V2</a> </p> </li> </ul> </important> <p>When you
         * add an item, the primary key attributes are the only required attributes.
         * Attribute values cannot be null. String and Binary type attributes must have
         * lengths greater than zero. Set type attributes cannot be empty. Requests with
         * empty values will be rejected with a <code>ValidationException</code>
         * exception.</p> <note> <p>To prevent a new item from replacing an existing item,
         * use a conditional expression that contains the <code>attribute_not_exists</code>
         * function with the name of the attribute being used as the partition key for the
         * table. Since every record must contain that attribute, the
         * <code>attribute_not_exists</code> function will only succeed if no matching item
         * exists.</p> </note> <p>For more information about <code>PutItem</code>, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithItems.html">Working
         * with Items</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/PutItem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutItemAsync(const Model::PutItemRequest& request, const PutItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>Query</code> operation finds items based on primary key values. You
         * can query any table or secondary index that has a composite primary key (a
         * partition key and a sort key). </p> <p>Use the
         * <code>KeyConditionExpression</code> parameter to provide a specific value for
         * the partition key. The <code>Query</code> operation will return all of the items
         * from the table or index with that partition key value. You can optionally narrow
         * the scope of the <code>Query</code> operation by specifying a sort key value and
         * a comparison operator in <code>KeyConditionExpression</code>. To further refine
         * the <code>Query</code> results, you can optionally provide a
         * <code>FilterExpression</code>. A <code>FilterExpression</code> determines which
         * items within the results should be returned to you. All of the other results are
         * discarded. </p> <p> A <code>Query</code> operation always returns a result set.
         * If no matching items are found, the result set will be empty. Queries that do
         * not return results consume the minimum number of read capacity units for that
         * type of read operation. </p> <note> <p> DynamoDB calculates the number of read
         * capacity units consumed based on item size, not on the amount of data that is
         * returned to an application. The number of capacity units consumed will be the
         * same whether you request all of the attributes (the default behavior) or just
         * some of them (using a projection expression). The number will also be the same
         * whether or not you use a <code>FilterExpression</code>. </p> </note> <p>
         * <code>Query</code> results are always sorted by the sort key value. If the data
         * type of the sort key is Number, the results are returned in numeric order;
         * otherwise, the results are returned in order of UTF-8 bytes. By default, the
         * sort order is ascending. To reverse the order, set the
         * <code>ScanIndexForward</code> parameter to false. </p> <p> A single
         * <code>Query</code> operation will read up to the maximum number of items set (if
         * using the <code>Limit</code> parameter) or a maximum of 1 MB of data and then
         * apply any filtering to the results using <code>FilterExpression</code>. If
         * <code>LastEvaluatedKey</code> is present in the response, you will need to
         * paginate the result set. For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Query.html#Query.Pagination">Paginating
         * the Results</a> in the <i>Amazon DynamoDB Developer Guide</i>. </p> <p>
         * <code>FilterExpression</code> is applied after a <code>Query</code> finishes,
         * but before the results are returned. A <code>FilterExpression</code> cannot
         * contain partition key or sort key attributes. You need to specify those
         * attributes in the <code>KeyConditionExpression</code>. </p> <note> <p> A
         * <code>Query</code> operation can return an empty result set and a
         * <code>LastEvaluatedKey</code> if all the items read for the page of results are
         * filtered out. </p> </note> <p>You can query a table, a local secondary index, or
         * a global secondary index. For a query on a table or on a local secondary index,
         * you can set the <code>ConsistentRead</code> parameter to <code>true</code> and
         * obtain a strongly consistent result. Global secondary indexes support eventually
         * consistent reads only, so do not specify <code>ConsistentRead</code> when
         * querying a global secondary index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/Query">AWS API
         * Reference</a></p>
         */
        virtual Model::QueryOutcome Query(const Model::QueryRequest& request) const;

        /**
         * <p>The <code>Query</code> operation finds items based on primary key values. You
         * can query any table or secondary index that has a composite primary key (a
         * partition key and a sort key). </p> <p>Use the
         * <code>KeyConditionExpression</code> parameter to provide a specific value for
         * the partition key. The <code>Query</code> operation will return all of the items
         * from the table or index with that partition key value. You can optionally narrow
         * the scope of the <code>Query</code> operation by specifying a sort key value and
         * a comparison operator in <code>KeyConditionExpression</code>. To further refine
         * the <code>Query</code> results, you can optionally provide a
         * <code>FilterExpression</code>. A <code>FilterExpression</code> determines which
         * items within the results should be returned to you. All of the other results are
         * discarded. </p> <p> A <code>Query</code> operation always returns a result set.
         * If no matching items are found, the result set will be empty. Queries that do
         * not return results consume the minimum number of read capacity units for that
         * type of read operation. </p> <note> <p> DynamoDB calculates the number of read
         * capacity units consumed based on item size, not on the amount of data that is
         * returned to an application. The number of capacity units consumed will be the
         * same whether you request all of the attributes (the default behavior) or just
         * some of them (using a projection expression). The number will also be the same
         * whether or not you use a <code>FilterExpression</code>. </p> </note> <p>
         * <code>Query</code> results are always sorted by the sort key value. If the data
         * type of the sort key is Number, the results are returned in numeric order;
         * otherwise, the results are returned in order of UTF-8 bytes. By default, the
         * sort order is ascending. To reverse the order, set the
         * <code>ScanIndexForward</code> parameter to false. </p> <p> A single
         * <code>Query</code> operation will read up to the maximum number of items set (if
         * using the <code>Limit</code> parameter) or a maximum of 1 MB of data and then
         * apply any filtering to the results using <code>FilterExpression</code>. If
         * <code>LastEvaluatedKey</code> is present in the response, you will need to
         * paginate the result set. For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Query.html#Query.Pagination">Paginating
         * the Results</a> in the <i>Amazon DynamoDB Developer Guide</i>. </p> <p>
         * <code>FilterExpression</code> is applied after a <code>Query</code> finishes,
         * but before the results are returned. A <code>FilterExpression</code> cannot
         * contain partition key or sort key attributes. You need to specify those
         * attributes in the <code>KeyConditionExpression</code>. </p> <note> <p> A
         * <code>Query</code> operation can return an empty result set and a
         * <code>LastEvaluatedKey</code> if all the items read for the page of results are
         * filtered out. </p> </note> <p>You can query a table, a local secondary index, or
         * a global secondary index. For a query on a table or on a local secondary index,
         * you can set the <code>ConsistentRead</code> parameter to <code>true</code> and
         * obtain a strongly consistent result. Global secondary indexes support eventually
         * consistent reads only, so do not specify <code>ConsistentRead</code> when
         * querying a global secondary index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/Query">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::QueryOutcomeCallable QueryCallable(const Model::QueryRequest& request) const;

        /**
         * <p>The <code>Query</code> operation finds items based on primary key values. You
         * can query any table or secondary index that has a composite primary key (a
         * partition key and a sort key). </p> <p>Use the
         * <code>KeyConditionExpression</code> parameter to provide a specific value for
         * the partition key. The <code>Query</code> operation will return all of the items
         * from the table or index with that partition key value. You can optionally narrow
         * the scope of the <code>Query</code> operation by specifying a sort key value and
         * a comparison operator in <code>KeyConditionExpression</code>. To further refine
         * the <code>Query</code> results, you can optionally provide a
         * <code>FilterExpression</code>. A <code>FilterExpression</code> determines which
         * items within the results should be returned to you. All of the other results are
         * discarded. </p> <p> A <code>Query</code> operation always returns a result set.
         * If no matching items are found, the result set will be empty. Queries that do
         * not return results consume the minimum number of read capacity units for that
         * type of read operation. </p> <note> <p> DynamoDB calculates the number of read
         * capacity units consumed based on item size, not on the amount of data that is
         * returned to an application. The number of capacity units consumed will be the
         * same whether you request all of the attributes (the default behavior) or just
         * some of them (using a projection expression). The number will also be the same
         * whether or not you use a <code>FilterExpression</code>. </p> </note> <p>
         * <code>Query</code> results are always sorted by the sort key value. If the data
         * type of the sort key is Number, the results are returned in numeric order;
         * otherwise, the results are returned in order of UTF-8 bytes. By default, the
         * sort order is ascending. To reverse the order, set the
         * <code>ScanIndexForward</code> parameter to false. </p> <p> A single
         * <code>Query</code> operation will read up to the maximum number of items set (if
         * using the <code>Limit</code> parameter) or a maximum of 1 MB of data and then
         * apply any filtering to the results using <code>FilterExpression</code>. If
         * <code>LastEvaluatedKey</code> is present in the response, you will need to
         * paginate the result set. For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Query.html#Query.Pagination">Paginating
         * the Results</a> in the <i>Amazon DynamoDB Developer Guide</i>. </p> <p>
         * <code>FilterExpression</code> is applied after a <code>Query</code> finishes,
         * but before the results are returned. A <code>FilterExpression</code> cannot
         * contain partition key or sort key attributes. You need to specify those
         * attributes in the <code>KeyConditionExpression</code>. </p> <note> <p> A
         * <code>Query</code> operation can return an empty result set and a
         * <code>LastEvaluatedKey</code> if all the items read for the page of results are
         * filtered out. </p> </note> <p>You can query a table, a local secondary index, or
         * a global secondary index. For a query on a table or on a local secondary index,
         * you can set the <code>ConsistentRead</code> parameter to <code>true</code> and
         * obtain a strongly consistent result. Global secondary indexes support eventually
         * consistent reads only, so do not specify <code>ConsistentRead</code> when
         * querying a global secondary index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/Query">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QueryAsync(const Model::QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new table from an existing backup. Any number of users can execute
         * up to 4 concurrent restores (any type of restore) in a given account. </p>
         * <p>You can call <code>RestoreTableFromBackup</code> at a maximum rate of 10
         * times per second.</p> <p>You must manually set up the following on the restored
         * table:</p> <ul> <li> <p>Auto scaling policies</p> </li> <li> <p>IAM policies</p>
         * </li> <li> <p>Amazon CloudWatch metrics and alarms</p> </li> <li> <p>Tags</p>
         * </li> <li> <p>Stream settings</p> </li> <li> <p>Time to Live (TTL) settings</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/RestoreTableFromBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreTableFromBackupOutcome RestoreTableFromBackup(const Model::RestoreTableFromBackupRequest& request) const;

        /**
         * <p>Creates a new table from an existing backup. Any number of users can execute
         * up to 4 concurrent restores (any type of restore) in a given account. </p>
         * <p>You can call <code>RestoreTableFromBackup</code> at a maximum rate of 10
         * times per second.</p> <p>You must manually set up the following on the restored
         * table:</p> <ul> <li> <p>Auto scaling policies</p> </li> <li> <p>IAM policies</p>
         * </li> <li> <p>Amazon CloudWatch metrics and alarms</p> </li> <li> <p>Tags</p>
         * </li> <li> <p>Stream settings</p> </li> <li> <p>Time to Live (TTL) settings</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/RestoreTableFromBackup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreTableFromBackupOutcomeCallable RestoreTableFromBackupCallable(const Model::RestoreTableFromBackupRequest& request) const;

        /**
         * <p>Creates a new table from an existing backup. Any number of users can execute
         * up to 4 concurrent restores (any type of restore) in a given account. </p>
         * <p>You can call <code>RestoreTableFromBackup</code> at a maximum rate of 10
         * times per second.</p> <p>You must manually set up the following on the restored
         * table:</p> <ul> <li> <p>Auto scaling policies</p> </li> <li> <p>IAM policies</p>
         * </li> <li> <p>Amazon CloudWatch metrics and alarms</p> </li> <li> <p>Tags</p>
         * </li> <li> <p>Stream settings</p> </li> <li> <p>Time to Live (TTL) settings</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/RestoreTableFromBackup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreTableFromBackupAsync(const Model::RestoreTableFromBackupRequest& request, const RestoreTableFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores the specified table to the specified point in time within
         * <code>EarliestRestorableDateTime</code> and
         * <code>LatestRestorableDateTime</code>. You can restore your table to any point
         * in time during the last 35 days. Any number of users can execute up to 4
         * concurrent restores (any type of restore) in a given account. </p> <p> When you
         * restore using point in time recovery, DynamoDB restores your table data to the
         * state based on the selected date and time (day:hour:minute:second) to a new
         * table. </p> <p> Along with data, the following are also included on the new
         * restored table using point in time recovery: </p> <ul> <li> <p>Global secondary
         * indexes (GSIs)</p> </li> <li> <p>Local secondary indexes (LSIs)</p> </li> <li>
         * <p>Provisioned read and write capacity</p> </li> <li> <p>Encryption settings</p>
         * <important> <p> All these settings come from the current settings of the source
         * table at the time of restore. </p> </important> </li> </ul> <p>You must manually
         * set up the following on the restored table:</p> <ul> <li> <p>Auto scaling
         * policies</p> </li> <li> <p>IAM policies</p> </li> <li> <p>Amazon CloudWatch
         * metrics and alarms</p> </li> <li> <p>Tags</p> </li> <li> <p>Stream settings</p>
         * </li> <li> <p>Time to Live (TTL) settings</p> </li> <li> <p>Point in time
         * recovery settings</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/RestoreTableToPointInTime">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreTableToPointInTimeOutcome RestoreTableToPointInTime(const Model::RestoreTableToPointInTimeRequest& request) const;

        /**
         * <p>Restores the specified table to the specified point in time within
         * <code>EarliestRestorableDateTime</code> and
         * <code>LatestRestorableDateTime</code>. You can restore your table to any point
         * in time during the last 35 days. Any number of users can execute up to 4
         * concurrent restores (any type of restore) in a given account. </p> <p> When you
         * restore using point in time recovery, DynamoDB restores your table data to the
         * state based on the selected date and time (day:hour:minute:second) to a new
         * table. </p> <p> Along with data, the following are also included on the new
         * restored table using point in time recovery: </p> <ul> <li> <p>Global secondary
         * indexes (GSIs)</p> </li> <li> <p>Local secondary indexes (LSIs)</p> </li> <li>
         * <p>Provisioned read and write capacity</p> </li> <li> <p>Encryption settings</p>
         * <important> <p> All these settings come from the current settings of the source
         * table at the time of restore. </p> </important> </li> </ul> <p>You must manually
         * set up the following on the restored table:</p> <ul> <li> <p>Auto scaling
         * policies</p> </li> <li> <p>IAM policies</p> </li> <li> <p>Amazon CloudWatch
         * metrics and alarms</p> </li> <li> <p>Tags</p> </li> <li> <p>Stream settings</p>
         * </li> <li> <p>Time to Live (TTL) settings</p> </li> <li> <p>Point in time
         * recovery settings</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/RestoreTableToPointInTime">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreTableToPointInTimeOutcomeCallable RestoreTableToPointInTimeCallable(const Model::RestoreTableToPointInTimeRequest& request) const;

        /**
         * <p>Restores the specified table to the specified point in time within
         * <code>EarliestRestorableDateTime</code> and
         * <code>LatestRestorableDateTime</code>. You can restore your table to any point
         * in time during the last 35 days. Any number of users can execute up to 4
         * concurrent restores (any type of restore) in a given account. </p> <p> When you
         * restore using point in time recovery, DynamoDB restores your table data to the
         * state based on the selected date and time (day:hour:minute:second) to a new
         * table. </p> <p> Along with data, the following are also included on the new
         * restored table using point in time recovery: </p> <ul> <li> <p>Global secondary
         * indexes (GSIs)</p> </li> <li> <p>Local secondary indexes (LSIs)</p> </li> <li>
         * <p>Provisioned read and write capacity</p> </li> <li> <p>Encryption settings</p>
         * <important> <p> All these settings come from the current settings of the source
         * table at the time of restore. </p> </important> </li> </ul> <p>You must manually
         * set up the following on the restored table:</p> <ul> <li> <p>Auto scaling
         * policies</p> </li> <li> <p>IAM policies</p> </li> <li> <p>Amazon CloudWatch
         * metrics and alarms</p> </li> <li> <p>Tags</p> </li> <li> <p>Stream settings</p>
         * </li> <li> <p>Time to Live (TTL) settings</p> </li> <li> <p>Point in time
         * recovery settings</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/RestoreTableToPointInTime">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreTableToPointInTimeAsync(const Model::RestoreTableToPointInTimeRequest& request, const RestoreTableToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>Scan</code> operation returns one or more items and item attributes
         * by accessing every item in a table or a secondary index. To have DynamoDB return
         * fewer items, you can provide a <code>FilterExpression</code> operation.</p>
         * <p>If the total number of scanned items exceeds the maximum dataset size limit
         * of 1 MB, the scan stops and results are returned to the user as a
         * <code>LastEvaluatedKey</code> value to continue the scan in a subsequent
         * operation. The results also include the number of items exceeding the limit. A
         * scan can result in no table data meeting the filter criteria. </p> <p>A single
         * <code>Scan</code> operation reads up to the maximum number of items set (if
         * using the <code>Limit</code> parameter) or a maximum of 1 MB of data and then
         * apply any filtering to the results using <code>FilterExpression</code>. If
         * <code>LastEvaluatedKey</code> is present in the response, you need to paginate
         * the result set. For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Scan.html#Scan.Pagination">Paginating
         * the Results</a> in the <i>Amazon DynamoDB Developer Guide</i>. </p> <p>
         * <code>Scan</code> operations proceed sequentially; however, for faster
         * performance on a large table or secondary index, applications can request a
         * parallel <code>Scan</code> operation by providing the <code>Segment</code> and
         * <code>TotalSegments</code> parameters. For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Scan.html#Scan.ParallelScan">Parallel
         * Scan</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>
         * <code>Scan</code> uses eventually consistent reads when accessing the data in a
         * table; therefore, the result set might not include the changes to data in the
         * table immediately before the operation began. If you need a consistent copy of
         * the data, as of the time that the <code>Scan</code> begins, you can set the
         * <code>ConsistentRead</code> parameter to <code>true</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/Scan">AWS API
         * Reference</a></p>
         */
        virtual Model::ScanOutcome Scan(const Model::ScanRequest& request) const;

        /**
         * <p>The <code>Scan</code> operation returns one or more items and item attributes
         * by accessing every item in a table or a secondary index. To have DynamoDB return
         * fewer items, you can provide a <code>FilterExpression</code> operation.</p>
         * <p>If the total number of scanned items exceeds the maximum dataset size limit
         * of 1 MB, the scan stops and results are returned to the user as a
         * <code>LastEvaluatedKey</code> value to continue the scan in a subsequent
         * operation. The results also include the number of items exceeding the limit. A
         * scan can result in no table data meeting the filter criteria. </p> <p>A single
         * <code>Scan</code> operation reads up to the maximum number of items set (if
         * using the <code>Limit</code> parameter) or a maximum of 1 MB of data and then
         * apply any filtering to the results using <code>FilterExpression</code>. If
         * <code>LastEvaluatedKey</code> is present in the response, you need to paginate
         * the result set. For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Scan.html#Scan.Pagination">Paginating
         * the Results</a> in the <i>Amazon DynamoDB Developer Guide</i>. </p> <p>
         * <code>Scan</code> operations proceed sequentially; however, for faster
         * performance on a large table or secondary index, applications can request a
         * parallel <code>Scan</code> operation by providing the <code>Segment</code> and
         * <code>TotalSegments</code> parameters. For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Scan.html#Scan.ParallelScan">Parallel
         * Scan</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>
         * <code>Scan</code> uses eventually consistent reads when accessing the data in a
         * table; therefore, the result set might not include the changes to data in the
         * table immediately before the operation began. If you need a consistent copy of
         * the data, as of the time that the <code>Scan</code> begins, you can set the
         * <code>ConsistentRead</code> parameter to <code>true</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/Scan">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ScanOutcomeCallable ScanCallable(const Model::ScanRequest& request) const;

        /**
         * <p>The <code>Scan</code> operation returns one or more items and item attributes
         * by accessing every item in a table or a secondary index. To have DynamoDB return
         * fewer items, you can provide a <code>FilterExpression</code> operation.</p>
         * <p>If the total number of scanned items exceeds the maximum dataset size limit
         * of 1 MB, the scan stops and results are returned to the user as a
         * <code>LastEvaluatedKey</code> value to continue the scan in a subsequent
         * operation. The results also include the number of items exceeding the limit. A
         * scan can result in no table data meeting the filter criteria. </p> <p>A single
         * <code>Scan</code> operation reads up to the maximum number of items set (if
         * using the <code>Limit</code> parameter) or a maximum of 1 MB of data and then
         * apply any filtering to the results using <code>FilterExpression</code>. If
         * <code>LastEvaluatedKey</code> is present in the response, you need to paginate
         * the result set. For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Scan.html#Scan.Pagination">Paginating
         * the Results</a> in the <i>Amazon DynamoDB Developer Guide</i>. </p> <p>
         * <code>Scan</code> operations proceed sequentially; however, for faster
         * performance on a large table or secondary index, applications can request a
         * parallel <code>Scan</code> operation by providing the <code>Segment</code> and
         * <code>TotalSegments</code> parameters. For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Scan.html#Scan.ParallelScan">Parallel
         * Scan</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>
         * <code>Scan</code> uses eventually consistent reads when accessing the data in a
         * table; therefore, the result set might not include the changes to data in the
         * table immediately before the operation began. If you need a consistent copy of
         * the data, as of the time that the <code>Scan</code> begins, you can set the
         * <code>ConsistentRead</code> parameter to <code>true</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/Scan">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ScanAsync(const Model::ScanRequest& request, const ScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associate a set of tags with an Amazon DynamoDB resource. You can then
         * activate these user-defined tags so that they appear on the Billing and Cost
         * Management console for cost allocation tracking. You can call TagResource up to
         * five times per second, per account. </p> <p>For an overview on tagging DynamoDB
         * resources, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
         * for DynamoDB</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associate a set of tags with an Amazon DynamoDB resource. You can then
         * activate these user-defined tags so that they appear on the Billing and Cost
         * Management console for cost allocation tracking. You can call TagResource up to
         * five times per second, per account. </p> <p>For an overview on tagging DynamoDB
         * resources, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
         * for DynamoDB</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associate a set of tags with an Amazon DynamoDB resource. You can then
         * activate these user-defined tags so that they appear on the Billing and Cost
         * Management console for cost allocation tracking. You can call TagResource up to
         * five times per second, per account. </p> <p>For an overview on tagging DynamoDB
         * resources, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
         * for DynamoDB</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <code>TransactGetItems</code> is a synchronous operation that atomically
         * retrieves multiple items from one or more tables (but not from indexes) in a
         * single account and Region. A <code>TransactGetItems</code> call can contain up
         * to 25 <code>TransactGetItem</code> objects, each of which contains a
         * <code>Get</code> structure that specifies an item to retrieve from a table in
         * the account and Region. A call to <code>TransactGetItems</code> cannot retrieve
         * items from tables in more than one AWS account or Region. The aggregate size of
         * the items in the transaction cannot exceed 4 MB.</p> <note> <p>All AWS Regions
         * and AWS GovCloud (US) support up to 25 items per transaction with up to 4 MB of
         * data, except the following AWS Regions: </p> <ul> <li> <p>China (Beijing)</p>
         * </li> <li> <p>China (Ningxia)</p> </li> </ul> <p>The China (Beijing) and China
         * (Ningxia) Regions support up to 10 items per transaction with up to 4 MB of
         * data. </p> </note> <p>DynamoDB rejects the entire <code>TransactGetItems</code>
         * request if any of the following is true:</p> <ul> <li> <p>A conflicting
         * operation is in the process of updating an item to be read.</p> </li> <li>
         * <p>There is insufficient provisioned capacity for the transaction to be
         * completed.</p> </li> <li> <p>There is a user error, such as an invalid data
         * format.</p> </li> <li> <p>The aggregate size of the items in the transaction
         * cannot exceed 4 MB.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TransactGetItems">AWS
         * API Reference</a></p>
         */
        virtual Model::TransactGetItemsOutcome TransactGetItems(const Model::TransactGetItemsRequest& request) const;

        /**
         * <p> <code>TransactGetItems</code> is a synchronous operation that atomically
         * retrieves multiple items from one or more tables (but not from indexes) in a
         * single account and Region. A <code>TransactGetItems</code> call can contain up
         * to 25 <code>TransactGetItem</code> objects, each of which contains a
         * <code>Get</code> structure that specifies an item to retrieve from a table in
         * the account and Region. A call to <code>TransactGetItems</code> cannot retrieve
         * items from tables in more than one AWS account or Region. The aggregate size of
         * the items in the transaction cannot exceed 4 MB.</p> <note> <p>All AWS Regions
         * and AWS GovCloud (US) support up to 25 items per transaction with up to 4 MB of
         * data, except the following AWS Regions: </p> <ul> <li> <p>China (Beijing)</p>
         * </li> <li> <p>China (Ningxia)</p> </li> </ul> <p>The China (Beijing) and China
         * (Ningxia) Regions support up to 10 items per transaction with up to 4 MB of
         * data. </p> </note> <p>DynamoDB rejects the entire <code>TransactGetItems</code>
         * request if any of the following is true:</p> <ul> <li> <p>A conflicting
         * operation is in the process of updating an item to be read.</p> </li> <li>
         * <p>There is insufficient provisioned capacity for the transaction to be
         * completed.</p> </li> <li> <p>There is a user error, such as an invalid data
         * format.</p> </li> <li> <p>The aggregate size of the items in the transaction
         * cannot exceed 4 MB.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TransactGetItems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TransactGetItemsOutcomeCallable TransactGetItemsCallable(const Model::TransactGetItemsRequest& request) const;

        /**
         * <p> <code>TransactGetItems</code> is a synchronous operation that atomically
         * retrieves multiple items from one or more tables (but not from indexes) in a
         * single account and Region. A <code>TransactGetItems</code> call can contain up
         * to 25 <code>TransactGetItem</code> objects, each of which contains a
         * <code>Get</code> structure that specifies an item to retrieve from a table in
         * the account and Region. A call to <code>TransactGetItems</code> cannot retrieve
         * items from tables in more than one AWS account or Region. The aggregate size of
         * the items in the transaction cannot exceed 4 MB.</p> <note> <p>All AWS Regions
         * and AWS GovCloud (US) support up to 25 items per transaction with up to 4 MB of
         * data, except the following AWS Regions: </p> <ul> <li> <p>China (Beijing)</p>
         * </li> <li> <p>China (Ningxia)</p> </li> </ul> <p>The China (Beijing) and China
         * (Ningxia) Regions support up to 10 items per transaction with up to 4 MB of
         * data. </p> </note> <p>DynamoDB rejects the entire <code>TransactGetItems</code>
         * request if any of the following is true:</p> <ul> <li> <p>A conflicting
         * operation is in the process of updating an item to be read.</p> </li> <li>
         * <p>There is insufficient provisioned capacity for the transaction to be
         * completed.</p> </li> <li> <p>There is a user error, such as an invalid data
         * format.</p> </li> <li> <p>The aggregate size of the items in the transaction
         * cannot exceed 4 MB.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TransactGetItems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TransactGetItemsAsync(const Model::TransactGetItemsRequest& request, const TransactGetItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <code>TransactWriteItems</code> is a synchronous write operation that groups
         * up to 25 action requests. These actions can target items in different tables,
         * but not in different AWS accounts or Regions, and no two actions can target the
         * same item. For example, you cannot both <code>ConditionCheck</code> and
         * <code>Update</code> the same item. The aggregate size of the items in the
         * transaction cannot exceed 4 MB.</p> <note> <p>All AWS Regions and AWS GovCloud
         * (US) support up to 25 items per transaction with up to 4 MB of data, except the
         * following AWS Regions: </p> <ul> <li> <p>China (Beijing)</p> </li> <li> <p>China
         * (Ningxia)</p> </li> </ul> <p>The China (Beijing) and China (Ningxia) Regions
         * support up to 10 items per transaction with up to 4 MB of data. </p> </note>
         * <p>The actions are completed atomically so that either all of them succeed, or
         * all of them fail. They are defined by the following objects:</p> <ul> <li> <p>
         * <code>Put</code>  &#x97;   Initiates a <code>PutItem</code> operation to write a
         * new item. This structure specifies the primary key of the item to be written,
         * the name of the table to write it in, an optional condition expression that must
         * be satisfied for the write to succeed, a list of the item's attributes, and a
         * field indicating whether to retrieve the item's attributes if the condition is
         * not met.</p> </li> <li> <p> <code>Update</code>  &#x97;   Initiates an
         * <code>UpdateItem</code> operation to update an existing item. This structure
         * specifies the primary key of the item to be updated, the name of the table where
         * it resides, an optional condition expression that must be satisfied for the
         * update to succeed, an expression that defines one or more attributes to be
         * updated, and a field indicating whether to retrieve the item's attributes if the
         * condition is not met.</p> </li> <li> <p> <code>Delete</code>  &#x97;   Initiates
         * a <code>DeleteItem</code> operation to delete an existing item. This structure
         * specifies the primary key of the item to be deleted, the name of the table where
         * it resides, an optional condition expression that must be satisfied for the
         * deletion to succeed, and a field indicating whether to retrieve the item's
         * attributes if the condition is not met.</p> </li> <li> <p>
         * <code>ConditionCheck</code>  &#x97;   Applies a condition to an item that is not
         * being modified by the transaction. This structure specifies the primary key of
         * the item to be checked, the name of the table where it resides, a condition
         * expression that must be satisfied for the transaction to succeed, and a field
         * indicating whether to retrieve the item's attributes if the condition is not
         * met.</p> </li> </ul> <p>DynamoDB rejects the entire
         * <code>TransactWriteItems</code> request if any of the following is true:</p>
         * <ul> <li> <p>A condition in one of the condition expressions is not met.</p>
         * </li> <li> <p>An ongoing operation is in the process of updating the same
         * item.</p> </li> <li> <p>There is insufficient provisioned capacity for the
         * transaction to be completed.</p> </li> <li> <p>An item size becomes too large
         * (bigger than 400 KB), a local secondary index (LSI) becomes too large, or a
         * similar validation error occurs because of changes made by the transaction.</p>
         * </li> <li> <p>The aggregate size of the items in the transaction exceeds 4
         * MB.</p> </li> <li> <p>There is a user error, such as an invalid data format.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TransactWriteItems">AWS
         * API Reference</a></p>
         */
        virtual Model::TransactWriteItemsOutcome TransactWriteItems(const Model::TransactWriteItemsRequest& request) const;

        /**
         * <p> <code>TransactWriteItems</code> is a synchronous write operation that groups
         * up to 25 action requests. These actions can target items in different tables,
         * but not in different AWS accounts or Regions, and no two actions can target the
         * same item. For example, you cannot both <code>ConditionCheck</code> and
         * <code>Update</code> the same item. The aggregate size of the items in the
         * transaction cannot exceed 4 MB.</p> <note> <p>All AWS Regions and AWS GovCloud
         * (US) support up to 25 items per transaction with up to 4 MB of data, except the
         * following AWS Regions: </p> <ul> <li> <p>China (Beijing)</p> </li> <li> <p>China
         * (Ningxia)</p> </li> </ul> <p>The China (Beijing) and China (Ningxia) Regions
         * support up to 10 items per transaction with up to 4 MB of data. </p> </note>
         * <p>The actions are completed atomically so that either all of them succeed, or
         * all of them fail. They are defined by the following objects:</p> <ul> <li> <p>
         * <code>Put</code>  &#x97;   Initiates a <code>PutItem</code> operation to write a
         * new item. This structure specifies the primary key of the item to be written,
         * the name of the table to write it in, an optional condition expression that must
         * be satisfied for the write to succeed, a list of the item's attributes, and a
         * field indicating whether to retrieve the item's attributes if the condition is
         * not met.</p> </li> <li> <p> <code>Update</code>  &#x97;   Initiates an
         * <code>UpdateItem</code> operation to update an existing item. This structure
         * specifies the primary key of the item to be updated, the name of the table where
         * it resides, an optional condition expression that must be satisfied for the
         * update to succeed, an expression that defines one or more attributes to be
         * updated, and a field indicating whether to retrieve the item's attributes if the
         * condition is not met.</p> </li> <li> <p> <code>Delete</code>  &#x97;   Initiates
         * a <code>DeleteItem</code> operation to delete an existing item. This structure
         * specifies the primary key of the item to be deleted, the name of the table where
         * it resides, an optional condition expression that must be satisfied for the
         * deletion to succeed, and a field indicating whether to retrieve the item's
         * attributes if the condition is not met.</p> </li> <li> <p>
         * <code>ConditionCheck</code>  &#x97;   Applies a condition to an item that is not
         * being modified by the transaction. This structure specifies the primary key of
         * the item to be checked, the name of the table where it resides, a condition
         * expression that must be satisfied for the transaction to succeed, and a field
         * indicating whether to retrieve the item's attributes if the condition is not
         * met.</p> </li> </ul> <p>DynamoDB rejects the entire
         * <code>TransactWriteItems</code> request if any of the following is true:</p>
         * <ul> <li> <p>A condition in one of the condition expressions is not met.</p>
         * </li> <li> <p>An ongoing operation is in the process of updating the same
         * item.</p> </li> <li> <p>There is insufficient provisioned capacity for the
         * transaction to be completed.</p> </li> <li> <p>An item size becomes too large
         * (bigger than 400 KB), a local secondary index (LSI) becomes too large, or a
         * similar validation error occurs because of changes made by the transaction.</p>
         * </li> <li> <p>The aggregate size of the items in the transaction exceeds 4
         * MB.</p> </li> <li> <p>There is a user error, such as an invalid data format.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TransactWriteItems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TransactWriteItemsOutcomeCallable TransactWriteItemsCallable(const Model::TransactWriteItemsRequest& request) const;

        /**
         * <p> <code>TransactWriteItems</code> is a synchronous write operation that groups
         * up to 25 action requests. These actions can target items in different tables,
         * but not in different AWS accounts or Regions, and no two actions can target the
         * same item. For example, you cannot both <code>ConditionCheck</code> and
         * <code>Update</code> the same item. The aggregate size of the items in the
         * transaction cannot exceed 4 MB.</p> <note> <p>All AWS Regions and AWS GovCloud
         * (US) support up to 25 items per transaction with up to 4 MB of data, except the
         * following AWS Regions: </p> <ul> <li> <p>China (Beijing)</p> </li> <li> <p>China
         * (Ningxia)</p> </li> </ul> <p>The China (Beijing) and China (Ningxia) Regions
         * support up to 10 items per transaction with up to 4 MB of data. </p> </note>
         * <p>The actions are completed atomically so that either all of them succeed, or
         * all of them fail. They are defined by the following objects:</p> <ul> <li> <p>
         * <code>Put</code>  &#x97;   Initiates a <code>PutItem</code> operation to write a
         * new item. This structure specifies the primary key of the item to be written,
         * the name of the table to write it in, an optional condition expression that must
         * be satisfied for the write to succeed, a list of the item's attributes, and a
         * field indicating whether to retrieve the item's attributes if the condition is
         * not met.</p> </li> <li> <p> <code>Update</code>  &#x97;   Initiates an
         * <code>UpdateItem</code> operation to update an existing item. This structure
         * specifies the primary key of the item to be updated, the name of the table where
         * it resides, an optional condition expression that must be satisfied for the
         * update to succeed, an expression that defines one or more attributes to be
         * updated, and a field indicating whether to retrieve the item's attributes if the
         * condition is not met.</p> </li> <li> <p> <code>Delete</code>  &#x97;   Initiates
         * a <code>DeleteItem</code> operation to delete an existing item. This structure
         * specifies the primary key of the item to be deleted, the name of the table where
         * it resides, an optional condition expression that must be satisfied for the
         * deletion to succeed, and a field indicating whether to retrieve the item's
         * attributes if the condition is not met.</p> </li> <li> <p>
         * <code>ConditionCheck</code>  &#x97;   Applies a condition to an item that is not
         * being modified by the transaction. This structure specifies the primary key of
         * the item to be checked, the name of the table where it resides, a condition
         * expression that must be satisfied for the transaction to succeed, and a field
         * indicating whether to retrieve the item's attributes if the condition is not
         * met.</p> </li> </ul> <p>DynamoDB rejects the entire
         * <code>TransactWriteItems</code> request if any of the following is true:</p>
         * <ul> <li> <p>A condition in one of the condition expressions is not met.</p>
         * </li> <li> <p>An ongoing operation is in the process of updating the same
         * item.</p> </li> <li> <p>There is insufficient provisioned capacity for the
         * transaction to be completed.</p> </li> <li> <p>An item size becomes too large
         * (bigger than 400 KB), a local secondary index (LSI) becomes too large, or a
         * similar validation error occurs because of changes made by the transaction.</p>
         * </li> <li> <p>The aggregate size of the items in the transaction exceeds 4
         * MB.</p> </li> <li> <p>There is a user error, such as an invalid data format.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TransactWriteItems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TransactWriteItemsAsync(const Model::TransactWriteItemsRequest& request, const TransactWriteItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the association of tags from an Amazon DynamoDB resource. You can
         * call <code>UntagResource</code> up to five times per second, per account. </p>
         * <p>For an overview on tagging DynamoDB resources, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
         * for DynamoDB</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the association of tags from an Amazon DynamoDB resource. You can
         * call <code>UntagResource</code> up to five times per second, per account. </p>
         * <p>For an overview on tagging DynamoDB resources, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
         * for DynamoDB</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the association of tags from an Amazon DynamoDB resource. You can
         * call <code>UntagResource</code> up to five times per second, per account. </p>
         * <p>For an overview on tagging DynamoDB resources, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
         * for DynamoDB</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <code>UpdateContinuousBackups</code> enables or disables point in time
         * recovery for the specified table. A successful
         * <code>UpdateContinuousBackups</code> call returns the current
         * <code>ContinuousBackupsDescription</code>. Continuous backups are
         * <code>ENABLED</code> on all tables at table creation. If point in time recovery
         * is enabled, <code>PointInTimeRecoveryStatus</code> will be set to ENABLED.</p>
         * <p> Once continuous backups and point in time recovery are enabled, you can
         * restore to any point in time within <code>EarliestRestorableDateTime</code> and
         * <code>LatestRestorableDateTime</code>. </p> <p>
         * <code>LatestRestorableDateTime</code> is typically 5 minutes before the current
         * time. You can restore your table to any point in time during the last 35 days.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateContinuousBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContinuousBackupsOutcome UpdateContinuousBackups(const Model::UpdateContinuousBackupsRequest& request) const;

        /**
         * <p> <code>UpdateContinuousBackups</code> enables or disables point in time
         * recovery for the specified table. A successful
         * <code>UpdateContinuousBackups</code> call returns the current
         * <code>ContinuousBackupsDescription</code>. Continuous backups are
         * <code>ENABLED</code> on all tables at table creation. If point in time recovery
         * is enabled, <code>PointInTimeRecoveryStatus</code> will be set to ENABLED.</p>
         * <p> Once continuous backups and point in time recovery are enabled, you can
         * restore to any point in time within <code>EarliestRestorableDateTime</code> and
         * <code>LatestRestorableDateTime</code>. </p> <p>
         * <code>LatestRestorableDateTime</code> is typically 5 minutes before the current
         * time. You can restore your table to any point in time during the last 35 days.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateContinuousBackups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContinuousBackupsOutcomeCallable UpdateContinuousBackupsCallable(const Model::UpdateContinuousBackupsRequest& request) const;

        /**
         * <p> <code>UpdateContinuousBackups</code> enables or disables point in time
         * recovery for the specified table. A successful
         * <code>UpdateContinuousBackups</code> call returns the current
         * <code>ContinuousBackupsDescription</code>. Continuous backups are
         * <code>ENABLED</code> on all tables at table creation. If point in time recovery
         * is enabled, <code>PointInTimeRecoveryStatus</code> will be set to ENABLED.</p>
         * <p> Once continuous backups and point in time recovery are enabled, you can
         * restore to any point in time within <code>EarliestRestorableDateTime</code> and
         * <code>LatestRestorableDateTime</code>. </p> <p>
         * <code>LatestRestorableDateTime</code> is typically 5 minutes before the current
         * time. You can restore your table to any point in time during the last 35 days.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateContinuousBackups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContinuousBackupsAsync(const Model::UpdateContinuousBackupsRequest& request, const UpdateContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or removes replicas in the specified global table. The global table must
         * already exist to be able to use this operation. Any replica to be added must be
         * empty, have the same name as the global table, have the same key schema, have
         * DynamoDB Streams enabled, and have the same provisioned and maximum write
         * capacity units.</p> <note> <p>Although you can use
         * <code>UpdateGlobalTable</code> to add replicas and remove replicas in a single
         * request, for simplicity we recommend that you issue separate requests for adding
         * or removing replicas.</p> </note> <p> If global secondary indexes are specified,
         * then the following conditions must also be met: </p> <ul> <li> <p> The global
         * secondary indexes must have the same name. </p> </li> <li> <p> The global
         * secondary indexes must have the same hash key and sort key (if present). </p>
         * </li> <li> <p> The global secondary indexes must have the same provisioned and
         * maximum write capacity units. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateGlobalTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalTableOutcome UpdateGlobalTable(const Model::UpdateGlobalTableRequest& request) const;

        /**
         * <p>Adds or removes replicas in the specified global table. The global table must
         * already exist to be able to use this operation. Any replica to be added must be
         * empty, have the same name as the global table, have the same key schema, have
         * DynamoDB Streams enabled, and have the same provisioned and maximum write
         * capacity units.</p> <note> <p>Although you can use
         * <code>UpdateGlobalTable</code> to add replicas and remove replicas in a single
         * request, for simplicity we recommend that you issue separate requests for adding
         * or removing replicas.</p> </note> <p> If global secondary indexes are specified,
         * then the following conditions must also be met: </p> <ul> <li> <p> The global
         * secondary indexes must have the same name. </p> </li> <li> <p> The global
         * secondary indexes must have the same hash key and sort key (if present). </p>
         * </li> <li> <p> The global secondary indexes must have the same provisioned and
         * maximum write capacity units. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateGlobalTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGlobalTableOutcomeCallable UpdateGlobalTableCallable(const Model::UpdateGlobalTableRequest& request) const;

        /**
         * <p>Adds or removes replicas in the specified global table. The global table must
         * already exist to be able to use this operation. Any replica to be added must be
         * empty, have the same name as the global table, have the same key schema, have
         * DynamoDB Streams enabled, and have the same provisioned and maximum write
         * capacity units.</p> <note> <p>Although you can use
         * <code>UpdateGlobalTable</code> to add replicas and remove replicas in a single
         * request, for simplicity we recommend that you issue separate requests for adding
         * or removing replicas.</p> </note> <p> If global secondary indexes are specified,
         * then the following conditions must also be met: </p> <ul> <li> <p> The global
         * secondary indexes must have the same name. </p> </li> <li> <p> The global
         * secondary indexes must have the same hash key and sort key (if present). </p>
         * </li> <li> <p> The global secondary indexes must have the same provisioned and
         * maximum write capacity units. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateGlobalTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGlobalTableAsync(const Model::UpdateGlobalTableRequest& request, const UpdateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates settings for a global table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateGlobalTableSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalTableSettingsOutcome UpdateGlobalTableSettings(const Model::UpdateGlobalTableSettingsRequest& request) const;

        /**
         * <p>Updates settings for a global table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateGlobalTableSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGlobalTableSettingsOutcomeCallable UpdateGlobalTableSettingsCallable(const Model::UpdateGlobalTableSettingsRequest& request) const;

        /**
         * <p>Updates settings for a global table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateGlobalTableSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGlobalTableSettingsAsync(const Model::UpdateGlobalTableSettingsRequest& request, const UpdateGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Edits an existing item's attributes, or adds a new item to the table if it
         * does not already exist. You can put, delete, or add attribute values. You can
         * also perform a conditional update on an existing item (insert a new attribute
         * name-value pair if it doesn't exist, or replace an existing name-value pair if
         * it has certain expected attribute values).</p> <p>You can also return the item's
         * attribute values in the same <code>UpdateItem</code> operation using the
         * <code>ReturnValues</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateItem">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateItemOutcome UpdateItem(const Model::UpdateItemRequest& request) const;

        /**
         * <p>Edits an existing item's attributes, or adds a new item to the table if it
         * does not already exist. You can put, delete, or add attribute values. You can
         * also perform a conditional update on an existing item (insert a new attribute
         * name-value pair if it doesn't exist, or replace an existing name-value pair if
         * it has certain expected attribute values).</p> <p>You can also return the item's
         * attribute values in the same <code>UpdateItem</code> operation using the
         * <code>ReturnValues</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateItem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateItemOutcomeCallable UpdateItemCallable(const Model::UpdateItemRequest& request) const;

        /**
         * <p>Edits an existing item's attributes, or adds a new item to the table if it
         * does not already exist. You can put, delete, or add attribute values. You can
         * also perform a conditional update on an existing item (insert a new attribute
         * name-value pair if it doesn't exist, or replace an existing name-value pair if
         * it has certain expected attribute values).</p> <p>You can also return the item's
         * attribute values in the same <code>UpdateItem</code> operation using the
         * <code>ReturnValues</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateItem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateItemAsync(const Model::UpdateItemRequest& request, const UpdateItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the provisioned throughput settings, global secondary indexes, or
         * DynamoDB Streams settings for a given table.</p> <p>You can only perform one of
         * the following operations at once:</p> <ul> <li> <p>Modify the provisioned
         * throughput settings of the table.</p> </li> <li> <p>Enable or disable DynamoDB
         * Streams on the table.</p> </li> <li> <p>Remove a global secondary index from the
         * table.</p> </li> <li> <p>Create a new global secondary index on the table. After
         * the index begins backfilling, you can use <code>UpdateTable</code> to perform
         * other operations.</p> </li> </ul> <p> <code>UpdateTable</code> is an
         * asynchronous operation; while it is executing, the table status changes from
         * <code>ACTIVE</code> to <code>UPDATING</code>. While it is <code>UPDATING</code>,
         * you cannot issue another <code>UpdateTable</code> request. When the table
         * returns to the <code>ACTIVE</code> state, the <code>UpdateTable</code> operation
         * is complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableOutcome UpdateTable(const Model::UpdateTableRequest& request) const;

        /**
         * <p>Modifies the provisioned throughput settings, global secondary indexes, or
         * DynamoDB Streams settings for a given table.</p> <p>You can only perform one of
         * the following operations at once:</p> <ul> <li> <p>Modify the provisioned
         * throughput settings of the table.</p> </li> <li> <p>Enable or disable DynamoDB
         * Streams on the table.</p> </li> <li> <p>Remove a global secondary index from the
         * table.</p> </li> <li> <p>Create a new global secondary index on the table. After
         * the index begins backfilling, you can use <code>UpdateTable</code> to perform
         * other operations.</p> </li> </ul> <p> <code>UpdateTable</code> is an
         * asynchronous operation; while it is executing, the table status changes from
         * <code>ACTIVE</code> to <code>UPDATING</code>. While it is <code>UPDATING</code>,
         * you cannot issue another <code>UpdateTable</code> request. When the table
         * returns to the <code>ACTIVE</code> state, the <code>UpdateTable</code> operation
         * is complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTableOutcomeCallable UpdateTableCallable(const Model::UpdateTableRequest& request) const;

        /**
         * <p>Modifies the provisioned throughput settings, global secondary indexes, or
         * DynamoDB Streams settings for a given table.</p> <p>You can only perform one of
         * the following operations at once:</p> <ul> <li> <p>Modify the provisioned
         * throughput settings of the table.</p> </li> <li> <p>Enable or disable DynamoDB
         * Streams on the table.</p> </li> <li> <p>Remove a global secondary index from the
         * table.</p> </li> <li> <p>Create a new global secondary index on the table. After
         * the index begins backfilling, you can use <code>UpdateTable</code> to perform
         * other operations.</p> </li> </ul> <p> <code>UpdateTable</code> is an
         * asynchronous operation; while it is executing, the table status changes from
         * <code>ACTIVE</code> to <code>UPDATING</code>. While it is <code>UPDATING</code>,
         * you cannot issue another <code>UpdateTable</code> request. When the table
         * returns to the <code>ACTIVE</code> state, the <code>UpdateTable</code> operation
         * is complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTableAsync(const Model::UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>UpdateTimeToLive</code> method enables or disables Time to Live
         * (TTL) for the specified table. A successful <code>UpdateTimeToLive</code> call
         * returns the current <code>TimeToLiveSpecification</code>. It can take up to one
         * hour for the change to fully process. Any additional
         * <code>UpdateTimeToLive</code> calls for the same table during this one hour
         * duration result in a <code>ValidationException</code>. </p> <p>TTL compares the
         * current time in epoch time format to the time stored in the TTL attribute of an
         * item. If the epoch time value stored in the attribute is less than the current
         * time, the item is marked as expired and subsequently deleted.</p> <note> <p> The
         * epoch time format is the number of seconds elapsed since 12:00:00 AM January 1,
         * 1970 UTC. </p> </note> <p>DynamoDB deletes expired items on a best-effort basis
         * to ensure availability of throughput for other data operations. </p> <important>
         * <p>DynamoDB typically deletes expired items within two days of expiration. The
         * exact duration within which an item gets deleted after expiration is specific to
         * the nature of the workload. Items that have expired and not been deleted will
         * still show up in reads, queries, and scans.</p> </important> <p>As items are
         * deleted, they are removed from any local secondary index and global secondary
         * index immediately in the same eventually consistent way as a standard delete
         * operation.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/TTL.html">Time
         * To Live</a> in the Amazon DynamoDB Developer Guide. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateTimeToLive">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTimeToLiveOutcome UpdateTimeToLive(const Model::UpdateTimeToLiveRequest& request) const;

        /**
         * <p>The <code>UpdateTimeToLive</code> method enables or disables Time to Live
         * (TTL) for the specified table. A successful <code>UpdateTimeToLive</code> call
         * returns the current <code>TimeToLiveSpecification</code>. It can take up to one
         * hour for the change to fully process. Any additional
         * <code>UpdateTimeToLive</code> calls for the same table during this one hour
         * duration result in a <code>ValidationException</code>. </p> <p>TTL compares the
         * current time in epoch time format to the time stored in the TTL attribute of an
         * item. If the epoch time value stored in the attribute is less than the current
         * time, the item is marked as expired and subsequently deleted.</p> <note> <p> The
         * epoch time format is the number of seconds elapsed since 12:00:00 AM January 1,
         * 1970 UTC. </p> </note> <p>DynamoDB deletes expired items on a best-effort basis
         * to ensure availability of throughput for other data operations. </p> <important>
         * <p>DynamoDB typically deletes expired items within two days of expiration. The
         * exact duration within which an item gets deleted after expiration is specific to
         * the nature of the workload. Items that have expired and not been deleted will
         * still show up in reads, queries, and scans.</p> </important> <p>As items are
         * deleted, they are removed from any local secondary index and global secondary
         * index immediately in the same eventually consistent way as a standard delete
         * operation.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/TTL.html">Time
         * To Live</a> in the Amazon DynamoDB Developer Guide. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateTimeToLive">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTimeToLiveOutcomeCallable UpdateTimeToLiveCallable(const Model::UpdateTimeToLiveRequest& request) const;

        /**
         * <p>The <code>UpdateTimeToLive</code> method enables or disables Time to Live
         * (TTL) for the specified table. A successful <code>UpdateTimeToLive</code> call
         * returns the current <code>TimeToLiveSpecification</code>. It can take up to one
         * hour for the change to fully process. Any additional
         * <code>UpdateTimeToLive</code> calls for the same table during this one hour
         * duration result in a <code>ValidationException</code>. </p> <p>TTL compares the
         * current time in epoch time format to the time stored in the TTL attribute of an
         * item. If the epoch time value stored in the attribute is less than the current
         * time, the item is marked as expired and subsequently deleted.</p> <note> <p> The
         * epoch time format is the number of seconds elapsed since 12:00:00 AM January 1,
         * 1970 UTC. </p> </note> <p>DynamoDB deletes expired items on a best-effort basis
         * to ensure availability of throughput for other data operations. </p> <important>
         * <p>DynamoDB typically deletes expired items within two days of expiration. The
         * exact duration within which an item gets deleted after expiration is specific to
         * the nature of the workload. Items that have expired and not been deleted will
         * still show up in reads, queries, and scans.</p> </important> <p>As items are
         * deleted, they are removed from any local secondary index and global secondary
         * index immediately in the same eventually consistent way as a standard delete
         * operation.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/TTL.html">Time
         * To Live</a> in the Amazon DynamoDB Developer Guide. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateTimeToLive">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTimeToLiveAsync(const Model::UpdateTimeToLiveRequest& request, const UpdateTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchGetItemAsyncHelper(const Model::BatchGetItemRequest& request, const BatchGetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchWriteItemAsyncHelper(const Model::BatchWriteItemRequest& request, const BatchWriteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBackupAsyncHelper(const Model::CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGlobalTableAsyncHelper(const Model::CreateGlobalTableRequest& request, const CreateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTableAsyncHelper(const Model::CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupAsyncHelper(const Model::DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteItemAsyncHelper(const Model::DeleteItemRequest& request, const DeleteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTableAsyncHelper(const Model::DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBackupAsyncHelper(const Model::DescribeBackupRequest& request, const DescribeBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeContinuousBackupsAsyncHelper(const Model::DescribeContinuousBackupsRequest& request, const DescribeContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointsAsyncHelper(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGlobalTableAsyncHelper(const Model::DescribeGlobalTableRequest& request, const DescribeGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGlobalTableSettingsAsyncHelper(const Model::DescribeGlobalTableSettingsRequest& request, const DescribeGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLimitsAsyncHelper(const Model::DescribeLimitsRequest& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTableAsyncHelper(const Model::DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTimeToLiveAsyncHelper(const Model::DescribeTimeToLiveRequest& request, const DescribeTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetItemAsyncHelper(const Model::GetItemRequest& request, const GetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBackupsAsyncHelper(const Model::ListBackupsRequest& request, const ListBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGlobalTablesAsyncHelper(const Model::ListGlobalTablesRequest& request, const ListGlobalTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTablesAsyncHelper(const Model::ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsOfResourceAsyncHelper(const Model::ListTagsOfResourceRequest& request, const ListTagsOfResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutItemAsyncHelper(const Model::PutItemRequest& request, const PutItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void QueryAsyncHelper(const Model::QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreTableFromBackupAsyncHelper(const Model::RestoreTableFromBackupRequest& request, const RestoreTableFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreTableToPointInTimeAsyncHelper(const Model::RestoreTableToPointInTimeRequest& request, const RestoreTableToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ScanAsyncHelper(const Model::ScanRequest& request, const ScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TransactGetItemsAsyncHelper(const Model::TransactGetItemsRequest& request, const TransactGetItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TransactWriteItemsAsyncHelper(const Model::TransactWriteItemsRequest& request, const TransactWriteItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContinuousBackupsAsyncHelper(const Model::UpdateContinuousBackupsRequest& request, const UpdateContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGlobalTableAsyncHelper(const Model::UpdateGlobalTableRequest& request, const UpdateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGlobalTableSettingsAsyncHelper(const Model::UpdateGlobalTableSettingsRequest& request, const UpdateGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateItemAsyncHelper(const Model::UpdateItemRequest& request, const UpdateItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTableAsyncHelper(const Model::UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTimeToLiveAsyncHelper(const Model::UpdateTimeToLiveRequest& request, const UpdateTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      mutable Aws::Utils::ConcurrentCache<Aws::String, Aws::String> m_endpointsCache;
      bool m_enableEndpointDiscovery;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DynamoDB
} // namespace Aws
