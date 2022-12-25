/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wisdom/ConnectWisdomServiceServiceClientModel.h>

namespace Aws
{
namespace ConnectWisdomService
{
  /**
   * <p>Amazon Connect Wisdom delivers agents the information they need to solve
   * customer issues as they're actively speaking with customers. Agents can search
   * across connected repositories from within their agent desktop to find answers
   * quickly. Use the Amazon Connect Wisdom APIs to create an assistant and a
   * knowledge base, for example, or manage content by uploading custom files.</p>
   */
  class AWS_CONNECTWISDOMSERVICE_API ConnectWisdomServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ConnectWisdomServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectWisdomServiceClient(const Aws::ConnectWisdomService::ConnectWisdomServiceClientConfiguration& clientConfiguration = Aws::ConnectWisdomService::ConnectWisdomServiceClientConfiguration(),
                                   std::shared_ptr<ConnectWisdomServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectWisdomServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<ConnectWisdomServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG),
                                   const Aws::ConnectWisdomService::ConnectWisdomServiceClientConfiguration& clientConfiguration = Aws::ConnectWisdomService::ConnectWisdomServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectWisdomServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<ConnectWisdomServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG),
                                   const Aws::ConnectWisdomService::ConnectWisdomServiceClientConfiguration& clientConfiguration = Aws::ConnectWisdomService::ConnectWisdomServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectWisdomServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectWisdomServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectWisdomServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ConnectWisdomServiceClient();

        /**
         * <p>Creates an Amazon Connect Wisdom assistant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/CreateAssistant">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssistantOutcome CreateAssistant(const Model::CreateAssistantRequest& request) const;

        /**
         * A Callable wrapper for CreateAssistant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssistantOutcomeCallable CreateAssistantCallable(const Model::CreateAssistantRequest& request) const;

        /**
         * An Async wrapper for CreateAssistant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssistantAsync(const Model::CreateAssistantRequest& request, const CreateAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an association between an Amazon Connect Wisdom assistant and another
         * resource. Currently, the only supported association is with a knowledge base. An
         * assistant can have only a single association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/CreateAssistantAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssistantAssociationOutcome CreateAssistantAssociation(const Model::CreateAssistantAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateAssistantAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssistantAssociationOutcomeCallable CreateAssistantAssociationCallable(const Model::CreateAssistantAssociationRequest& request) const;

        /**
         * An Async wrapper for CreateAssistantAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssistantAssociationAsync(const Model::CreateAssistantAssociationRequest& request, const CreateAssistantAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates Wisdom content. Before to calling this API, use <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>
         * to upload an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/CreateContent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContentOutcome CreateContent(const Model::CreateContentRequest& request) const;

        /**
         * A Callable wrapper for CreateContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContentOutcomeCallable CreateContentCallable(const Model::CreateContentRequest& request) const;

        /**
         * An Async wrapper for CreateContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContentAsync(const Model::CreateContentRequest& request, const CreateContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a knowledge base.</p>  <p>When using this API, you cannot reuse
         * <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/Welcome.html">Amazon
         * AppIntegrations</a> DataIntegrations with external knowledge bases such as
         * Salesforce and ServiceNow. If you do, you'll get an
         * <code>InvalidRequestException</code> error. </p> <pre><code> &lt;p&gt;For
         * example, you're programmatically managing your external knowledge base, and you
         * want to add or remove one of the fields that is being ingested from Salesforce.
         * Do the following:&lt;/p&gt; &lt;ol&gt; &lt;li&gt; &lt;p&gt;Call &lt;a
         * href=&quot;https://docs.aws.amazon.com/wisdom/latest/APIReference/API_DeleteKnowledgeBase.html&quot;&gt;DeleteKnowledgeBase&lt;/a&gt;.&lt;/p&gt;
         * &lt;/li&gt; &lt;li&gt; &lt;p&gt;Call &lt;a
         * href=&quot;https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_DeleteDataIntegration.html&quot;&gt;DeleteDataIntegration&lt;/a&gt;.&lt;/p&gt;
         * &lt;/li&gt; &lt;li&gt; &lt;p&gt;Call &lt;a
         * href=&quot;https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html&quot;&gt;CreateDataIntegration&lt;/a&gt;
         * to recreate the DataIntegration or a create different one.&lt;/p&gt; &lt;/li&gt;
         * &lt;li&gt; &lt;p&gt;Call CreateKnowledgeBase.&lt;/p&gt; &lt;/li&gt; &lt;/ol&gt;
         * &lt;/note&gt; </code></pre><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/CreateKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKnowledgeBaseOutcome CreateKnowledgeBase(const Model::CreateKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for CreateKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateKnowledgeBaseOutcomeCallable CreateKnowledgeBaseCallable(const Model::CreateKnowledgeBaseRequest& request) const;

        /**
         * An Async wrapper for CreateKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateKnowledgeBaseAsync(const Model::CreateKnowledgeBaseRequest& request, const CreateKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a session. A session is a contextual container used for generating
         * recommendations. Amazon Connect creates a new Wisdom session for each contact on
         * which Wisdom is enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/CreateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSessionOutcome CreateSession(const Model::CreateSessionRequest& request) const;

        /**
         * A Callable wrapper for CreateSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSessionOutcomeCallable CreateSessionCallable(const Model::CreateSessionRequest& request) const;

        /**
         * An Async wrapper for CreateSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSessionAsync(const Model::CreateSessionRequest& request, const CreateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an assistant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/DeleteAssistant">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssistantOutcome DeleteAssistant(const Model::DeleteAssistantRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssistant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssistantOutcomeCallable DeleteAssistantCallable(const Model::DeleteAssistantRequest& request) const;

        /**
         * An Async wrapper for DeleteAssistant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssistantAsync(const Model::DeleteAssistantRequest& request, const DeleteAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an assistant association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/DeleteAssistantAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssistantAssociationOutcome DeleteAssistantAssociation(const Model::DeleteAssistantAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssistantAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssistantAssociationOutcomeCallable DeleteAssistantAssociationCallable(const Model::DeleteAssistantAssociationRequest& request) const;

        /**
         * An Async wrapper for DeleteAssistantAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssistantAssociationAsync(const Model::DeleteAssistantAssociationRequest& request, const DeleteAssistantAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/DeleteContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContentOutcome DeleteContent(const Model::DeleteContentRequest& request) const;

        /**
         * A Callable wrapper for DeleteContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContentOutcomeCallable DeleteContentCallable(const Model::DeleteContentRequest& request) const;

        /**
         * An Async wrapper for DeleteContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContentAsync(const Model::DeleteContentRequest& request, const DeleteContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the knowledge base.</p>  <p>When you use this API to delete an
         * external knowledge base such as Salesforce or ServiceNow, you must also delete
         * the <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/Welcome.html">Amazon
         * AppIntegrations</a> DataIntegration. This is because you can't reuse the
         * DataIntegration after it's been associated with an external knowledge base.
         * However, you can delete and recreate it. See <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_DeleteDataIntegration.html">DeleteDataIntegration</a>
         * and <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
         * in the <i>Amazon AppIntegrations API Reference</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/DeleteKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKnowledgeBaseOutcome DeleteKnowledgeBase(const Model::DeleteKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteKnowledgeBaseOutcomeCallable DeleteKnowledgeBaseCallable(const Model::DeleteKnowledgeBaseRequest& request) const;

        /**
         * An Async wrapper for DeleteKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteKnowledgeBaseAsync(const Model::DeleteKnowledgeBaseRequest& request, const DeleteKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an assistant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GetAssistant">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssistantOutcome GetAssistant(const Model::GetAssistantRequest& request) const;

        /**
         * A Callable wrapper for GetAssistant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssistantOutcomeCallable GetAssistantCallable(const Model::GetAssistantRequest& request) const;

        /**
         * An Async wrapper for GetAssistant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssistantAsync(const Model::GetAssistantRequest& request, const GetAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an assistant association.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GetAssistantAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssistantAssociationOutcome GetAssistantAssociation(const Model::GetAssistantAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetAssistantAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssistantAssociationOutcomeCallable GetAssistantAssociationCallable(const Model::GetAssistantAssociationRequest& request) const;

        /**
         * An Async wrapper for GetAssistantAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssistantAssociationAsync(const Model::GetAssistantAssociationRequest& request, const GetAssistantAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves content, including a pre-signed URL to download the
         * content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GetContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContentOutcome GetContent(const Model::GetContentRequest& request) const;

        /**
         * A Callable wrapper for GetContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContentOutcomeCallable GetContentCallable(const Model::GetContentRequest& request) const;

        /**
         * An Async wrapper for GetContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContentAsync(const Model::GetContentRequest& request, const GetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves summary information about the content.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GetContentSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContentSummaryOutcome GetContentSummary(const Model::GetContentSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetContentSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContentSummaryOutcomeCallable GetContentSummaryCallable(const Model::GetContentSummaryRequest& request) const;

        /**
         * An Async wrapper for GetContentSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContentSummaryAsync(const Model::GetContentSummaryRequest& request, const GetContentSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the knowledge base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GetKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKnowledgeBaseOutcome GetKnowledgeBase(const Model::GetKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for GetKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetKnowledgeBaseOutcomeCallable GetKnowledgeBaseCallable(const Model::GetKnowledgeBaseRequest& request) const;

        /**
         * An Async wrapper for GetKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetKnowledgeBaseAsync(const Model::GetKnowledgeBaseRequest& request, const GetKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves recommendations for the specified session. To avoid retrieving the
         * same recommendations in subsequent calls, use <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_NotifyRecommendationsReceived.html">NotifyRecommendationsReceived</a>.
         * This API supports long-polling behavior with the <code>waitTimeSeconds</code>
         * parameter. Short poll is the default behavior and only returns recommendations
         * already available. To perform a manual query against an assistant, use <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_QueryAssistant.html">QueryAssistant</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GetRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommendationsOutcome GetRecommendations(const Model::GetRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for GetRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecommendationsOutcomeCallable GetRecommendationsCallable(const Model::GetRecommendationsRequest& request) const;

        /**
         * An Async wrapper for GetRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecommendationsAsync(const Model::GetRecommendationsRequest& request, const GetRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information for a specified session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GetSession">AWS
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
         * <p>Lists information about assistant associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ListAssistantAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssistantAssociationsOutcome ListAssistantAssociations(const Model::ListAssistantAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListAssistantAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssistantAssociationsOutcomeCallable ListAssistantAssociationsCallable(const Model::ListAssistantAssociationsRequest& request) const;

        /**
         * An Async wrapper for ListAssistantAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssistantAssociationsAsync(const Model::ListAssistantAssociationsRequest& request, const ListAssistantAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about assistants.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ListAssistants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssistantsOutcome ListAssistants(const Model::ListAssistantsRequest& request) const;

        /**
         * A Callable wrapper for ListAssistants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssistantsOutcomeCallable ListAssistantsCallable(const Model::ListAssistantsRequest& request) const;

        /**
         * An Async wrapper for ListAssistants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssistantsAsync(const Model::ListAssistantsRequest& request, const ListAssistantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ListContents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContentsOutcome ListContents(const Model::ListContentsRequest& request) const;

        /**
         * A Callable wrapper for ListContents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContentsOutcomeCallable ListContentsCallable(const Model::ListContentsRequest& request) const;

        /**
         * An Async wrapper for ListContents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContentsAsync(const Model::ListContentsRequest& request, const ListContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the knowledge bases.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ListKnowledgeBases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKnowledgeBasesOutcome ListKnowledgeBases(const Model::ListKnowledgeBasesRequest& request) const;

        /**
         * A Callable wrapper for ListKnowledgeBases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListKnowledgeBasesOutcomeCallable ListKnowledgeBasesCallable(const Model::ListKnowledgeBasesRequest& request) const;

        /**
         * An Async wrapper for ListKnowledgeBases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListKnowledgeBasesAsync(const Model::ListKnowledgeBasesRequest& request, const ListKnowledgeBasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ListTagsForResource">AWS
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
         * <p>Removes the specified recommendations from the specified assistant's queue of
         * newly available recommendations. You can use this API in conjunction with <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetRecommendations.html">GetRecommendations</a>
         * and a <code>waitTimeSeconds</code> input for long-polling behavior and avoiding
         * duplicate recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/NotifyRecommendationsReceived">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyRecommendationsReceivedOutcome NotifyRecommendationsReceived(const Model::NotifyRecommendationsReceivedRequest& request) const;

        /**
         * A Callable wrapper for NotifyRecommendationsReceived that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::NotifyRecommendationsReceivedOutcomeCallable NotifyRecommendationsReceivedCallable(const Model::NotifyRecommendationsReceivedRequest& request) const;

        /**
         * An Async wrapper for NotifyRecommendationsReceived that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void NotifyRecommendationsReceivedAsync(const Model::NotifyRecommendationsReceivedRequest& request, const NotifyRecommendationsReceivedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Performs a manual search against the specified assistant. To retrieve
         * recommendations for an assistant, use <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetRecommendations.html">GetRecommendations</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/QueryAssistant">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryAssistantOutcome QueryAssistant(const Model::QueryAssistantRequest& request) const;

        /**
         * A Callable wrapper for QueryAssistant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::QueryAssistantOutcomeCallable QueryAssistantCallable(const Model::QueryAssistantRequest& request) const;

        /**
         * An Async wrapper for QueryAssistant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QueryAssistantAsync(const Model::QueryAssistantRequest& request, const QueryAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a URI template from a knowledge base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/RemoveKnowledgeBaseTemplateUri">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveKnowledgeBaseTemplateUriOutcome RemoveKnowledgeBaseTemplateUri(const Model::RemoveKnowledgeBaseTemplateUriRequest& request) const;

        /**
         * A Callable wrapper for RemoveKnowledgeBaseTemplateUri that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveKnowledgeBaseTemplateUriOutcomeCallable RemoveKnowledgeBaseTemplateUriCallable(const Model::RemoveKnowledgeBaseTemplateUriRequest& request) const;

        /**
         * An Async wrapper for RemoveKnowledgeBaseTemplateUri that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveKnowledgeBaseTemplateUriAsync(const Model::RemoveKnowledgeBaseTemplateUriRequest& request, const RemoveKnowledgeBaseTemplateUriResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for content in a specified knowledge base. Can be used to get a
         * specific content resource by its name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/SearchContent">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchContentOutcome SearchContent(const Model::SearchContentRequest& request) const;

        /**
         * A Callable wrapper for SearchContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchContentOutcomeCallable SearchContentCallable(const Model::SearchContentRequest& request) const;

        /**
         * An Async wrapper for SearchContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchContentAsync(const Model::SearchContentRequest& request, const SearchContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for sessions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/SearchSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSessionsOutcome SearchSessions(const Model::SearchSessionsRequest& request) const;

        /**
         * A Callable wrapper for SearchSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchSessionsOutcomeCallable SearchSessionsCallable(const Model::SearchSessionsRequest& request) const;

        /**
         * An Async wrapper for SearchSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchSessionsAsync(const Model::SearchSessionsRequest& request, const SearchSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a URL to upload content to a knowledge base. To upload content, first
         * make a PUT request to the returned URL with your file, making sure to include
         * the required headers. Then use <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_CreateContent.html">CreateContent</a>
         * to finalize the content creation process or <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_UpdateContent.html">UpdateContent</a>
         * to modify an existing resource. You can only upload content to a knowledge base
         * of type CUSTOM.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/StartContentUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContentUploadOutcome StartContentUpload(const Model::StartContentUploadRequest& request) const;

        /**
         * A Callable wrapper for StartContentUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartContentUploadOutcomeCallable StartContentUploadCallable(const Model::StartContentUploadRequest& request) const;

        /**
         * An Async wrapper for StartContentUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartContentUploadAsync(const Model::StartContentUploadRequest& request, const StartContentUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/TagResource">AWS
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
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/UntagResource">AWS
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
         * <p>Updates information about the content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/UpdateContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContentOutcome UpdateContent(const Model::UpdateContentRequest& request) const;

        /**
         * A Callable wrapper for UpdateContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContentOutcomeCallable UpdateContentCallable(const Model::UpdateContentRequest& request) const;

        /**
         * An Async wrapper for UpdateContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContentAsync(const Model::UpdateContentRequest& request, const UpdateContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the template URI of a knowledge base. This is only supported for
         * knowledge bases of type EXTERNAL. Include a single variable in
         * <code>${variable}</code> format; this interpolated by Wisdom using ingested
         * content. For example, if you ingest a Salesforce article, it has an
         * <code>Id</code> value, and you can set the template URI to
         * <code>https://myInstanceName.lightning.force.com/lightning/r/Knowledge__kav/ *${Id}* /view</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/UpdateKnowledgeBaseTemplateUri">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKnowledgeBaseTemplateUriOutcome UpdateKnowledgeBaseTemplateUri(const Model::UpdateKnowledgeBaseTemplateUriRequest& request) const;

        /**
         * A Callable wrapper for UpdateKnowledgeBaseTemplateUri that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateKnowledgeBaseTemplateUriOutcomeCallable UpdateKnowledgeBaseTemplateUriCallable(const Model::UpdateKnowledgeBaseTemplateUriRequest& request) const;

        /**
         * An Async wrapper for UpdateKnowledgeBaseTemplateUri that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateKnowledgeBaseTemplateUriAsync(const Model::UpdateKnowledgeBaseTemplateUriRequest& request, const UpdateKnowledgeBaseTemplateUriResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConnectWisdomServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ConnectWisdomServiceClient>;
      void init(const ConnectWisdomServiceClientConfiguration& clientConfiguration);

      ConnectWisdomServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ConnectWisdomServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace ConnectWisdomService
} // namespace Aws
