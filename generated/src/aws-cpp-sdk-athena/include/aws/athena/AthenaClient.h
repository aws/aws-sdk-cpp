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
   * Amazon Athena with JDBC</a>.</p>
   */
  class AWS_ATHENA_API AthenaClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AthenaClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AthenaClientConfiguration ClientConfigurationType;
      typedef AthenaEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AthenaClient(const Aws::Athena::AthenaClientConfiguration& clientConfiguration = Aws::Athena::AthenaClientConfiguration(),
                     std::shared_ptr<AthenaEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AthenaClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<AthenaEndpointProviderBase> endpointProvider = nullptr,
                     const Aws::Athena::AthenaClientConfiguration& clientConfiguration = Aws::Athena::AthenaClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AthenaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<AthenaEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename BatchGetNamedQueryRequestT = Model::BatchGetNamedQueryRequest>
        Model::BatchGetNamedQueryOutcomeCallable BatchGetNamedQueryCallable(const BatchGetNamedQueryRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::BatchGetNamedQuery, request);
        }

        /**
         * An Async wrapper for BatchGetNamedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetNamedQueryRequestT = Model::BatchGetNamedQueryRequest>
        void BatchGetNamedQueryAsync(const BatchGetNamedQueryRequestT& request, const BatchGetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::BatchGetNamedQuery, request, handler, context);
        }

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
        template<typename BatchGetPreparedStatementRequestT = Model::BatchGetPreparedStatementRequest>
        Model::BatchGetPreparedStatementOutcomeCallable BatchGetPreparedStatementCallable(const BatchGetPreparedStatementRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::BatchGetPreparedStatement, request);
        }

        /**
         * An Async wrapper for BatchGetPreparedStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetPreparedStatementRequestT = Model::BatchGetPreparedStatementRequest>
        void BatchGetPreparedStatementAsync(const BatchGetPreparedStatementRequestT& request, const BatchGetPreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::BatchGetPreparedStatement, request, handler, context);
        }

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
        template<typename BatchGetQueryExecutionRequestT = Model::BatchGetQueryExecutionRequest>
        Model::BatchGetQueryExecutionOutcomeCallable BatchGetQueryExecutionCallable(const BatchGetQueryExecutionRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::BatchGetQueryExecution, request);
        }

        /**
         * An Async wrapper for BatchGetQueryExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetQueryExecutionRequestT = Model::BatchGetQueryExecutionRequest>
        void BatchGetQueryExecutionAsync(const BatchGetQueryExecutionRequestT& request, const BatchGetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::BatchGetQueryExecution, request, handler, context);
        }

        /**
         * <p>Cancels the capacity reservation with the specified name. Cancelled
         * reservations remain in your account and will be deleted 45 days after
         * cancellation. During the 45 days, you cannot re-purpose or reuse a reservation
         * that has been cancelled, but you can refer to its tags and view it for
         * historical reference. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CancelCapacityReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelCapacityReservationOutcome CancelCapacityReservation(const Model::CancelCapacityReservationRequest& request) const;

        /**
         * A Callable wrapper for CancelCapacityReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelCapacityReservationRequestT = Model::CancelCapacityReservationRequest>
        Model::CancelCapacityReservationOutcomeCallable CancelCapacityReservationCallable(const CancelCapacityReservationRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::CancelCapacityReservation, request);
        }

        /**
         * An Async wrapper for CancelCapacityReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelCapacityReservationRequestT = Model::CancelCapacityReservationRequest>
        void CancelCapacityReservationAsync(const CancelCapacityReservationRequestT& request, const CancelCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::CancelCapacityReservation, request, handler, context);
        }

        /**
         * <p>Creates a capacity reservation with the specified name and number of
         * requested data processing units.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateCapacityReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCapacityReservationOutcome CreateCapacityReservation(const Model::CreateCapacityReservationRequest& request) const;

        /**
         * A Callable wrapper for CreateCapacityReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCapacityReservationRequestT = Model::CreateCapacityReservationRequest>
        Model::CreateCapacityReservationOutcomeCallable CreateCapacityReservationCallable(const CreateCapacityReservationRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::CreateCapacityReservation, request);
        }

        /**
         * An Async wrapper for CreateCapacityReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCapacityReservationRequestT = Model::CreateCapacityReservationRequest>
        void CreateCapacityReservationAsync(const CreateCapacityReservationRequestT& request, const CreateCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::CreateCapacityReservation, request, handler, context);
        }

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
        template<typename CreateDataCatalogRequestT = Model::CreateDataCatalogRequest>
        Model::CreateDataCatalogOutcomeCallable CreateDataCatalogCallable(const CreateDataCatalogRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::CreateDataCatalog, request);
        }

        /**
         * An Async wrapper for CreateDataCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataCatalogRequestT = Model::CreateDataCatalogRequest>
        void CreateDataCatalogAsync(const CreateDataCatalogRequestT& request, const CreateDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::CreateDataCatalog, request, handler, context);
        }

        /**
         * <p>Creates a named query in the specified workgroup. Requires that you have
         * access to the workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateNamedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNamedQueryOutcome CreateNamedQuery(const Model::CreateNamedQueryRequest& request) const;

        /**
         * A Callable wrapper for CreateNamedQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNamedQueryRequestT = Model::CreateNamedQueryRequest>
        Model::CreateNamedQueryOutcomeCallable CreateNamedQueryCallable(const CreateNamedQueryRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::CreateNamedQuery, request);
        }

        /**
         * An Async wrapper for CreateNamedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNamedQueryRequestT = Model::CreateNamedQueryRequest>
        void CreateNamedQueryAsync(const CreateNamedQueryRequestT& request, const CreateNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::CreateNamedQuery, request, handler, context);
        }

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
        template<typename CreateNotebookRequestT = Model::CreateNotebookRequest>
        Model::CreateNotebookOutcomeCallable CreateNotebookCallable(const CreateNotebookRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::CreateNotebook, request);
        }

        /**
         * An Async wrapper for CreateNotebook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNotebookRequestT = Model::CreateNotebookRequest>
        void CreateNotebookAsync(const CreateNotebookRequestT& request, const CreateNotebookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::CreateNotebook, request, handler, context);
        }

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
        template<typename CreatePreparedStatementRequestT = Model::CreatePreparedStatementRequest>
        Model::CreatePreparedStatementOutcomeCallable CreatePreparedStatementCallable(const CreatePreparedStatementRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::CreatePreparedStatement, request);
        }

        /**
         * An Async wrapper for CreatePreparedStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePreparedStatementRequestT = Model::CreatePreparedStatementRequest>
        void CreatePreparedStatementAsync(const CreatePreparedStatementRequestT& request, const CreatePreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::CreatePreparedStatement, request, handler, context);
        }

        /**
         * <p>Gets an authentication token and the URL at which the notebook can be
         * accessed. During programmatic access, <code>CreatePresignedNotebookUrl</code>
         * must be called every 10 minutes to refresh the authentication token. For
         * information about granting programmatic access, see <a
         * href="https://docs.aws.amazon.com/athena/latest/ug/setting-up.html#setting-up-grant-programmatic-access">Grant
         * programmatic access</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreatePresignedNotebookUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresignedNotebookUrlOutcome CreatePresignedNotebookUrl(const Model::CreatePresignedNotebookUrlRequest& request) const;

        /**
         * A Callable wrapper for CreatePresignedNotebookUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePresignedNotebookUrlRequestT = Model::CreatePresignedNotebookUrlRequest>
        Model::CreatePresignedNotebookUrlOutcomeCallable CreatePresignedNotebookUrlCallable(const CreatePresignedNotebookUrlRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::CreatePresignedNotebookUrl, request);
        }

        /**
         * An Async wrapper for CreatePresignedNotebookUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePresignedNotebookUrlRequestT = Model::CreatePresignedNotebookUrlRequest>
        void CreatePresignedNotebookUrlAsync(const CreatePresignedNotebookUrlRequestT& request, const CreatePresignedNotebookUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::CreatePresignedNotebookUrl, request, handler, context);
        }

        /**
         * <p>Creates a workgroup with the specified name. A workgroup can be an Apache
         * Spark enabled workgroup or an Athena SQL workgroup.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateWorkGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkGroupOutcome CreateWorkGroup(const Model::CreateWorkGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkGroupRequestT = Model::CreateWorkGroupRequest>
        Model::CreateWorkGroupOutcomeCallable CreateWorkGroupCallable(const CreateWorkGroupRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::CreateWorkGroup, request);
        }

        /**
         * An Async wrapper for CreateWorkGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkGroupRequestT = Model::CreateWorkGroupRequest>
        void CreateWorkGroupAsync(const CreateWorkGroupRequestT& request, const CreateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::CreateWorkGroup, request, handler, context);
        }

        /**
         * <p>Deletes a cancelled capacity reservation. A reservation must be cancelled
         * before it can be deleted. A deleted reservation is immediately removed from your
         * account and can no longer be referenced, including by its ARN. A deleted
         * reservation cannot be called by <code>GetCapacityReservation</code>, and deleted
         * reservations do not appear in the output of
         * <code>ListCapacityReservations</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteCapacityReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCapacityReservationOutcome DeleteCapacityReservation(const Model::DeleteCapacityReservationRequest& request) const;

        /**
         * A Callable wrapper for DeleteCapacityReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCapacityReservationRequestT = Model::DeleteCapacityReservationRequest>
        Model::DeleteCapacityReservationOutcomeCallable DeleteCapacityReservationCallable(const DeleteCapacityReservationRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::DeleteCapacityReservation, request);
        }

        /**
         * An Async wrapper for DeleteCapacityReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCapacityReservationRequestT = Model::DeleteCapacityReservationRequest>
        void DeleteCapacityReservationAsync(const DeleteCapacityReservationRequestT& request, const DeleteCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::DeleteCapacityReservation, request, handler, context);
        }

        /**
         * <p>Deletes a data catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteDataCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataCatalogOutcome DeleteDataCatalog(const Model::DeleteDataCatalogRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataCatalogRequestT = Model::DeleteDataCatalogRequest>
        Model::DeleteDataCatalogOutcomeCallable DeleteDataCatalogCallable(const DeleteDataCatalogRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::DeleteDataCatalog, request);
        }

        /**
         * An Async wrapper for DeleteDataCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataCatalogRequestT = Model::DeleteDataCatalogRequest>
        void DeleteDataCatalogAsync(const DeleteDataCatalogRequestT& request, const DeleteDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::DeleteDataCatalog, request, handler, context);
        }

        /**
         * <p>Deletes the named query if you have access to the workgroup in which the
         * query was saved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteNamedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNamedQueryOutcome DeleteNamedQuery(const Model::DeleteNamedQueryRequest& request) const;

        /**
         * A Callable wrapper for DeleteNamedQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNamedQueryRequestT = Model::DeleteNamedQueryRequest>
        Model::DeleteNamedQueryOutcomeCallable DeleteNamedQueryCallable(const DeleteNamedQueryRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::DeleteNamedQuery, request);
        }

        /**
         * An Async wrapper for DeleteNamedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNamedQueryRequestT = Model::DeleteNamedQueryRequest>
        void DeleteNamedQueryAsync(const DeleteNamedQueryRequestT& request, const DeleteNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::DeleteNamedQuery, request, handler, context);
        }

        /**
         * <p>Deletes the specified notebook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteNotebook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotebookOutcome DeleteNotebook(const Model::DeleteNotebookRequest& request) const;

        /**
         * A Callable wrapper for DeleteNotebook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNotebookRequestT = Model::DeleteNotebookRequest>
        Model::DeleteNotebookOutcomeCallable DeleteNotebookCallable(const DeleteNotebookRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::DeleteNotebook, request);
        }

        /**
         * An Async wrapper for DeleteNotebook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNotebookRequestT = Model::DeleteNotebookRequest>
        void DeleteNotebookAsync(const DeleteNotebookRequestT& request, const DeleteNotebookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::DeleteNotebook, request, handler, context);
        }

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
        template<typename DeletePreparedStatementRequestT = Model::DeletePreparedStatementRequest>
        Model::DeletePreparedStatementOutcomeCallable DeletePreparedStatementCallable(const DeletePreparedStatementRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::DeletePreparedStatement, request);
        }

        /**
         * An Async wrapper for DeletePreparedStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePreparedStatementRequestT = Model::DeletePreparedStatementRequest>
        void DeletePreparedStatementAsync(const DeletePreparedStatementRequestT& request, const DeletePreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::DeletePreparedStatement, request, handler, context);
        }

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
        template<typename DeleteWorkGroupRequestT = Model::DeleteWorkGroupRequest>
        Model::DeleteWorkGroupOutcomeCallable DeleteWorkGroupCallable(const DeleteWorkGroupRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::DeleteWorkGroup, request);
        }

        /**
         * An Async wrapper for DeleteWorkGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkGroupRequestT = Model::DeleteWorkGroupRequest>
        void DeleteWorkGroupAsync(const DeleteWorkGroupRequestT& request, const DeleteWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::DeleteWorkGroup, request, handler, context);
        }

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
        template<typename ExportNotebookRequestT = Model::ExportNotebookRequest>
        Model::ExportNotebookOutcomeCallable ExportNotebookCallable(const ExportNotebookRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ExportNotebook, request);
        }

        /**
         * An Async wrapper for ExportNotebook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportNotebookRequestT = Model::ExportNotebookRequest>
        void ExportNotebookAsync(const ExportNotebookRequestT& request, const ExportNotebookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ExportNotebook, request, handler, context);
        }

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
        template<typename GetCalculationExecutionRequestT = Model::GetCalculationExecutionRequest>
        Model::GetCalculationExecutionOutcomeCallable GetCalculationExecutionCallable(const GetCalculationExecutionRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetCalculationExecution, request);
        }

        /**
         * An Async wrapper for GetCalculationExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCalculationExecutionRequestT = Model::GetCalculationExecutionRequest>
        void GetCalculationExecutionAsync(const GetCalculationExecutionRequestT& request, const GetCalculationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetCalculationExecution, request, handler, context);
        }

        /**
         * <p>Retrieves the unencrypted code that was executed for the
         * calculation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetCalculationExecutionCode">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCalculationExecutionCodeOutcome GetCalculationExecutionCode(const Model::GetCalculationExecutionCodeRequest& request) const;

        /**
         * A Callable wrapper for GetCalculationExecutionCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCalculationExecutionCodeRequestT = Model::GetCalculationExecutionCodeRequest>
        Model::GetCalculationExecutionCodeOutcomeCallable GetCalculationExecutionCodeCallable(const GetCalculationExecutionCodeRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetCalculationExecutionCode, request);
        }

        /**
         * An Async wrapper for GetCalculationExecutionCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCalculationExecutionCodeRequestT = Model::GetCalculationExecutionCodeRequest>
        void GetCalculationExecutionCodeAsync(const GetCalculationExecutionCodeRequestT& request, const GetCalculationExecutionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetCalculationExecutionCode, request, handler, context);
        }

        /**
         * <p>Gets the status of a current calculation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetCalculationExecutionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCalculationExecutionStatusOutcome GetCalculationExecutionStatus(const Model::GetCalculationExecutionStatusRequest& request) const;

        /**
         * A Callable wrapper for GetCalculationExecutionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCalculationExecutionStatusRequestT = Model::GetCalculationExecutionStatusRequest>
        Model::GetCalculationExecutionStatusOutcomeCallable GetCalculationExecutionStatusCallable(const GetCalculationExecutionStatusRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetCalculationExecutionStatus, request);
        }

        /**
         * An Async wrapper for GetCalculationExecutionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCalculationExecutionStatusRequestT = Model::GetCalculationExecutionStatusRequest>
        void GetCalculationExecutionStatusAsync(const GetCalculationExecutionStatusRequestT& request, const GetCalculationExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetCalculationExecutionStatus, request, handler, context);
        }

        /**
         * <p>Gets the capacity assignment configuration for a capacity reservation, if one
         * exists.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetCapacityAssignmentConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCapacityAssignmentConfigurationOutcome GetCapacityAssignmentConfiguration(const Model::GetCapacityAssignmentConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetCapacityAssignmentConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCapacityAssignmentConfigurationRequestT = Model::GetCapacityAssignmentConfigurationRequest>
        Model::GetCapacityAssignmentConfigurationOutcomeCallable GetCapacityAssignmentConfigurationCallable(const GetCapacityAssignmentConfigurationRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetCapacityAssignmentConfiguration, request);
        }

        /**
         * An Async wrapper for GetCapacityAssignmentConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCapacityAssignmentConfigurationRequestT = Model::GetCapacityAssignmentConfigurationRequest>
        void GetCapacityAssignmentConfigurationAsync(const GetCapacityAssignmentConfigurationRequestT& request, const GetCapacityAssignmentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetCapacityAssignmentConfiguration, request, handler, context);
        }

        /**
         * <p>Returns information about the capacity reservation with the specified
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetCapacityReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCapacityReservationOutcome GetCapacityReservation(const Model::GetCapacityReservationRequest& request) const;

        /**
         * A Callable wrapper for GetCapacityReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCapacityReservationRequestT = Model::GetCapacityReservationRequest>
        Model::GetCapacityReservationOutcomeCallable GetCapacityReservationCallable(const GetCapacityReservationRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetCapacityReservation, request);
        }

        /**
         * An Async wrapper for GetCapacityReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCapacityReservationRequestT = Model::GetCapacityReservationRequest>
        void GetCapacityReservationAsync(const GetCapacityReservationRequestT& request, const GetCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetCapacityReservation, request, handler, context);
        }

        /**
         * <p>Returns the specified data catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetDataCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataCatalogOutcome GetDataCatalog(const Model::GetDataCatalogRequest& request) const;

        /**
         * A Callable wrapper for GetDataCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataCatalogRequestT = Model::GetDataCatalogRequest>
        Model::GetDataCatalogOutcomeCallable GetDataCatalogCallable(const GetDataCatalogRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetDataCatalog, request);
        }

        /**
         * An Async wrapper for GetDataCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataCatalogRequestT = Model::GetDataCatalogRequest>
        void GetDataCatalogAsync(const GetDataCatalogRequestT& request, const GetDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetDataCatalog, request, handler, context);
        }

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
        template<typename GetDatabaseRequestT = Model::GetDatabaseRequest>
        Model::GetDatabaseOutcomeCallable GetDatabaseCallable(const GetDatabaseRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetDatabase, request);
        }

        /**
         * An Async wrapper for GetDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDatabaseRequestT = Model::GetDatabaseRequest>
        void GetDatabaseAsync(const GetDatabaseRequestT& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetDatabase, request, handler, context);
        }

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
        template<typename GetNamedQueryRequestT = Model::GetNamedQueryRequest>
        Model::GetNamedQueryOutcomeCallable GetNamedQueryCallable(const GetNamedQueryRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetNamedQuery, request);
        }

        /**
         * An Async wrapper for GetNamedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNamedQueryRequestT = Model::GetNamedQueryRequest>
        void GetNamedQueryAsync(const GetNamedQueryRequestT& request, const GetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetNamedQuery, request, handler, context);
        }

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
        template<typename GetNotebookMetadataRequestT = Model::GetNotebookMetadataRequest>
        Model::GetNotebookMetadataOutcomeCallable GetNotebookMetadataCallable(const GetNotebookMetadataRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetNotebookMetadata, request);
        }

        /**
         * An Async wrapper for GetNotebookMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNotebookMetadataRequestT = Model::GetNotebookMetadataRequest>
        void GetNotebookMetadataAsync(const GetNotebookMetadataRequestT& request, const GetNotebookMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetNotebookMetadata, request, handler, context);
        }

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
        template<typename GetPreparedStatementRequestT = Model::GetPreparedStatementRequest>
        Model::GetPreparedStatementOutcomeCallable GetPreparedStatementCallable(const GetPreparedStatementRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetPreparedStatement, request);
        }

        /**
         * An Async wrapper for GetPreparedStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPreparedStatementRequestT = Model::GetPreparedStatementRequest>
        void GetPreparedStatementAsync(const GetPreparedStatementRequestT& request, const GetPreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetPreparedStatement, request, handler, context);
        }

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
        template<typename GetQueryExecutionRequestT = Model::GetQueryExecutionRequest>
        Model::GetQueryExecutionOutcomeCallable GetQueryExecutionCallable(const GetQueryExecutionRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetQueryExecution, request);
        }

        /**
         * An Async wrapper for GetQueryExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueryExecutionRequestT = Model::GetQueryExecutionRequest>
        void GetQueryExecutionAsync(const GetQueryExecutionRequestT& request, const GetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetQueryExecution, request, handler, context);
        }

        /**
         * <p>Streams the results of a single query execution specified by
         * <code>QueryExecutionId</code> from the Athena query results location in Amazon
         * S3. For more information, see <a
         * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Working with
         * query results, recent queries, and output files</a> in the <i>Amazon Athena User
         * Guide</i>. This request does not execute the query but returns results. Use
         * <a>StartQueryExecution</a> to run a query.</p> <p>To stream query results
         * successfully, the IAM principal with permission to call
         * <code>GetQueryResults</code> also must have permissions to the Amazon S3
         * <code>GetObject</code> action for the Athena query results location.</p>
         *  <p>IAM principals with permission to the Amazon S3
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
        template<typename GetQueryResultsRequestT = Model::GetQueryResultsRequest>
        Model::GetQueryResultsOutcomeCallable GetQueryResultsCallable(const GetQueryResultsRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetQueryResults, request);
        }

        /**
         * An Async wrapper for GetQueryResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueryResultsRequestT = Model::GetQueryResultsRequest>
        void GetQueryResultsAsync(const GetQueryResultsRequestT& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetQueryResults, request, handler, context);
        }

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
        template<typename GetQueryRuntimeStatisticsRequestT = Model::GetQueryRuntimeStatisticsRequest>
        Model::GetQueryRuntimeStatisticsOutcomeCallable GetQueryRuntimeStatisticsCallable(const GetQueryRuntimeStatisticsRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetQueryRuntimeStatistics, request);
        }

        /**
         * An Async wrapper for GetQueryRuntimeStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueryRuntimeStatisticsRequestT = Model::GetQueryRuntimeStatisticsRequest>
        void GetQueryRuntimeStatisticsAsync(const GetQueryRuntimeStatisticsRequestT& request, const GetQueryRuntimeStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetQueryRuntimeStatistics, request, handler, context);
        }

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
        template<typename GetSessionRequestT = Model::GetSessionRequest>
        Model::GetSessionOutcomeCallable GetSessionCallable(const GetSessionRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetSession, request);
        }

        /**
         * An Async wrapper for GetSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSessionRequestT = Model::GetSessionRequest>
        void GetSessionAsync(const GetSessionRequestT& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetSession, request, handler, context);
        }

        /**
         * <p>Gets the current status of a session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetSessionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionStatusOutcome GetSessionStatus(const Model::GetSessionStatusRequest& request) const;

        /**
         * A Callable wrapper for GetSessionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSessionStatusRequestT = Model::GetSessionStatusRequest>
        Model::GetSessionStatusOutcomeCallable GetSessionStatusCallable(const GetSessionStatusRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetSessionStatus, request);
        }

        /**
         * An Async wrapper for GetSessionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSessionStatusRequestT = Model::GetSessionStatusRequest>
        void GetSessionStatusAsync(const GetSessionStatusRequestT& request, const GetSessionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetSessionStatus, request, handler, context);
        }

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
        template<typename GetTableMetadataRequestT = Model::GetTableMetadataRequest>
        Model::GetTableMetadataOutcomeCallable GetTableMetadataCallable(const GetTableMetadataRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetTableMetadata, request);
        }

        /**
         * An Async wrapper for GetTableMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableMetadataRequestT = Model::GetTableMetadataRequest>
        void GetTableMetadataAsync(const GetTableMetadataRequestT& request, const GetTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetTableMetadata, request, handler, context);
        }

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
        template<typename GetWorkGroupRequestT = Model::GetWorkGroupRequest>
        Model::GetWorkGroupOutcomeCallable GetWorkGroupCallable(const GetWorkGroupRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::GetWorkGroup, request);
        }

        /**
         * An Async wrapper for GetWorkGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkGroupRequestT = Model::GetWorkGroupRequest>
        void GetWorkGroupAsync(const GetWorkGroupRequestT& request, const GetWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::GetWorkGroup, request, handler, context);
        }

        /**
         * <p>Imports a single <code>ipynb</code> file to a Spark enabled workgroup. To
         * import the notebook, the request must specify a value for either
         * <code>Payload</code> or <code>NoteBookS3LocationUri</code>. If neither is
         * specified or both are specified, an <code>InvalidRequestException</code> occurs.
         * The maximum file size that can be imported is 10 megabytes. If an
         * <code>ipynb</code> file with the same name already exists in the workgroup,
         * throws an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ImportNotebook">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportNotebookOutcome ImportNotebook(const Model::ImportNotebookRequest& request) const;

        /**
         * A Callable wrapper for ImportNotebook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportNotebookRequestT = Model::ImportNotebookRequest>
        Model::ImportNotebookOutcomeCallable ImportNotebookCallable(const ImportNotebookRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ImportNotebook, request);
        }

        /**
         * An Async wrapper for ImportNotebook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportNotebookRequestT = Model::ImportNotebookRequest>
        void ImportNotebookAsync(const ImportNotebookRequestT& request, const ImportNotebookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ImportNotebook, request, handler, context);
        }

        /**
         * <p>Returns the supported DPU sizes for the supported application runtimes (for
         * example, <code>Athena notebook version 1</code>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListApplicationDPUSizes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationDPUSizesOutcome ListApplicationDPUSizes(const Model::ListApplicationDPUSizesRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationDPUSizes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationDPUSizesRequestT = Model::ListApplicationDPUSizesRequest>
        Model::ListApplicationDPUSizesOutcomeCallable ListApplicationDPUSizesCallable(const ListApplicationDPUSizesRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListApplicationDPUSizes, request);
        }

        /**
         * An Async wrapper for ListApplicationDPUSizes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationDPUSizesRequestT = Model::ListApplicationDPUSizesRequest>
        void ListApplicationDPUSizesAsync(const ListApplicationDPUSizesRequestT& request, const ListApplicationDPUSizesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListApplicationDPUSizes, request, handler, context);
        }

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
        template<typename ListCalculationExecutionsRequestT = Model::ListCalculationExecutionsRequest>
        Model::ListCalculationExecutionsOutcomeCallable ListCalculationExecutionsCallable(const ListCalculationExecutionsRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListCalculationExecutions, request);
        }

        /**
         * An Async wrapper for ListCalculationExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCalculationExecutionsRequestT = Model::ListCalculationExecutionsRequest>
        void ListCalculationExecutionsAsync(const ListCalculationExecutionsRequestT& request, const ListCalculationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListCalculationExecutions, request, handler, context);
        }

        /**
         * <p>Lists the capacity reservations for the current account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListCapacityReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCapacityReservationsOutcome ListCapacityReservations(const Model::ListCapacityReservationsRequest& request) const;

        /**
         * A Callable wrapper for ListCapacityReservations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCapacityReservationsRequestT = Model::ListCapacityReservationsRequest>
        Model::ListCapacityReservationsOutcomeCallable ListCapacityReservationsCallable(const ListCapacityReservationsRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListCapacityReservations, request);
        }

        /**
         * An Async wrapper for ListCapacityReservations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCapacityReservationsRequestT = Model::ListCapacityReservationsRequest>
        void ListCapacityReservationsAsync(const ListCapacityReservationsRequestT& request, const ListCapacityReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListCapacityReservations, request, handler, context);
        }

        /**
         * <p>Lists the data catalogs in the current Amazon Web Services account.</p>
         *  <p>In the Athena console, data catalogs are listed as "data sources" on
         * the <b>Data sources</b> page under the <b>Data source name</b> column.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListDataCatalogs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataCatalogsOutcome ListDataCatalogs(const Model::ListDataCatalogsRequest& request) const;

        /**
         * A Callable wrapper for ListDataCatalogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataCatalogsRequestT = Model::ListDataCatalogsRequest>
        Model::ListDataCatalogsOutcomeCallable ListDataCatalogsCallable(const ListDataCatalogsRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListDataCatalogs, request);
        }

        /**
         * An Async wrapper for ListDataCatalogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataCatalogsRequestT = Model::ListDataCatalogsRequest>
        void ListDataCatalogsAsync(const ListDataCatalogsRequestT& request, const ListDataCatalogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListDataCatalogs, request, handler, context);
        }

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
        template<typename ListDatabasesRequestT = Model::ListDatabasesRequest>
        Model::ListDatabasesOutcomeCallable ListDatabasesCallable(const ListDatabasesRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListDatabases, request);
        }

        /**
         * An Async wrapper for ListDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatabasesRequestT = Model::ListDatabasesRequest>
        void ListDatabasesAsync(const ListDatabasesRequestT& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListDatabases, request, handler, context);
        }

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
        template<typename ListEngineVersionsRequestT = Model::ListEngineVersionsRequest>
        Model::ListEngineVersionsOutcomeCallable ListEngineVersionsCallable(const ListEngineVersionsRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListEngineVersions, request);
        }

        /**
         * An Async wrapper for ListEngineVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEngineVersionsRequestT = Model::ListEngineVersionsRequest>
        void ListEngineVersionsAsync(const ListEngineVersionsRequestT& request, const ListEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListEngineVersions, request, handler, context);
        }

        /**
         * <p>Lists, in descending order, the executors that joined a session. Newer
         * executors are listed first; older executors are listed later. The result can be
         * optionally filtered by state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListExecutors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExecutorsOutcome ListExecutors(const Model::ListExecutorsRequest& request) const;

        /**
         * A Callable wrapper for ListExecutors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExecutorsRequestT = Model::ListExecutorsRequest>
        Model::ListExecutorsOutcomeCallable ListExecutorsCallable(const ListExecutorsRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListExecutors, request);
        }

        /**
         * An Async wrapper for ListExecutors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExecutorsRequestT = Model::ListExecutorsRequest>
        void ListExecutorsAsync(const ListExecutorsRequestT& request, const ListExecutorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListExecutors, request, handler, context);
        }

        /**
         * <p>Provides a list of available query IDs only for queries saved in the
         * specified workgroup. Requires that you have access to the specified workgroup.
         * If a workgroup is not specified, lists the saved queries for the primary
         * workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListNamedQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNamedQueriesOutcome ListNamedQueries(const Model::ListNamedQueriesRequest& request) const;

        /**
         * A Callable wrapper for ListNamedQueries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNamedQueriesRequestT = Model::ListNamedQueriesRequest>
        Model::ListNamedQueriesOutcomeCallable ListNamedQueriesCallable(const ListNamedQueriesRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListNamedQueries, request);
        }

        /**
         * An Async wrapper for ListNamedQueries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNamedQueriesRequestT = Model::ListNamedQueriesRequest>
        void ListNamedQueriesAsync(const ListNamedQueriesRequestT& request, const ListNamedQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListNamedQueries, request, handler, context);
        }

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
        template<typename ListNotebookMetadataRequestT = Model::ListNotebookMetadataRequest>
        Model::ListNotebookMetadataOutcomeCallable ListNotebookMetadataCallable(const ListNotebookMetadataRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListNotebookMetadata, request);
        }

        /**
         * An Async wrapper for ListNotebookMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNotebookMetadataRequestT = Model::ListNotebookMetadataRequest>
        void ListNotebookMetadataAsync(const ListNotebookMetadataRequestT& request, const ListNotebookMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListNotebookMetadata, request, handler, context);
        }

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
        template<typename ListNotebookSessionsRequestT = Model::ListNotebookSessionsRequest>
        Model::ListNotebookSessionsOutcomeCallable ListNotebookSessionsCallable(const ListNotebookSessionsRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListNotebookSessions, request);
        }

        /**
         * An Async wrapper for ListNotebookSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNotebookSessionsRequestT = Model::ListNotebookSessionsRequest>
        void ListNotebookSessionsAsync(const ListNotebookSessionsRequestT& request, const ListNotebookSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListNotebookSessions, request, handler, context);
        }

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
        template<typename ListPreparedStatementsRequestT = Model::ListPreparedStatementsRequest>
        Model::ListPreparedStatementsOutcomeCallable ListPreparedStatementsCallable(const ListPreparedStatementsRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListPreparedStatements, request);
        }

        /**
         * An Async wrapper for ListPreparedStatements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPreparedStatementsRequestT = Model::ListPreparedStatementsRequest>
        void ListPreparedStatementsAsync(const ListPreparedStatementsRequestT& request, const ListPreparedStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListPreparedStatements, request, handler, context);
        }

        /**
         * <p>Provides a list of available query execution IDs for the queries in the
         * specified workgroup. Athena keeps a query history for 45 days. If a workgroup is
         * not specified, returns a list of query execution IDs for the primary workgroup.
         * Requires you to have access to the workgroup in which the queries
         * ran.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListQueryExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueryExecutionsOutcome ListQueryExecutions(const Model::ListQueryExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListQueryExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQueryExecutionsRequestT = Model::ListQueryExecutionsRequest>
        Model::ListQueryExecutionsOutcomeCallable ListQueryExecutionsCallable(const ListQueryExecutionsRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListQueryExecutions, request);
        }

        /**
         * An Async wrapper for ListQueryExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQueryExecutionsRequestT = Model::ListQueryExecutionsRequest>
        void ListQueryExecutionsAsync(const ListQueryExecutionsRequestT& request, const ListQueryExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListQueryExecutions, request, handler, context);
        }

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
        template<typename ListSessionsRequestT = Model::ListSessionsRequest>
        Model::ListSessionsOutcomeCallable ListSessionsCallable(const ListSessionsRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListSessions, request);
        }

        /**
         * An Async wrapper for ListSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSessionsRequestT = Model::ListSessionsRequest>
        void ListSessionsAsync(const ListSessionsRequestT& request, const ListSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListSessions, request, handler, context);
        }

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
        template<typename ListTableMetadataRequestT = Model::ListTableMetadataRequest>
        Model::ListTableMetadataOutcomeCallable ListTableMetadataCallable(const ListTableMetadataRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListTableMetadata, request);
        }

        /**
         * An Async wrapper for ListTableMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTableMetadataRequestT = Model::ListTableMetadataRequest>
        void ListTableMetadataAsync(const ListTableMetadataRequestT& request, const ListTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListTableMetadata, request, handler, context);
        }

        /**
         * <p>Lists the tags associated with an Athena resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists available workgroups for the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListWorkGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkGroupsOutcome ListWorkGroups(const Model::ListWorkGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkGroupsRequestT = Model::ListWorkGroupsRequest>
        Model::ListWorkGroupsOutcomeCallable ListWorkGroupsCallable(const ListWorkGroupsRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::ListWorkGroups, request);
        }

        /**
         * An Async wrapper for ListWorkGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkGroupsRequestT = Model::ListWorkGroupsRequest>
        void ListWorkGroupsAsync(const ListWorkGroupsRequestT& request, const ListWorkGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::ListWorkGroups, request, handler, context);
        }

        /**
         * <p>Puts a new capacity assignment configuration for a specified capacity
         * reservation. If a capacity assignment configuration already exists for the
         * capacity reservation, replaces the existing capacity assignment
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/PutCapacityAssignmentConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCapacityAssignmentConfigurationOutcome PutCapacityAssignmentConfiguration(const Model::PutCapacityAssignmentConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutCapacityAssignmentConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutCapacityAssignmentConfigurationRequestT = Model::PutCapacityAssignmentConfigurationRequest>
        Model::PutCapacityAssignmentConfigurationOutcomeCallable PutCapacityAssignmentConfigurationCallable(const PutCapacityAssignmentConfigurationRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::PutCapacityAssignmentConfiguration, request);
        }

        /**
         * An Async wrapper for PutCapacityAssignmentConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutCapacityAssignmentConfigurationRequestT = Model::PutCapacityAssignmentConfigurationRequest>
        void PutCapacityAssignmentConfigurationAsync(const PutCapacityAssignmentConfigurationRequestT& request, const PutCapacityAssignmentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::PutCapacityAssignmentConfiguration, request, handler, context);
        }

        /**
         * <p>Submits calculations for execution within a session. You can supply the code
         * to run as an inline code block within the request.</p>  <p>The request
         * syntax requires the <a>StartCalculationExecutionRequest$CodeBlock</a> parameter
         * or the <a>CalculationConfiguration$CodeBlock</a> parameter, but not both.
         * Because <a>CalculationConfiguration$CodeBlock</a> is deprecated, use the
         * <a>StartCalculationExecutionRequest$CodeBlock</a> parameter instead.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/StartCalculationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCalculationExecutionOutcome StartCalculationExecution(const Model::StartCalculationExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartCalculationExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartCalculationExecutionRequestT = Model::StartCalculationExecutionRequest>
        Model::StartCalculationExecutionOutcomeCallable StartCalculationExecutionCallable(const StartCalculationExecutionRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::StartCalculationExecution, request);
        }

        /**
         * An Async wrapper for StartCalculationExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartCalculationExecutionRequestT = Model::StartCalculationExecutionRequest>
        void StartCalculationExecutionAsync(const StartCalculationExecutionRequestT& request, const StartCalculationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::StartCalculationExecution, request, handler, context);
        }

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
        template<typename StartQueryExecutionRequestT = Model::StartQueryExecutionRequest>
        Model::StartQueryExecutionOutcomeCallable StartQueryExecutionCallable(const StartQueryExecutionRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::StartQueryExecution, request);
        }

        /**
         * An Async wrapper for StartQueryExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartQueryExecutionRequestT = Model::StartQueryExecutionRequest>
        void StartQueryExecutionAsync(const StartQueryExecutionRequestT& request, const StartQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::StartQueryExecution, request, handler, context);
        }

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
        template<typename StartSessionRequestT = Model::StartSessionRequest>
        Model::StartSessionOutcomeCallable StartSessionCallable(const StartSessionRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::StartSession, request);
        }

        /**
         * An Async wrapper for StartSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSessionRequestT = Model::StartSessionRequest>
        void StartSessionAsync(const StartSessionRequestT& request, const StartSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::StartSession, request, handler, context);
        }

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
        template<typename StopCalculationExecutionRequestT = Model::StopCalculationExecutionRequest>
        Model::StopCalculationExecutionOutcomeCallable StopCalculationExecutionCallable(const StopCalculationExecutionRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::StopCalculationExecution, request);
        }

        /**
         * An Async wrapper for StopCalculationExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopCalculationExecutionRequestT = Model::StopCalculationExecutionRequest>
        void StopCalculationExecutionAsync(const StopCalculationExecutionRequestT& request, const StopCalculationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::StopCalculationExecution, request, handler, context);
        }

        /**
         * <p>Stops a query execution. Requires you to have access to the workgroup in
         * which the query ran.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/StopQueryExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopQueryExecutionOutcome StopQueryExecution(const Model::StopQueryExecutionRequest& request) const;

        /**
         * A Callable wrapper for StopQueryExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopQueryExecutionRequestT = Model::StopQueryExecutionRequest>
        Model::StopQueryExecutionOutcomeCallable StopQueryExecutionCallable(const StopQueryExecutionRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::StopQueryExecution, request);
        }

        /**
         * An Async wrapper for StopQueryExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopQueryExecutionRequestT = Model::StopQueryExecutionRequest>
        void StopQueryExecutionAsync(const StopQueryExecutionRequestT& request, const StopQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::StopQueryExecution, request, handler, context);
        }

        /**
         * <p>Adds one or more tags to an Athena resource. A tag is a label that you assign
         * to a resource. Each tag consists of a key and an optional value, both of which
         * you define. For example, you can use tags to categorize Athena workgroups, data
         * catalogs, or capacity reservations by purpose, owner, or environment. Use a
         * consistent set of tag keys to make it easier to search and filter the resources
         * in your account. For best practices, see <a
         * href="https://docs.aws.amazon.com/whitepapers/latest/tagging-best-practices/tagging-best-practices.html">Tagging
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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::TagResource, request, handler, context);
        }

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
        template<typename TerminateSessionRequestT = Model::TerminateSessionRequest>
        Model::TerminateSessionOutcomeCallable TerminateSessionCallable(const TerminateSessionRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::TerminateSession, request);
        }

        /**
         * An Async wrapper for TerminateSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TerminateSessionRequestT = Model::TerminateSessionRequest>
        void TerminateSessionAsync(const TerminateSessionRequestT& request, const TerminateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::TerminateSession, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from an Athena resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the number of requested data processing units for the capacity
         * reservation with the specified name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateCapacityReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCapacityReservationOutcome UpdateCapacityReservation(const Model::UpdateCapacityReservationRequest& request) const;

        /**
         * A Callable wrapper for UpdateCapacityReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCapacityReservationRequestT = Model::UpdateCapacityReservationRequest>
        Model::UpdateCapacityReservationOutcomeCallable UpdateCapacityReservationCallable(const UpdateCapacityReservationRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::UpdateCapacityReservation, request);
        }

        /**
         * An Async wrapper for UpdateCapacityReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCapacityReservationRequestT = Model::UpdateCapacityReservationRequest>
        void UpdateCapacityReservationAsync(const UpdateCapacityReservationRequestT& request, const UpdateCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::UpdateCapacityReservation, request, handler, context);
        }

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
        template<typename UpdateDataCatalogRequestT = Model::UpdateDataCatalogRequest>
        Model::UpdateDataCatalogOutcomeCallable UpdateDataCatalogCallable(const UpdateDataCatalogRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::UpdateDataCatalog, request);
        }

        /**
         * An Async wrapper for UpdateDataCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataCatalogRequestT = Model::UpdateDataCatalogRequest>
        void UpdateDataCatalogAsync(const UpdateDataCatalogRequestT& request, const UpdateDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::UpdateDataCatalog, request, handler, context);
        }

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
        template<typename UpdateNamedQueryRequestT = Model::UpdateNamedQueryRequest>
        Model::UpdateNamedQueryOutcomeCallable UpdateNamedQueryCallable(const UpdateNamedQueryRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::UpdateNamedQuery, request);
        }

        /**
         * An Async wrapper for UpdateNamedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNamedQueryRequestT = Model::UpdateNamedQueryRequest>
        void UpdateNamedQueryAsync(const UpdateNamedQueryRequestT& request, const UpdateNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::UpdateNamedQuery, request, handler, context);
        }

        /**
         * <p>Updates the contents of a Spark notebook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateNotebook">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotebookOutcome UpdateNotebook(const Model::UpdateNotebookRequest& request) const;

        /**
         * A Callable wrapper for UpdateNotebook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNotebookRequestT = Model::UpdateNotebookRequest>
        Model::UpdateNotebookOutcomeCallable UpdateNotebookCallable(const UpdateNotebookRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::UpdateNotebook, request);
        }

        /**
         * An Async wrapper for UpdateNotebook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNotebookRequestT = Model::UpdateNotebookRequest>
        void UpdateNotebookAsync(const UpdateNotebookRequestT& request, const UpdateNotebookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::UpdateNotebook, request, handler, context);
        }

        /**
         * <p>Updates the metadata for a notebook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateNotebookMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotebookMetadataOutcome UpdateNotebookMetadata(const Model::UpdateNotebookMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateNotebookMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNotebookMetadataRequestT = Model::UpdateNotebookMetadataRequest>
        Model::UpdateNotebookMetadataOutcomeCallable UpdateNotebookMetadataCallable(const UpdateNotebookMetadataRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::UpdateNotebookMetadata, request);
        }

        /**
         * An Async wrapper for UpdateNotebookMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNotebookMetadataRequestT = Model::UpdateNotebookMetadataRequest>
        void UpdateNotebookMetadataAsync(const UpdateNotebookMetadataRequestT& request, const UpdateNotebookMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::UpdateNotebookMetadata, request, handler, context);
        }

        /**
         * <p>Updates a prepared statement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdatePreparedStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePreparedStatementOutcome UpdatePreparedStatement(const Model::UpdatePreparedStatementRequest& request) const;

        /**
         * A Callable wrapper for UpdatePreparedStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePreparedStatementRequestT = Model::UpdatePreparedStatementRequest>
        Model::UpdatePreparedStatementOutcomeCallable UpdatePreparedStatementCallable(const UpdatePreparedStatementRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::UpdatePreparedStatement, request);
        }

        /**
         * An Async wrapper for UpdatePreparedStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePreparedStatementRequestT = Model::UpdatePreparedStatementRequest>
        void UpdatePreparedStatementAsync(const UpdatePreparedStatementRequestT& request, const UpdatePreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::UpdatePreparedStatement, request, handler, context);
        }

        /**
         * <p>Updates the workgroup with the specified name. The workgroup's name cannot be
         * changed. Only <code>ConfigurationUpdates</code> can be specified.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateWorkGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkGroupOutcome UpdateWorkGroup(const Model::UpdateWorkGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkGroupRequestT = Model::UpdateWorkGroupRequest>
        Model::UpdateWorkGroupOutcomeCallable UpdateWorkGroupCallable(const UpdateWorkGroupRequestT& request) const
        {
            return SubmitCallable(&AthenaClient::UpdateWorkGroup, request);
        }

        /**
         * An Async wrapper for UpdateWorkGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkGroupRequestT = Model::UpdateWorkGroupRequest>
        void UpdateWorkGroupAsync(const UpdateWorkGroupRequestT& request, const UpdateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AthenaClient::UpdateWorkGroup, request, handler, context);
        }


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
