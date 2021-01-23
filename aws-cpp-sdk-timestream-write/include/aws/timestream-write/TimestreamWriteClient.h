/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/TimestreamWriteErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-write/model/CreateDatabaseResult.h>
#include <aws/timestream-write/model/CreateTableResult.h>
#include <aws/timestream-write/model/DescribeDatabaseResult.h>
#include <aws/timestream-write/model/DescribeEndpointsResult.h>
#include <aws/timestream-write/model/DescribeTableResult.h>
#include <aws/timestream-write/model/ListDatabasesResult.h>
#include <aws/timestream-write/model/ListTablesResult.h>
#include <aws/timestream-write/model/ListTagsForResourceResult.h>
#include <aws/timestream-write/model/TagResourceResult.h>
#include <aws/timestream-write/model/UntagResourceResult.h>
#include <aws/timestream-write/model/UpdateDatabaseResult.h>
#include <aws/timestream-write/model/UpdateTableResult.h>
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

namespace TimestreamWrite
{

namespace Model
{
        class CreateDatabaseRequest;
        class CreateTableRequest;
        class DeleteDatabaseRequest;
        class DeleteTableRequest;
        class DescribeDatabaseRequest;
        class DescribeEndpointsRequest;
        class DescribeTableRequest;
        class ListDatabasesRequest;
        class ListTablesRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDatabaseRequest;
        class UpdateTableRequest;
        class WriteRecordsRequest;

        typedef Aws::Utils::Outcome<CreateDatabaseResult, TimestreamWriteError> CreateDatabaseOutcome;
        typedef Aws::Utils::Outcome<CreateTableResult, TimestreamWriteError> CreateTableOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TimestreamWriteError> DeleteDatabaseOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TimestreamWriteError> DeleteTableOutcome;
        typedef Aws::Utils::Outcome<DescribeDatabaseResult, TimestreamWriteError> DescribeDatabaseOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointsResult, TimestreamWriteError> DescribeEndpointsOutcome;
        typedef Aws::Utils::Outcome<DescribeTableResult, TimestreamWriteError> DescribeTableOutcome;
        typedef Aws::Utils::Outcome<ListDatabasesResult, TimestreamWriteError> ListDatabasesOutcome;
        typedef Aws::Utils::Outcome<ListTablesResult, TimestreamWriteError> ListTablesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, TimestreamWriteError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, TimestreamWriteError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, TimestreamWriteError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDatabaseResult, TimestreamWriteError> UpdateDatabaseOutcome;
        typedef Aws::Utils::Outcome<UpdateTableResult, TimestreamWriteError> UpdateTableOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TimestreamWriteError> WriteRecordsOutcome;

        typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
        typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
        typedef std::future<DeleteDatabaseOutcome> DeleteDatabaseOutcomeCallable;
        typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
        typedef std::future<DescribeDatabaseOutcome> DescribeDatabaseOutcomeCallable;
        typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
        typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
        typedef std::future<ListDatabasesOutcome> ListDatabasesOutcomeCallable;
        typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDatabaseOutcome> UpdateDatabaseOutcomeCallable;
        typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
        typedef std::future<WriteRecordsOutcome> WriteRecordsOutcomeCallable;
} // namespace Model

  class TimestreamWriteClient;

    typedef std::function<void(const TimestreamWriteClient*, const Model::CreateDatabaseRequest&, const Model::CreateDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatabaseResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::CreateTableRequest&, const Model::CreateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTableResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::DeleteDatabaseRequest&, const Model::DeleteDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatabaseResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::DeleteTableRequest&, const Model::DeleteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTableResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::DescribeDatabaseRequest&, const Model::DescribeDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatabaseResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::DescribeEndpointsRequest&, const Model::DescribeEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointsResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::DescribeTableRequest&, const Model::DescribeTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::ListDatabasesRequest&, const Model::ListDatabasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatabasesResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::ListTablesRequest&, const Model::ListTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTablesResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::UpdateDatabaseRequest&, const Model::UpdateDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatabaseResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::UpdateTableRequest&, const Model::UpdateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTableResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::WriteRecordsRequest&, const Model::WriteRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > WriteRecordsResponseReceivedHandler;

  /**
   * <p>Amazon Timestream is a fast, scalable, fully managed time series database
   * service that makes it easy to store and analyze trillions of time series data
   * points per day. With Timestream, you can easily store and analyze IoT sensor
   * data to derive insights from your IoT applications. You can analyze industrial
   * telemetry to streamline equipment management and maintenance. You can also store
   * and analyze log data and metrics to improve the performance and availability of
   * your applications. Timestream is built from the ground up to effectively ingest,
   * process, and store time series data. It organizes data to optimize query
   * processing. It automatically scales based on the volume of data ingested and on
   * the query volume to ensure you receive optimal performance while inserting and
   * querying data. As your data grows over time, Timestream’s adaptive query
   * processing engine spans across storage tiers to provide fast analysis while
   * reducing costs.</p>
   */
  class AWS_TIMESTREAMWRITE_API TimestreamWriteClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamWriteClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamWriteClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TimestreamWriteClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~TimestreamWriteClient();


        /**
         * <p>Creates a new Timestream database. If the KMS key is not specified, the
         * database will be encrypted with a Timestream managed KMS key located in your
         * account. Refer to <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">AWS
         * managed KMS keys</a> for more info. Service quotas apply. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/CreateDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatabaseOutcome CreateDatabase(const Model::CreateDatabaseRequest& request) const;

        /**
         * <p>Creates a new Timestream database. If the KMS key is not specified, the
         * database will be encrypted with a Timestream managed KMS key located in your
         * account. Refer to <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">AWS
         * managed KMS keys</a> for more info. Service quotas apply. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/CreateDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatabaseOutcomeCallable CreateDatabaseCallable(const Model::CreateDatabaseRequest& request) const;

        /**
         * <p>Creates a new Timestream database. If the KMS key is not specified, the
         * database will be encrypted with a Timestream managed KMS key located in your
         * account. Refer to <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">AWS
         * managed KMS keys</a> for more info. Service quotas apply. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/CreateDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The CreateTable operation adds a new table to an existing database in your
         * account. In an AWS account, table names must be at least unique within each
         * Region if they are in the same database. You may have identical table names in
         * the same Region if the tables are in seperate databases. While creating the
         * table, you must specify the table name, database name, and the retention
         * properties. Service quotas apply. For more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/CreateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTableOutcome CreateTable(const Model::CreateTableRequest& request) const;

        /**
         * <p>The CreateTable operation adds a new table to an existing database in your
         * account. In an AWS account, table names must be at least unique within each
         * Region if they are in the same database. You may have identical table names in
         * the same Region if the tables are in seperate databases. While creating the
         * table, you must specify the table name, database name, and the retention
         * properties. Service quotas apply. For more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/CreateTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTableOutcomeCallable CreateTableCallable(const Model::CreateTableRequest& request) const;

        /**
         * <p>The CreateTable operation adds a new table to an existing database in your
         * account. In an AWS account, table names must be at least unique within each
         * Region if they are in the same database. You may have identical table names in
         * the same Region if the tables are in seperate databases. While creating the
         * table, you must specify the table name, database name, and the retention
         * properties. Service quotas apply. For more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/CreateTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTableAsync(const Model::CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a given Timestream database. <i>This is an irreversible operation.
         * After a database is deleted, the time series data from its tables cannot be
         * recovered.</i> </p> <p>All tables in the database must be deleted first, or a
         * ValidationException error will be thrown. </p> <p>Due to the nature of
         * distributed retries, the operation can return either success or a
         * ResourceNotFoundException. Clients should consider them
         * equivalent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DeleteDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatabaseOutcome DeleteDatabase(const Model::DeleteDatabaseRequest& request) const;

        /**
         * <p>Deletes a given Timestream database. <i>This is an irreversible operation.
         * After a database is deleted, the time series data from its tables cannot be
         * recovered.</i> </p> <p>All tables in the database must be deleted first, or a
         * ValidationException error will be thrown. </p> <p>Due to the nature of
         * distributed retries, the operation can return either success or a
         * ResourceNotFoundException. Clients should consider them
         * equivalent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DeleteDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatabaseOutcomeCallable DeleteDatabaseCallable(const Model::DeleteDatabaseRequest& request) const;

        /**
         * <p>Deletes a given Timestream database. <i>This is an irreversible operation.
         * After a database is deleted, the time series data from its tables cannot be
         * recovered.</i> </p> <p>All tables in the database must be deleted first, or a
         * ValidationException error will be thrown. </p> <p>Due to the nature of
         * distributed retries, the operation can return either success or a
         * ResourceNotFoundException. Clients should consider them
         * equivalent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DeleteDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatabaseAsync(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a given Timestream table. This is an irreversible operation. After a
         * Timestream database table is deleted, the time series data stored in the table
         * cannot be recovered. </p> <p>Due to the nature of distributed retries, the
         * operation can return either success or a ResourceNotFoundException. Clients
         * should consider them equivalent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DeleteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTableOutcome DeleteTable(const Model::DeleteTableRequest& request) const;

        /**
         * <p>Deletes a given Timestream table. This is an irreversible operation. After a
         * Timestream database table is deleted, the time series data stored in the table
         * cannot be recovered. </p> <p>Due to the nature of distributed retries, the
         * operation can return either success or a ResourceNotFoundException. Clients
         * should consider them equivalent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DeleteTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTableOutcomeCallable DeleteTableCallable(const Model::DeleteTableRequest& request) const;

        /**
         * <p>Deletes a given Timestream table. This is an irreversible operation. After a
         * Timestream database table is deleted, the time series data stored in the table
         * cannot be recovered. </p> <p>Due to the nature of distributed retries, the
         * operation can return either success or a ResourceNotFoundException. Clients
         * should consider them equivalent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DeleteTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTableAsync(const Model::DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the database, including the database name, time
         * that the database was created, and the total number of tables found within the
         * database. Service quotas apply. For more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatabaseOutcome DescribeDatabase(const Model::DescribeDatabaseRequest& request) const;

        /**
         * <p>Returns information about the database, including the database name, time
         * that the database was created, and the total number of tables found within the
         * database. Service quotas apply. For more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatabaseOutcomeCallable DescribeDatabaseCallable(const Model::DescribeDatabaseRequest& request) const;

        /**
         * <p>Returns information about the database, including the database name, time
         * that the database was created, and the total number of tables found within the
         * database. Service quotas apply. For more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatabaseAsync(const Model::DescribeDatabaseRequest& request, const DescribeDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>DescribeEndpoints returns a list of available endpoints to make Timestream
         * API calls against. This API is available through both Write and Query.</p>
         * <p>Because Timestream’s SDKs are designed to transparently work with the
         * service’s architecture, including the management and mapping of the service
         * endpoints, <i>it is not recommended that you use this API unless</i>:</p> <ul>
         * <li> <p>Your application uses a programming language that does not yet have SDK
         * support</p> </li> <li> <p>You require better control over the client-side
         * implementation</p> </li> </ul> <p>For detailed information on how to use
         * DescribeEndpoints, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/Using-API.endpoint-discovery.html">The
         * Endpoint Discovery Pattern and REST APIs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointsOutcome DescribeEndpoints(const Model::DescribeEndpointsRequest& request) const;

        /**
         * <p>DescribeEndpoints returns a list of available endpoints to make Timestream
         * API calls against. This API is available through both Write and Query.</p>
         * <p>Because Timestream’s SDKs are designed to transparently work with the
         * service’s architecture, including the management and mapping of the service
         * endpoints, <i>it is not recommended that you use this API unless</i>:</p> <ul>
         * <li> <p>Your application uses a programming language that does not yet have SDK
         * support</p> </li> <li> <p>You require better control over the client-side
         * implementation</p> </li> </ul> <p>For detailed information on how to use
         * DescribeEndpoints, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/Using-API.endpoint-discovery.html">The
         * Endpoint Discovery Pattern and REST APIs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointsOutcomeCallable DescribeEndpointsCallable(const Model::DescribeEndpointsRequest& request) const;

        /**
         * <p>DescribeEndpoints returns a list of available endpoints to make Timestream
         * API calls against. This API is available through both Write and Query.</p>
         * <p>Because Timestream’s SDKs are designed to transparently work with the
         * service’s architecture, including the management and mapping of the service
         * endpoints, <i>it is not recommended that you use this API unless</i>:</p> <ul>
         * <li> <p>Your application uses a programming language that does not yet have SDK
         * support</p> </li> <li> <p>You require better control over the client-side
         * implementation</p> </li> </ul> <p>For detailed information on how to use
         * DescribeEndpoints, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/Using-API.endpoint-discovery.html">The
         * Endpoint Discovery Pattern and REST APIs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointsAsync(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the table, including the table name, database name,
         * retention duration of the memory store and the magnetic store. Service quotas
         * apply. For more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest& request) const;

        /**
         * <p>Returns information about the table, including the table name, database name,
         * retention duration of the memory store and the magnetic store. Service quotas
         * apply. For more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTableOutcomeCallable DescribeTableCallable(const Model::DescribeTableRequest& request) const;

        /**
         * <p>Returns information about the table, including the table name, database name,
         * retention duration of the memory store and the magnetic store. Service quotas
         * apply. For more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DescribeTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTableAsync(const Model::DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of your Timestream databases. Service quotas apply. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatabasesOutcome ListDatabases(const Model::ListDatabasesRequest& request) const;

        /**
         * <p>Returns a list of your Timestream databases. Service quotas apply. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListDatabases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatabasesOutcomeCallable ListDatabasesCallable(const Model::ListDatabasesRequest& request) const;

        /**
         * <p>Returns a list of your Timestream databases. Service quotas apply. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListDatabases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatabasesAsync(const Model::ListDatabasesRequest& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A list of tables, along with the name, status and retention properties of
         * each table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request) const;

        /**
         * <p>A list of tables, along with the name, status and retention properties of
         * each table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListTables">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTablesOutcomeCallable ListTablesCallable(const Model::ListTablesRequest& request) const;

        /**
         * <p>A list of tables, along with the name, status and retention properties of
         * each table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListTables">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTablesAsync(const Model::ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> List all tags on a Timestream resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p> List all tags on a Timestream resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p> List all tags on a Timestream resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Associate a set of tags with a Timestream resource. You can then activate
         * these user-defined tags so that they appear on the Billing and Cost Management
         * console for cost allocation tracking. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p> Associate a set of tags with a Timestream resource. You can then activate
         * these user-defined tags so that they appear on the Billing and Cost Management
         * console for cost allocation tracking. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Removes the association of tags from a Timestream resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p> Removes the association of tags from a Timestream resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Modifies the KMS key for an existing database. While updating the database,
         * you must specify the database name and the identifier of the new KMS key to be
         * used (<code>KmsKeyId</code>). If there are any concurrent
         * <code>UpdateDatabase</code> requests, first writer wins. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/UpdateDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatabaseOutcome UpdateDatabase(const Model::UpdateDatabaseRequest& request) const;

        /**
         * <p> Modifies the KMS key for an existing database. While updating the database,
         * you must specify the database name and the identifier of the new KMS key to be
         * used (<code>KmsKeyId</code>). If there are any concurrent
         * <code>UpdateDatabase</code> requests, first writer wins. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/UpdateDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatabaseOutcomeCallable UpdateDatabaseCallable(const Model::UpdateDatabaseRequest& request) const;

        /**
         * <p> Modifies the KMS key for an existing database. While updating the database,
         * you must specify the database name and the identifier of the new KMS key to be
         * used (<code>KmsKeyId</code>). If there are any concurrent
         * <code>UpdateDatabase</code> requests, first writer wins. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/UpdateDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatabaseAsync(const Model::UpdateDatabaseRequest& request, const UpdateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the retention duration of the memory store and magnetic store for
         * your Timestream table. Note that the change in retention duration takes effect
         * immediately. For example, if the retention period of the memory store was
         * initially set to 2 hours and then changed to 24 hours, the memory store will be
         * capable of holding 24 hours of data, but will be populated with 24 hours of data
         * 22 hours after this change was made. Timestream does not retrieve data from the
         * magnetic store to populate the memory store. </p> <p>Service quotas apply. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/UpdateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableOutcome UpdateTable(const Model::UpdateTableRequest& request) const;

        /**
         * <p>Modifies the retention duration of the memory store and magnetic store for
         * your Timestream table. Note that the change in retention duration takes effect
         * immediately. For example, if the retention period of the memory store was
         * initially set to 2 hours and then changed to 24 hours, the memory store will be
         * capable of holding 24 hours of data, but will be populated with 24 hours of data
         * 22 hours after this change was made. Timestream does not retrieve data from the
         * magnetic store to populate the memory store. </p> <p>Service quotas apply. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/UpdateTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTableOutcomeCallable UpdateTableCallable(const Model::UpdateTableRequest& request) const;

        /**
         * <p>Modifies the retention duration of the memory store and magnetic store for
         * your Timestream table. Note that the change in retention duration takes effect
         * immediately. For example, if the retention period of the memory store was
         * initially set to 2 hours and then changed to 24 hours, the memory store will be
         * capable of holding 24 hours of data, but will be populated with 24 hours of data
         * 22 hours after this change was made. Timestream does not retrieve data from the
         * magnetic store to populate the memory store. </p> <p>Service quotas apply. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/UpdateTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * return the latest data. Service quotas apply. For more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/WriteRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::WriteRecordsOutcome WriteRecords(const Model::WriteRecordsRequest& request) const;

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
         * return the latest data. Service quotas apply. For more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/WriteRecords">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::WriteRecordsOutcomeCallable WriteRecordsCallable(const Model::WriteRecordsRequest& request) const;

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
         * return the latest data. Service quotas apply. For more information, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Access
         * Management</a> in the Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/WriteRecords">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void WriteRecordsAsync(const Model::WriteRecordsRequest& request, const WriteRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
      void LoadTimestreamWriteSpecificConfig(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateDatabaseAsyncHelper(const Model::CreateDatabaseRequest& request, const CreateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTableAsyncHelper(const Model::CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatabaseAsyncHelper(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTableAsyncHelper(const Model::DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatabaseAsyncHelper(const Model::DescribeDatabaseRequest& request, const DescribeDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointsAsyncHelper(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTableAsyncHelper(const Model::DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatabasesAsyncHelper(const Model::ListDatabasesRequest& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTablesAsyncHelper(const Model::ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDatabaseAsyncHelper(const Model::UpdateDatabaseRequest& request, const UpdateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTableAsyncHelper(const Model::UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void WriteRecordsAsyncHelper(const Model::WriteRecordsRequest& request, const WriteRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      mutable Aws::Utils::ConcurrentCache<Aws::String, Aws::String> m_endpointsCache;
      bool m_enableEndpointDiscovery;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace TimestreamWrite
} // namespace Aws
