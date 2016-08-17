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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/BatchGetItemResult.h>
#include <aws/dynamodb/model/BatchWriteItemResult.h>
#include <aws/dynamodb/model/CreateTableResult.h>
#include <aws/dynamodb/model/DeleteItemResult.h>
#include <aws/dynamodb/model/DeleteTableResult.h>
#include <aws/dynamodb/model/DescribeLimitsResult.h>
#include <aws/dynamodb/model/DescribeTableResult.h>
#include <aws/dynamodb/model/GetItemResult.h>
#include <aws/dynamodb/model/ListTablesResult.h>
#include <aws/dynamodb/model/PutItemResult.h>
#include <aws/dynamodb/model/QueryResult.h>
#include <aws/dynamodb/model/ScanResult.h>
#include <aws/dynamodb/model/UpdateItemResult.h>
#include <aws/dynamodb/model/UpdateTableResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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
        class CreateTableRequest;
        class DeleteItemRequest;
        class DeleteTableRequest;
        class DescribeLimitsRequest;
        class DescribeTableRequest;
        class GetItemRequest;
        class ListTablesRequest;
        class PutItemRequest;
        class QueryRequest;
        class ScanRequest;
        class UpdateItemRequest;
        class UpdateTableRequest;

        typedef Aws::Utils::Outcome<BatchGetItemResult, Aws::Client::AWSError<DynamoDBErrors>> BatchGetItemOutcome;
        typedef Aws::Utils::Outcome<BatchWriteItemResult, Aws::Client::AWSError<DynamoDBErrors>> BatchWriteItemOutcome;
        typedef Aws::Utils::Outcome<CreateTableResult, Aws::Client::AWSError<DynamoDBErrors>> CreateTableOutcome;
        typedef Aws::Utils::Outcome<DeleteItemResult, Aws::Client::AWSError<DynamoDBErrors>> DeleteItemOutcome;
        typedef Aws::Utils::Outcome<DeleteTableResult, Aws::Client::AWSError<DynamoDBErrors>> DeleteTableOutcome;
        typedef Aws::Utils::Outcome<DescribeLimitsResult, Aws::Client::AWSError<DynamoDBErrors>> DescribeLimitsOutcome;
        typedef Aws::Utils::Outcome<DescribeTableResult, Aws::Client::AWSError<DynamoDBErrors>> DescribeTableOutcome;
        typedef Aws::Utils::Outcome<GetItemResult, Aws::Client::AWSError<DynamoDBErrors>> GetItemOutcome;
        typedef Aws::Utils::Outcome<ListTablesResult, Aws::Client::AWSError<DynamoDBErrors>> ListTablesOutcome;
        typedef Aws::Utils::Outcome<PutItemResult, Aws::Client::AWSError<DynamoDBErrors>> PutItemOutcome;
        typedef Aws::Utils::Outcome<QueryResult, Aws::Client::AWSError<DynamoDBErrors>> QueryOutcome;
        typedef Aws::Utils::Outcome<ScanResult, Aws::Client::AWSError<DynamoDBErrors>> ScanOutcome;
        typedef Aws::Utils::Outcome<UpdateItemResult, Aws::Client::AWSError<DynamoDBErrors>> UpdateItemOutcome;
        typedef Aws::Utils::Outcome<UpdateTableResult, Aws::Client::AWSError<DynamoDBErrors>> UpdateTableOutcome;

        typedef std::future<BatchGetItemOutcome> BatchGetItemOutcomeCallable;
        typedef std::future<BatchWriteItemOutcome> BatchWriteItemOutcomeCallable;
        typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
        typedef std::future<DeleteItemOutcome> DeleteItemOutcomeCallable;
        typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
        typedef std::future<DescribeLimitsOutcome> DescribeLimitsOutcomeCallable;
        typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
        typedef std::future<GetItemOutcome> GetItemOutcomeCallable;
        typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
        typedef std::future<PutItemOutcome> PutItemOutcomeCallable;
        typedef std::future<QueryOutcome> QueryOutcomeCallable;
        typedef std::future<ScanOutcome> ScanOutcomeCallable;
        typedef std::future<UpdateItemOutcome> UpdateItemOutcomeCallable;
        typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
} // namespace Model

  class DynamoDBClient;

    typedef std::function<void(const DynamoDBClient*, const Model::BatchGetItemRequest&, const Model::BatchGetItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::BatchWriteItemRequest&, const Model::BatchWriteItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchWriteItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::CreateTableRequest&, const Model::CreateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DeleteItemRequest&, const Model::DeleteItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DeleteTableRequest&, const Model::DeleteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeLimitsRequest&, const Model::DescribeLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLimitsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeTableRequest&, const Model::DescribeTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::GetItemRequest&, const Model::GetItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ListTablesRequest&, const Model::ListTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTablesResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::PutItemRequest&, const Model::PutItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::QueryRequest&, const Model::QueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ScanRequest&, const Model::ScanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ScanResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateItemRequest&, const Model::UpdateItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateTableRequest&, const Model::UpdateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTableResponseReceivedHandler;

  /**
   * <fullname>Amazon DynamoDB</fullname> <p>This is the Amazon DynamoDB API
   * Reference. This guide provides descriptions of the low-level DynamoDB API.</p>
   * <p>This guide is intended for use with the following DynamoDB documentation:</p>
   * <ul> <li> <p> <a
   * href="http://docs.aws.amazon.com/amazondynamodb/latest/gettingstartedguide/">Amazon
   * DynamoDB Getting Started Guide</a> - provides hands-on exercises that help you
   * learn the basics of working with DynamoDB. <i>If you are new to DynamoDB, we
   * recommend that you begin with the Getting Started Guide.</i> </p> </li> <li> <p>
   * <a
   * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/">Amazon
   * DynamoDB Developer Guide</a> - contains detailed information about DynamoDB
   * concepts, usage, and best practices.</p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/dynamodbstreams/latest/APIReference/">Amazon
   * DynamoDB Streams API Reference</a> - provides descriptions and samples of the
   * DynamoDB Streams API. (For more information, see <a
   * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Streams.html">Capturing
   * Table Activity with DynamoDB Streams</a> in the Amazon DynamoDB Developer
   * Guide.)</p> </li> </ul> <p>Instead of making the requests to the low-level
   * DynamoDB API directly from your application, we recommend that you use the AWS
   * Software Development Kits (SDKs). The easy-to-use libraries in the AWS SDKs make
   * it unnecessary to call the low-level DynamoDB API directly from your
   * application. The libraries take care of request authentication, serialization,
   * and connection management. For more information, see <a
   * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/UsingAWSSDK.html">Using
   * the AWS SDKs with DynamoDB</a> in the Amazon DynamoDB Developer Guide.</p> <p>If
   * you decide to code against the low-level DynamoDB API directly, you will need to
   * write the necessary code to authenticate your requests. For more information on
   * signing your requests, see <a
   * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/API.html">Using
   * the DynamoDB API</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>The
   * following are short descriptions of each low-level API action, organized by
   * function.</p> <p> <b>Managing Tables</b> </p> <ul> <li> <p> <i>CreateTable</i> -
   * Creates a table with user-specified provisioned throughput settings. You must
   * define a primary key for the table - either a simple primary key (partition
   * key), or a composite primary key (partition key and sort key). Optionally, you
   * can create one or more secondary indexes, which provide fast data access using
   * non-key attributes.</p> </li> <li> <p> <i>DescribeTable</i> - Returns metadata
   * for a table, such as table size, status, and index information.</p> </li> <li>
   * <p> <i>UpdateTable</i> - Modifies the provisioned throughput settings for a
   * table. Optionally, you can modify the provisioned throughput settings for global
   * secondary indexes on the table.</p> </li> <li> <p> <i>ListTables</i> - Returns a
   * list of all tables associated with the current AWS account and endpoint.</p>
   * </li> <li> <p> <i>DeleteTable</i> - Deletes a table and all of its indexes.</p>
   * </li> </ul> <p>For conceptual information about managing tables, see <a
   * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html">Working
   * with Tables</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>
   * <b>Reading Data</b> </p> <ul> <li> <p> <i>GetItem</i> - Returns a set of
   * attributes for the item that has a given primary key. By default, <i>GetItem</i>
   * performs an eventually consistent read; however, applications can request a
   * strongly consistent read instead.</p> </li> <li> <p> <i>BatchGetItem</i> -
   * Performs multiple <i>GetItem</i> requests for data items using their primary
   * keys, from one table or multiple tables. The response from <i>BatchGetItem</i>
   * has a size limit of 16 MB and returns a maximum of 100 items. Both eventually
   * consistent and strongly consistent reads can be used.</p> </li> <li> <p>
   * <i>Query</i> - Returns one or more items from a table or a secondary index. You
   * must provide a specific value for the partition key. You can narrow the scope of
   * the query using comparison operators against a sort key value, or on the index
   * key. <i>Query</i> supports either eventual or strong consistency. A single
   * response has a size limit of 1 MB.</p> </li> <li> <p> <i>Scan</i> - Reads every
   * item in a table; the result set is eventually consistent. You can limit the
   * number of items returned by filtering the data attributes, using conditional
   * expressions. <i>Scan</i> can be used to enable ad-hoc querying of a table
   * against non-key attributes; however, since this is a full table scan without
   * using an index, <i>Scan</i> should not be used for any application query use
   * case that requires predictable performance.</p> </li> </ul> <p>For conceptual
   * information about reading data, see <a
   * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithItems.html">Working
   * with Items</a> and <a
   * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html">Query
   * and Scan Operations</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>
   * <b>Modifying Data</b> </p> <ul> <li> <p> <i>PutItem</i> - Creates a new item, or
   * replaces an existing item with a new item (including all the attributes). By
   * default, if an item in the table already exists with the same primary key, the
   * new item completely replaces the existing item. You can use conditional
   * operators to replace an item only if its attribute values match certain
   * conditions, or to insert a new item only if that item doesn't already exist.</p>
   * </li> <li> <p> <i>UpdateItem</i> - Modifies the attributes of an existing item.
   * You can also use conditional operators to perform an update only if the item's
   * attribute values match certain conditions.</p> </li> <li> <p> <i>DeleteItem</i>
   * - Deletes an item in a table by primary key. You can use conditional operators
   * to perform a delete an item only if the item's attribute values match certain
   * conditions.</p> </li> <li> <p> <i>BatchWriteItem</i> - Performs multiple
   * <i>PutItem</i> and <i>DeleteItem</i> requests across multiple tables in a single
   * request. A failure of any request(s) in the batch will not cause the entire
   * <i>BatchWriteItem</i> operation to fail. Supports batches of up to 25 items to
   * put or delete, with a maximum total request size of 16 MB. </p> </li> </ul>
   * <p>For conceptual information about modifying data, see <a
   * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithItems.html">Working
   * with Items</a> and <a
   * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html">Query
   * and Scan Operations</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
   */
  class AWS_DYNAMODB_API DynamoDBClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DynamoDBClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~DynamoDBClient();

        /**
         * <p>The <i>BatchGetItem</i> operation returns the attributes of one or more items
         * from one or more tables. You identify requested items by primary key.</p> <p>A
         * single operation can retrieve up to 16 MB of data, which can contain as many as
         * 100 items. <i>BatchGetItem</i> will return a partial result if the response size
         * limit is exceeded, the table's provisioned throughput is exceeded, or an
         * internal processing failure occurs. If a partial result is returned, the
         * operation returns a value for <i>UnprocessedKeys</i>. You can use this value to
         * retry the operation starting with the next item to get.</p> <important> <p>If
         * you request more than 100 items <i>BatchGetItem</i> will return a
         * <i>ValidationException</i> with the message "Too many items requested for the
         * BatchGetItem call".</p> </important> <p>For example, if you ask to retrieve 100
         * items, but each individual item is 300 KB in size, the system returns 52 items
         * (so as not to exceed the 16 MB limit). It also returns an appropriate
         * <i>UnprocessedKeys</i> value so you can get the next page of results. If
         * desired, your application can include its own logic to assemble the pages of
         * results into one data set.</p> <p>If <i>none</i> of the items can be processed
         * due to insufficient provisioned throughput on all of the tables in the request,
         * then <i>BatchGetItem</i> will return a
         * <i>ProvisionedThroughputExceededException</i>. If <i>at least one</i> of the
         * items is successfully processed, then <i>BatchGetItem</i> completes
         * successfully, while returning the keys of the unread items in
         * <i>UnprocessedKeys</i>.</p> <important> <p>If DynamoDB returns any unprocessed
         * items, you should retry the batch operation on those items. However, <i>we
         * strongly recommend that you use an exponential backoff algorithm</i>. If you
         * retry the batch operation immediately, the underlying read or write requests can
         * still fail due to throttling on the individual tables. If you delay the batch
         * operation using exponential backoff, the individual requests in the batch are
         * much more likely to succeed.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ErrorHandling.html#BatchOperations">Batch
         * Operations and Error Handling</a> in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p> </important> <p>By default, <i>BatchGetItem</i> performs
         * eventually consistent reads on every table in the request. If you want strongly
         * consistent reads instead, you can set <i>ConsistentRead</i> to <code>true</code>
         * for any or all tables.</p> <p>In order to minimize response latency,
         * <i>BatchGetItem</i> retrieves items in parallel.</p> <p>When designing your
         * application, keep in mind that DynamoDB does not return items in any particular
         * order. To help parse the response by item, include the primary key values for
         * the items in your request in the <i>AttributesToGet</i> parameter.</p> <p>If a
         * requested item does not exist, it is not returned in the result. Requests for
         * nonexistent items consume the minimum read capacity units according to the type
         * of read. For more information, see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#CapacityUnitCalculations">Capacity
         * Units Calculations</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
         */
        virtual Model::BatchGetItemOutcome BatchGetItem(const Model::BatchGetItemRequest& request) const;

        /**
         * <p>The <i>BatchGetItem</i> operation returns the attributes of one or more items
         * from one or more tables. You identify requested items by primary key.</p> <p>A
         * single operation can retrieve up to 16 MB of data, which can contain as many as
         * 100 items. <i>BatchGetItem</i> will return a partial result if the response size
         * limit is exceeded, the table's provisioned throughput is exceeded, or an
         * internal processing failure occurs. If a partial result is returned, the
         * operation returns a value for <i>UnprocessedKeys</i>. You can use this value to
         * retry the operation starting with the next item to get.</p> <important> <p>If
         * you request more than 100 items <i>BatchGetItem</i> will return a
         * <i>ValidationException</i> with the message "Too many items requested for the
         * BatchGetItem call".</p> </important> <p>For example, if you ask to retrieve 100
         * items, but each individual item is 300 KB in size, the system returns 52 items
         * (so as not to exceed the 16 MB limit). It also returns an appropriate
         * <i>UnprocessedKeys</i> value so you can get the next page of results. If
         * desired, your application can include its own logic to assemble the pages of
         * results into one data set.</p> <p>If <i>none</i> of the items can be processed
         * due to insufficient provisioned throughput on all of the tables in the request,
         * then <i>BatchGetItem</i> will return a
         * <i>ProvisionedThroughputExceededException</i>. If <i>at least one</i> of the
         * items is successfully processed, then <i>BatchGetItem</i> completes
         * successfully, while returning the keys of the unread items in
         * <i>UnprocessedKeys</i>.</p> <important> <p>If DynamoDB returns any unprocessed
         * items, you should retry the batch operation on those items. However, <i>we
         * strongly recommend that you use an exponential backoff algorithm</i>. If you
         * retry the batch operation immediately, the underlying read or write requests can
         * still fail due to throttling on the individual tables. If you delay the batch
         * operation using exponential backoff, the individual requests in the batch are
         * much more likely to succeed.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ErrorHandling.html#BatchOperations">Batch
         * Operations and Error Handling</a> in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p> </important> <p>By default, <i>BatchGetItem</i> performs
         * eventually consistent reads on every table in the request. If you want strongly
         * consistent reads instead, you can set <i>ConsistentRead</i> to <code>true</code>
         * for any or all tables.</p> <p>In order to minimize response latency,
         * <i>BatchGetItem</i> retrieves items in parallel.</p> <p>When designing your
         * application, keep in mind that DynamoDB does not return items in any particular
         * order. To help parse the response by item, include the primary key values for
         * the items in your request in the <i>AttributesToGet</i> parameter.</p> <p>If a
         * requested item does not exist, it is not returned in the result. Requests for
         * nonexistent items consume the minimum read capacity units according to the type
         * of read. For more information, see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#CapacityUnitCalculations">Capacity
         * Units Calculations</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetItemOutcomeCallable BatchGetItemCallable(const Model::BatchGetItemRequest& request) const;

        /**
         * <p>The <i>BatchGetItem</i> operation returns the attributes of one or more items
         * from one or more tables. You identify requested items by primary key.</p> <p>A
         * single operation can retrieve up to 16 MB of data, which can contain as many as
         * 100 items. <i>BatchGetItem</i> will return a partial result if the response size
         * limit is exceeded, the table's provisioned throughput is exceeded, or an
         * internal processing failure occurs. If a partial result is returned, the
         * operation returns a value for <i>UnprocessedKeys</i>. You can use this value to
         * retry the operation starting with the next item to get.</p> <important> <p>If
         * you request more than 100 items <i>BatchGetItem</i> will return a
         * <i>ValidationException</i> with the message "Too many items requested for the
         * BatchGetItem call".</p> </important> <p>For example, if you ask to retrieve 100
         * items, but each individual item is 300 KB in size, the system returns 52 items
         * (so as not to exceed the 16 MB limit). It also returns an appropriate
         * <i>UnprocessedKeys</i> value so you can get the next page of results. If
         * desired, your application can include its own logic to assemble the pages of
         * results into one data set.</p> <p>If <i>none</i> of the items can be processed
         * due to insufficient provisioned throughput on all of the tables in the request,
         * then <i>BatchGetItem</i> will return a
         * <i>ProvisionedThroughputExceededException</i>. If <i>at least one</i> of the
         * items is successfully processed, then <i>BatchGetItem</i> completes
         * successfully, while returning the keys of the unread items in
         * <i>UnprocessedKeys</i>.</p> <important> <p>If DynamoDB returns any unprocessed
         * items, you should retry the batch operation on those items. However, <i>we
         * strongly recommend that you use an exponential backoff algorithm</i>. If you
         * retry the batch operation immediately, the underlying read or write requests can
         * still fail due to throttling on the individual tables. If you delay the batch
         * operation using exponential backoff, the individual requests in the batch are
         * much more likely to succeed.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ErrorHandling.html#BatchOperations">Batch
         * Operations and Error Handling</a> in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p> </important> <p>By default, <i>BatchGetItem</i> performs
         * eventually consistent reads on every table in the request. If you want strongly
         * consistent reads instead, you can set <i>ConsistentRead</i> to <code>true</code>
         * for any or all tables.</p> <p>In order to minimize response latency,
         * <i>BatchGetItem</i> retrieves items in parallel.</p> <p>When designing your
         * application, keep in mind that DynamoDB does not return items in any particular
         * order. To help parse the response by item, include the primary key values for
         * the items in your request in the <i>AttributesToGet</i> parameter.</p> <p>If a
         * requested item does not exist, it is not returned in the result. Requests for
         * nonexistent items consume the minimum read capacity units according to the type
         * of read. For more information, see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#CapacityUnitCalculations">Capacity
         * Units Calculations</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetItemAsync(const Model::BatchGetItemRequest& request, const BatchGetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <i>BatchWriteItem</i> operation puts or deletes multiple items in one or
         * more tables. A single call to <i>BatchWriteItem</i> can write up to 16 MB of
         * data, which can comprise as many as 25 put or delete requests. Individual items
         * to be written can be as large as 400 KB.</p> <note> <p> <i>BatchWriteItem</i>
         * cannot update items. To update items, use the <i>UpdateItem</i> API.</p> </note>
         * <p>The individual <i>PutItem</i> and <i>DeleteItem</i> operations specified in
         * <i>BatchWriteItem</i> are atomic; however <i>BatchWriteItem</i> as a whole is
         * not. If any requested operations fail because the table's provisioned throughput
         * is exceeded or an internal processing failure occurs, the failed operations are
         * returned in the <i>UnprocessedItems</i> response parameter. You can investigate
         * and optionally resend the requests. Typically, you would call
         * <i>BatchWriteItem</i> in a loop. Each iteration would check for unprocessed
         * items and submit a new <i>BatchWriteItem</i> request with those unprocessed
         * items until all items have been processed.</p> <p>Note that if <i>none</i> of
         * the items can be processed due to insufficient provisioned throughput on all of
         * the tables in the request, then <i>BatchWriteItem</i> will return a
         * <i>ProvisionedThroughputExceededException</i>.</p> <important> <p>If DynamoDB
         * returns any unprocessed items, you should retry the batch operation on those
         * items. However, <i>we strongly recommend that you use an exponential backoff
         * algorithm</i>. If you retry the batch operation immediately, the underlying read
         * or write requests can still fail due to throttling on the individual tables. If
         * you delay the batch operation using exponential backoff, the individual requests
         * in the batch are much more likely to succeed.</p> <p>For more information, see
         * <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ErrorHandling.html#BatchOperations">Batch
         * Operations and Error Handling</a> in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p> </important> <p>With <i>BatchWriteItem</i>, you can efficiently
         * write or delete large amounts of data, such as from Amazon Elastic MapReduce
         * (EMR), or copy data from another database into DynamoDB. In order to improve
         * performance with these large-scale operations, <i>BatchWriteItem</i> does not
         * behave in the same way as individual <i>PutItem</i> and <i>DeleteItem</i> calls
         * would. For example, you cannot specify conditions on individual put and delete
         * requests, and <i>BatchWriteItem</i> does not return deleted items in the
         * response.</p> <p>If you use a programming language that supports concurrency,
         * you can use threads to write items in parallel. Your application must include
         * the necessary logic to manage the threads. With languages that don't support
         * threading, you must update or delete the specified items one at a time. In both
         * situations, <i>BatchWriteItem</i> provides an alternative where the API performs
         * the specified put and delete operations in parallel, giving you the power of the
         * thread pool approach without having to introduce complexity into your
         * application.</p> <p>Parallel processing reduces latency, but each specified put
         * and delete request consumes the same number of write capacity units whether it
         * is processed in parallel or not. Delete operations on nonexistent items consume
         * one write capacity unit.</p> <p>If one or more of the following is true,
         * DynamoDB rejects the entire batch write operation:</p> <ul> <li> <p>One or more
         * tables specified in the <i>BatchWriteItem</i> request does not exist.</p> </li>
         * <li> <p>Primary key attributes specified on an item in the request do not match
         * those in the corresponding table's primary key schema.</p> </li> <li> <p>You try
         * to perform multiple operations on the same item in the same
         * <i>BatchWriteItem</i> request. For example, you cannot put and delete the same
         * item in the same <i>BatchWriteItem</i> request. </p> </li> <li> <p>There are
         * more than 25 requests in the batch.</p> </li> <li> <p>Any individual item in a
         * batch exceeds 400 KB.</p> </li> <li> <p>The total request size exceeds 16
         * MB.</p> </li> </ul>
         */
        virtual Model::BatchWriteItemOutcome BatchWriteItem(const Model::BatchWriteItemRequest& request) const;

        /**
         * <p>The <i>BatchWriteItem</i> operation puts or deletes multiple items in one or
         * more tables. A single call to <i>BatchWriteItem</i> can write up to 16 MB of
         * data, which can comprise as many as 25 put or delete requests. Individual items
         * to be written can be as large as 400 KB.</p> <note> <p> <i>BatchWriteItem</i>
         * cannot update items. To update items, use the <i>UpdateItem</i> API.</p> </note>
         * <p>The individual <i>PutItem</i> and <i>DeleteItem</i> operations specified in
         * <i>BatchWriteItem</i> are atomic; however <i>BatchWriteItem</i> as a whole is
         * not. If any requested operations fail because the table's provisioned throughput
         * is exceeded or an internal processing failure occurs, the failed operations are
         * returned in the <i>UnprocessedItems</i> response parameter. You can investigate
         * and optionally resend the requests. Typically, you would call
         * <i>BatchWriteItem</i> in a loop. Each iteration would check for unprocessed
         * items and submit a new <i>BatchWriteItem</i> request with those unprocessed
         * items until all items have been processed.</p> <p>Note that if <i>none</i> of
         * the items can be processed due to insufficient provisioned throughput on all of
         * the tables in the request, then <i>BatchWriteItem</i> will return a
         * <i>ProvisionedThroughputExceededException</i>.</p> <important> <p>If DynamoDB
         * returns any unprocessed items, you should retry the batch operation on those
         * items. However, <i>we strongly recommend that you use an exponential backoff
         * algorithm</i>. If you retry the batch operation immediately, the underlying read
         * or write requests can still fail due to throttling on the individual tables. If
         * you delay the batch operation using exponential backoff, the individual requests
         * in the batch are much more likely to succeed.</p> <p>For more information, see
         * <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ErrorHandling.html#BatchOperations">Batch
         * Operations and Error Handling</a> in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p> </important> <p>With <i>BatchWriteItem</i>, you can efficiently
         * write or delete large amounts of data, such as from Amazon Elastic MapReduce
         * (EMR), or copy data from another database into DynamoDB. In order to improve
         * performance with these large-scale operations, <i>BatchWriteItem</i> does not
         * behave in the same way as individual <i>PutItem</i> and <i>DeleteItem</i> calls
         * would. For example, you cannot specify conditions on individual put and delete
         * requests, and <i>BatchWriteItem</i> does not return deleted items in the
         * response.</p> <p>If you use a programming language that supports concurrency,
         * you can use threads to write items in parallel. Your application must include
         * the necessary logic to manage the threads. With languages that don't support
         * threading, you must update or delete the specified items one at a time. In both
         * situations, <i>BatchWriteItem</i> provides an alternative where the API performs
         * the specified put and delete operations in parallel, giving you the power of the
         * thread pool approach without having to introduce complexity into your
         * application.</p> <p>Parallel processing reduces latency, but each specified put
         * and delete request consumes the same number of write capacity units whether it
         * is processed in parallel or not. Delete operations on nonexistent items consume
         * one write capacity unit.</p> <p>If one or more of the following is true,
         * DynamoDB rejects the entire batch write operation:</p> <ul> <li> <p>One or more
         * tables specified in the <i>BatchWriteItem</i> request does not exist.</p> </li>
         * <li> <p>Primary key attributes specified on an item in the request do not match
         * those in the corresponding table's primary key schema.</p> </li> <li> <p>You try
         * to perform multiple operations on the same item in the same
         * <i>BatchWriteItem</i> request. For example, you cannot put and delete the same
         * item in the same <i>BatchWriteItem</i> request. </p> </li> <li> <p>There are
         * more than 25 requests in the batch.</p> </li> <li> <p>Any individual item in a
         * batch exceeds 400 KB.</p> </li> <li> <p>The total request size exceeds 16
         * MB.</p> </li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchWriteItemOutcomeCallable BatchWriteItemCallable(const Model::BatchWriteItemRequest& request) const;

        /**
         * <p>The <i>BatchWriteItem</i> operation puts or deletes multiple items in one or
         * more tables. A single call to <i>BatchWriteItem</i> can write up to 16 MB of
         * data, which can comprise as many as 25 put or delete requests. Individual items
         * to be written can be as large as 400 KB.</p> <note> <p> <i>BatchWriteItem</i>
         * cannot update items. To update items, use the <i>UpdateItem</i> API.</p> </note>
         * <p>The individual <i>PutItem</i> and <i>DeleteItem</i> operations specified in
         * <i>BatchWriteItem</i> are atomic; however <i>BatchWriteItem</i> as a whole is
         * not. If any requested operations fail because the table's provisioned throughput
         * is exceeded or an internal processing failure occurs, the failed operations are
         * returned in the <i>UnprocessedItems</i> response parameter. You can investigate
         * and optionally resend the requests. Typically, you would call
         * <i>BatchWriteItem</i> in a loop. Each iteration would check for unprocessed
         * items and submit a new <i>BatchWriteItem</i> request with those unprocessed
         * items until all items have been processed.</p> <p>Note that if <i>none</i> of
         * the items can be processed due to insufficient provisioned throughput on all of
         * the tables in the request, then <i>BatchWriteItem</i> will return a
         * <i>ProvisionedThroughputExceededException</i>.</p> <important> <p>If DynamoDB
         * returns any unprocessed items, you should retry the batch operation on those
         * items. However, <i>we strongly recommend that you use an exponential backoff
         * algorithm</i>. If you retry the batch operation immediately, the underlying read
         * or write requests can still fail due to throttling on the individual tables. If
         * you delay the batch operation using exponential backoff, the individual requests
         * in the batch are much more likely to succeed.</p> <p>For more information, see
         * <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ErrorHandling.html#BatchOperations">Batch
         * Operations and Error Handling</a> in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p> </important> <p>With <i>BatchWriteItem</i>, you can efficiently
         * write or delete large amounts of data, such as from Amazon Elastic MapReduce
         * (EMR), or copy data from another database into DynamoDB. In order to improve
         * performance with these large-scale operations, <i>BatchWriteItem</i> does not
         * behave in the same way as individual <i>PutItem</i> and <i>DeleteItem</i> calls
         * would. For example, you cannot specify conditions on individual put and delete
         * requests, and <i>BatchWriteItem</i> does not return deleted items in the
         * response.</p> <p>If you use a programming language that supports concurrency,
         * you can use threads to write items in parallel. Your application must include
         * the necessary logic to manage the threads. With languages that don't support
         * threading, you must update or delete the specified items one at a time. In both
         * situations, <i>BatchWriteItem</i> provides an alternative where the API performs
         * the specified put and delete operations in parallel, giving you the power of the
         * thread pool approach without having to introduce complexity into your
         * application.</p> <p>Parallel processing reduces latency, but each specified put
         * and delete request consumes the same number of write capacity units whether it
         * is processed in parallel or not. Delete operations on nonexistent items consume
         * one write capacity unit.</p> <p>If one or more of the following is true,
         * DynamoDB rejects the entire batch write operation:</p> <ul> <li> <p>One or more
         * tables specified in the <i>BatchWriteItem</i> request does not exist.</p> </li>
         * <li> <p>Primary key attributes specified on an item in the request do not match
         * those in the corresponding table's primary key schema.</p> </li> <li> <p>You try
         * to perform multiple operations on the same item in the same
         * <i>BatchWriteItem</i> request. For example, you cannot put and delete the same
         * item in the same <i>BatchWriteItem</i> request. </p> </li> <li> <p>There are
         * more than 25 requests in the batch.</p> </li> <li> <p>Any individual item in a
         * batch exceeds 400 KB.</p> </li> <li> <p>The total request size exceeds 16
         * MB.</p> </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchWriteItemAsync(const Model::BatchWriteItemRequest& request, const BatchWriteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <i>CreateTable</i> operation adds a new table to your account. In an AWS
         * account, table names must be unique within each region. That is, you can have
         * two tables with same name if you create the tables in different regions.</p> <p>
         * <i>CreateTable</i> is an asynchronous operation. Upon receiving a
         * <i>CreateTable</i> request, DynamoDB immediately returns a response with a
         * <i>TableStatus</i> of <code>CREATING</code>. After the table is created,
         * DynamoDB sets the <i>TableStatus</i> to <code>ACTIVE</code>. You can perform
         * read and write operations only on an <code>ACTIVE</code> table. </p> <p>You can
         * optionally define secondary indexes on the new table, as part of the
         * <i>CreateTable</i> operation. If you want to create multiple tables with
         * secondary indexes on them, you must create the tables sequentially. Only one
         * table with secondary indexes can be in the <code>CREATING</code> state at any
         * given time.</p> <p>You can use the <i>DescribeTable</i> API to check the table
         * status.</p>
         */
        virtual Model::CreateTableOutcome CreateTable(const Model::CreateTableRequest& request) const;

        /**
         * <p>The <i>CreateTable</i> operation adds a new table to your account. In an AWS
         * account, table names must be unique within each region. That is, you can have
         * two tables with same name if you create the tables in different regions.</p> <p>
         * <i>CreateTable</i> is an asynchronous operation. Upon receiving a
         * <i>CreateTable</i> request, DynamoDB immediately returns a response with a
         * <i>TableStatus</i> of <code>CREATING</code>. After the table is created,
         * DynamoDB sets the <i>TableStatus</i> to <code>ACTIVE</code>. You can perform
         * read and write operations only on an <code>ACTIVE</code> table. </p> <p>You can
         * optionally define secondary indexes on the new table, as part of the
         * <i>CreateTable</i> operation. If you want to create multiple tables with
         * secondary indexes on them, you must create the tables sequentially. Only one
         * table with secondary indexes can be in the <code>CREATING</code> state at any
         * given time.</p> <p>You can use the <i>DescribeTable</i> API to check the table
         * status.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTableOutcomeCallable CreateTableCallable(const Model::CreateTableRequest& request) const;

        /**
         * <p>The <i>CreateTable</i> operation adds a new table to your account. In an AWS
         * account, table names must be unique within each region. That is, you can have
         * two tables with same name if you create the tables in different regions.</p> <p>
         * <i>CreateTable</i> is an asynchronous operation. Upon receiving a
         * <i>CreateTable</i> request, DynamoDB immediately returns a response with a
         * <i>TableStatus</i> of <code>CREATING</code>. After the table is created,
         * DynamoDB sets the <i>TableStatus</i> to <code>ACTIVE</code>. You can perform
         * read and write operations only on an <code>ACTIVE</code> table. </p> <p>You can
         * optionally define secondary indexes on the new table, as part of the
         * <i>CreateTable</i> operation. If you want to create multiple tables with
         * secondary indexes on them, you must create the tables sequentially. Only one
         * table with secondary indexes can be in the <code>CREATING</code> state at any
         * given time.</p> <p>You can use the <i>DescribeTable</i> API to check the table
         * status.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTableAsync(const Model::CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a single item in a table by primary key. You can perform a
         * conditional delete operation that deletes the item if it exists, or if it has an
         * expected attribute value.</p> <p>In addition to deleting an item, you can also
         * return the item's attribute values in the same operation, using the
         * <i>ReturnValues</i> parameter.</p> <p>Unless you specify conditions, the
         * <i>DeleteItem</i> is an idempotent operation; running it multiple times on the
         * same item or attribute does <i>not</i> result in an error response.</p>
         * <p>Conditional deletes are useful for deleting items only if specific conditions
         * are met. If those conditions are met, DynamoDB performs the delete. Otherwise,
         * the item is not deleted.</p>
         */
        virtual Model::DeleteItemOutcome DeleteItem(const Model::DeleteItemRequest& request) const;

        /**
         * <p>Deletes a single item in a table by primary key. You can perform a
         * conditional delete operation that deletes the item if it exists, or if it has an
         * expected attribute value.</p> <p>In addition to deleting an item, you can also
         * return the item's attribute values in the same operation, using the
         * <i>ReturnValues</i> parameter.</p> <p>Unless you specify conditions, the
         * <i>DeleteItem</i> is an idempotent operation; running it multiple times on the
         * same item or attribute does <i>not</i> result in an error response.</p>
         * <p>Conditional deletes are useful for deleting items only if specific conditions
         * are met. If those conditions are met, DynamoDB performs the delete. Otherwise,
         * the item is not deleted.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteItemOutcomeCallable DeleteItemCallable(const Model::DeleteItemRequest& request) const;

        /**
         * <p>Deletes a single item in a table by primary key. You can perform a
         * conditional delete operation that deletes the item if it exists, or if it has an
         * expected attribute value.</p> <p>In addition to deleting an item, you can also
         * return the item's attribute values in the same operation, using the
         * <i>ReturnValues</i> parameter.</p> <p>Unless you specify conditions, the
         * <i>DeleteItem</i> is an idempotent operation; running it multiple times on the
         * same item or attribute does <i>not</i> result in an error response.</p>
         * <p>Conditional deletes are useful for deleting items only if specific conditions
         * are met. If those conditions are met, DynamoDB performs the delete. Otherwise,
         * the item is not deleted.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteItemAsync(const Model::DeleteItemRequest& request, const DeleteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <i>DeleteTable</i> operation deletes a table and all of its items. After
         * a <i>DeleteTable</i> request, the specified table is in the
         * <code>DELETING</code> state until DynamoDB completes the deletion. If the table
         * is in the <code>ACTIVE</code> state, you can delete it. If a table is in
         * <code>CREATING</code> or <code>UPDATING</code> states, then DynamoDB returns a
         * <i>ResourceInUseException</i>. If the specified table does not exist, DynamoDB
         * returns a <i>ResourceNotFoundException</i>. If table is already in the
         * <code>DELETING</code> state, no error is returned. </p> <note> <p>DynamoDB might
         * continue to accept data read and write operations, such as <i>GetItem</i> and
         * <i>PutItem</i>, on a table in the <code>DELETING</code> state until the table
         * deletion is complete.</p> </note> <p>When you delete a table, any indexes on
         * that table are also deleted.</p> <p>If you have DynamoDB Streams enabled on the
         * table, then the corresponding stream on that table goes into the
         * <code>DISABLED</code> state, and the stream is automatically deleted after 24
         * hours.</p> <p>Use the <i>DescribeTable</i> API to check the status of the table.
         * </p>
         */
        virtual Model::DeleteTableOutcome DeleteTable(const Model::DeleteTableRequest& request) const;

        /**
         * <p>The <i>DeleteTable</i> operation deletes a table and all of its items. After
         * a <i>DeleteTable</i> request, the specified table is in the
         * <code>DELETING</code> state until DynamoDB completes the deletion. If the table
         * is in the <code>ACTIVE</code> state, you can delete it. If a table is in
         * <code>CREATING</code> or <code>UPDATING</code> states, then DynamoDB returns a
         * <i>ResourceInUseException</i>. If the specified table does not exist, DynamoDB
         * returns a <i>ResourceNotFoundException</i>. If table is already in the
         * <code>DELETING</code> state, no error is returned. </p> <note> <p>DynamoDB might
         * continue to accept data read and write operations, such as <i>GetItem</i> and
         * <i>PutItem</i>, on a table in the <code>DELETING</code> state until the table
         * deletion is complete.</p> </note> <p>When you delete a table, any indexes on
         * that table are also deleted.</p> <p>If you have DynamoDB Streams enabled on the
         * table, then the corresponding stream on that table goes into the
         * <code>DISABLED</code> state, and the stream is automatically deleted after 24
         * hours.</p> <p>Use the <i>DescribeTable</i> API to check the status of the table.
         * </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTableOutcomeCallable DeleteTableCallable(const Model::DeleteTableRequest& request) const;

        /**
         * <p>The <i>DeleteTable</i> operation deletes a table and all of its items. After
         * a <i>DeleteTable</i> request, the specified table is in the
         * <code>DELETING</code> state until DynamoDB completes the deletion. If the table
         * is in the <code>ACTIVE</code> state, you can delete it. If a table is in
         * <code>CREATING</code> or <code>UPDATING</code> states, then DynamoDB returns a
         * <i>ResourceInUseException</i>. If the specified table does not exist, DynamoDB
         * returns a <i>ResourceNotFoundException</i>. If table is already in the
         * <code>DELETING</code> state, no error is returned. </p> <note> <p>DynamoDB might
         * continue to accept data read and write operations, such as <i>GetItem</i> and
         * <i>PutItem</i>, on a table in the <code>DELETING</code> state until the table
         * deletion is complete.</p> </note> <p>When you delete a table, any indexes on
         * that table are also deleted.</p> <p>If you have DynamoDB Streams enabled on the
         * table, then the corresponding stream on that table goes into the
         * <code>DISABLED</code> state, and the stream is automatically deleted after 24
         * hours.</p> <p>Use the <i>DescribeTable</i> API to check the status of the table.
         * </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTableAsync(const Model::DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current provisioned-capacity limits for your AWS account in a
         * region, both for the region as a whole and for any one DynamoDB table that you
         * create there.</p> <p>When you establish an AWS account, the account has initial
         * limits on the maximum read capacity units and write capacity units that you can
         * provision across all of your DynamoDB tables in a given region. Also, there are
         * per-table limits that apply when you create a table there. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
         * page in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Although you can
         * increase these limits by filing a case at <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support Center</a>,
         * obtaining the increase is not instantaneous. The <i>DescribeLimits</i> API lets
         * you write code to compare the capacity you are currently using to those limits
         * imposed by your account so that you have enough time to apply for an increase
         * before you hit a limit.</p> <p>For example, you could use one of the AWS SDKs to
         * do the following:</p> <ol> <li><p>Call <i>DescribeLimits</i> for a particular
         * region to obtain your current account limits on provisioned capacity there.</p>
         * </li> <li><p>Create a variable to hold the aggregate read capacity units
         * provisioned for all your tables in that region, and one to hold the aggregate
         * write capacity units. Zero them both.</p> </li> <li><p>Call <i>ListTables</i> to
         * obtain a list of all your DynamoDB tables.</p> </li> <li> <p>For each table name
         * listed by <i>ListTables</i>, do the following:</p> <ul> <li><p>Call
         * <i>DescribeTable</i> with the table name.</p> </li> <li><p>Use the data returned
         * by <i>DescribeTable</i> to add the read capacity units and write capacity units
         * provisioned for the table itself to your variables.</p> </li> <li><p>If the
         * table has one or more global secondary indexes (GSIs), loop over these GSIs and
         * add their provisioned capacity values to your variables as well.</p> </li> </ul>
         * </li> <li><p>Report the account limits for that region returned by
         * <i>DescribeLimits</i>, along with the total current provisioned capacity levels
         * you have calculated.</p> </li> </ol> <p>This will let you see whether you are
         * getting close to your account-level limits.</p> <p>The per-table limits apply
         * only when you are creating a new table. They restrict the sum of the provisioned
         * capacity of the new table itself and all its global secondary indexes.</p>
         * <p>For existing tables and their GSIs, DynamoDB will not let you increase
         * provisioned capacity extremely rapidly, but the only upper limit that applies is
         * that the aggregate provisioned capacity over all your tables and GSIs cannot
         * exceed either of the per-account limits.</p> <note> <p> <i>DescribeLimits</i>
         * should only be called periodically. You can expect throttling errors if you call
         * it more than once in a minute.</p> </note> <p>The <i>DescribeLimits</i> Request
         * element has no content.</p>
         */
        virtual Model::DescribeLimitsOutcome DescribeLimits(const Model::DescribeLimitsRequest& request) const;

        /**
         * <p>Returns the current provisioned-capacity limits for your AWS account in a
         * region, both for the region as a whole and for any one DynamoDB table that you
         * create there.</p> <p>When you establish an AWS account, the account has initial
         * limits on the maximum read capacity units and write capacity units that you can
         * provision across all of your DynamoDB tables in a given region. Also, there are
         * per-table limits that apply when you create a table there. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
         * page in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Although you can
         * increase these limits by filing a case at <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support Center</a>,
         * obtaining the increase is not instantaneous. The <i>DescribeLimits</i> API lets
         * you write code to compare the capacity you are currently using to those limits
         * imposed by your account so that you have enough time to apply for an increase
         * before you hit a limit.</p> <p>For example, you could use one of the AWS SDKs to
         * do the following:</p> <ol> <li><p>Call <i>DescribeLimits</i> for a particular
         * region to obtain your current account limits on provisioned capacity there.</p>
         * </li> <li><p>Create a variable to hold the aggregate read capacity units
         * provisioned for all your tables in that region, and one to hold the aggregate
         * write capacity units. Zero them both.</p> </li> <li><p>Call <i>ListTables</i> to
         * obtain a list of all your DynamoDB tables.</p> </li> <li> <p>For each table name
         * listed by <i>ListTables</i>, do the following:</p> <ul> <li><p>Call
         * <i>DescribeTable</i> with the table name.</p> </li> <li><p>Use the data returned
         * by <i>DescribeTable</i> to add the read capacity units and write capacity units
         * provisioned for the table itself to your variables.</p> </li> <li><p>If the
         * table has one or more global secondary indexes (GSIs), loop over these GSIs and
         * add their provisioned capacity values to your variables as well.</p> </li> </ul>
         * </li> <li><p>Report the account limits for that region returned by
         * <i>DescribeLimits</i>, along with the total current provisioned capacity levels
         * you have calculated.</p> </li> </ol> <p>This will let you see whether you are
         * getting close to your account-level limits.</p> <p>The per-table limits apply
         * only when you are creating a new table. They restrict the sum of the provisioned
         * capacity of the new table itself and all its global secondary indexes.</p>
         * <p>For existing tables and their GSIs, DynamoDB will not let you increase
         * provisioned capacity extremely rapidly, but the only upper limit that applies is
         * that the aggregate provisioned capacity over all your tables and GSIs cannot
         * exceed either of the per-account limits.</p> <note> <p> <i>DescribeLimits</i>
         * should only be called periodically. You can expect throttling errors if you call
         * it more than once in a minute.</p> </note> <p>The <i>DescribeLimits</i> Request
         * element has no content.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLimitsOutcomeCallable DescribeLimitsCallable(const Model::DescribeLimitsRequest& request) const;

        /**
         * <p>Returns the current provisioned-capacity limits for your AWS account in a
         * region, both for the region as a whole and for any one DynamoDB table that you
         * create there.</p> <p>When you establish an AWS account, the account has initial
         * limits on the maximum read capacity units and write capacity units that you can
         * provision across all of your DynamoDB tables in a given region. Also, there are
         * per-table limits that apply when you create a table there. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
         * page in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Although you can
         * increase these limits by filing a case at <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support Center</a>,
         * obtaining the increase is not instantaneous. The <i>DescribeLimits</i> API lets
         * you write code to compare the capacity you are currently using to those limits
         * imposed by your account so that you have enough time to apply for an increase
         * before you hit a limit.</p> <p>For example, you could use one of the AWS SDKs to
         * do the following:</p> <ol> <li><p>Call <i>DescribeLimits</i> for a particular
         * region to obtain your current account limits on provisioned capacity there.</p>
         * </li> <li><p>Create a variable to hold the aggregate read capacity units
         * provisioned for all your tables in that region, and one to hold the aggregate
         * write capacity units. Zero them both.</p> </li> <li><p>Call <i>ListTables</i> to
         * obtain a list of all your DynamoDB tables.</p> </li> <li> <p>For each table name
         * listed by <i>ListTables</i>, do the following:</p> <ul> <li><p>Call
         * <i>DescribeTable</i> with the table name.</p> </li> <li><p>Use the data returned
         * by <i>DescribeTable</i> to add the read capacity units and write capacity units
         * provisioned for the table itself to your variables.</p> </li> <li><p>If the
         * table has one or more global secondary indexes (GSIs), loop over these GSIs and
         * add their provisioned capacity values to your variables as well.</p> </li> </ul>
         * </li> <li><p>Report the account limits for that region returned by
         * <i>DescribeLimits</i>, along with the total current provisioned capacity levels
         * you have calculated.</p> </li> </ol> <p>This will let you see whether you are
         * getting close to your account-level limits.</p> <p>The per-table limits apply
         * only when you are creating a new table. They restrict the sum of the provisioned
         * capacity of the new table itself and all its global secondary indexes.</p>
         * <p>For existing tables and their GSIs, DynamoDB will not let you increase
         * provisioned capacity extremely rapidly, but the only upper limit that applies is
         * that the aggregate provisioned capacity over all your tables and GSIs cannot
         * exceed either of the per-account limits.</p> <note> <p> <i>DescribeLimits</i>
         * should only be called periodically. You can expect throttling errors if you call
         * it more than once in a minute.</p> </note> <p>The <i>DescribeLimits</i> Request
         * element has no content.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLimitsAsync(const Model::DescribeLimitsRequest& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the table, including the current status of the
         * table, when it was created, the primary key schema, and any indexes on the
         * table.</p> <note> <p>If you issue a <i>DescribeTable</i> request immediately
         * after a <i>CreateTable</i> request, DynamoDB might return a
         * <i>ResourceNotFoundException</i>. This is because <i>DescribeTable</i> uses an
         * eventually consistent query, and the metadata for your table might not be
         * available at that moment. Wait for a few seconds, and then try the
         * <i>DescribeTable</i> request again.</p> </note>
         */
        virtual Model::DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest& request) const;

        /**
         * <p>Returns information about the table, including the current status of the
         * table, when it was created, the primary key schema, and any indexes on the
         * table.</p> <note> <p>If you issue a <i>DescribeTable</i> request immediately
         * after a <i>CreateTable</i> request, DynamoDB might return a
         * <i>ResourceNotFoundException</i>. This is because <i>DescribeTable</i> uses an
         * eventually consistent query, and the metadata for your table might not be
         * available at that moment. Wait for a few seconds, and then try the
         * <i>DescribeTable</i> request again.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTableOutcomeCallable DescribeTableCallable(const Model::DescribeTableRequest& request) const;

        /**
         * <p>Returns information about the table, including the current status of the
         * table, when it was created, the primary key schema, and any indexes on the
         * table.</p> <note> <p>If you issue a <i>DescribeTable</i> request immediately
         * after a <i>CreateTable</i> request, DynamoDB might return a
         * <i>ResourceNotFoundException</i>. This is because <i>DescribeTable</i> uses an
         * eventually consistent query, and the metadata for your table might not be
         * available at that moment. Wait for a few seconds, and then try the
         * <i>DescribeTable</i> request again.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTableAsync(const Model::DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <i>GetItem</i> operation returns a set of attributes for the item with
         * the given primary key. If there is no matching item, <i>GetItem</i> does not
         * return any data.</p> <p> <i>GetItem</i> provides an eventually consistent read
         * by default. If your application requires a strongly consistent read, set
         * <i>ConsistentRead</i> to <code>true</code>. Although a strongly consistent read
         * might take more time than an eventually consistent read, it always returns the
         * last updated value.</p>
         */
        virtual Model::GetItemOutcome GetItem(const Model::GetItemRequest& request) const;

        /**
         * <p>The <i>GetItem</i> operation returns a set of attributes for the item with
         * the given primary key. If there is no matching item, <i>GetItem</i> does not
         * return any data.</p> <p> <i>GetItem</i> provides an eventually consistent read
         * by default. If your application requires a strongly consistent read, set
         * <i>ConsistentRead</i> to <code>true</code>. Although a strongly consistent read
         * might take more time than an eventually consistent read, it always returns the
         * last updated value.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetItemOutcomeCallable GetItemCallable(const Model::GetItemRequest& request) const;

        /**
         * <p>The <i>GetItem</i> operation returns a set of attributes for the item with
         * the given primary key. If there is no matching item, <i>GetItem</i> does not
         * return any data.</p> <p> <i>GetItem</i> provides an eventually consistent read
         * by default. If your application requires a strongly consistent read, set
         * <i>ConsistentRead</i> to <code>true</code>. Although a strongly consistent read
         * might take more time than an eventually consistent read, it always returns the
         * last updated value.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetItemAsync(const Model::GetItemRequest& request, const GetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of table names associated with the current account and
         * endpoint. The output from <i>ListTables</i> is paginated, with each page
         * returning a maximum of 100 table names.</p>
         */
        virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request) const;

        /**
         * <p>Returns an array of table names associated with the current account and
         * endpoint. The output from <i>ListTables</i> is paginated, with each page
         * returning a maximum of 100 table names.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTablesOutcomeCallable ListTablesCallable(const Model::ListTablesRequest& request) const;

        /**
         * <p>Returns an array of table names associated with the current account and
         * endpoint. The output from <i>ListTables</i> is paginated, with each page
         * returning a maximum of 100 table names.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTablesAsync(const Model::ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new item, or replaces an old item with a new item. If an item that
         * has the same primary key as the new item already exists in the specified table,
         * the new item completely replaces the existing item. You can perform a
         * conditional put operation (add a new item if one with the specified primary key
         * doesn't exist), or replace an existing item if it has certain attribute
         * values.</p> <p>In addition to putting an item, you can also return the item's
         * attribute values in the same operation, using the <i>ReturnValues</i>
         * parameter.</p> <p>When you add an item, the primary key attribute(s) are the
         * only required attributes. Attribute values cannot be null. String and Binary
         * type attributes must have lengths greater than zero. Set type attributes cannot
         * be empty. Requests with empty values will be rejected with a
         * <i>ValidationException</i> exception.</p> <p>You can request that <i>PutItem</i>
         * return either a copy of the original item (before the update) or a copy of the
         * updated item (after the update). For more information, see the
         * <i>ReturnValues</i> description below.</p> <note> <p>To prevent a new item from
         * replacing an existing item, use a conditional expression that contains the
         * <code>attribute_not_exists</code> function with the name of the attribute being
         * used as the partition key for the table. Since every record must contain that
         * attribute, the <code>attribute_not_exists</code> function will only succeed if
         * no matching item exists.</p> </note> <p>For more information about using this
         * API, see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithItems.html">Working
         * with Items</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
         */
        virtual Model::PutItemOutcome PutItem(const Model::PutItemRequest& request) const;

        /**
         * <p>Creates a new item, or replaces an old item with a new item. If an item that
         * has the same primary key as the new item already exists in the specified table,
         * the new item completely replaces the existing item. You can perform a
         * conditional put operation (add a new item if one with the specified primary key
         * doesn't exist), or replace an existing item if it has certain attribute
         * values.</p> <p>In addition to putting an item, you can also return the item's
         * attribute values in the same operation, using the <i>ReturnValues</i>
         * parameter.</p> <p>When you add an item, the primary key attribute(s) are the
         * only required attributes. Attribute values cannot be null. String and Binary
         * type attributes must have lengths greater than zero. Set type attributes cannot
         * be empty. Requests with empty values will be rejected with a
         * <i>ValidationException</i> exception.</p> <p>You can request that <i>PutItem</i>
         * return either a copy of the original item (before the update) or a copy of the
         * updated item (after the update). For more information, see the
         * <i>ReturnValues</i> description below.</p> <note> <p>To prevent a new item from
         * replacing an existing item, use a conditional expression that contains the
         * <code>attribute_not_exists</code> function with the name of the attribute being
         * used as the partition key for the table. Since every record must contain that
         * attribute, the <code>attribute_not_exists</code> function will only succeed if
         * no matching item exists.</p> </note> <p>For more information about using this
         * API, see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithItems.html">Working
         * with Items</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutItemOutcomeCallable PutItemCallable(const Model::PutItemRequest& request) const;

        /**
         * <p>Creates a new item, or replaces an old item with a new item. If an item that
         * has the same primary key as the new item already exists in the specified table,
         * the new item completely replaces the existing item. You can perform a
         * conditional put operation (add a new item if one with the specified primary key
         * doesn't exist), or replace an existing item if it has certain attribute
         * values.</p> <p>In addition to putting an item, you can also return the item's
         * attribute values in the same operation, using the <i>ReturnValues</i>
         * parameter.</p> <p>When you add an item, the primary key attribute(s) are the
         * only required attributes. Attribute values cannot be null. String and Binary
         * type attributes must have lengths greater than zero. Set type attributes cannot
         * be empty. Requests with empty values will be rejected with a
         * <i>ValidationException</i> exception.</p> <p>You can request that <i>PutItem</i>
         * return either a copy of the original item (before the update) or a copy of the
         * updated item (after the update). For more information, see the
         * <i>ReturnValues</i> description below.</p> <note> <p>To prevent a new item from
         * replacing an existing item, use a conditional expression that contains the
         * <code>attribute_not_exists</code> function with the name of the attribute being
         * used as the partition key for the table. Since every record must contain that
         * attribute, the <code>attribute_not_exists</code> function will only succeed if
         * no matching item exists.</p> </note> <p>For more information about using this
         * API, see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithItems.html">Working
         * with Items</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutItemAsync(const Model::PutItemRequest& request, const PutItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A <i>Query</i> operation uses the primary key of a table or a secondary index
         * to directly access items from that table or index.</p> <p>Use the
         * <i>KeyConditionExpression</i> parameter to provide a specific value for the
         * partition key. The <i>Query</i> operation will return all of the items from the
         * table or index with that partition key value. You can optionally narrow the
         * scope of the <i>Query</i> operation by specifying a sort key value and a
         * comparison operator in <i>KeyConditionExpression</i>. You can use the
         * <i>ScanIndexForward</i> parameter to get results in forward or reverse order, by
         * sort key.</p> <p>Queries that do not return results consume the minimum number
         * of read capacity units for that type of read operation.</p> <p>If the total
         * number of items meeting the query criteria exceeds the result set size limit of
         * 1 MB, the query stops and results are returned to the user with the
         * <i>LastEvaluatedKey</i> element to continue the query in a subsequent operation.
         * Unlike a <i>Scan</i> operation, a <i>Query</i> operation never returns both an
         * empty result set and a <i>LastEvaluatedKey</i> value. <i>LastEvaluatedKey</i> is
         * only provided if you have used the <i>Limit</i> parameter, or if the result set
         * exceeds 1 MB (prior to applying a filter). </p> <p>You can query a table, a
         * local secondary index, or a global secondary index. For a query on a table or on
         * a local secondary index, you can set the <i>ConsistentRead</i> parameter to
         * <code>true</code> and obtain a strongly consistent result. Global secondary
         * indexes support eventually consistent reads only, so do not specify
         * <i>ConsistentRead</i> when querying a global secondary index.</p>
         */
        virtual Model::QueryOutcome Query(const Model::QueryRequest& request) const;

        /**
         * <p>A <i>Query</i> operation uses the primary key of a table or a secondary index
         * to directly access items from that table or index.</p> <p>Use the
         * <i>KeyConditionExpression</i> parameter to provide a specific value for the
         * partition key. The <i>Query</i> operation will return all of the items from the
         * table or index with that partition key value. You can optionally narrow the
         * scope of the <i>Query</i> operation by specifying a sort key value and a
         * comparison operator in <i>KeyConditionExpression</i>. You can use the
         * <i>ScanIndexForward</i> parameter to get results in forward or reverse order, by
         * sort key.</p> <p>Queries that do not return results consume the minimum number
         * of read capacity units for that type of read operation.</p> <p>If the total
         * number of items meeting the query criteria exceeds the result set size limit of
         * 1 MB, the query stops and results are returned to the user with the
         * <i>LastEvaluatedKey</i> element to continue the query in a subsequent operation.
         * Unlike a <i>Scan</i> operation, a <i>Query</i> operation never returns both an
         * empty result set and a <i>LastEvaluatedKey</i> value. <i>LastEvaluatedKey</i> is
         * only provided if you have used the <i>Limit</i> parameter, or if the result set
         * exceeds 1 MB (prior to applying a filter). </p> <p>You can query a table, a
         * local secondary index, or a global secondary index. For a query on a table or on
         * a local secondary index, you can set the <i>ConsistentRead</i> parameter to
         * <code>true</code> and obtain a strongly consistent result. Global secondary
         * indexes support eventually consistent reads only, so do not specify
         * <i>ConsistentRead</i> when querying a global secondary index.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::QueryOutcomeCallable QueryCallable(const Model::QueryRequest& request) const;

        /**
         * <p>A <i>Query</i> operation uses the primary key of a table or a secondary index
         * to directly access items from that table or index.</p> <p>Use the
         * <i>KeyConditionExpression</i> parameter to provide a specific value for the
         * partition key. The <i>Query</i> operation will return all of the items from the
         * table or index with that partition key value. You can optionally narrow the
         * scope of the <i>Query</i> operation by specifying a sort key value and a
         * comparison operator in <i>KeyConditionExpression</i>. You can use the
         * <i>ScanIndexForward</i> parameter to get results in forward or reverse order, by
         * sort key.</p> <p>Queries that do not return results consume the minimum number
         * of read capacity units for that type of read operation.</p> <p>If the total
         * number of items meeting the query criteria exceeds the result set size limit of
         * 1 MB, the query stops and results are returned to the user with the
         * <i>LastEvaluatedKey</i> element to continue the query in a subsequent operation.
         * Unlike a <i>Scan</i> operation, a <i>Query</i> operation never returns both an
         * empty result set and a <i>LastEvaluatedKey</i> value. <i>LastEvaluatedKey</i> is
         * only provided if you have used the <i>Limit</i> parameter, or if the result set
         * exceeds 1 MB (prior to applying a filter). </p> <p>You can query a table, a
         * local secondary index, or a global secondary index. For a query on a table or on
         * a local secondary index, you can set the <i>ConsistentRead</i> parameter to
         * <code>true</code> and obtain a strongly consistent result. Global secondary
         * indexes support eventually consistent reads only, so do not specify
         * <i>ConsistentRead</i> when querying a global secondary index.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QueryAsync(const Model::QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <i>Scan</i> operation returns one or more items and item attributes by
         * accessing every item in a table or a secondary index. To have DynamoDB return
         * fewer items, you can provide a <i>ScanFilter</i> operation.</p> <p>If the total
         * number of scanned items exceeds the maximum data set size limit of 1 MB, the
         * scan stops and results are returned to the user as a <i>LastEvaluatedKey</i>
         * value to continue the scan in a subsequent operation. The results also include
         * the number of items exceeding the limit. A scan can result in no table data
         * meeting the filter criteria. </p> <p>By default, <i>Scan</i> operations proceed
         * sequentially; however, for faster performance on a large table or secondary
         * index, applications can request a parallel <i>Scan</i> operation by providing
         * the <i>Segment</i> and <i>TotalSegments</i> parameters. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#QueryAndScanParallelScan">Parallel
         * Scan</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>By default,
         * <i>Scan</i> uses eventually consistent reads when accessing the data in a table;
         * therefore, the result set might not include the changes to data in the table
         * immediately before the operation began. If you need a consistent copy of the
         * data, as of the time that the Scan begins, you can set the <i>ConsistentRead</i>
         * parameter to <i>true</i>.</p>
         */
        virtual Model::ScanOutcome Scan(const Model::ScanRequest& request) const;

        /**
         * <p>The <i>Scan</i> operation returns one or more items and item attributes by
         * accessing every item in a table or a secondary index. To have DynamoDB return
         * fewer items, you can provide a <i>ScanFilter</i> operation.</p> <p>If the total
         * number of scanned items exceeds the maximum data set size limit of 1 MB, the
         * scan stops and results are returned to the user as a <i>LastEvaluatedKey</i>
         * value to continue the scan in a subsequent operation. The results also include
         * the number of items exceeding the limit. A scan can result in no table data
         * meeting the filter criteria. </p> <p>By default, <i>Scan</i> operations proceed
         * sequentially; however, for faster performance on a large table or secondary
         * index, applications can request a parallel <i>Scan</i> operation by providing
         * the <i>Segment</i> and <i>TotalSegments</i> parameters. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#QueryAndScanParallelScan">Parallel
         * Scan</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>By default,
         * <i>Scan</i> uses eventually consistent reads when accessing the data in a table;
         * therefore, the result set might not include the changes to data in the table
         * immediately before the operation began. If you need a consistent copy of the
         * data, as of the time that the Scan begins, you can set the <i>ConsistentRead</i>
         * parameter to <i>true</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ScanOutcomeCallable ScanCallable(const Model::ScanRequest& request) const;

        /**
         * <p>The <i>Scan</i> operation returns one or more items and item attributes by
         * accessing every item in a table or a secondary index. To have DynamoDB return
         * fewer items, you can provide a <i>ScanFilter</i> operation.</p> <p>If the total
         * number of scanned items exceeds the maximum data set size limit of 1 MB, the
         * scan stops and results are returned to the user as a <i>LastEvaluatedKey</i>
         * value to continue the scan in a subsequent operation. The results also include
         * the number of items exceeding the limit. A scan can result in no table data
         * meeting the filter criteria. </p> <p>By default, <i>Scan</i> operations proceed
         * sequentially; however, for faster performance on a large table or secondary
         * index, applications can request a parallel <i>Scan</i> operation by providing
         * the <i>Segment</i> and <i>TotalSegments</i> parameters. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#QueryAndScanParallelScan">Parallel
         * Scan</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>By default,
         * <i>Scan</i> uses eventually consistent reads when accessing the data in a table;
         * therefore, the result set might not include the changes to data in the table
         * immediately before the operation began. If you need a consistent copy of the
         * data, as of the time that the Scan begins, you can set the <i>ConsistentRead</i>
         * parameter to <i>true</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ScanAsync(const Model::ScanRequest& request, const ScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Edits an existing item's attributes, or adds a new item to the table if it
         * does not already exist. You can put, delete, or add attribute values. You can
         * also perform a conditional update on an existing item (insert a new attribute
         * name-value pair if it doesn't exist, or replace an existing name-value pair if
         * it has certain expected attribute values).</p> <p>You can also return the item's
         * attribute values in the same <i>UpdateItem</i> operation using the
         * <i>ReturnValues</i> parameter.</p>
         */
        virtual Model::UpdateItemOutcome UpdateItem(const Model::UpdateItemRequest& request) const;

        /**
         * <p>Edits an existing item's attributes, or adds a new item to the table if it
         * does not already exist. You can put, delete, or add attribute values. You can
         * also perform a conditional update on an existing item (insert a new attribute
         * name-value pair if it doesn't exist, or replace an existing name-value pair if
         * it has certain expected attribute values).</p> <p>You can also return the item's
         * attribute values in the same <i>UpdateItem</i> operation using the
         * <i>ReturnValues</i> parameter.</p>
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
         * attribute values in the same <i>UpdateItem</i> operation using the
         * <i>ReturnValues</i> parameter.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateItemAsync(const Model::UpdateItemRequest& request, const UpdateItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the provisioned throughput settings, global secondary indexes, or
         * DynamoDB Streams settings for a given table.</p> <p>You can only perform one of
         * the following operations at once:</p> <ul> <li> <p>Modify the provisioned
         * throughput settings of the table.</p> </li> <li> <p>Enable or disable Streams on
         * the table.</p> </li> <li> <p>Remove a global secondary index from the table.</p>
         * </li> <li> <p>Create a new global secondary index on the table. Once the index
         * begins backfilling, you can use <i>UpdateTable</i> to perform other
         * operations.</p> </li> </ul> <p> <i>UpdateTable</i> is an asynchronous operation;
         * while it is executing, the table status changes from <code>ACTIVE</code> to
         * <code>UPDATING</code>. While it is <code>UPDATING</code>, you cannot issue
         * another <i>UpdateTable</i> request. When the table returns to the
         * <code>ACTIVE</code> state, the <i>UpdateTable</i> operation is complete.</p>
         */
        virtual Model::UpdateTableOutcome UpdateTable(const Model::UpdateTableRequest& request) const;

        /**
         * <p>Modifies the provisioned throughput settings, global secondary indexes, or
         * DynamoDB Streams settings for a given table.</p> <p>You can only perform one of
         * the following operations at once:</p> <ul> <li> <p>Modify the provisioned
         * throughput settings of the table.</p> </li> <li> <p>Enable or disable Streams on
         * the table.</p> </li> <li> <p>Remove a global secondary index from the table.</p>
         * </li> <li> <p>Create a new global secondary index on the table. Once the index
         * begins backfilling, you can use <i>UpdateTable</i> to perform other
         * operations.</p> </li> </ul> <p> <i>UpdateTable</i> is an asynchronous operation;
         * while it is executing, the table status changes from <code>ACTIVE</code> to
         * <code>UPDATING</code>. While it is <code>UPDATING</code>, you cannot issue
         * another <i>UpdateTable</i> request. When the table returns to the
         * <code>ACTIVE</code> state, the <i>UpdateTable</i> operation is complete.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTableOutcomeCallable UpdateTableCallable(const Model::UpdateTableRequest& request) const;

        /**
         * <p>Modifies the provisioned throughput settings, global secondary indexes, or
         * DynamoDB Streams settings for a given table.</p> <p>You can only perform one of
         * the following operations at once:</p> <ul> <li> <p>Modify the provisioned
         * throughput settings of the table.</p> </li> <li> <p>Enable or disable Streams on
         * the table.</p> </li> <li> <p>Remove a global secondary index from the table.</p>
         * </li> <li> <p>Create a new global secondary index on the table. Once the index
         * begins backfilling, you can use <i>UpdateTable</i> to perform other
         * operations.</p> </li> </ul> <p> <i>UpdateTable</i> is an asynchronous operation;
         * while it is executing, the table status changes from <code>ACTIVE</code> to
         * <code>UPDATING</code>. While it is <code>UPDATING</code>, you cannot issue
         * another <i>UpdateTable</i> request. When the table returns to the
         * <code>ACTIVE</code> state, the <i>UpdateTable</i> operation is complete.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTableAsync(const Model::UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void BatchGetItemAsyncHelper(const Model::BatchGetItemRequest& request, const BatchGetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchWriteItemAsyncHelper(const Model::BatchWriteItemRequest& request, const BatchWriteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTableAsyncHelper(const Model::CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteItemAsyncHelper(const Model::DeleteItemRequest& request, const DeleteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTableAsyncHelper(const Model::DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLimitsAsyncHelper(const Model::DescribeLimitsRequest& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTableAsyncHelper(const Model::DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetItemAsyncHelper(const Model::GetItemRequest& request, const GetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTablesAsyncHelper(const Model::ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutItemAsyncHelper(const Model::PutItemRequest& request, const PutItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void QueryAsyncHelper(const Model::QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ScanAsyncHelper(const Model::ScanRequest& request, const ScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateItemAsyncHelper(const Model::UpdateItemRequest& request, const UpdateItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTableAsyncHelper(const Model::UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace DynamoDB
} // namespace Aws
