/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-data/RedshiftDataAPIServiceServiceClientModel.h>

namespace Aws
{
namespace RedshiftDataAPIService
{
  /**
   * <p>You can use the Amazon Redshift Data API to run queries on Amazon Redshift
   * tables. You can run SQL statements, which are committed if the statement
   * succeeds. </p> <p>For more information about the Amazon Redshift Data API and
   * CLI usage examples, see <a
   * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
   * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
   * </p>
   */
  class AWS_REDSHIFTDATAAPISERVICE_API RedshiftDataAPIServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<RedshiftDataAPIServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftDataAPIServiceClient(const Aws::RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration& clientConfiguration = Aws::RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration(),
                                     std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<RedshiftDataAPIServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftDataAPIServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                     std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<RedshiftDataAPIServiceEndpointProvider>(ALLOCATION_TAG),
                                     const Aws::RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration& clientConfiguration = Aws::RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RedshiftDataAPIServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<RedshiftDataAPIServiceEndpointProvider>(ALLOCATION_TAG),
                                     const Aws::RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration& clientConfiguration = Aws::RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftDataAPIServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftDataAPIServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RedshiftDataAPIServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RedshiftDataAPIServiceClient();

        /**
         * <p>Runs one or more SQL statements, which can be data manipulation language
         * (DML) or data definition language (DDL). Depending on the authorization method,
         * use one of the following combinations of request parameters: </p> <ul> <li>
         * <p>Secrets Manager - when connecting to a cluster, specify the Amazon Resource
         * Name (ARN) of the secret, the database name, and the cluster identifier that
         * matches the cluster in the secret. When connecting to a serverless workgroup,
         * specify the Amazon Resource Name (ARN) of the secret and the database name. </p>
         * </li> <li> <p>Temporary credentials - when connecting to a cluster, specify the
         * cluster identifier, the database name, and the database user name. Also,
         * permission to call the <code>redshift:GetClusterCredentials</code> operation is
         * required. When connecting to a serverless workgroup, specify the workgroup name
         * and database name. Also, permission to call the
         * <code>redshift-serverless:GetCredentials</code> operation is required. </p>
         * </li> </ul> <p>For more information about the Amazon Redshift Data API and CLI
         * usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/BatchExecuteStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchExecuteStatementOutcome BatchExecuteStatement(const Model::BatchExecuteStatementRequest& request) const;

        /**
         * A Callable wrapper for BatchExecuteStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchExecuteStatementOutcomeCallable BatchExecuteStatementCallable(const Model::BatchExecuteStatementRequest& request) const;

        /**
         * An Async wrapper for BatchExecuteStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchExecuteStatementAsync(const Model::BatchExecuteStatementRequest& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a running query. To be canceled, a query must be running. </p> <p>For
         * more information about the Amazon Redshift Data API and CLI usage examples, see
         * <a href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using
         * the Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/CancelStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelStatementOutcome CancelStatement(const Model::CancelStatementRequest& request) const;

        /**
         * A Callable wrapper for CancelStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelStatementOutcomeCallable CancelStatementCallable(const Model::CancelStatementRequest& request) const;

        /**
         * An Async wrapper for CancelStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelStatementAsync(const Model::CancelStatementRequest& request, const CancelStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the details about a specific instance when a query was run by the
         * Amazon Redshift Data API. The information includes when the query started, when
         * it finished, the query status, the number of rows returned, and the SQL
         * statement. </p> <p>For more information about the Amazon Redshift Data API and
         * CLI usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/DescribeStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStatementOutcome DescribeStatement(const Model::DescribeStatementRequest& request) const;

        /**
         * A Callable wrapper for DescribeStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStatementOutcomeCallable DescribeStatementCallable(const Model::DescribeStatementRequest& request) const;

        /**
         * An Async wrapper for DescribeStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStatementAsync(const Model::DescribeStatementRequest& request, const DescribeStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the detailed information about a table from metadata in the
         * cluster. The information includes its columns. A token is returned to page
         * through the column list. Depending on the authorization method, use one of the
         * following combinations of request parameters: </p> <ul> <li> <p>Secrets Manager
         * - when connecting to a cluster, specify the Amazon Resource Name (ARN) of the
         * secret, the database name, and the cluster identifier that matches the cluster
         * in the secret. When connecting to a serverless workgroup, specify the Amazon
         * Resource Name (ARN) of the secret and the database name. </p> </li> <li>
         * <p>Temporary credentials - when connecting to a cluster, specify the cluster
         * identifier, the database name, and the database user name. Also, permission to
         * call the <code>redshift:GetClusterCredentials</code> operation is required. When
         * connecting to a serverless workgroup, specify the workgroup name and database
         * name. Also, permission to call the
         * <code>redshift-serverless:GetCredentials</code> operation is required. </p>
         * </li> </ul> <p>For more information about the Amazon Redshift Data API and CLI
         * usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/DescribeTable">AWS
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
         * <p>Runs an SQL statement, which can be data manipulation language (DML) or data
         * definition language (DDL). This statement must be a single SQL statement.
         * Depending on the authorization method, use one of the following combinations of
         * request parameters: </p> <ul> <li> <p>Secrets Manager - when connecting to a
         * cluster, specify the Amazon Resource Name (ARN) of the secret, the database
         * name, and the cluster identifier that matches the cluster in the secret. When
         * connecting to a serverless workgroup, specify the Amazon Resource Name (ARN) of
         * the secret and the database name. </p> </li> <li> <p>Temporary credentials -
         * when connecting to a cluster, specify the cluster identifier, the database name,
         * and the database user name. Also, permission to call the
         * <code>redshift:GetClusterCredentials</code> operation is required. When
         * connecting to a serverless workgroup, specify the workgroup name and database
         * name. Also, permission to call the
         * <code>redshift-serverless:GetCredentials</code> operation is required. </p>
         * </li> </ul> <p>For more information about the Amazon Redshift Data API and CLI
         * usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ExecuteStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteStatementOutcome ExecuteStatement(const Model::ExecuteStatementRequest& request) const;

        /**
         * A Callable wrapper for ExecuteStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecuteStatementOutcomeCallable ExecuteStatementCallable(const Model::ExecuteStatementRequest& request) const;

        /**
         * An Async wrapper for ExecuteStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExecuteStatementAsync(const Model::ExecuteStatementRequest& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Fetches the temporarily cached result of an SQL statement. A token is
         * returned to page through the statement results. </p> <p>For more information
         * about the Amazon Redshift Data API and CLI usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/GetStatementResult">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStatementResultOutcome GetStatementResult(const Model::GetStatementResultRequest& request) const;

        /**
         * A Callable wrapper for GetStatementResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStatementResultOutcomeCallable GetStatementResultCallable(const Model::GetStatementResultRequest& request) const;

        /**
         * An Async wrapper for GetStatementResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStatementResultAsync(const Model::GetStatementResultRequest& request, const GetStatementResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the databases in a cluster. A token is returned to page through the
         * database list. Depending on the authorization method, use one of the following
         * combinations of request parameters: </p> <ul> <li> <p>Secrets Manager - when
         * connecting to a cluster, specify the Amazon Resource Name (ARN) of the secret,
         * the database name, and the cluster identifier that matches the cluster in the
         * secret. When connecting to a serverless workgroup, specify the Amazon Resource
         * Name (ARN) of the secret and the database name. </p> </li> <li> <p>Temporary
         * credentials - when connecting to a cluster, specify the cluster identifier, the
         * database name, and the database user name. Also, permission to call the
         * <code>redshift:GetClusterCredentials</code> operation is required. When
         * connecting to a serverless workgroup, specify the workgroup name and database
         * name. Also, permission to call the
         * <code>redshift-serverless:GetCredentials</code> operation is required. </p>
         * </li> </ul> <p>For more information about the Amazon Redshift Data API and CLI
         * usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListDatabases">AWS
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
         * <p>Lists the schemas in a database. A token is returned to page through the
         * schema list. Depending on the authorization method, use one of the following
         * combinations of request parameters: </p> <ul> <li> <p>Secrets Manager - when
         * connecting to a cluster, specify the Amazon Resource Name (ARN) of the secret,
         * the database name, and the cluster identifier that matches the cluster in the
         * secret. When connecting to a serverless workgroup, specify the Amazon Resource
         * Name (ARN) of the secret and the database name. </p> </li> <li> <p>Temporary
         * credentials - when connecting to a cluster, specify the cluster identifier, the
         * database name, and the database user name. Also, permission to call the
         * <code>redshift:GetClusterCredentials</code> operation is required. When
         * connecting to a serverless workgroup, specify the workgroup name and database
         * name. Also, permission to call the
         * <code>redshift-serverless:GetCredentials</code> operation is required. </p>
         * </li> </ul> <p>For more information about the Amazon Redshift Data API and CLI
         * usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest& request) const;

        /**
         * A Callable wrapper for ListSchemas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchemasOutcomeCallable ListSchemasCallable(const Model::ListSchemasRequest& request) const;

        /**
         * An Async wrapper for ListSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemasAsync(const Model::ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List of SQL statements. By default, only finished statements are shown. A
         * token is returned to page through the statement list. </p> <p>For more
         * information about the Amazon Redshift Data API and CLI usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListStatements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStatementsOutcome ListStatements(const Model::ListStatementsRequest& request) const;

        /**
         * A Callable wrapper for ListStatements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStatementsOutcomeCallable ListStatementsCallable(const Model::ListStatementsRequest& request) const;

        /**
         * An Async wrapper for ListStatements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStatementsAsync(const Model::ListStatementsRequest& request, const ListStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the tables in a database. If neither <code>SchemaPattern</code> nor
         * <code>TablePattern</code> are specified, then all tables in the database are
         * returned. A token is returned to page through the table list. Depending on the
         * authorization method, use one of the following combinations of request
         * parameters: </p> <ul> <li> <p>Secrets Manager - when connecting to a cluster,
         * specify the Amazon Resource Name (ARN) of the secret, the database name, and the
         * cluster identifier that matches the cluster in the secret. When connecting to a
         * serverless workgroup, specify the Amazon Resource Name (ARN) of the secret and
         * the database name. </p> </li> <li> <p>Temporary credentials - when connecting to
         * a cluster, specify the cluster identifier, the database name, and the database
         * user name. Also, permission to call the
         * <code>redshift:GetClusterCredentials</code> operation is required. When
         * connecting to a serverless workgroup, specify the workgroup name and database
         * name. Also, permission to call the
         * <code>redshift-serverless:GetCredentials</code> operation is required. </p>
         * </li> </ul> <p>For more information about the Amazon Redshift Data API and CLI
         * usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListTables">AWS
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


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<RedshiftDataAPIServiceClient>;
      void init(const RedshiftDataAPIServiceClientConfiguration& clientConfiguration);

      RedshiftDataAPIServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace RedshiftDataAPIService
} // namespace Aws
