/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/comprehend/ComprehendServiceClientModel.h>

namespace Aws
{
namespace Comprehend
{
  /**
   * <p>Amazon Comprehend is an AWS service for gaining insight into the content of
   * documents. Use these actions to determine the topics contained in your
   * documents, the topics they discuss, the predominant sentiment expressed in them,
   * the predominant language used, and more.</p>
   */
  class AWS_COMPREHEND_API ComprehendClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ComprehendClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendClient(const Aws::Comprehend::ComprehendClientConfiguration& clientConfiguration = Aws::Comprehend::ComprehendClientConfiguration(),
                         std::shared_ptr<ComprehendEndpointProviderBase> endpointProvider = Aws::MakeShared<ComprehendEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<ComprehendEndpointProviderBase> endpointProvider = Aws::MakeShared<ComprehendEndpointProvider>(ALLOCATION_TAG),
                         const Aws::Comprehend::ComprehendClientConfiguration& clientConfiguration = Aws::Comprehend::ComprehendClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComprehendClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<ComprehendEndpointProviderBase> endpointProvider = Aws::MakeShared<ComprehendEndpointProvider>(ALLOCATION_TAG),
                         const Aws::Comprehend::ComprehendClientConfiguration& clientConfiguration = Aws::Comprehend::ComprehendClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComprehendClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ComprehendClient();

        /**
         * <p>Determines the dominant language of the input text for a batch of documents.
         * For a list of languages that Amazon Comprehend can detect, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
         * Comprehend Supported Languages</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectDominantLanguage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDetectDominantLanguageOutcome BatchDetectDominantLanguage(const Model::BatchDetectDominantLanguageRequest& request) const;

        /**
         * A Callable wrapper for BatchDetectDominantLanguage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDetectDominantLanguageOutcomeCallable BatchDetectDominantLanguageCallable(const Model::BatchDetectDominantLanguageRequest& request) const;

        /**
         * An Async wrapper for BatchDetectDominantLanguage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDetectDominantLanguageAsync(const Model::BatchDetectDominantLanguageRequest& request, const BatchDetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inspects the text of a batch of documents for named entities and returns
         * information about them. For more information about named entities, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-entities.html">Entities</a>
         * in the Comprehend Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDetectEntitiesOutcome BatchDetectEntities(const Model::BatchDetectEntitiesRequest& request) const;

        /**
         * A Callable wrapper for BatchDetectEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDetectEntitiesOutcomeCallable BatchDetectEntitiesCallable(const Model::BatchDetectEntitiesRequest& request) const;

        /**
         * An Async wrapper for BatchDetectEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDetectEntitiesAsync(const Model::BatchDetectEntitiesRequest& request, const BatchDetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects the key noun phrases found in a batch of documents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectKeyPhrases">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDetectKeyPhrasesOutcome BatchDetectKeyPhrases(const Model::BatchDetectKeyPhrasesRequest& request) const;

        /**
         * A Callable wrapper for BatchDetectKeyPhrases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDetectKeyPhrasesOutcomeCallable BatchDetectKeyPhrasesCallable(const Model::BatchDetectKeyPhrasesRequest& request) const;

        /**
         * An Async wrapper for BatchDetectKeyPhrases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDetectKeyPhrasesAsync(const Model::BatchDetectKeyPhrasesRequest& request, const BatchDetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inspects a batch of documents and returns an inference of the prevailing
         * sentiment, <code>POSITIVE</code>, <code>NEUTRAL</code>, <code>MIXED</code>, or
         * <code>NEGATIVE</code>, in each one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectSentiment">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDetectSentimentOutcome BatchDetectSentiment(const Model::BatchDetectSentimentRequest& request) const;

        /**
         * A Callable wrapper for BatchDetectSentiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDetectSentimentOutcomeCallable BatchDetectSentimentCallable(const Model::BatchDetectSentimentRequest& request) const;

        /**
         * An Async wrapper for BatchDetectSentiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDetectSentimentAsync(const Model::BatchDetectSentimentRequest& request, const BatchDetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inspects the text of a batch of documents for the syntax and part of speech
         * of the words in the document and returns information about them. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
         * in the Comprehend Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectSyntax">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDetectSyntaxOutcome BatchDetectSyntax(const Model::BatchDetectSyntaxRequest& request) const;

        /**
         * A Callable wrapper for BatchDetectSyntax that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDetectSyntaxOutcomeCallable BatchDetectSyntaxCallable(const Model::BatchDetectSyntaxRequest& request) const;

        /**
         * An Async wrapper for BatchDetectSyntax that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDetectSyntaxAsync(const Model::BatchDetectSyntaxRequest& request, const BatchDetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inspects a batch of documents and returns a sentiment analysis for each
         * entity identified in the documents.</p> <p>For more information about targeted
         * sentiment, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html">Targeted
         * sentiment</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectTargetedSentiment">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDetectTargetedSentimentOutcome BatchDetectTargetedSentiment(const Model::BatchDetectTargetedSentimentRequest& request) const;

        /**
         * A Callable wrapper for BatchDetectTargetedSentiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDetectTargetedSentimentOutcomeCallable BatchDetectTargetedSentimentCallable(const Model::BatchDetectTargetedSentimentRequest& request) const;

        /**
         * An Async wrapper for BatchDetectTargetedSentiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDetectTargetedSentimentAsync(const Model::BatchDetectTargetedSentimentRequest& request, const BatchDetectTargetedSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new document classification request to analyze a single document in
         * real-time, using a previously created and trained custom model and an
         * endpoint.</p> <p>You can input plain text or you can upload a single-page input
         * document (text, PDF, Word, or image). </p> <p>If the system detects errors while
         * processing a page in the input document, the API response includes an entry in
         * <code>Errors</code> that describes the errors.</p> <p>If the system detects a
         * document-level error in your input document, the API returns an
         * <code>InvalidRequestException</code> error response. For details about this
         * exception, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/idp-inputs-sync-err.html">
         * Errors in semi-structured documents</a> in the Comprehend Developer Guide.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ClassifyDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::ClassifyDocumentOutcome ClassifyDocument(const Model::ClassifyDocumentRequest& request) const;

        /**
         * A Callable wrapper for ClassifyDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ClassifyDocumentOutcomeCallable ClassifyDocumentCallable(const Model::ClassifyDocumentRequest& request) const;

        /**
         * An Async wrapper for ClassifyDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ClassifyDocumentAsync(const Model::ClassifyDocumentRequest& request, const ClassifyDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Analyzes input text for the presence of personally identifiable information
         * (PII) and returns the labels of identified PII entity types such as name,
         * address, bank account number, or phone number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ContainsPiiEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::ContainsPiiEntitiesOutcome ContainsPiiEntities(const Model::ContainsPiiEntitiesRequest& request) const;

        /**
         * A Callable wrapper for ContainsPiiEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ContainsPiiEntitiesOutcomeCallable ContainsPiiEntitiesCallable(const Model::ContainsPiiEntitiesRequest& request) const;

        /**
         * An Async wrapper for ContainsPiiEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ContainsPiiEntitiesAsync(const Model::ContainsPiiEntitiesRequest& request, const ContainsPiiEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new document classifier that you can use to categorize documents.
         * To create a classifier, you provide a set of training documents that labeled
         * with the categories that you want to use. After the classifier is trained you
         * can use it to categorize a set of labeled documents into the categories. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-document-classification.html">Document
         * Classification</a> in the Comprehend Developer Guide. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateDocumentClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDocumentClassifierOutcome CreateDocumentClassifier(const Model::CreateDocumentClassifierRequest& request) const;

        /**
         * A Callable wrapper for CreateDocumentClassifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDocumentClassifierOutcomeCallable CreateDocumentClassifierCallable(const Model::CreateDocumentClassifierRequest& request) const;

        /**
         * An Async wrapper for CreateDocumentClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDocumentClassifierAsync(const Model::CreateDocumentClassifierRequest& request, const CreateDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a model-specific endpoint for synchronous inference for a previously
         * trained custom model For information about endpoints, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
         * endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointOutcome CreateEndpoint(const Model::CreateEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointOutcomeCallable CreateEndpointCallable(const Model::CreateEndpointRequest& request) const;

        /**
         * An Async wrapper for CreateEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEndpointAsync(const Model::CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an entity recognizer using submitted files. After your
         * <code>CreateEntityRecognizer</code> request is submitted, you can check job
         * status using the API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateEntityRecognizer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEntityRecognizerOutcome CreateEntityRecognizer(const Model::CreateEntityRecognizerRequest& request) const;

        /**
         * A Callable wrapper for CreateEntityRecognizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEntityRecognizerOutcomeCallable CreateEntityRecognizerCallable(const Model::CreateEntityRecognizerRequest& request) const;

        /**
         * An Async wrapper for CreateEntityRecognizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEntityRecognizerAsync(const Model::CreateEntityRecognizerRequest& request, const CreateEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a previously created document classifier</p> <p>Only those
         * classifiers that are in terminated states (IN_ERROR, TRAINED) will be deleted.
         * If an active inference job is using the model, a
         * <code>ResourceInUseException</code> will be returned.</p> <p>This is an
         * asynchronous action that puts the classifier into a DELETING state, and it is
         * then removed by a background job. Once removed, the classifier disappears from
         * your account and is no longer available for use. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DeleteDocumentClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentClassifierOutcome DeleteDocumentClassifier(const Model::DeleteDocumentClassifierRequest& request) const;

        /**
         * A Callable wrapper for DeleteDocumentClassifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDocumentClassifierOutcomeCallable DeleteDocumentClassifierCallable(const Model::DeleteDocumentClassifierRequest& request) const;

        /**
         * An Async wrapper for DeleteDocumentClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDocumentClassifierAsync(const Model::DeleteDocumentClassifierRequest& request, const DeleteDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a model-specific endpoint for a previously-trained custom model. All
         * endpoints must be deleted in order for the model to be deleted. For information
         * about endpoints, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
         * endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const Model::DeleteEndpointRequest& request) const;

        /**
         * An Async wrapper for DeleteEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointAsync(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an entity recognizer.</p> <p>Only those recognizers that are in
         * terminated states (IN_ERROR, TRAINED) will be deleted. If an active inference
         * job is using the model, a <code>ResourceInUseException</code> will be
         * returned.</p> <p>This is an asynchronous action that puts the recognizer into a
         * DELETING state, and it is then removed by a background job. Once removed, the
         * recognizer disappears from your account and is no longer available for use.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DeleteEntityRecognizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEntityRecognizerOutcome DeleteEntityRecognizer(const Model::DeleteEntityRecognizerRequest& request) const;

        /**
         * A Callable wrapper for DeleteEntityRecognizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEntityRecognizerOutcomeCallable DeleteEntityRecognizerCallable(const Model::DeleteEntityRecognizerRequest& request) const;

        /**
         * An Async wrapper for DeleteEntityRecognizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEntityRecognizerAsync(const Model::DeleteEntityRecognizerRequest& request, const DeleteEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a resource-based policy that is attached to a custom
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with a document classification job. Use this
         * operation to get the status of a classification job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeDocumentClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentClassificationJobOutcome DescribeDocumentClassificationJob(const Model::DescribeDocumentClassificationJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeDocumentClassificationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDocumentClassificationJobOutcomeCallable DescribeDocumentClassificationJobCallable(const Model::DescribeDocumentClassificationJobRequest& request) const;

        /**
         * An Async wrapper for DescribeDocumentClassificationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDocumentClassificationJobAsync(const Model::DescribeDocumentClassificationJobRequest& request, const DescribeDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with a document classifier.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeDocumentClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentClassifierOutcome DescribeDocumentClassifier(const Model::DescribeDocumentClassifierRequest& request) const;

        /**
         * A Callable wrapper for DescribeDocumentClassifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDocumentClassifierOutcomeCallable DescribeDocumentClassifierCallable(const Model::DescribeDocumentClassifierRequest& request) const;

        /**
         * An Async wrapper for DescribeDocumentClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDocumentClassifierAsync(const Model::DescribeDocumentClassifierRequest& request, const DescribeDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with a dominant language detection job. Use
         * this operation to get the status of a detection job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeDominantLanguageDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDominantLanguageDetectionJobOutcome DescribeDominantLanguageDetectionJob(const Model::DescribeDominantLanguageDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeDominantLanguageDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDominantLanguageDetectionJobOutcomeCallable DescribeDominantLanguageDetectionJobCallable(const Model::DescribeDominantLanguageDetectionJobRequest& request) const;

        /**
         * An Async wrapper for DescribeDominantLanguageDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDominantLanguageDetectionJobAsync(const Model::DescribeDominantLanguageDetectionJobRequest& request, const DescribeDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with a specific endpoint. Use this operation
         * to get the status of an endpoint. For information about endpoints, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
         * endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointOutcome DescribeEndpoint(const Model::DescribeEndpointRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointOutcomeCallable DescribeEndpointCallable(const Model::DescribeEndpointRequest& request) const;

        /**
         * An Async wrapper for DescribeEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointAsync(const Model::DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with an entities detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEntitiesDetectionJobOutcome DescribeEntitiesDetectionJob(const Model::DescribeEntitiesDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeEntitiesDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEntitiesDetectionJobOutcomeCallable DescribeEntitiesDetectionJobCallable(const Model::DescribeEntitiesDetectionJobRequest& request) const;

        /**
         * An Async wrapper for DescribeEntitiesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEntitiesDetectionJobAsync(const Model::DescribeEntitiesDetectionJobRequest& request, const DescribeEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides details about an entity recognizer including status, S3 buckets
         * containing training data, recognizer metadata, metrics, and so on.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEntityRecognizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEntityRecognizerOutcome DescribeEntityRecognizer(const Model::DescribeEntityRecognizerRequest& request) const;

        /**
         * A Callable wrapper for DescribeEntityRecognizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEntityRecognizerOutcomeCallable DescribeEntityRecognizerCallable(const Model::DescribeEntityRecognizerRequest& request) const;

        /**
         * An Async wrapper for DescribeEntityRecognizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEntityRecognizerAsync(const Model::DescribeEntityRecognizerRequest& request, const DescribeEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the status and details of an events detection job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEventsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsDetectionJobOutcome DescribeEventsDetectionJob(const Model::DescribeEventsDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventsDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsDetectionJobOutcomeCallable DescribeEventsDetectionJobCallable(const Model::DescribeEventsDetectionJobRequest& request) const;

        /**
         * An Async wrapper for DescribeEventsDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsDetectionJobAsync(const Model::DescribeEventsDetectionJobRequest& request, const DescribeEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with a key phrases detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeKeyPhrasesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeKeyPhrasesDetectionJobOutcome DescribeKeyPhrasesDetectionJob(const Model::DescribeKeyPhrasesDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeKeyPhrasesDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeKeyPhrasesDetectionJobOutcomeCallable DescribeKeyPhrasesDetectionJobCallable(const Model::DescribeKeyPhrasesDetectionJobRequest& request) const;

        /**
         * An Async wrapper for DescribeKeyPhrasesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeKeyPhrasesDetectionJobAsync(const Model::DescribeKeyPhrasesDetectionJobRequest& request, const DescribeKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with a PII entities detection job. For
         * example, you can use this operation to get the job status.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribePiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePiiEntitiesDetectionJobOutcome DescribePiiEntitiesDetectionJob(const Model::DescribePiiEntitiesDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for DescribePiiEntitiesDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePiiEntitiesDetectionJobOutcomeCallable DescribePiiEntitiesDetectionJobCallable(const Model::DescribePiiEntitiesDetectionJobRequest& request) const;

        /**
         * An Async wrapper for DescribePiiEntitiesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePiiEntitiesDetectionJobAsync(const Model::DescribePiiEntitiesDetectionJobRequest& request, const DescribePiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details of a resource-based policy that is attached to a custom
         * model, including the JSON body of the policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourcePolicyOutcome DescribeResourcePolicy(const Model::DescribeResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DescribeResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourcePolicyOutcomeCallable DescribeResourcePolicyCallable(const Model::DescribeResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for DescribeResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourcePolicyAsync(const Model::DescribeResourcePolicyRequest& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with a sentiment detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeSentimentDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSentimentDetectionJobOutcome DescribeSentimentDetectionJob(const Model::DescribeSentimentDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeSentimentDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSentimentDetectionJobOutcomeCallable DescribeSentimentDetectionJobCallable(const Model::DescribeSentimentDetectionJobRequest& request) const;

        /**
         * An Async wrapper for DescribeSentimentDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSentimentDetectionJobAsync(const Model::DescribeSentimentDetectionJobRequest& request, const DescribeSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with a targeted sentiment detection job. Use
         * this operation to get the status of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeTargetedSentimentDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTargetedSentimentDetectionJobOutcome DescribeTargetedSentimentDetectionJob(const Model::DescribeTargetedSentimentDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeTargetedSentimentDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTargetedSentimentDetectionJobOutcomeCallable DescribeTargetedSentimentDetectionJobCallable(const Model::DescribeTargetedSentimentDetectionJobRequest& request) const;

        /**
         * An Async wrapper for DescribeTargetedSentimentDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTargetedSentimentDetectionJobAsync(const Model::DescribeTargetedSentimentDetectionJobRequest& request, const DescribeTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with a topic detection job. Use this operation
         * to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeTopicsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTopicsDetectionJobOutcome DescribeTopicsDetectionJob(const Model::DescribeTopicsDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeTopicsDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTopicsDetectionJobOutcomeCallable DescribeTopicsDetectionJobCallable(const Model::DescribeTopicsDetectionJobRequest& request) const;

        /**
         * An Async wrapper for DescribeTopicsDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTopicsDetectionJobAsync(const Model::DescribeTopicsDetectionJobRequest& request, const DescribeTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Determines the dominant language of the input text. For a list of languages
         * that Amazon Comprehend can detect, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
         * Comprehend Supported Languages</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectDominantLanguage">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectDominantLanguageOutcome DetectDominantLanguage(const Model::DetectDominantLanguageRequest& request) const;

        /**
         * A Callable wrapper for DetectDominantLanguage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectDominantLanguageOutcomeCallable DetectDominantLanguageCallable(const Model::DetectDominantLanguageRequest& request) const;

        /**
         * An Async wrapper for DetectDominantLanguage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectDominantLanguageAsync(const Model::DetectDominantLanguageRequest& request, const DetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects named entities in input text when you use the pre-trained model.
         * Detects custom entities if you have a custom entity recognition model. </p> <p>
         * When detecting named entities using the pre-trained model, use plain text as the
         * input. For more information about named entities, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-entities.html">Entities</a>
         * in the Comprehend Developer Guide.</p> <p>When you use a custom entity
         * recognition model, you can input plain text or you can upload a single-page
         * input document (text, PDF, Word, or image). </p> <p>If the system detects errors
         * while processing a page in the input document, the API response includes an
         * entry in <code>Errors</code> for each error. </p> <p>If the system detects a
         * document-level error in your input document, the API returns an
         * <code>InvalidRequestException</code> error response. For details about this
         * exception, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/idp-inputs-sync-err.html">
         * Errors in semi-structured documents</a> in the Comprehend Developer Guide.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectEntitiesOutcome DetectEntities(const Model::DetectEntitiesRequest& request) const;

        /**
         * A Callable wrapper for DetectEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectEntitiesOutcomeCallable DetectEntitiesCallable(const Model::DetectEntitiesRequest& request) const;

        /**
         * An Async wrapper for DetectEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectEntitiesAsync(const Model::DetectEntitiesRequest& request, const DetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects the key noun phrases found in the text. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectKeyPhrases">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectKeyPhrasesOutcome DetectKeyPhrases(const Model::DetectKeyPhrasesRequest& request) const;

        /**
         * A Callable wrapper for DetectKeyPhrases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectKeyPhrasesOutcomeCallable DetectKeyPhrasesCallable(const Model::DetectKeyPhrasesRequest& request) const;

        /**
         * An Async wrapper for DetectKeyPhrases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectKeyPhrasesAsync(const Model::DetectKeyPhrasesRequest& request, const DetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inspects the input text for entities that contain personally identifiable
         * information (PII) and returns information about them.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectPiiEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectPiiEntitiesOutcome DetectPiiEntities(const Model::DetectPiiEntitiesRequest& request) const;

        /**
         * A Callable wrapper for DetectPiiEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectPiiEntitiesOutcomeCallable DetectPiiEntitiesCallable(const Model::DetectPiiEntitiesRequest& request) const;

        /**
         * An Async wrapper for DetectPiiEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectPiiEntitiesAsync(const Model::DetectPiiEntitiesRequest& request, const DetectPiiEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inspects text and returns an inference of the prevailing sentiment
         * (<code>POSITIVE</code>, <code>NEUTRAL</code>, <code>MIXED</code>, or
         * <code>NEGATIVE</code>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectSentiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectSentimentOutcome DetectSentiment(const Model::DetectSentimentRequest& request) const;

        /**
         * A Callable wrapper for DetectSentiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectSentimentOutcomeCallable DetectSentimentCallable(const Model::DetectSentimentRequest& request) const;

        /**
         * An Async wrapper for DetectSentiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectSentimentAsync(const Model::DetectSentimentRequest& request, const DetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inspects text for syntax and the part of speech of words in the document. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
         * in the Comprehend Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectSyntax">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectSyntaxOutcome DetectSyntax(const Model::DetectSyntaxRequest& request) const;

        /**
         * A Callable wrapper for DetectSyntax that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectSyntaxOutcomeCallable DetectSyntaxCallable(const Model::DetectSyntaxRequest& request) const;

        /**
         * An Async wrapper for DetectSyntax that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectSyntaxAsync(const Model::DetectSyntaxRequest& request, const DetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inspects the input text and returns a sentiment analysis for each entity
         * identified in the text.</p> <p>For more information about targeted sentiment,
         * see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html">Targeted
         * sentiment</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectTargetedSentiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectTargetedSentimentOutcome DetectTargetedSentiment(const Model::DetectTargetedSentimentRequest& request) const;

        /**
         * A Callable wrapper for DetectTargetedSentiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectTargetedSentimentOutcomeCallable DetectTargetedSentimentCallable(const Model::DetectTargetedSentimentRequest& request) const;

        /**
         * An Async wrapper for DetectTargetedSentiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectTargetedSentimentAsync(const Model::DetectTargetedSentimentRequest& request, const DetectTargetedSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new custom model that replicates a source custom model that you
         * import. The source model can be in your AWS account or another one.</p> <p>If
         * the source model is in another AWS account, then it must have a resource-based
         * policy that authorizes you to import it.</p> <p>The source model must be in the
         * same AWS region that you're using when you import. You can't import a model
         * that's in a different region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ImportModel">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportModelOutcome ImportModel(const Model::ImportModelRequest& request) const;

        /**
         * A Callable wrapper for ImportModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportModelOutcomeCallable ImportModelCallable(const Model::ImportModelRequest& request) const;

        /**
         * An Async wrapper for ImportModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportModelAsync(const Model::ImportModelRequest& request, const ImportModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the documentation classification jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDocumentClassificationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentClassificationJobsOutcome ListDocumentClassificationJobs(const Model::ListDocumentClassificationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListDocumentClassificationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDocumentClassificationJobsOutcomeCallable ListDocumentClassificationJobsCallable(const Model::ListDocumentClassificationJobsRequest& request) const;

        /**
         * An Async wrapper for ListDocumentClassificationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDocumentClassificationJobsAsync(const Model::ListDocumentClassificationJobsRequest& request, const ListDocumentClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of summaries of the document classifiers that you have
         * created</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDocumentClassifierSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentClassifierSummariesOutcome ListDocumentClassifierSummaries(const Model::ListDocumentClassifierSummariesRequest& request) const;

        /**
         * A Callable wrapper for ListDocumentClassifierSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDocumentClassifierSummariesOutcomeCallable ListDocumentClassifierSummariesCallable(const Model::ListDocumentClassifierSummariesRequest& request) const;

        /**
         * An Async wrapper for ListDocumentClassifierSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDocumentClassifierSummariesAsync(const Model::ListDocumentClassifierSummariesRequest& request, const ListDocumentClassifierSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the document classifiers that you have created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDocumentClassifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentClassifiersOutcome ListDocumentClassifiers(const Model::ListDocumentClassifiersRequest& request) const;

        /**
         * A Callable wrapper for ListDocumentClassifiers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDocumentClassifiersOutcomeCallable ListDocumentClassifiersCallable(const Model::ListDocumentClassifiersRequest& request) const;

        /**
         * An Async wrapper for ListDocumentClassifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDocumentClassifiersAsync(const Model::ListDocumentClassifiersRequest& request, const ListDocumentClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the dominant language detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDominantLanguageDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDominantLanguageDetectionJobsOutcome ListDominantLanguageDetectionJobs(const Model::ListDominantLanguageDetectionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListDominantLanguageDetectionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDominantLanguageDetectionJobsOutcomeCallable ListDominantLanguageDetectionJobsCallable(const Model::ListDominantLanguageDetectionJobsRequest& request) const;

        /**
         * An Async wrapper for ListDominantLanguageDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDominantLanguageDetectionJobsAsync(const Model::ListDominantLanguageDetectionJobsRequest& request, const ListDominantLanguageDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of all existing endpoints that you've created. For information
         * about endpoints, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
         * endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointsOutcome ListEndpoints(const Model::ListEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEndpointsOutcomeCallable ListEndpointsCallable(const Model::ListEndpointsRequest& request) const;

        /**
         * An Async wrapper for ListEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEndpointsAsync(const Model::ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEntitiesDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitiesDetectionJobsOutcome ListEntitiesDetectionJobs(const Model::ListEntitiesDetectionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListEntitiesDetectionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntitiesDetectionJobsOutcomeCallable ListEntitiesDetectionJobsCallable(const Model::ListEntitiesDetectionJobsRequest& request) const;

        /**
         * An Async wrapper for ListEntitiesDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEntitiesDetectionJobsAsync(const Model::ListEntitiesDetectionJobsRequest& request, const ListEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of summaries for the entity recognizers that you have
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEntityRecognizerSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntityRecognizerSummariesOutcome ListEntityRecognizerSummaries(const Model::ListEntityRecognizerSummariesRequest& request) const;

        /**
         * A Callable wrapper for ListEntityRecognizerSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntityRecognizerSummariesOutcomeCallable ListEntityRecognizerSummariesCallable(const Model::ListEntityRecognizerSummariesRequest& request) const;

        /**
         * An Async wrapper for ListEntityRecognizerSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEntityRecognizerSummariesAsync(const Model::ListEntityRecognizerSummariesRequest& request, const ListEntityRecognizerSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the properties of all entity recognizers that you created,
         * including recognizers currently in training. Allows you to filter the list of
         * recognizers based on criteria such as status and submission time. This call
         * returns up to 500 entity recognizers in the list, with a default number of 100
         * recognizers in the list.</p> <p>The results of this list are not in any
         * particular order. Please get the list and sort locally if needed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEntityRecognizers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntityRecognizersOutcome ListEntityRecognizers(const Model::ListEntityRecognizersRequest& request) const;

        /**
         * A Callable wrapper for ListEntityRecognizers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntityRecognizersOutcomeCallable ListEntityRecognizersCallable(const Model::ListEntityRecognizersRequest& request) const;

        /**
         * An Async wrapper for ListEntityRecognizers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEntityRecognizersAsync(const Model::ListEntityRecognizersRequest& request, const ListEntityRecognizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the events detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEventsDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventsDetectionJobsOutcome ListEventsDetectionJobs(const Model::ListEventsDetectionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListEventsDetectionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventsDetectionJobsOutcomeCallable ListEventsDetectionJobsCallable(const Model::ListEventsDetectionJobsRequest& request) const;

        /**
         * An Async wrapper for ListEventsDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventsDetectionJobsAsync(const Model::ListEventsDetectionJobsRequest& request, const ListEventsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a list of key phrase detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListKeyPhrasesDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKeyPhrasesDetectionJobsOutcome ListKeyPhrasesDetectionJobs(const Model::ListKeyPhrasesDetectionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListKeyPhrasesDetectionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListKeyPhrasesDetectionJobsOutcomeCallable ListKeyPhrasesDetectionJobsCallable(const Model::ListKeyPhrasesDetectionJobsRequest& request) const;

        /**
         * An Async wrapper for ListKeyPhrasesDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListKeyPhrasesDetectionJobsAsync(const Model::ListKeyPhrasesDetectionJobsRequest& request, const ListKeyPhrasesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the PII entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListPiiEntitiesDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPiiEntitiesDetectionJobsOutcome ListPiiEntitiesDetectionJobs(const Model::ListPiiEntitiesDetectionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListPiiEntitiesDetectionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPiiEntitiesDetectionJobsOutcomeCallable ListPiiEntitiesDetectionJobsCallable(const Model::ListPiiEntitiesDetectionJobsRequest& request) const;

        /**
         * An Async wrapper for ListPiiEntitiesDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPiiEntitiesDetectionJobsAsync(const Model::ListPiiEntitiesDetectionJobsRequest& request, const ListPiiEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of sentiment detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListSentimentDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSentimentDetectionJobsOutcome ListSentimentDetectionJobs(const Model::ListSentimentDetectionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListSentimentDetectionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSentimentDetectionJobsOutcomeCallable ListSentimentDetectionJobsCallable(const Model::ListSentimentDetectionJobsRequest& request) const;

        /**
         * An Async wrapper for ListSentimentDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSentimentDetectionJobsAsync(const Model::ListSentimentDetectionJobsRequest& request, const ListSentimentDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags associated with a given Amazon Comprehend resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListTagsForResource">AWS
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
         * <p>Gets a list of targeted sentiment detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListTargetedSentimentDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetedSentimentDetectionJobsOutcome ListTargetedSentimentDetectionJobs(const Model::ListTargetedSentimentDetectionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListTargetedSentimentDetectionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTargetedSentimentDetectionJobsOutcomeCallable ListTargetedSentimentDetectionJobsCallable(const Model::ListTargetedSentimentDetectionJobsRequest& request) const;

        /**
         * An Async wrapper for ListTargetedSentimentDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTargetedSentimentDetectionJobsAsync(const Model::ListTargetedSentimentDetectionJobsRequest& request, const ListTargetedSentimentDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the topic detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListTopicsDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTopicsDetectionJobsOutcome ListTopicsDetectionJobs(const Model::ListTopicsDetectionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListTopicsDetectionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTopicsDetectionJobsOutcomeCallable ListTopicsDetectionJobsCallable(const Model::ListTopicsDetectionJobsRequest& request) const;

        /**
         * An Async wrapper for ListTopicsDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTopicsDetectionJobsAsync(const Model::ListTopicsDetectionJobsRequest& request, const ListTopicsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a resource-based policy to a custom model. You can use this policy
         * to authorize an entity in another AWS account to import the custom model, which
         * replicates it in Amazon Comprehend in their account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous document classification job. Use the operation to
         * track the progress of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartDocumentClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDocumentClassificationJobOutcome StartDocumentClassificationJob(const Model::StartDocumentClassificationJobRequest& request) const;

        /**
         * A Callable wrapper for StartDocumentClassificationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDocumentClassificationJobOutcomeCallable StartDocumentClassificationJobCallable(const Model::StartDocumentClassificationJobRequest& request) const;

        /**
         * An Async wrapper for StartDocumentClassificationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDocumentClassificationJobAsync(const Model::StartDocumentClassificationJobRequest& request, const StartDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous dominant language detection job for a collection of
         * documents. Use the operation to track the status of a job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartDominantLanguageDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDominantLanguageDetectionJobOutcome StartDominantLanguageDetectionJob(const Model::StartDominantLanguageDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StartDominantLanguageDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDominantLanguageDetectionJobOutcomeCallable StartDominantLanguageDetectionJobCallable(const Model::StartDominantLanguageDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StartDominantLanguageDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDominantLanguageDetectionJobAsync(const Model::StartDominantLanguageDetectionJobRequest& request, const StartDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous entity detection job for a collection of documents.
         * Use the operation to track the status of a job.</p> <p>This API can be used for
         * either standard entity detection or custom entity recognition. In order to be
         * used for custom entity recognition, the optional
         * <code>EntityRecognizerArn</code> must be used in order to provide access to the
         * recognizer being used to detect the custom entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEntitiesDetectionJobOutcome StartEntitiesDetectionJob(const Model::StartEntitiesDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StartEntitiesDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartEntitiesDetectionJobOutcomeCallable StartEntitiesDetectionJobCallable(const Model::StartEntitiesDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StartEntitiesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartEntitiesDetectionJobAsync(const Model::StartEntitiesDetectionJobRequest& request, const StartEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous event detection job for a collection of
         * documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartEventsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEventsDetectionJobOutcome StartEventsDetectionJob(const Model::StartEventsDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StartEventsDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartEventsDetectionJobOutcomeCallable StartEventsDetectionJobCallable(const Model::StartEventsDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StartEventsDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartEventsDetectionJobAsync(const Model::StartEventsDetectionJobRequest& request, const StartEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous key phrase detection job for a collection of
         * documents. Use the operation to track the status of a job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartKeyPhrasesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartKeyPhrasesDetectionJobOutcome StartKeyPhrasesDetectionJob(const Model::StartKeyPhrasesDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StartKeyPhrasesDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartKeyPhrasesDetectionJobOutcomeCallable StartKeyPhrasesDetectionJobCallable(const Model::StartKeyPhrasesDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StartKeyPhrasesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartKeyPhrasesDetectionJobAsync(const Model::StartKeyPhrasesDetectionJobRequest& request, const StartKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous PII entity detection job for a collection of
         * documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartPiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPiiEntitiesDetectionJobOutcome StartPiiEntitiesDetectionJob(const Model::StartPiiEntitiesDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StartPiiEntitiesDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartPiiEntitiesDetectionJobOutcomeCallable StartPiiEntitiesDetectionJobCallable(const Model::StartPiiEntitiesDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StartPiiEntitiesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartPiiEntitiesDetectionJobAsync(const Model::StartPiiEntitiesDetectionJobRequest& request, const StartPiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous sentiment detection job for a collection of documents.
         * Use the operation to track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartSentimentDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSentimentDetectionJobOutcome StartSentimentDetectionJob(const Model::StartSentimentDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StartSentimentDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSentimentDetectionJobOutcomeCallable StartSentimentDetectionJobCallable(const Model::StartSentimentDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StartSentimentDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSentimentDetectionJobAsync(const Model::StartSentimentDetectionJobRequest& request, const StartSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous targeted sentiment detection job for a collection of
         * documents. Use the operation to track the status of a job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartTargetedSentimentDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTargetedSentimentDetectionJobOutcome StartTargetedSentimentDetectionJob(const Model::StartTargetedSentimentDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StartTargetedSentimentDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTargetedSentimentDetectionJobOutcomeCallable StartTargetedSentimentDetectionJobCallable(const Model::StartTargetedSentimentDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StartTargetedSentimentDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTargetedSentimentDetectionJobAsync(const Model::StartTargetedSentimentDetectionJobRequest& request, const StartTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous topic detection job. Use the
         * <code>DescribeTopicDetectionJob</code> operation to track the status of a
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartTopicsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTopicsDetectionJobOutcome StartTopicsDetectionJob(const Model::StartTopicsDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StartTopicsDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTopicsDetectionJobOutcomeCallable StartTopicsDetectionJobCallable(const Model::StartTopicsDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StartTopicsDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTopicsDetectionJobAsync(const Model::StartTopicsDetectionJobRequest& request, const StartTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a dominant language detection job in progress.</p> <p>If the job state
         * is <code>IN_PROGRESS</code> the job is marked for termination and put into the
         * <code>STOP_REQUESTED</code> state. If the job completes before it can be
         * stopped, it is put into the <code>COMPLETED</code> state; otherwise the job is
         * stopped and put into the <code>STOPPED</code> state.</p> <p>If the job is in the
         * <code>COMPLETED</code> or <code>FAILED</code> state when you call the
         * <code>StopDominantLanguageDetectionJob</code> operation, the operation returns a
         * 400 Internal Request Exception. </p> <p>When a job is stopped, any documents
         * already processed are written to the output location.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopDominantLanguageDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDominantLanguageDetectionJobOutcome StopDominantLanguageDetectionJob(const Model::StopDominantLanguageDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StopDominantLanguageDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDominantLanguageDetectionJobOutcomeCallable StopDominantLanguageDetectionJobCallable(const Model::StopDominantLanguageDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StopDominantLanguageDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDominantLanguageDetectionJobAsync(const Model::StopDominantLanguageDetectionJobRequest& request, const StopDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an entities detection job in progress.</p> <p>If the job state is
         * <code>IN_PROGRESS</code> the job is marked for termination and put into the
         * <code>STOP_REQUESTED</code> state. If the job completes before it can be
         * stopped, it is put into the <code>COMPLETED</code> state; otherwise the job is
         * stopped and put into the <code>STOPPED</code> state.</p> <p>If the job is in the
         * <code>COMPLETED</code> or <code>FAILED</code> state when you call the
         * <code>StopDominantLanguageDetectionJob</code> operation, the operation returns a
         * 400 Internal Request Exception. </p> <p>When a job is stopped, any documents
         * already processed are written to the output location.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEntitiesDetectionJobOutcome StopEntitiesDetectionJob(const Model::StopEntitiesDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StopEntitiesDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopEntitiesDetectionJobOutcomeCallable StopEntitiesDetectionJobCallable(const Model::StopEntitiesDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StopEntitiesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopEntitiesDetectionJobAsync(const Model::StopEntitiesDetectionJobRequest& request, const StopEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an events detection job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopEventsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEventsDetectionJobOutcome StopEventsDetectionJob(const Model::StopEventsDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StopEventsDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopEventsDetectionJobOutcomeCallable StopEventsDetectionJobCallable(const Model::StopEventsDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StopEventsDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopEventsDetectionJobAsync(const Model::StopEventsDetectionJobRequest& request, const StopEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a key phrases detection job in progress.</p> <p>If the job state is
         * <code>IN_PROGRESS</code> the job is marked for termination and put into the
         * <code>STOP_REQUESTED</code> state. If the job completes before it can be
         * stopped, it is put into the <code>COMPLETED</code> state; otherwise the job is
         * stopped and put into the <code>STOPPED</code> state.</p> <p>If the job is in the
         * <code>COMPLETED</code> or <code>FAILED</code> state when you call the
         * <code>StopDominantLanguageDetectionJob</code> operation, the operation returns a
         * 400 Internal Request Exception. </p> <p>When a job is stopped, any documents
         * already processed are written to the output location.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopKeyPhrasesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopKeyPhrasesDetectionJobOutcome StopKeyPhrasesDetectionJob(const Model::StopKeyPhrasesDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StopKeyPhrasesDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopKeyPhrasesDetectionJobOutcomeCallable StopKeyPhrasesDetectionJobCallable(const Model::StopKeyPhrasesDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StopKeyPhrasesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopKeyPhrasesDetectionJobAsync(const Model::StopKeyPhrasesDetectionJobRequest& request, const StopKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a PII entities detection job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopPiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopPiiEntitiesDetectionJobOutcome StopPiiEntitiesDetectionJob(const Model::StopPiiEntitiesDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StopPiiEntitiesDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopPiiEntitiesDetectionJobOutcomeCallable StopPiiEntitiesDetectionJobCallable(const Model::StopPiiEntitiesDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StopPiiEntitiesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopPiiEntitiesDetectionJobAsync(const Model::StopPiiEntitiesDetectionJobRequest& request, const StopPiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a sentiment detection job in progress.</p> <p>If the job state is
         * <code>IN_PROGRESS</code>, the job is marked for termination and put into the
         * <code>STOP_REQUESTED</code> state. If the job completes before it can be
         * stopped, it is put into the <code>COMPLETED</code> state; otherwise the job is
         * be stopped and put into the <code>STOPPED</code> state.</p> <p>If the job is in
         * the <code>COMPLETED</code> or <code>FAILED</code> state when you call the
         * <code>StopDominantLanguageDetectionJob</code> operation, the operation returns a
         * 400 Internal Request Exception. </p> <p>When a job is stopped, any documents
         * already processed are written to the output location.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopSentimentDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSentimentDetectionJobOutcome StopSentimentDetectionJob(const Model::StopSentimentDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StopSentimentDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopSentimentDetectionJobOutcomeCallable StopSentimentDetectionJobCallable(const Model::StopSentimentDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StopSentimentDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopSentimentDetectionJobAsync(const Model::StopSentimentDetectionJobRequest& request, const StopSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a targeted sentiment detection job in progress.</p> <p>If the job state
         * is <code>IN_PROGRESS</code>, the job is marked for termination and put into the
         * <code>STOP_REQUESTED</code> state. If the job completes before it can be
         * stopped, it is put into the <code>COMPLETED</code> state; otherwise the job is
         * be stopped and put into the <code>STOPPED</code> state.</p> <p>If the job is in
         * the <code>COMPLETED</code> or <code>FAILED</code> state when you call the
         * <code>StopDominantLanguageDetectionJob</code> operation, the operation returns a
         * 400 Internal Request Exception. </p> <p>When a job is stopped, any documents
         * already processed are written to the output location.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopTargetedSentimentDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTargetedSentimentDetectionJobOutcome StopTargetedSentimentDetectionJob(const Model::StopTargetedSentimentDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StopTargetedSentimentDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTargetedSentimentDetectionJobOutcomeCallable StopTargetedSentimentDetectionJobCallable(const Model::StopTargetedSentimentDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StopTargetedSentimentDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopTargetedSentimentDetectionJobAsync(const Model::StopTargetedSentimentDetectionJobRequest& request, const StopTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a document classifier training job while in progress.</p> <p>If the
         * training job state is <code>TRAINING</code>, the job is marked for termination
         * and put into the <code>STOP_REQUESTED</code> state. If the training job
         * completes before it can be stopped, it is put into the <code>TRAINED</code>;
         * otherwise the training job is stopped and put into the <code>STOPPED</code>
         * state and the service sends back an HTTP 200 response with an empty HTTP body.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopTrainingDocumentClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTrainingDocumentClassifierOutcome StopTrainingDocumentClassifier(const Model::StopTrainingDocumentClassifierRequest& request) const;

        /**
         * A Callable wrapper for StopTrainingDocumentClassifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTrainingDocumentClassifierOutcomeCallable StopTrainingDocumentClassifierCallable(const Model::StopTrainingDocumentClassifierRequest& request) const;

        /**
         * An Async wrapper for StopTrainingDocumentClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopTrainingDocumentClassifierAsync(const Model::StopTrainingDocumentClassifierRequest& request, const StopTrainingDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an entity recognizer training job while in progress.</p> <p>If the
         * training job state is <code>TRAINING</code>, the job is marked for termination
         * and put into the <code>STOP_REQUESTED</code> state. If the training job
         * completes before it can be stopped, it is put into the <code>TRAINED</code>;
         * otherwise the training job is stopped and putted into the <code>STOPPED</code>
         * state and the service sends back an HTTP 200 response with an empty HTTP
         * body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopTrainingEntityRecognizer">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTrainingEntityRecognizerOutcome StopTrainingEntityRecognizer(const Model::StopTrainingEntityRecognizerRequest& request) const;

        /**
         * A Callable wrapper for StopTrainingEntityRecognizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTrainingEntityRecognizerOutcomeCallable StopTrainingEntityRecognizerCallable(const Model::StopTrainingEntityRecognizerRequest& request) const;

        /**
         * An Async wrapper for StopTrainingEntityRecognizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopTrainingEntityRecognizerAsync(const Model::StopTrainingEntityRecognizerRequest& request, const StopTrainingEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a specific tag with an Amazon Comprehend resource. A tag is a
         * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
         * For example, a tag with "Sales" as the key might be added to a resource to
         * indicate its use by the sales department. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/TagResource">AWS
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
         * <p>Removes a specific tag associated with an Amazon Comprehend resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/UntagResource">AWS
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
         * <p>Updates information about the specified endpoint. For information about
         * endpoints, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
         * endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/UpdateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointOutcome UpdateEndpoint(const Model::UpdateEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointOutcomeCallable UpdateEndpointCallable(const Model::UpdateEndpointRequest& request) const;

        /**
         * An Async wrapper for UpdateEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointAsync(const Model::UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ComprehendEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ComprehendClient>;
      void init(const ComprehendClientConfiguration& clientConfiguration);

      ComprehendClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ComprehendEndpointProviderBase> m_endpointProvider;
  };

} // namespace Comprehend
} // namespace Aws
