/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/athena/AthenaServiceClientModel.h>
#include <aws/athena/AthenaLegacyAsyncMacros.h>

namespace Aws
{
namespace Athena
{
  /**
   * <p>Amazon Athena is an interactive query service that lets you use standard SQL
   * to analyze data directly in Amazon S3. You can point Athena at your data in
   * Amazon S3 and run ad-hoc queries and get results in seconds. Athena is
   * serverless, so there is no infrastructure to set up or manage. You pay only for
   * the queries you run. Athena scales automatically—executing queries in
   * parallel—so results are fast, even with large datasets and complex queries. For
   * more information, see <a
   * href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon
   * Athena</a> in the <i>Amazon Athena User Guide</i>.</p> <p>If you connect to
   * Athena using the JDBC driver, use version 1.1.0 of the driver or later with the
   * Amazon Athena API. Earlier version drivers do not support the API. For more
   * information and to download the driver, see <a
   * href="https://docs.aws.amazon.com/athena/latest/ug/connect-with-jdbc.html">Accessing
   * Amazon Athena with JDBC</a>.</p> <p>For code samples using the Amazon Web
   * Services SDK for Java, see <a
   * href="https://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
   * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p>
   */
  class AWS_ATHENA_API AthenaClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AthenaClient(const Aws::Athena::AthenaClientConfiguration& clientConfiguration = Aws::Athena::AthenaClientConfiguration(),
                     std::shared_ptr<AthenaEndpointProviderBase> endpointProvider = Aws::MakeShared<AthenaEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AthenaClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<AthenaEndpointProviderBase> endpointProvider = Aws::MakeShared<AthenaEndpointProvider>(ALLOCATION_TAG),
                     const Aws::Athena::AthenaClientConfiguration& clientConfiguration = Aws::Athena::AthenaClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AthenaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<AthenaEndpointProviderBase> endpointProvider = Aws::MakeShared<AthenaEndpointProvider>(ALLOCATION_TAG),
                     const Aws::Athena::AthenaClientConfiguration& clientConfiguration = Aws::Athena::AthenaClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AthenaClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AthenaClient(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AthenaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AthenaClient();


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
         * <p>Returns the details of a single named query or a list of up to 50 queries,
         * which you provide as an array of query ID strings. Requires you to have access
         * to the workgroup in which the queries were saved. Use
         * <a>ListNamedQueriesInput</a> to get the list of named query IDs in the specified
         * workgroup. If information could not be retrieved for a submitted query ID,
         * information about the query ID submitted is listed under
         * <a>UnprocessedNamedQueryId</a>. Named queries differ from executed queries. Use
         * <a>BatchGetQueryExecutionInput</a> to get details about each unique query
         * execution, and <a>ListQueryExecutionsInput</a> to get a list of query execution
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/BatchGetNamedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetNamedQueryOutcome BatchGetNamedQuery(const Model::BatchGetNamedQueryRequest& request) const;


        /**
         * <p>Returns the details of a single prepared statement or a list of up to 256
         * prepared statements for the array of prepared statement names that you provide.
         * Requires you to have access to the workgroup to which the prepared statements
         * belong. If a prepared statement cannot be retrieved for the name specified, the
         * statement is listed in
         * <code>UnprocessedPreparedStatementNames</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/BatchGetPreparedStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetPreparedStatementOutcome BatchGetPreparedStatement(const Model::BatchGetPreparedStatementRequest& request) const;


        /**
         * <p>Returns the details of a single query execution or a list of up to 50 query
         * executions, which you provide as an array of query execution ID strings.
         * Requires you to have access to the workgroup in which the queries ran. To get a
         * list of query execution IDs, use <a>ListQueryExecutionsInput$WorkGroup</a>.
         * Query executions differ from named (saved) queries. Use
         * <a>BatchGetNamedQueryInput</a> to get details about named queries.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/BatchGetQueryExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetQueryExecutionOutcome BatchGetQueryExecution(const Model::BatchGetQueryExecutionRequest& request) const;


        /**
         * <p>Creates (registers) a data catalog with the specified name and properties.
         * Catalogs created are visible to all users of the same Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateDataCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataCatalogOutcome CreateDataCatalog(const Model::CreateDataCatalogRequest& request) const;


        /**
         * <p>Creates a named query in the specified workgroup. Requires that you have
         * access to the workgroup.</p> <p>For code samples using the Amazon Web Services
         * SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateNamedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNamedQueryOutcome CreateNamedQuery(const Model::CreateNamedQueryRequest& request) const;


        /**
         * <p>Creates a prepared statement for use with SQL queries in
         * Athena.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreatePreparedStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePreparedStatementOutcome CreatePreparedStatement(const Model::CreatePreparedStatementRequest& request) const;


        /**
         * <p>Creates a workgroup with the specified name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateWorkGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkGroupOutcome CreateWorkGroup(const Model::CreateWorkGroupRequest& request) const;


        /**
         * <p>Deletes a data catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteDataCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataCatalogOutcome DeleteDataCatalog(const Model::DeleteDataCatalogRequest& request) const;


        /**
         * <p>Deletes the named query if you have access to the workgroup in which the
         * query was saved.</p> <p>For code samples using the Amazon Web Services SDK for
         * Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteNamedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNamedQueryOutcome DeleteNamedQuery(const Model::DeleteNamedQueryRequest& request) const;


        /**
         * <p>Deletes the prepared statement with the specified name from the specified
         * workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeletePreparedStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePreparedStatementOutcome DeletePreparedStatement(const Model::DeletePreparedStatementRequest& request) const;


        /**
         * <p>Deletes the workgroup with the specified name. The primary workgroup cannot
         * be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteWorkGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkGroupOutcome DeleteWorkGroup(const Model::DeleteWorkGroupRequest& request) const;


        /**
         * <p>Returns the specified data catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetDataCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataCatalogOutcome GetDataCatalog(const Model::GetDataCatalogRequest& request) const;


        /**
         * <p>Returns a database object for the specified database and data
         * catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatabaseOutcome GetDatabase(const Model::GetDatabaseRequest& request) const;


        /**
         * <p>Returns information about a single query. Requires that you have access to
         * the workgroup in which the query was saved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetNamedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNamedQueryOutcome GetNamedQuery(const Model::GetNamedQueryRequest& request) const;


        /**
         * <p>Retrieves the prepared statement with the specified name from the specified
         * workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetPreparedStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPreparedStatementOutcome GetPreparedStatement(const Model::GetPreparedStatementRequest& request) const;


        /**
         * <p>Returns information about a single execution of a query if you have access to
         * the workgroup in which the query ran. Each time a query executes, information
         * about the query execution is saved with a unique ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetQueryExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryExecutionOutcome GetQueryExecution(const Model::GetQueryExecutionRequest& request) const;


        /**
         * <p>Streams the results of a single query execution specified by
         * <code>QueryExecutionId</code> from the Athena query results location in Amazon
         * S3. For more information, see <a
         * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Query
         * Results</a> in the <i>Amazon Athena User Guide</i>. This request does not
         * execute the query but returns results. Use <a>StartQueryExecution</a> to run a
         * query.</p> <p>To stream query results successfully, the IAM principal with
         * permission to call <code>GetQueryResults</code> also must have permissions to
         * the Amazon S3 <code>GetObject</code> action for the Athena query results
         * location.</p>  <p>IAM principals with permission to the Amazon S3
         * <code>GetObject</code> action for the query results location are able to
         * retrieve query results from Amazon S3 even if permission to the
         * <code>GetQueryResults</code> action is denied. To restrict user or role access,
         * ensure that Amazon S3 permissions to the Athena query location are denied.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetQueryResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryResultsOutcome GetQueryResults(const Model::GetQueryResultsRequest& request) const;


        /**
         * <p>Returns query execution runtime statistics related to a single execution of a
         * query if you have access to the workgroup in which the query ran. The query
         * execution runtime statistics is returned only when
         * <a>QueryExecutionStatus$State</a> is in a SUCCEEDED or FAILED
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetQueryRuntimeStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryRuntimeStatisticsOutcome GetQueryRuntimeStatistics(const Model::GetQueryRuntimeStatisticsRequest& request) const;


        /**
         * <p>Returns table metadata for the specified catalog, database, and
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetTableMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableMetadataOutcome GetTableMetadata(const Model::GetTableMetadataRequest& request) const;


        /**
         * <p>Returns information about the workgroup with the specified
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetWorkGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkGroupOutcome GetWorkGroup(const Model::GetWorkGroupRequest& request) const;


        /**
         * <p>Lists the data catalogs in the current Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListDataCatalogs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataCatalogsOutcome ListDataCatalogs(const Model::ListDataCatalogsRequest& request) const;


        /**
         * <p>Lists the databases in the specified data catalog.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatabasesOutcome ListDatabases(const Model::ListDatabasesRequest& request) const;


        /**
         * <p>Returns a list of engine versions that are available to choose from,
         * including the Auto option.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEngineVersionsOutcome ListEngineVersions(const Model::ListEngineVersionsRequest& request) const;


        /**
         * <p>Provides a list of available query IDs only for queries saved in the
         * specified workgroup. Requires that you have access to the specified workgroup.
         * If a workgroup is not specified, lists the saved queries for the primary
         * workgroup.</p> <p>For code samples using the Amazon Web Services SDK for Java,
         * see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListNamedQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNamedQueriesOutcome ListNamedQueries(const Model::ListNamedQueriesRequest& request) const;


        /**
         * <p>Lists the prepared statements in the specified workgroup.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListPreparedStatements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPreparedStatementsOutcome ListPreparedStatements(const Model::ListPreparedStatementsRequest& request) const;


        /**
         * <p>Provides a list of available query execution IDs for the queries in the
         * specified workgroup. If a workgroup is not specified, returns a list of query
         * execution IDs for the primary workgroup. Requires you to have access to the
         * workgroup in which the queries ran.</p> <p>For code samples using the Amazon Web
         * Services SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListQueryExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueryExecutionsOutcome ListQueryExecutions(const Model::ListQueryExecutionsRequest& request) const;


        /**
         * <p>Lists the metadata for the tables in the specified data catalog
         * database.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListTableMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTableMetadataOutcome ListTableMetadata(const Model::ListTableMetadataRequest& request) const;


        /**
         * <p>Lists the tags associated with an Athena workgroup or data catalog
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists available workgroups for the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListWorkGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkGroupsOutcome ListWorkGroups(const Model::ListWorkGroupsRequest& request) const;


        /**
         * <p>Runs the SQL query statements contained in the <code>Query</code>. Requires
         * you to have access to the workgroup in which the query ran. Running queries
         * against an external catalog requires <a>GetDataCatalog</a> permission to the
         * catalog. For code samples using the Amazon Web Services SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/StartQueryExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartQueryExecutionOutcome StartQueryExecution(const Model::StartQueryExecutionRequest& request) const;


        /**
         * <p>Stops a query execution. Requires you to have access to the workgroup in
         * which the query ran.</p> <p>For code samples using the Amazon Web Services SDK
         * for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/StopQueryExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopQueryExecutionOutcome StopQueryExecution(const Model::StopQueryExecutionRequest& request) const;


        /**
         * <p>Adds one or more tags to an Athena resource. A tag is a label that you assign
         * to a resource. In Athena, a resource can be a workgroup or data catalog. Each
         * tag consists of a key and an optional value, both of which you define. For
         * example, you can use tags to categorize Athena workgroups or data catalogs by
         * purpose, owner, or environment. Use a consistent set of tag keys to make it
         * easier to search and filter workgroups or data catalogs in your account. For
         * best practices, see <a
         * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">Tagging
         * Best Practices</a>. Tag keys can be from 1 to 128 UTF-8 Unicode characters, and
         * tag values can be from 0 to 256 UTF-8 Unicode characters. Tags can use letters
         * and numbers representable in UTF-8, and the following characters: + - = . _ : /
         * @. Tag keys and values are case-sensitive. Tag keys must be unique per resource.
         * If you specify more than one tag, separate them by commas.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes one or more tags from a data catalog or workgroup
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the data catalog that has the specified name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateDataCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataCatalogOutcome UpdateDataCatalog(const Model::UpdateDataCatalogRequest& request) const;


        /**
         * <p>Updates a <a>NamedQuery</a> object. The database or workgroup cannot be
         * updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateNamedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNamedQueryOutcome UpdateNamedQuery(const Model::UpdateNamedQueryRequest& request) const;


        /**
         * <p>Updates a prepared statement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdatePreparedStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePreparedStatementOutcome UpdatePreparedStatement(const Model::UpdatePreparedStatementRequest& request) const;


        /**
         * <p>Updates the workgroup with the specified name. The workgroup's name cannot be
         * changed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateWorkGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkGroupOutcome UpdateWorkGroup(const Model::UpdateWorkGroupRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AthenaEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const AthenaClientConfiguration& clientConfiguration);

      AthenaClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AthenaEndpointProviderBase> m_endpointProvider;
  };

} // namespace Athena
} // namespace Aws
