/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-data/RedshiftDataAPIServiceServiceClientModel.h>
#include <aws/redshift-data/RedshiftDataAPIServiceLegacyAsyncMacros.h>

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
   * Amazon Redshift Data API</a> in the <i>Amazon Redshift Cluster Management
   * Guide</i>. </p>
   */
  class AWS_REDSHIFTDATAAPISERVICE_API RedshiftDataAPIServiceClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/BatchExecuteStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchExecuteStatementOutcome BatchExecuteStatement(const Model::BatchExecuteStatementRequest& request) const;


        /**
         * <p>Cancels a running query. To be canceled, a query must be running.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/CancelStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelStatementOutcome CancelStatement(const Model::CancelStatementRequest& request) const;


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
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/DescribeTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest& request) const;


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
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ExecuteStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteStatementOutcome ExecuteStatement(const Model::ExecuteStatementRequest& request) const;


        /**
         * <p>Fetches the temporarily cached result of an SQL statement. A token is
         * returned to page through the statement results. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/GetStatementResult">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStatementResultOutcome GetStatementResult(const Model::GetStatementResultRequest& request) const;


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
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatabasesOutcome ListDatabases(const Model::ListDatabasesRequest& request) const;


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
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest& request) const;


        /**
         * <p>List of SQL statements. By default, only finished statements are shown. A
         * token is returned to page through the statement list. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListStatements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStatementsOutcome ListStatements(const Model::ListStatementsRequest& request) const;


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
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const RedshiftDataAPIServiceClientConfiguration& clientConfiguration);

      RedshiftDataAPIServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace RedshiftDataAPIService
} // namespace Aws
