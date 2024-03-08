/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/honeycode/HoneycodeServiceClientModel.h>

namespace Aws
{
namespace Honeycode
{
  /**
   * <p> Amazon Honeycode is a fully managed service that allows you to quickly build
   * mobile and web apps for teams—without programming. Build Honeycode apps for
   * managing almost anything, like projects, customers, operations, approvals,
   * resources, and even your team. </p>
   */
  class AWS_HONEYCODE_API HoneycodeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<HoneycodeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef HoneycodeClientConfiguration ClientConfigurationType;
      typedef HoneycodeEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HoneycodeClient(const Aws::Honeycode::HoneycodeClientConfiguration& clientConfiguration = Aws::Honeycode::HoneycodeClientConfiguration(),
                        std::shared_ptr<HoneycodeEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HoneycodeClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<HoneycodeEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::Honeycode::HoneycodeClientConfiguration& clientConfiguration = Aws::Honeycode::HoneycodeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        HoneycodeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<HoneycodeEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::Honeycode::HoneycodeClientConfiguration& clientConfiguration = Aws::Honeycode::HoneycodeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HoneycodeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HoneycodeClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        HoneycodeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~HoneycodeClient();

        /**
         * <p> The BatchCreateTableRows API allows you to create one or more rows at the
         * end of a table in a workbook. The API allows you to specify the values to set in
         * some or all of the columns in the new rows. </p> <p> If a column is not
         * explicitly set in a specific row, then the column level formula specified in the
         * table will be applied to the new row. If there is no column level formula but
         * the last row of the table has a formula, then that formula will be copied down
         * to the new row. If there is no column level formula and no formula in the last
         * row of the table, then that column will be left blank for the new rows.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/BatchCreateTableRows">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateTableRowsOutcome BatchCreateTableRows(const Model::BatchCreateTableRowsRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateTableRows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchCreateTableRowsRequestT = Model::BatchCreateTableRowsRequest>
        Model::BatchCreateTableRowsOutcomeCallable BatchCreateTableRowsCallable(const BatchCreateTableRowsRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::BatchCreateTableRows, request);
        }

        /**
         * An Async wrapper for BatchCreateTableRows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateTableRowsRequestT = Model::BatchCreateTableRowsRequest>
        void BatchCreateTableRowsAsync(const BatchCreateTableRowsRequestT& request, const BatchCreateTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::BatchCreateTableRows, request, handler, context);
        }

        /**
         * <p> The BatchDeleteTableRows API allows you to delete one or more rows from a
         * table in a workbook. You need to specify the ids of the rows that you want to
         * delete from the table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/BatchDeleteTableRows">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteTableRowsOutcome BatchDeleteTableRows(const Model::BatchDeleteTableRowsRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteTableRows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteTableRowsRequestT = Model::BatchDeleteTableRowsRequest>
        Model::BatchDeleteTableRowsOutcomeCallable BatchDeleteTableRowsCallable(const BatchDeleteTableRowsRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::BatchDeleteTableRows, request);
        }

        /**
         * An Async wrapper for BatchDeleteTableRows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteTableRowsRequestT = Model::BatchDeleteTableRowsRequest>
        void BatchDeleteTableRowsAsync(const BatchDeleteTableRowsRequestT& request, const BatchDeleteTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::BatchDeleteTableRows, request, handler, context);
        }

        /**
         * <p> The BatchUpdateTableRows API allows you to update one or more rows in a
         * table in a workbook. </p> <p> You can specify the values to set in some or all
         * of the columns in the table for the specified rows. If a column is not
         * explicitly specified in a particular row, then that column will not be updated
         * for that row. To clear out the data in a specific cell, you need to set the
         * value as an empty string (""). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/BatchUpdateTableRows">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateTableRowsOutcome BatchUpdateTableRows(const Model::BatchUpdateTableRowsRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateTableRows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateTableRowsRequestT = Model::BatchUpdateTableRowsRequest>
        Model::BatchUpdateTableRowsOutcomeCallable BatchUpdateTableRowsCallable(const BatchUpdateTableRowsRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::BatchUpdateTableRows, request);
        }

        /**
         * An Async wrapper for BatchUpdateTableRows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateTableRowsRequestT = Model::BatchUpdateTableRowsRequest>
        void BatchUpdateTableRowsAsync(const BatchUpdateTableRowsRequestT& request, const BatchUpdateTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::BatchUpdateTableRows, request, handler, context);
        }

        /**
         * <p> The BatchUpsertTableRows API allows you to upsert one or more rows in a
         * table. The upsert operation takes a filter expression as input and evaluates it
         * to find matching rows on the destination table. If matching rows are found, it
         * will update the cells in the matching rows to new values specified in the
         * request. If no matching rows are found, a new row is added at the end of the
         * table and the cells in that row are set to the new values specified in the
         * request. </p> <p> You can specify the values to set in some or all of the
         * columns in the table for the matching or newly appended rows. If a column is not
         * explicitly specified for a particular row, then that column will not be updated
         * for that row. To clear out the data in a specific cell, you need to set the
         * value as an empty string (""). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/BatchUpsertTableRows">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpsertTableRowsOutcome BatchUpsertTableRows(const Model::BatchUpsertTableRowsRequest& request) const;

        /**
         * A Callable wrapper for BatchUpsertTableRows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpsertTableRowsRequestT = Model::BatchUpsertTableRowsRequest>
        Model::BatchUpsertTableRowsOutcomeCallable BatchUpsertTableRowsCallable(const BatchUpsertTableRowsRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::BatchUpsertTableRows, request);
        }

        /**
         * An Async wrapper for BatchUpsertTableRows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpsertTableRowsRequestT = Model::BatchUpsertTableRowsRequest>
        void BatchUpsertTableRowsAsync(const BatchUpsertTableRowsRequestT& request, const BatchUpsertTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::BatchUpsertTableRows, request, handler, context);
        }

        /**
         * <p> The DescribeTableDataImportJob API allows you to retrieve the status and
         * details of a table data import job. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/DescribeTableDataImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTableDataImportJobOutcome DescribeTableDataImportJob(const Model::DescribeTableDataImportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeTableDataImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTableDataImportJobRequestT = Model::DescribeTableDataImportJobRequest>
        Model::DescribeTableDataImportJobOutcomeCallable DescribeTableDataImportJobCallable(const DescribeTableDataImportJobRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::DescribeTableDataImportJob, request);
        }

        /**
         * An Async wrapper for DescribeTableDataImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTableDataImportJobRequestT = Model::DescribeTableDataImportJobRequest>
        void DescribeTableDataImportJobAsync(const DescribeTableDataImportJobRequestT& request, const DescribeTableDataImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::DescribeTableDataImportJob, request, handler, context);
        }

        /**
         * <p> The GetScreenData API allows retrieval of data from a screen in a Honeycode
         * app. The API allows setting local variables in the screen to filter, sort or
         * otherwise affect what will be displayed on the screen. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/GetScreenData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetScreenDataOutcome GetScreenData(const Model::GetScreenDataRequest& request) const;

        /**
         * A Callable wrapper for GetScreenData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetScreenDataRequestT = Model::GetScreenDataRequest>
        Model::GetScreenDataOutcomeCallable GetScreenDataCallable(const GetScreenDataRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::GetScreenData, request);
        }

        /**
         * An Async wrapper for GetScreenData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetScreenDataRequestT = Model::GetScreenDataRequest>
        void GetScreenDataAsync(const GetScreenDataRequestT& request, const GetScreenDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::GetScreenData, request, handler, context);
        }

        /**
         * <p> The InvokeScreenAutomation API allows invoking an action defined in a screen
         * in a Honeycode app. The API allows setting local variables, which can then be
         * used in the automation being invoked. This allows automating the Honeycode app
         * interactions to write, update or delete data in the workbook. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/InvokeScreenAutomation">AWS
         * API Reference</a></p>
         */
        virtual Model::InvokeScreenAutomationOutcome InvokeScreenAutomation(const Model::InvokeScreenAutomationRequest& request) const;

        /**
         * A Callable wrapper for InvokeScreenAutomation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InvokeScreenAutomationRequestT = Model::InvokeScreenAutomationRequest>
        Model::InvokeScreenAutomationOutcomeCallable InvokeScreenAutomationCallable(const InvokeScreenAutomationRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::InvokeScreenAutomation, request);
        }

        /**
         * An Async wrapper for InvokeScreenAutomation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InvokeScreenAutomationRequestT = Model::InvokeScreenAutomationRequest>
        void InvokeScreenAutomationAsync(const InvokeScreenAutomationRequestT& request, const InvokeScreenAutomationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::InvokeScreenAutomation, request, handler, context);
        }

        /**
         * <p> The ListTableColumns API allows you to retrieve a list of all the columns in
         * a table in a workbook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ListTableColumns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTableColumnsOutcome ListTableColumns(const Model::ListTableColumnsRequest& request) const;

        /**
         * A Callable wrapper for ListTableColumns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTableColumnsRequestT = Model::ListTableColumnsRequest>
        Model::ListTableColumnsOutcomeCallable ListTableColumnsCallable(const ListTableColumnsRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::ListTableColumns, request);
        }

        /**
         * An Async wrapper for ListTableColumns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTableColumnsRequestT = Model::ListTableColumnsRequest>
        void ListTableColumnsAsync(const ListTableColumnsRequestT& request, const ListTableColumnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::ListTableColumns, request, handler, context);
        }

        /**
         * <p> The ListTableRows API allows you to retrieve a list of all the rows in a
         * table in a workbook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ListTableRows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTableRowsOutcome ListTableRows(const Model::ListTableRowsRequest& request) const;

        /**
         * A Callable wrapper for ListTableRows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTableRowsRequestT = Model::ListTableRowsRequest>
        Model::ListTableRowsOutcomeCallable ListTableRowsCallable(const ListTableRowsRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::ListTableRows, request);
        }

        /**
         * An Async wrapper for ListTableRows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTableRowsRequestT = Model::ListTableRowsRequest>
        void ListTableRowsAsync(const ListTableRowsRequestT& request, const ListTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::ListTableRows, request, handler, context);
        }

        /**
         * <p> The ListTables API allows you to retrieve a list of all the tables in a
         * workbook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ListTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request) const;

        /**
         * A Callable wrapper for ListTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        Model::ListTablesOutcomeCallable ListTablesCallable(const ListTablesRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::ListTables, request);
        }

        /**
         * An Async wrapper for ListTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        void ListTablesAsync(const ListTablesRequestT& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::ListTables, request, handler, context);
        }

        /**
         * <p> The ListTagsForResource API allows you to return a resource's tags.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p> The QueryTableRows API allows you to use a filter formula to query for
         * specific rows in a table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/QueryTableRows">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryTableRowsOutcome QueryTableRows(const Model::QueryTableRowsRequest& request) const;

        /**
         * A Callable wrapper for QueryTableRows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename QueryTableRowsRequestT = Model::QueryTableRowsRequest>
        Model::QueryTableRowsOutcomeCallable QueryTableRowsCallable(const QueryTableRowsRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::QueryTableRows, request);
        }

        /**
         * An Async wrapper for QueryTableRows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename QueryTableRowsRequestT = Model::QueryTableRowsRequest>
        void QueryTableRowsAsync(const QueryTableRowsRequestT& request, const QueryTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::QueryTableRows, request, handler, context);
        }

        /**
         * <p> The StartTableDataImportJob API allows you to start an import job on a
         * table. This API will only return the id of the job that was started. To find out
         * the status of the import request, you need to call the
         * DescribeTableDataImportJob API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/StartTableDataImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTableDataImportJobOutcome StartTableDataImportJob(const Model::StartTableDataImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartTableDataImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTableDataImportJobRequestT = Model::StartTableDataImportJobRequest>
        Model::StartTableDataImportJobOutcomeCallable StartTableDataImportJobCallable(const StartTableDataImportJobRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::StartTableDataImportJob, request);
        }

        /**
         * An Async wrapper for StartTableDataImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTableDataImportJobRequestT = Model::StartTableDataImportJobRequest>
        void StartTableDataImportJobAsync(const StartTableDataImportJobRequestT& request, const StartTableDataImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::StartTableDataImportJob, request, handler, context);
        }

        /**
         * <p> The TagResource API allows you to add tags to an ARN-able resource. Resource
         * includes workbook, table, screen and screen-automation. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::TagResource, request, handler, context);
        }

        /**
         * <p> The UntagResource API allows you to removes tags from an ARN-able resource.
         * Resource includes workbook, table, screen and screen-automation. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&HoneycodeClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HoneycodeClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<HoneycodeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<HoneycodeClient>;
      void init(const HoneycodeClientConfiguration& clientConfiguration);

      HoneycodeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<HoneycodeEndpointProviderBase> m_endpointProvider;
  };

} // namespace Honeycode
} // namespace Aws
