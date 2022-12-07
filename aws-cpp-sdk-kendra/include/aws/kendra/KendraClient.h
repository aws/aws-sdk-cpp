/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kendra/KendraServiceClientModel.h>

namespace Aws
{
namespace kendra
{
  /**
   * <p>Amazon Kendra is a service for indexing large document sets.</p>
   */
  class AWS_KENDRA_API KendraClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<KendraClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KendraClient(const Aws::kendra::KendraClientConfiguration& clientConfiguration = Aws::kendra::KendraClientConfiguration(),
                     std::shared_ptr<KendraEndpointProviderBase> endpointProvider = Aws::MakeShared<KendraEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KendraClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<KendraEndpointProviderBase> endpointProvider = Aws::MakeShared<KendraEndpointProvider>(ALLOCATION_TAG),
                     const Aws::kendra::KendraClientConfiguration& clientConfiguration = Aws::kendra::KendraClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KendraClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<KendraEndpointProviderBase> endpointProvider = Aws::MakeShared<KendraEndpointProvider>(ALLOCATION_TAG),
                     const Aws::kendra::KendraClientConfiguration& clientConfiguration = Aws::kendra::KendraClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KendraClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KendraClient(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KendraClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KendraClient();

        /**
         * <p>Grants users or groups in your IAM Identity Center identity source access to
         * your Amazon Kendra experience. You can create an Amazon Kendra experience such
         * as a search application. For more information on creating a search application
         * experience, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building
         * a search experience with no code</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/AssociateEntitiesToExperience">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateEntitiesToExperienceOutcome AssociateEntitiesToExperience(const Model::AssociateEntitiesToExperienceRequest& request) const;

        /**
         * A Callable wrapper for AssociateEntitiesToExperience that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateEntitiesToExperienceOutcomeCallable AssociateEntitiesToExperienceCallable(const Model::AssociateEntitiesToExperienceRequest& request) const;

        /**
         * An Async wrapper for AssociateEntitiesToExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateEntitiesToExperienceAsync(const Model::AssociateEntitiesToExperienceRequest& request, const AssociateEntitiesToExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines the specific permissions of users or groups in your IAM Identity
         * Center identity source with access to your Amazon Kendra experience. You can
         * create an Amazon Kendra experience such as a search application. For more
         * information on creating a search application experience, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building
         * a search experience with no code</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/AssociatePersonasToEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePersonasToEntitiesOutcome AssociatePersonasToEntities(const Model::AssociatePersonasToEntitiesRequest& request) const;

        /**
         * A Callable wrapper for AssociatePersonasToEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociatePersonasToEntitiesOutcomeCallable AssociatePersonasToEntitiesCallable(const Model::AssociatePersonasToEntitiesRequest& request) const;

        /**
         * An Async wrapper for AssociatePersonasToEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePersonasToEntitiesAsync(const Model::AssociatePersonasToEntitiesRequest& request, const AssociatePersonasToEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more documents from an index. The documents must have been
         * added with the <code>BatchPutDocument</code> API.</p> <p>The documents are
         * deleted asynchronously. You can see the progress of the deletion by using Amazon
         * Web Services CloudWatch. Any error messages related to the processing of the
         * batch are sent to you CloudWatch log.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BatchDeleteDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteDocumentOutcome BatchDeleteDocument(const Model::BatchDeleteDocumentRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteDocumentOutcomeCallable BatchDeleteDocumentCallable(const Model::BatchDeleteDocumentRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteDocumentAsync(const Model::BatchDeleteDocumentRequest& request, const BatchDeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the indexing status for one or more documents submitted with the <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchPutDocument.html">
         * BatchPutDocument</a> API.</p> <p>When you use the <code>BatchPutDocument</code>
         * API, documents are indexed asynchronously. You can use the
         * <code>BatchGetDocumentStatus</code> API to get the current status of a list of
         * documents so that you can determine if they have been successfully indexed.</p>
         * <p>You can also use the <code>BatchGetDocumentStatus</code> API to check the
         * status of the <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchDeleteDocument.html">
         * BatchDeleteDocument</a> API. When a document is deleted from the index, Amazon
         * Kendra returns <code>NOT_FOUND</code> as the status.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BatchGetDocumentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetDocumentStatusOutcome BatchGetDocumentStatus(const Model::BatchGetDocumentStatusRequest& request) const;

        /**
         * A Callable wrapper for BatchGetDocumentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetDocumentStatusOutcomeCallable BatchGetDocumentStatusCallable(const Model::BatchGetDocumentStatusRequest& request) const;

        /**
         * An Async wrapper for BatchGetDocumentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDocumentStatusAsync(const Model::BatchGetDocumentStatusRequest& request, const BatchGetDocumentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more documents to an index.</p> <p>The
         * <code>BatchPutDocument</code> API enables you to ingest inline documents or a
         * set of documents stored in an Amazon S3 bucket. Use this API to ingest your text
         * and unstructured text into an index, add custom attributes to the documents, and
         * to attach an access control list to the documents added to the index.</p> <p>The
         * documents are indexed asynchronously. You can see the progress of the batch
         * using Amazon Web Services CloudWatch. Any error messages related to processing
         * the batch are sent to your Amazon Web Services CloudWatch log.</p> <p>For an
         * example of ingesting inline documents using Python and Java SDKs, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-binary-doc.html">Adding
         * files directly to an index</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BatchPutDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutDocumentOutcome BatchPutDocument(const Model::BatchPutDocumentRequest& request) const;

        /**
         * A Callable wrapper for BatchPutDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutDocumentOutcomeCallable BatchPutDocumentCallable(const Model::BatchPutDocumentRequest& request) const;

        /**
         * An Async wrapper for BatchPutDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutDocumentAsync(const Model::BatchPutDocumentRequest& request, const BatchPutDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Clears existing query suggestions from an index.</p> <p>This deletes existing
         * suggestions only, not the queries in the query log. After you clear suggestions,
         * Amazon Kendra learns new suggestions based on new queries added to the query log
         * from the time you cleared suggestions. If you do not see any new suggestions,
         * then please allow Amazon Kendra to collect enough queries to learn new
         * suggestions.</p> <p> <code>ClearQuerySuggestions</code> is currently not
         * supported in the Amazon Web Services GovCloud (US-West) region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ClearQuerySuggestions">AWS
         * API Reference</a></p>
         */
        virtual Model::ClearQuerySuggestionsOutcome ClearQuerySuggestions(const Model::ClearQuerySuggestionsRequest& request) const;

        /**
         * A Callable wrapper for ClearQuerySuggestions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ClearQuerySuggestionsOutcomeCallable ClearQuerySuggestionsCallable(const Model::ClearQuerySuggestionsRequest& request) const;

        /**
         * An Async wrapper for ClearQuerySuggestions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ClearQuerySuggestionsAsync(const Model::ClearQuerySuggestionsRequest& request, const ClearQuerySuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an access configuration for your documents. This includes user and
         * group access information for your documents. This is useful for user context
         * filtering, where search results are filtered based on the user or their group
         * access to documents.</p> <p>You can use this to re-configure your existing
         * document level access control without indexing all of your documents again. For
         * example, your index contains top-secret company documents that only certain
         * employees or users should access. One of these users leaves the company or
         * switches to a team that should be blocked from accessing top-secret documents.
         * The user still has access to top-secret documents because the user had access
         * when your documents were previously indexed. You can create a specific access
         * control configuration for the user with deny access. You can later update the
         * access control configuration to allow access if the user returns to the company
         * and re-joins the 'top-secret' team. You can re-configure access control for your
         * documents as circumstances change.</p> <p>To apply your access control
         * configuration to certain documents, you call the <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchPutDocument.html">BatchPutDocument</a>
         * API with the <code>AccessControlConfigurationId</code> included in the <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Document.html">Document</a>
         * object. If you use an S3 bucket as a data source, you update the
         * <code>.metadata.json</code> with the <code>AccessControlConfigurationId</code>
         * and synchronize your data source. Amazon Kendra currently only supports access
         * control configuration for S3 data sources and documents indexed using the
         * <code>BatchPutDocument</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateAccessControlConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessControlConfigurationOutcome CreateAccessControlConfiguration(const Model::CreateAccessControlConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessControlConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessControlConfigurationOutcomeCallable CreateAccessControlConfigurationCallable(const Model::CreateAccessControlConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateAccessControlConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessControlConfigurationAsync(const Model::CreateAccessControlConfigurationRequest& request, const CreateAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a data source connector that you want to use with an Amazon Kendra
         * index.</p> <p>You specify a name, data source connector type and description for
         * your data source. You also specify configuration information for the data source
         * connector.</p> <p> <code>CreateDataSource</code> is a synchronous operation. The
         * operation returns 200 if the data source was successfully created. Otherwise, an
         * exception is raised.</p> <p>Amazon S3 and <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-custom.html">custom</a>
         * data sources are the only supported data sources in the Amazon Web Services
         * GovCloud (US-West) region.</p> <p>For an example of creating an index and data
         * source using the Python SDK, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/gs-python.html">Getting
         * started with Python SDK</a>. For an example of creating an index and data source
         * using the Java SDK, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/gs-java.html">Getting started
         * with Java SDK</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataSourceOutcomeCallable CreateDataSourceCallable(const Model::CreateDataSourceRequest& request) const;

        /**
         * An Async wrapper for CreateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSourceAsync(const Model::CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Kendra experience such as a search application. For more
         * information on creating a search application experience, including using the
         * Python and Java SDKs, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building
         * a search experience with no code</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateExperience">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExperienceOutcome CreateExperience(const Model::CreateExperienceRequest& request) const;

        /**
         * A Callable wrapper for CreateExperience that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExperienceOutcomeCallable CreateExperienceCallable(const Model::CreateExperienceRequest& request) const;

        /**
         * An Async wrapper for CreateExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExperienceAsync(const Model::CreateExperienceRequest& request, const CreateExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an new set of frequently asked question (FAQ) questions and
         * answers.</p> <p>Adding FAQs to an index is an asynchronous operation.</p> <p>For
         * an example of adding an FAQ to an index using Python and Java SDKs, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/in-creating-faq.html#using-faq-file">Using
         * your FAQ file</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateFaq">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFaqOutcome CreateFaq(const Model::CreateFaqRequest& request) const;

        /**
         * A Callable wrapper for CreateFaq that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFaqOutcomeCallable CreateFaqCallable(const Model::CreateFaqRequest& request) const;

        /**
         * An Async wrapper for CreateFaq that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFaqAsync(const Model::CreateFaqRequest& request, const CreateFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Kendra index. Index creation is an asynchronous API. To
         * determine if index creation has completed, check the <code>Status</code> field
         * returned from a call to <code>DescribeIndex</code>. The <code>Status</code>
         * field is set to <code>ACTIVE</code> when the index is ready to use.</p> <p>Once
         * the index is active you can index your documents using the
         * <code>BatchPutDocument</code> API or using one of the supported data
         * sources.</p> <p>For an example of creating an index and data source using the
         * Python SDK, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/gs-python.html">Getting
         * started with Python SDK</a>. For an example of creating an index and data source
         * using the Java SDK, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/gs-java.html">Getting started
         * with Java SDK</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIndexOutcome CreateIndex(const Model::CreateIndexRequest& request) const;

        /**
         * A Callable wrapper for CreateIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIndexOutcomeCallable CreateIndexCallable(const Model::CreateIndexRequest& request) const;

        /**
         * An Async wrapper for CreateIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIndexAsync(const Model::CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a block list to exlcude certain queries from suggestions.</p> <p>Any
         * query that contains words or phrases specified in the block list is blocked or
         * filtered out from being shown as a suggestion.</p> <p>You need to provide the
         * file location of your block list text file in your S3 bucket. In your text file,
         * enter each block word or phrase on a separate line.</p> <p>For information on
         * the current quota limits for block lists, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
         * Amazon Kendra</a>.</p> <p> <code>CreateQuerySuggestionsBlockList</code> is
         * currently not supported in the Amazon Web Services GovCloud (US-West)
         * region.</p> <p>For an example of creating a block list for query suggestions
         * using the Python SDK, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/query-suggestions.html#suggestions-block-list">Query
         * suggestions block list</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateQuerySuggestionsBlockList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQuerySuggestionsBlockListOutcome CreateQuerySuggestionsBlockList(const Model::CreateQuerySuggestionsBlockListRequest& request) const;

        /**
         * A Callable wrapper for CreateQuerySuggestionsBlockList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateQuerySuggestionsBlockListOutcomeCallable CreateQuerySuggestionsBlockListCallable(const Model::CreateQuerySuggestionsBlockListRequest& request) const;

        /**
         * An Async wrapper for CreateQuerySuggestionsBlockList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateQuerySuggestionsBlockListAsync(const Model::CreateQuerySuggestionsBlockListRequest& request, const CreateQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a thesaurus for an index. The thesaurus contains a list of synonyms
         * in Solr format.</p> <p>For an example of adding a thesaurus file to an index,
         * see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/index-synonyms-adding-thesaurus-file.html">Adding
         * custom synonyms to an index</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateThesaurus">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThesaurusOutcome CreateThesaurus(const Model::CreateThesaurusRequest& request) const;

        /**
         * A Callable wrapper for CreateThesaurus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThesaurusOutcomeCallable CreateThesaurusCallable(const Model::CreateThesaurusRequest& request) const;

        /**
         * An Async wrapper for CreateThesaurus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThesaurusAsync(const Model::CreateThesaurusRequest& request, const CreateThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an access control configuration that you created for your documents
         * in an index. This includes user and group access information for your documents.
         * This is useful for user context filtering, where search results are filtered
         * based on the user or their group access to documents.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteAccessControlConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessControlConfigurationOutcome DeleteAccessControlConfiguration(const Model::DeleteAccessControlConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessControlConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessControlConfigurationOutcomeCallable DeleteAccessControlConfigurationCallable(const Model::DeleteAccessControlConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteAccessControlConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessControlConfigurationAsync(const Model::DeleteAccessControlConfigurationRequest& request, const DeleteAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Kendra data source connector. An exception is not thrown if
         * the data source is already being deleted. While the data source is being
         * deleted, the <code>Status</code> field returned by a call to the
         * <code>DescribeDataSource</code> API is set to <code>DELETING</code>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/delete-data-source.html">Deleting
         * Data Sources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const Model::DeleteDataSourceRequest& request) const;

        /**
         * An Async wrapper for DeleteDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes your Amazon Kendra experience such as a search application. For more
         * information on creating a search application experience, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building
         * a search experience with no code</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteExperience">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExperienceOutcome DeleteExperience(const Model::DeleteExperienceRequest& request) const;

        /**
         * A Callable wrapper for DeleteExperience that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteExperienceOutcomeCallable DeleteExperienceCallable(const Model::DeleteExperienceRequest& request) const;

        /**
         * An Async wrapper for DeleteExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteExperienceAsync(const Model::DeleteExperienceRequest& request, const DeleteExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an FAQ from an index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteFaq">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFaqOutcome DeleteFaq(const Model::DeleteFaqRequest& request) const;

        /**
         * A Callable wrapper for DeleteFaq that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFaqOutcomeCallable DeleteFaqCallable(const Model::DeleteFaqRequest& request) const;

        /**
         * An Async wrapper for DeleteFaq that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFaqAsync(const Model::DeleteFaqRequest& request, const DeleteFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing Amazon Kendra index. An exception is not thrown if the
         * index is already being deleted. While the index is being deleted, the
         * <code>Status</code> field returned by a call to the <code>DescribeIndex</code>
         * API is set to <code>DELETING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIndexOutcome DeleteIndex(const Model::DeleteIndexRequest& request) const;

        /**
         * A Callable wrapper for DeleteIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIndexOutcomeCallable DeleteIndexCallable(const Model::DeleteIndexRequest& request) const;

        /**
         * An Async wrapper for DeleteIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIndexAsync(const Model::DeleteIndexRequest& request, const DeleteIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a group so that all users and sub groups that belong to the group can
         * no longer access documents only available to that group.</p> <p>For example,
         * after deleting the group "Summer Interns", all interns who belonged to that
         * group no longer see intern-only documents in their search results.</p> <p>If you
         * want to delete or replace users or sub groups of a group, you need to use the
         * <code>PutPrincipalMapping</code> operation. For example, if a user in the group
         * "Engineering" leaves the engineering team and another user takes their place,
         * you provide an updated list of users or sub groups that belong to the
         * "Engineering" group when calling <code>PutPrincipalMapping</code>. You can
         * update your internal list of users or sub groups and input this list when
         * calling <code>PutPrincipalMapping</code>.</p> <p>
         * <code>DeletePrincipalMapping</code> is currently not supported in the Amazon Web
         * Services GovCloud (US-West) region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeletePrincipalMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePrincipalMappingOutcome DeletePrincipalMapping(const Model::DeletePrincipalMappingRequest& request) const;

        /**
         * A Callable wrapper for DeletePrincipalMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePrincipalMappingOutcomeCallable DeletePrincipalMappingCallable(const Model::DeletePrincipalMappingRequest& request) const;

        /**
         * An Async wrapper for DeletePrincipalMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePrincipalMappingAsync(const Model::DeletePrincipalMappingRequest& request, const DeletePrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a block list used for query suggestions for an index.</p> <p>A
         * deleted block list might not take effect right away. Amazon Kendra needs to
         * refresh the entire suggestions list to add back the queries that were previously
         * blocked.</p> <p> <code>DeleteQuerySuggestionsBlockList</code> is currently not
         * supported in the Amazon Web Services GovCloud (US-West) region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteQuerySuggestionsBlockList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQuerySuggestionsBlockListOutcome DeleteQuerySuggestionsBlockList(const Model::DeleteQuerySuggestionsBlockListRequest& request) const;

        /**
         * A Callable wrapper for DeleteQuerySuggestionsBlockList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteQuerySuggestionsBlockListOutcomeCallable DeleteQuerySuggestionsBlockListCallable(const Model::DeleteQuerySuggestionsBlockListRequest& request) const;

        /**
         * An Async wrapper for DeleteQuerySuggestionsBlockList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteQuerySuggestionsBlockListAsync(const Model::DeleteQuerySuggestionsBlockListRequest& request, const DeleteQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing Amazon Kendra thesaurus. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteThesaurus">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThesaurusOutcome DeleteThesaurus(const Model::DeleteThesaurusRequest& request) const;

        /**
         * A Callable wrapper for DeleteThesaurus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThesaurusOutcomeCallable DeleteThesaurusCallable(const Model::DeleteThesaurusRequest& request) const;

        /**
         * An Async wrapper for DeleteThesaurus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThesaurusAsync(const Model::DeleteThesaurusRequest& request, const DeleteThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an access control configuration that you created for
         * your documents in an index. This includes user and group access information for
         * your documents. This is useful for user context filtering, where search results
         * are filtered based on the user or their group access to documents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeAccessControlConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccessControlConfigurationOutcome DescribeAccessControlConfiguration(const Model::DescribeAccessControlConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccessControlConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccessControlConfigurationOutcomeCallable DescribeAccessControlConfigurationCallable(const Model::DescribeAccessControlConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeAccessControlConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccessControlConfigurationAsync(const Model::DescribeAccessControlConfigurationRequest& request, const DescribeAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an Amazon Kendra data source connector.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSourceOutcome DescribeDataSource(const Model::DescribeDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataSourceOutcomeCallable DescribeDataSourceCallable(const Model::DescribeDataSourceRequest& request) const;

        /**
         * An Async wrapper for DescribeDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSourceAsync(const Model::DescribeDataSourceRequest& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about your Amazon Kendra experience such as a search
         * application. For more information on creating a search application experience,
         * see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building
         * a search experience with no code</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeExperience">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExperienceOutcome DescribeExperience(const Model::DescribeExperienceRequest& request) const;

        /**
         * A Callable wrapper for DescribeExperience that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExperienceOutcomeCallable DescribeExperienceCallable(const Model::DescribeExperienceRequest& request) const;

        /**
         * An Async wrapper for DescribeExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExperienceAsync(const Model::DescribeExperienceRequest& request, const DescribeExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an FAQ list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeFaq">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFaqOutcome DescribeFaq(const Model::DescribeFaqRequest& request) const;

        /**
         * A Callable wrapper for DescribeFaq that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFaqOutcomeCallable DescribeFaqCallable(const Model::DescribeFaqRequest& request) const;

        /**
         * An Async wrapper for DescribeFaq that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFaqAsync(const Model::DescribeFaqRequest& request, const DescribeFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an existing Amazon Kendra index.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIndexOutcome DescribeIndex(const Model::DescribeIndexRequest& request) const;

        /**
         * A Callable wrapper for DescribeIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIndexOutcomeCallable DescribeIndexCallable(const Model::DescribeIndexRequest& request) const;

        /**
         * An Async wrapper for DescribeIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIndexAsync(const Model::DescribeIndexRequest& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the processing of <code>PUT</code> and <code>DELETE</code> actions
         * for mapping users to their groups. This includes information on the status of
         * actions currently processing or yet to be processed, when actions were last
         * updated, when actions were received by Amazon Kendra, the latest action that
         * should process and apply after other actions, and useful error messages if an
         * action could not be processed.</p> <p> <code>DescribePrincipalMapping</code> is
         * currently not supported in the Amazon Web Services GovCloud (US-West)
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribePrincipalMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePrincipalMappingOutcome DescribePrincipalMapping(const Model::DescribePrincipalMappingRequest& request) const;

        /**
         * A Callable wrapper for DescribePrincipalMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePrincipalMappingOutcomeCallable DescribePrincipalMappingCallable(const Model::DescribePrincipalMappingRequest& request) const;

        /**
         * An Async wrapper for DescribePrincipalMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePrincipalMappingAsync(const Model::DescribePrincipalMappingRequest& request, const DescribePrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a block list used for query suggestions for an
         * index.</p> <p>This is used to check the current settings that are applied to a
         * block list.</p> <p> <code>DescribeQuerySuggestionsBlockList</code> is currently
         * not supported in the Amazon Web Services GovCloud (US-West)
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeQuerySuggestionsBlockList">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQuerySuggestionsBlockListOutcome DescribeQuerySuggestionsBlockList(const Model::DescribeQuerySuggestionsBlockListRequest& request) const;

        /**
         * A Callable wrapper for DescribeQuerySuggestionsBlockList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeQuerySuggestionsBlockListOutcomeCallable DescribeQuerySuggestionsBlockListCallable(const Model::DescribeQuerySuggestionsBlockListRequest& request) const;

        /**
         * An Async wrapper for DescribeQuerySuggestionsBlockList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeQuerySuggestionsBlockListAsync(const Model::DescribeQuerySuggestionsBlockListRequest& request, const DescribeQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information on the settings of query suggestions for an index.</p>
         * <p>This is used to check the current settings applied to query suggestions.</p>
         * <p> <code>DescribeQuerySuggestionsConfig</code> is currently not supported in
         * the Amazon Web Services GovCloud (US-West) region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeQuerySuggestionsConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQuerySuggestionsConfigOutcome DescribeQuerySuggestionsConfig(const Model::DescribeQuerySuggestionsConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeQuerySuggestionsConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeQuerySuggestionsConfigOutcomeCallable DescribeQuerySuggestionsConfigCallable(const Model::DescribeQuerySuggestionsConfigRequest& request) const;

        /**
         * An Async wrapper for DescribeQuerySuggestionsConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeQuerySuggestionsConfigAsync(const Model::DescribeQuerySuggestionsConfigRequest& request, const DescribeQuerySuggestionsConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an existing Amazon Kendra thesaurus.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeThesaurus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThesaurusOutcome DescribeThesaurus(const Model::DescribeThesaurusRequest& request) const;

        /**
         * A Callable wrapper for DescribeThesaurus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeThesaurusOutcomeCallable DescribeThesaurusCallable(const Model::DescribeThesaurusRequest& request) const;

        /**
         * An Async wrapper for DescribeThesaurus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeThesaurusAsync(const Model::DescribeThesaurusRequest& request, const DescribeThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Prevents users or groups in your IAM Identity Center identity source from
         * accessing your Amazon Kendra experience. You can create an Amazon Kendra
         * experience such as a search application. For more information on creating a
         * search application experience, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building
         * a search experience with no code</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DisassociateEntitiesFromExperience">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateEntitiesFromExperienceOutcome DisassociateEntitiesFromExperience(const Model::DisassociateEntitiesFromExperienceRequest& request) const;

        /**
         * A Callable wrapper for DisassociateEntitiesFromExperience that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateEntitiesFromExperienceOutcomeCallable DisassociateEntitiesFromExperienceCallable(const Model::DisassociateEntitiesFromExperienceRequest& request) const;

        /**
         * An Async wrapper for DisassociateEntitiesFromExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateEntitiesFromExperienceAsync(const Model::DisassociateEntitiesFromExperienceRequest& request, const DisassociateEntitiesFromExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specific permissions of users or groups in your IAM Identity
         * Center identity source with access to your Amazon Kendra experience. You can
         * create an Amazon Kendra experience such as a search application. For more
         * information on creating a search application experience, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building
         * a search experience with no code</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DisassociatePersonasFromEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePersonasFromEntitiesOutcome DisassociatePersonasFromEntities(const Model::DisassociatePersonasFromEntitiesRequest& request) const;

        /**
         * A Callable wrapper for DisassociatePersonasFromEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociatePersonasFromEntitiesOutcomeCallable DisassociatePersonasFromEntitiesCallable(const Model::DisassociatePersonasFromEntitiesRequest& request) const;

        /**
         * An Async wrapper for DisassociatePersonasFromEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePersonasFromEntitiesAsync(const Model::DisassociatePersonasFromEntitiesRequest& request, const DisassociatePersonasFromEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Fetches the queries that are suggested to your users.</p> <p>
         * <code>GetQuerySuggestions</code> is currently not supported in the Amazon Web
         * Services GovCloud (US-West) region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/GetQuerySuggestions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQuerySuggestionsOutcome GetQuerySuggestions(const Model::GetQuerySuggestionsRequest& request) const;

        /**
         * A Callable wrapper for GetQuerySuggestions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQuerySuggestionsOutcomeCallable GetQuerySuggestionsCallable(const Model::GetQuerySuggestionsRequest& request) const;

        /**
         * An Async wrapper for GetQuerySuggestions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQuerySuggestionsAsync(const Model::GetQuerySuggestionsRequest& request, const GetQuerySuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves search metrics data. The data provides a snapshot of how your users
         * interact with your search application and how effective the application
         * is.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/GetSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSnapshotsOutcome GetSnapshots(const Model::GetSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for GetSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSnapshotsOutcomeCallable GetSnapshotsCallable(const Model::GetSnapshotsRequest& request) const;

        /**
         * An Async wrapper for GetSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSnapshotsAsync(const Model::GetSnapshotsRequest& request, const GetSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists one or more access control configurations for an index. This includes
         * user and group access information for your documents. This is useful for user
         * context filtering, where search results are filtered based on the user or their
         * group access to documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListAccessControlConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessControlConfigurationsOutcome ListAccessControlConfigurations(const Model::ListAccessControlConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListAccessControlConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessControlConfigurationsOutcomeCallable ListAccessControlConfigurationsCallable(const Model::ListAccessControlConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListAccessControlConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessControlConfigurationsAsync(const Model::ListAccessControlConfigurationsRequest& request, const ListAccessControlConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets statistics about synchronizing a data source connector.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListDataSourceSyncJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourceSyncJobsOutcome ListDataSourceSyncJobs(const Model::ListDataSourceSyncJobsRequest& request) const;

        /**
         * A Callable wrapper for ListDataSourceSyncJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataSourceSyncJobsOutcomeCallable ListDataSourceSyncJobsCallable(const Model::ListDataSourceSyncJobsRequest& request) const;

        /**
         * An Async wrapper for ListDataSourceSyncJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataSourceSyncJobsAsync(const Model::ListDataSourceSyncJobsRequest& request, const ListDataSourceSyncJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the data source connectors that you have created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListDataSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataSourcesOutcomeCallable ListDataSourcesCallable(const Model::ListDataSourcesRequest& request) const;

        /**
         * An Async wrapper for ListDataSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataSourcesAsync(const Model::ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists specific permissions of users and groups with access to your Amazon
         * Kendra experience.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListEntityPersonas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntityPersonasOutcome ListEntityPersonas(const Model::ListEntityPersonasRequest& request) const;

        /**
         * A Callable wrapper for ListEntityPersonas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntityPersonasOutcomeCallable ListEntityPersonasCallable(const Model::ListEntityPersonasRequest& request) const;

        /**
         * An Async wrapper for ListEntityPersonas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEntityPersonasAsync(const Model::ListEntityPersonasRequest& request, const ListEntityPersonasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists users or groups in your IAM Identity Center identity source that are
         * granted access to your Amazon Kendra experience. You can create an Amazon Kendra
         * experience such as a search application. For more information on creating a
         * search application experience, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building
         * a search experience with no code</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListExperienceEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperienceEntitiesOutcome ListExperienceEntities(const Model::ListExperienceEntitiesRequest& request) const;

        /**
         * A Callable wrapper for ListExperienceEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExperienceEntitiesOutcomeCallable ListExperienceEntitiesCallable(const Model::ListExperienceEntitiesRequest& request) const;

        /**
         * An Async wrapper for ListExperienceEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExperienceEntitiesAsync(const Model::ListExperienceEntitiesRequest& request, const ListExperienceEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists one or more Amazon Kendra experiences. You can create an Amazon Kendra
         * experience such as a search application. For more information on creating a
         * search application experience, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building
         * a search experience with no code</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListExperiences">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperiencesOutcome ListExperiences(const Model::ListExperiencesRequest& request) const;

        /**
         * A Callable wrapper for ListExperiences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExperiencesOutcomeCallable ListExperiencesCallable(const Model::ListExperiencesRequest& request) const;

        /**
         * An Async wrapper for ListExperiences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExperiencesAsync(const Model::ListExperiencesRequest& request, const ListExperiencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of FAQ lists associated with an index.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListFaqs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFaqsOutcome ListFaqs(const Model::ListFaqsRequest& request) const;

        /**
         * A Callable wrapper for ListFaqs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFaqsOutcomeCallable ListFaqsCallable(const Model::ListFaqsRequest& request) const;

        /**
         * An Async wrapper for ListFaqs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFaqsAsync(const Model::ListFaqsRequest& request, const ListFaqsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of groups that are mapped to users before a given ordering or
         * timestamp identifier.</p> <p> <code>ListGroupsOlderThanOrderingId</code> is
         * currently not supported in the Amazon Web Services GovCloud (US-West)
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListGroupsOlderThanOrderingId">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOlderThanOrderingIdOutcome ListGroupsOlderThanOrderingId(const Model::ListGroupsOlderThanOrderingIdRequest& request) const;

        /**
         * A Callable wrapper for ListGroupsOlderThanOrderingId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOlderThanOrderingIdOutcomeCallable ListGroupsOlderThanOrderingIdCallable(const Model::ListGroupsOlderThanOrderingIdRequest& request) const;

        /**
         * An Async wrapper for ListGroupsOlderThanOrderingId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsOlderThanOrderingIdAsync(const Model::ListGroupsOlderThanOrderingIdRequest& request, const ListGroupsOlderThanOrderingIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon Kendra indexes that you created.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListIndices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIndicesOutcome ListIndices(const Model::ListIndicesRequest& request) const;

        /**
         * A Callable wrapper for ListIndices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIndicesOutcomeCallable ListIndicesCallable(const Model::ListIndicesRequest& request) const;

        /**
         * An Async wrapper for ListIndices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIndicesAsync(const Model::ListIndicesRequest& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the block lists used for query suggestions for an index.</p> <p>For
         * information on the current quota limits for block lists, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
         * Amazon Kendra</a>.</p> <p> <code>ListQuerySuggestionsBlockLists</code> is
         * currently not supported in the Amazon Web Services GovCloud (US-West)
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListQuerySuggestionsBlockLists">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQuerySuggestionsBlockListsOutcome ListQuerySuggestionsBlockLists(const Model::ListQuerySuggestionsBlockListsRequest& request) const;

        /**
         * A Callable wrapper for ListQuerySuggestionsBlockLists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQuerySuggestionsBlockListsOutcomeCallable ListQuerySuggestionsBlockListsCallable(const Model::ListQuerySuggestionsBlockListsRequest& request) const;

        /**
         * An Async wrapper for ListQuerySuggestionsBlockLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQuerySuggestionsBlockListsAsync(const Model::ListQuerySuggestionsBlockListsRequest& request, const ListQuerySuggestionsBlockListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of tags associated with a specified resource. Indexes, FAQs, and
         * data sources can have tags associated with them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListTagsForResource">AWS
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
         * <p>Lists the thesauri for an index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListThesauri">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThesauriOutcome ListThesauri(const Model::ListThesauriRequest& request) const;

        /**
         * A Callable wrapper for ListThesauri that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThesauriOutcomeCallable ListThesauriCallable(const Model::ListThesauriRequest& request) const;

        /**
         * An Async wrapper for ListThesauri that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThesauriAsync(const Model::ListThesauriRequest& request, const ListThesauriResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Maps users to their groups so that you only need to provide the user ID when
         * you issue the query.</p> <p>You can also map sub groups to groups. For example,
         * the group "Company Intellectual Property Teams" includes sub groups "Research"
         * and "Engineering". These sub groups include their own list of users or people
         * who work in these teams. Only users who work in research and engineering, and
         * therefore belong in the intellectual property group, can see top-secret company
         * documents in their search results.</p> <p>This is useful for user context
         * filtering, where search results are filtered based on the user or their group
         * access to documents. For more information, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">Filtering
         * on user context</a>.</p> <p>If more than five <code>PUT</code> actions for a
         * group are currently processing, a validation exception is thrown.</p> <p>
         * <code>PutPrincipalMapping</code> is currently not supported in the Amazon Web
         * Services GovCloud (US-West) region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/PutPrincipalMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPrincipalMappingOutcome PutPrincipalMapping(const Model::PutPrincipalMappingRequest& request) const;

        /**
         * A Callable wrapper for PutPrincipalMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPrincipalMappingOutcomeCallable PutPrincipalMappingCallable(const Model::PutPrincipalMappingRequest& request) const;

        /**
         * An Async wrapper for PutPrincipalMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPrincipalMappingAsync(const Model::PutPrincipalMappingRequest& request, const PutPrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches an active index. Use this API to search your documents using query.
         * The <code>Query</code> API enables to do faceted search and to filter results
         * based on document attributes.</p> <p>It also enables you to provide user context
         * that Amazon Kendra uses to enforce document access control in the search
         * results.</p> <p>Amazon Kendra searches your index for text content and question
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
         * A Callable wrapper for Query that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::QueryOutcomeCallable QueryCallable(const Model::QueryRequest& request) const;

        /**
         * An Async wrapper for Query that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QueryAsync(const Model::QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a synchronization job for a data source connector. If a
         * synchronization job is already in progress, Amazon Kendra returns a
         * <code>ResourceInUseException</code> exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/StartDataSourceSyncJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDataSourceSyncJobOutcome StartDataSourceSyncJob(const Model::StartDataSourceSyncJobRequest& request) const;

        /**
         * A Callable wrapper for StartDataSourceSyncJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDataSourceSyncJobOutcomeCallable StartDataSourceSyncJobCallable(const Model::StartDataSourceSyncJobRequest& request) const;

        /**
         * An Async wrapper for StartDataSourceSyncJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDataSourceSyncJobAsync(const Model::StartDataSourceSyncJobRequest& request, const StartDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a synchronization job that is currently running. You can't stop a
         * scheduled synchronization job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/StopDataSourceSyncJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDataSourceSyncJobOutcome StopDataSourceSyncJob(const Model::StopDataSourceSyncJobRequest& request) const;

        /**
         * A Callable wrapper for StopDataSourceSyncJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDataSourceSyncJobOutcomeCallable StopDataSourceSyncJobCallable(const Model::StopDataSourceSyncJobRequest& request) const;

        /**
         * An Async wrapper for StopDataSourceSyncJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDataSourceSyncJobAsync(const Model::StopDataSourceSyncJobRequest& request, const StopDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables you to provide feedback to Amazon Kendra to improve the performance
         * of your index.</p> <p> <code>SubmitFeedback</code> is currently not supported in
         * the Amazon Web Services GovCloud (US-West) region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SubmitFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::SubmitFeedbackOutcome SubmitFeedback(const Model::SubmitFeedbackRequest& request) const;

        /**
         * A Callable wrapper for SubmitFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubmitFeedbackOutcomeCallable SubmitFeedbackCallable(const Model::SubmitFeedbackRequest& request) const;

        /**
         * An Async wrapper for SubmitFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an access control configuration for your documents in an index. This
         * includes user and group access information for your documents. This is useful
         * for user context filtering, where search results are filtered based on the user
         * or their group access to documents.</p> <p>You can update an access control
         * configuration you created without indexing all of your documents again. For
         * example, your index contains top-secret company documents that only certain
         * employees or users should access. You created an 'allow' access control
         * configuration for one user who recently joined the 'top-secret' team, switching
         * from a team with 'deny' access to top-secret documents. However, the user
         * suddenly returns to their previous team and should no longer have access to top
         * secret documents. You can update the access control configuration to
         * re-configure access control for your documents as circumstances change.</p>
         * <p>You call the <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchPutDocument.html">BatchPutDocument</a>
         * API to apply the updated access control configuration, with the
         * <code>AccessControlConfigurationId</code> included in the <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Document.html">Document</a>
         * object. If you use an S3 bucket as a data source, you synchronize your data
         * source to apply the <code>AccessControlConfigurationId</code> in the
         * <code>.metadata.json</code> file. Amazon Kendra currently only supports access
         * control configuration for S3 data sources and documents indexed using the
         * <code>BatchPutDocument</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateAccessControlConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccessControlConfigurationOutcome UpdateAccessControlConfiguration(const Model::UpdateAccessControlConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccessControlConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccessControlConfigurationOutcomeCallable UpdateAccessControlConfigurationCallable(const Model::UpdateAccessControlConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateAccessControlConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccessControlConfigurationAsync(const Model::UpdateAccessControlConfigurationRequest& request, const UpdateAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing Amazon Kendra data source connector.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const Model::UpdateDataSourceRequest& request) const;

        /**
         * An Async wrapper for UpdateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSourceAsync(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates your Amazon Kendra experience such as a search application. For more
         * information on creating a search application experience, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building
         * a search experience with no code</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateExperience">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExperienceOutcome UpdateExperience(const Model::UpdateExperienceRequest& request) const;

        /**
         * A Callable wrapper for UpdateExperience that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateExperienceOutcomeCallable UpdateExperienceCallable(const Model::UpdateExperienceRequest& request) const;

        /**
         * An Async wrapper for UpdateExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateExperienceAsync(const Model::UpdateExperienceRequest& request, const UpdateExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing Amazon Kendra index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIndexOutcome UpdateIndex(const Model::UpdateIndexRequest& request) const;

        /**
         * A Callable wrapper for UpdateIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIndexOutcomeCallable UpdateIndexCallable(const Model::UpdateIndexRequest& request) const;

        /**
         * An Async wrapper for UpdateIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIndexAsync(const Model::UpdateIndexRequest& request, const UpdateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a block list used for query suggestions for an index.</p> <p>Updates
         * to a block list might not take effect right away. Amazon Kendra needs to refresh
         * the entire suggestions list to apply any updates to the block list. Other
         * changes not related to the block list apply immediately.</p> <p>If a block list
         * is updating, then you need to wait for the first update to finish before
         * submitting another update.</p> <p>Amazon Kendra supports partial updates, so you
         * only need to provide the fields you want to update.</p> <p>
         * <code>UpdateQuerySuggestionsBlockList</code> is currently not supported in the
         * Amazon Web Services GovCloud (US-West) region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateQuerySuggestionsBlockList">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQuerySuggestionsBlockListOutcome UpdateQuerySuggestionsBlockList(const Model::UpdateQuerySuggestionsBlockListRequest& request) const;

        /**
         * A Callable wrapper for UpdateQuerySuggestionsBlockList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateQuerySuggestionsBlockListOutcomeCallable UpdateQuerySuggestionsBlockListCallable(const Model::UpdateQuerySuggestionsBlockListRequest& request) const;

        /**
         * An Async wrapper for UpdateQuerySuggestionsBlockList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateQuerySuggestionsBlockListAsync(const Model::UpdateQuerySuggestionsBlockListRequest& request, const UpdateQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings of query suggestions for an index.</p> <p>Amazon Kendra
         * supports partial updates, so you only need to provide the fields you want to
         * update.</p> <p>If an update is currently processing (i.e. 'happening'), you need
         * to wait for the update to finish before making another update.</p> <p>Updates to
         * query suggestions settings might not take effect right away. The time for your
         * updated settings to take effect depends on the updates made and the number of
         * search queries in your index.</p> <p>You can still enable/disable query
         * suggestions at any time.</p> <p> <code>UpdateQuerySuggestionsConfig</code> is
         * currently not supported in the Amazon Web Services GovCloud (US-West)
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateQuerySuggestionsConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQuerySuggestionsConfigOutcome UpdateQuerySuggestionsConfig(const Model::UpdateQuerySuggestionsConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateQuerySuggestionsConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateQuerySuggestionsConfigOutcomeCallable UpdateQuerySuggestionsConfigCallable(const Model::UpdateQuerySuggestionsConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateQuerySuggestionsConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateQuerySuggestionsConfigAsync(const Model::UpdateQuerySuggestionsConfigRequest& request, const UpdateQuerySuggestionsConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a thesaurus for an index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateThesaurus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThesaurusOutcome UpdateThesaurus(const Model::UpdateThesaurusRequest& request) const;

        /**
         * A Callable wrapper for UpdateThesaurus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThesaurusOutcomeCallable UpdateThesaurusCallable(const Model::UpdateThesaurusRequest& request) const;

        /**
         * An Async wrapper for UpdateThesaurus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThesaurusAsync(const Model::UpdateThesaurusRequest& request, const UpdateThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KendraEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KendraClient>;
      void init(const KendraClientConfiguration& clientConfiguration);

      KendraClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<KendraEndpointProviderBase> m_endpointProvider;
  };

} // namespace kendra
} // namespace Aws
