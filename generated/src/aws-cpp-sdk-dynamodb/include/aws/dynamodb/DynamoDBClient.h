/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/DynamoDBServiceClientModel.h>

namespace Aws
{
namespace DynamoDB
{
  /**
   * <fullname>Amazon DynamoDB</fullname> <p>Amazon DynamoDB is a fully managed NoSQL
   * database service that provides fast and predictable performance with seamless
   * scalability. DynamoDB lets you offload the administrative burdens of operating
   * and scaling a distributed database, so that you don't have to worry about
   * hardware provisioning, setup and configuration, replication, software patching,
   * or cluster scaling.</p> <p>With DynamoDB, you can create database tables that
   * can store and retrieve any amount of data, and serve any level of request
   * traffic. You can scale up or scale down your tables' throughput capacity without
   * downtime or performance degradation, and use the Amazon Web Services Management
   * Console to monitor resource utilization and performance metrics.</p> <p>DynamoDB
   * automatically spreads the data and traffic for your tables over a sufficient
   * number of servers to handle your throughput and storage requirements, while
   * maintaining consistent and fast performance. All of your data is stored on solid
   * state disks (SSDs) and automatically replicated across multiple Availability
   * Zones in an Amazon Web Services Region, providing built-in high availability and
   * data durability.</p>
   */
  class AWS_DYNAMODB_API DynamoDBClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DynamoDBClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef DynamoDBClientConfiguration ClientConfigurationType;
      typedef DynamoDBEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBClient(const Aws::DynamoDB::DynamoDBClientConfiguration& clientConfiguration = Aws::DynamoDB::DynamoDBClientConfiguration(),
                       std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider = Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider = Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG),
                       const Aws::DynamoDB::DynamoDBClientConfiguration& clientConfiguration = Aws::DynamoDB::DynamoDBClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DynamoDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider = Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG),
                       const Aws::DynamoDB::DynamoDBClientConfiguration& clientConfiguration = Aws::DynamoDB::DynamoDBClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DynamoDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DynamoDBClient();

        /**
         * <p>This operation allows you to perform batch reads or writes on data stored in
         * DynamoDB, using PartiQL. Each read statement in a
         * <code>BatchExecuteStatement</code> must specify an equality condition on all key
         * attributes. This enforces that each <code>SELECT</code> statement in a batch
         * returns at most a single item.</p>  <p>The entire batch must consist of
         * either read statements or write statements, you cannot mix both in one
         * batch.</p>   <p>A HTTP 200 response does not mean that all
         * statements in the BatchExecuteStatement succeeded. Error details for individual
         * statements can be found under the <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_BatchStatementResponse.html#DDB-Type-BatchStatementResponse-Error">Error</a>
         * field of the <code>BatchStatementResponse</code> for each statement.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchExecuteStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchExecuteStatementOutcome BatchExecuteStatement(const Model::BatchExecuteStatementRequest& request) const;

        /**
         * A Callable wrapper for BatchExecuteStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchExecuteStatementRequestT = Model::BatchExecuteStatementRequest>
        Model::BatchExecuteStatementOutcomeCallable BatchExecuteStatementCallable(const BatchExecuteStatementRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::BatchExecuteStatement, request);
        }

        /**
         * An Async wrapper for BatchExecuteStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchExecuteStatementRequestT = Model::BatchExecuteStatementRequest>
        void BatchExecuteStatementAsync(const BatchExecuteStatementRequestT& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::BatchExecuteStatement, request, handler, context);
        }

        /**
         * <p>The <code>BatchGetItem</code> operation returns the attributes of one or more
         * items from one or more tables. You identify requested items by primary key.</p>
         * <p>A single operation can retrieve up to 16 MB of data, which can contain as
         * many as 100 items. <code>BatchGetItem</code> returns a partial result if the
         * response size limit is exceeded, the table's provisioned throughput is exceeded,
         * more than 1MB per partition is requested, or an internal processing failure
         * occurs. If a partial result is returned, the operation returns a value for
         * <code>UnprocessedKeys</code>. You can use this value to retry the operation
         * starting with the next item to get.</p>  <p>If you request more than
         * 100 items, <code>BatchGetItem</code> returns a <code>ValidationException</code>
         * with the message "Too many items requested for the BatchGetItem call."</p>
         *  <p>For example, if you ask to retrieve 100 items, but each
         * individual item is 300 KB in size, the system returns 52 items (so as not to
         * exceed the 16 MB limit). It also returns an appropriate
         * <code>UnprocessedKeys</code> value so you can get the next page of results. If
         * desired, your application can include its own logic to assemble the pages of
         * results into one dataset.</p> <p>If <i>none</i> of the items can be processed
         * due to insufficient provisioned throughput on all of the tables in the request,
         * then <code>BatchGetItem</code> returns a
         * <code>ProvisionedThroughputExceededException</code>. If <i>at least one</i> of
         * the items is successfully processed, then <code>BatchGetItem</code> completes
         * successfully, while returning the keys of the unread items in
         * <code>UnprocessedKeys</code>.</p>  <p>If DynamoDB returns any
         * unprocessed items, you should retry the batch operation on those items. However,
         * <i>we strongly recommend that you use an exponential backoff algorithm</i>. If
         * you retry the batch operation immediately, the underlying read or write requests
         * can still fail due to throttling on the individual tables. If you delay the
         * batch operation using exponential backoff, the individual requests in the batch
         * are much more likely to succeed.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ErrorHandling.html#BatchOperations">Batch
         * Operations and Error Handling</a> in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p>  <p>By default, <code>BatchGetItem</code> performs
         * eventually consistent reads on every table in the request. If you want strongly
         * consistent reads instead, you can set <code>ConsistentRead</code> to
         * <code>true</code> for any or all tables.</p> <p>In order to minimize response
         * latency, <code>BatchGetItem</code> may retrieve items in parallel.</p> <p>When
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
         * A Callable wrapper for BatchGetItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetItemRequestT = Model::BatchGetItemRequest>
        Model::BatchGetItemOutcomeCallable BatchGetItemCallable(const BatchGetItemRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::BatchGetItem, request);
        }

        /**
         * An Async wrapper for BatchGetItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetItemRequestT = Model::BatchGetItemRequest>
        void BatchGetItemAsync(const BatchGetItemRequestT& request, const BatchGetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::BatchGetItem, request, handler, context);
        }

        /**
         * <p>The <code>BatchWriteItem</code> operation puts or deletes multiple items in
         * one or more tables. A single call to <code>BatchWriteItem</code> can transmit up
         * to 16MB of data over the network, consisting of up to 25 item put or delete
         * operations. While individual items can be up to 400 KB once stored, it's
         * important to note that an item's representation might be greater than 400KB
         * while being sent in DynamoDB's JSON format for the API call. For more details on
         * this distinction, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.NamingRulesDataTypes.html">Naming
         * Rules and Data Types</a>.</p>  <p> <code>BatchWriteItem</code> cannot
         * update items. If you perform a <code>BatchWriteItem</code> operation on an
         * existing item, that item's values will be overwritten by the operation and it
         * will appear like it was updated. To update items, we recommend you use the
         * <code>UpdateItem</code> action.</p>  <p>The individual
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
         * returns a <code>ProvisionedThroughputExceededException</code>.</p> 
         * <p>If DynamoDB returns any unprocessed items, you should retry the batch
         * operation on those items. However, <i>we strongly recommend that you use an
         * exponential backoff algorithm</i>. If you retry the batch operation immediately,
         * the underlying read or write requests can still fail due to throttling on the
         * individual tables. If you delay the batch operation using exponential backoff,
         * the individual requests in the batch are much more likely to succeed.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ErrorHandling.html#Programming.Errors.BatchOperations">Batch
         * Operations and Error Handling</a> in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p>  <p>With <code>BatchWriteItem</code>, you can
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
         * A Callable wrapper for BatchWriteItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchWriteItemRequestT = Model::BatchWriteItemRequest>
        Model::BatchWriteItemOutcomeCallable BatchWriteItemCallable(const BatchWriteItemRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::BatchWriteItem, request);
        }

        /**
         * An Async wrapper for BatchWriteItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchWriteItemRequestT = Model::BatchWriteItemRequest>
        void BatchWriteItemAsync(const BatchWriteItemRequestT& request, const BatchWriteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::BatchWriteItem, request, handler, context);
        }

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
         * A Callable wrapper for CreateBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBackupRequestT = Model::CreateBackupRequest>
        Model::CreateBackupOutcomeCallable CreateBackupCallable(const CreateBackupRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::CreateBackup, request);
        }

        /**
         * An Async wrapper for CreateBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBackupRequestT = Model::CreateBackupRequest>
        void CreateBackupAsync(const CreateBackupRequestT& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::CreateBackup, request, handler, context);
        }

        /**
         * <p>Creates a global table from an existing table. A global table creates a
         * replication relationship between two or more DynamoDB tables with the same table
         * name in the provided Regions. </p>  <p>This operation only applies to
         * <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V1.html">Version
         * 2017.11.29 (Legacy)</a> of global tables. We recommend using <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
         * 2019.11.21 (Current)</a> when creating new global tables, as it provides greater
         * flexibility, higher efficiency and consumes less write capacity than 2017.11.29
         * (Legacy). To determine which version you are using, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.DetermineVersion.html">Determining
         * the version</a>. To update existing global tables from version 2017.11.29
         * (Legacy) to version 2019.11.21 (Current), see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/V2globaltables_upgrade.html">
         * Updating global tables</a>. </p>  <p>If you want to add a new
         * replica table to a global table, each of the following conditions must be
         * true:</p> <ul> <li> <p>The table must have the same primary key as all of the
         * other replicas.</p> </li> <li> <p>The table must have the same name as all of
         * the other replicas.</p> </li> <li> <p>The table must have DynamoDB Streams
         * enabled, with the stream containing both the new and the old images of the
         * item.</p> </li> <li> <p>None of the replica tables in the global table can
         * contain any data.</p> </li> </ul> <p> If global secondary indexes are specified,
         * then the following conditions must also be met: </p> <ul> <li> <p> The global
         * secondary indexes must have the same name. </p> </li> <li> <p> The global
         * secondary indexes must have the same hash key and sort key (if present). </p>
         * </li> </ul> <p> If local secondary indexes are specified, then the following
         * conditions must also be met: </p> <ul> <li> <p> The local secondary indexes must
         * have the same name. </p> </li> <li> <p> The local secondary indexes must have
         * the same hash key and sort key (if present). </p> </li> </ul>  <p>
         * Write capacity settings should be set consistently across your replica tables
         * and secondary indexes. DynamoDB strongly recommends enabling auto scaling to
         * manage the write capacity settings for all of your global tables replicas and
         * indexes. </p> <p> If you prefer to manage write capacity settings manually, you
         * should provision equal replicated write capacity units to your replica tables.
         * You should also provision equal replicated write capacity units to matching
         * secondary indexes across your global table. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateGlobalTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGlobalTableOutcome CreateGlobalTable(const Model::CreateGlobalTableRequest& request) const;

        /**
         * A Callable wrapper for CreateGlobalTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGlobalTableRequestT = Model::CreateGlobalTableRequest>
        Model::CreateGlobalTableOutcomeCallable CreateGlobalTableCallable(const CreateGlobalTableRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::CreateGlobalTable, request);
        }

        /**
         * An Async wrapper for CreateGlobalTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGlobalTableRequestT = Model::CreateGlobalTableRequest>
        void CreateGlobalTableAsync(const CreateGlobalTableRequestT& request, const CreateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::CreateGlobalTable, request, handler, context);
        }

        /**
         * <p>The <code>CreateTable</code> operation adds a new table to your account. In
         * an Amazon Web Services account, table names must be unique within each Region.
         * That is, you can have two tables with same name if you create the tables in
         * different Regions.</p> <p> <code>CreateTable</code> is an asynchronous
         * operation. Upon receiving a <code>CreateTable</code> request, DynamoDB
         * immediately returns a response with a <code>TableStatus</code> of
         * <code>CREATING</code>. After the table is created, DynamoDB sets the
         * <code>TableStatus</code> to <code>ACTIVE</code>. You can perform read and write
         * operations only on an <code>ACTIVE</code> table. </p> <p>You can optionally
         * define secondary indexes on the new table, as part of the
         * <code>CreateTable</code> operation. If you want to create multiple tables with
         * secondary indexes on them, you must create the tables sequentially. Only one
         * table with secondary indexes can be in the <code>CREATING</code> state at any
         * given time.</p> <p>You can use the <code>DescribeTable</code> action to check
         * the table status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTableOutcome CreateTable(const Model::CreateTableRequest& request) const;

        /**
         * A Callable wrapper for CreateTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTableRequestT = Model::CreateTableRequest>
        Model::CreateTableOutcomeCallable CreateTableCallable(const CreateTableRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::CreateTable, request);
        }

        /**
         * An Async wrapper for CreateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTableRequestT = Model::CreateTableRequest>
        void CreateTableAsync(const CreateTableRequestT& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::CreateTable, request, handler, context);
        }

        /**
         * <p>Deletes an existing backup of a table.</p> <p>You can call
         * <code>DeleteBackup</code> at a maximum rate of 10 times per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupOutcome DeleteBackup(const Model::DeleteBackupRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBackupRequestT = Model::DeleteBackupRequest>
        Model::DeleteBackupOutcomeCallable DeleteBackupCallable(const DeleteBackupRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DeleteBackup, request);
        }

        /**
         * An Async wrapper for DeleteBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBackupRequestT = Model::DeleteBackupRequest>
        void DeleteBackupAsync(const DeleteBackupRequestT& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DeleteBackup, request, handler, context);
        }

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
         * A Callable wrapper for DeleteItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteItemRequestT = Model::DeleteItemRequest>
        Model::DeleteItemOutcomeCallable DeleteItemCallable(const DeleteItemRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DeleteItem, request);
        }

        /**
         * An Async wrapper for DeleteItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteItemRequestT = Model::DeleteItemRequest>
        void DeleteItemAsync(const DeleteItemRequestT& request, const DeleteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DeleteItem, request, handler, context);
        }

        /**
         * <p>The <code>DeleteTable</code> operation deletes a table and all of its items.
         * After a <code>DeleteTable</code> request, the specified table is in the
         * <code>DELETING</code> state until DynamoDB completes the deletion. If the table
         * is in the <code>ACTIVE</code> state, you can delete it. If a table is in
         * <code>CREATING</code> or <code>UPDATING</code> states, then DynamoDB returns a
         * <code>ResourceInUseException</code>. If the specified table does not exist,
         * DynamoDB returns a <code>ResourceNotFoundException</code>. If table is already
         * in the <code>DELETING</code> state, no error is returned. </p> 
         * <p>This operation only applies to <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
         * 2019.11.21 (Current)</a> of global tables. </p>   <p>DynamoDB
         * might continue to accept data read and write operations, such as
         * <code>GetItem</code> and <code>PutItem</code>, on a table in the
         * <code>DELETING</code> state until the table deletion is complete.</p> 
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
         * A Callable wrapper for DeleteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTableRequestT = Model::DeleteTableRequest>
        Model::DeleteTableOutcomeCallable DeleteTableCallable(const DeleteTableRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DeleteTable, request);
        }

        /**
         * An Async wrapper for DeleteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTableRequestT = Model::DeleteTableRequest>
        void DeleteTableAsync(const DeleteTableRequestT& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DeleteTable, request, handler, context);
        }

        /**
         * <p>Describes an existing backup of a table.</p> <p>You can call
         * <code>DescribeBackup</code> at a maximum rate of 10 times per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBackupOutcome DescribeBackup(const Model::DescribeBackupRequest& request) const;

        /**
         * A Callable wrapper for DescribeBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBackupRequestT = Model::DescribeBackupRequest>
        Model::DescribeBackupOutcomeCallable DescribeBackupCallable(const DescribeBackupRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DescribeBackup, request);
        }

        /**
         * An Async wrapper for DescribeBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBackupRequestT = Model::DescribeBackupRequest>
        void DescribeBackupAsync(const DescribeBackupRequestT& request, const DescribeBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DescribeBackup, request, handler, context);
        }

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
         * A Callable wrapper for DescribeContinuousBackups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeContinuousBackupsRequestT = Model::DescribeContinuousBackupsRequest>
        Model::DescribeContinuousBackupsOutcomeCallable DescribeContinuousBackupsCallable(const DescribeContinuousBackupsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DescribeContinuousBackups, request);
        }

        /**
         * An Async wrapper for DescribeContinuousBackups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeContinuousBackupsRequestT = Model::DescribeContinuousBackupsRequest>
        void DescribeContinuousBackupsAsync(const DescribeContinuousBackupsRequestT& request, const DescribeContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DescribeContinuousBackups, request, handler, context);
        }

        /**
         * <p>Returns information about contributor insights for a given table or global
         * secondary index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeContributorInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContributorInsightsOutcome DescribeContributorInsights(const Model::DescribeContributorInsightsRequest& request) const;

        /**
         * A Callable wrapper for DescribeContributorInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeContributorInsightsRequestT = Model::DescribeContributorInsightsRequest>
        Model::DescribeContributorInsightsOutcomeCallable DescribeContributorInsightsCallable(const DescribeContributorInsightsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DescribeContributorInsights, request);
        }

        /**
         * An Async wrapper for DescribeContributorInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeContributorInsightsRequestT = Model::DescribeContributorInsightsRequest>
        void DescribeContributorInsightsAsync(const DescribeContributorInsightsRequestT& request, const DescribeContributorInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DescribeContributorInsights, request, handler, context);
        }

        /**
         * <p>Returns the regional endpoint information. For more information on policy
         * permissions, please see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/inter-network-traffic-privacy.html#inter-network-traffic-DescribeEndpoints">Internetwork
         * traffic privacy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointsOutcome DescribeEndpoints(const Model::DescribeEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEndpointsRequestT = Model::DescribeEndpointsRequest>
        Model::DescribeEndpointsOutcomeCallable DescribeEndpointsCallable(const DescribeEndpointsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DescribeEndpoints, request);
        }

        /**
         * An Async wrapper for DescribeEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEndpointsRequestT = Model::DescribeEndpointsRequest>
        void DescribeEndpointsAsync(const DescribeEndpointsRequestT& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DescribeEndpoints, request, handler, context);
        }

        /**
         * <p>Describes an existing table export.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeExport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportOutcome DescribeExport(const Model::DescribeExportRequest& request) const;

        /**
         * A Callable wrapper for DescribeExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeExportRequestT = Model::DescribeExportRequest>
        Model::DescribeExportOutcomeCallable DescribeExportCallable(const DescribeExportRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DescribeExport, request);
        }

        /**
         * An Async wrapper for DescribeExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeExportRequestT = Model::DescribeExportRequest>
        void DescribeExportAsync(const DescribeExportRequestT& request, const DescribeExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DescribeExport, request, handler, context);
        }

        /**
         * <p>Returns information about the specified global table.</p>  <p>This
         * operation only applies to <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V1.html">Version
         * 2017.11.29 (Legacy)</a> of global tables. We recommend using <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
         * 2019.11.21 (Current)</a> when creating new global tables, as it provides greater
         * flexibility, higher efficiency and consumes less write capacity than 2017.11.29
         * (Legacy). To determine which version you are using, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.DetermineVersion.html">Determining
         * the version</a>. To update existing global tables from version 2017.11.29
         * (Legacy) to version 2019.11.21 (Current), see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/V2globaltables_upgrade.html">
         * Updating global tables</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeGlobalTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGlobalTableOutcome DescribeGlobalTable(const Model::DescribeGlobalTableRequest& request) const;

        /**
         * A Callable wrapper for DescribeGlobalTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGlobalTableRequestT = Model::DescribeGlobalTableRequest>
        Model::DescribeGlobalTableOutcomeCallable DescribeGlobalTableCallable(const DescribeGlobalTableRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DescribeGlobalTable, request);
        }

        /**
         * An Async wrapper for DescribeGlobalTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGlobalTableRequestT = Model::DescribeGlobalTableRequest>
        void DescribeGlobalTableAsync(const DescribeGlobalTableRequestT& request, const DescribeGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DescribeGlobalTable, request, handler, context);
        }

        /**
         * <p>Describes Region-specific settings for a global table.</p> 
         * <p>This operation only applies to <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V1.html">Version
         * 2017.11.29 (Legacy)</a> of global tables. We recommend using <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
         * 2019.11.21 (Current)</a> when creating new global tables, as it provides greater
         * flexibility, higher efficiency and consumes less write capacity than 2017.11.29
         * (Legacy). To determine which version you are using, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.DetermineVersion.html">Determining
         * the version</a>. To update existing global tables from version 2017.11.29
         * (Legacy) to version 2019.11.21 (Current), see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/V2globaltables_upgrade.html">
         * Updating global tables</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeGlobalTableSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGlobalTableSettingsOutcome DescribeGlobalTableSettings(const Model::DescribeGlobalTableSettingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeGlobalTableSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGlobalTableSettingsRequestT = Model::DescribeGlobalTableSettingsRequest>
        Model::DescribeGlobalTableSettingsOutcomeCallable DescribeGlobalTableSettingsCallable(const DescribeGlobalTableSettingsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DescribeGlobalTableSettings, request);
        }

        /**
         * An Async wrapper for DescribeGlobalTableSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGlobalTableSettingsRequestT = Model::DescribeGlobalTableSettingsRequest>
        void DescribeGlobalTableSettingsAsync(const DescribeGlobalTableSettingsRequestT& request, const DescribeGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DescribeGlobalTableSettings, request, handler, context);
        }

        /**
         * <p> Represents the properties of the import. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeImport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImportOutcome DescribeImport(const Model::DescribeImportRequest& request) const;

        /**
         * A Callable wrapper for DescribeImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeImportRequestT = Model::DescribeImportRequest>
        Model::DescribeImportOutcomeCallable DescribeImportCallable(const DescribeImportRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DescribeImport, request);
        }

        /**
         * An Async wrapper for DescribeImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeImportRequestT = Model::DescribeImportRequest>
        void DescribeImportAsync(const DescribeImportRequestT& request, const DescribeImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DescribeImport, request, handler, context);
        }

        /**
         * <p>Returns information about the status of Kinesis streaming.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeKinesisStreamingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeKinesisStreamingDestinationOutcome DescribeKinesisStreamingDestination(const Model::DescribeKinesisStreamingDestinationRequest& request) const;

        /**
         * A Callable wrapper for DescribeKinesisStreamingDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeKinesisStreamingDestinationRequestT = Model::DescribeKinesisStreamingDestinationRequest>
        Model::DescribeKinesisStreamingDestinationOutcomeCallable DescribeKinesisStreamingDestinationCallable(const DescribeKinesisStreamingDestinationRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DescribeKinesisStreamingDestination, request);
        }

        /**
         * An Async wrapper for DescribeKinesisStreamingDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeKinesisStreamingDestinationRequestT = Model::DescribeKinesisStreamingDestinationRequest>
        void DescribeKinesisStreamingDestinationAsync(const DescribeKinesisStreamingDestinationRequestT& request, const DescribeKinesisStreamingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DescribeKinesisStreamingDestination, request, handler, context);
        }

        /**
         * <p>Returns the current provisioned-capacity quotas for your Amazon Web Services
         * account in a Region, both for the Region as a whole and for any one DynamoDB
         * table that you create there.</p> <p>When you establish an Amazon Web Services
         * account, the account has initial quotas on the maximum read capacity units and
         * write capacity units that you can provision across all of your DynamoDB tables
         * in a given Region. Also, there are per-table quotas that apply when you create a
         * table there. For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Service,
         * Account, and Table Quotas</a> page in the <i>Amazon DynamoDB Developer
         * Guide</i>.</p> <p>Although you can increase these quotas by filing a case at <a
         * href="https://console.aws.amazon.com/support/home#/">Amazon Web Services Support
         * Center</a>, obtaining the increase is not instantaneous. The
         * <code>DescribeLimits</code> action lets you write code to compare the capacity
         * you are currently using to those quotas imposed by your account so that you have
         * enough time to apply for an increase before you hit a quota.</p> <p>For example,
         * you could use one of the Amazon Web Services SDKs to do the following:</p> <ol>
         * <li> <p>Call <code>DescribeLimits</code> for a particular Region to obtain your
         * current account quotas on provisioned capacity there.</p> </li> <li> <p>Create a
         * variable to hold the aggregate read capacity units provisioned for all your
         * tables in that Region, and one to hold the aggregate write capacity units. Zero
         * them both.</p> </li> <li> <p>Call <code>ListTables</code> to obtain a list of
         * all your DynamoDB tables.</p> </li> <li> <p>For each table name listed by
         * <code>ListTables</code>, do the following:</p> <ul> <li> <p>Call
         * <code>DescribeTable</code> with the table name.</p> </li> <li> <p>Use the data
         * returned by <code>DescribeTable</code> to add the read capacity units and write
         * capacity units provisioned for the table itself to your variables.</p> </li>
         * <li> <p>If the table has one or more global secondary indexes (GSIs), loop over
         * these GSIs and add their provisioned capacity values to your variables as
         * well.</p> </li> </ul> </li> <li> <p>Report the account quotas for that Region
         * returned by <code>DescribeLimits</code>, along with the total current
         * provisioned capacity levels you have calculated.</p> </li> </ol> <p>This will
         * let you see whether you are getting close to your account-level quotas.</p>
         * <p>The per-table quotas apply only when you are creating a new table. They
         * restrict the sum of the provisioned capacity of the new table itself and all its
         * global secondary indexes.</p> <p>For existing tables and their GSIs, DynamoDB
         * doesn't let you increase provisioned capacity extremely rapidly, but the only
         * quota that applies is that the aggregate provisioned capacity over all your
         * tables and GSIs cannot exceed either of the per-account quotas.</p>  <p>
         * <code>DescribeLimits</code> should only be called periodically. You can expect
         * throttling errors if you call it more than once in a minute.</p>  <p>The
         * <code>DescribeLimits</code> Request element has no content.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLimitsOutcome DescribeLimits(const Model::DescribeLimitsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLimitsRequestT = Model::DescribeLimitsRequest>
        Model::DescribeLimitsOutcomeCallable DescribeLimitsCallable(const DescribeLimitsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DescribeLimits, request);
        }

        /**
         * An Async wrapper for DescribeLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLimitsRequestT = Model::DescribeLimitsRequest>
        void DescribeLimitsAsync(const DescribeLimitsRequestT& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DescribeLimits, request, handler, context);
        }

        /**
         * <p>Returns information about the table, including the current status of the
         * table, when it was created, the primary key schema, and any indexes on the
         * table.</p>  <p>This operation only applies to <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
         * 2019.11.21 (Current)</a> of global tables. </p>   <p>If you
         * issue a <code>DescribeTable</code> request immediately after a
         * <code>CreateTable</code> request, DynamoDB might return a
         * <code>ResourceNotFoundException</code>. This is because
         * <code>DescribeTable</code> uses an eventually consistent query, and the metadata
         * for your table might not be available at that moment. Wait for a few seconds,
         * and then try the <code>DescribeTable</code> request again.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest& request) const;

        /**
         * A Callable wrapper for DescribeTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTableRequestT = Model::DescribeTableRequest>
        Model::DescribeTableOutcomeCallable DescribeTableCallable(const DescribeTableRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DescribeTable, request);
        }

        /**
         * An Async wrapper for DescribeTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTableRequestT = Model::DescribeTableRequest>
        void DescribeTableAsync(const DescribeTableRequestT& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DescribeTable, request, handler, context);
        }

        /**
         * <p>Describes auto scaling settings across replicas of the global table at
         * once.</p>  <p>This operation only applies to <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
         * 2019.11.21 (Current)</a> of global tables.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeTableReplicaAutoScaling">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTableReplicaAutoScalingOutcome DescribeTableReplicaAutoScaling(const Model::DescribeTableReplicaAutoScalingRequest& request) const;

        /**
         * A Callable wrapper for DescribeTableReplicaAutoScaling that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTableReplicaAutoScalingRequestT = Model::DescribeTableReplicaAutoScalingRequest>
        Model::DescribeTableReplicaAutoScalingOutcomeCallable DescribeTableReplicaAutoScalingCallable(const DescribeTableReplicaAutoScalingRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DescribeTableReplicaAutoScaling, request);
        }

        /**
         * An Async wrapper for DescribeTableReplicaAutoScaling that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTableReplicaAutoScalingRequestT = Model::DescribeTableReplicaAutoScalingRequest>
        void DescribeTableReplicaAutoScalingAsync(const DescribeTableReplicaAutoScalingRequestT& request, const DescribeTableReplicaAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DescribeTableReplicaAutoScaling, request, handler, context);
        }

        /**
         * <p>Gives a description of the Time to Live (TTL) status on the specified table.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeTimeToLive">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTimeToLiveOutcome DescribeTimeToLive(const Model::DescribeTimeToLiveRequest& request) const;

        /**
         * A Callable wrapper for DescribeTimeToLive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTimeToLiveRequestT = Model::DescribeTimeToLiveRequest>
        Model::DescribeTimeToLiveOutcomeCallable DescribeTimeToLiveCallable(const DescribeTimeToLiveRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DescribeTimeToLive, request);
        }

        /**
         * An Async wrapper for DescribeTimeToLive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTimeToLiveRequestT = Model::DescribeTimeToLiveRequest>
        void DescribeTimeToLiveAsync(const DescribeTimeToLiveRequestT& request, const DescribeTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DescribeTimeToLive, request, handler, context);
        }

        /**
         * <p>Stops replication from the DynamoDB table to the Kinesis data stream. This is
         * done without deleting either of the resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DisableKinesisStreamingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableKinesisStreamingDestinationOutcome DisableKinesisStreamingDestination(const Model::DisableKinesisStreamingDestinationRequest& request) const;

        /**
         * A Callable wrapper for DisableKinesisStreamingDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableKinesisStreamingDestinationRequestT = Model::DisableKinesisStreamingDestinationRequest>
        Model::DisableKinesisStreamingDestinationOutcomeCallable DisableKinesisStreamingDestinationCallable(const DisableKinesisStreamingDestinationRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DisableKinesisStreamingDestination, request);
        }

        /**
         * An Async wrapper for DisableKinesisStreamingDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableKinesisStreamingDestinationRequestT = Model::DisableKinesisStreamingDestinationRequest>
        void DisableKinesisStreamingDestinationAsync(const DisableKinesisStreamingDestinationRequestT& request, const DisableKinesisStreamingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DisableKinesisStreamingDestination, request, handler, context);
        }

        /**
         * <p>Starts table data replication to the specified Kinesis data stream at a
         * timestamp chosen during the enable workflow. If this operation doesn't return
         * results immediately, use DescribeKinesisStreamingDestination to check if
         * streaming to the Kinesis data stream is ACTIVE.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/EnableKinesisStreamingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableKinesisStreamingDestinationOutcome EnableKinesisStreamingDestination(const Model::EnableKinesisStreamingDestinationRequest& request) const;

        /**
         * A Callable wrapper for EnableKinesisStreamingDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableKinesisStreamingDestinationRequestT = Model::EnableKinesisStreamingDestinationRequest>
        Model::EnableKinesisStreamingDestinationOutcomeCallable EnableKinesisStreamingDestinationCallable(const EnableKinesisStreamingDestinationRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::EnableKinesisStreamingDestination, request);
        }

        /**
         * An Async wrapper for EnableKinesisStreamingDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableKinesisStreamingDestinationRequestT = Model::EnableKinesisStreamingDestinationRequest>
        void EnableKinesisStreamingDestinationAsync(const EnableKinesisStreamingDestinationRequestT& request, const EnableKinesisStreamingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::EnableKinesisStreamingDestination, request, handler, context);
        }

        /**
         * <p>This operation allows you to perform reads and singleton writes on data
         * stored in DynamoDB, using PartiQL.</p> <p>For PartiQL reads (<code>SELECT</code>
         * statement), if the total number of processed items exceeds the maximum dataset
         * size limit of 1 MB, the read stops and results are returned to the user as a
         * <code>LastEvaluatedKey</code> value to continue the read in a subsequent
         * operation. If the filter criteria in <code>WHERE</code> clause does not match
         * any data, the read will return an empty result set.</p> <p>A single
         * <code>SELECT</code> statement response can return up to the maximum number of
         * items (if using the Limit parameter) or a maximum of 1 MB of data (and then
         * apply any filtering to the results using <code>WHERE</code> clause). If
         * <code>LastEvaluatedKey</code> is present in the response, you need to paginate
         * the result set. If <code>NextToken</code> is present, you need to paginate the
         * result set and include <code>NextToken</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ExecuteStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteStatementOutcome ExecuteStatement(const Model::ExecuteStatementRequest& request) const;

        /**
         * A Callable wrapper for ExecuteStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteStatementRequestT = Model::ExecuteStatementRequest>
        Model::ExecuteStatementOutcomeCallable ExecuteStatementCallable(const ExecuteStatementRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::ExecuteStatement, request);
        }

        /**
         * An Async wrapper for ExecuteStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteStatementRequestT = Model::ExecuteStatementRequest>
        void ExecuteStatementAsync(const ExecuteStatementRequestT& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::ExecuteStatement, request, handler, context);
        }

        /**
         * <p>This operation allows you to perform transactional reads or writes on data
         * stored in DynamoDB, using PartiQL.</p>  <p>The entire transaction must
         * consist of either read statements or write statements, you cannot mix both in
         * one transaction. The EXISTS function is an exception and can be used to check
         * the condition of specific attributes of the item in a similar manner to
         * <code>ConditionCheck</code> in the <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/transaction-apis.html#transaction-apis-txwriteitems">TransactWriteItems</a>
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ExecuteTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteTransactionOutcome ExecuteTransaction(const Model::ExecuteTransactionRequest& request) const;

        /**
         * A Callable wrapper for ExecuteTransaction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteTransactionRequestT = Model::ExecuteTransactionRequest>
        Model::ExecuteTransactionOutcomeCallable ExecuteTransactionCallable(const ExecuteTransactionRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::ExecuteTransaction, request);
        }

        /**
         * An Async wrapper for ExecuteTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteTransactionRequestT = Model::ExecuteTransactionRequest>
        void ExecuteTransactionAsync(const ExecuteTransactionRequestT& request, const ExecuteTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::ExecuteTransaction, request, handler, context);
        }

        /**
         * <p>Exports table data to an S3 bucket. The table must have point in time
         * recovery enabled, and you can export data from any time within the point in time
         * recovery window.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ExportTableToPointInTime">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportTableToPointInTimeOutcome ExportTableToPointInTime(const Model::ExportTableToPointInTimeRequest& request) const;

        /**
         * A Callable wrapper for ExportTableToPointInTime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportTableToPointInTimeRequestT = Model::ExportTableToPointInTimeRequest>
        Model::ExportTableToPointInTimeOutcomeCallable ExportTableToPointInTimeCallable(const ExportTableToPointInTimeRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::ExportTableToPointInTime, request);
        }

        /**
         * An Async wrapper for ExportTableToPointInTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportTableToPointInTimeRequestT = Model::ExportTableToPointInTimeRequest>
        void ExportTableToPointInTimeAsync(const ExportTableToPointInTimeRequestT& request, const ExportTableToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::ExportTableToPointInTime, request, handler, context);
        }

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
         * A Callable wrapper for GetItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetItemRequestT = Model::GetItemRequest>
        Model::GetItemOutcomeCallable GetItemCallable(const GetItemRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::GetItem, request);
        }

        /**
         * An Async wrapper for GetItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetItemRequestT = Model::GetItemRequest>
        void GetItemAsync(const GetItemRequestT& request, const GetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::GetItem, request, handler, context);
        }

        /**
         * <p> Imports table data from an S3 bucket. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ImportTable">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportTableOutcome ImportTable(const Model::ImportTableRequest& request) const;

        /**
         * A Callable wrapper for ImportTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportTableRequestT = Model::ImportTableRequest>
        Model::ImportTableOutcomeCallable ImportTableCallable(const ImportTableRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::ImportTable, request);
        }

        /**
         * An Async wrapper for ImportTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportTableRequestT = Model::ImportTableRequest>
        void ImportTableAsync(const ImportTableRequestT& request, const ImportTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::ImportTable, request, handler, context);
        }

        /**
         * <p>List DynamoDB backups that are associated with an Amazon Web Services account
         * and weren't made with Amazon Web Services Backup. To list these backups for a
         * given table, specify <code>TableName</code>. <code>ListBackups</code> returns a
         * paginated list of results with at most 1 MB worth of items in a page. You can
         * also specify a maximum number of entries to be returned in a page.</p> <p>In the
         * request, start time is inclusive, but end time is exclusive. Note that these
         * boundaries are for the time at which the original backup was requested.</p>
         * <p>You can call <code>ListBackups</code> a maximum of five times per second.</p>
         * <p>If you want to retrieve the complete list of backups made with Amazon Web
         * Services Backup, use the <a
         * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_ListBackupJobs.html">Amazon
         * Web Services Backup list API.</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupsOutcome ListBackups(const Model::ListBackupsRequest& request) const;

        /**
         * A Callable wrapper for ListBackups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBackupsRequestT = Model::ListBackupsRequest>
        Model::ListBackupsOutcomeCallable ListBackupsCallable(const ListBackupsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::ListBackups, request);
        }

        /**
         * An Async wrapper for ListBackups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBackupsRequestT = Model::ListBackupsRequest>
        void ListBackupsAsync(const ListBackupsRequestT& request, const ListBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::ListBackups, request, handler, context);
        }

        /**
         * <p>Returns a list of ContributorInsightsSummary for a table and all its global
         * secondary indexes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListContributorInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContributorInsightsOutcome ListContributorInsights(const Model::ListContributorInsightsRequest& request) const;

        /**
         * A Callable wrapper for ListContributorInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContributorInsightsRequestT = Model::ListContributorInsightsRequest>
        Model::ListContributorInsightsOutcomeCallable ListContributorInsightsCallable(const ListContributorInsightsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::ListContributorInsights, request);
        }

        /**
         * An Async wrapper for ListContributorInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContributorInsightsRequestT = Model::ListContributorInsightsRequest>
        void ListContributorInsightsAsync(const ListContributorInsightsRequestT& request, const ListContributorInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::ListContributorInsights, request, handler, context);
        }

        /**
         * <p>Lists completed exports within the past 90 days.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListExports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExportsOutcome ListExports(const Model::ListExportsRequest& request) const;

        /**
         * A Callable wrapper for ListExports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExportsRequestT = Model::ListExportsRequest>
        Model::ListExportsOutcomeCallable ListExportsCallable(const ListExportsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::ListExports, request);
        }

        /**
         * An Async wrapper for ListExports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExportsRequestT = Model::ListExportsRequest>
        void ListExportsAsync(const ListExportsRequestT& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::ListExports, request, handler, context);
        }

        /**
         * <p>Lists all global tables that have a replica in the specified Region.</p>
         *  <p>This operation only applies to <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V1.html">Version
         * 2017.11.29 (Legacy)</a> of global tables. We recommend using <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
         * 2019.11.21 (Current)</a> when creating new global tables, as it provides greater
         * flexibility, higher efficiency and consumes less write capacity than 2017.11.29
         * (Legacy). To determine which version you are using, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.DetermineVersion.html">Determining
         * the version</a>. To update existing global tables from version 2017.11.29
         * (Legacy) to version 2019.11.21 (Current), see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/V2globaltables_upgrade.html">
         * Updating global tables</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListGlobalTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGlobalTablesOutcome ListGlobalTables(const Model::ListGlobalTablesRequest& request) const;

        /**
         * A Callable wrapper for ListGlobalTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGlobalTablesRequestT = Model::ListGlobalTablesRequest>
        Model::ListGlobalTablesOutcomeCallable ListGlobalTablesCallable(const ListGlobalTablesRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::ListGlobalTables, request);
        }

        /**
         * An Async wrapper for ListGlobalTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGlobalTablesRequestT = Model::ListGlobalTablesRequest>
        void ListGlobalTablesAsync(const ListGlobalTablesRequestT& request, const ListGlobalTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::ListGlobalTables, request, handler, context);
        }

        /**
         * <p> Lists completed imports within the past 90 days. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListImports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportsOutcome ListImports(const Model::ListImportsRequest& request) const;

        /**
         * A Callable wrapper for ListImports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImportsRequestT = Model::ListImportsRequest>
        Model::ListImportsOutcomeCallable ListImportsCallable(const ListImportsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::ListImports, request);
        }

        /**
         * An Async wrapper for ListImports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImportsRequestT = Model::ListImportsRequest>
        void ListImportsAsync(const ListImportsRequestT& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::ListImports, request, handler, context);
        }

        /**
         * <p>Returns an array of table names associated with the current account and
         * endpoint. The output from <code>ListTables</code> is paginated, with each page
         * returning a maximum of 100 table names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request) const;

        /**
         * A Callable wrapper for ListTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        Model::ListTablesOutcomeCallable ListTablesCallable(const ListTablesRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::ListTables, request);
        }

        /**
         * An Async wrapper for ListTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        void ListTablesAsync(const ListTablesRequestT& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::ListTables, request, handler, context);
        }

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
         * A Callable wrapper for ListTagsOfResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsOfResourceRequestT = Model::ListTagsOfResourceRequest>
        Model::ListTagsOfResourceOutcomeCallable ListTagsOfResourceCallable(const ListTagsOfResourceRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::ListTagsOfResource, request);
        }

        /**
         * An Async wrapper for ListTagsOfResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsOfResourceRequestT = Model::ListTagsOfResourceRequest>
        void ListTagsOfResourceAsync(const ListTagsOfResourceRequestT& request, const ListTagsOfResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::ListTagsOfResource, request, handler, context);
        }

        /**
         * <p>Creates a new item, or replaces an old item with a new item. If an item that
         * has the same primary key as the new item already exists in the specified table,
         * the new item completely replaces the existing item. You can perform a
         * conditional put operation (add a new item if one with the specified primary key
         * doesn't exist), or replace an existing item if it has certain attribute values.
         * You can return the item's attribute values in the same operation, using the
         * <code>ReturnValues</code> parameter.</p> <p>When you add an item, the primary
         * key attributes are the only required attributes. </p> <p>Empty String and Binary
         * attribute values are allowed. Attribute values of type String and Binary must
         * have a length greater than zero if the attribute is used as a key attribute for
         * a table or index. Set type attributes cannot be empty. </p> <p>Invalid Requests
         * with empty values will be rejected with a <code>ValidationException</code>
         * exception.</p>  <p>To prevent a new item from replacing an existing item,
         * use a conditional expression that contains the <code>attribute_not_exists</code>
         * function with the name of the attribute being used as the partition key for the
         * table. Since every record must contain that attribute, the
         * <code>attribute_not_exists</code> function will only succeed if no matching item
         * exists.</p>  <p>For more information about <code>PutItem</code>, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithItems.html">Working
         * with Items</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/PutItem">AWS
         * API Reference</a></p>
         */
        virtual Model::PutItemOutcome PutItem(const Model::PutItemRequest& request) const;

        /**
         * A Callable wrapper for PutItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutItemRequestT = Model::PutItemRequest>
        Model::PutItemOutcomeCallable PutItemCallable(const PutItemRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::PutItem, request);
        }

        /**
         * An Async wrapper for PutItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutItemRequestT = Model::PutItemRequest>
        void PutItemAsync(const PutItemRequestT& request, const PutItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::PutItem, request, handler, context);
        }

        /**
         * <p>You must provide the name of the partition key attribute and a single value
         * for that attribute. <code>Query</code> returns all items with that partition key
         * value. Optionally, you can provide a sort key attribute and use a comparison
         * operator to refine the search results.</p> <p>Use the
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
         * type of read operation. </p>  <p> DynamoDB calculates the number of read
         * capacity units consumed based on item size, not on the amount of data that is
         * returned to an application. The number of capacity units consumed will be the
         * same whether you request all of the attributes (the default behavior) or just
         * some of them (using a projection expression). The number will also be the same
         * whether or not you use a <code>FilterExpression</code>. </p>  <p>
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
         * attributes in the <code>KeyConditionExpression</code>. </p>  <p> A
         * <code>Query</code> operation can return an empty result set and a
         * <code>LastEvaluatedKey</code> if all the items read for the page of results are
         * filtered out. </p>  <p>You can query a table, a local secondary index, or
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
         * A Callable wrapper for Query that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename QueryRequestT = Model::QueryRequest>
        Model::QueryOutcomeCallable QueryCallable(const QueryRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::Query, request);
        }

        /**
         * An Async wrapper for Query that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename QueryRequestT = Model::QueryRequest>
        void QueryAsync(const QueryRequestT& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::Query, request, handler, context);
        }

        /**
         * <p>Creates a new table from an existing backup. Any number of users can execute
         * up to 50 concurrent restores (any type of restore) in a given account. </p>
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
         * A Callable wrapper for RestoreTableFromBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreTableFromBackupRequestT = Model::RestoreTableFromBackupRequest>
        Model::RestoreTableFromBackupOutcomeCallable RestoreTableFromBackupCallable(const RestoreTableFromBackupRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::RestoreTableFromBackup, request);
        }

        /**
         * An Async wrapper for RestoreTableFromBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreTableFromBackupRequestT = Model::RestoreTableFromBackupRequest>
        void RestoreTableFromBackupAsync(const RestoreTableFromBackupRequestT& request, const RestoreTableFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::RestoreTableFromBackup, request, handler, context);
        }

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
         *  <p> All these settings come from the current settings of the source
         * table at the time of restore. </p>  </li> </ul> <p>You must manually
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
         * A Callable wrapper for RestoreTableToPointInTime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreTableToPointInTimeRequestT = Model::RestoreTableToPointInTimeRequest>
        Model::RestoreTableToPointInTimeOutcomeCallable RestoreTableToPointInTimeCallable(const RestoreTableToPointInTimeRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::RestoreTableToPointInTime, request);
        }

        /**
         * An Async wrapper for RestoreTableToPointInTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreTableToPointInTimeRequestT = Model::RestoreTableToPointInTimeRequest>
        void RestoreTableToPointInTimeAsync(const RestoreTableToPointInTimeRequestT& request, const RestoreTableToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::RestoreTableToPointInTime, request, handler, context);
        }

        /**
         * <p>The <code>Scan</code> operation returns one or more items and item attributes
         * by accessing every item in a table or a secondary index. To have DynamoDB return
         * fewer items, you can provide a <code>FilterExpression</code> operation.</p>
         * <p>If the total size of scanned items exceeds the maximum dataset size limit of
         * 1 MB, the scan completes and results are returned to the user. The
         * <code>LastEvaluatedKey</code> value is also returned and the requestor can use
         * the <code>LastEvaluatedKey</code> to continue the scan in a subsequent
         * operation. Each scan response also includes number of items that were scanned
         * (ScannedCount) as part of the request. If using a <code>FilterExpression</code>,
         * a scan result can result in no items meeting the criteria and the
         * <code>Count</code> will result in zero. If you did not use a
         * <code>FilterExpression</code> in the scan request, then <code>Count</code> is
         * the same as <code>ScannedCount</code>.</p>  <p> <code>Count</code> and
         * <code>ScannedCount</code> only return the count of items specific to a single
         * scan request and, unless the table is less than 1MB, do not represent the total
         * number of items in the table. </p>  <p>A single <code>Scan</code>
         * operation first reads up to the maximum number of items set (if using the
         * <code>Limit</code> parameter) or a maximum of 1 MB of data and then applies any
         * filtering to the results if a <code>FilterExpression</code> is provided. If
         * <code>LastEvaluatedKey</code> is present in the response, pagination is required
         * to complete the full table scan. For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Scan.html#Scan.Pagination">Paginating
         * the Results</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>
         * <code>Scan</code> operations proceed sequentially; however, for faster
         * performance on a large table or secondary index, applications can request a
         * parallel <code>Scan</code> operation by providing the <code>Segment</code> and
         * <code>TotalSegments</code> parameters. For more information, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Scan.html#Scan.ParallelScan">Parallel
         * Scan</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>By default, a
         * <code>Scan</code> uses eventually consistent reads when accessing the items in a
         * table. Therefore, the results from an eventually consistent <code>Scan</code>
         * may not include the latest item changes at the time the scan iterates through
         * each item in the table. If you require a strongly consistent read of each item
         * as the scan iterates through the items in the table, you can set the
         * <code>ConsistentRead</code> parameter to true. Strong consistency only relates
         * to the consistency of the read at the item level.</p>  <p> DynamoDB does
         * not provide snapshot isolation for a scan operation when the
         * <code>ConsistentRead</code> parameter is set to true. Thus, a DynamoDB scan
         * operation does not guarantee that all reads in a scan see a consistent snapshot
         * of the table when the scan operation was requested. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/Scan">AWS API
         * Reference</a></p>
         */
        virtual Model::ScanOutcome Scan(const Model::ScanRequest& request) const;

        /**
         * A Callable wrapper for Scan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ScanRequestT = Model::ScanRequest>
        Model::ScanOutcomeCallable ScanCallable(const ScanRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::Scan, request);
        }

        /**
         * An Async wrapper for Scan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ScanRequestT = Model::ScanRequest>
        void ScanAsync(const ScanRequestT& request, const ScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::Scan, request, handler, context);
        }

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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::TagResource, request, handler, context);
        }

        /**
         * <p> <code>TransactGetItems</code> is a synchronous operation that atomically
         * retrieves multiple items from one or more tables (but not from indexes) in a
         * single account and Region. A <code>TransactGetItems</code> call can contain up
         * to 100 <code>TransactGetItem</code> objects, each of which contains a
         * <code>Get</code> structure that specifies an item to retrieve from a table in
         * the account and Region. A call to <code>TransactGetItems</code> cannot retrieve
         * items from tables in more than one Amazon Web Services account or Region. The
         * aggregate size of the items in the transaction cannot exceed 4 MB.</p>
         * <p>DynamoDB rejects the entire <code>TransactGetItems</code> request if any of
         * the following is true:</p> <ul> <li> <p>A conflicting operation is in the
         * process of updating an item to be read.</p> </li> <li> <p>There is insufficient
         * provisioned capacity for the transaction to be completed.</p> </li> <li>
         * <p>There is a user error, such as an invalid data format.</p> </li> <li> <p>The
         * aggregate size of the items in the transaction exceeded 4 MB.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TransactGetItems">AWS
         * API Reference</a></p>
         */
        virtual Model::TransactGetItemsOutcome TransactGetItems(const Model::TransactGetItemsRequest& request) const;

        /**
         * A Callable wrapper for TransactGetItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TransactGetItemsRequestT = Model::TransactGetItemsRequest>
        Model::TransactGetItemsOutcomeCallable TransactGetItemsCallable(const TransactGetItemsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::TransactGetItems, request);
        }

        /**
         * An Async wrapper for TransactGetItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TransactGetItemsRequestT = Model::TransactGetItemsRequest>
        void TransactGetItemsAsync(const TransactGetItemsRequestT& request, const TransactGetItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::TransactGetItems, request, handler, context);
        }

        /**
         * <p> <code>TransactWriteItems</code> is a synchronous write operation that groups
         * up to 100 action requests. These actions can target items in different tables,
         * but not in different Amazon Web Services accounts or Regions, and no two actions
         * can target the same item. For example, you cannot both
         * <code>ConditionCheck</code> and <code>Update</code> the same item. The aggregate
         * size of the items in the transaction cannot exceed 4 MB.</p> <p>The actions are
         * completed atomically so that either all of them succeed, or all of them fail.
         * They are defined by the following objects:</p> <ul> <li> <p> <code>Put</code>  —
         *   Initiates a <code>PutItem</code> operation to write a new item. This structure
         * specifies the primary key of the item to be written, the name of the table to
         * write it in, an optional condition expression that must be satisfied for the
         * write to succeed, a list of the item's attributes, and a field indicating
         * whether to retrieve the item's attributes if the condition is not met.</p> </li>
         * <li> <p> <code>Update</code>  —   Initiates an <code>UpdateItem</code> operation
         * to update an existing item. This structure specifies the primary key of the item
         * to be updated, the name of the table where it resides, an optional condition
         * expression that must be satisfied for the update to succeed, an expression that
         * defines one or more attributes to be updated, and a field indicating whether to
         * retrieve the item's attributes if the condition is not met.</p> </li> <li> <p>
         * <code>Delete</code>  —   Initiates a <code>DeleteItem</code> operation to delete
         * an existing item. This structure specifies the primary key of the item to be
         * deleted, the name of the table where it resides, an optional condition
         * expression that must be satisfied for the deletion to succeed, and a field
         * indicating whether to retrieve the item's attributes if the condition is not
         * met.</p> </li> <li> <p> <code>ConditionCheck</code>  —   Applies a condition to
         * an item that is not being modified by the transaction. This structure specifies
         * the primary key of the item to be checked, the name of the table where it
         * resides, a condition expression that must be satisfied for the transaction to
         * succeed, and a field indicating whether to retrieve the item's attributes if the
         * condition is not met.</p> </li> </ul> <p>DynamoDB rejects the entire
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
         * A Callable wrapper for TransactWriteItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TransactWriteItemsRequestT = Model::TransactWriteItemsRequest>
        Model::TransactWriteItemsOutcomeCallable TransactWriteItemsCallable(const TransactWriteItemsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::TransactWriteItems, request);
        }

        /**
         * An Async wrapper for TransactWriteItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TransactWriteItemsRequestT = Model::TransactWriteItemsRequest>
        void TransactWriteItemsAsync(const TransactWriteItemsRequestT& request, const TransactWriteItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::TransactWriteItems, request, handler, context);
        }

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
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::UntagResource, request, handler, context);
        }

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
         * A Callable wrapper for UpdateContinuousBackups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContinuousBackupsRequestT = Model::UpdateContinuousBackupsRequest>
        Model::UpdateContinuousBackupsOutcomeCallable UpdateContinuousBackupsCallable(const UpdateContinuousBackupsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::UpdateContinuousBackups, request);
        }

        /**
         * An Async wrapper for UpdateContinuousBackups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContinuousBackupsRequestT = Model::UpdateContinuousBackupsRequest>
        void UpdateContinuousBackupsAsync(const UpdateContinuousBackupsRequestT& request, const UpdateContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::UpdateContinuousBackups, request, handler, context);
        }

        /**
         * <p>Updates the status for contributor insights for a specific table or index.
         * CloudWatch Contributor Insights for DynamoDB graphs display the partition key
         * and (if applicable) sort key of frequently accessed items and frequently
         * throttled items in plaintext. If you require the use of Amazon Web Services Key
         * Management Service (KMS) to encrypt this table’s partition key and sort key data
         * with an Amazon Web Services managed key or customer managed key, you should not
         * enable CloudWatch Contributor Insights for DynamoDB for this
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateContributorInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContributorInsightsOutcome UpdateContributorInsights(const Model::UpdateContributorInsightsRequest& request) const;

        /**
         * A Callable wrapper for UpdateContributorInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContributorInsightsRequestT = Model::UpdateContributorInsightsRequest>
        Model::UpdateContributorInsightsOutcomeCallable UpdateContributorInsightsCallable(const UpdateContributorInsightsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::UpdateContributorInsights, request);
        }

        /**
         * An Async wrapper for UpdateContributorInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContributorInsightsRequestT = Model::UpdateContributorInsightsRequest>
        void UpdateContributorInsightsAsync(const UpdateContributorInsightsRequestT& request, const UpdateContributorInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::UpdateContributorInsights, request, handler, context);
        }

        /**
         * <p>Adds or removes replicas in the specified global table. The global table must
         * already exist to be able to use this operation. Any replica to be added must be
         * empty, have the same name as the global table, have the same key schema, have
         * DynamoDB Streams enabled, and have the same provisioned and maximum write
         * capacity units.</p>  <p>This operation only applies to <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V1.html">Version
         * 2017.11.29 (Legacy)</a> of global tables. We recommend using <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
         * 2019.11.21 (Current)</a> when creating new global tables, as it provides greater
         * flexibility, higher efficiency and consumes less write capacity than 2017.11.29
         * (Legacy). To determine which version you are using, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.DetermineVersion.html">Determining
         * the version</a>. To update existing global tables from version 2017.11.29
         * (Legacy) to version 2019.11.21 (Current), see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/V2globaltables_upgrade.html">
         * Updating global tables</a>. </p>   <p> This operation only
         * applies to <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V1.html">Version
         * 2017.11.29</a> of global tables. If you are using global tables <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
         * 2019.11.21</a> you can use <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_DescribeTable.html">DescribeTable</a>
         * instead. </p> <p> Although you can use <code>UpdateGlobalTable</code> to add
         * replicas and remove replicas in a single request, for simplicity we recommend
         * that you issue separate requests for adding or removing replicas. </p> 
         * <p> If global secondary indexes are specified, then the following conditions
         * must also be met: </p> <ul> <li> <p> The global secondary indexes must have the
         * same name. </p> </li> <li> <p> The global secondary indexes must have the same
         * hash key and sort key (if present). </p> </li> <li> <p> The global secondary
         * indexes must have the same provisioned and maximum write capacity units. </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateGlobalTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalTableOutcome UpdateGlobalTable(const Model::UpdateGlobalTableRequest& request) const;

        /**
         * A Callable wrapper for UpdateGlobalTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGlobalTableRequestT = Model::UpdateGlobalTableRequest>
        Model::UpdateGlobalTableOutcomeCallable UpdateGlobalTableCallable(const UpdateGlobalTableRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::UpdateGlobalTable, request);
        }

        /**
         * An Async wrapper for UpdateGlobalTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGlobalTableRequestT = Model::UpdateGlobalTableRequest>
        void UpdateGlobalTableAsync(const UpdateGlobalTableRequestT& request, const UpdateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::UpdateGlobalTable, request, handler, context);
        }

        /**
         * <p>Updates settings for a global table.</p>  <p>This operation only
         * applies to <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V1.html">Version
         * 2017.11.29 (Legacy)</a> of global tables. We recommend using <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
         * 2019.11.21 (Current)</a> when creating new global tables, as it provides greater
         * flexibility, higher efficiency and consumes less write capacity than 2017.11.29
         * (Legacy). To determine which version you are using, see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.DetermineVersion.html">Determining
         * the version</a>. To update existing global tables from version 2017.11.29
         * (Legacy) to version 2019.11.21 (Current), see <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/V2globaltables_upgrade.html">
         * Updating global tables</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateGlobalTableSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalTableSettingsOutcome UpdateGlobalTableSettings(const Model::UpdateGlobalTableSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateGlobalTableSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGlobalTableSettingsRequestT = Model::UpdateGlobalTableSettingsRequest>
        Model::UpdateGlobalTableSettingsOutcomeCallable UpdateGlobalTableSettingsCallable(const UpdateGlobalTableSettingsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::UpdateGlobalTableSettings, request);
        }

        /**
         * An Async wrapper for UpdateGlobalTableSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGlobalTableSettingsRequestT = Model::UpdateGlobalTableSettingsRequest>
        void UpdateGlobalTableSettingsAsync(const UpdateGlobalTableSettingsRequestT& request, const UpdateGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::UpdateGlobalTableSettings, request, handler, context);
        }

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
         * A Callable wrapper for UpdateItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateItemRequestT = Model::UpdateItemRequest>
        Model::UpdateItemOutcomeCallable UpdateItemCallable(const UpdateItemRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::UpdateItem, request);
        }

        /**
         * An Async wrapper for UpdateItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateItemRequestT = Model::UpdateItemRequest>
        void UpdateItemAsync(const UpdateItemRequestT& request, const UpdateItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::UpdateItem, request, handler, context);
        }

        /**
         * <p>Modifies the provisioned throughput settings, global secondary indexes, or
         * DynamoDB Streams settings for a given table.</p>  <p>This operation
         * only applies to <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
         * 2019.11.21 (Current)</a> of global tables. </p>  <p>You can only
         * perform one of the following operations at once:</p> <ul> <li> <p>Modify the
         * provisioned throughput settings of the table.</p> </li> <li> <p>Remove a global
         * secondary index from the table.</p> </li> <li> <p>Create a new global secondary
         * index on the table. After the index begins backfilling, you can use
         * <code>UpdateTable</code> to perform other operations.</p> </li> </ul> <p>
         * <code>UpdateTable</code> is an asynchronous operation; while it is executing,
         * the table status changes from <code>ACTIVE</code> to <code>UPDATING</code>.
         * While it is <code>UPDATING</code>, you cannot issue another
         * <code>UpdateTable</code> request. When the table returns to the
         * <code>ACTIVE</code> state, the <code>UpdateTable</code> operation is
         * complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableOutcome UpdateTable(const Model::UpdateTableRequest& request) const;

        /**
         * A Callable wrapper for UpdateTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTableRequestT = Model::UpdateTableRequest>
        Model::UpdateTableOutcomeCallable UpdateTableCallable(const UpdateTableRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::UpdateTable, request);
        }

        /**
         * An Async wrapper for UpdateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTableRequestT = Model::UpdateTableRequest>
        void UpdateTableAsync(const UpdateTableRequestT& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::UpdateTable, request, handler, context);
        }

        /**
         * <p>Updates auto scaling settings on your global tables at once.</p> 
         * <p>This operation only applies to <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
         * 2019.11.21 (Current)</a> of global tables. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateTableReplicaAutoScaling">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableReplicaAutoScalingOutcome UpdateTableReplicaAutoScaling(const Model::UpdateTableReplicaAutoScalingRequest& request) const;

        /**
         * A Callable wrapper for UpdateTableReplicaAutoScaling that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTableReplicaAutoScalingRequestT = Model::UpdateTableReplicaAutoScalingRequest>
        Model::UpdateTableReplicaAutoScalingOutcomeCallable UpdateTableReplicaAutoScalingCallable(const UpdateTableReplicaAutoScalingRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::UpdateTableReplicaAutoScaling, request);
        }

        /**
         * An Async wrapper for UpdateTableReplicaAutoScaling that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTableReplicaAutoScalingRequestT = Model::UpdateTableReplicaAutoScalingRequest>
        void UpdateTableReplicaAutoScalingAsync(const UpdateTableReplicaAutoScalingRequestT& request, const UpdateTableReplicaAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::UpdateTableReplicaAutoScaling, request, handler, context);
        }

        /**
         * <p>The <code>UpdateTimeToLive</code> method enables or disables Time to Live
         * (TTL) for the specified table. A successful <code>UpdateTimeToLive</code> call
         * returns the current <code>TimeToLiveSpecification</code>. It can take up to one
         * hour for the change to fully process. Any additional
         * <code>UpdateTimeToLive</code> calls for the same table during this one hour
         * duration result in a <code>ValidationException</code>. </p> <p>TTL compares the
         * current time in epoch time format to the time stored in the TTL attribute of an
         * item. If the epoch time value stored in the attribute is less than the current
         * time, the item is marked as expired and subsequently deleted.</p>  <p> The
         * epoch time format is the number of seconds elapsed since 12:00:00 AM January 1,
         * 1970 UTC. </p>  <p>DynamoDB deletes expired items on a best-effort basis
         * to ensure availability of throughput for other data operations. </p> 
         * <p>DynamoDB typically deletes expired items within two days of expiration. The
         * exact duration within which an item gets deleted after expiration is specific to
         * the nature of the workload. Items that have expired and not been deleted will
         * still show up in reads, queries, and scans.</p>  <p>As items are
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
         * A Callable wrapper for UpdateTimeToLive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTimeToLiveRequestT = Model::UpdateTimeToLiveRequest>
        Model::UpdateTimeToLiveOutcomeCallable UpdateTimeToLiveCallable(const UpdateTimeToLiveRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::UpdateTimeToLive, request);
        }

        /**
         * An Async wrapper for UpdateTimeToLive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTimeToLiveRequestT = Model::UpdateTimeToLiveRequest>
        void UpdateTimeToLiveAsync(const UpdateTimeToLiveRequestT& request, const UpdateTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::UpdateTimeToLive, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DynamoDBEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DynamoDBClient>;
      void init(const DynamoDBClientConfiguration& clientConfiguration);

      mutable Aws::Utils::ConcurrentCache<Aws::String, Aws::String> m_endpointsCache;
      DynamoDBClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DynamoDBEndpointProviderBase> m_endpointProvider;
  };

} // namespace DynamoDB
} // namespace Aws
