/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/honeycode/HoneycodeErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/honeycode/model/BatchCreateTableRowsResult.h>
#include <aws/honeycode/model/BatchDeleteTableRowsResult.h>
#include <aws/honeycode/model/BatchUpdateTableRowsResult.h>
#include <aws/honeycode/model/BatchUpsertTableRowsResult.h>
#include <aws/honeycode/model/DescribeTableDataImportJobResult.h>
#include <aws/honeycode/model/GetScreenDataResult.h>
#include <aws/honeycode/model/InvokeScreenAutomationResult.h>
#include <aws/honeycode/model/ListTableColumnsResult.h>
#include <aws/honeycode/model/ListTableRowsResult.h>
#include <aws/honeycode/model/ListTablesResult.h>
#include <aws/honeycode/model/QueryTableRowsResult.h>
#include <aws/honeycode/model/StartTableDataImportJobResult.h>
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

namespace Honeycode
{

namespace Model
{
        class BatchCreateTableRowsRequest;
        class BatchDeleteTableRowsRequest;
        class BatchUpdateTableRowsRequest;
        class BatchUpsertTableRowsRequest;
        class DescribeTableDataImportJobRequest;
        class GetScreenDataRequest;
        class InvokeScreenAutomationRequest;
        class ListTableColumnsRequest;
        class ListTableRowsRequest;
        class ListTablesRequest;
        class QueryTableRowsRequest;
        class StartTableDataImportJobRequest;

        typedef Aws::Utils::Outcome<BatchCreateTableRowsResult, HoneycodeError> BatchCreateTableRowsOutcome;
        typedef Aws::Utils::Outcome<BatchDeleteTableRowsResult, HoneycodeError> BatchDeleteTableRowsOutcome;
        typedef Aws::Utils::Outcome<BatchUpdateTableRowsResult, HoneycodeError> BatchUpdateTableRowsOutcome;
        typedef Aws::Utils::Outcome<BatchUpsertTableRowsResult, HoneycodeError> BatchUpsertTableRowsOutcome;
        typedef Aws::Utils::Outcome<DescribeTableDataImportJobResult, HoneycodeError> DescribeTableDataImportJobOutcome;
        typedef Aws::Utils::Outcome<GetScreenDataResult, HoneycodeError> GetScreenDataOutcome;
        typedef Aws::Utils::Outcome<InvokeScreenAutomationResult, HoneycodeError> InvokeScreenAutomationOutcome;
        typedef Aws::Utils::Outcome<ListTableColumnsResult, HoneycodeError> ListTableColumnsOutcome;
        typedef Aws::Utils::Outcome<ListTableRowsResult, HoneycodeError> ListTableRowsOutcome;
        typedef Aws::Utils::Outcome<ListTablesResult, HoneycodeError> ListTablesOutcome;
        typedef Aws::Utils::Outcome<QueryTableRowsResult, HoneycodeError> QueryTableRowsOutcome;
        typedef Aws::Utils::Outcome<StartTableDataImportJobResult, HoneycodeError> StartTableDataImportJobOutcome;

        typedef std::future<BatchCreateTableRowsOutcome> BatchCreateTableRowsOutcomeCallable;
        typedef std::future<BatchDeleteTableRowsOutcome> BatchDeleteTableRowsOutcomeCallable;
        typedef std::future<BatchUpdateTableRowsOutcome> BatchUpdateTableRowsOutcomeCallable;
        typedef std::future<BatchUpsertTableRowsOutcome> BatchUpsertTableRowsOutcomeCallable;
        typedef std::future<DescribeTableDataImportJobOutcome> DescribeTableDataImportJobOutcomeCallable;
        typedef std::future<GetScreenDataOutcome> GetScreenDataOutcomeCallable;
        typedef std::future<InvokeScreenAutomationOutcome> InvokeScreenAutomationOutcomeCallable;
        typedef std::future<ListTableColumnsOutcome> ListTableColumnsOutcomeCallable;
        typedef std::future<ListTableRowsOutcome> ListTableRowsOutcomeCallable;
        typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
        typedef std::future<QueryTableRowsOutcome> QueryTableRowsOutcomeCallable;
        typedef std::future<StartTableDataImportJobOutcome> StartTableDataImportJobOutcomeCallable;
} // namespace Model

  class HoneycodeClient;

    typedef std::function<void(const HoneycodeClient*, const Model::BatchCreateTableRowsRequest&, const Model::BatchCreateTableRowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateTableRowsResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::BatchDeleteTableRowsRequest&, const Model::BatchDeleteTableRowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteTableRowsResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::BatchUpdateTableRowsRequest&, const Model::BatchUpdateTableRowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateTableRowsResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::BatchUpsertTableRowsRequest&, const Model::BatchUpsertTableRowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpsertTableRowsResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::DescribeTableDataImportJobRequest&, const Model::DescribeTableDataImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableDataImportJobResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::GetScreenDataRequest&, const Model::GetScreenDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetScreenDataResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::InvokeScreenAutomationRequest&, const Model::InvokeScreenAutomationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeScreenAutomationResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::ListTableColumnsRequest&, const Model::ListTableColumnsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTableColumnsResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::ListTableRowsRequest&, const Model::ListTableRowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTableRowsResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::ListTablesRequest&, const Model::ListTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTablesResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::QueryTableRowsRequest&, const Model::QueryTableRowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryTableRowsResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::StartTableDataImportJobRequest&, const Model::StartTableDataImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTableDataImportJobResponseReceivedHandler;

  /**
   * <p> Amazon Honeycode is a fully managed service that allows you to quickly build
   * mobile and web apps for teams—without programming. Build Honeycode apps for
   * managing almost anything, like projects, customers, operations, approvals,
   * resources, and even your team. </p>
   */
  class AWS_HONEYCODE_API HoneycodeClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HoneycodeClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HoneycodeClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        HoneycodeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchCreateTableRowsOutcomeCallable BatchCreateTableRowsCallable(const Model::BatchCreateTableRowsRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCreateTableRowsAsync(const Model::BatchCreateTableRowsRequest& request, const BatchCreateTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The BatchDeleteTableRows API allows you to delete one or more rows from a
         * table in a workbook. You need to specify the ids of the rows that you want to
         * delete from the table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/BatchDeleteTableRows">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteTableRowsOutcome BatchDeleteTableRows(const Model::BatchDeleteTableRowsRequest& request) const;

        /**
         * <p> The BatchDeleteTableRows API allows you to delete one or more rows from a
         * table in a workbook. You need to specify the ids of the rows that you want to
         * delete from the table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/BatchDeleteTableRows">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteTableRowsOutcomeCallable BatchDeleteTableRowsCallable(const Model::BatchDeleteTableRowsRequest& request) const;

        /**
         * <p> The BatchDeleteTableRows API allows you to delete one or more rows from a
         * table in a workbook. You need to specify the ids of the rows that you want to
         * delete from the table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/BatchDeleteTableRows">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteTableRowsAsync(const Model::BatchDeleteTableRowsRequest& request, const BatchDeleteTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p> The BatchUpdateTableRows API allows you to update one or more rows in a
         * table in a workbook. </p> <p> You can specify the values to set in some or all
         * of the columns in the table for the specified rows. If a column is not
         * explicitly specified in a particular row, then that column will not be updated
         * for that row. To clear out the data in a specific cell, you need to set the
         * value as an empty string (""). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/BatchUpdateTableRows">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdateTableRowsOutcomeCallable BatchUpdateTableRowsCallable(const Model::BatchUpdateTableRowsRequest& request) const;

        /**
         * <p> The BatchUpdateTableRows API allows you to update one or more rows in a
         * table in a workbook. </p> <p> You can specify the values to set in some or all
         * of the columns in the table for the specified rows. If a column is not
         * explicitly specified in a particular row, then that column will not be updated
         * for that row. To clear out the data in a specific cell, you need to set the
         * value as an empty string (""). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/BatchUpdateTableRows">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateTableRowsAsync(const Model::BatchUpdateTableRowsRequest& request, const BatchUpdateTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpsertTableRowsOutcomeCallable BatchUpsertTableRowsCallable(const Model::BatchUpsertTableRowsRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpsertTableRowsAsync(const Model::BatchUpsertTableRowsRequest& request, const BatchUpsertTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The DescribeTableDataImportJob API allows you to retrieve the status and
         * details of a table data import job. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/DescribeTableDataImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTableDataImportJobOutcome DescribeTableDataImportJob(const Model::DescribeTableDataImportJobRequest& request) const;

        /**
         * <p> The DescribeTableDataImportJob API allows you to retrieve the status and
         * details of a table data import job. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/DescribeTableDataImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTableDataImportJobOutcomeCallable DescribeTableDataImportJobCallable(const Model::DescribeTableDataImportJobRequest& request) const;

        /**
         * <p> The DescribeTableDataImportJob API allows you to retrieve the status and
         * details of a table data import job. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/DescribeTableDataImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTableDataImportJobAsync(const Model::DescribeTableDataImportJobRequest& request, const DescribeTableDataImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p> The GetScreenData API allows retrieval of data from a screen in a Honeycode
         * app. The API allows setting local variables in the screen to filter, sort or
         * otherwise affect what will be displayed on the screen. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/GetScreenData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetScreenDataOutcomeCallable GetScreenDataCallable(const Model::GetScreenDataRequest& request) const;

        /**
         * <p> The GetScreenData API allows retrieval of data from a screen in a Honeycode
         * app. The API allows setting local variables in the screen to filter, sort or
         * otherwise affect what will be displayed on the screen. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/GetScreenData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetScreenDataAsync(const Model::GetScreenDataRequest& request, const GetScreenDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p> The InvokeScreenAutomation API allows invoking an action defined in a screen
         * in a Honeycode app. The API allows setting local variables, which can then be
         * used in the automation being invoked. This allows automating the Honeycode app
         * interactions to write, update or delete data in the workbook. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/InvokeScreenAutomation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InvokeScreenAutomationOutcomeCallable InvokeScreenAutomationCallable(const Model::InvokeScreenAutomationRequest& request) const;

        /**
         * <p> The InvokeScreenAutomation API allows invoking an action defined in a screen
         * in a Honeycode app. The API allows setting local variables, which can then be
         * used in the automation being invoked. This allows automating the Honeycode app
         * interactions to write, update or delete data in the workbook. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/InvokeScreenAutomation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InvokeScreenAutomationAsync(const Model::InvokeScreenAutomationRequest& request, const InvokeScreenAutomationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The ListTableColumns API allows you to retrieve a list of all the columns in
         * a table in a workbook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ListTableColumns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTableColumnsOutcome ListTableColumns(const Model::ListTableColumnsRequest& request) const;

        /**
         * <p> The ListTableColumns API allows you to retrieve a list of all the columns in
         * a table in a workbook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ListTableColumns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTableColumnsOutcomeCallable ListTableColumnsCallable(const Model::ListTableColumnsRequest& request) const;

        /**
         * <p> The ListTableColumns API allows you to retrieve a list of all the columns in
         * a table in a workbook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ListTableColumns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTableColumnsAsync(const Model::ListTableColumnsRequest& request, const ListTableColumnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The ListTableRows API allows you to retrieve a list of all the rows in a
         * table in a workbook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ListTableRows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTableRowsOutcome ListTableRows(const Model::ListTableRowsRequest& request) const;

        /**
         * <p> The ListTableRows API allows you to retrieve a list of all the rows in a
         * table in a workbook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ListTableRows">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTableRowsOutcomeCallable ListTableRowsCallable(const Model::ListTableRowsRequest& request) const;

        /**
         * <p> The ListTableRows API allows you to retrieve a list of all the rows in a
         * table in a workbook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ListTableRows">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTableRowsAsync(const Model::ListTableRowsRequest& request, const ListTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The ListTables API allows you to retrieve a list of all the tables in a
         * workbook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ListTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request) const;

        /**
         * <p> The ListTables API allows you to retrieve a list of all the tables in a
         * workbook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ListTables">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTablesOutcomeCallable ListTablesCallable(const Model::ListTablesRequest& request) const;

        /**
         * <p> The ListTables API allows you to retrieve a list of all the tables in a
         * workbook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ListTables">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTablesAsync(const Model::ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The QueryTableRows API allows you to use a filter formula to query for
         * specific rows in a table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/QueryTableRows">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryTableRowsOutcome QueryTableRows(const Model::QueryTableRowsRequest& request) const;

        /**
         * <p> The QueryTableRows API allows you to use a filter formula to query for
         * specific rows in a table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/QueryTableRows">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::QueryTableRowsOutcomeCallable QueryTableRowsCallable(const Model::QueryTableRowsRequest& request) const;

        /**
         * <p> The QueryTableRows API allows you to use a filter formula to query for
         * specific rows in a table. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/QueryTableRows">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QueryTableRowsAsync(const Model::QueryTableRowsRequest& request, const QueryTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p> The StartTableDataImportJob API allows you to start an import job on a
         * table. This API will only return the id of the job that was started. To find out
         * the status of the import request, you need to call the
         * DescribeTableDataImportJob API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/StartTableDataImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTableDataImportJobOutcomeCallable StartTableDataImportJobCallable(const Model::StartTableDataImportJobRequest& request) const;

        /**
         * <p> The StartTableDataImportJob API allows you to start an import job on a
         * table. This API will only return the id of the job that was started. To find out
         * the status of the import request, you need to call the
         * DescribeTableDataImportJob API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/StartTableDataImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTableDataImportJobAsync(const Model::StartTableDataImportJobRequest& request, const StartTableDataImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchCreateTableRowsAsyncHelper(const Model::BatchCreateTableRowsRequest& request, const BatchCreateTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeleteTableRowsAsyncHelper(const Model::BatchDeleteTableRowsRequest& request, const BatchDeleteTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUpdateTableRowsAsyncHelper(const Model::BatchUpdateTableRowsRequest& request, const BatchUpdateTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUpsertTableRowsAsyncHelper(const Model::BatchUpsertTableRowsRequest& request, const BatchUpsertTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTableDataImportJobAsyncHelper(const Model::DescribeTableDataImportJobRequest& request, const DescribeTableDataImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetScreenDataAsyncHelper(const Model::GetScreenDataRequest& request, const GetScreenDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InvokeScreenAutomationAsyncHelper(const Model::InvokeScreenAutomationRequest& request, const InvokeScreenAutomationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTableColumnsAsyncHelper(const Model::ListTableColumnsRequest& request, const ListTableColumnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTableRowsAsyncHelper(const Model::ListTableRowsRequest& request, const ListTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTablesAsyncHelper(const Model::ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void QueryTableRowsAsyncHelper(const Model::QueryTableRowsRequest& request, const QueryTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTableDataImportJobAsyncHelper(const Model::StartTableDataImportJobRequest& request, const StartTableDataImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Honeycode
} // namespace Aws
