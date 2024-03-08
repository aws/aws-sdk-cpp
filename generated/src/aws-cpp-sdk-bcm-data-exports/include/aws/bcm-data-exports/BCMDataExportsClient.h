/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/bcm-data-exports/BCMDataExportsServiceClientModel.h>

namespace Aws
{
namespace BCMDataExports
{
  /**
   * <p>You can use the Data Exports API to create customized exports from multiple
   * Amazon Web Services cost management and billing datasets, such as cost and usage
   * data and cost optimization recommendations.</p> <p>The Data Exports API provides
   * the following endpoint:</p> <ul> <li>
   * <p>https://bcm-data-exports.us-east-1.api.aws</p> </li> </ul>
   */
  class AWS_BCMDATAEXPORTS_API BCMDataExportsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BCMDataExportsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BCMDataExportsClientConfiguration ClientConfigurationType;
      typedef BCMDataExportsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BCMDataExportsClient(const Aws::BCMDataExports::BCMDataExportsClientConfiguration& clientConfiguration = Aws::BCMDataExports::BCMDataExportsClientConfiguration(),
                             std::shared_ptr<BCMDataExportsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BCMDataExportsClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<BCMDataExportsEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::BCMDataExports::BCMDataExportsClientConfiguration& clientConfiguration = Aws::BCMDataExports::BCMDataExportsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BCMDataExportsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<BCMDataExportsEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::BCMDataExports::BCMDataExportsClientConfiguration& clientConfiguration = Aws::BCMDataExports::BCMDataExportsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BCMDataExportsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BCMDataExportsClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BCMDataExportsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BCMDataExportsClient();

        /**
         * <p>Creates a data export and specifies the data query, the delivery preference,
         * and any optional resource tags.</p> <p>A <code>DataQuery</code> consists of both
         * a <code>QueryStatement</code> and <code>TableConfigurations</code>.</p> <p>The
         * <code>QueryStatement</code> is an SQL statement. Data Exports only supports a
         * limited subset of the SQL syntax. For more information on the SQL syntax that is
         * supported, see <a
         * href="https://docs.aws.amazon.com/cur/latest/userguide/de-data-query.html">Data
         * query</a>. To view the available tables and columns, see the <a
         * href="https://docs.aws.amazon.com/cur/latest/userguide/de-table-dictionary.html">Data
         * Exports table dictionary</a>.</p> <p>The <code>TableConfigurations</code> is a
         * collection of specified <code>TableProperties</code> for the table being queried
         * in the <code>QueryStatement</code>. TableProperties are additional
         * configurations you can provide to change the data and schema of a table. Each
         * table can have different TableProperties. However, tables are not required to
         * have any TableProperties. Each table property has a default value that it
         * assumes if not specified. For more information on table configurations, see <a
         * href="https://docs.aws.amazon.com/cur/latest/userguide/de-data-query.html">Data
         * query</a>. To view the table properties available for each table, see the <a
         * href="https://docs.aws.amazon.com/cur/latest/userguide/de-table-dictionary.html">Data
         * Exports table dictionary</a> or use the <code>ListTables</code> API to get a
         * response of all tables and their available properties.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/CreateExport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExportOutcome CreateExport(const Model::CreateExportRequest& request) const;

        /**
         * A Callable wrapper for CreateExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateExportRequestT = Model::CreateExportRequest>
        Model::CreateExportOutcomeCallable CreateExportCallable(const CreateExportRequestT& request) const
        {
            return SubmitCallable(&BCMDataExportsClient::CreateExport, request);
        }

        /**
         * An Async wrapper for CreateExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateExportRequestT = Model::CreateExportRequest>
        void CreateExportAsync(const CreateExportRequestT& request, const CreateExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMDataExportsClient::CreateExport, request, handler, context);
        }

        /**
         * <p>Deletes an existing data export.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/DeleteExport">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExportOutcome DeleteExport(const Model::DeleteExportRequest& request) const;

        /**
         * A Callable wrapper for DeleteExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteExportRequestT = Model::DeleteExportRequest>
        Model::DeleteExportOutcomeCallable DeleteExportCallable(const DeleteExportRequestT& request) const
        {
            return SubmitCallable(&BCMDataExportsClient::DeleteExport, request);
        }

        /**
         * An Async wrapper for DeleteExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteExportRequestT = Model::DeleteExportRequest>
        void DeleteExportAsync(const DeleteExportRequestT& request, const DeleteExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMDataExportsClient::DeleteExport, request, handler, context);
        }

        /**
         * <p>Exports data based on the source data update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/GetExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExecutionOutcome GetExecution(const Model::GetExecutionRequest& request) const;

        /**
         * A Callable wrapper for GetExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExecutionRequestT = Model::GetExecutionRequest>
        Model::GetExecutionOutcomeCallable GetExecutionCallable(const GetExecutionRequestT& request) const
        {
            return SubmitCallable(&BCMDataExportsClient::GetExecution, request);
        }

        /**
         * An Async wrapper for GetExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExecutionRequestT = Model::GetExecutionRequest>
        void GetExecutionAsync(const GetExecutionRequestT& request, const GetExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMDataExportsClient::GetExecution, request, handler, context);
        }

        /**
         * <p>Views the definition of an existing data export.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/GetExport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportOutcome GetExport(const Model::GetExportRequest& request) const;

        /**
         * A Callable wrapper for GetExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExportRequestT = Model::GetExportRequest>
        Model::GetExportOutcomeCallable GetExportCallable(const GetExportRequestT& request) const
        {
            return SubmitCallable(&BCMDataExportsClient::GetExport, request);
        }

        /**
         * An Async wrapper for GetExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExportRequestT = Model::GetExportRequest>
        void GetExportAsync(const GetExportRequestT& request, const GetExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMDataExportsClient::GetExport, request, handler, context);
        }

        /**
         * <p>Returns the metadata for the specified table and table properties. This
         * includes the list of columns in the table schema, their data types, and column
         * descriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/GetTable">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableOutcome GetTable(const Model::GetTableRequest& request) const;

        /**
         * A Callable wrapper for GetTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableRequestT = Model::GetTableRequest>
        Model::GetTableOutcomeCallable GetTableCallable(const GetTableRequestT& request) const
        {
            return SubmitCallable(&BCMDataExportsClient::GetTable, request);
        }

        /**
         * An Async wrapper for GetTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableRequestT = Model::GetTableRequest>
        void GetTableAsync(const GetTableRequestT& request, const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMDataExportsClient::GetTable, request, handler, context);
        }

        /**
         * <p>Lists the historical executions for the export.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/ListExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExecutionsOutcome ListExecutions(const Model::ListExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExecutionsRequestT = Model::ListExecutionsRequest>
        Model::ListExecutionsOutcomeCallable ListExecutionsCallable(const ListExecutionsRequestT& request) const
        {
            return SubmitCallable(&BCMDataExportsClient::ListExecutions, request);
        }

        /**
         * An Async wrapper for ListExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExecutionsRequestT = Model::ListExecutionsRequest>
        void ListExecutionsAsync(const ListExecutionsRequestT& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMDataExportsClient::ListExecutions, request, handler, context);
        }

        /**
         * <p>Lists all data export definitions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/ListExports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExportsOutcome ListExports(const Model::ListExportsRequest& request) const;

        /**
         * A Callable wrapper for ListExports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExportsRequestT = Model::ListExportsRequest>
        Model::ListExportsOutcomeCallable ListExportsCallable(const ListExportsRequestT& request) const
        {
            return SubmitCallable(&BCMDataExportsClient::ListExports, request);
        }

        /**
         * An Async wrapper for ListExports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExportsRequestT = Model::ListExportsRequest>
        void ListExportsAsync(const ListExportsRequestT& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMDataExportsClient::ListExports, request, handler, context);
        }

        /**
         * <p>Lists all available tables in data exports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/ListTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request) const;

        /**
         * A Callable wrapper for ListTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        Model::ListTablesOutcomeCallable ListTablesCallable(const ListTablesRequestT& request) const
        {
            return SubmitCallable(&BCMDataExportsClient::ListTables, request);
        }

        /**
         * An Async wrapper for ListTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        void ListTablesAsync(const ListTablesRequestT& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMDataExportsClient::ListTables, request, handler, context);
        }

        /**
         * <p>List tags associated with an existing data export.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&BCMDataExportsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMDataExportsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds tags for an existing data export definition.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&BCMDataExportsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMDataExportsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes tags associated with an existing data export
         * definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&BCMDataExportsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMDataExportsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing data export by overwriting all export parameters. All
         * export parameters must be provided in the UpdateExport request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/UpdateExport">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExportOutcome UpdateExport(const Model::UpdateExportRequest& request) const;

        /**
         * A Callable wrapper for UpdateExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateExportRequestT = Model::UpdateExportRequest>
        Model::UpdateExportOutcomeCallable UpdateExportCallable(const UpdateExportRequestT& request) const
        {
            return SubmitCallable(&BCMDataExportsClient::UpdateExport, request);
        }

        /**
         * An Async wrapper for UpdateExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateExportRequestT = Model::UpdateExportRequest>
        void UpdateExportAsync(const UpdateExportRequestT& request, const UpdateExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMDataExportsClient::UpdateExport, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BCMDataExportsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BCMDataExportsClient>;
      void init(const BCMDataExportsClientConfiguration& clientConfiguration);

      BCMDataExportsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BCMDataExportsEndpointProviderBase> m_endpointProvider;
  };

} // namespace BCMDataExports
} // namespace Aws
