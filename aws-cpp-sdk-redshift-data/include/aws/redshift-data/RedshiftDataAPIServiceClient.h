/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/redshift-data/RedshiftDataAPIServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-data/model/CancelStatementResult.h>
#include <aws/redshift-data/model/DescribeStatementResult.h>
#include <aws/redshift-data/model/DescribeTableResult.h>
#include <aws/redshift-data/model/ExecuteStatementResult.h>
#include <aws/redshift-data/model/GetStatementResultResult.h>
#include <aws/redshift-data/model/ListDatabasesResult.h>
#include <aws/redshift-data/model/ListSchemasResult.h>
#include <aws/redshift-data/model/ListStatementsResult.h>
#include <aws/redshift-data/model/ListTablesResult.h>
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

namespace RedshiftDataAPIService
{

namespace Model
{
        class CancelStatementRequest;
        class DescribeStatementRequest;
        class DescribeTableRequest;
        class ExecuteStatementRequest;
        class GetStatementResultRequest;
        class ListDatabasesRequest;
        class ListSchemasRequest;
        class ListStatementsRequest;
        class ListTablesRequest;

        typedef Aws::Utils::Outcome<CancelStatementResult, RedshiftDataAPIServiceError> CancelStatementOutcome;
        typedef Aws::Utils::Outcome<DescribeStatementResult, RedshiftDataAPIServiceError> DescribeStatementOutcome;
        typedef Aws::Utils::Outcome<DescribeTableResult, RedshiftDataAPIServiceError> DescribeTableOutcome;
        typedef Aws::Utils::Outcome<ExecuteStatementResult, RedshiftDataAPIServiceError> ExecuteStatementOutcome;
        typedef Aws::Utils::Outcome<GetStatementResultResult, RedshiftDataAPIServiceError> GetStatementResultOutcome;
        typedef Aws::Utils::Outcome<ListDatabasesResult, RedshiftDataAPIServiceError> ListDatabasesOutcome;
        typedef Aws::Utils::Outcome<ListSchemasResult, RedshiftDataAPIServiceError> ListSchemasOutcome;
        typedef Aws::Utils::Outcome<ListStatementsResult, RedshiftDataAPIServiceError> ListStatementsOutcome;
        typedef Aws::Utils::Outcome<ListTablesResult, RedshiftDataAPIServiceError> ListTablesOutcome;

        typedef std::future<CancelStatementOutcome> CancelStatementOutcomeCallable;
        typedef std::future<DescribeStatementOutcome> DescribeStatementOutcomeCallable;
        typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
        typedef std::future<ExecuteStatementOutcome> ExecuteStatementOutcomeCallable;
        typedef std::future<GetStatementResultOutcome> GetStatementResultOutcomeCallable;
        typedef std::future<ListDatabasesOutcome> ListDatabasesOutcomeCallable;
        typedef std::future<ListSchemasOutcome> ListSchemasOutcomeCallable;
        typedef std::future<ListStatementsOutcome> ListStatementsOutcomeCallable;
        typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
} // namespace Model

  class RedshiftDataAPIServiceClient;

    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::CancelStatementRequest&, const Model::CancelStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelStatementResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::DescribeStatementRequest&, const Model::DescribeStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStatementResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::DescribeTableRequest&, const Model::DescribeTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::ExecuteStatementRequest&, const Model::ExecuteStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteStatementResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::GetStatementResultRequest&, const Model::GetStatementResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStatementResultResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::ListDatabasesRequest&, const Model::ListDatabasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatabasesResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::ListSchemasRequest&, const Model::ListSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemasResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::ListStatementsRequest&, const Model::ListStatementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStatementsResponseReceivedHandler;
    typedef std::function<void(const RedshiftDataAPIServiceClient*, const Model::ListTablesRequest&, const Model::ListTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTablesResponseReceivedHandler;

  /**
   * <p>You can use the Amazon Redshift Data API to run queries on Amazon Redshift
   * tables. You can run individual SQL statements, which are committed if the
   * statement succeeds. </p>
   */
  class AWS_REDSHIFTDATAAPISERVICE_API RedshiftDataAPIServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftDataAPIServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftDataAPIServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RedshiftDataAPIServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~RedshiftDataAPIServiceClient();


        /**
         * <p>Cancels a running query. To be canceled, a query must be running.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/CancelStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelStatementOutcome CancelStatement(const Model::CancelStatementRequest& request) const;

        /**
         * <p>Cancels a running query. To be canceled, a query must be running.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/CancelStatement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelStatementOutcomeCallable CancelStatementCallable(const Model::CancelStatementRequest& request) const;

        /**
         * <p>Cancels a running query. To be canceled, a query must be running.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/CancelStatement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelStatementAsync(const Model::CancelStatementRequest& request, const CancelStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the details about a specific instance when a query was run by the
         * Amazon Redshift Data API. The information includes when the query started, when
         * it finished, the query status, the number of rows returned, and the SQL
         * statement. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/DescribeStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStatementOutcome DescribeStatement(const Model::DescribeStatementRequest& request) const;

        /**
         * <p>Describes the details about a specific instance when a query was run by the
         * Amazon Redshift Data API. The information includes when the query started, when
         * it finished, the query status, the number of rows returned, and the SQL
         * statement. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/DescribeStatement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStatementOutcomeCallable DescribeStatementCallable(const Model::DescribeStatementRequest& request) const;

        /**
         * <p>Describes the details about a specific instance when a query was run by the
         * Amazon Redshift Data API. The information includes when the query started, when
         * it finished, the query status, the number of rows returned, and the SQL
         * statement. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/DescribeStatement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStatementAsync(const Model::DescribeStatementRequest& request, const DescribeStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the detailed information about a table from metadata in the
         * cluster. The information includes its columns. A token is returned to page
         * through the column list. Depending on the authorization method, use one of the
         * following combinations of request parameters: </p> <ul> <li> <p>AWS Secrets
         * Manager - specify the Amazon Resource Name (ARN) of the secret and the cluster
         * identifier that matches the cluster in the secret. </p> </li> <li> <p>Temporary
         * credentials - specify the cluster identifier, the database name, and the
         * database user name. Permission to call the
         * <code>redshift:GetClusterCredentials</code> operation is required to use this
         * method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/DescribeTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest& request) const;

        /**
         * <p>Describes the detailed information about a table from metadata in the
         * cluster. The information includes its columns. A token is returned to page
         * through the column list. Depending on the authorization method, use one of the
         * following combinations of request parameters: </p> <ul> <li> <p>AWS Secrets
         * Manager - specify the Amazon Resource Name (ARN) of the secret and the cluster
         * identifier that matches the cluster in the secret. </p> </li> <li> <p>Temporary
         * credentials - specify the cluster identifier, the database name, and the
         * database user name. Permission to call the
         * <code>redshift:GetClusterCredentials</code> operation is required to use this
         * method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/DescribeTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTableOutcomeCallable DescribeTableCallable(const Model::DescribeTableRequest& request) const;

        /**
         * <p>Describes the detailed information about a table from metadata in the
         * cluster. The information includes its columns. A token is returned to page
         * through the column list. Depending on the authorization method, use one of the
         * following combinations of request parameters: </p> <ul> <li> <p>AWS Secrets
         * Manager - specify the Amazon Resource Name (ARN) of the secret and the cluster
         * identifier that matches the cluster in the secret. </p> </li> <li> <p>Temporary
         * credentials - specify the cluster identifier, the database name, and the
         * database user name. Permission to call the
         * <code>redshift:GetClusterCredentials</code> operation is required to use this
         * method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/DescribeTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTableAsync(const Model::DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Runs an SQL statement, which can be data manipulation language (DML) or data
         * definition language (DDL). This statement must be a single SQL statement.
         * Depending on the authorization method, use one of the following combinations of
         * request parameters: </p> <ul> <li> <p>AWS Secrets Manager - specify the Amazon
         * Resource Name (ARN) of the secret and the cluster identifier that matches the
         * cluster in the secret. </p> </li> <li> <p>Temporary credentials - specify the
         * cluster identifier, the database name, and the database user name. Permission to
         * call the <code>redshift:GetClusterCredentials</code> operation is required to
         * use this method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ExecuteStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteStatementOutcome ExecuteStatement(const Model::ExecuteStatementRequest& request) const;

        /**
         * <p>Runs an SQL statement, which can be data manipulation language (DML) or data
         * definition language (DDL). This statement must be a single SQL statement.
         * Depending on the authorization method, use one of the following combinations of
         * request parameters: </p> <ul> <li> <p>AWS Secrets Manager - specify the Amazon
         * Resource Name (ARN) of the secret and the cluster identifier that matches the
         * cluster in the secret. </p> </li> <li> <p>Temporary credentials - specify the
         * cluster identifier, the database name, and the database user name. Permission to
         * call the <code>redshift:GetClusterCredentials</code> operation is required to
         * use this method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ExecuteStatement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecuteStatementOutcomeCallable ExecuteStatementCallable(const Model::ExecuteStatementRequest& request) const;

        /**
         * <p>Runs an SQL statement, which can be data manipulation language (DML) or data
         * definition language (DDL). This statement must be a single SQL statement.
         * Depending on the authorization method, use one of the following combinations of
         * request parameters: </p> <ul> <li> <p>AWS Secrets Manager - specify the Amazon
         * Resource Name (ARN) of the secret and the cluster identifier that matches the
         * cluster in the secret. </p> </li> <li> <p>Temporary credentials - specify the
         * cluster identifier, the database name, and the database user name. Permission to
         * call the <code>redshift:GetClusterCredentials</code> operation is required to
         * use this method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ExecuteStatement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExecuteStatementAsync(const Model::ExecuteStatementRequest& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Fetches the temporarily cached result of an SQL statement. A token is
         * returned to page through the statement results. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/GetStatementResult">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStatementResultOutcome GetStatementResult(const Model::GetStatementResultRequest& request) const;

        /**
         * <p>Fetches the temporarily cached result of an SQL statement. A token is
         * returned to page through the statement results. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/GetStatementResult">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStatementResultOutcomeCallable GetStatementResultCallable(const Model::GetStatementResultRequest& request) const;

        /**
         * <p>Fetches the temporarily cached result of an SQL statement. A token is
         * returned to page through the statement results. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/GetStatementResult">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStatementResultAsync(const Model::GetStatementResultRequest& request, const GetStatementResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the databases in a cluster. A token is returned to page through the
         * database list. Depending on the authorization method, use one of the following
         * combinations of request parameters: </p> <ul> <li> <p>AWS Secrets Manager -
         * specify the Amazon Resource Name (ARN) of the secret and the cluster identifier
         * that matches the cluster in the secret. </p> </li> <li> <p>Temporary credentials
         * - specify the cluster identifier, the database name, and the database user name.
         * Permission to call the <code>redshift:GetClusterCredentials</code> operation is
         * required to use this method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatabasesOutcome ListDatabases(const Model::ListDatabasesRequest& request) const;

        /**
         * <p>List the databases in a cluster. A token is returned to page through the
         * database list. Depending on the authorization method, use one of the following
         * combinations of request parameters: </p> <ul> <li> <p>AWS Secrets Manager -
         * specify the Amazon Resource Name (ARN) of the secret and the cluster identifier
         * that matches the cluster in the secret. </p> </li> <li> <p>Temporary credentials
         * - specify the cluster identifier, the database name, and the database user name.
         * Permission to call the <code>redshift:GetClusterCredentials</code> operation is
         * required to use this method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListDatabases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatabasesOutcomeCallable ListDatabasesCallable(const Model::ListDatabasesRequest& request) const;

        /**
         * <p>List the databases in a cluster. A token is returned to page through the
         * database list. Depending on the authorization method, use one of the following
         * combinations of request parameters: </p> <ul> <li> <p>AWS Secrets Manager -
         * specify the Amazon Resource Name (ARN) of the secret and the cluster identifier
         * that matches the cluster in the secret. </p> </li> <li> <p>Temporary credentials
         * - specify the cluster identifier, the database name, and the database user name.
         * Permission to call the <code>redshift:GetClusterCredentials</code> operation is
         * required to use this method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListDatabases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatabasesAsync(const Model::ListDatabasesRequest& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the schemas in a database. A token is returned to page through the
         * schema list. Depending on the authorization method, use one of the following
         * combinations of request parameters: </p> <ul> <li> <p>AWS Secrets Manager -
         * specify the Amazon Resource Name (ARN) of the secret and the cluster identifier
         * that matches the cluster in the secret. </p> </li> <li> <p>Temporary credentials
         * - specify the cluster identifier, the database name, and the database user name.
         * Permission to call the <code>redshift:GetClusterCredentials</code> operation is
         * required to use this method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest& request) const;

        /**
         * <p>Lists the schemas in a database. A token is returned to page through the
         * schema list. Depending on the authorization method, use one of the following
         * combinations of request parameters: </p> <ul> <li> <p>AWS Secrets Manager -
         * specify the Amazon Resource Name (ARN) of the secret and the cluster identifier
         * that matches the cluster in the secret. </p> </li> <li> <p>Temporary credentials
         * - specify the cluster identifier, the database name, and the database user name.
         * Permission to call the <code>redshift:GetClusterCredentials</code> operation is
         * required to use this method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListSchemas">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchemasOutcomeCallable ListSchemasCallable(const Model::ListSchemasRequest& request) const;

        /**
         * <p>Lists the schemas in a database. A token is returned to page through the
         * schema list. Depending on the authorization method, use one of the following
         * combinations of request parameters: </p> <ul> <li> <p>AWS Secrets Manager -
         * specify the Amazon Resource Name (ARN) of the secret and the cluster identifier
         * that matches the cluster in the secret. </p> </li> <li> <p>Temporary credentials
         * - specify the cluster identifier, the database name, and the database user name.
         * Permission to call the <code>redshift:GetClusterCredentials</code> operation is
         * required to use this method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListSchemas">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemasAsync(const Model::ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List of SQL statements. By default, only finished statements are shown. A
         * token is returned to page through the statement list. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListStatements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStatementsOutcome ListStatements(const Model::ListStatementsRequest& request) const;

        /**
         * <p>List of SQL statements. By default, only finished statements are shown. A
         * token is returned to page through the statement list. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListStatements">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStatementsOutcomeCallable ListStatementsCallable(const Model::ListStatementsRequest& request) const;

        /**
         * <p>List of SQL statements. By default, only finished statements are shown. A
         * token is returned to page through the statement list. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListStatements">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStatementsAsync(const Model::ListStatementsRequest& request, const ListStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the tables in a database. If neither <code>SchemaPattern</code> nor
         * <code>TablePattern</code> are specified, then all tables in the database are
         * returned. A token is returned to page through the table list. Depending on the
         * authorization method, use one of the following combinations of request
         * parameters: </p> <ul> <li> <p>AWS Secrets Manager - specify the Amazon Resource
         * Name (ARN) of the secret and the cluster identifier that matches the cluster in
         * the secret. </p> </li> <li> <p>Temporary credentials - specify the cluster
         * identifier, the database name, and the database user name. Permission to call
         * the <code>redshift:GetClusterCredentials</code> operation is required to use
         * this method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request) const;

        /**
         * <p>List the tables in a database. If neither <code>SchemaPattern</code> nor
         * <code>TablePattern</code> are specified, then all tables in the database are
         * returned. A token is returned to page through the table list. Depending on the
         * authorization method, use one of the following combinations of request
         * parameters: </p> <ul> <li> <p>AWS Secrets Manager - specify the Amazon Resource
         * Name (ARN) of the secret and the cluster identifier that matches the cluster in
         * the secret. </p> </li> <li> <p>Temporary credentials - specify the cluster
         * identifier, the database name, and the database user name. Permission to call
         * the <code>redshift:GetClusterCredentials</code> operation is required to use
         * this method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListTables">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTablesOutcomeCallable ListTablesCallable(const Model::ListTablesRequest& request) const;

        /**
         * <p>List the tables in a database. If neither <code>SchemaPattern</code> nor
         * <code>TablePattern</code> are specified, then all tables in the database are
         * returned. A token is returned to page through the table list. Depending on the
         * authorization method, use one of the following combinations of request
         * parameters: </p> <ul> <li> <p>AWS Secrets Manager - specify the Amazon Resource
         * Name (ARN) of the secret and the cluster identifier that matches the cluster in
         * the secret. </p> </li> <li> <p>Temporary credentials - specify the cluster
         * identifier, the database name, and the database user name. Permission to call
         * the <code>redshift:GetClusterCredentials</code> operation is required to use
         * this method. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListTables">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTablesAsync(const Model::ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelStatementAsyncHelper(const Model::CancelStatementRequest& request, const CancelStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStatementAsyncHelper(const Model::DescribeStatementRequest& request, const DescribeStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTableAsyncHelper(const Model::DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExecuteStatementAsyncHelper(const Model::ExecuteStatementRequest& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStatementResultAsyncHelper(const Model::GetStatementResultRequest& request, const GetStatementResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatabasesAsyncHelper(const Model::ListDatabasesRequest& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSchemasAsyncHelper(const Model::ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStatementsAsyncHelper(const Model::ListStatementsRequest& request, const ListStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTablesAsyncHelper(const Model::ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace RedshiftDataAPIService
} // namespace Aws
