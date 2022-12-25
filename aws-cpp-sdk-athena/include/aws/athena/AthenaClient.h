/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/athena/AthenaServiceClientModel.h>

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
  class AWS_ATHENA_API AthenaClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AthenaClient>
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
         * A Callable wrapper for BatchGetNamedQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetNamedQueryOutcomeCallable BatchGetNamedQueryCallable(const Model::BatchGetNamedQueryRequest& request) const;

        /**
         * An Async wrapper for BatchGetNamedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetNamedQueryAsync(const Model::BatchGetNamedQueryRequest& request, const BatchGetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for BatchGetPreparedStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetPreparedStatementOutcomeCallable BatchGetPreparedStatementCallable(const Model::BatchGetPreparedStatementRequest& request) const;

        /**
         * An Async wrapper for BatchGetPreparedStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetPreparedStatementAsync(const Model::BatchGetPreparedStatementRequest& request, const BatchGetPreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for BatchGetQueryExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetQueryExecutionOutcomeCallable BatchGetQueryExecutionCallable(const Model::BatchGetQueryExecutionRequest& request) const;

        /**
         * An Async wrapper for BatchGetQueryExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetQueryExecutionAsync(const Model::BatchGetQueryExecutionRequest& request, const BatchGetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates (registers) a data catalog with the specified name and properties.
         * Catalogs created are visible to all users of the same Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateDataCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataCatalogOutcome CreateDataCatalog(const Model::CreateDataCatalogRequest& request) const;

        /**
         * A Callable wrapper for CreateDataCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataCatalogOutcomeCallable CreateDataCatalogCallable(const Model::CreateDataCatalogRequest& request) const;

        /**
         * An Async wrapper for CreateDataCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataCatalogAsync(const Model::CreateDataCatalogRequest& request, const CreateDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateNamedQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNamedQueryOutcomeCallable CreateNamedQueryCallable(const Model::CreateNamedQueryRequest& request) const;

        /**
         * An Async wrapper for CreateNamedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNamedQueryAsync(const Model::CreateNamedQueryRequest& request, const CreateNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty <code>ipynb</code> file in the specified Apache Spark
         * enabled workgroup. Throws an error if a file in the workgroup with the same name
         * already exists.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateNotebook">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotebookOutcome CreateNotebook(const Model::CreateNotebookRequest& request) const;

        /**
         * A Callable wrapper for CreateNotebook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNotebookOutcomeCallable CreateNotebookCallable(const Model::CreateNotebookRequest& request) const;

        /**
         * An Async wrapper for CreateNotebook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNotebookAsync(const Model::CreateNotebookRequest& request, const CreateNotebookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a prepared statement for use with SQL queries in
         * Athena.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreatePreparedStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePreparedStatementOutcome CreatePreparedStatement(const Model::CreatePreparedStatementRequest& request) const;

        /**
         * A Callable wrapper for CreatePreparedStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePreparedStatementOutcomeCallable CreatePreparedStatementCallable(const Model::CreatePreparedStatementRequest& request) const;

        /**
         * An Async wrapper for CreatePreparedStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePreparedStatementAsync(const Model::CreatePreparedStatementRequest& request, const CreatePreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an authentication token and the URL at which the notebook can be
         * accessed. During programmatic access, <code>CreatePresignedNotebookUrl</code>
         * must be called every 10 minutes to refresh the authentication
         * token.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreatePresignedNotebookUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresignedNotebookUrlOutcome CreatePresignedNotebookUrl(const Model::CreatePresignedNotebookUrlRequest& request) const;

        /**
         * A Callable wrapper for CreatePresignedNotebookUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePresignedNotebookUrlOutcomeCallable CreatePresignedNotebookUrlCallable(const Model::CreatePresignedNotebookUrlRequest& request) const;

        /**
         * An Async wrapper for CreatePresignedNotebookUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePresignedNotebookUrlAsync(const Model::CreatePresignedNotebookUrlRequest& request, const CreatePresignedNotebookUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a workgroup with the specified name. Only one of
         * <code>Configurations</code> or <code>Configuration</code> can be specified;
         * <code>Configurations</code> for a workgroup with multi engine support (for
         * example, an Apache Spark enabled workgroup) or <code>Configuration</code> for an
         * Athena SQL workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateWorkGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkGroupOutcome CreateWorkGroup(const Model::CreateWorkGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkGroupOutcomeCallable CreateWorkGroupCallable(const Model::CreateWorkGroupRequest& request) const;

        /**
         * An Async wrapper for CreateWorkGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkGroupAsync(const Model::CreateWorkGroupRequest& request, const CreateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a data catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteDataCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataCatalogOutcome DeleteDataCatalog(const Model::DeleteDataCatalogRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataCatalogOutcomeCallable DeleteDataCatalogCallable(const Model::DeleteDataCatalogRequest& request) const;

        /**
         * An Async wrapper for DeleteDataCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataCatalogAsync(const Model::DeleteDataCatalogRequest& request, const DeleteDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DeleteNamedQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNamedQueryOutcomeCallable DeleteNamedQueryCallable(const Model::DeleteNamedQueryRequest& request) const;

        /**
         * An Async wrapper for DeleteNamedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNamedQueryAsync(const Model::DeleteNamedQueryRequest& request, const DeleteNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified notebook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteNotebook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotebookOutcome DeleteNotebook(const Model::DeleteNotebookRequest& request) const;

        /**
         * A Callable wrapper for DeleteNotebook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotebookOutcomeCallable DeleteNotebookCallable(const Model::DeleteNotebookRequest& request) const;

        /**
         * An Async wrapper for DeleteNotebook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotebookAsync(const Model::DeleteNotebookRequest& request, const DeleteNotebookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the prepared statement with the specified name from the specified
         * workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeletePreparedStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePreparedStatementOutcome DeletePreparedStatement(const Model::DeletePreparedStatementRequest& request) const;

        /**
         * A Callable wrapper for DeletePreparedStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePreparedStatementOutcomeCallable DeletePreparedStatementCallable(const Model::DeletePreparedStatementRequest& request) const;

        /**
         * An Async wrapper for DeletePreparedStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePreparedStatementAsync(const Model::DeletePreparedStatementRequest& request, const DeletePreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the workgroup with the specified name. The primary workgroup cannot
         * be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteWorkGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkGroupOutcome DeleteWorkGroup(const Model::DeleteWorkGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkGroupOutcomeCallable DeleteWorkGroupCallable(const Model::DeleteWorkGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteWorkGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkGroupAsync(const Model::DeleteWorkGroupRequest& request, const DeleteWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports the specified notebook and its metadata.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ExportNotebook">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportNotebookOutcome ExportNotebook(const Model::ExportNotebookRequest& request) const;

        /**
         * A Callable wrapper for ExportNotebook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportNotebookOutcomeCallable ExportNotebookCallable(const Model::ExportNotebookRequest& request) const;

        /**
         * An Async wrapper for ExportNotebook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportNotebookAsync(const Model::ExportNotebookRequest& request, const ExportNotebookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a previously submitted calculation execution.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetCalculationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCalculationExecutionOutcome GetCalculationExecution(const Model::GetCalculationExecutionRequest& request) const;

        /**
         * A Callable wrapper for GetCalculationExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCalculationExecutionOutcomeCallable GetCalculationExecutionCallable(const Model::GetCalculationExecutionRequest& request) const;

        /**
         * An Async wrapper for GetCalculationExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCalculationExecutionAsync(const Model::GetCalculationExecutionRequest& request, const GetCalculationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a pre-signed URL to a copy of the code that was executed for the
         * calculation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetCalculationExecutionCode">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCalculationExecutionCodeOutcome GetCalculationExecutionCode(const Model::GetCalculationExecutionCodeRequest& request) const;

        /**
         * A Callable wrapper for GetCalculationExecutionCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCalculationExecutionCodeOutcomeCallable GetCalculationExecutionCodeCallable(const Model::GetCalculationExecutionCodeRequest& request) const;

        /**
         * An Async wrapper for GetCalculationExecutionCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCalculationExecutionCodeAsync(const Model::GetCalculationExecutionCodeRequest& request, const GetCalculationExecutionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the status of a current calculation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetCalculationExecutionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCalculationExecutionStatusOutcome GetCalculationExecutionStatus(const Model::GetCalculationExecutionStatusRequest& request) const;

        /**
         * A Callable wrapper for GetCalculationExecutionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCalculationExecutionStatusOutcomeCallable GetCalculationExecutionStatusCallable(const Model::GetCalculationExecutionStatusRequest& request) const;

        /**
         * An Async wrapper for GetCalculationExecutionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCalculationExecutionStatusAsync(const Model::GetCalculationExecutionStatusRequest& request, const GetCalculationExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the specified data catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetDataCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataCatalogOutcome GetDataCatalog(const Model::GetDataCatalogRequest& request) const;

        /**
         * A Callable wrapper for GetDataCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataCatalogOutcomeCallable GetDataCatalogCallable(const Model::GetDataCatalogRequest& request) const;

        /**
         * An Async wrapper for GetDataCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataCatalogAsync(const Model::GetDataCatalogRequest& request, const GetDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a database object for the specified database and data
         * catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatabaseOutcome GetDatabase(const Model::GetDatabaseRequest& request) const;

        /**
         * A Callable wrapper for GetDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDatabaseOutcomeCallable GetDatabaseCallable(const Model::GetDatabaseRequest& request) const;

        /**
         * An Async wrapper for GetDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDatabaseAsync(const Model::GetDatabaseRequest& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a single query. Requires that you have access to
         * the workgroup in which the query was saved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetNamedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNamedQueryOutcome GetNamedQuery(const Model::GetNamedQueryRequest& request) const;

        /**
         * A Callable wrapper for GetNamedQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNamedQueryOutcomeCallable GetNamedQueryCallable(const Model::GetNamedQueryRequest& request) const;

        /**
         * An Async wrapper for GetNamedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNamedQueryAsync(const Model::GetNamedQueryRequest& request, const GetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves notebook metadata for the specified notebook ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetNotebookMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNotebookMetadataOutcome GetNotebookMetadata(const Model::GetNotebookMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetNotebookMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNotebookMetadataOutcomeCallable GetNotebookMetadataCallable(const Model::GetNotebookMetadataRequest& request) const;

        /**
         * An Async wrapper for GetNotebookMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNotebookMetadataAsync(const Model::GetNotebookMetadataRequest& request, const GetNotebookMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the prepared statement with the specified name from the specified
         * workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetPreparedStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPreparedStatementOutcome GetPreparedStatement(const Model::GetPreparedStatementRequest& request) const;

        /**
         * A Callable wrapper for GetPreparedStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPreparedStatementOutcomeCallable GetPreparedStatementCallable(const Model::GetPreparedStatementRequest& request) const;

        /**
         * An Async wrapper for GetPreparedStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPreparedStatementAsync(const Model::GetPreparedStatementRequest& request, const GetPreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for GetQueryExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueryExecutionOutcomeCallable GetQueryExecutionCallable(const Model::GetQueryExecutionRequest& request) const;

        /**
         * An Async wrapper for GetQueryExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueryExecutionAsync(const Model::GetQueryExecutionRequest& request, const GetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for GetQueryResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueryResultsOutcomeCallable GetQueryResultsCallable(const Model::GetQueryResultsRequest& request) const;

        /**
         * An Async wrapper for GetQueryResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueryResultsAsync(const Model::GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns query execution runtime statistics related to a single execution of a
         * query if you have access to the workgroup in which the query ran. Query
         * execution runtime statistics are returned only when
         * <a>QueryExecutionStatus$State</a> is in a SUCCEEDED or FAILED state. Stage-level
         * input and output row count and data size statistics are not shown when a query
         * has row-level filters defined in Lake Formation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetQueryRuntimeStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryRuntimeStatisticsOutcome GetQueryRuntimeStatistics(const Model::GetQueryRuntimeStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetQueryRuntimeStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueryRuntimeStatisticsOutcomeCallable GetQueryRuntimeStatisticsCallable(const Model::GetQueryRuntimeStatisticsRequest& request) const;

        /**
         * An Async wrapper for GetQueryRuntimeStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueryRuntimeStatisticsAsync(const Model::GetQueryRuntimeStatisticsRequest& request, const GetQueryRuntimeStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the full details of a previously created session, including the session
         * status and configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionOutcome GetSession(const Model::GetSessionRequest& request) const;

        /**
         * A Callable wrapper for GetSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSessionOutcomeCallable GetSessionCallable(const Model::GetSessionRequest& request) const;

        /**
         * An Async wrapper for GetSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSessionAsync(const Model::GetSessionRequest& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the current status of a session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetSessionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionStatusOutcome GetSessionStatus(const Model::GetSessionStatusRequest& request) const;

        /**
         * A Callable wrapper for GetSessionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSessionStatusOutcomeCallable GetSessionStatusCallable(const Model::GetSessionStatusRequest& request) const;

        /**
         * An Async wrapper for GetSessionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSessionStatusAsync(const Model::GetSessionStatusRequest& request, const GetSessionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns table metadata for the specified catalog, database, and
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetTableMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableMetadataOutcome GetTableMetadata(const Model::GetTableMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetTableMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTableMetadataOutcomeCallable GetTableMetadataCallable(const Model::GetTableMetadataRequest& request) const;

        /**
         * An Async wrapper for GetTableMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTableMetadataAsync(const Model::GetTableMetadataRequest& request, const GetTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the workgroup with the specified
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetWorkGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkGroupOutcome GetWorkGroup(const Model::GetWorkGroupRequest& request) const;

        /**
         * A Callable wrapper for GetWorkGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkGroupOutcomeCallable GetWorkGroupCallable(const Model::GetWorkGroupRequest& request) const;

        /**
         * An Async wrapper for GetWorkGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkGroupAsync(const Model::GetWorkGroupRequest& request, const GetWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports a single <code>ipynb</code> file to a Spark enabled workgroup. The
         * maximum file size that can be imported is 10 megabytes. If an <code>ipynb</code>
         * file with the same name already exists in the workgroup, throws an
         * error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ImportNotebook">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportNotebookOutcome ImportNotebook(const Model::ImportNotebookRequest& request) const;

        /**
         * A Callable wrapper for ImportNotebook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportNotebookOutcomeCallable ImportNotebookCallable(const Model::ImportNotebookRequest& request) const;

        /**
         * An Async wrapper for ImportNotebook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportNotebookAsync(const Model::ImportNotebookRequest& request, const ImportNotebookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the supported DPU sizes for the supported application runtimes (for
         * example, <code>Jupyter 1.0</code>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListApplicationDPUSizes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationDPUSizesOutcome ListApplicationDPUSizes(const Model::ListApplicationDPUSizesRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationDPUSizes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationDPUSizesOutcomeCallable ListApplicationDPUSizesCallable(const Model::ListApplicationDPUSizesRequest& request) const;

        /**
         * An Async wrapper for ListApplicationDPUSizes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationDPUSizesAsync(const Model::ListApplicationDPUSizesRequest& request, const ListApplicationDPUSizesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the calculations that have been submitted to a session in descending
         * order. Newer calculations are listed first; older calculations are listed
         * later.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListCalculationExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCalculationExecutionsOutcome ListCalculationExecutions(const Model::ListCalculationExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListCalculationExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCalculationExecutionsOutcomeCallable ListCalculationExecutionsCallable(const Model::ListCalculationExecutionsRequest& request) const;

        /**
         * An Async wrapper for ListCalculationExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCalculationExecutionsAsync(const Model::ListCalculationExecutionsRequest& request, const ListCalculationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the data catalogs in the current Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListDataCatalogs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataCatalogsOutcome ListDataCatalogs(const Model::ListDataCatalogsRequest& request) const;

        /**
         * A Callable wrapper for ListDataCatalogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataCatalogsOutcomeCallable ListDataCatalogsCallable(const Model::ListDataCatalogsRequest& request) const;

        /**
         * An Async wrapper for ListDataCatalogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataCatalogsAsync(const Model::ListDataCatalogsRequest& request, const ListDataCatalogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the databases in the specified data catalog.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListDatabases">AWS
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
         * <p>Returns a list of engine versions that are available to choose from,
         * including the Auto option.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEngineVersionsOutcome ListEngineVersions(const Model::ListEngineVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListEngineVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEngineVersionsOutcomeCallable ListEngineVersionsCallable(const Model::ListEngineVersionsRequest& request) const;

        /**
         * An Async wrapper for ListEngineVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEngineVersionsAsync(const Model::ListEngineVersionsRequest& request, const ListEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists, in descending order, the executors that have been submitted to a
         * session. Newer executors are listed first; older executors are listed later. The
         * result can be optionally filtered by state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListExecutors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExecutorsOutcome ListExecutors(const Model::ListExecutorsRequest& request) const;

        /**
         * A Callable wrapper for ListExecutors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExecutorsOutcomeCallable ListExecutorsCallable(const Model::ListExecutorsRequest& request) const;

        /**
         * An Async wrapper for ListExecutors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExecutorsAsync(const Model::ListExecutorsRequest& request, const ListExecutorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListNamedQueries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNamedQueriesOutcomeCallable ListNamedQueriesCallable(const Model::ListNamedQueriesRequest& request) const;

        /**
         * An Async wrapper for ListNamedQueries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNamedQueriesAsync(const Model::ListNamedQueriesRequest& request, const ListNamedQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the notebook files for the specified workgroup in paginated
         * format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListNotebookMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotebookMetadataOutcome ListNotebookMetadata(const Model::ListNotebookMetadataRequest& request) const;

        /**
         * A Callable wrapper for ListNotebookMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotebookMetadataOutcomeCallable ListNotebookMetadataCallable(const Model::ListNotebookMetadataRequest& request) const;

        /**
         * An Async wrapper for ListNotebookMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotebookMetadataAsync(const Model::ListNotebookMetadataRequest& request, const ListNotebookMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists, in descending order, the sessions that have been created in a notebook
         * that are in an active state like <code>CREATING</code>, <code>CREATED</code>,
         * <code>IDLE</code> or <code>BUSY</code>. Newer sessions are listed first; older
         * sessions are listed later.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListNotebookSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotebookSessionsOutcome ListNotebookSessions(const Model::ListNotebookSessionsRequest& request) const;

        /**
         * A Callable wrapper for ListNotebookSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotebookSessionsOutcomeCallable ListNotebookSessionsCallable(const Model::ListNotebookSessionsRequest& request) const;

        /**
         * An Async wrapper for ListNotebookSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotebookSessionsAsync(const Model::ListNotebookSessionsRequest& request, const ListNotebookSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the prepared statements in the specified workgroup.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListPreparedStatements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPreparedStatementsOutcome ListPreparedStatements(const Model::ListPreparedStatementsRequest& request) const;

        /**
         * A Callable wrapper for ListPreparedStatements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPreparedStatementsOutcomeCallable ListPreparedStatementsCallable(const Model::ListPreparedStatementsRequest& request) const;

        /**
         * An Async wrapper for ListPreparedStatements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPreparedStatementsAsync(const Model::ListPreparedStatementsRequest& request, const ListPreparedStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListQueryExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQueryExecutionsOutcomeCallable ListQueryExecutionsCallable(const Model::ListQueryExecutionsRequest& request) const;

        /**
         * An Async wrapper for ListQueryExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQueryExecutionsAsync(const Model::ListQueryExecutionsRequest& request, const ListQueryExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the sessions in a workgroup that are in an active state like
         * <code>CREATING</code>, <code>CREATED</code>, <code>IDLE</code>, or
         * <code>BUSY</code>. Newer sessions are listed first; older sessions are listed
         * later.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSessionsOutcome ListSessions(const Model::ListSessionsRequest& request) const;

        /**
         * A Callable wrapper for ListSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSessionsOutcomeCallable ListSessionsCallable(const Model::ListSessionsRequest& request) const;

        /**
         * An Async wrapper for ListSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSessionsAsync(const Model::ListSessionsRequest& request, const ListSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the metadata for the tables in the specified data catalog
         * database.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListTableMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTableMetadataOutcome ListTableMetadata(const Model::ListTableMetadataRequest& request) const;

        /**
         * A Callable wrapper for ListTableMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTableMetadataOutcomeCallable ListTableMetadataCallable(const Model::ListTableMetadataRequest& request) const;

        /**
         * An Async wrapper for ListTableMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTableMetadataAsync(const Model::ListTableMetadataRequest& request, const ListTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags associated with an Athena workgroup or data catalog
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListTagsForResource">AWS
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
         * <p>Lists available workgroups for the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListWorkGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkGroupsOutcome ListWorkGroups(const Model::ListWorkGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkGroupsOutcomeCallable ListWorkGroupsCallable(const Model::ListWorkGroupsRequest& request) const;

        /**
         * An Async wrapper for ListWorkGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkGroupsAsync(const Model::ListWorkGroupsRequest& request, const ListWorkGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Submits calculations for execution within a session. You can supply the code
         * to run as an inline code block within the request or as an Amazon S3
         * URL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/StartCalculationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCalculationExecutionOutcome StartCalculationExecution(const Model::StartCalculationExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartCalculationExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartCalculationExecutionOutcomeCallable StartCalculationExecutionCallable(const Model::StartCalculationExecutionRequest& request) const;

        /**
         * An Async wrapper for StartCalculationExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartCalculationExecutionAsync(const Model::StartCalculationExecutionRequest& request, const StartCalculationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for StartQueryExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartQueryExecutionOutcomeCallable StartQueryExecutionCallable(const Model::StartQueryExecutionRequest& request) const;

        /**
         * An Async wrapper for StartQueryExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartQueryExecutionAsync(const Model::StartQueryExecutionRequest& request, const StartQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a session for running calculations within a workgroup. The session is
         * ready when it reaches an <code>IDLE</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/StartSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSessionOutcome StartSession(const Model::StartSessionRequest& request) const;

        /**
         * A Callable wrapper for StartSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSessionOutcomeCallable StartSessionCallable(const Model::StartSessionRequest& request) const;

        /**
         * An Async wrapper for StartSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSessionAsync(const Model::StartSessionRequest& request, const StartSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests the cancellation of a calculation. A
         * <code>StopCalculationExecution</code> call on a calculation that is already in a
         * terminal state (for example, <code>STOPPED</code>, <code>FAILED</code>, or
         * <code>COMPLETED</code>) succeeds but has no effect.</p>  <p>Cancelling a
         * calculation is done on a best effort basis. If a calculation cannot be
         * cancelled, you can be charged for its completion. If you are concerned about
         * being charged for a calculation that cannot be cancelled, consider terminating
         * the session in which the calculation is running.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/StopCalculationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCalculationExecutionOutcome StopCalculationExecution(const Model::StopCalculationExecutionRequest& request) const;

        /**
         * A Callable wrapper for StopCalculationExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopCalculationExecutionOutcomeCallable StopCalculationExecutionCallable(const Model::StopCalculationExecutionRequest& request) const;

        /**
         * An Async wrapper for StopCalculationExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopCalculationExecutionAsync(const Model::StopCalculationExecutionRequest& request, const StopCalculationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for StopQueryExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopQueryExecutionOutcomeCallable StopQueryExecutionCallable(const Model::StopQueryExecutionRequest& request) const;

        /**
         * An Async wrapper for StopQueryExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopQueryExecutionAsync(const Model::StopQueryExecutionRequest& request, const StopQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Terminates an active session. A <code>TerminateSession</code> call on a
         * session that is already inactive (for example, in a <code>FAILED</code>,
         * <code>TERMINATED</code> or <code>TERMINATING</code> state) succeeds but has no
         * effect. Calculations running in the session when <code>TerminateSession</code>
         * is called are forcefully stopped, but may display as <code>FAILED</code> instead
         * of <code>STOPPED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/TerminateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateSessionOutcome TerminateSession(const Model::TerminateSessionRequest& request) const;

        /**
         * A Callable wrapper for TerminateSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateSessionOutcomeCallable TerminateSessionCallable(const Model::TerminateSessionRequest& request) const;

        /**
         * An Async wrapper for TerminateSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateSessionAsync(const Model::TerminateSessionRequest& request, const TerminateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from a data catalog or workgroup
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UntagResource">AWS
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
         * <p>Updates the data catalog that has the specified name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateDataCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataCatalogOutcome UpdateDataCatalog(const Model::UpdateDataCatalogRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataCatalogOutcomeCallable UpdateDataCatalogCallable(const Model::UpdateDataCatalogRequest& request) const;

        /**
         * An Async wrapper for UpdateDataCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataCatalogAsync(const Model::UpdateDataCatalogRequest& request, const UpdateDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a <a>NamedQuery</a> object. The database or workgroup cannot be
         * updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateNamedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNamedQueryOutcome UpdateNamedQuery(const Model::UpdateNamedQueryRequest& request) const;

        /**
         * A Callable wrapper for UpdateNamedQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNamedQueryOutcomeCallable UpdateNamedQueryCallable(const Model::UpdateNamedQueryRequest& request) const;

        /**
         * An Async wrapper for UpdateNamedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNamedQueryAsync(const Model::UpdateNamedQueryRequest& request, const UpdateNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the contents of a Spark notebook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateNotebook">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotebookOutcome UpdateNotebook(const Model::UpdateNotebookRequest& request) const;

        /**
         * A Callable wrapper for UpdateNotebook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNotebookOutcomeCallable UpdateNotebookCallable(const Model::UpdateNotebookRequest& request) const;

        /**
         * An Async wrapper for UpdateNotebook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNotebookAsync(const Model::UpdateNotebookRequest& request, const UpdateNotebookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the metadata for a notebook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateNotebookMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotebookMetadataOutcome UpdateNotebookMetadata(const Model::UpdateNotebookMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateNotebookMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNotebookMetadataOutcomeCallable UpdateNotebookMetadataCallable(const Model::UpdateNotebookMetadataRequest& request) const;

        /**
         * An Async wrapper for UpdateNotebookMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNotebookMetadataAsync(const Model::UpdateNotebookMetadataRequest& request, const UpdateNotebookMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a prepared statement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdatePreparedStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePreparedStatementOutcome UpdatePreparedStatement(const Model::UpdatePreparedStatementRequest& request) const;

        /**
         * A Callable wrapper for UpdatePreparedStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePreparedStatementOutcomeCallable UpdatePreparedStatementCallable(const Model::UpdatePreparedStatementRequest& request) const;

        /**
         * An Async wrapper for UpdatePreparedStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePreparedStatementAsync(const Model::UpdatePreparedStatementRequest& request, const UpdatePreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the workgroup with the specified name. The workgroup's name cannot be
         * changed. Only one of <code>ConfigurationsUpdates</code> or
         * <code>ConfigurationUpdates</code> can be specified;
         * <code>ConfigurationsUpdates</code> for a workgroup with multi engine support
         * (for example, an Apache Spark enabled workgroup) or
         * <code>ConfigurationUpdates</code> for an Athena SQL workgroup.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateWorkGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkGroupOutcome UpdateWorkGroup(const Model::UpdateWorkGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkGroupOutcomeCallable UpdateWorkGroupCallable(const Model::UpdateWorkGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateWorkGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkGroupAsync(const Model::UpdateWorkGroupRequest& request, const UpdateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AthenaEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AthenaClient>;
      void init(const AthenaClientConfiguration& clientConfiguration);

      AthenaClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AthenaEndpointProviderBase> m_endpointProvider;
  };

} // namespace Athena
} // namespace Aws
