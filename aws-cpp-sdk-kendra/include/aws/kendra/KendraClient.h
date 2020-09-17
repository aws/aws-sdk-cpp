/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kendra/model/BatchDeleteDocumentResult.h>
#include <aws/kendra/model/BatchPutDocumentResult.h>
#include <aws/kendra/model/CreateDataSourceResult.h>
#include <aws/kendra/model/CreateFaqResult.h>
#include <aws/kendra/model/CreateIndexResult.h>
#include <aws/kendra/model/DescribeDataSourceResult.h>
#include <aws/kendra/model/DescribeFaqResult.h>
#include <aws/kendra/model/DescribeIndexResult.h>
#include <aws/kendra/model/ListDataSourceSyncJobsResult.h>
#include <aws/kendra/model/ListDataSourcesResult.h>
#include <aws/kendra/model/ListFaqsResult.h>
#include <aws/kendra/model/ListIndicesResult.h>
#include <aws/kendra/model/ListTagsForResourceResult.h>
#include <aws/kendra/model/QueryResult.h>
#include <aws/kendra/model/StartDataSourceSyncJobResult.h>
#include <aws/kendra/model/TagResourceResult.h>
#include <aws/kendra/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
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

namespace kendra
{

namespace Model
{
        class BatchDeleteDocumentRequest;
        class BatchPutDocumentRequest;
        class CreateDataSourceRequest;
        class CreateFaqRequest;
        class CreateIndexRequest;
        class DeleteDataSourceRequest;
        class DeleteFaqRequest;
        class DeleteIndexRequest;
        class DescribeDataSourceRequest;
        class DescribeFaqRequest;
        class DescribeIndexRequest;
        class ListDataSourceSyncJobsRequest;
        class ListDataSourcesRequest;
        class ListFaqsRequest;
        class ListIndicesRequest;
        class ListTagsForResourceRequest;
        class QueryRequest;
        class StartDataSourceSyncJobRequest;
        class StopDataSourceSyncJobRequest;
        class SubmitFeedbackRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDataSourceRequest;
        class UpdateIndexRequest;

        typedef Aws::Utils::Outcome<BatchDeleteDocumentResult, KendraError> BatchDeleteDocumentOutcome;
        typedef Aws::Utils::Outcome<BatchPutDocumentResult, KendraError> BatchPutDocumentOutcome;
        typedef Aws::Utils::Outcome<CreateDataSourceResult, KendraError> CreateDataSourceOutcome;
        typedef Aws::Utils::Outcome<CreateFaqResult, KendraError> CreateFaqOutcome;
        typedef Aws::Utils::Outcome<CreateIndexResult, KendraError> CreateIndexOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> DeleteDataSourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> DeleteFaqOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> DeleteIndexOutcome;
        typedef Aws::Utils::Outcome<DescribeDataSourceResult, KendraError> DescribeDataSourceOutcome;
        typedef Aws::Utils::Outcome<DescribeFaqResult, KendraError> DescribeFaqOutcome;
        typedef Aws::Utils::Outcome<DescribeIndexResult, KendraError> DescribeIndexOutcome;
        typedef Aws::Utils::Outcome<ListDataSourceSyncJobsResult, KendraError> ListDataSourceSyncJobsOutcome;
        typedef Aws::Utils::Outcome<ListDataSourcesResult, KendraError> ListDataSourcesOutcome;
        typedef Aws::Utils::Outcome<ListFaqsResult, KendraError> ListFaqsOutcome;
        typedef Aws::Utils::Outcome<ListIndicesResult, KendraError> ListIndicesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, KendraError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<QueryResult, KendraError> QueryOutcome;
        typedef Aws::Utils::Outcome<StartDataSourceSyncJobResult, KendraError> StartDataSourceSyncJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> StopDataSourceSyncJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> SubmitFeedbackOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, KendraError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, KendraError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> UpdateDataSourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> UpdateIndexOutcome;

        typedef std::future<BatchDeleteDocumentOutcome> BatchDeleteDocumentOutcomeCallable;
        typedef std::future<BatchPutDocumentOutcome> BatchPutDocumentOutcomeCallable;
        typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
        typedef std::future<CreateFaqOutcome> CreateFaqOutcomeCallable;
        typedef std::future<CreateIndexOutcome> CreateIndexOutcomeCallable;
        typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
        typedef std::future<DeleteFaqOutcome> DeleteFaqOutcomeCallable;
        typedef std::future<DeleteIndexOutcome> DeleteIndexOutcomeCallable;
        typedef std::future<DescribeDataSourceOutcome> DescribeDataSourceOutcomeCallable;
        typedef std::future<DescribeFaqOutcome> DescribeFaqOutcomeCallable;
        typedef std::future<DescribeIndexOutcome> DescribeIndexOutcomeCallable;
        typedef std::future<ListDataSourceSyncJobsOutcome> ListDataSourceSyncJobsOutcomeCallable;
        typedef std::future<ListDataSourcesOutcome> ListDataSourcesOutcomeCallable;
        typedef std::future<ListFaqsOutcome> ListFaqsOutcomeCallable;
        typedef std::future<ListIndicesOutcome> ListIndicesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<QueryOutcome> QueryOutcomeCallable;
        typedef std::future<StartDataSourceSyncJobOutcome> StartDataSourceSyncJobOutcomeCallable;
        typedef std::future<StopDataSourceSyncJobOutcome> StopDataSourceSyncJobOutcomeCallable;
        typedef std::future<SubmitFeedbackOutcome> SubmitFeedbackOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
        typedef std::future<UpdateIndexOutcome> UpdateIndexOutcomeCallable;
} // namespace Model

  class KendraClient;

    typedef std::function<void(const KendraClient*, const Model::BatchDeleteDocumentRequest&, const Model::BatchDeleteDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteDocumentResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::BatchPutDocumentRequest&, const Model::BatchPutDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutDocumentResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::CreateDataSourceRequest&, const Model::CreateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSourceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::CreateFaqRequest&, const Model::CreateFaqOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFaqResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::CreateIndexRequest&, const Model::CreateIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIndexResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DeleteDataSourceRequest&, const Model::DeleteDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSourceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DeleteFaqRequest&, const Model::DeleteFaqOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFaqResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DeleteIndexRequest&, const Model::DeleteIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIndexResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DescribeDataSourceRequest&, const Model::DescribeDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSourceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DescribeFaqRequest&, const Model::DescribeFaqOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFaqResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DescribeIndexRequest&, const Model::DescribeIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIndexResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListDataSourceSyncJobsRequest&, const Model::ListDataSourceSyncJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourceSyncJobsResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListDataSourcesRequest&, const Model::ListDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourcesResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListFaqsRequest&, const Model::ListFaqsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFaqsResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListIndicesRequest&, const Model::ListIndicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIndicesResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::QueryRequest&, const Model::QueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::StartDataSourceSyncJobRequest&, const Model::StartDataSourceSyncJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDataSourceSyncJobResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::StopDataSourceSyncJobRequest&, const Model::StopDataSourceSyncJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDataSourceSyncJobResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::SubmitFeedbackRequest&, const Model::SubmitFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitFeedbackResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::UpdateDataSourceRequest&, const Model::UpdateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::UpdateIndexRequest&, const Model::UpdateIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIndexResponseReceivedHandler;

  /**
   * <p>Amazon Kendra is a service for indexing large document sets.</p>
   */
  class AWS_KENDRA_API KendraClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KendraClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KendraClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KendraClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~KendraClient();


        /**
         * <p>Removes one or more documents from an index. The documents must have been
         * added with the <a>BatchPutDocument</a> operation.</p> <p>The documents are
         * deleted asynchronously. You can see the progress of the deletion by using AWS
         * CloudWatch. Any error messages releated to the processing of the batch are sent
         * to you CloudWatch log.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BatchDeleteDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteDocumentOutcome BatchDeleteDocument(const Model::BatchDeleteDocumentRequest& request) const;

        /**
         * <p>Removes one or more documents from an index. The documents must have been
         * added with the <a>BatchPutDocument</a> operation.</p> <p>The documents are
         * deleted asynchronously. You can see the progress of the deletion by using AWS
         * CloudWatch. Any error messages releated to the processing of the batch are sent
         * to you CloudWatch log.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BatchDeleteDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteDocumentOutcomeCallable BatchDeleteDocumentCallable(const Model::BatchDeleteDocumentRequest& request) const;

        /**
         * <p>Removes one or more documents from an index. The documents must have been
         * added with the <a>BatchPutDocument</a> operation.</p> <p>The documents are
         * deleted asynchronously. You can see the progress of the deletion by using AWS
         * CloudWatch. Any error messages releated to the processing of the batch are sent
         * to you CloudWatch log.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BatchDeleteDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteDocumentAsync(const Model::BatchDeleteDocumentRequest& request, const BatchDeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more documents to an index.</p> <p>The
         * <code>BatchPutDocument</code> operation enables you to ingest inline documents
         * or a set of documents stored in an Amazon S3 bucket. Use this operation to
         * ingest your text and unstructured text into an index, add custom attributes to
         * the documents, and to attach an access control list to the documents added to
         * the index.</p> <p>The documents are indexed asynchronously. You can see the
         * progress of the batch using AWS CloudWatch. Any error messages related to
         * processing the batch are sent to your AWS CloudWatch log.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BatchPutDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutDocumentOutcome BatchPutDocument(const Model::BatchPutDocumentRequest& request) const;

        /**
         * <p>Adds one or more documents to an index.</p> <p>The
         * <code>BatchPutDocument</code> operation enables you to ingest inline documents
         * or a set of documents stored in an Amazon S3 bucket. Use this operation to
         * ingest your text and unstructured text into an index, add custom attributes to
         * the documents, and to attach an access control list to the documents added to
         * the index.</p> <p>The documents are indexed asynchronously. You can see the
         * progress of the batch using AWS CloudWatch. Any error messages related to
         * processing the batch are sent to your AWS CloudWatch log.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BatchPutDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutDocumentOutcomeCallable BatchPutDocumentCallable(const Model::BatchPutDocumentRequest& request) const;

        /**
         * <p>Adds one or more documents to an index.</p> <p>The
         * <code>BatchPutDocument</code> operation enables you to ingest inline documents
         * or a set of documents stored in an Amazon S3 bucket. Use this operation to
         * ingest your text and unstructured text into an index, add custom attributes to
         * the documents, and to attach an access control list to the documents added to
         * the index.</p> <p>The documents are indexed asynchronously. You can see the
         * progress of the batch using AWS CloudWatch. Any error messages related to
         * processing the batch are sent to your AWS CloudWatch log.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BatchPutDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutDocumentAsync(const Model::BatchPutDocumentRequest& request, const BatchPutDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a data source that you use to with an Amazon Kendra index. </p>
         * <p>You specify a name, data source connector type and description for your data
         * source. You also specify configuration information such as document metadata
         * (author, source URI, and so on) and user context information.</p> <p>
         * <code>CreateDataSource</code> is a synchronous operation. The operation returns
         * 200 if the data source was successfully created. Otherwise, an exception is
         * raised.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest& request) const;

        /**
         * <p>Creates a data source that you use to with an Amazon Kendra index. </p>
         * <p>You specify a name, data source connector type and description for your data
         * source. You also specify configuration information such as document metadata
         * (author, source URI, and so on) and user context information.</p> <p>
         * <code>CreateDataSource</code> is a synchronous operation. The operation returns
         * 200 if the data source was successfully created. Otherwise, an exception is
         * raised.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataSourceOutcomeCallable CreateDataSourceCallable(const Model::CreateDataSourceRequest& request) const;

        /**
         * <p>Creates a data source that you use to with an Amazon Kendra index. </p>
         * <p>You specify a name, data source connector type and description for your data
         * source. You also specify configuration information such as document metadata
         * (author, source URI, and so on) and user context information.</p> <p>
         * <code>CreateDataSource</code> is a synchronous operation. The operation returns
         * 200 if the data source was successfully created. Otherwise, an exception is
         * raised.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSourceAsync(const Model::CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an new set of frequently asked question (FAQ) questions and
         * answers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateFaq">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFaqOutcome CreateFaq(const Model::CreateFaqRequest& request) const;

        /**
         * <p>Creates an new set of frequently asked question (FAQ) questions and
         * answers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateFaq">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFaqOutcomeCallable CreateFaqCallable(const Model::CreateFaqRequest& request) const;

        /**
         * <p>Creates an new set of frequently asked question (FAQ) questions and
         * answers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateFaq">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFaqAsync(const Model::CreateFaqRequest& request, const CreateFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Kendra index. Index creation is an asynchronous
         * operation. To determine if index creation has completed, check the
         * <code>Status</code> field returned from a call to . The <code>Status</code>
         * field is set to <code>ACTIVE</code> when the index is ready to use.</p> <p>Once
         * the index is active you can index your documents using the operation or using
         * one of the supported data sources. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIndexOutcome CreateIndex(const Model::CreateIndexRequest& request) const;

        /**
         * <p>Creates a new Amazon Kendra index. Index creation is an asynchronous
         * operation. To determine if index creation has completed, check the
         * <code>Status</code> field returned from a call to . The <code>Status</code>
         * field is set to <code>ACTIVE</code> when the index is ready to use.</p> <p>Once
         * the index is active you can index your documents using the operation or using
         * one of the supported data sources. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIndexOutcomeCallable CreateIndexCallable(const Model::CreateIndexRequest& request) const;

        /**
         * <p>Creates a new Amazon Kendra index. Index creation is an asynchronous
         * operation. To determine if index creation has completed, check the
         * <code>Status</code> field returned from a call to . The <code>Status</code>
         * field is set to <code>ACTIVE</code> when the index is ready to use.</p> <p>Once
         * the index is active you can index your documents using the operation or using
         * one of the supported data sources. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIndexAsync(const Model::CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Kendra data source. An exception is not thrown if the data
         * source is already being deleted. While the data source is being deleted, the
         * <code>Status</code> field returned by a call to the operation is set to
         * <code>DELETING</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/delete-data-source.html">Deleting
         * Data Sources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * <p>Deletes an Amazon Kendra data source. An exception is not thrown if the data
         * source is already being deleted. While the data source is being deleted, the
         * <code>Status</code> field returned by a call to the operation is set to
         * <code>DELETING</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/delete-data-source.html">Deleting
         * Data Sources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const Model::DeleteDataSourceRequest& request) const;

        /**
         * <p>Deletes an Amazon Kendra data source. An exception is not thrown if the data
         * source is already being deleted. While the data source is being deleted, the
         * <code>Status</code> field returned by a call to the operation is set to
         * <code>DELETING</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/delete-data-source.html">Deleting
         * Data Sources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an FAQ from an index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteFaq">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFaqOutcome DeleteFaq(const Model::DeleteFaqRequest& request) const;

        /**
         * <p>Removes an FAQ from an index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteFaq">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFaqOutcomeCallable DeleteFaqCallable(const Model::DeleteFaqRequest& request) const;

        /**
         * <p>Removes an FAQ from an index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteFaq">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFaqAsync(const Model::DeleteFaqRequest& request, const DeleteFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing Amazon Kendra index. An exception is not thrown if the
         * index is already being deleted. While the index is being deleted, the
         * <code>Status</code> field returned by a call to the <a>DescribeIndex</a>
         * operation is set to <code>DELETING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIndexOutcome DeleteIndex(const Model::DeleteIndexRequest& request) const;

        /**
         * <p>Deletes an existing Amazon Kendra index. An exception is not thrown if the
         * index is already being deleted. While the index is being deleted, the
         * <code>Status</code> field returned by a call to the <a>DescribeIndex</a>
         * operation is set to <code>DELETING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIndexOutcomeCallable DeleteIndexCallable(const Model::DeleteIndexRequest& request) const;

        /**
         * <p>Deletes an existing Amazon Kendra index. An exception is not thrown if the
         * index is already being deleted. While the index is being deleted, the
         * <code>Status</code> field returned by a call to the <a>DescribeIndex</a>
         * operation is set to <code>DELETING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIndexAsync(const Model::DeleteIndexRequest& request, const DeleteIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a Amazon Kendra data source.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSourceOutcome DescribeDataSource(const Model::DescribeDataSourceRequest& request) const;

        /**
         * <p>Gets information about a Amazon Kendra data source.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataSourceOutcomeCallable DescribeDataSourceCallable(const Model::DescribeDataSourceRequest& request) const;

        /**
         * <p>Gets information about a Amazon Kendra data source.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSourceAsync(const Model::DescribeDataSourceRequest& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an FAQ list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeFaq">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFaqOutcome DescribeFaq(const Model::DescribeFaqRequest& request) const;

        /**
         * <p>Gets information about an FAQ list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeFaq">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFaqOutcomeCallable DescribeFaqCallable(const Model::DescribeFaqRequest& request) const;

        /**
         * <p>Gets information about an FAQ list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeFaq">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFaqAsync(const Model::DescribeFaqRequest& request, const DescribeFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing Amazon Kendra index</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIndexOutcome DescribeIndex(const Model::DescribeIndexRequest& request) const;

        /**
         * <p>Describes an existing Amazon Kendra index</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIndexOutcomeCallable DescribeIndexCallable(const Model::DescribeIndexRequest& request) const;

        /**
         * <p>Describes an existing Amazon Kendra index</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIndexAsync(const Model::DescribeIndexRequest& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets statistics about synchronizing Amazon Kendra with a data
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListDataSourceSyncJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourceSyncJobsOutcome ListDataSourceSyncJobs(const Model::ListDataSourceSyncJobsRequest& request) const;

        /**
         * <p>Gets statistics about synchronizing Amazon Kendra with a data
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListDataSourceSyncJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataSourceSyncJobsOutcomeCallable ListDataSourceSyncJobsCallable(const Model::ListDataSourceSyncJobsRequest& request) const;

        /**
         * <p>Gets statistics about synchronizing Amazon Kendra with a data
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListDataSourceSyncJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataSourceSyncJobsAsync(const Model::ListDataSourceSyncJobsRequest& request, const ListDataSourceSyncJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the data sources that you have created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;

        /**
         * <p>Lists the data sources that you have created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListDataSources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataSourcesOutcomeCallable ListDataSourcesCallable(const Model::ListDataSourcesRequest& request) const;

        /**
         * <p>Lists the data sources that you have created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListDataSources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataSourcesAsync(const Model::ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of FAQ lists associated with an index.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListFaqs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFaqsOutcome ListFaqs(const Model::ListFaqsRequest& request) const;

        /**
         * <p>Gets a list of FAQ lists associated with an index.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListFaqs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFaqsOutcomeCallable ListFaqsCallable(const Model::ListFaqsRequest& request) const;

        /**
         * <p>Gets a list of FAQ lists associated with an index.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListFaqs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFaqsAsync(const Model::ListFaqsRequest& request, const ListFaqsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon Kendra indexes that you have created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListIndices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIndicesOutcome ListIndices(const Model::ListIndicesRequest& request) const;

        /**
         * <p>Lists the Amazon Kendra indexes that you have created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListIndices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIndicesOutcomeCallable ListIndicesCallable(const Model::ListIndicesRequest& request) const;

        /**
         * <p>Lists the Amazon Kendra indexes that you have created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListIndices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIndicesAsync(const Model::ListIndicesRequest& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of tags associated with a specified resource. Indexes, FAQs, and
         * data sources can have tags associated with them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets a list of tags associated with a specified resource. Indexes, FAQs, and
         * data sources can have tags associated with them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets a list of tags associated with a specified resource. Indexes, FAQs, and
         * data sources can have tags associated with them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches an active index. Use this API to search your documents using query.
         * The <code>Query</code> operation enables to do faceted search and to filter
         * results based on document attributes.</p> <p>It also enables you to provide user
         * context that Amazon Kendra uses to enforce document access control in the search
         * results. </p> <p>Amazon Kendra searches your index for text content and question
         * and answer (FAQ) content. By default the response contains three types of
         * results.</p> <ul> <li> <p>Relevant passages</p> </li> <li> <p>Matching FAQs</p>
         * </li> <li> <p>Relevant documents</p> </li> </ul> <p>You can specify that the
         * query return only one type of result using the
         * <code>QueryResultTypeConfig</code> parameter.</p> <p>Each query returns the 100
         * most relevant results. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Query">AWS API
         * Reference</a></p>
         */
        virtual Model::QueryOutcome Query(const Model::QueryRequest& request) const;

        /**
         * <p>Searches an active index. Use this API to search your documents using query.
         * The <code>Query</code> operation enables to do faceted search and to filter
         * results based on document attributes.</p> <p>It also enables you to provide user
         * context that Amazon Kendra uses to enforce document access control in the search
         * results. </p> <p>Amazon Kendra searches your index for text content and question
         * and answer (FAQ) content. By default the response contains three types of
         * results.</p> <ul> <li> <p>Relevant passages</p> </li> <li> <p>Matching FAQs</p>
         * </li> <li> <p>Relevant documents</p> </li> </ul> <p>You can specify that the
         * query return only one type of result using the
         * <code>QueryResultTypeConfig</code> parameter.</p> <p>Each query returns the 100
         * most relevant results. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Query">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::QueryOutcomeCallable QueryCallable(const Model::QueryRequest& request) const;

        /**
         * <p>Searches an active index. Use this API to search your documents using query.
         * The <code>Query</code> operation enables to do faceted search and to filter
         * results based on document attributes.</p> <p>It also enables you to provide user
         * context that Amazon Kendra uses to enforce document access control in the search
         * results. </p> <p>Amazon Kendra searches your index for text content and question
         * and answer (FAQ) content. By default the response contains three types of
         * results.</p> <ul> <li> <p>Relevant passages</p> </li> <li> <p>Matching FAQs</p>
         * </li> <li> <p>Relevant documents</p> </li> </ul> <p>You can specify that the
         * query return only one type of result using the
         * <code>QueryResultTypeConfig</code> parameter.</p> <p>Each query returns the 100
         * most relevant results. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Query">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QueryAsync(const Model::QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a synchronization job for a data source. If a synchronization job is
         * already in progress, Amazon Kendra returns a <code>ResourceInUseException</code>
         * exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/StartDataSourceSyncJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDataSourceSyncJobOutcome StartDataSourceSyncJob(const Model::StartDataSourceSyncJobRequest& request) const;

        /**
         * <p>Starts a synchronization job for a data source. If a synchronization job is
         * already in progress, Amazon Kendra returns a <code>ResourceInUseException</code>
         * exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/StartDataSourceSyncJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDataSourceSyncJobOutcomeCallable StartDataSourceSyncJobCallable(const Model::StartDataSourceSyncJobRequest& request) const;

        /**
         * <p>Starts a synchronization job for a data source. If a synchronization job is
         * already in progress, Amazon Kendra returns a <code>ResourceInUseException</code>
         * exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/StartDataSourceSyncJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDataSourceSyncJobAsync(const Model::StartDataSourceSyncJobRequest& request, const StartDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a running synchronization job. You can't stop a scheduled
         * synchronization job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/StopDataSourceSyncJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDataSourceSyncJobOutcome StopDataSourceSyncJob(const Model::StopDataSourceSyncJobRequest& request) const;

        /**
         * <p>Stops a running synchronization job. You can't stop a scheduled
         * synchronization job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/StopDataSourceSyncJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDataSourceSyncJobOutcomeCallable StopDataSourceSyncJobCallable(const Model::StopDataSourceSyncJobRequest& request) const;

        /**
         * <p>Stops a running synchronization job. You can't stop a scheduled
         * synchronization job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/StopDataSourceSyncJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDataSourceSyncJobAsync(const Model::StopDataSourceSyncJobRequest& request, const StopDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables you to provide feedback to Amazon Kendra to improve the performance
         * of the service. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SubmitFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::SubmitFeedbackOutcome SubmitFeedback(const Model::SubmitFeedbackRequest& request) const;

        /**
         * <p>Enables you to provide feedback to Amazon Kendra to improve the performance
         * of the service. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SubmitFeedback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubmitFeedbackOutcomeCallable SubmitFeedbackCallable(const Model::SubmitFeedbackRequest& request) const;

        /**
         * <p>Enables you to provide feedback to Amazon Kendra to improve the performance
         * of the service. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SubmitFeedback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubmitFeedbackAsync(const Model::SubmitFeedbackRequest& request, const SubmitFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tag to the specified index, FAQ, or data source resource.
         * If the tag already exists, the existing value is replaced with the new
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tag to the specified index, FAQ, or data source resource.
         * If the tag already exists, the existing value is replaced with the new
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tag to the specified index, FAQ, or data source resource.
         * If the tag already exists, the existing value is replaced with the new
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag from an index, FAQ, or a data source.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from an index, FAQ, or a data source.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from an index, FAQ, or a data source.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing Amazon Kendra data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * <p>Updates an existing Amazon Kendra data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const Model::UpdateDataSourceRequest& request) const;

        /**
         * <p>Updates an existing Amazon Kendra data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSourceAsync(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing Amazon Kendra index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIndexOutcome UpdateIndex(const Model::UpdateIndexRequest& request) const;

        /**
         * <p>Updates an existing Amazon Kendra index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIndexOutcomeCallable UpdateIndexCallable(const Model::UpdateIndexRequest& request) const;

        /**
         * <p>Updates an existing Amazon Kendra index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIndexAsync(const Model::UpdateIndexRequest& request, const UpdateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchDeleteDocumentAsyncHelper(const Model::BatchDeleteDocumentRequest& request, const BatchDeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchPutDocumentAsyncHelper(const Model::BatchPutDocumentRequest& request, const BatchPutDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDataSourceAsyncHelper(const Model::CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFaqAsyncHelper(const Model::CreateFaqRequest& request, const CreateFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIndexAsyncHelper(const Model::CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDataSourceAsyncHelper(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFaqAsyncHelper(const Model::DeleteFaqRequest& request, const DeleteFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIndexAsyncHelper(const Model::DeleteIndexRequest& request, const DeleteIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDataSourceAsyncHelper(const Model::DescribeDataSourceRequest& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFaqAsyncHelper(const Model::DescribeFaqRequest& request, const DescribeFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIndexAsyncHelper(const Model::DescribeIndexRequest& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDataSourceSyncJobsAsyncHelper(const Model::ListDataSourceSyncJobsRequest& request, const ListDataSourceSyncJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDataSourcesAsyncHelper(const Model::ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFaqsAsyncHelper(const Model::ListFaqsRequest& request, const ListFaqsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIndicesAsyncHelper(const Model::ListIndicesRequest& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void QueryAsyncHelper(const Model::QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDataSourceSyncJobAsyncHelper(const Model::StartDataSourceSyncJobRequest& request, const StartDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopDataSourceSyncJobAsyncHelper(const Model::StopDataSourceSyncJobRequest& request, const StopDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubmitFeedbackAsyncHelper(const Model::SubmitFeedbackRequest& request, const SubmitFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDataSourceAsyncHelper(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIndexAsyncHelper(const Model::UpdateIndexRequest& request, const UpdateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace kendra
} // namespace Aws
