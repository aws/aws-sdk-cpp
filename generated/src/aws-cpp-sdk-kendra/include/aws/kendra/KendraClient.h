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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef KendraClientConfiguration ClientConfigurationType;
      typedef KendraEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KendraClient(const Aws::kendra::KendraClientConfiguration& clientConfiguration = Aws::kendra::KendraClientConfiguration(),
                     std::shared_ptr<KendraEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KendraClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<KendraEndpointProviderBase> endpointProvider = nullptr,
                     const Aws::kendra::KendraClientConfiguration& clientConfiguration = Aws::kendra::KendraClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KendraClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<KendraEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename AssociateEntitiesToExperienceRequestT = Model::AssociateEntitiesToExperienceRequest>
        Model::AssociateEntitiesToExperienceOutcomeCallable AssociateEntitiesToExperienceCallable(const AssociateEntitiesToExperienceRequestT& request) const
        {
            return SubmitCallable(&KendraClient::AssociateEntitiesToExperience, request);
        }

        /**
         * An Async wrapper for AssociateEntitiesToExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateEntitiesToExperienceRequestT = Model::AssociateEntitiesToExperienceRequest>
        void AssociateEntitiesToExperienceAsync(const AssociateEntitiesToExperienceRequestT& request, const AssociateEntitiesToExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::AssociateEntitiesToExperience, request, handler, context);
        }

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
        template<typename AssociatePersonasToEntitiesRequestT = Model::AssociatePersonasToEntitiesRequest>
        Model::AssociatePersonasToEntitiesOutcomeCallable AssociatePersonasToEntitiesCallable(const AssociatePersonasToEntitiesRequestT& request) const
        {
            return SubmitCallable(&KendraClient::AssociatePersonasToEntities, request);
        }

        /**
         * An Async wrapper for AssociatePersonasToEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociatePersonasToEntitiesRequestT = Model::AssociatePersonasToEntitiesRequest>
        void AssociatePersonasToEntitiesAsync(const AssociatePersonasToEntitiesRequestT& request, const AssociatePersonasToEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::AssociatePersonasToEntities, request, handler, context);
        }

        /**
         * <p>Removes one or more documents from an index. The documents must have been
         * added with the <code>BatchPutDocument</code> API.</p> <p>The documents are
         * deleted asynchronously. You can see the progress of the deletion by using Amazon
         * Web Services CloudWatch. Any error messages related to the processing of the
         * batch are sent to your Amazon Web Services CloudWatch log. You can also use the
         * <code>BatchGetDocumentStatus</code> API to monitor the progress of deleting your
         * documents.</p> <p>Deleting documents from an index using
         * <code>BatchDeleteDocument</code> could take up to an hour or more, depending on
         * the number of documents you want to delete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BatchDeleteDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteDocumentOutcome BatchDeleteDocument(const Model::BatchDeleteDocumentRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteDocumentRequestT = Model::BatchDeleteDocumentRequest>
        Model::BatchDeleteDocumentOutcomeCallable BatchDeleteDocumentCallable(const BatchDeleteDocumentRequestT& request) const
        {
            return SubmitCallable(&KendraClient::BatchDeleteDocument, request);
        }

        /**
         * An Async wrapper for BatchDeleteDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteDocumentRequestT = Model::BatchDeleteDocumentRequest>
        void BatchDeleteDocumentAsync(const BatchDeleteDocumentRequestT& request, const BatchDeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::BatchDeleteDocument, request, handler, context);
        }

        /**
         * <p>Removes one or more sets of featured results. Features results are placed
         * above all other results for certain queries. If there's an exact match of a
         * query, then one or more specific documents are featured in the search
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BatchDeleteFeaturedResultsSet">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteFeaturedResultsSetOutcome BatchDeleteFeaturedResultsSet(const Model::BatchDeleteFeaturedResultsSetRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteFeaturedResultsSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteFeaturedResultsSetRequestT = Model::BatchDeleteFeaturedResultsSetRequest>
        Model::BatchDeleteFeaturedResultsSetOutcomeCallable BatchDeleteFeaturedResultsSetCallable(const BatchDeleteFeaturedResultsSetRequestT& request) const
        {
            return SubmitCallable(&KendraClient::BatchDeleteFeaturedResultsSet, request);
        }

        /**
         * An Async wrapper for BatchDeleteFeaturedResultsSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteFeaturedResultsSetRequestT = Model::BatchDeleteFeaturedResultsSetRequest>
        void BatchDeleteFeaturedResultsSetAsync(const BatchDeleteFeaturedResultsSetRequestT& request, const BatchDeleteFeaturedResultsSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::BatchDeleteFeaturedResultsSet, request, handler, context);
        }

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
        template<typename BatchGetDocumentStatusRequestT = Model::BatchGetDocumentStatusRequest>
        Model::BatchGetDocumentStatusOutcomeCallable BatchGetDocumentStatusCallable(const BatchGetDocumentStatusRequestT& request) const
        {
            return SubmitCallable(&KendraClient::BatchGetDocumentStatus, request);
        }

        /**
         * An Async wrapper for BatchGetDocumentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetDocumentStatusRequestT = Model::BatchGetDocumentStatusRequest>
        void BatchGetDocumentStatusAsync(const BatchGetDocumentStatusRequestT& request, const BatchGetDocumentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::BatchGetDocumentStatus, request, handler, context);
        }

        /**
         * <p>Adds one or more documents to an index.</p> <p>The
         * <code>BatchPutDocument</code> API enables you to ingest inline documents or a
         * set of documents stored in an Amazon S3 bucket. Use this API to ingest your text
         * and unstructured text into an index, add custom attributes to the documents, and
         * to attach an access control list to the documents added to the index.</p> <p>The
         * documents are indexed asynchronously. You can see the progress of the batch
         * using Amazon Web Services CloudWatch. Any error messages related to processing
         * the batch are sent to your Amazon Web Services CloudWatch log. You can also use
         * the <code>BatchGetDocumentStatus</code> API to monitor the progress of indexing
         * your documents.</p> <p>For an example of ingesting inline documents using Python
         * and Java SDKs, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-binary-doc.html">Adding
         * files directly to an index</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BatchPutDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutDocumentOutcome BatchPutDocument(const Model::BatchPutDocumentRequest& request) const;

        /**
         * A Callable wrapper for BatchPutDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchPutDocumentRequestT = Model::BatchPutDocumentRequest>
        Model::BatchPutDocumentOutcomeCallable BatchPutDocumentCallable(const BatchPutDocumentRequestT& request) const
        {
            return SubmitCallable(&KendraClient::BatchPutDocument, request);
        }

        /**
         * An Async wrapper for BatchPutDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchPutDocumentRequestT = Model::BatchPutDocumentRequest>
        void BatchPutDocumentAsync(const BatchPutDocumentRequestT& request, const BatchPutDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::BatchPutDocument, request, handler, context);
        }

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
        template<typename ClearQuerySuggestionsRequestT = Model::ClearQuerySuggestionsRequest>
        Model::ClearQuerySuggestionsOutcomeCallable ClearQuerySuggestionsCallable(const ClearQuerySuggestionsRequestT& request) const
        {
            return SubmitCallable(&KendraClient::ClearQuerySuggestions, request);
        }

        /**
         * An Async wrapper for ClearQuerySuggestions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ClearQuerySuggestionsRequestT = Model::ClearQuerySuggestionsRequest>
        void ClearQuerySuggestionsAsync(const ClearQuerySuggestionsRequestT& request, const ClearQuerySuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::ClearQuerySuggestions, request, handler, context);
        }

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
        template<typename CreateAccessControlConfigurationRequestT = Model::CreateAccessControlConfigurationRequest>
        Model::CreateAccessControlConfigurationOutcomeCallable CreateAccessControlConfigurationCallable(const CreateAccessControlConfigurationRequestT& request) const
        {
            return SubmitCallable(&KendraClient::CreateAccessControlConfiguration, request);
        }

        /**
         * An Async wrapper for CreateAccessControlConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccessControlConfigurationRequestT = Model::CreateAccessControlConfigurationRequest>
        void CreateAccessControlConfigurationAsync(const CreateAccessControlConfigurationRequestT& request, const CreateAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::CreateAccessControlConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a data source connector that you want to use with an Amazon Kendra
         * index.</p> <p>You specify a name, data source connector type and description for
         * your data source. You also specify configuration information for the data source
         * connector.</p> <p> <code>CreateDataSource</code> is a synchronous operation. The
         * operation returns 200 if the data source was successfully created. Otherwise, an
         * exception is raised.</p> <p>For an example of creating an index and data source
         * using the Python SDK, see <a
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
        template<typename CreateDataSourceRequestT = Model::CreateDataSourceRequest>
        Model::CreateDataSourceOutcomeCallable CreateDataSourceCallable(const CreateDataSourceRequestT& request) const
        {
            return SubmitCallable(&KendraClient::CreateDataSource, request);
        }

        /**
         * An Async wrapper for CreateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataSourceRequestT = Model::CreateDataSourceRequest>
        void CreateDataSourceAsync(const CreateDataSourceRequestT& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::CreateDataSource, request, handler, context);
        }

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
        template<typename CreateExperienceRequestT = Model::CreateExperienceRequest>
        Model::CreateExperienceOutcomeCallable CreateExperienceCallable(const CreateExperienceRequestT& request) const
        {
            return SubmitCallable(&KendraClient::CreateExperience, request);
        }

        /**
         * An Async wrapper for CreateExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateExperienceRequestT = Model::CreateExperienceRequest>
        void CreateExperienceAsync(const CreateExperienceRequestT& request, const CreateExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::CreateExperience, request, handler, context);
        }

        /**
         * <p>Creates a set of frequently ask questions (FAQs) using a specified FAQ file
         * stored in an Amazon S3 bucket.</p> <p>Adding FAQs to an index is an asynchronous
         * operation.</p> <p>For an example of adding an FAQ to an index using Python and
         * Java SDKs, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/in-creating-faq.html#using-faq-file">Using
         * your FAQ file</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateFaq">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFaqOutcome CreateFaq(const Model::CreateFaqRequest& request) const;

        /**
         * A Callable wrapper for CreateFaq that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFaqRequestT = Model::CreateFaqRequest>
        Model::CreateFaqOutcomeCallable CreateFaqCallable(const CreateFaqRequestT& request) const
        {
            return SubmitCallable(&KendraClient::CreateFaq, request);
        }

        /**
         * An Async wrapper for CreateFaq that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFaqRequestT = Model::CreateFaqRequest>
        void CreateFaqAsync(const CreateFaqRequestT& request, const CreateFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::CreateFaq, request, handler, context);
        }

        /**
         * <p>Creates a set of featured results to display at the top of the search results
         * page. Featured results are placed above all other results for certain queries.
         * You map specific queries to specific documents for featuring in the results. If
         * a query contains an exact match, then one or more specific documents are
         * featured in the search results.</p> <p>You can create up to 50 sets of featured
         * results per index. You can request to increase this limit by contacting <a
         * href="http://aws.amazon.com/contact-us/">Support</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateFeaturedResultsSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFeaturedResultsSetOutcome CreateFeaturedResultsSet(const Model::CreateFeaturedResultsSetRequest& request) const;

        /**
         * A Callable wrapper for CreateFeaturedResultsSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFeaturedResultsSetRequestT = Model::CreateFeaturedResultsSetRequest>
        Model::CreateFeaturedResultsSetOutcomeCallable CreateFeaturedResultsSetCallable(const CreateFeaturedResultsSetRequestT& request) const
        {
            return SubmitCallable(&KendraClient::CreateFeaturedResultsSet, request);
        }

        /**
         * An Async wrapper for CreateFeaturedResultsSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFeaturedResultsSetRequestT = Model::CreateFeaturedResultsSetRequest>
        void CreateFeaturedResultsSetAsync(const CreateFeaturedResultsSetRequestT& request, const CreateFeaturedResultsSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::CreateFeaturedResultsSet, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Kendra index. Index creation is an asynchronous API. To
         * determine if index creation has completed, check the <code>Status</code> field
         * returned from a call to <code>DescribeIndex</code>. The <code>Status</code>
         * field is set to <code>ACTIVE</code> when the index is ready to use.</p> <p>Once
         * the index is active, you can index your documents using the
         * <code>BatchPutDocument</code> API or using one of the supported <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/data-sources.html">data
         * sources</a>.</p> <p>For an example of creating an index and data source using
         * the Python SDK, see <a
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
        template<typename CreateIndexRequestT = Model::CreateIndexRequest>
        Model::CreateIndexOutcomeCallable CreateIndexCallable(const CreateIndexRequestT& request) const
        {
            return SubmitCallable(&KendraClient::CreateIndex, request);
        }

        /**
         * An Async wrapper for CreateIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIndexRequestT = Model::CreateIndexRequest>
        void CreateIndexAsync(const CreateIndexRequestT& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::CreateIndex, request, handler, context);
        }

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
         * href="https://docs.aws.amazon.com/kendra/latest/dg/query-suggestions.html#query-suggestions-blocklist">Query
         * suggestions block list</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CreateQuerySuggestionsBlockList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQuerySuggestionsBlockListOutcome CreateQuerySuggestionsBlockList(const Model::CreateQuerySuggestionsBlockListRequest& request) const;

        /**
         * A Callable wrapper for CreateQuerySuggestionsBlockList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateQuerySuggestionsBlockListRequestT = Model::CreateQuerySuggestionsBlockListRequest>
        Model::CreateQuerySuggestionsBlockListOutcomeCallable CreateQuerySuggestionsBlockListCallable(const CreateQuerySuggestionsBlockListRequestT& request) const
        {
            return SubmitCallable(&KendraClient::CreateQuerySuggestionsBlockList, request);
        }

        /**
         * An Async wrapper for CreateQuerySuggestionsBlockList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateQuerySuggestionsBlockListRequestT = Model::CreateQuerySuggestionsBlockListRequest>
        void CreateQuerySuggestionsBlockListAsync(const CreateQuerySuggestionsBlockListRequestT& request, const CreateQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::CreateQuerySuggestionsBlockList, request, handler, context);
        }

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
        template<typename CreateThesaurusRequestT = Model::CreateThesaurusRequest>
        Model::CreateThesaurusOutcomeCallable CreateThesaurusCallable(const CreateThesaurusRequestT& request) const
        {
            return SubmitCallable(&KendraClient::CreateThesaurus, request);
        }

        /**
         * An Async wrapper for CreateThesaurus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateThesaurusRequestT = Model::CreateThesaurusRequest>
        void CreateThesaurusAsync(const CreateThesaurusRequestT& request, const CreateThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::CreateThesaurus, request, handler, context);
        }

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
        template<typename DeleteAccessControlConfigurationRequestT = Model::DeleteAccessControlConfigurationRequest>
        Model::DeleteAccessControlConfigurationOutcomeCallable DeleteAccessControlConfigurationCallable(const DeleteAccessControlConfigurationRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DeleteAccessControlConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteAccessControlConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccessControlConfigurationRequestT = Model::DeleteAccessControlConfigurationRequest>
        void DeleteAccessControlConfigurationAsync(const DeleteAccessControlConfigurationRequestT& request, const DeleteAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DeleteAccessControlConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Kendra data source connector. An exception is not thrown if
         * the data source is already being deleted. While the data source is being
         * deleted, the <code>Status</code> field returned by a call to the
         * <code>DescribeDataSource</code> API is set to <code>DELETING</code>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/delete-data-source.html">Deleting
         * Data Sources</a>.</p> <p>Deleting an entire data source or re-syncing your index
         * after deleting specific documents from a data source could take up to an hour or
         * more, depending on the number of documents you want to delete.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const DeleteDataSourceRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DeleteDataSource, request);
        }

        /**
         * An Async wrapper for DeleteDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        void DeleteDataSourceAsync(const DeleteDataSourceRequestT& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DeleteDataSource, request, handler, context);
        }

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
        template<typename DeleteExperienceRequestT = Model::DeleteExperienceRequest>
        Model::DeleteExperienceOutcomeCallable DeleteExperienceCallable(const DeleteExperienceRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DeleteExperience, request);
        }

        /**
         * An Async wrapper for DeleteExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteExperienceRequestT = Model::DeleteExperienceRequest>
        void DeleteExperienceAsync(const DeleteExperienceRequestT& request, const DeleteExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DeleteExperience, request, handler, context);
        }

        /**
         * <p>Removes an FAQ from an index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteFaq">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFaqOutcome DeleteFaq(const Model::DeleteFaqRequest& request) const;

        /**
         * A Callable wrapper for DeleteFaq that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFaqRequestT = Model::DeleteFaqRequest>
        Model::DeleteFaqOutcomeCallable DeleteFaqCallable(const DeleteFaqRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DeleteFaq, request);
        }

        /**
         * An Async wrapper for DeleteFaq that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFaqRequestT = Model::DeleteFaqRequest>
        void DeleteFaqAsync(const DeleteFaqRequestT& request, const DeleteFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DeleteFaq, request, handler, context);
        }

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
        template<typename DeleteIndexRequestT = Model::DeleteIndexRequest>
        Model::DeleteIndexOutcomeCallable DeleteIndexCallable(const DeleteIndexRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DeleteIndex, request);
        }

        /**
         * An Async wrapper for DeleteIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIndexRequestT = Model::DeleteIndexRequest>
        void DeleteIndexAsync(const DeleteIndexRequestT& request, const DeleteIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DeleteIndex, request, handler, context);
        }

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
        template<typename DeletePrincipalMappingRequestT = Model::DeletePrincipalMappingRequest>
        Model::DeletePrincipalMappingOutcomeCallable DeletePrincipalMappingCallable(const DeletePrincipalMappingRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DeletePrincipalMapping, request);
        }

        /**
         * An Async wrapper for DeletePrincipalMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePrincipalMappingRequestT = Model::DeletePrincipalMappingRequest>
        void DeletePrincipalMappingAsync(const DeletePrincipalMappingRequestT& request, const DeletePrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DeletePrincipalMapping, request, handler, context);
        }

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
        template<typename DeleteQuerySuggestionsBlockListRequestT = Model::DeleteQuerySuggestionsBlockListRequest>
        Model::DeleteQuerySuggestionsBlockListOutcomeCallable DeleteQuerySuggestionsBlockListCallable(const DeleteQuerySuggestionsBlockListRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DeleteQuerySuggestionsBlockList, request);
        }

        /**
         * An Async wrapper for DeleteQuerySuggestionsBlockList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQuerySuggestionsBlockListRequestT = Model::DeleteQuerySuggestionsBlockListRequest>
        void DeleteQuerySuggestionsBlockListAsync(const DeleteQuerySuggestionsBlockListRequestT& request, const DeleteQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DeleteQuerySuggestionsBlockList, request, handler, context);
        }

        /**
         * <p>Deletes an existing Amazon Kendra thesaurus. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DeleteThesaurus">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThesaurusOutcome DeleteThesaurus(const Model::DeleteThesaurusRequest& request) const;

        /**
         * A Callable wrapper for DeleteThesaurus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteThesaurusRequestT = Model::DeleteThesaurusRequest>
        Model::DeleteThesaurusOutcomeCallable DeleteThesaurusCallable(const DeleteThesaurusRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DeleteThesaurus, request);
        }

        /**
         * An Async wrapper for DeleteThesaurus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteThesaurusRequestT = Model::DeleteThesaurusRequest>
        void DeleteThesaurusAsync(const DeleteThesaurusRequestT& request, const DeleteThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DeleteThesaurus, request, handler, context);
        }

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
        template<typename DescribeAccessControlConfigurationRequestT = Model::DescribeAccessControlConfigurationRequest>
        Model::DescribeAccessControlConfigurationOutcomeCallable DescribeAccessControlConfigurationCallable(const DescribeAccessControlConfigurationRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DescribeAccessControlConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeAccessControlConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccessControlConfigurationRequestT = Model::DescribeAccessControlConfigurationRequest>
        void DescribeAccessControlConfigurationAsync(const DescribeAccessControlConfigurationRequestT& request, const DescribeAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DescribeAccessControlConfiguration, request, handler, context);
        }

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
        template<typename DescribeDataSourceRequestT = Model::DescribeDataSourceRequest>
        Model::DescribeDataSourceOutcomeCallable DescribeDataSourceCallable(const DescribeDataSourceRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DescribeDataSource, request);
        }

        /**
         * An Async wrapper for DescribeDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDataSourceRequestT = Model::DescribeDataSourceRequest>
        void DescribeDataSourceAsync(const DescribeDataSourceRequestT& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DescribeDataSource, request, handler, context);
        }

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
        template<typename DescribeExperienceRequestT = Model::DescribeExperienceRequest>
        Model::DescribeExperienceOutcomeCallable DescribeExperienceCallable(const DescribeExperienceRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DescribeExperience, request);
        }

        /**
         * An Async wrapper for DescribeExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeExperienceRequestT = Model::DescribeExperienceRequest>
        void DescribeExperienceAsync(const DescribeExperienceRequestT& request, const DescribeExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DescribeExperience, request, handler, context);
        }

        /**
         * <p>Gets information about an FAQ list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeFaq">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFaqOutcome DescribeFaq(const Model::DescribeFaqRequest& request) const;

        /**
         * A Callable wrapper for DescribeFaq that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFaqRequestT = Model::DescribeFaqRequest>
        Model::DescribeFaqOutcomeCallable DescribeFaqCallable(const DescribeFaqRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DescribeFaq, request);
        }

        /**
         * An Async wrapper for DescribeFaq that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFaqRequestT = Model::DescribeFaqRequest>
        void DescribeFaqAsync(const DescribeFaqRequestT& request, const DescribeFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DescribeFaq, request, handler, context);
        }

        /**
         * <p>Gets information about a set of featured results. Features results are placed
         * above all other results for certain queries. If there's an exact match of a
         * query, then one or more specific documents are featured in the search
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DescribeFeaturedResultsSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFeaturedResultsSetOutcome DescribeFeaturedResultsSet(const Model::DescribeFeaturedResultsSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeFeaturedResultsSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFeaturedResultsSetRequestT = Model::DescribeFeaturedResultsSetRequest>
        Model::DescribeFeaturedResultsSetOutcomeCallable DescribeFeaturedResultsSetCallable(const DescribeFeaturedResultsSetRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DescribeFeaturedResultsSet, request);
        }

        /**
         * An Async wrapper for DescribeFeaturedResultsSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFeaturedResultsSetRequestT = Model::DescribeFeaturedResultsSetRequest>
        void DescribeFeaturedResultsSetAsync(const DescribeFeaturedResultsSetRequestT& request, const DescribeFeaturedResultsSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DescribeFeaturedResultsSet, request, handler, context);
        }

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
        template<typename DescribeIndexRequestT = Model::DescribeIndexRequest>
        Model::DescribeIndexOutcomeCallable DescribeIndexCallable(const DescribeIndexRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DescribeIndex, request);
        }

        /**
         * An Async wrapper for DescribeIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeIndexRequestT = Model::DescribeIndexRequest>
        void DescribeIndexAsync(const DescribeIndexRequestT& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DescribeIndex, request, handler, context);
        }

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
        template<typename DescribePrincipalMappingRequestT = Model::DescribePrincipalMappingRequest>
        Model::DescribePrincipalMappingOutcomeCallable DescribePrincipalMappingCallable(const DescribePrincipalMappingRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DescribePrincipalMapping, request);
        }

        /**
         * An Async wrapper for DescribePrincipalMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePrincipalMappingRequestT = Model::DescribePrincipalMappingRequest>
        void DescribePrincipalMappingAsync(const DescribePrincipalMappingRequestT& request, const DescribePrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DescribePrincipalMapping, request, handler, context);
        }

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
        template<typename DescribeQuerySuggestionsBlockListRequestT = Model::DescribeQuerySuggestionsBlockListRequest>
        Model::DescribeQuerySuggestionsBlockListOutcomeCallable DescribeQuerySuggestionsBlockListCallable(const DescribeQuerySuggestionsBlockListRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DescribeQuerySuggestionsBlockList, request);
        }

        /**
         * An Async wrapper for DescribeQuerySuggestionsBlockList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeQuerySuggestionsBlockListRequestT = Model::DescribeQuerySuggestionsBlockListRequest>
        void DescribeQuerySuggestionsBlockListAsync(const DescribeQuerySuggestionsBlockListRequestT& request, const DescribeQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DescribeQuerySuggestionsBlockList, request, handler, context);
        }

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
        template<typename DescribeQuerySuggestionsConfigRequestT = Model::DescribeQuerySuggestionsConfigRequest>
        Model::DescribeQuerySuggestionsConfigOutcomeCallable DescribeQuerySuggestionsConfigCallable(const DescribeQuerySuggestionsConfigRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DescribeQuerySuggestionsConfig, request);
        }

        /**
         * An Async wrapper for DescribeQuerySuggestionsConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeQuerySuggestionsConfigRequestT = Model::DescribeQuerySuggestionsConfigRequest>
        void DescribeQuerySuggestionsConfigAsync(const DescribeQuerySuggestionsConfigRequestT& request, const DescribeQuerySuggestionsConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DescribeQuerySuggestionsConfig, request, handler, context);
        }

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
        template<typename DescribeThesaurusRequestT = Model::DescribeThesaurusRequest>
        Model::DescribeThesaurusOutcomeCallable DescribeThesaurusCallable(const DescribeThesaurusRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DescribeThesaurus, request);
        }

        /**
         * An Async wrapper for DescribeThesaurus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeThesaurusRequestT = Model::DescribeThesaurusRequest>
        void DescribeThesaurusAsync(const DescribeThesaurusRequestT& request, const DescribeThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DescribeThesaurus, request, handler, context);
        }

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
        template<typename DisassociateEntitiesFromExperienceRequestT = Model::DisassociateEntitiesFromExperienceRequest>
        Model::DisassociateEntitiesFromExperienceOutcomeCallable DisassociateEntitiesFromExperienceCallable(const DisassociateEntitiesFromExperienceRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DisassociateEntitiesFromExperience, request);
        }

        /**
         * An Async wrapper for DisassociateEntitiesFromExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateEntitiesFromExperienceRequestT = Model::DisassociateEntitiesFromExperienceRequest>
        void DisassociateEntitiesFromExperienceAsync(const DisassociateEntitiesFromExperienceRequestT& request, const DisassociateEntitiesFromExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DisassociateEntitiesFromExperience, request, handler, context);
        }

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
        template<typename DisassociatePersonasFromEntitiesRequestT = Model::DisassociatePersonasFromEntitiesRequest>
        Model::DisassociatePersonasFromEntitiesOutcomeCallable DisassociatePersonasFromEntitiesCallable(const DisassociatePersonasFromEntitiesRequestT& request) const
        {
            return SubmitCallable(&KendraClient::DisassociatePersonasFromEntities, request);
        }

        /**
         * An Async wrapper for DisassociatePersonasFromEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociatePersonasFromEntitiesRequestT = Model::DisassociatePersonasFromEntitiesRequest>
        void DisassociatePersonasFromEntitiesAsync(const DisassociatePersonasFromEntitiesRequestT& request, const DisassociatePersonasFromEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::DisassociatePersonasFromEntities, request, handler, context);
        }

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
        template<typename GetQuerySuggestionsRequestT = Model::GetQuerySuggestionsRequest>
        Model::GetQuerySuggestionsOutcomeCallable GetQuerySuggestionsCallable(const GetQuerySuggestionsRequestT& request) const
        {
            return SubmitCallable(&KendraClient::GetQuerySuggestions, request);
        }

        /**
         * An Async wrapper for GetQuerySuggestions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQuerySuggestionsRequestT = Model::GetQuerySuggestionsRequest>
        void GetQuerySuggestionsAsync(const GetQuerySuggestionsRequestT& request, const GetQuerySuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::GetQuerySuggestions, request, handler, context);
        }

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
        template<typename GetSnapshotsRequestT = Model::GetSnapshotsRequest>
        Model::GetSnapshotsOutcomeCallable GetSnapshotsCallable(const GetSnapshotsRequestT& request) const
        {
            return SubmitCallable(&KendraClient::GetSnapshots, request);
        }

        /**
         * An Async wrapper for GetSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSnapshotsRequestT = Model::GetSnapshotsRequest>
        void GetSnapshotsAsync(const GetSnapshotsRequestT& request, const GetSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::GetSnapshots, request, handler, context);
        }

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
        template<typename ListAccessControlConfigurationsRequestT = Model::ListAccessControlConfigurationsRequest>
        Model::ListAccessControlConfigurationsOutcomeCallable ListAccessControlConfigurationsCallable(const ListAccessControlConfigurationsRequestT& request) const
        {
            return SubmitCallable(&KendraClient::ListAccessControlConfigurations, request);
        }

        /**
         * An Async wrapper for ListAccessControlConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccessControlConfigurationsRequestT = Model::ListAccessControlConfigurationsRequest>
        void ListAccessControlConfigurationsAsync(const ListAccessControlConfigurationsRequestT& request, const ListAccessControlConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::ListAccessControlConfigurations, request, handler, context);
        }

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
        template<typename ListDataSourceSyncJobsRequestT = Model::ListDataSourceSyncJobsRequest>
        Model::ListDataSourceSyncJobsOutcomeCallable ListDataSourceSyncJobsCallable(const ListDataSourceSyncJobsRequestT& request) const
        {
            return SubmitCallable(&KendraClient::ListDataSourceSyncJobs, request);
        }

        /**
         * An Async wrapper for ListDataSourceSyncJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSourceSyncJobsRequestT = Model::ListDataSourceSyncJobsRequest>
        void ListDataSourceSyncJobsAsync(const ListDataSourceSyncJobsRequestT& request, const ListDataSourceSyncJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::ListDataSourceSyncJobs, request, handler, context);
        }

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
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        Model::ListDataSourcesOutcomeCallable ListDataSourcesCallable(const ListDataSourcesRequestT& request) const
        {
            return SubmitCallable(&KendraClient::ListDataSources, request);
        }

        /**
         * An Async wrapper for ListDataSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        void ListDataSourcesAsync(const ListDataSourcesRequestT& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::ListDataSources, request, handler, context);
        }

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
        template<typename ListEntityPersonasRequestT = Model::ListEntityPersonasRequest>
        Model::ListEntityPersonasOutcomeCallable ListEntityPersonasCallable(const ListEntityPersonasRequestT& request) const
        {
            return SubmitCallable(&KendraClient::ListEntityPersonas, request);
        }

        /**
         * An Async wrapper for ListEntityPersonas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEntityPersonasRequestT = Model::ListEntityPersonasRequest>
        void ListEntityPersonasAsync(const ListEntityPersonasRequestT& request, const ListEntityPersonasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::ListEntityPersonas, request, handler, context);
        }

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
        template<typename ListExperienceEntitiesRequestT = Model::ListExperienceEntitiesRequest>
        Model::ListExperienceEntitiesOutcomeCallable ListExperienceEntitiesCallable(const ListExperienceEntitiesRequestT& request) const
        {
            return SubmitCallable(&KendraClient::ListExperienceEntities, request);
        }

        /**
         * An Async wrapper for ListExperienceEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExperienceEntitiesRequestT = Model::ListExperienceEntitiesRequest>
        void ListExperienceEntitiesAsync(const ListExperienceEntitiesRequestT& request, const ListExperienceEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::ListExperienceEntities, request, handler, context);
        }

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
        template<typename ListExperiencesRequestT = Model::ListExperiencesRequest>
        Model::ListExperiencesOutcomeCallable ListExperiencesCallable(const ListExperiencesRequestT& request) const
        {
            return SubmitCallable(&KendraClient::ListExperiences, request);
        }

        /**
         * An Async wrapper for ListExperiences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExperiencesRequestT = Model::ListExperiencesRequest>
        void ListExperiencesAsync(const ListExperiencesRequestT& request, const ListExperiencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::ListExperiences, request, handler, context);
        }

        /**
         * <p>Gets a list of FAQ lists associated with an index.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListFaqs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFaqsOutcome ListFaqs(const Model::ListFaqsRequest& request) const;

        /**
         * A Callable wrapper for ListFaqs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFaqsRequestT = Model::ListFaqsRequest>
        Model::ListFaqsOutcomeCallable ListFaqsCallable(const ListFaqsRequestT& request) const
        {
            return SubmitCallable(&KendraClient::ListFaqs, request);
        }

        /**
         * An Async wrapper for ListFaqs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFaqsRequestT = Model::ListFaqsRequest>
        void ListFaqsAsync(const ListFaqsRequestT& request, const ListFaqsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::ListFaqs, request, handler, context);
        }

        /**
         * <p>Lists all your sets of featured results for a given index. Features results
         * are placed above all other results for certain queries. If there's an exact
         * match of a query, then one or more specific documents are featured in the search
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListFeaturedResultsSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFeaturedResultsSetsOutcome ListFeaturedResultsSets(const Model::ListFeaturedResultsSetsRequest& request) const;

        /**
         * A Callable wrapper for ListFeaturedResultsSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFeaturedResultsSetsRequestT = Model::ListFeaturedResultsSetsRequest>
        Model::ListFeaturedResultsSetsOutcomeCallable ListFeaturedResultsSetsCallable(const ListFeaturedResultsSetsRequestT& request) const
        {
            return SubmitCallable(&KendraClient::ListFeaturedResultsSets, request);
        }

        /**
         * An Async wrapper for ListFeaturedResultsSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFeaturedResultsSetsRequestT = Model::ListFeaturedResultsSetsRequest>
        void ListFeaturedResultsSetsAsync(const ListFeaturedResultsSetsRequestT& request, const ListFeaturedResultsSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::ListFeaturedResultsSets, request, handler, context);
        }

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
        template<typename ListGroupsOlderThanOrderingIdRequestT = Model::ListGroupsOlderThanOrderingIdRequest>
        Model::ListGroupsOlderThanOrderingIdOutcomeCallable ListGroupsOlderThanOrderingIdCallable(const ListGroupsOlderThanOrderingIdRequestT& request) const
        {
            return SubmitCallable(&KendraClient::ListGroupsOlderThanOrderingId, request);
        }

        /**
         * An Async wrapper for ListGroupsOlderThanOrderingId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupsOlderThanOrderingIdRequestT = Model::ListGroupsOlderThanOrderingIdRequest>
        void ListGroupsOlderThanOrderingIdAsync(const ListGroupsOlderThanOrderingIdRequestT& request, const ListGroupsOlderThanOrderingIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::ListGroupsOlderThanOrderingId, request, handler, context);
        }

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
        template<typename ListIndicesRequestT = Model::ListIndicesRequest>
        Model::ListIndicesOutcomeCallable ListIndicesCallable(const ListIndicesRequestT& request) const
        {
            return SubmitCallable(&KendraClient::ListIndices, request);
        }

        /**
         * An Async wrapper for ListIndices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIndicesRequestT = Model::ListIndicesRequest>
        void ListIndicesAsync(const ListIndicesRequestT& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::ListIndices, request, handler, context);
        }

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
        template<typename ListQuerySuggestionsBlockListsRequestT = Model::ListQuerySuggestionsBlockListsRequest>
        Model::ListQuerySuggestionsBlockListsOutcomeCallable ListQuerySuggestionsBlockListsCallable(const ListQuerySuggestionsBlockListsRequestT& request) const
        {
            return SubmitCallable(&KendraClient::ListQuerySuggestionsBlockLists, request);
        }

        /**
         * An Async wrapper for ListQuerySuggestionsBlockLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQuerySuggestionsBlockListsRequestT = Model::ListQuerySuggestionsBlockListsRequest>
        void ListQuerySuggestionsBlockListsAsync(const ListQuerySuggestionsBlockListsRequestT& request, const ListQuerySuggestionsBlockListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::ListQuerySuggestionsBlockLists, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&KendraClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists the thesauri for an index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ListThesauri">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThesauriOutcome ListThesauri(const Model::ListThesauriRequest& request) const;

        /**
         * A Callable wrapper for ListThesauri that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListThesauriRequestT = Model::ListThesauriRequest>
        Model::ListThesauriOutcomeCallable ListThesauriCallable(const ListThesauriRequestT& request) const
        {
            return SubmitCallable(&KendraClient::ListThesauri, request);
        }

        /**
         * An Async wrapper for ListThesauri that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThesauriRequestT = Model::ListThesauriRequest>
        void ListThesauriAsync(const ListThesauriRequestT& request, const ListThesauriResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::ListThesauri, request, handler, context);
        }

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
         * group are currently processing, a validation exception is thrown.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/PutPrincipalMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPrincipalMappingOutcome PutPrincipalMapping(const Model::PutPrincipalMappingRequest& request) const;

        /**
         * A Callable wrapper for PutPrincipalMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutPrincipalMappingRequestT = Model::PutPrincipalMappingRequest>
        Model::PutPrincipalMappingOutcomeCallable PutPrincipalMappingCallable(const PutPrincipalMappingRequestT& request) const
        {
            return SubmitCallable(&KendraClient::PutPrincipalMapping, request);
        }

        /**
         * An Async wrapper for PutPrincipalMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutPrincipalMappingRequestT = Model::PutPrincipalMappingRequest>
        void PutPrincipalMappingAsync(const PutPrincipalMappingRequestT& request, const PutPrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::PutPrincipalMapping, request, handler, context);
        }

        /**
         * <p>Searches an index given an input query.</p>  <p>If you are working with
         * large language models (LLMs) or implementing retrieval augmented generation
         * (RAG) systems, you can use Amazon Kendra's <a
         * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_Retrieve.html">Retrieve</a>
         * API, which can return longer semantically relevant passages. We recommend using
         * the <code>Retrieve</code> API instead of filing a service limit increase to
         * increase the <code>Query</code> API document excerpt length.</p>  <p>You
         * can configure boosting or relevance tuning at the query level to override
         * boosting at the index level, filter based on document fields/attributes and
         * faceted search, and filter based on the user or their group access to documents.
         * You can also include certain fields in the response that might provide useful
         * additional information.</p> <p>A query response contains three types of
         * results.</p> <ul> <li> <p>Relevant suggested answers. The answers can be either
         * a text excerpt or table excerpt. The answer can be highlighted in the
         * excerpt.</p> </li> <li> <p>Matching FAQs or questions-answer from your FAQ
         * file.</p> </li> <li> <p>Relevant documents. This result type includes an excerpt
         * of the document with the document title. The searched terms can be highlighted
         * in the excerpt.</p> </li> </ul> <p>You can specify that the query return only
         * one type of result using the <code>QueryResultTypeFilter</code> parameter. Each
         * query returns the 100 most relevant results. If you filter result type to only
         * question-answers, a maximum of four results are returned. If you filter result
         * type to only answers, a maximum of three results are returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Query">AWS API
         * Reference</a></p>
         */
        virtual Model::QueryOutcome Query(const Model::QueryRequest& request) const;

        /**
         * A Callable wrapper for Query that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename QueryRequestT = Model::QueryRequest>
        Model::QueryOutcomeCallable QueryCallable(const QueryRequestT& request) const
        {
            return SubmitCallable(&KendraClient::Query, request);
        }

        /**
         * An Async wrapper for Query that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename QueryRequestT = Model::QueryRequest>
        void QueryAsync(const QueryRequestT& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::Query, request, handler, context);
        }

        /**
         * <p>Retrieves relevant passages or text excerpts given an input query.</p>
         * <p>This API is similar to the <a
         * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_Query.html">Query</a>
         * API. However, by default, the <code>Query</code> API only returns excerpt
         * passages of up to 100 token words. With the <code>Retrieve</code> API, you can
         * retrieve longer passages of up to 200 token words and up to 100 semantically
         * relevant passages. This doesn't include question-answer or FAQ type responses
         * from your index. The passages are text excerpts that can be semantically
         * extracted from multiple documents and multiple parts of the same document. If in
         * extreme cases your documents produce zero passages using the
         * <code>Retrieve</code> API, you can alternatively use the <code>Query</code> API
         * and its types of responses.</p> <p>You can also do the following:</p> <ul> <li>
         * <p>Override boosting at the index level</p> </li> <li> <p>Filter based on
         * document fields or attributes</p> </li> <li> <p>Filter based on the user or
         * their group access to documents</p> </li> <li> <p>View the confidence score
         * bucket for a retrieved passage result. The confidence bucket provides a relative
         * ranking that indicates how confident Amazon Kendra is that the response is
         * relevant to the query.</p>  <p>Confidence score buckets are currently
         * available only for English.</p>  </li> </ul> <p>You can also include
         * certain fields in the response that might provide useful additional
         * information.</p> <p>The <code>Retrieve</code> API shares the number of <a
         * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_CapacityUnitsConfiguration.html">query
         * capacity units</a> that you set for your index. For more information on what's
         * included in a single capacity unit and the default base capacity for an index,
         * see <a
         * href="https://docs.aws.amazon.com/kendra/latest/dg/adjusting-capacity.html">Adjusting
         * capacity</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Retrieve">AWS API
         * Reference</a></p>
         */
        virtual Model::RetrieveOutcome Retrieve(const Model::RetrieveRequest& request) const;

        /**
         * A Callable wrapper for Retrieve that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RetrieveRequestT = Model::RetrieveRequest>
        Model::RetrieveOutcomeCallable RetrieveCallable(const RetrieveRequestT& request) const
        {
            return SubmitCallable(&KendraClient::Retrieve, request);
        }

        /**
         * An Async wrapper for Retrieve that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RetrieveRequestT = Model::RetrieveRequest>
        void RetrieveAsync(const RetrieveRequestT& request, const RetrieveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::Retrieve, request, handler, context);
        }

        /**
         * <p>Starts a synchronization job for a data source connector. If a
         * synchronization job is already in progress, Amazon Kendra returns a
         * <code>ResourceInUseException</code> exception.</p> <p>Re-syncing your data
         * source with your index after modifying, adding, or deleting documents from your
         * data source respository could take up to an hour or more, depending on the
         * number of documents to sync.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/StartDataSourceSyncJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDataSourceSyncJobOutcome StartDataSourceSyncJob(const Model::StartDataSourceSyncJobRequest& request) const;

        /**
         * A Callable wrapper for StartDataSourceSyncJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDataSourceSyncJobRequestT = Model::StartDataSourceSyncJobRequest>
        Model::StartDataSourceSyncJobOutcomeCallable StartDataSourceSyncJobCallable(const StartDataSourceSyncJobRequestT& request) const
        {
            return SubmitCallable(&KendraClient::StartDataSourceSyncJob, request);
        }

        /**
         * An Async wrapper for StartDataSourceSyncJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDataSourceSyncJobRequestT = Model::StartDataSourceSyncJobRequest>
        void StartDataSourceSyncJobAsync(const StartDataSourceSyncJobRequestT& request, const StartDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::StartDataSourceSyncJob, request, handler, context);
        }

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
        template<typename StopDataSourceSyncJobRequestT = Model::StopDataSourceSyncJobRequest>
        Model::StopDataSourceSyncJobOutcomeCallable StopDataSourceSyncJobCallable(const StopDataSourceSyncJobRequestT& request) const
        {
            return SubmitCallable(&KendraClient::StopDataSourceSyncJob, request);
        }

        /**
         * An Async wrapper for StopDataSourceSyncJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDataSourceSyncJobRequestT = Model::StopDataSourceSyncJobRequest>
        void StopDataSourceSyncJobAsync(const StopDataSourceSyncJobRequestT& request, const StopDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::StopDataSourceSyncJob, request, handler, context);
        }

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
        template<typename SubmitFeedbackRequestT = Model::SubmitFeedbackRequest>
        Model::SubmitFeedbackOutcomeCallable SubmitFeedbackCallable(const SubmitFeedbackRequestT& request) const
        {
            return SubmitCallable(&KendraClient::SubmitFeedback, request);
        }

        /**
         * An Async wrapper for SubmitFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SubmitFeedbackRequestT = Model::SubmitFeedbackRequest>
        void SubmitFeedbackAsync(const SubmitFeedbackRequestT& request, const SubmitFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::SubmitFeedback, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&KendraClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&KendraClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateAccessControlConfigurationRequestT = Model::UpdateAccessControlConfigurationRequest>
        Model::UpdateAccessControlConfigurationOutcomeCallable UpdateAccessControlConfigurationCallable(const UpdateAccessControlConfigurationRequestT& request) const
        {
            return SubmitCallable(&KendraClient::UpdateAccessControlConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateAccessControlConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccessControlConfigurationRequestT = Model::UpdateAccessControlConfigurationRequest>
        void UpdateAccessControlConfigurationAsync(const UpdateAccessControlConfigurationRequestT& request, const UpdateAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::UpdateAccessControlConfiguration, request, handler, context);
        }

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
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const UpdateDataSourceRequestT& request) const
        {
            return SubmitCallable(&KendraClient::UpdateDataSource, request);
        }

        /**
         * An Async wrapper for UpdateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        void UpdateDataSourceAsync(const UpdateDataSourceRequestT& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::UpdateDataSource, request, handler, context);
        }

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
        template<typename UpdateExperienceRequestT = Model::UpdateExperienceRequest>
        Model::UpdateExperienceOutcomeCallable UpdateExperienceCallable(const UpdateExperienceRequestT& request) const
        {
            return SubmitCallable(&KendraClient::UpdateExperience, request);
        }

        /**
         * An Async wrapper for UpdateExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateExperienceRequestT = Model::UpdateExperienceRequest>
        void UpdateExperienceAsync(const UpdateExperienceRequestT& request, const UpdateExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::UpdateExperience, request, handler, context);
        }

        /**
         * <p>Updates a set of featured results. Features results are placed above all
         * other results for certain queries. You map specific queries to specific
         * documents for featuring in the results. If a query contains an exact match of a
         * query, then one or more specific documents are featured in the search
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateFeaturedResultsSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFeaturedResultsSetOutcome UpdateFeaturedResultsSet(const Model::UpdateFeaturedResultsSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateFeaturedResultsSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFeaturedResultsSetRequestT = Model::UpdateFeaturedResultsSetRequest>
        Model::UpdateFeaturedResultsSetOutcomeCallable UpdateFeaturedResultsSetCallable(const UpdateFeaturedResultsSetRequestT& request) const
        {
            return SubmitCallable(&KendraClient::UpdateFeaturedResultsSet, request);
        }

        /**
         * An Async wrapper for UpdateFeaturedResultsSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFeaturedResultsSetRequestT = Model::UpdateFeaturedResultsSetRequest>
        void UpdateFeaturedResultsSetAsync(const UpdateFeaturedResultsSetRequestT& request, const UpdateFeaturedResultsSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::UpdateFeaturedResultsSet, request, handler, context);
        }

        /**
         * <p>Updates an existing Amazon Kendra index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIndexOutcome UpdateIndex(const Model::UpdateIndexRequest& request) const;

        /**
         * A Callable wrapper for UpdateIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIndexRequestT = Model::UpdateIndexRequest>
        Model::UpdateIndexOutcomeCallable UpdateIndexCallable(const UpdateIndexRequestT& request) const
        {
            return SubmitCallable(&KendraClient::UpdateIndex, request);
        }

        /**
         * An Async wrapper for UpdateIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIndexRequestT = Model::UpdateIndexRequest>
        void UpdateIndexAsync(const UpdateIndexRequestT& request, const UpdateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::UpdateIndex, request, handler, context);
        }

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
        template<typename UpdateQuerySuggestionsBlockListRequestT = Model::UpdateQuerySuggestionsBlockListRequest>
        Model::UpdateQuerySuggestionsBlockListOutcomeCallable UpdateQuerySuggestionsBlockListCallable(const UpdateQuerySuggestionsBlockListRequestT& request) const
        {
            return SubmitCallable(&KendraClient::UpdateQuerySuggestionsBlockList, request);
        }

        /**
         * An Async wrapper for UpdateQuerySuggestionsBlockList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQuerySuggestionsBlockListRequestT = Model::UpdateQuerySuggestionsBlockListRequest>
        void UpdateQuerySuggestionsBlockListAsync(const UpdateQuerySuggestionsBlockListRequestT& request, const UpdateQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::UpdateQuerySuggestionsBlockList, request, handler, context);
        }

        /**
         * <p>Updates the settings of query suggestions for an index.</p> <p>Amazon Kendra
         * supports partial updates, so you only need to provide the fields you want to
         * update.</p> <p>If an update is currently processing, you need to wait for the
         * update to finish before making another update.</p> <p>Updates to query
         * suggestions settings might not take effect right away. The time for your updated
         * settings to take effect depends on the updates made and the number of search
         * queries in your index.</p> <p>You can still enable/disable query suggestions at
         * any time.</p> <p> <code>UpdateQuerySuggestionsConfig</code> is currently not
         * supported in the Amazon Web Services GovCloud (US-West) region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateQuerySuggestionsConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQuerySuggestionsConfigOutcome UpdateQuerySuggestionsConfig(const Model::UpdateQuerySuggestionsConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateQuerySuggestionsConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQuerySuggestionsConfigRequestT = Model::UpdateQuerySuggestionsConfigRequest>
        Model::UpdateQuerySuggestionsConfigOutcomeCallable UpdateQuerySuggestionsConfigCallable(const UpdateQuerySuggestionsConfigRequestT& request) const
        {
            return SubmitCallable(&KendraClient::UpdateQuerySuggestionsConfig, request);
        }

        /**
         * An Async wrapper for UpdateQuerySuggestionsConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQuerySuggestionsConfigRequestT = Model::UpdateQuerySuggestionsConfigRequest>
        void UpdateQuerySuggestionsConfigAsync(const UpdateQuerySuggestionsConfigRequestT& request, const UpdateQuerySuggestionsConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::UpdateQuerySuggestionsConfig, request, handler, context);
        }

        /**
         * <p>Updates a thesaurus for an index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UpdateThesaurus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThesaurusOutcome UpdateThesaurus(const Model::UpdateThesaurusRequest& request) const;

        /**
         * A Callable wrapper for UpdateThesaurus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateThesaurusRequestT = Model::UpdateThesaurusRequest>
        Model::UpdateThesaurusOutcomeCallable UpdateThesaurusCallable(const UpdateThesaurusRequestT& request) const
        {
            return SubmitCallable(&KendraClient::UpdateThesaurus, request);
        }

        /**
         * An Async wrapper for UpdateThesaurus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateThesaurusRequestT = Model::UpdateThesaurusRequest>
        void UpdateThesaurusAsync(const UpdateThesaurusRequestT& request, const UpdateThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KendraClient::UpdateThesaurus, request, handler, context);
        }


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
