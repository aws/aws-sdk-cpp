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
   * <p>Amazon Comprehend is an Amazon Web Services service for gaining insight into
   * the content of documents. Use these actions to determine the topics contained in
   * your documents, the topics they discuss, the predominant sentiment expressed in
   * them, the predominant language used, and more.</p>
   */
  class AWS_COMPREHEND_API ComprehendClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ComprehendClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ComprehendClientConfiguration ClientConfigurationType;
      typedef ComprehendEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendClient(const Aws::Comprehend::ComprehendClientConfiguration& clientConfiguration = Aws::Comprehend::ComprehendClientConfiguration(),
                         std::shared_ptr<ComprehendEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<ComprehendEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::Comprehend::ComprehendClientConfiguration& clientConfiguration = Aws::Comprehend::ComprehendClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComprehendClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<ComprehendEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename BatchDetectDominantLanguageRequestT = Model::BatchDetectDominantLanguageRequest>
        Model::BatchDetectDominantLanguageOutcomeCallable BatchDetectDominantLanguageCallable(const BatchDetectDominantLanguageRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::BatchDetectDominantLanguage, request);
        }

        /**
         * An Async wrapper for BatchDetectDominantLanguage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDetectDominantLanguageRequestT = Model::BatchDetectDominantLanguageRequest>
        void BatchDetectDominantLanguageAsync(const BatchDetectDominantLanguageRequestT& request, const BatchDetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::BatchDetectDominantLanguage, request, handler, context);
        }

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
        template<typename BatchDetectEntitiesRequestT = Model::BatchDetectEntitiesRequest>
        Model::BatchDetectEntitiesOutcomeCallable BatchDetectEntitiesCallable(const BatchDetectEntitiesRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::BatchDetectEntities, request);
        }

        /**
         * An Async wrapper for BatchDetectEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDetectEntitiesRequestT = Model::BatchDetectEntitiesRequest>
        void BatchDetectEntitiesAsync(const BatchDetectEntitiesRequestT& request, const BatchDetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::BatchDetectEntities, request, handler, context);
        }

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
        template<typename BatchDetectKeyPhrasesRequestT = Model::BatchDetectKeyPhrasesRequest>
        Model::BatchDetectKeyPhrasesOutcomeCallable BatchDetectKeyPhrasesCallable(const BatchDetectKeyPhrasesRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::BatchDetectKeyPhrases, request);
        }

        /**
         * An Async wrapper for BatchDetectKeyPhrases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDetectKeyPhrasesRequestT = Model::BatchDetectKeyPhrasesRequest>
        void BatchDetectKeyPhrasesAsync(const BatchDetectKeyPhrasesRequestT& request, const BatchDetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::BatchDetectKeyPhrases, request, handler, context);
        }

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
        template<typename BatchDetectSentimentRequestT = Model::BatchDetectSentimentRequest>
        Model::BatchDetectSentimentOutcomeCallable BatchDetectSentimentCallable(const BatchDetectSentimentRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::BatchDetectSentiment, request);
        }

        /**
         * An Async wrapper for BatchDetectSentiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDetectSentimentRequestT = Model::BatchDetectSentimentRequest>
        void BatchDetectSentimentAsync(const BatchDetectSentimentRequestT& request, const BatchDetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::BatchDetectSentiment, request, handler, context);
        }

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
        template<typename BatchDetectSyntaxRequestT = Model::BatchDetectSyntaxRequest>
        Model::BatchDetectSyntaxOutcomeCallable BatchDetectSyntaxCallable(const BatchDetectSyntaxRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::BatchDetectSyntax, request);
        }

        /**
         * An Async wrapper for BatchDetectSyntax that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDetectSyntaxRequestT = Model::BatchDetectSyntaxRequest>
        void BatchDetectSyntaxAsync(const BatchDetectSyntaxRequestT& request, const BatchDetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::BatchDetectSyntax, request, handler, context);
        }

        /**
         * <p>Inspects a batch of documents and returns a sentiment analysis for each
         * entity identified in the documents.</p> <p>For more information about targeted
         * sentiment, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html">Targeted
         * sentiment</a> in the <i>Amazon Comprehend Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectTargetedSentiment">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDetectTargetedSentimentOutcome BatchDetectTargetedSentiment(const Model::BatchDetectTargetedSentimentRequest& request) const;

        /**
         * A Callable wrapper for BatchDetectTargetedSentiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDetectTargetedSentimentRequestT = Model::BatchDetectTargetedSentimentRequest>
        Model::BatchDetectTargetedSentimentOutcomeCallable BatchDetectTargetedSentimentCallable(const BatchDetectTargetedSentimentRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::BatchDetectTargetedSentiment, request);
        }

        /**
         * An Async wrapper for BatchDetectTargetedSentiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDetectTargetedSentimentRequestT = Model::BatchDetectTargetedSentimentRequest>
        void BatchDetectTargetedSentimentAsync(const BatchDetectTargetedSentimentRequestT& request, const BatchDetectTargetedSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::BatchDetectTargetedSentiment, request, handler, context);
        }

        /**
         * <p>Creates a classification request to analyze a single document in real-time.
         * <code>ClassifyDocument</code> supports the following model types:</p> <ul> <li>
         * <p>Custom classifier - a custom model that you have created and trained. For
         * input, you can provide plain text, a single-page document (PDF, Word, or image),
         * or Amazon Textract API output. For more information, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-document-classification.html">Custom
         * classification</a> in the <i>Amazon Comprehend Developer Guide</i>.</p> </li>
         * <li> <p>Prompt safety classifier - Amazon Comprehend provides a pre-trained
         * model for classifying input prompts for generative AI applications. For input,
         * you provide English plain text input. For prompt safety classification, the
         * response includes only the <code>Classes</code> field. For more information
         * about prompt safety classifiers, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/trust-safety.html#prompt-classification">Prompt
         * safety classification</a> in the <i>Amazon Comprehend Developer Guide</i>.</p>
         * </li> </ul> <p>If the system detects errors while processing a page in the input
         * document, the API response includes an <code>Errors</code> field that describes
         * the errors.</p> <p>If the system detects a document-level error in your input
         * document, the API returns an <code>InvalidRequestException</code> error
         * response. For details about this exception, see <a
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
        template<typename ClassifyDocumentRequestT = Model::ClassifyDocumentRequest>
        Model::ClassifyDocumentOutcomeCallable ClassifyDocumentCallable(const ClassifyDocumentRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ClassifyDocument, request);
        }

        /**
         * An Async wrapper for ClassifyDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ClassifyDocumentRequestT = Model::ClassifyDocumentRequest>
        void ClassifyDocumentAsync(const ClassifyDocumentRequestT& request, const ClassifyDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ClassifyDocument, request, handler, context);
        }

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
        template<typename ContainsPiiEntitiesRequestT = Model::ContainsPiiEntitiesRequest>
        Model::ContainsPiiEntitiesOutcomeCallable ContainsPiiEntitiesCallable(const ContainsPiiEntitiesRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ContainsPiiEntities, request);
        }

        /**
         * An Async wrapper for ContainsPiiEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ContainsPiiEntitiesRequestT = Model::ContainsPiiEntitiesRequest>
        void ContainsPiiEntitiesAsync(const ContainsPiiEntitiesRequestT& request, const ContainsPiiEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ContainsPiiEntities, request, handler, context);
        }

        /**
         * <p>Creates a dataset to upload training or test data for a model associated with
         * a flywheel. For more information about datasets, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/flywheels-about.html">
         * Flywheel overview</a> in the <i>Amazon Comprehend Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDatasetRequestT = Model::CreateDatasetRequest>
        Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const CreateDatasetRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::CreateDataset, request);
        }

        /**
         * An Async wrapper for CreateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDatasetRequestT = Model::CreateDatasetRequest>
        void CreateDatasetAsync(const CreateDatasetRequestT& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::CreateDataset, request, handler, context);
        }

        /**
         * <p>Creates a new document classifier that you can use to categorize documents.
         * To create a classifier, you provide a set of training documents that are labeled
         * with the categories that you want to use. For more information, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/training-classifier-model.html">Training
         * classifier models</a> in the Comprehend Developer Guide. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateDocumentClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDocumentClassifierOutcome CreateDocumentClassifier(const Model::CreateDocumentClassifierRequest& request) const;

        /**
         * A Callable wrapper for CreateDocumentClassifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDocumentClassifierRequestT = Model::CreateDocumentClassifierRequest>
        Model::CreateDocumentClassifierOutcomeCallable CreateDocumentClassifierCallable(const CreateDocumentClassifierRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::CreateDocumentClassifier, request);
        }

        /**
         * An Async wrapper for CreateDocumentClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDocumentClassifierRequestT = Model::CreateDocumentClassifierRequest>
        void CreateDocumentClassifierAsync(const CreateDocumentClassifierRequestT& request, const CreateDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::CreateDocumentClassifier, request, handler, context);
        }

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
        template<typename CreateEndpointRequestT = Model::CreateEndpointRequest>
        Model::CreateEndpointOutcomeCallable CreateEndpointCallable(const CreateEndpointRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::CreateEndpoint, request);
        }

        /**
         * An Async wrapper for CreateEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEndpointRequestT = Model::CreateEndpointRequest>
        void CreateEndpointAsync(const CreateEndpointRequestT& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::CreateEndpoint, request, handler, context);
        }

        /**
         * <p>Creates an entity recognizer using submitted files. After your
         * <code>CreateEntityRecognizer</code> request is submitted, you can check job
         * status using the <code>DescribeEntityRecognizer</code> API. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateEntityRecognizer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEntityRecognizerOutcome CreateEntityRecognizer(const Model::CreateEntityRecognizerRequest& request) const;

        /**
         * A Callable wrapper for CreateEntityRecognizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEntityRecognizerRequestT = Model::CreateEntityRecognizerRequest>
        Model::CreateEntityRecognizerOutcomeCallable CreateEntityRecognizerCallable(const CreateEntityRecognizerRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::CreateEntityRecognizer, request);
        }

        /**
         * An Async wrapper for CreateEntityRecognizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEntityRecognizerRequestT = Model::CreateEntityRecognizerRequest>
        void CreateEntityRecognizerAsync(const CreateEntityRecognizerRequestT& request, const CreateEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::CreateEntityRecognizer, request, handler, context);
        }

        /**
         * <p>A flywheel is an Amazon Web Services resource that orchestrates the ongoing
         * training of a model for custom classification or custom entity recognition. You
         * can create a flywheel to start with an existing trained model, or Comprehend can
         * create and train a new model.</p> <p>When you create the flywheel, Comprehend
         * creates a data lake in your account. The data lake holds the training data and
         * test data for all versions of the model.</p> <p>To use a flywheel with an
         * existing trained model, you specify the active model version. Comprehend copies
         * the model's training data and test data into the flywheel's data lake.</p> <p>To
         * use the flywheel with a new model, you need to provide a dataset for training
         * data (and optional test data) when you create the flywheel.</p> <p>For more
         * information about flywheels, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/flywheels-about.html">
         * Flywheel overview</a> in the <i>Amazon Comprehend Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateFlywheel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFlywheelOutcome CreateFlywheel(const Model::CreateFlywheelRequest& request) const;

        /**
         * A Callable wrapper for CreateFlywheel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFlywheelRequestT = Model::CreateFlywheelRequest>
        Model::CreateFlywheelOutcomeCallable CreateFlywheelCallable(const CreateFlywheelRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::CreateFlywheel, request);
        }

        /**
         * An Async wrapper for CreateFlywheel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFlywheelRequestT = Model::CreateFlywheelRequest>
        void CreateFlywheelAsync(const CreateFlywheelRequestT& request, const CreateFlywheelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::CreateFlywheel, request, handler, context);
        }

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
        template<typename DeleteDocumentClassifierRequestT = Model::DeleteDocumentClassifierRequest>
        Model::DeleteDocumentClassifierOutcomeCallable DeleteDocumentClassifierCallable(const DeleteDocumentClassifierRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DeleteDocumentClassifier, request);
        }

        /**
         * An Async wrapper for DeleteDocumentClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDocumentClassifierRequestT = Model::DeleteDocumentClassifierRequest>
        void DeleteDocumentClassifierAsync(const DeleteDocumentClassifierRequestT& request, const DeleteDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DeleteDocumentClassifier, request, handler, context);
        }

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
        template<typename DeleteEndpointRequestT = Model::DeleteEndpointRequest>
        Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const DeleteEndpointRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DeleteEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEndpointRequestT = Model::DeleteEndpointRequest>
        void DeleteEndpointAsync(const DeleteEndpointRequestT& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DeleteEndpoint, request, handler, context);
        }

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
        template<typename DeleteEntityRecognizerRequestT = Model::DeleteEntityRecognizerRequest>
        Model::DeleteEntityRecognizerOutcomeCallable DeleteEntityRecognizerCallable(const DeleteEntityRecognizerRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DeleteEntityRecognizer, request);
        }

        /**
         * An Async wrapper for DeleteEntityRecognizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEntityRecognizerRequestT = Model::DeleteEntityRecognizerRequest>
        void DeleteEntityRecognizerAsync(const DeleteEntityRecognizerRequestT& request, const DeleteEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DeleteEntityRecognizer, request, handler, context);
        }

        /**
         * <p>Deletes a flywheel. When you delete the flywheel, Amazon Comprehend does not
         * delete the data lake or the model associated with the flywheel.</p> <p>For more
         * information about flywheels, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/flywheels-about.html">
         * Flywheel overview</a> in the <i>Amazon Comprehend Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DeleteFlywheel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFlywheelOutcome DeleteFlywheel(const Model::DeleteFlywheelRequest& request) const;

        /**
         * A Callable wrapper for DeleteFlywheel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFlywheelRequestT = Model::DeleteFlywheelRequest>
        Model::DeleteFlywheelOutcomeCallable DeleteFlywheelCallable(const DeleteFlywheelRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DeleteFlywheel, request);
        }

        /**
         * An Async wrapper for DeleteFlywheel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFlywheelRequestT = Model::DeleteFlywheelRequest>
        void DeleteFlywheelAsync(const DeleteFlywheelRequestT& request, const DeleteFlywheelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DeleteFlywheel, request, handler, context);
        }

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
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Returns information about the dataset that you specify. For more information
         * about datasets, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/flywheels-about.html">
         * Flywheel overview</a> in the <i>Amazon Comprehend Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
        Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const DescribeDatasetRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeDataset, request);
        }

        /**
         * An Async wrapper for DescribeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
        void DescribeDatasetAsync(const DescribeDatasetRequestT& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeDataset, request, handler, context);
        }

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
        template<typename DescribeDocumentClassificationJobRequestT = Model::DescribeDocumentClassificationJobRequest>
        Model::DescribeDocumentClassificationJobOutcomeCallable DescribeDocumentClassificationJobCallable(const DescribeDocumentClassificationJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeDocumentClassificationJob, request);
        }

        /**
         * An Async wrapper for DescribeDocumentClassificationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDocumentClassificationJobRequestT = Model::DescribeDocumentClassificationJobRequest>
        void DescribeDocumentClassificationJobAsync(const DescribeDocumentClassificationJobRequestT& request, const DescribeDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeDocumentClassificationJob, request, handler, context);
        }

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
        template<typename DescribeDocumentClassifierRequestT = Model::DescribeDocumentClassifierRequest>
        Model::DescribeDocumentClassifierOutcomeCallable DescribeDocumentClassifierCallable(const DescribeDocumentClassifierRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeDocumentClassifier, request);
        }

        /**
         * An Async wrapper for DescribeDocumentClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDocumentClassifierRequestT = Model::DescribeDocumentClassifierRequest>
        void DescribeDocumentClassifierAsync(const DescribeDocumentClassifierRequestT& request, const DescribeDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeDocumentClassifier, request, handler, context);
        }

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
        template<typename DescribeDominantLanguageDetectionJobRequestT = Model::DescribeDominantLanguageDetectionJobRequest>
        Model::DescribeDominantLanguageDetectionJobOutcomeCallable DescribeDominantLanguageDetectionJobCallable(const DescribeDominantLanguageDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeDominantLanguageDetectionJob, request);
        }

        /**
         * An Async wrapper for DescribeDominantLanguageDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDominantLanguageDetectionJobRequestT = Model::DescribeDominantLanguageDetectionJobRequest>
        void DescribeDominantLanguageDetectionJobAsync(const DescribeDominantLanguageDetectionJobRequestT& request, const DescribeDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeDominantLanguageDetectionJob, request, handler, context);
        }

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
        template<typename DescribeEndpointRequestT = Model::DescribeEndpointRequest>
        Model::DescribeEndpointOutcomeCallable DescribeEndpointCallable(const DescribeEndpointRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeEndpoint, request);
        }

        /**
         * An Async wrapper for DescribeEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEndpointRequestT = Model::DescribeEndpointRequest>
        void DescribeEndpointAsync(const DescribeEndpointRequestT& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeEndpoint, request, handler, context);
        }

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
        template<typename DescribeEntitiesDetectionJobRequestT = Model::DescribeEntitiesDetectionJobRequest>
        Model::DescribeEntitiesDetectionJobOutcomeCallable DescribeEntitiesDetectionJobCallable(const DescribeEntitiesDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeEntitiesDetectionJob, request);
        }

        /**
         * An Async wrapper for DescribeEntitiesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEntitiesDetectionJobRequestT = Model::DescribeEntitiesDetectionJobRequest>
        void DescribeEntitiesDetectionJobAsync(const DescribeEntitiesDetectionJobRequestT& request, const DescribeEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeEntitiesDetectionJob, request, handler, context);
        }

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
        template<typename DescribeEntityRecognizerRequestT = Model::DescribeEntityRecognizerRequest>
        Model::DescribeEntityRecognizerOutcomeCallable DescribeEntityRecognizerCallable(const DescribeEntityRecognizerRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeEntityRecognizer, request);
        }

        /**
         * An Async wrapper for DescribeEntityRecognizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEntityRecognizerRequestT = Model::DescribeEntityRecognizerRequest>
        void DescribeEntityRecognizerAsync(const DescribeEntityRecognizerRequestT& request, const DescribeEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeEntityRecognizer, request, handler, context);
        }

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
        template<typename DescribeEventsDetectionJobRequestT = Model::DescribeEventsDetectionJobRequest>
        Model::DescribeEventsDetectionJobOutcomeCallable DescribeEventsDetectionJobCallable(const DescribeEventsDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeEventsDetectionJob, request);
        }

        /**
         * An Async wrapper for DescribeEventsDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventsDetectionJobRequestT = Model::DescribeEventsDetectionJobRequest>
        void DescribeEventsDetectionJobAsync(const DescribeEventsDetectionJobRequestT& request, const DescribeEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeEventsDetectionJob, request, handler, context);
        }

        /**
         * <p>Provides configuration information about the flywheel. For more information
         * about flywheels, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/flywheels-about.html">
         * Flywheel overview</a> in the <i>Amazon Comprehend Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeFlywheel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlywheelOutcome DescribeFlywheel(const Model::DescribeFlywheelRequest& request) const;

        /**
         * A Callable wrapper for DescribeFlywheel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFlywheelRequestT = Model::DescribeFlywheelRequest>
        Model::DescribeFlywheelOutcomeCallable DescribeFlywheelCallable(const DescribeFlywheelRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeFlywheel, request);
        }

        /**
         * An Async wrapper for DescribeFlywheel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFlywheelRequestT = Model::DescribeFlywheelRequest>
        void DescribeFlywheelAsync(const DescribeFlywheelRequestT& request, const DescribeFlywheelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeFlywheel, request, handler, context);
        }

        /**
         * <p>Retrieve the configuration properties of a flywheel iteration. For more
         * information about flywheels, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/flywheels-about.html">
         * Flywheel overview</a> in the <i>Amazon Comprehend Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeFlywheelIteration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlywheelIterationOutcome DescribeFlywheelIteration(const Model::DescribeFlywheelIterationRequest& request) const;

        /**
         * A Callable wrapper for DescribeFlywheelIteration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFlywheelIterationRequestT = Model::DescribeFlywheelIterationRequest>
        Model::DescribeFlywheelIterationOutcomeCallable DescribeFlywheelIterationCallable(const DescribeFlywheelIterationRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeFlywheelIteration, request);
        }

        /**
         * An Async wrapper for DescribeFlywheelIteration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFlywheelIterationRequestT = Model::DescribeFlywheelIterationRequest>
        void DescribeFlywheelIterationAsync(const DescribeFlywheelIterationRequestT& request, const DescribeFlywheelIterationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeFlywheelIteration, request, handler, context);
        }

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
        template<typename DescribeKeyPhrasesDetectionJobRequestT = Model::DescribeKeyPhrasesDetectionJobRequest>
        Model::DescribeKeyPhrasesDetectionJobOutcomeCallable DescribeKeyPhrasesDetectionJobCallable(const DescribeKeyPhrasesDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeKeyPhrasesDetectionJob, request);
        }

        /**
         * An Async wrapper for DescribeKeyPhrasesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeKeyPhrasesDetectionJobRequestT = Model::DescribeKeyPhrasesDetectionJobRequest>
        void DescribeKeyPhrasesDetectionJobAsync(const DescribeKeyPhrasesDetectionJobRequestT& request, const DescribeKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeKeyPhrasesDetectionJob, request, handler, context);
        }

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
        template<typename DescribePiiEntitiesDetectionJobRequestT = Model::DescribePiiEntitiesDetectionJobRequest>
        Model::DescribePiiEntitiesDetectionJobOutcomeCallable DescribePiiEntitiesDetectionJobCallable(const DescribePiiEntitiesDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribePiiEntitiesDetectionJob, request);
        }

        /**
         * An Async wrapper for DescribePiiEntitiesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePiiEntitiesDetectionJobRequestT = Model::DescribePiiEntitiesDetectionJobRequest>
        void DescribePiiEntitiesDetectionJobAsync(const DescribePiiEntitiesDetectionJobRequestT& request, const DescribePiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribePiiEntitiesDetectionJob, request, handler, context);
        }

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
        template<typename DescribeResourcePolicyRequestT = Model::DescribeResourcePolicyRequest>
        Model::DescribeResourcePolicyOutcomeCallable DescribeResourcePolicyCallable(const DescribeResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeResourcePolicy, request);
        }

        /**
         * An Async wrapper for DescribeResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeResourcePolicyRequestT = Model::DescribeResourcePolicyRequest>
        void DescribeResourcePolicyAsync(const DescribeResourcePolicyRequestT& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeResourcePolicy, request, handler, context);
        }

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
        template<typename DescribeSentimentDetectionJobRequestT = Model::DescribeSentimentDetectionJobRequest>
        Model::DescribeSentimentDetectionJobOutcomeCallable DescribeSentimentDetectionJobCallable(const DescribeSentimentDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeSentimentDetectionJob, request);
        }

        /**
         * An Async wrapper for DescribeSentimentDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSentimentDetectionJobRequestT = Model::DescribeSentimentDetectionJobRequest>
        void DescribeSentimentDetectionJobAsync(const DescribeSentimentDetectionJobRequestT& request, const DescribeSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeSentimentDetectionJob, request, handler, context);
        }

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
        template<typename DescribeTargetedSentimentDetectionJobRequestT = Model::DescribeTargetedSentimentDetectionJobRequest>
        Model::DescribeTargetedSentimentDetectionJobOutcomeCallable DescribeTargetedSentimentDetectionJobCallable(const DescribeTargetedSentimentDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeTargetedSentimentDetectionJob, request);
        }

        /**
         * An Async wrapper for DescribeTargetedSentimentDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTargetedSentimentDetectionJobRequestT = Model::DescribeTargetedSentimentDetectionJobRequest>
        void DescribeTargetedSentimentDetectionJobAsync(const DescribeTargetedSentimentDetectionJobRequestT& request, const DescribeTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeTargetedSentimentDetectionJob, request, handler, context);
        }

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
        template<typename DescribeTopicsDetectionJobRequestT = Model::DescribeTopicsDetectionJobRequest>
        Model::DescribeTopicsDetectionJobOutcomeCallable DescribeTopicsDetectionJobCallable(const DescribeTopicsDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DescribeTopicsDetectionJob, request);
        }

        /**
         * An Async wrapper for DescribeTopicsDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTopicsDetectionJobRequestT = Model::DescribeTopicsDetectionJobRequest>
        void DescribeTopicsDetectionJobAsync(const DescribeTopicsDetectionJobRequestT& request, const DescribeTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DescribeTopicsDetectionJob, request, handler, context);
        }

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
        template<typename DetectDominantLanguageRequestT = Model::DetectDominantLanguageRequest>
        Model::DetectDominantLanguageOutcomeCallable DetectDominantLanguageCallable(const DetectDominantLanguageRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DetectDominantLanguage, request);
        }

        /**
         * An Async wrapper for DetectDominantLanguage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectDominantLanguageRequestT = Model::DetectDominantLanguageRequest>
        void DetectDominantLanguageAsync(const DetectDominantLanguageRequestT& request, const DetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DetectDominantLanguage, request, handler, context);
        }

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
        template<typename DetectEntitiesRequestT = Model::DetectEntitiesRequest>
        Model::DetectEntitiesOutcomeCallable DetectEntitiesCallable(const DetectEntitiesRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DetectEntities, request);
        }

        /**
         * An Async wrapper for DetectEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectEntitiesRequestT = Model::DetectEntitiesRequest>
        void DetectEntitiesAsync(const DetectEntitiesRequestT& request, const DetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DetectEntities, request, handler, context);
        }

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
        template<typename DetectKeyPhrasesRequestT = Model::DetectKeyPhrasesRequest>
        Model::DetectKeyPhrasesOutcomeCallable DetectKeyPhrasesCallable(const DetectKeyPhrasesRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DetectKeyPhrases, request);
        }

        /**
         * An Async wrapper for DetectKeyPhrases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectKeyPhrasesRequestT = Model::DetectKeyPhrasesRequest>
        void DetectKeyPhrasesAsync(const DetectKeyPhrasesRequestT& request, const DetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DetectKeyPhrases, request, handler, context);
        }

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
        template<typename DetectPiiEntitiesRequestT = Model::DetectPiiEntitiesRequest>
        Model::DetectPiiEntitiesOutcomeCallable DetectPiiEntitiesCallable(const DetectPiiEntitiesRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DetectPiiEntities, request);
        }

        /**
         * An Async wrapper for DetectPiiEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectPiiEntitiesRequestT = Model::DetectPiiEntitiesRequest>
        void DetectPiiEntitiesAsync(const DetectPiiEntitiesRequestT& request, const DetectPiiEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DetectPiiEntities, request, handler, context);
        }

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
        template<typename DetectSentimentRequestT = Model::DetectSentimentRequest>
        Model::DetectSentimentOutcomeCallable DetectSentimentCallable(const DetectSentimentRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DetectSentiment, request);
        }

        /**
         * An Async wrapper for DetectSentiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectSentimentRequestT = Model::DetectSentimentRequest>
        void DetectSentimentAsync(const DetectSentimentRequestT& request, const DetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DetectSentiment, request, handler, context);
        }

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
        template<typename DetectSyntaxRequestT = Model::DetectSyntaxRequest>
        Model::DetectSyntaxOutcomeCallable DetectSyntaxCallable(const DetectSyntaxRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DetectSyntax, request);
        }

        /**
         * An Async wrapper for DetectSyntax that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectSyntaxRequestT = Model::DetectSyntaxRequest>
        void DetectSyntaxAsync(const DetectSyntaxRequestT& request, const DetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DetectSyntax, request, handler, context);
        }

        /**
         * <p>Inspects the input text and returns a sentiment analysis for each entity
         * identified in the text.</p> <p>For more information about targeted sentiment,
         * see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html">Targeted
         * sentiment</a> in the <i>Amazon Comprehend Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectTargetedSentiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectTargetedSentimentOutcome DetectTargetedSentiment(const Model::DetectTargetedSentimentRequest& request) const;

        /**
         * A Callable wrapper for DetectTargetedSentiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetectTargetedSentimentRequestT = Model::DetectTargetedSentimentRequest>
        Model::DetectTargetedSentimentOutcomeCallable DetectTargetedSentimentCallable(const DetectTargetedSentimentRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DetectTargetedSentiment, request);
        }

        /**
         * An Async wrapper for DetectTargetedSentiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectTargetedSentimentRequestT = Model::DetectTargetedSentimentRequest>
        void DetectTargetedSentimentAsync(const DetectTargetedSentimentRequestT& request, const DetectTargetedSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DetectTargetedSentiment, request, handler, context);
        }

        /**
         * <p>Performs toxicity analysis on the list of text strings that you provide as
         * input. The API response contains a results list that matches the size of the
         * input list. For more information about toxicity detection, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/toxicity-detection.html">Toxicity
         * detection</a> in the <i>Amazon Comprehend Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectToxicContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectToxicContentOutcome DetectToxicContent(const Model::DetectToxicContentRequest& request) const;

        /**
         * A Callable wrapper for DetectToxicContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetectToxicContentRequestT = Model::DetectToxicContentRequest>
        Model::DetectToxicContentOutcomeCallable DetectToxicContentCallable(const DetectToxicContentRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::DetectToxicContent, request);
        }

        /**
         * An Async wrapper for DetectToxicContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectToxicContentRequestT = Model::DetectToxicContentRequest>
        void DetectToxicContentAsync(const DetectToxicContentRequestT& request, const DetectToxicContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::DetectToxicContent, request, handler, context);
        }

        /**
         * <p>Creates a new custom model that replicates a source custom model that you
         * import. The source model can be in your Amazon Web Services account or another
         * one.</p> <p>If the source model is in another Amazon Web Services account, then
         * it must have a resource-based policy that authorizes you to import it.</p>
         * <p>The source model must be in the same Amazon Web Services Region that you're
         * using when you import. You can't import a model that's in a different
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ImportModel">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportModelOutcome ImportModel(const Model::ImportModelRequest& request) const;

        /**
         * A Callable wrapper for ImportModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportModelRequestT = Model::ImportModelRequest>
        Model::ImportModelOutcomeCallable ImportModelCallable(const ImportModelRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ImportModel, request);
        }

        /**
         * An Async wrapper for ImportModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportModelRequestT = Model::ImportModelRequest>
        void ImportModelAsync(const ImportModelRequestT& request, const ImportModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ImportModel, request, handler, context);
        }

        /**
         * <p>List the datasets that you have configured in this Region. For more
         * information about datasets, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/flywheels-about.html">
         * Flywheel overview</a> in the <i>Amazon Comprehend Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDatasetsRequestT = Model::ListDatasetsRequest>
        Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const ListDatasetsRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListDatasets, request);
        }

        /**
         * An Async wrapper for ListDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatasetsRequestT = Model::ListDatasetsRequest>
        void ListDatasetsAsync(const ListDatasetsRequestT& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListDatasets, request, handler, context);
        }

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
        template<typename ListDocumentClassificationJobsRequestT = Model::ListDocumentClassificationJobsRequest>
        Model::ListDocumentClassificationJobsOutcomeCallable ListDocumentClassificationJobsCallable(const ListDocumentClassificationJobsRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListDocumentClassificationJobs, request);
        }

        /**
         * An Async wrapper for ListDocumentClassificationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDocumentClassificationJobsRequestT = Model::ListDocumentClassificationJobsRequest>
        void ListDocumentClassificationJobsAsync(const ListDocumentClassificationJobsRequestT& request, const ListDocumentClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListDocumentClassificationJobs, request, handler, context);
        }

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
        template<typename ListDocumentClassifierSummariesRequestT = Model::ListDocumentClassifierSummariesRequest>
        Model::ListDocumentClassifierSummariesOutcomeCallable ListDocumentClassifierSummariesCallable(const ListDocumentClassifierSummariesRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListDocumentClassifierSummaries, request);
        }

        /**
         * An Async wrapper for ListDocumentClassifierSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDocumentClassifierSummariesRequestT = Model::ListDocumentClassifierSummariesRequest>
        void ListDocumentClassifierSummariesAsync(const ListDocumentClassifierSummariesRequestT& request, const ListDocumentClassifierSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListDocumentClassifierSummaries, request, handler, context);
        }

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
        template<typename ListDocumentClassifiersRequestT = Model::ListDocumentClassifiersRequest>
        Model::ListDocumentClassifiersOutcomeCallable ListDocumentClassifiersCallable(const ListDocumentClassifiersRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListDocumentClassifiers, request);
        }

        /**
         * An Async wrapper for ListDocumentClassifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDocumentClassifiersRequestT = Model::ListDocumentClassifiersRequest>
        void ListDocumentClassifiersAsync(const ListDocumentClassifiersRequestT& request, const ListDocumentClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListDocumentClassifiers, request, handler, context);
        }

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
        template<typename ListDominantLanguageDetectionJobsRequestT = Model::ListDominantLanguageDetectionJobsRequest>
        Model::ListDominantLanguageDetectionJobsOutcomeCallable ListDominantLanguageDetectionJobsCallable(const ListDominantLanguageDetectionJobsRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListDominantLanguageDetectionJobs, request);
        }

        /**
         * An Async wrapper for ListDominantLanguageDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDominantLanguageDetectionJobsRequestT = Model::ListDominantLanguageDetectionJobsRequest>
        void ListDominantLanguageDetectionJobsAsync(const ListDominantLanguageDetectionJobsRequestT& request, const ListDominantLanguageDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListDominantLanguageDetectionJobs, request, handler, context);
        }

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
        template<typename ListEndpointsRequestT = Model::ListEndpointsRequest>
        Model::ListEndpointsOutcomeCallable ListEndpointsCallable(const ListEndpointsRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListEndpoints, request);
        }

        /**
         * An Async wrapper for ListEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEndpointsRequestT = Model::ListEndpointsRequest>
        void ListEndpointsAsync(const ListEndpointsRequestT& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListEndpoints, request, handler, context);
        }

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
        template<typename ListEntitiesDetectionJobsRequestT = Model::ListEntitiesDetectionJobsRequest>
        Model::ListEntitiesDetectionJobsOutcomeCallable ListEntitiesDetectionJobsCallable(const ListEntitiesDetectionJobsRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListEntitiesDetectionJobs, request);
        }

        /**
         * An Async wrapper for ListEntitiesDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEntitiesDetectionJobsRequestT = Model::ListEntitiesDetectionJobsRequest>
        void ListEntitiesDetectionJobsAsync(const ListEntitiesDetectionJobsRequestT& request, const ListEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListEntitiesDetectionJobs, request, handler, context);
        }

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
        template<typename ListEntityRecognizerSummariesRequestT = Model::ListEntityRecognizerSummariesRequest>
        Model::ListEntityRecognizerSummariesOutcomeCallable ListEntityRecognizerSummariesCallable(const ListEntityRecognizerSummariesRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListEntityRecognizerSummaries, request);
        }

        /**
         * An Async wrapper for ListEntityRecognizerSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEntityRecognizerSummariesRequestT = Model::ListEntityRecognizerSummariesRequest>
        void ListEntityRecognizerSummariesAsync(const ListEntityRecognizerSummariesRequestT& request, const ListEntityRecognizerSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListEntityRecognizerSummaries, request, handler, context);
        }

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
        template<typename ListEntityRecognizersRequestT = Model::ListEntityRecognizersRequest>
        Model::ListEntityRecognizersOutcomeCallable ListEntityRecognizersCallable(const ListEntityRecognizersRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListEntityRecognizers, request);
        }

        /**
         * An Async wrapper for ListEntityRecognizers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEntityRecognizersRequestT = Model::ListEntityRecognizersRequest>
        void ListEntityRecognizersAsync(const ListEntityRecognizersRequestT& request, const ListEntityRecognizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListEntityRecognizers, request, handler, context);
        }

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
        template<typename ListEventsDetectionJobsRequestT = Model::ListEventsDetectionJobsRequest>
        Model::ListEventsDetectionJobsOutcomeCallable ListEventsDetectionJobsCallable(const ListEventsDetectionJobsRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListEventsDetectionJobs, request);
        }

        /**
         * An Async wrapper for ListEventsDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventsDetectionJobsRequestT = Model::ListEventsDetectionJobsRequest>
        void ListEventsDetectionJobsAsync(const ListEventsDetectionJobsRequestT& request, const ListEventsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListEventsDetectionJobs, request, handler, context);
        }

        /**
         * <p>Information about the history of a flywheel iteration. For more information
         * about flywheels, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/flywheels-about.html">
         * Flywheel overview</a> in the <i>Amazon Comprehend Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListFlywheelIterationHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlywheelIterationHistoryOutcome ListFlywheelIterationHistory(const Model::ListFlywheelIterationHistoryRequest& request) const;

        /**
         * A Callable wrapper for ListFlywheelIterationHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFlywheelIterationHistoryRequestT = Model::ListFlywheelIterationHistoryRequest>
        Model::ListFlywheelIterationHistoryOutcomeCallable ListFlywheelIterationHistoryCallable(const ListFlywheelIterationHistoryRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListFlywheelIterationHistory, request);
        }

        /**
         * An Async wrapper for ListFlywheelIterationHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFlywheelIterationHistoryRequestT = Model::ListFlywheelIterationHistoryRequest>
        void ListFlywheelIterationHistoryAsync(const ListFlywheelIterationHistoryRequestT& request, const ListFlywheelIterationHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListFlywheelIterationHistory, request, handler, context);
        }

        /**
         * <p>Gets a list of the flywheels that you have created.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListFlywheels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlywheelsOutcome ListFlywheels(const Model::ListFlywheelsRequest& request) const;

        /**
         * A Callable wrapper for ListFlywheels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFlywheelsRequestT = Model::ListFlywheelsRequest>
        Model::ListFlywheelsOutcomeCallable ListFlywheelsCallable(const ListFlywheelsRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListFlywheels, request);
        }

        /**
         * An Async wrapper for ListFlywheels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFlywheelsRequestT = Model::ListFlywheelsRequest>
        void ListFlywheelsAsync(const ListFlywheelsRequestT& request, const ListFlywheelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListFlywheels, request, handler, context);
        }

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
        template<typename ListKeyPhrasesDetectionJobsRequestT = Model::ListKeyPhrasesDetectionJobsRequest>
        Model::ListKeyPhrasesDetectionJobsOutcomeCallable ListKeyPhrasesDetectionJobsCallable(const ListKeyPhrasesDetectionJobsRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListKeyPhrasesDetectionJobs, request);
        }

        /**
         * An Async wrapper for ListKeyPhrasesDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKeyPhrasesDetectionJobsRequestT = Model::ListKeyPhrasesDetectionJobsRequest>
        void ListKeyPhrasesDetectionJobsAsync(const ListKeyPhrasesDetectionJobsRequestT& request, const ListKeyPhrasesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListKeyPhrasesDetectionJobs, request, handler, context);
        }

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
        template<typename ListPiiEntitiesDetectionJobsRequestT = Model::ListPiiEntitiesDetectionJobsRequest>
        Model::ListPiiEntitiesDetectionJobsOutcomeCallable ListPiiEntitiesDetectionJobsCallable(const ListPiiEntitiesDetectionJobsRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListPiiEntitiesDetectionJobs, request);
        }

        /**
         * An Async wrapper for ListPiiEntitiesDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPiiEntitiesDetectionJobsRequestT = Model::ListPiiEntitiesDetectionJobsRequest>
        void ListPiiEntitiesDetectionJobsAsync(const ListPiiEntitiesDetectionJobsRequestT& request, const ListPiiEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListPiiEntitiesDetectionJobs, request, handler, context);
        }

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
        template<typename ListSentimentDetectionJobsRequestT = Model::ListSentimentDetectionJobsRequest>
        Model::ListSentimentDetectionJobsOutcomeCallable ListSentimentDetectionJobsCallable(const ListSentimentDetectionJobsRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListSentimentDetectionJobs, request);
        }

        /**
         * An Async wrapper for ListSentimentDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSentimentDetectionJobsRequestT = Model::ListSentimentDetectionJobsRequest>
        void ListSentimentDetectionJobsAsync(const ListSentimentDetectionJobsRequestT& request, const ListSentimentDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListSentimentDetectionJobs, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename ListTargetedSentimentDetectionJobsRequestT = Model::ListTargetedSentimentDetectionJobsRequest>
        Model::ListTargetedSentimentDetectionJobsOutcomeCallable ListTargetedSentimentDetectionJobsCallable(const ListTargetedSentimentDetectionJobsRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListTargetedSentimentDetectionJobs, request);
        }

        /**
         * An Async wrapper for ListTargetedSentimentDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTargetedSentimentDetectionJobsRequestT = Model::ListTargetedSentimentDetectionJobsRequest>
        void ListTargetedSentimentDetectionJobsAsync(const ListTargetedSentimentDetectionJobsRequestT& request, const ListTargetedSentimentDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListTargetedSentimentDetectionJobs, request, handler, context);
        }

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
        template<typename ListTopicsDetectionJobsRequestT = Model::ListTopicsDetectionJobsRequest>
        Model::ListTopicsDetectionJobsOutcomeCallable ListTopicsDetectionJobsCallable(const ListTopicsDetectionJobsRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::ListTopicsDetectionJobs, request);
        }

        /**
         * An Async wrapper for ListTopicsDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTopicsDetectionJobsRequestT = Model::ListTopicsDetectionJobsRequest>
        void ListTopicsDetectionJobsAsync(const ListTopicsDetectionJobsRequestT& request, const ListTopicsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::ListTopicsDetectionJobs, request, handler, context);
        }

        /**
         * <p>Attaches a resource-based policy to a custom model. You can use this policy
         * to authorize an entity in another Amazon Web Services account to import the
         * custom model, which replicates it in Amazon Comprehend in their
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Starts an asynchronous document classification job using a custom
         * classification model. Use the <code>DescribeDocumentClassificationJob</code>
         * operation to track the progress of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartDocumentClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDocumentClassificationJobOutcome StartDocumentClassificationJob(const Model::StartDocumentClassificationJobRequest& request) const;

        /**
         * A Callable wrapper for StartDocumentClassificationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDocumentClassificationJobRequestT = Model::StartDocumentClassificationJobRequest>
        Model::StartDocumentClassificationJobOutcomeCallable StartDocumentClassificationJobCallable(const StartDocumentClassificationJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StartDocumentClassificationJob, request);
        }

        /**
         * An Async wrapper for StartDocumentClassificationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDocumentClassificationJobRequestT = Model::StartDocumentClassificationJobRequest>
        void StartDocumentClassificationJobAsync(const StartDocumentClassificationJobRequestT& request, const StartDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StartDocumentClassificationJob, request, handler, context);
        }

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
        template<typename StartDominantLanguageDetectionJobRequestT = Model::StartDominantLanguageDetectionJobRequest>
        Model::StartDominantLanguageDetectionJobOutcomeCallable StartDominantLanguageDetectionJobCallable(const StartDominantLanguageDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StartDominantLanguageDetectionJob, request);
        }

        /**
         * An Async wrapper for StartDominantLanguageDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDominantLanguageDetectionJobRequestT = Model::StartDominantLanguageDetectionJobRequest>
        void StartDominantLanguageDetectionJobAsync(const StartDominantLanguageDetectionJobRequestT& request, const StartDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StartDominantLanguageDetectionJob, request, handler, context);
        }

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
        template<typename StartEntitiesDetectionJobRequestT = Model::StartEntitiesDetectionJobRequest>
        Model::StartEntitiesDetectionJobOutcomeCallable StartEntitiesDetectionJobCallable(const StartEntitiesDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StartEntitiesDetectionJob, request);
        }

        /**
         * An Async wrapper for StartEntitiesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartEntitiesDetectionJobRequestT = Model::StartEntitiesDetectionJobRequest>
        void StartEntitiesDetectionJobAsync(const StartEntitiesDetectionJobRequestT& request, const StartEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StartEntitiesDetectionJob, request, handler, context);
        }

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
        template<typename StartEventsDetectionJobRequestT = Model::StartEventsDetectionJobRequest>
        Model::StartEventsDetectionJobOutcomeCallable StartEventsDetectionJobCallable(const StartEventsDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StartEventsDetectionJob, request);
        }

        /**
         * An Async wrapper for StartEventsDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartEventsDetectionJobRequestT = Model::StartEventsDetectionJobRequest>
        void StartEventsDetectionJobAsync(const StartEventsDetectionJobRequestT& request, const StartEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StartEventsDetectionJob, request, handler, context);
        }

        /**
         * <p>Start the flywheel iteration.This operation uses any new datasets to train a
         * new model version. For more information about flywheels, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/flywheels-about.html">
         * Flywheel overview</a> in the <i>Amazon Comprehend Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartFlywheelIteration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFlywheelIterationOutcome StartFlywheelIteration(const Model::StartFlywheelIterationRequest& request) const;

        /**
         * A Callable wrapper for StartFlywheelIteration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartFlywheelIterationRequestT = Model::StartFlywheelIterationRequest>
        Model::StartFlywheelIterationOutcomeCallable StartFlywheelIterationCallable(const StartFlywheelIterationRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StartFlywheelIteration, request);
        }

        /**
         * An Async wrapper for StartFlywheelIteration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFlywheelIterationRequestT = Model::StartFlywheelIterationRequest>
        void StartFlywheelIterationAsync(const StartFlywheelIterationRequestT& request, const StartFlywheelIterationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StartFlywheelIteration, request, handler, context);
        }

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
        template<typename StartKeyPhrasesDetectionJobRequestT = Model::StartKeyPhrasesDetectionJobRequest>
        Model::StartKeyPhrasesDetectionJobOutcomeCallable StartKeyPhrasesDetectionJobCallable(const StartKeyPhrasesDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StartKeyPhrasesDetectionJob, request);
        }

        /**
         * An Async wrapper for StartKeyPhrasesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartKeyPhrasesDetectionJobRequestT = Model::StartKeyPhrasesDetectionJobRequest>
        void StartKeyPhrasesDetectionJobAsync(const StartKeyPhrasesDetectionJobRequestT& request, const StartKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StartKeyPhrasesDetectionJob, request, handler, context);
        }

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
        template<typename StartPiiEntitiesDetectionJobRequestT = Model::StartPiiEntitiesDetectionJobRequest>
        Model::StartPiiEntitiesDetectionJobOutcomeCallable StartPiiEntitiesDetectionJobCallable(const StartPiiEntitiesDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StartPiiEntitiesDetectionJob, request);
        }

        /**
         * An Async wrapper for StartPiiEntitiesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartPiiEntitiesDetectionJobRequestT = Model::StartPiiEntitiesDetectionJobRequest>
        void StartPiiEntitiesDetectionJobAsync(const StartPiiEntitiesDetectionJobRequestT& request, const StartPiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StartPiiEntitiesDetectionJob, request, handler, context);
        }

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
        template<typename StartSentimentDetectionJobRequestT = Model::StartSentimentDetectionJobRequest>
        Model::StartSentimentDetectionJobOutcomeCallable StartSentimentDetectionJobCallable(const StartSentimentDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StartSentimentDetectionJob, request);
        }

        /**
         * An Async wrapper for StartSentimentDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSentimentDetectionJobRequestT = Model::StartSentimentDetectionJobRequest>
        void StartSentimentDetectionJobAsync(const StartSentimentDetectionJobRequestT& request, const StartSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StartSentimentDetectionJob, request, handler, context);
        }

        /**
         * <p>Starts an asynchronous targeted sentiment detection job for a collection of
         * documents. Use the <code>DescribeTargetedSentimentDetectionJob</code> operation
         * to track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartTargetedSentimentDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTargetedSentimentDetectionJobOutcome StartTargetedSentimentDetectionJob(const Model::StartTargetedSentimentDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StartTargetedSentimentDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTargetedSentimentDetectionJobRequestT = Model::StartTargetedSentimentDetectionJobRequest>
        Model::StartTargetedSentimentDetectionJobOutcomeCallable StartTargetedSentimentDetectionJobCallable(const StartTargetedSentimentDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StartTargetedSentimentDetectionJob, request);
        }

        /**
         * An Async wrapper for StartTargetedSentimentDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTargetedSentimentDetectionJobRequestT = Model::StartTargetedSentimentDetectionJobRequest>
        void StartTargetedSentimentDetectionJobAsync(const StartTargetedSentimentDetectionJobRequestT& request, const StartTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StartTargetedSentimentDetectionJob, request, handler, context);
        }

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
        template<typename StartTopicsDetectionJobRequestT = Model::StartTopicsDetectionJobRequest>
        Model::StartTopicsDetectionJobOutcomeCallable StartTopicsDetectionJobCallable(const StartTopicsDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StartTopicsDetectionJob, request);
        }

        /**
         * An Async wrapper for StartTopicsDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTopicsDetectionJobRequestT = Model::StartTopicsDetectionJobRequest>
        void StartTopicsDetectionJobAsync(const StartTopicsDetectionJobRequestT& request, const StartTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StartTopicsDetectionJob, request, handler, context);
        }

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
        template<typename StopDominantLanguageDetectionJobRequestT = Model::StopDominantLanguageDetectionJobRequest>
        Model::StopDominantLanguageDetectionJobOutcomeCallable StopDominantLanguageDetectionJobCallable(const StopDominantLanguageDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StopDominantLanguageDetectionJob, request);
        }

        /**
         * An Async wrapper for StopDominantLanguageDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDominantLanguageDetectionJobRequestT = Model::StopDominantLanguageDetectionJobRequest>
        void StopDominantLanguageDetectionJobAsync(const StopDominantLanguageDetectionJobRequestT& request, const StopDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StopDominantLanguageDetectionJob, request, handler, context);
        }

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
        template<typename StopEntitiesDetectionJobRequestT = Model::StopEntitiesDetectionJobRequest>
        Model::StopEntitiesDetectionJobOutcomeCallable StopEntitiesDetectionJobCallable(const StopEntitiesDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StopEntitiesDetectionJob, request);
        }

        /**
         * An Async wrapper for StopEntitiesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopEntitiesDetectionJobRequestT = Model::StopEntitiesDetectionJobRequest>
        void StopEntitiesDetectionJobAsync(const StopEntitiesDetectionJobRequestT& request, const StopEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StopEntitiesDetectionJob, request, handler, context);
        }

        /**
         * <p>Stops an events detection job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopEventsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEventsDetectionJobOutcome StopEventsDetectionJob(const Model::StopEventsDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StopEventsDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopEventsDetectionJobRequestT = Model::StopEventsDetectionJobRequest>
        Model::StopEventsDetectionJobOutcomeCallable StopEventsDetectionJobCallable(const StopEventsDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StopEventsDetectionJob, request);
        }

        /**
         * An Async wrapper for StopEventsDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopEventsDetectionJobRequestT = Model::StopEventsDetectionJobRequest>
        void StopEventsDetectionJobAsync(const StopEventsDetectionJobRequestT& request, const StopEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StopEventsDetectionJob, request, handler, context);
        }

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
        template<typename StopKeyPhrasesDetectionJobRequestT = Model::StopKeyPhrasesDetectionJobRequest>
        Model::StopKeyPhrasesDetectionJobOutcomeCallable StopKeyPhrasesDetectionJobCallable(const StopKeyPhrasesDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StopKeyPhrasesDetectionJob, request);
        }

        /**
         * An Async wrapper for StopKeyPhrasesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopKeyPhrasesDetectionJobRequestT = Model::StopKeyPhrasesDetectionJobRequest>
        void StopKeyPhrasesDetectionJobAsync(const StopKeyPhrasesDetectionJobRequestT& request, const StopKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StopKeyPhrasesDetectionJob, request, handler, context);
        }

        /**
         * <p>Stops a PII entities detection job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopPiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopPiiEntitiesDetectionJobOutcome StopPiiEntitiesDetectionJob(const Model::StopPiiEntitiesDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StopPiiEntitiesDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopPiiEntitiesDetectionJobRequestT = Model::StopPiiEntitiesDetectionJobRequest>
        Model::StopPiiEntitiesDetectionJobOutcomeCallable StopPiiEntitiesDetectionJobCallable(const StopPiiEntitiesDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StopPiiEntitiesDetectionJob, request);
        }

        /**
         * An Async wrapper for StopPiiEntitiesDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopPiiEntitiesDetectionJobRequestT = Model::StopPiiEntitiesDetectionJobRequest>
        void StopPiiEntitiesDetectionJobAsync(const StopPiiEntitiesDetectionJobRequestT& request, const StopPiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StopPiiEntitiesDetectionJob, request, handler, context);
        }

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
        template<typename StopSentimentDetectionJobRequestT = Model::StopSentimentDetectionJobRequest>
        Model::StopSentimentDetectionJobOutcomeCallable StopSentimentDetectionJobCallable(const StopSentimentDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StopSentimentDetectionJob, request);
        }

        /**
         * An Async wrapper for StopSentimentDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopSentimentDetectionJobRequestT = Model::StopSentimentDetectionJobRequest>
        void StopSentimentDetectionJobAsync(const StopSentimentDetectionJobRequestT& request, const StopSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StopSentimentDetectionJob, request, handler, context);
        }

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
        template<typename StopTargetedSentimentDetectionJobRequestT = Model::StopTargetedSentimentDetectionJobRequest>
        Model::StopTargetedSentimentDetectionJobOutcomeCallable StopTargetedSentimentDetectionJobCallable(const StopTargetedSentimentDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StopTargetedSentimentDetectionJob, request);
        }

        /**
         * An Async wrapper for StopTargetedSentimentDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopTargetedSentimentDetectionJobRequestT = Model::StopTargetedSentimentDetectionJobRequest>
        void StopTargetedSentimentDetectionJobAsync(const StopTargetedSentimentDetectionJobRequestT& request, const StopTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StopTargetedSentimentDetectionJob, request, handler, context);
        }

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
        template<typename StopTrainingDocumentClassifierRequestT = Model::StopTrainingDocumentClassifierRequest>
        Model::StopTrainingDocumentClassifierOutcomeCallable StopTrainingDocumentClassifierCallable(const StopTrainingDocumentClassifierRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StopTrainingDocumentClassifier, request);
        }

        /**
         * An Async wrapper for StopTrainingDocumentClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopTrainingDocumentClassifierRequestT = Model::StopTrainingDocumentClassifierRequest>
        void StopTrainingDocumentClassifierAsync(const StopTrainingDocumentClassifierRequestT& request, const StopTrainingDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StopTrainingDocumentClassifier, request, handler, context);
        }

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
        template<typename StopTrainingEntityRecognizerRequestT = Model::StopTrainingEntityRecognizerRequest>
        Model::StopTrainingEntityRecognizerOutcomeCallable StopTrainingEntityRecognizerCallable(const StopTrainingEntityRecognizerRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::StopTrainingEntityRecognizer, request);
        }

        /**
         * An Async wrapper for StopTrainingEntityRecognizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopTrainingEntityRecognizerRequestT = Model::StopTrainingEntityRecognizerRequest>
        void StopTrainingEntityRecognizerAsync(const StopTrainingEntityRecognizerRequestT& request, const StopTrainingEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::StopTrainingEntityRecognizer, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateEndpointRequestT = Model::UpdateEndpointRequest>
        Model::UpdateEndpointOutcomeCallable UpdateEndpointCallable(const UpdateEndpointRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::UpdateEndpoint, request);
        }

        /**
         * An Async wrapper for UpdateEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEndpointRequestT = Model::UpdateEndpointRequest>
        void UpdateEndpointAsync(const UpdateEndpointRequestT& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::UpdateEndpoint, request, handler, context);
        }

        /**
         * <p>Update the configuration information for an existing flywheel.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/UpdateFlywheel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlywheelOutcome UpdateFlywheel(const Model::UpdateFlywheelRequest& request) const;

        /**
         * A Callable wrapper for UpdateFlywheel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFlywheelRequestT = Model::UpdateFlywheelRequest>
        Model::UpdateFlywheelOutcomeCallable UpdateFlywheelCallable(const UpdateFlywheelRequestT& request) const
        {
            return SubmitCallable(&ComprehendClient::UpdateFlywheel, request);
        }

        /**
         * An Async wrapper for UpdateFlywheel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFlywheelRequestT = Model::UpdateFlywheelRequest>
        void UpdateFlywheelAsync(const UpdateFlywheelRequestT& request, const UpdateFlywheelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendClient::UpdateFlywheel, request, handler, context);
        }


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
