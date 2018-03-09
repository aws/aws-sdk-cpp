/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/comprehend/model/BatchDetectDominantLanguageResult.h>
#include <aws/comprehend/model/BatchDetectEntitiesResult.h>
#include <aws/comprehend/model/BatchDetectKeyPhrasesResult.h>
#include <aws/comprehend/model/BatchDetectSentimentResult.h>
#include <aws/comprehend/model/DescribeTopicsDetectionJobResult.h>
#include <aws/comprehend/model/DetectDominantLanguageResult.h>
#include <aws/comprehend/model/DetectEntitiesResult.h>
#include <aws/comprehend/model/DetectKeyPhrasesResult.h>
#include <aws/comprehend/model/DetectSentimentResult.h>
#include <aws/comprehend/model/ListTopicsDetectionJobsResult.h>
#include <aws/comprehend/model/StartTopicsDetectionJobResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace Comprehend
{

namespace Model
{
        class BatchDetectDominantLanguageRequest;
        class BatchDetectEntitiesRequest;
        class BatchDetectKeyPhrasesRequest;
        class BatchDetectSentimentRequest;
        class DescribeTopicsDetectionJobRequest;
        class DetectDominantLanguageRequest;
        class DetectEntitiesRequest;
        class DetectKeyPhrasesRequest;
        class DetectSentimentRequest;
        class ListTopicsDetectionJobsRequest;
        class StartTopicsDetectionJobRequest;

        typedef Aws::Utils::Outcome<BatchDetectDominantLanguageResult, Aws::Client::AWSError<ComprehendErrors>> BatchDetectDominantLanguageOutcome;
        typedef Aws::Utils::Outcome<BatchDetectEntitiesResult, Aws::Client::AWSError<ComprehendErrors>> BatchDetectEntitiesOutcome;
        typedef Aws::Utils::Outcome<BatchDetectKeyPhrasesResult, Aws::Client::AWSError<ComprehendErrors>> BatchDetectKeyPhrasesOutcome;
        typedef Aws::Utils::Outcome<BatchDetectSentimentResult, Aws::Client::AWSError<ComprehendErrors>> BatchDetectSentimentOutcome;
        typedef Aws::Utils::Outcome<DescribeTopicsDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> DescribeTopicsDetectionJobOutcome;
        typedef Aws::Utils::Outcome<DetectDominantLanguageResult, Aws::Client::AWSError<ComprehendErrors>> DetectDominantLanguageOutcome;
        typedef Aws::Utils::Outcome<DetectEntitiesResult, Aws::Client::AWSError<ComprehendErrors>> DetectEntitiesOutcome;
        typedef Aws::Utils::Outcome<DetectKeyPhrasesResult, Aws::Client::AWSError<ComprehendErrors>> DetectKeyPhrasesOutcome;
        typedef Aws::Utils::Outcome<DetectSentimentResult, Aws::Client::AWSError<ComprehendErrors>> DetectSentimentOutcome;
        typedef Aws::Utils::Outcome<ListTopicsDetectionJobsResult, Aws::Client::AWSError<ComprehendErrors>> ListTopicsDetectionJobsOutcome;
        typedef Aws::Utils::Outcome<StartTopicsDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> StartTopicsDetectionJobOutcome;

        typedef std::future<BatchDetectDominantLanguageOutcome> BatchDetectDominantLanguageOutcomeCallable;
        typedef std::future<BatchDetectEntitiesOutcome> BatchDetectEntitiesOutcomeCallable;
        typedef std::future<BatchDetectKeyPhrasesOutcome> BatchDetectKeyPhrasesOutcomeCallable;
        typedef std::future<BatchDetectSentimentOutcome> BatchDetectSentimentOutcomeCallable;
        typedef std::future<DescribeTopicsDetectionJobOutcome> DescribeTopicsDetectionJobOutcomeCallable;
        typedef std::future<DetectDominantLanguageOutcome> DetectDominantLanguageOutcomeCallable;
        typedef std::future<DetectEntitiesOutcome> DetectEntitiesOutcomeCallable;
        typedef std::future<DetectKeyPhrasesOutcome> DetectKeyPhrasesOutcomeCallable;
        typedef std::future<DetectSentimentOutcome> DetectSentimentOutcomeCallable;
        typedef std::future<ListTopicsDetectionJobsOutcome> ListTopicsDetectionJobsOutcomeCallable;
        typedef std::future<StartTopicsDetectionJobOutcome> StartTopicsDetectionJobOutcomeCallable;
} // namespace Model

  class ComprehendClient;

    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectDominantLanguageRequest&, const Model::BatchDetectDominantLanguageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectDominantLanguageResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectEntitiesRequest&, const Model::BatchDetectEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectEntitiesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectKeyPhrasesRequest&, const Model::BatchDetectKeyPhrasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectKeyPhrasesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectSentimentRequest&, const Model::BatchDetectSentimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectSentimentResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeTopicsDetectionJobRequest&, const Model::DescribeTopicsDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTopicsDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectDominantLanguageRequest&, const Model::DetectDominantLanguageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectDominantLanguageResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectEntitiesRequest&, const Model::DetectEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectEntitiesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectKeyPhrasesRequest&, const Model::DetectKeyPhrasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectKeyPhrasesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectSentimentRequest&, const Model::DetectSentimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectSentimentResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListTopicsDetectionJobsRequest&, const Model::ListTopicsDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTopicsDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartTopicsDetectionJobRequest&, const Model::StartTopicsDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTopicsDetectionJobResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComprehendClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ComprehendClient();

        inline virtual const char* GetServiceClientName() const override { return "comprehend"; }


        /**
         * <p>Determines the dominant language of the input text for a batch of documents.
         * For a list of languages that Amazon Comprehend can detect, see <a
         * href="http://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
         * Comprehend Supported Languages</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectDominantLanguage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDetectDominantLanguageOutcome BatchDetectDominantLanguage(const Model::BatchDetectDominantLanguageRequest& request) const;

        /**
         * <p>Determines the dominant language of the input text for a batch of documents.
         * For a list of languages that Amazon Comprehend can detect, see <a
         * href="http://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
         * Comprehend Supported Languages</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectDominantLanguage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDetectDominantLanguageOutcomeCallable BatchDetectDominantLanguageCallable(const Model::BatchDetectDominantLanguageRequest& request) const;

        /**
         * <p>Determines the dominant language of the input text for a batch of documents.
         * For a list of languages that Amazon Comprehend can detect, see <a
         * href="http://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
         * Comprehend Supported Languages</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectDominantLanguage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDetectDominantLanguageAsync(const Model::BatchDetectDominantLanguageRequest& request, const BatchDetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inspects the text of a batch of documents and returns information about them.
         * For more information about entities, see <a>how-entities</a> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDetectEntitiesOutcome BatchDetectEntities(const Model::BatchDetectEntitiesRequest& request) const;

        /**
         * <p>Inspects the text of a batch of documents and returns information about them.
         * For more information about entities, see <a>how-entities</a> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectEntities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDetectEntitiesOutcomeCallable BatchDetectEntitiesCallable(const Model::BatchDetectEntitiesRequest& request) const;

        /**
         * <p>Inspects the text of a batch of documents and returns information about them.
         * For more information about entities, see <a>how-entities</a> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectEntities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Detects the key noun phrases found in a batch of documents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectKeyPhrases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDetectKeyPhrasesOutcomeCallable BatchDetectKeyPhrasesCallable(const Model::BatchDetectKeyPhrasesRequest& request) const;

        /**
         * <p>Detects the key noun phrases found in a batch of documents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectKeyPhrases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Inspects a batch of documents and returns an inference of the prevailing
         * sentiment, <code>POSITIVE</code>, <code>NEUTRAL</code>, <code>MIXED</code>, or
         * <code>NEGATIVE</code>, in each one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectSentiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDetectSentimentOutcomeCallable BatchDetectSentimentCallable(const Model::BatchDetectSentimentRequest& request) const;

        /**
         * <p>Inspects a batch of documents and returns an inference of the prevailing
         * sentiment, <code>POSITIVE</code>, <code>NEUTRAL</code>, <code>MIXED</code>, or
         * <code>NEGATIVE</code>, in each one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectSentiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDetectSentimentAsync(const Model::BatchDetectSentimentRequest& request, const BatchDetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with a topic detection job. Use this operation
         * to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeTopicsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTopicsDetectionJobOutcome DescribeTopicsDetectionJob(const Model::DescribeTopicsDetectionJobRequest& request) const;

        /**
         * <p>Gets the properties associated with a topic detection job. Use this operation
         * to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeTopicsDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTopicsDetectionJobOutcomeCallable DescribeTopicsDetectionJobCallable(const Model::DescribeTopicsDetectionJobRequest& request) const;

        /**
         * <p>Gets the properties associated with a topic detection job. Use this operation
         * to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeTopicsDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTopicsDetectionJobAsync(const Model::DescribeTopicsDetectionJobRequest& request, const DescribeTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Determines the dominant language of the input text. For a list of languages
         * that Amazon Comprehend can detect, see <a
         * href="http://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
         * Comprehend Supported Languages</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectDominantLanguage">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectDominantLanguageOutcome DetectDominantLanguage(const Model::DetectDominantLanguageRequest& request) const;

        /**
         * <p>Determines the dominant language of the input text. For a list of languages
         * that Amazon Comprehend can detect, see <a
         * href="http://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
         * Comprehend Supported Languages</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectDominantLanguage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectDominantLanguageOutcomeCallable DetectDominantLanguageCallable(const Model::DetectDominantLanguageRequest& request) const;

        /**
         * <p>Determines the dominant language of the input text. For a list of languages
         * that Amazon Comprehend can detect, see <a
         * href="http://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
         * Comprehend Supported Languages</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectDominantLanguage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectDominantLanguageAsync(const Model::DetectDominantLanguageRequest& request, const DetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inspects text for entities, and returns information about them. For more
         * information, about entities, see <a>how-entities</a>. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectEntitiesOutcome DetectEntities(const Model::DetectEntitiesRequest& request) const;

        /**
         * <p>Inspects text for entities, and returns information about them. For more
         * information, about entities, see <a>how-entities</a>. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectEntities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectEntitiesOutcomeCallable DetectEntitiesCallable(const Model::DetectEntitiesRequest& request) const;

        /**
         * <p>Inspects text for entities, and returns information about them. For more
         * information, about entities, see <a>how-entities</a>. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectEntities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Detects the key noun phrases found in the text. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectKeyPhrases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectKeyPhrasesOutcomeCallable DetectKeyPhrasesCallable(const Model::DetectKeyPhrasesRequest& request) const;

        /**
         * <p>Detects the key noun phrases found in the text. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectKeyPhrases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectKeyPhrasesAsync(const Model::DetectKeyPhrasesRequest& request, const DetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inspects text and returns an inference of the prevailing sentiment
         * (<code>POSITIVE</code>, <code>NEUTRAL</code>, <code>MIXED</code>, or
         * <code>NEGATIVE</code>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectSentiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectSentimentOutcome DetectSentiment(const Model::DetectSentimentRequest& request) const;

        /**
         * <p>Inspects text and returns an inference of the prevailing sentiment
         * (<code>POSITIVE</code>, <code>NEUTRAL</code>, <code>MIXED</code>, or
         * <code>NEGATIVE</code>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectSentiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectSentimentOutcomeCallable DetectSentimentCallable(const Model::DetectSentimentRequest& request) const;

        /**
         * <p>Inspects text and returns an inference of the prevailing sentiment
         * (<code>POSITIVE</code>, <code>NEUTRAL</code>, <code>MIXED</code>, or
         * <code>NEGATIVE</code>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectSentiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectSentimentAsync(const Model::DetectSentimentRequest& request, const DetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the topic detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListTopicsDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTopicsDetectionJobsOutcome ListTopicsDetectionJobs(const Model::ListTopicsDetectionJobsRequest& request) const;

        /**
         * <p>Gets a list of the topic detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListTopicsDetectionJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTopicsDetectionJobsOutcomeCallable ListTopicsDetectionJobsCallable(const Model::ListTopicsDetectionJobsRequest& request) const;

        /**
         * <p>Gets a list of the topic detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListTopicsDetectionJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTopicsDetectionJobsAsync(const Model::ListTopicsDetectionJobsRequest& request, const ListTopicsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous topic detection job. Use the
         * <code>DescribeTopicDetectionJob</code> operation to track the status of a
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartTopicsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTopicsDetectionJobOutcome StartTopicsDetectionJob(const Model::StartTopicsDetectionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous topic detection job. Use the
         * <code>DescribeTopicDetectionJob</code> operation to track the status of a
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartTopicsDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTopicsDetectionJobOutcomeCallable StartTopicsDetectionJobCallable(const Model::StartTopicsDetectionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous topic detection job. Use the
         * <code>DescribeTopicDetectionJob</code> operation to track the status of a
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartTopicsDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTopicsDetectionJobAsync(const Model::StartTopicsDetectionJobRequest& request, const StartTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void BatchDetectDominantLanguageAsyncHelper(const Model::BatchDetectDominantLanguageRequest& request, const BatchDetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDetectEntitiesAsyncHelper(const Model::BatchDetectEntitiesRequest& request, const BatchDetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDetectKeyPhrasesAsyncHelper(const Model::BatchDetectKeyPhrasesRequest& request, const BatchDetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDetectSentimentAsyncHelper(const Model::BatchDetectSentimentRequest& request, const BatchDetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTopicsDetectionJobAsyncHelper(const Model::DescribeTopicsDetectionJobRequest& request, const DescribeTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectDominantLanguageAsyncHelper(const Model::DetectDominantLanguageRequest& request, const DetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectEntitiesAsyncHelper(const Model::DetectEntitiesRequest& request, const DetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectKeyPhrasesAsyncHelper(const Model::DetectKeyPhrasesRequest& request, const DetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectSentimentAsyncHelper(const Model::DetectSentimentRequest& request, const DetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTopicsDetectionJobsAsyncHelper(const Model::ListTopicsDetectionJobsRequest& request, const ListTopicsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTopicsDetectionJobAsyncHelper(const Model::StartTopicsDetectionJobRequest& request, const StartTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Comprehend
} // namespace Aws
