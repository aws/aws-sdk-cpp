/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-write/TimestreamWriteServiceClientModel.h>

namespace Aws
{
namespace TimestreamWrite
{
  /**
   * <fullname>Amazon Timestream Write</fullname> <p>Amazon Timestream is a fast,
   * scalable, fully managed time series database service that makes it easy to store
   * and analyze trillions of time series data points per day. With Timestream, you
   * can easily store and analyze IoT sensor data to derive insights from your IoT
   * applications. You can analyze industrial telemetry to streamline equipment
   * management and maintenance. You can also store and analyze log data and metrics
   * to improve the performance and availability of your applications. Timestream is
   * built from the ground up to effectively ingest, process, and store time series
   * data. It organizes data to optimize query processing. It automatically scales
   * based on the volume of data ingested and on the query volume to ensure you
   * receive optimal performance while inserting and querying data. As your data
   * grows over time, Timestream’s adaptive query processing engine spans across
   * storage tiers to provide fast analysis while reducing costs.</p>
   */
  class AWS_TIMESTREAMWRITE_API TimestreamWriteClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<TimestreamWriteClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamWriteClient(const Aws::TimestreamWrite::TimestreamWriteClientConfiguration& clientConfiguration = Aws::TimestreamWrite::TimestreamWriteClientConfiguration(),
                              std::shared_ptr<TimestreamWriteEndpointProviderBase> endpointProvider = Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamWriteClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<TimestreamWriteEndpointProviderBase> endpointProvider = Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG),
                              const Aws::TimestreamWrite::TimestreamWriteClientConfiguration& clientConfiguration = Aws::TimestreamWrite::TimestreamWriteClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TimestreamWriteClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<TimestreamWriteEndpointProviderBase> endpointProvider = Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG),
                              const Aws::TimestreamWrite::TimestreamWriteClientConfiguration& clientConfiguration = Aws::TimestreamWrite::TimestreamWriteClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamWriteClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamWriteClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TimestreamWriteClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~TimestreamWriteClient();

        /**
         * <p>Creates a new Timestream database. If the KMS key is not specified, the
         * database will be encrypted with a Timestream managed KMS key located in your
         * account. Refer to <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
         * Web Services managed KMS keys</a> for more info. <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Service
         * quotas apply</a>. See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.create-db.html">code
         * sample</a> for details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/CreateDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatabaseOutcome CreateDatabase(const Model::CreateDatabaseRequest& request) const;

        /**
         * A Callable wrapper for CreateDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatabaseOutcomeCallable CreateDatabaseCallable(const Model::CreateDatabaseRequest& request) const;

        /**
         * An Async wrapper for CreateDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The CreateTable operation adds a new table to an existing database in your
         * account. In an Amazon Web Services account, table names must be at least unique
         * within each Region if they are in the same database. You may have identical
         * table names in the same Region if the tables are in separate databases. While
         * creating the table, you must specify the table name, database name, and the
         * retention properties. <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Service
         * quotas apply</a>. See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.create-table.html">code
         * sample</a> for details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/CreateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTableOutcome CreateTable(const Model::CreateTableRequest& request) const;

        /**
         * A Callable wrapper for CreateTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTableOutcomeCallable CreateTableCallable(const Model::CreateTableRequest& request) const;

        /**
         * An Async wrapper for CreateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTableAsync(const Model::CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a given Timestream database. <i>This is an irreversible operation.
         * After a database is deleted, the time series data from its tables cannot be
         * recovered.</i> </p>  <p>All tables in the database must be deleted first,
         * or a ValidationException error will be thrown. </p> <p>Due to the nature of
         * distributed retries, the operation can return either success or a
         * ResourceNotFoundException. Clients should consider them equivalent.</p> 
         * <p>See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.delete-db.html">code
         * sample</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DeleteDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatabaseOutcome DeleteDatabase(const Model::DeleteDatabaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatabaseOutcomeCallable DeleteDatabaseCallable(const Model::DeleteDatabaseRequest& request) const;

        /**
         * An Async wrapper for DeleteDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatabaseAsync(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a given Timestream table. This is an irreversible operation. After a
         * Timestream database table is deleted, the time series data stored in the table
         * cannot be recovered. </p>  <p>Due to the nature of distributed retries,
         * the operation can return either success or a ResourceNotFoundException. Clients
         * should consider them equivalent.</p>  <p>See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.delete-table.html">code
         * sample</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DeleteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTableOutcome DeleteTable(const Model::DeleteTableRequest& request) const;

        /**
         * A Callable wrapper for DeleteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTableOutcomeCallable DeleteTableCallable(const Model::DeleteTableRequest& request) const;

        /**
         * An Async wrapper for DeleteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTableAsync(const Model::DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the database, including the database name, time
         * that the database was created, and the total number of tables found within the
         * database. <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Service
         * quotas apply</a>. See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.describe-db.html">code
         * sample</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatabaseOutcome DescribeDatabase(const Model::DescribeDatabaseRequest& request) const;

        /**
         * A Callable wrapper for DescribeDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatabaseOutcomeCallable DescribeDatabaseCallable(const Model::DescribeDatabaseRequest& request) const;

        /**
         * An Async wrapper for DescribeDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatabaseAsync(const Model::DescribeDatabaseRequest& request, const DescribeDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>DescribeEndpoints returns a list of available endpoints to make Timestream
         * API calls against. This API is available through both Write and Query.</p>
         * <p>Because the Timestream SDKs are designed to transparently work with the
         * service’s architecture, including the management and mapping of the service
         * endpoints, <i>it is not recommended that you use this API unless</i>:</p> <ul>
         * <li> <p>You are using <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/VPCEndpoints">VPC
         * endpoints (Amazon Web Services PrivateLink) with Timestream</a> </p> </li> <li>
         * <p>Your application uses a programming language that does not yet have SDK
         * support</p> </li> <li> <p>You require better control over the client-side
         * implementation</p> </li> </ul> <p>For detailed information on how and when to
         * use and implement DescribeEndpoints, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/Using.API.html#Using-API.endpoint-discovery">The
         * Endpoint Discovery Pattern</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointsOutcome DescribeEndpoints(const Model::DescribeEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointsOutcomeCallable DescribeEndpointsCallable(const Model::DescribeEndpointsRequest& request) const;

        /**
         * An Async wrapper for DescribeEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointsAsync(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the table, including the table name, database name,
         * retention duration of the memory store and the magnetic store. <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Service
         * quotas apply</a>. See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.describe-table.html">code
         * sample</a> for details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest& request) const;

        /**
         * A Callable wrapper for DescribeTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTableOutcomeCallable DescribeTableCallable(const Model::DescribeTableRequest& request) const;

        /**
         * An Async wrapper for DescribeTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTableAsync(const Model::DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of your Timestream databases. <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Service
         * quotas apply</a>. See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.list-db.html">code
         * sample</a> for details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatabasesOutcome ListDatabases(const Model::ListDatabasesRequest& request) const;

        /**
         * A Callable wrapper for ListDatabases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatabasesOutcomeCallable ListDatabasesCallable(const Model::ListDatabasesRequest& request) const;

        /**
         * An Async wrapper for ListDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatabasesAsync(const Model::ListDatabasesRequest& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A list of tables, along with the name, status and retention properties of
         * each table. See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.list-table.html">code
         * sample</a> for details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request) const;

        /**
         * A Callable wrapper for ListTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTablesOutcomeCallable ListTablesCallable(const Model::ListTablesRequest& request) const;

        /**
         * An Async wrapper for ListTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTablesAsync(const Model::ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> List all tags on a Timestream resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Associate a set of tags with a Timestream resource. You can then activate
         * these user-defined tags so that they appear on the Billing and Cost Management
         * console for cost allocation tracking. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Removes the association of tags from a Timestream resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Modifies the KMS key for an existing database. While updating the database,
         * you must specify the database name and the identifier of the new KMS key to be
         * used (<code>KmsKeyId</code>). If there are any concurrent
         * <code>UpdateDatabase</code> requests, first writer wins. </p> <p>See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.update-db.html">code
         * sample</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/UpdateDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatabaseOutcome UpdateDatabase(const Model::UpdateDatabaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatabaseOutcomeCallable UpdateDatabaseCallable(const Model::UpdateDatabaseRequest& request) const;

        /**
         * An Async wrapper for UpdateDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatabaseAsync(const Model::UpdateDatabaseRequest& request, const UpdateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the retention duration of the memory store and magnetic store for
         * your Timestream table. Note that the change in retention duration takes effect
         * immediately. For example, if the retention period of the memory store was
         * initially set to 2 hours and then changed to 24 hours, the memory store will be
         * capable of holding 24 hours of data, but will be populated with 24 hours of data
         * 22 hours after this change was made. Timestream does not retrieve data from the
         * magnetic store to populate the memory store. </p> <p>See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.update-table.html">code
         * sample</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/UpdateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableOutcome UpdateTable(const Model::UpdateTableRequest& request) const;

        /**
         * A Callable wrapper for UpdateTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTableOutcomeCallable UpdateTableCallable(const Model::UpdateTableRequest& request) const;

        /**
         * An Async wrapper for UpdateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTableAsync(const Model::UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The WriteRecords operation enables you to write your time series data into
         * Timestream. You can specify a single data point or a batch of data points to be
         * inserted into the system. Timestream offers you with a flexible schema that auto
         * detects the column names and data types for your Timestream tables based on the
         * dimension names and data types of the data points you specify when invoking
         * writes into the database. Timestream support eventual consistency read
         * semantics. This means that when you query data immediately after writing a batch
         * of data into Timestream, the query results might not reflect the results of a
         * recently completed write operation. The results may also include some stale
         * data. If you repeat the query request after a short time, the results should
         * return the latest data. <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Service
         * quotas apply</a>. </p> <p>See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.write.html">code
         * sample</a> for details.</p> <p> <b>Upserts</b> </p> <p>You can use the
         * <code>Version</code> parameter in a <code>WriteRecords</code> request to update
         * data points. Timestream tracks a version number with each record.
         * <code>Version</code> defaults to <code>1</code> when not specified for the
         * record in the request. Timestream will update an existing record’s measure value
         * along with its <code>Version</code> upon receiving a write request with a higher
         * <code>Version</code> number for that record. Upon receiving an update request
         * where the measure value is the same as that of the existing record, Timestream
         * still updates <code>Version</code>, if it is greater than the existing value of
         * <code>Version</code>. You can update a data point as many times as desired, as
         * long as the value of <code>Version</code> continuously increases. </p> <p> For
         * example, suppose you write a new record without indicating <code>Version</code>
         * in the request. Timestream will store this record, and set <code>Version</code>
         * to <code>1</code>. Now, suppose you try to update this record with a
         * <code>WriteRecords</code> request of the same record with a different measure
         * value but, like before, do not provide <code>Version</code>. In this case,
         * Timestream will reject this update with a <code>RejectedRecordsException</code>
         * since the updated record’s version is not greater than the existing value of
         * Version. However, if you were to resend the update request with
         * <code>Version</code> set to <code>2</code>, Timestream would then succeed in
         * updating the record’s value, and the <code>Version</code> would be set to
         * <code>2</code>. Next, suppose you sent a <code>WriteRecords</code> request with
         * this same record and an identical measure value, but with <code>Version</code>
         * set to <code>3</code>. In this case, Timestream would only update
         * <code>Version</code> to <code>3</code>. Any further updates would need to send a
         * version number greater than <code>3</code>, or the update requests would receive
         * a <code>RejectedRecordsException</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/WriteRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::WriteRecordsOutcome WriteRecords(const Model::WriteRecordsRequest& request) const;

        /**
         * A Callable wrapper for WriteRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::WriteRecordsOutcomeCallable WriteRecordsCallable(const Model::WriteRecordsRequest& request) const;

        /**
         * An Async wrapper for WriteRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void WriteRecordsAsync(const Model::WriteRecordsRequest& request, const WriteRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TimestreamWriteEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<TimestreamWriteClient>;
      void init(const TimestreamWriteClientConfiguration& clientConfiguration);

      mutable Aws::Utils::ConcurrentCache<Aws::String, Aws::String> m_endpointsCache;
      TimestreamWriteClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<TimestreamWriteEndpointProviderBase> m_endpointProvider;
  };

} // namespace TimestreamWrite
} // namespace Aws
