/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/comprehend/ComprehendServiceClientModel.h>
#include <aws/comprehend/ComprehendLegacyAsyncMacros.h>

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
  class AWS_COMPREHEND_API ComprehendClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Inspects the text of a batch of documents for named entities and returns
         * information about them. For more information about named entities, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-entities.html">Entities</a>
         * in the Comprehend Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDetectEntitiesOutcome BatchDetectEntities(const Model::BatchDetectEntitiesRequest& request) const;


        /**
         * <p>Detects the key noun phrases found in a batch of documents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectKeyPhrases">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDetectKeyPhrasesOutcome BatchDetectKeyPhrases(const Model::BatchDetectKeyPhrasesRequest& request) const;


        /**
         * <p>Inspects a batch of documents and returns an inference of the prevailing
         * sentiment, <code>POSITIVE</code>, <code>NEUTRAL</code>, <code>MIXED</code>, or
         * <code>NEGATIVE</code>, in each one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectSentiment">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDetectSentimentOutcome BatchDetectSentiment(const Model::BatchDetectSentimentRequest& request) const;


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
         * <p>Creates a new document classification request to analyze a single document in
         * real-time, using a previously created and trained custom model and an
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ClassifyDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::ClassifyDocumentOutcome ClassifyDocument(const Model::ClassifyDocumentRequest& request) const;


        /**
         * <p>Analyzes input text for the presence of personally identifiable information
         * (PII) and returns the labels of identified PII entity types such as name,
         * address, bank account number, or phone number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ContainsPiiEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::ContainsPiiEntitiesOutcome ContainsPiiEntities(const Model::ContainsPiiEntitiesRequest& request) const;


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
         * <p>Creates a model-specific endpoint for synchronous inference for a previously
         * trained custom model For information about endpoints, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
         * endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointOutcome CreateEndpoint(const Model::CreateEndpointRequest& request) const;


        /**
         * <p>Creates an entity recognizer using submitted files. After your
         * <code>CreateEntityRecognizer</code> request is submitted, you can check job
         * status using the API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateEntityRecognizer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEntityRecognizerOutcome CreateEntityRecognizer(const Model::CreateEntityRecognizerRequest& request) const;


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
         * <p>Deletes a resource-based policy that is attached to a custom
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;


        /**
         * <p>Gets the properties associated with a document classification job. Use this
         * operation to get the status of a classification job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeDocumentClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentClassificationJobOutcome DescribeDocumentClassificationJob(const Model::DescribeDocumentClassificationJobRequest& request) const;


        /**
         * <p>Gets the properties associated with a document classifier.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeDocumentClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentClassifierOutcome DescribeDocumentClassifier(const Model::DescribeDocumentClassifierRequest& request) const;


        /**
         * <p>Gets the properties associated with a dominant language detection job. Use
         * this operation to get the status of a detection job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeDominantLanguageDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDominantLanguageDetectionJobOutcome DescribeDominantLanguageDetectionJob(const Model::DescribeDominantLanguageDetectionJobRequest& request) const;


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
         * <p>Gets the properties associated with an entities detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEntitiesDetectionJobOutcome DescribeEntitiesDetectionJob(const Model::DescribeEntitiesDetectionJobRequest& request) const;


        /**
         * <p>Provides details about an entity recognizer including status, S3 buckets
         * containing training data, recognizer metadata, metrics, and so on.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEntityRecognizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEntityRecognizerOutcome DescribeEntityRecognizer(const Model::DescribeEntityRecognizerRequest& request) const;


        /**
         * <p>Gets the status and details of an events detection job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEventsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsDetectionJobOutcome DescribeEventsDetectionJob(const Model::DescribeEventsDetectionJobRequest& request) const;


        /**
         * <p>Gets the properties associated with a key phrases detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeKeyPhrasesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeKeyPhrasesDetectionJobOutcome DescribeKeyPhrasesDetectionJob(const Model::DescribeKeyPhrasesDetectionJobRequest& request) const;


        /**
         * <p>Gets the properties associated with a PII entities detection job. For
         * example, you can use this operation to get the job status.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribePiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePiiEntitiesDetectionJobOutcome DescribePiiEntitiesDetectionJob(const Model::DescribePiiEntitiesDetectionJobRequest& request) const;


        /**
         * <p>Gets the details of a resource-based policy that is attached to a custom
         * model, including the JSON body of the policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourcePolicyOutcome DescribeResourcePolicy(const Model::DescribeResourcePolicyRequest& request) const;


        /**
         * <p>Gets the properties associated with a sentiment detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeSentimentDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSentimentDetectionJobOutcome DescribeSentimentDetectionJob(const Model::DescribeSentimentDetectionJobRequest& request) const;


        /**
         * <p>Gets the properties associated with a targeted sentiment detection job. Use
         * this operation to get the status of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeTargetedSentimentDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTargetedSentimentDetectionJobOutcome DescribeTargetedSentimentDetectionJob(const Model::DescribeTargetedSentimentDetectionJobRequest& request) const;


        /**
         * <p>Gets the properties associated with a topic detection job. Use this operation
         * to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeTopicsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTopicsDetectionJobOutcome DescribeTopicsDetectionJob(const Model::DescribeTopicsDetectionJobRequest& request) const;


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
         * <p>Inspects text for named entities, and returns information about them. For
         * more information, about named entities, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-entities.html">Entities</a>
         * in the Comprehend Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectEntitiesOutcome DetectEntities(const Model::DetectEntitiesRequest& request) const;


        /**
         * <p>Detects the key noun phrases found in the text. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectKeyPhrases">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectKeyPhrasesOutcome DetectKeyPhrases(const Model::DetectKeyPhrasesRequest& request) const;


        /**
         * <p>Inspects the input text for entities that contain personally identifiable
         * information (PII) and returns information about them.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectPiiEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectPiiEntitiesOutcome DetectPiiEntities(const Model::DetectPiiEntitiesRequest& request) const;


        /**
         * <p>Inspects text and returns an inference of the prevailing sentiment
         * (<code>POSITIVE</code>, <code>NEUTRAL</code>, <code>MIXED</code>, or
         * <code>NEGATIVE</code>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectSentiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectSentimentOutcome DetectSentiment(const Model::DetectSentimentRequest& request) const;


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
         * <p>Gets a list of the documentation classification jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDocumentClassificationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentClassificationJobsOutcome ListDocumentClassificationJobs(const Model::ListDocumentClassificationJobsRequest& request) const;


        /**
         * <p>Gets a list of summaries of the document classifiers that you have
         * created</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDocumentClassifierSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentClassifierSummariesOutcome ListDocumentClassifierSummaries(const Model::ListDocumentClassifierSummariesRequest& request) const;


        /**
         * <p>Gets a list of the document classifiers that you have created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDocumentClassifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentClassifiersOutcome ListDocumentClassifiers(const Model::ListDocumentClassifiersRequest& request) const;


        /**
         * <p>Gets a list of the dominant language detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDominantLanguageDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDominantLanguageDetectionJobsOutcome ListDominantLanguageDetectionJobs(const Model::ListDominantLanguageDetectionJobsRequest& request) const;


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
         * <p>Gets a list of the entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEntitiesDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitiesDetectionJobsOutcome ListEntitiesDetectionJobs(const Model::ListEntitiesDetectionJobsRequest& request) const;


        /**
         * <p>Gets a list of summaries for the entity recognizers that you have
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEntityRecognizerSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntityRecognizerSummariesOutcome ListEntityRecognizerSummaries(const Model::ListEntityRecognizerSummariesRequest& request) const;


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
         * <p>Gets a list of the events detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEventsDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventsDetectionJobsOutcome ListEventsDetectionJobs(const Model::ListEventsDetectionJobsRequest& request) const;


        /**
         * <p>Get a list of key phrase detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListKeyPhrasesDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKeyPhrasesDetectionJobsOutcome ListKeyPhrasesDetectionJobs(const Model::ListKeyPhrasesDetectionJobsRequest& request) const;


        /**
         * <p>Gets a list of the PII entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListPiiEntitiesDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPiiEntitiesDetectionJobsOutcome ListPiiEntitiesDetectionJobs(const Model::ListPiiEntitiesDetectionJobsRequest& request) const;


        /**
         * <p>Gets a list of sentiment detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListSentimentDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSentimentDetectionJobsOutcome ListSentimentDetectionJobs(const Model::ListSentimentDetectionJobsRequest& request) const;


        /**
         * <p>Lists all tags associated with a given Amazon Comprehend resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Gets a list of targeted sentiment detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListTargetedSentimentDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetedSentimentDetectionJobsOutcome ListTargetedSentimentDetectionJobs(const Model::ListTargetedSentimentDetectionJobsRequest& request) const;


        /**
         * <p>Gets a list of the topic detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListTopicsDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTopicsDetectionJobsOutcome ListTopicsDetectionJobs(const Model::ListTopicsDetectionJobsRequest& request) const;


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
         * <p>Starts an asynchronous document classification job. Use the operation to
         * track the progress of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartDocumentClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDocumentClassificationJobOutcome StartDocumentClassificationJob(const Model::StartDocumentClassificationJobRequest& request) const;


        /**
         * <p>Starts an asynchronous dominant language detection job for a collection of
         * documents. Use the operation to track the status of a job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartDominantLanguageDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDominantLanguageDetectionJobOutcome StartDominantLanguageDetectionJob(const Model::StartDominantLanguageDetectionJobRequest& request) const;


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
         * <p>Starts an asynchronous event detection job for a collection of
         * documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartEventsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEventsDetectionJobOutcome StartEventsDetectionJob(const Model::StartEventsDetectionJobRequest& request) const;


        /**
         * <p>Starts an asynchronous key phrase detection job for a collection of
         * documents. Use the operation to track the status of a job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartKeyPhrasesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartKeyPhrasesDetectionJobOutcome StartKeyPhrasesDetectionJob(const Model::StartKeyPhrasesDetectionJobRequest& request) const;


        /**
         * <p>Starts an asynchronous PII entity detection job for a collection of
         * documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartPiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPiiEntitiesDetectionJobOutcome StartPiiEntitiesDetectionJob(const Model::StartPiiEntitiesDetectionJobRequest& request) const;


        /**
         * <p>Starts an asynchronous sentiment detection job for a collection of documents.
         * Use the operation to track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartSentimentDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSentimentDetectionJobOutcome StartSentimentDetectionJob(const Model::StartSentimentDetectionJobRequest& request) const;


        /**
         * <p>Starts an asynchronous targeted sentiment detection job for a collection of
         * documents. Use the operation to track the status of a job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartTargetedSentimentDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTargetedSentimentDetectionJobOutcome StartTargetedSentimentDetectionJob(const Model::StartTargetedSentimentDetectionJobRequest& request) const;


        /**
         * <p>Starts an asynchronous topic detection job. Use the
         * <code>DescribeTopicDetectionJob</code> operation to track the status of a
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartTopicsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTopicsDetectionJobOutcome StartTopicsDetectionJob(const Model::StartTopicsDetectionJobRequest& request) const;


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
         * <p>Stops an events detection job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopEventsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEventsDetectionJobOutcome StopEventsDetectionJob(const Model::StopEventsDetectionJobRequest& request) const;


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
         * <p>Stops a PII entities detection job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopPiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopPiiEntitiesDetectionJobOutcome StopPiiEntitiesDetectionJob(const Model::StopPiiEntitiesDetectionJobRequest& request) const;


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
         * <p>Associates a specific tag with an Amazon Comprehend resource. A tag is a
         * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
         * For example, a tag with "Sales" as the key might be added to a resource to
         * indicate its use by the sales department. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes a specific tag associated with an Amazon Comprehend resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates information about the specified endpoint. For information about
         * endpoints, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/manage-endpoints.html">Managing
         * endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/UpdateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointOutcome UpdateEndpoint(const Model::UpdateEndpointRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ComprehendEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ComprehendClientConfiguration& clientConfiguration);

      ComprehendClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ComprehendEndpointProviderBase> m_endpointProvider;
  };

} // namespace Comprehend
} // namespace Aws
