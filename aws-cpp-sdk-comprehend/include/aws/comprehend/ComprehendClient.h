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
#include <aws/comprehend/model/BatchDetectSyntaxResult.h>
#include <aws/comprehend/model/CreateDocumentClassifierResult.h>
#include <aws/comprehend/model/CreateEntityRecognizerResult.h>
#include <aws/comprehend/model/DeleteDocumentClassifierResult.h>
#include <aws/comprehend/model/DeleteEntityRecognizerResult.h>
#include <aws/comprehend/model/DescribeDocumentClassificationJobResult.h>
#include <aws/comprehend/model/DescribeDocumentClassifierResult.h>
#include <aws/comprehend/model/DescribeDominantLanguageDetectionJobResult.h>
#include <aws/comprehend/model/DescribeEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/DescribeEntityRecognizerResult.h>
#include <aws/comprehend/model/DescribeKeyPhrasesDetectionJobResult.h>
#include <aws/comprehend/model/DescribeSentimentDetectionJobResult.h>
#include <aws/comprehend/model/DescribeTopicsDetectionJobResult.h>
#include <aws/comprehend/model/DetectDominantLanguageResult.h>
#include <aws/comprehend/model/DetectEntitiesResult.h>
#include <aws/comprehend/model/DetectKeyPhrasesResult.h>
#include <aws/comprehend/model/DetectSentimentResult.h>
#include <aws/comprehend/model/DetectSyntaxResult.h>
#include <aws/comprehend/model/ListDocumentClassificationJobsResult.h>
#include <aws/comprehend/model/ListDocumentClassifiersResult.h>
#include <aws/comprehend/model/ListDominantLanguageDetectionJobsResult.h>
#include <aws/comprehend/model/ListEntitiesDetectionJobsResult.h>
#include <aws/comprehend/model/ListEntityRecognizersResult.h>
#include <aws/comprehend/model/ListKeyPhrasesDetectionJobsResult.h>
#include <aws/comprehend/model/ListSentimentDetectionJobsResult.h>
#include <aws/comprehend/model/ListTagsForResourceResult.h>
#include <aws/comprehend/model/ListTopicsDetectionJobsResult.h>
#include <aws/comprehend/model/StartDocumentClassificationJobResult.h>
#include <aws/comprehend/model/StartDominantLanguageDetectionJobResult.h>
#include <aws/comprehend/model/StartEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/StartKeyPhrasesDetectionJobResult.h>
#include <aws/comprehend/model/StartSentimentDetectionJobResult.h>
#include <aws/comprehend/model/StartTopicsDetectionJobResult.h>
#include <aws/comprehend/model/StopDominantLanguageDetectionJobResult.h>
#include <aws/comprehend/model/StopEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/StopKeyPhrasesDetectionJobResult.h>
#include <aws/comprehend/model/StopSentimentDetectionJobResult.h>
#include <aws/comprehend/model/StopTrainingDocumentClassifierResult.h>
#include <aws/comprehend/model/StopTrainingEntityRecognizerResult.h>
#include <aws/comprehend/model/TagResourceResult.h>
#include <aws/comprehend/model/UntagResourceResult.h>
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

namespace Comprehend
{

namespace Model
{
        class BatchDetectDominantLanguageRequest;
        class BatchDetectEntitiesRequest;
        class BatchDetectKeyPhrasesRequest;
        class BatchDetectSentimentRequest;
        class BatchDetectSyntaxRequest;
        class CreateDocumentClassifierRequest;
        class CreateEntityRecognizerRequest;
        class DeleteDocumentClassifierRequest;
        class DeleteEntityRecognizerRequest;
        class DescribeDocumentClassificationJobRequest;
        class DescribeDocumentClassifierRequest;
        class DescribeDominantLanguageDetectionJobRequest;
        class DescribeEntitiesDetectionJobRequest;
        class DescribeEntityRecognizerRequest;
        class DescribeKeyPhrasesDetectionJobRequest;
        class DescribeSentimentDetectionJobRequest;
        class DescribeTopicsDetectionJobRequest;
        class DetectDominantLanguageRequest;
        class DetectEntitiesRequest;
        class DetectKeyPhrasesRequest;
        class DetectSentimentRequest;
        class DetectSyntaxRequest;
        class ListDocumentClassificationJobsRequest;
        class ListDocumentClassifiersRequest;
        class ListDominantLanguageDetectionJobsRequest;
        class ListEntitiesDetectionJobsRequest;
        class ListEntityRecognizersRequest;
        class ListKeyPhrasesDetectionJobsRequest;
        class ListSentimentDetectionJobsRequest;
        class ListTagsForResourceRequest;
        class ListTopicsDetectionJobsRequest;
        class StartDocumentClassificationJobRequest;
        class StartDominantLanguageDetectionJobRequest;
        class StartEntitiesDetectionJobRequest;
        class StartKeyPhrasesDetectionJobRequest;
        class StartSentimentDetectionJobRequest;
        class StartTopicsDetectionJobRequest;
        class StopDominantLanguageDetectionJobRequest;
        class StopEntitiesDetectionJobRequest;
        class StopKeyPhrasesDetectionJobRequest;
        class StopSentimentDetectionJobRequest;
        class StopTrainingDocumentClassifierRequest;
        class StopTrainingEntityRecognizerRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<BatchDetectDominantLanguageResult, Aws::Client::AWSError<ComprehendErrors>> BatchDetectDominantLanguageOutcome;
        typedef Aws::Utils::Outcome<BatchDetectEntitiesResult, Aws::Client::AWSError<ComprehendErrors>> BatchDetectEntitiesOutcome;
        typedef Aws::Utils::Outcome<BatchDetectKeyPhrasesResult, Aws::Client::AWSError<ComprehendErrors>> BatchDetectKeyPhrasesOutcome;
        typedef Aws::Utils::Outcome<BatchDetectSentimentResult, Aws::Client::AWSError<ComprehendErrors>> BatchDetectSentimentOutcome;
        typedef Aws::Utils::Outcome<BatchDetectSyntaxResult, Aws::Client::AWSError<ComprehendErrors>> BatchDetectSyntaxOutcome;
        typedef Aws::Utils::Outcome<CreateDocumentClassifierResult, Aws::Client::AWSError<ComprehendErrors>> CreateDocumentClassifierOutcome;
        typedef Aws::Utils::Outcome<CreateEntityRecognizerResult, Aws::Client::AWSError<ComprehendErrors>> CreateEntityRecognizerOutcome;
        typedef Aws::Utils::Outcome<DeleteDocumentClassifierResult, Aws::Client::AWSError<ComprehendErrors>> DeleteDocumentClassifierOutcome;
        typedef Aws::Utils::Outcome<DeleteEntityRecognizerResult, Aws::Client::AWSError<ComprehendErrors>> DeleteEntityRecognizerOutcome;
        typedef Aws::Utils::Outcome<DescribeDocumentClassificationJobResult, Aws::Client::AWSError<ComprehendErrors>> DescribeDocumentClassificationJobOutcome;
        typedef Aws::Utils::Outcome<DescribeDocumentClassifierResult, Aws::Client::AWSError<ComprehendErrors>> DescribeDocumentClassifierOutcome;
        typedef Aws::Utils::Outcome<DescribeDominantLanguageDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> DescribeDominantLanguageDetectionJobOutcome;
        typedef Aws::Utils::Outcome<DescribeEntitiesDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> DescribeEntitiesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<DescribeEntityRecognizerResult, Aws::Client::AWSError<ComprehendErrors>> DescribeEntityRecognizerOutcome;
        typedef Aws::Utils::Outcome<DescribeKeyPhrasesDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> DescribeKeyPhrasesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<DescribeSentimentDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> DescribeSentimentDetectionJobOutcome;
        typedef Aws::Utils::Outcome<DescribeTopicsDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> DescribeTopicsDetectionJobOutcome;
        typedef Aws::Utils::Outcome<DetectDominantLanguageResult, Aws::Client::AWSError<ComprehendErrors>> DetectDominantLanguageOutcome;
        typedef Aws::Utils::Outcome<DetectEntitiesResult, Aws::Client::AWSError<ComprehendErrors>> DetectEntitiesOutcome;
        typedef Aws::Utils::Outcome<DetectKeyPhrasesResult, Aws::Client::AWSError<ComprehendErrors>> DetectKeyPhrasesOutcome;
        typedef Aws::Utils::Outcome<DetectSentimentResult, Aws::Client::AWSError<ComprehendErrors>> DetectSentimentOutcome;
        typedef Aws::Utils::Outcome<DetectSyntaxResult, Aws::Client::AWSError<ComprehendErrors>> DetectSyntaxOutcome;
        typedef Aws::Utils::Outcome<ListDocumentClassificationJobsResult, Aws::Client::AWSError<ComprehendErrors>> ListDocumentClassificationJobsOutcome;
        typedef Aws::Utils::Outcome<ListDocumentClassifiersResult, Aws::Client::AWSError<ComprehendErrors>> ListDocumentClassifiersOutcome;
        typedef Aws::Utils::Outcome<ListDominantLanguageDetectionJobsResult, Aws::Client::AWSError<ComprehendErrors>> ListDominantLanguageDetectionJobsOutcome;
        typedef Aws::Utils::Outcome<ListEntitiesDetectionJobsResult, Aws::Client::AWSError<ComprehendErrors>> ListEntitiesDetectionJobsOutcome;
        typedef Aws::Utils::Outcome<ListEntityRecognizersResult, Aws::Client::AWSError<ComprehendErrors>> ListEntityRecognizersOutcome;
        typedef Aws::Utils::Outcome<ListKeyPhrasesDetectionJobsResult, Aws::Client::AWSError<ComprehendErrors>> ListKeyPhrasesDetectionJobsOutcome;
        typedef Aws::Utils::Outcome<ListSentimentDetectionJobsResult, Aws::Client::AWSError<ComprehendErrors>> ListSentimentDetectionJobsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<ComprehendErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTopicsDetectionJobsResult, Aws::Client::AWSError<ComprehendErrors>> ListTopicsDetectionJobsOutcome;
        typedef Aws::Utils::Outcome<StartDocumentClassificationJobResult, Aws::Client::AWSError<ComprehendErrors>> StartDocumentClassificationJobOutcome;
        typedef Aws::Utils::Outcome<StartDominantLanguageDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> StartDominantLanguageDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StartEntitiesDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> StartEntitiesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StartKeyPhrasesDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> StartKeyPhrasesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StartSentimentDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> StartSentimentDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StartTopicsDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> StartTopicsDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StopDominantLanguageDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> StopDominantLanguageDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StopEntitiesDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> StopEntitiesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StopKeyPhrasesDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> StopKeyPhrasesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StopSentimentDetectionJobResult, Aws::Client::AWSError<ComprehendErrors>> StopSentimentDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StopTrainingDocumentClassifierResult, Aws::Client::AWSError<ComprehendErrors>> StopTrainingDocumentClassifierOutcome;
        typedef Aws::Utils::Outcome<StopTrainingEntityRecognizerResult, Aws::Client::AWSError<ComprehendErrors>> StopTrainingEntityRecognizerOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<ComprehendErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<ComprehendErrors>> UntagResourceOutcome;

        typedef std::future<BatchDetectDominantLanguageOutcome> BatchDetectDominantLanguageOutcomeCallable;
        typedef std::future<BatchDetectEntitiesOutcome> BatchDetectEntitiesOutcomeCallable;
        typedef std::future<BatchDetectKeyPhrasesOutcome> BatchDetectKeyPhrasesOutcomeCallable;
        typedef std::future<BatchDetectSentimentOutcome> BatchDetectSentimentOutcomeCallable;
        typedef std::future<BatchDetectSyntaxOutcome> BatchDetectSyntaxOutcomeCallable;
        typedef std::future<CreateDocumentClassifierOutcome> CreateDocumentClassifierOutcomeCallable;
        typedef std::future<CreateEntityRecognizerOutcome> CreateEntityRecognizerOutcomeCallable;
        typedef std::future<DeleteDocumentClassifierOutcome> DeleteDocumentClassifierOutcomeCallable;
        typedef std::future<DeleteEntityRecognizerOutcome> DeleteEntityRecognizerOutcomeCallable;
        typedef std::future<DescribeDocumentClassificationJobOutcome> DescribeDocumentClassificationJobOutcomeCallable;
        typedef std::future<DescribeDocumentClassifierOutcome> DescribeDocumentClassifierOutcomeCallable;
        typedef std::future<DescribeDominantLanguageDetectionJobOutcome> DescribeDominantLanguageDetectionJobOutcomeCallable;
        typedef std::future<DescribeEntitiesDetectionJobOutcome> DescribeEntitiesDetectionJobOutcomeCallable;
        typedef std::future<DescribeEntityRecognizerOutcome> DescribeEntityRecognizerOutcomeCallable;
        typedef std::future<DescribeKeyPhrasesDetectionJobOutcome> DescribeKeyPhrasesDetectionJobOutcomeCallable;
        typedef std::future<DescribeSentimentDetectionJobOutcome> DescribeSentimentDetectionJobOutcomeCallable;
        typedef std::future<DescribeTopicsDetectionJobOutcome> DescribeTopicsDetectionJobOutcomeCallable;
        typedef std::future<DetectDominantLanguageOutcome> DetectDominantLanguageOutcomeCallable;
        typedef std::future<DetectEntitiesOutcome> DetectEntitiesOutcomeCallable;
        typedef std::future<DetectKeyPhrasesOutcome> DetectKeyPhrasesOutcomeCallable;
        typedef std::future<DetectSentimentOutcome> DetectSentimentOutcomeCallable;
        typedef std::future<DetectSyntaxOutcome> DetectSyntaxOutcomeCallable;
        typedef std::future<ListDocumentClassificationJobsOutcome> ListDocumentClassificationJobsOutcomeCallable;
        typedef std::future<ListDocumentClassifiersOutcome> ListDocumentClassifiersOutcomeCallable;
        typedef std::future<ListDominantLanguageDetectionJobsOutcome> ListDominantLanguageDetectionJobsOutcomeCallable;
        typedef std::future<ListEntitiesDetectionJobsOutcome> ListEntitiesDetectionJobsOutcomeCallable;
        typedef std::future<ListEntityRecognizersOutcome> ListEntityRecognizersOutcomeCallable;
        typedef std::future<ListKeyPhrasesDetectionJobsOutcome> ListKeyPhrasesDetectionJobsOutcomeCallable;
        typedef std::future<ListSentimentDetectionJobsOutcome> ListSentimentDetectionJobsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTopicsDetectionJobsOutcome> ListTopicsDetectionJobsOutcomeCallable;
        typedef std::future<StartDocumentClassificationJobOutcome> StartDocumentClassificationJobOutcomeCallable;
        typedef std::future<StartDominantLanguageDetectionJobOutcome> StartDominantLanguageDetectionJobOutcomeCallable;
        typedef std::future<StartEntitiesDetectionJobOutcome> StartEntitiesDetectionJobOutcomeCallable;
        typedef std::future<StartKeyPhrasesDetectionJobOutcome> StartKeyPhrasesDetectionJobOutcomeCallable;
        typedef std::future<StartSentimentDetectionJobOutcome> StartSentimentDetectionJobOutcomeCallable;
        typedef std::future<StartTopicsDetectionJobOutcome> StartTopicsDetectionJobOutcomeCallable;
        typedef std::future<StopDominantLanguageDetectionJobOutcome> StopDominantLanguageDetectionJobOutcomeCallable;
        typedef std::future<StopEntitiesDetectionJobOutcome> StopEntitiesDetectionJobOutcomeCallable;
        typedef std::future<StopKeyPhrasesDetectionJobOutcome> StopKeyPhrasesDetectionJobOutcomeCallable;
        typedef std::future<StopSentimentDetectionJobOutcome> StopSentimentDetectionJobOutcomeCallable;
        typedef std::future<StopTrainingDocumentClassifierOutcome> StopTrainingDocumentClassifierOutcomeCallable;
        typedef std::future<StopTrainingEntityRecognizerOutcome> StopTrainingEntityRecognizerOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class ComprehendClient;

    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectDominantLanguageRequest&, const Model::BatchDetectDominantLanguageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectDominantLanguageResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectEntitiesRequest&, const Model::BatchDetectEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectEntitiesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectKeyPhrasesRequest&, const Model::BatchDetectKeyPhrasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectKeyPhrasesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectSentimentRequest&, const Model::BatchDetectSentimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectSentimentResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectSyntaxRequest&, const Model::BatchDetectSyntaxOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectSyntaxResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::CreateDocumentClassifierRequest&, const Model::CreateDocumentClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDocumentClassifierResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::CreateEntityRecognizerRequest&, const Model::CreateEntityRecognizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEntityRecognizerResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DeleteDocumentClassifierRequest&, const Model::DeleteDocumentClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDocumentClassifierResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DeleteEntityRecognizerRequest&, const Model::DeleteEntityRecognizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEntityRecognizerResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeDocumentClassificationJobRequest&, const Model::DescribeDocumentClassificationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentClassificationJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeDocumentClassifierRequest&, const Model::DescribeDocumentClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentClassifierResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeDominantLanguageDetectionJobRequest&, const Model::DescribeDominantLanguageDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDominantLanguageDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeEntitiesDetectionJobRequest&, const Model::DescribeEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeEntityRecognizerRequest&, const Model::DescribeEntityRecognizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEntityRecognizerResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeKeyPhrasesDetectionJobRequest&, const Model::DescribeKeyPhrasesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeKeyPhrasesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeSentimentDetectionJobRequest&, const Model::DescribeSentimentDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSentimentDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeTopicsDetectionJobRequest&, const Model::DescribeTopicsDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTopicsDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectDominantLanguageRequest&, const Model::DetectDominantLanguageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectDominantLanguageResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectEntitiesRequest&, const Model::DetectEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectEntitiesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectKeyPhrasesRequest&, const Model::DetectKeyPhrasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectKeyPhrasesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectSentimentRequest&, const Model::DetectSentimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectSentimentResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectSyntaxRequest&, const Model::DetectSyntaxOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectSyntaxResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListDocumentClassificationJobsRequest&, const Model::ListDocumentClassificationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentClassificationJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListDocumentClassifiersRequest&, const Model::ListDocumentClassifiersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentClassifiersResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListDominantLanguageDetectionJobsRequest&, const Model::ListDominantLanguageDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDominantLanguageDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListEntitiesDetectionJobsRequest&, const Model::ListEntitiesDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitiesDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListEntityRecognizersRequest&, const Model::ListEntityRecognizersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntityRecognizersResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListKeyPhrasesDetectionJobsRequest&, const Model::ListKeyPhrasesDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKeyPhrasesDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListSentimentDetectionJobsRequest&, const Model::ListSentimentDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSentimentDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListTopicsDetectionJobsRequest&, const Model::ListTopicsDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTopicsDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartDocumentClassificationJobRequest&, const Model::StartDocumentClassificationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDocumentClassificationJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartDominantLanguageDetectionJobRequest&, const Model::StartDominantLanguageDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDominantLanguageDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartEntitiesDetectionJobRequest&, const Model::StartEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartKeyPhrasesDetectionJobRequest&, const Model::StartKeyPhrasesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartKeyPhrasesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartSentimentDetectionJobRequest&, const Model::StartSentimentDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSentimentDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartTopicsDetectionJobRequest&, const Model::StartTopicsDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTopicsDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopDominantLanguageDetectionJobRequest&, const Model::StopDominantLanguageDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDominantLanguageDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopEntitiesDetectionJobRequest&, const Model::StopEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopKeyPhrasesDetectionJobRequest&, const Model::StopKeyPhrasesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopKeyPhrasesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopSentimentDetectionJobRequest&, const Model::StopSentimentDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopSentimentDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopTrainingDocumentClassifierRequest&, const Model::StopTrainingDocumentClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTrainingDocumentClassifierResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopTrainingEntityRecognizerRequest&, const Model::StopTrainingEntityRecognizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTrainingEntityRecognizerResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

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

        inline virtual const char* GetServiceClientName() const override { return "Comprehend"; }


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
         * <p>Determines the dominant language of the input text for a batch of documents.
         * For a list of languages that Amazon Comprehend can detect, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
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
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
         * Comprehend Supported Languages</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectDominantLanguage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDetectDominantLanguageAsync(const Model::BatchDetectDominantLanguageRequest& request, const BatchDetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inspects the text of a batch of documents for named entities and returns
         * information about them. For more information about named entities, see
         * <a>how-entities</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDetectEntitiesOutcome BatchDetectEntities(const Model::BatchDetectEntitiesRequest& request) const;

        /**
         * <p>Inspects the text of a batch of documents for named entities and returns
         * information about them. For more information about named entities, see
         * <a>how-entities</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectEntities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDetectEntitiesOutcomeCallable BatchDetectEntitiesCallable(const Model::BatchDetectEntitiesRequest& request) const;

        /**
         * <p>Inspects the text of a batch of documents for named entities and returns
         * information about them. For more information about named entities, see
         * <a>how-entities</a> </p><p><h3>See Also:</h3>   <a
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
         * <p>Inspects the text of a batch of documents for the syntax and part of speech
         * of the words in the document and returns information about them. For more
         * information, see <a>how-syntax</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectSyntax">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDetectSyntaxOutcome BatchDetectSyntax(const Model::BatchDetectSyntaxRequest& request) const;

        /**
         * <p>Inspects the text of a batch of documents for the syntax and part of speech
         * of the words in the document and returns information about them. For more
         * information, see <a>how-syntax</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectSyntax">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDetectSyntaxOutcomeCallable BatchDetectSyntaxCallable(const Model::BatchDetectSyntaxRequest& request) const;

        /**
         * <p>Inspects the text of a batch of documents for the syntax and part of speech
         * of the words in the document and returns information about them. For more
         * information, see <a>how-syntax</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectSyntax">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDetectSyntaxAsync(const Model::BatchDetectSyntaxRequest& request, const BatchDetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new document classifier that you can use to categorize documents.
         * To create a classifier you provide a set of training documents that labeled with
         * the categories that you want to use. After the classifier is trained you can use
         * it to categorize a set of labeled documents into the categories. For more
         * information, see <a>how-document-classification</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateDocumentClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDocumentClassifierOutcome CreateDocumentClassifier(const Model::CreateDocumentClassifierRequest& request) const;

        /**
         * <p>Creates a new document classifier that you can use to categorize documents.
         * To create a classifier you provide a set of training documents that labeled with
         * the categories that you want to use. After the classifier is trained you can use
         * it to categorize a set of labeled documents into the categories. For more
         * information, see <a>how-document-classification</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateDocumentClassifier">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDocumentClassifierOutcomeCallable CreateDocumentClassifierCallable(const Model::CreateDocumentClassifierRequest& request) const;

        /**
         * <p>Creates a new document classifier that you can use to categorize documents.
         * To create a classifier you provide a set of training documents that labeled with
         * the categories that you want to use. After the classifier is trained you can use
         * it to categorize a set of labeled documents into the categories. For more
         * information, see <a>how-document-classification</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateDocumentClassifier">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDocumentClassifierAsync(const Model::CreateDocumentClassifierRequest& request, const CreateDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an entity recognizer using submitted files. After your
         * <code>CreateEntityRecognizer</code> request is submitted, you can check job
         * status using the API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateEntityRecognizer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEntityRecognizerOutcome CreateEntityRecognizer(const Model::CreateEntityRecognizerRequest& request) const;

        /**
         * <p>Creates an entity recognizer using submitted files. After your
         * <code>CreateEntityRecognizer</code> request is submitted, you can check job
         * status using the API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateEntityRecognizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEntityRecognizerOutcomeCallable CreateEntityRecognizerCallable(const Model::CreateEntityRecognizerRequest& request) const;

        /**
         * <p>Creates an entity recognizer using submitted files. After your
         * <code>CreateEntityRecognizer</code> request is submitted, you can check job
         * status using the API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateEntityRecognizer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a previously created document classifier</p> <p>Only those
         * classifiers that are in terminated states (IN_ERROR, TRAINED) will be deleted.
         * If an active inference job is using the model, a
         * <code>ResourceInUseException</code> will be returned.</p> <p>This is an
         * asynchronous action that puts the classifier into a DELETING state, and it is
         * then removed by a background job. Once removed, the classifier disappears from
         * your account and is no longer available for use. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DeleteDocumentClassifier">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDocumentClassifierOutcomeCallable DeleteDocumentClassifierCallable(const Model::DeleteDocumentClassifierRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDocumentClassifierAsync(const Model::DeleteDocumentClassifierRequest& request, const DeleteDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Deletes an entity recognizer.</p> <p>Only those recognizers that are in
         * terminated states (IN_ERROR, TRAINED) will be deleted. If an active inference
         * job is using the model, a <code>ResourceInUseException</code> will be
         * returned.</p> <p>This is an asynchronous action that puts the recognizer into a
         * DELETING state, and it is then removed by a background job. Once removed, the
         * recognizer disappears from your account and is no longer available for use.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DeleteEntityRecognizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEntityRecognizerOutcomeCallable DeleteEntityRecognizerCallable(const Model::DeleteEntityRecognizerRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEntityRecognizerAsync(const Model::DeleteEntityRecognizerRequest& request, const DeleteEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with a document classification job. Use this
         * operation to get the status of a classification job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeDocumentClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentClassificationJobOutcome DescribeDocumentClassificationJob(const Model::DescribeDocumentClassificationJobRequest& request) const;

        /**
         * <p>Gets the properties associated with a document classification job. Use this
         * operation to get the status of a classification job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeDocumentClassificationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDocumentClassificationJobOutcomeCallable DescribeDocumentClassificationJobCallable(const Model::DescribeDocumentClassificationJobRequest& request) const;

        /**
         * <p>Gets the properties associated with a document classification job. Use this
         * operation to get the status of a classification job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeDocumentClassificationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets the properties associated with a document classifier.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeDocumentClassifier">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDocumentClassifierOutcomeCallable DescribeDocumentClassifierCallable(const Model::DescribeDocumentClassifierRequest& request) const;

        /**
         * <p>Gets the properties associated with a document classifier.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeDocumentClassifier">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets the properties associated with a dominant language detection job. Use
         * this operation to get the status of a detection job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeDominantLanguageDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDominantLanguageDetectionJobOutcomeCallable DescribeDominantLanguageDetectionJobCallable(const Model::DescribeDominantLanguageDetectionJobRequest& request) const;

        /**
         * <p>Gets the properties associated with a dominant language detection job. Use
         * this operation to get the status of a detection job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeDominantLanguageDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDominantLanguageDetectionJobAsync(const Model::DescribeDominantLanguageDetectionJobRequest& request, const DescribeDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with an entities detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEntitiesDetectionJobOutcome DescribeEntitiesDetectionJob(const Model::DescribeEntitiesDetectionJobRequest& request) const;

        /**
         * <p>Gets the properties associated with an entities detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEntitiesDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEntitiesDetectionJobOutcomeCallable DescribeEntitiesDetectionJobCallable(const Model::DescribeEntitiesDetectionJobRequest& request) const;

        /**
         * <p>Gets the properties associated with an entities detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEntitiesDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Provides details about an entity recognizer including status, S3 buckets
         * containing training data, recognizer metadata, metrics, and so on.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEntityRecognizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEntityRecognizerOutcomeCallable DescribeEntityRecognizerCallable(const Model::DescribeEntityRecognizerRequest& request) const;

        /**
         * <p>Provides details about an entity recognizer including status, S3 buckets
         * containing training data, recognizer metadata, metrics, and so on.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEntityRecognizer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEntityRecognizerAsync(const Model::DescribeEntityRecognizerRequest& request, const DescribeEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with a key phrases detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeKeyPhrasesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeKeyPhrasesDetectionJobOutcome DescribeKeyPhrasesDetectionJob(const Model::DescribeKeyPhrasesDetectionJobRequest& request) const;

        /**
         * <p>Gets the properties associated with a key phrases detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeKeyPhrasesDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeKeyPhrasesDetectionJobOutcomeCallable DescribeKeyPhrasesDetectionJobCallable(const Model::DescribeKeyPhrasesDetectionJobRequest& request) const;

        /**
         * <p>Gets the properties associated with a key phrases detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeKeyPhrasesDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeKeyPhrasesDetectionJobAsync(const Model::DescribeKeyPhrasesDetectionJobRequest& request, const DescribeKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with a sentiment detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeSentimentDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSentimentDetectionJobOutcome DescribeSentimentDetectionJob(const Model::DescribeSentimentDetectionJobRequest& request) const;

        /**
         * <p>Gets the properties associated with a sentiment detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeSentimentDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSentimentDetectionJobOutcomeCallable DescribeSentimentDetectionJobCallable(const Model::DescribeSentimentDetectionJobRequest& request) const;

        /**
         * <p>Gets the properties associated with a sentiment detection job. Use this
         * operation to get the status of a detection job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeSentimentDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSentimentDetectionJobAsync(const Model::DescribeSentimentDetectionJobRequest& request, const DescribeSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
         * Comprehend Supported Languages</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectDominantLanguage">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectDominantLanguageOutcome DetectDominantLanguage(const Model::DetectDominantLanguageRequest& request) const;

        /**
         * <p>Determines the dominant language of the input text. For a list of languages
         * that Amazon Comprehend can detect, see <a
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
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
         * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
         * Comprehend Supported Languages</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectDominantLanguage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectDominantLanguageAsync(const Model::DetectDominantLanguageRequest& request, const DetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inspects text for named entities, and returns information about them. For
         * more information, about named entities, see <a>how-entities</a>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectEntitiesOutcome DetectEntities(const Model::DetectEntitiesRequest& request) const;

        /**
         * <p>Inspects text for named entities, and returns information about them. For
         * more information, about named entities, see <a>how-entities</a>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectEntities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectEntitiesOutcomeCallable DetectEntitiesCallable(const Model::DetectEntitiesRequest& request) const;

        /**
         * <p>Inspects text for named entities, and returns information about them. For
         * more information, about named entities, see <a>how-entities</a>. </p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Inspects text for syntax and the part of speech of words in the document. For
         * more information, <a>how-syntax</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectSyntax">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectSyntaxOutcome DetectSyntax(const Model::DetectSyntaxRequest& request) const;

        /**
         * <p>Inspects text for syntax and the part of speech of words in the document. For
         * more information, <a>how-syntax</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectSyntax">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectSyntaxOutcomeCallable DetectSyntaxCallable(const Model::DetectSyntaxRequest& request) const;

        /**
         * <p>Inspects text for syntax and the part of speech of words in the document. For
         * more information, <a>how-syntax</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectSyntax">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectSyntaxAsync(const Model::DetectSyntaxRequest& request, const DetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the documentation classification jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDocumentClassificationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentClassificationJobsOutcome ListDocumentClassificationJobs(const Model::ListDocumentClassificationJobsRequest& request) const;

        /**
         * <p>Gets a list of the documentation classification jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDocumentClassificationJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDocumentClassificationJobsOutcomeCallable ListDocumentClassificationJobsCallable(const Model::ListDocumentClassificationJobsRequest& request) const;

        /**
         * <p>Gets a list of the documentation classification jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDocumentClassificationJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDocumentClassificationJobsAsync(const Model::ListDocumentClassificationJobsRequest& request, const ListDocumentClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the document classifiers that you have created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDocumentClassifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentClassifiersOutcome ListDocumentClassifiers(const Model::ListDocumentClassifiersRequest& request) const;

        /**
         * <p>Gets a list of the document classifiers that you have created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDocumentClassifiers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDocumentClassifiersOutcomeCallable ListDocumentClassifiersCallable(const Model::ListDocumentClassifiersRequest& request) const;

        /**
         * <p>Gets a list of the document classifiers that you have created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDocumentClassifiers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets a list of the dominant language detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDominantLanguageDetectionJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDominantLanguageDetectionJobsOutcomeCallable ListDominantLanguageDetectionJobsCallable(const Model::ListDominantLanguageDetectionJobsRequest& request) const;

        /**
         * <p>Gets a list of the dominant language detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListDominantLanguageDetectionJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDominantLanguageDetectionJobsAsync(const Model::ListDominantLanguageDetectionJobsRequest& request, const ListDominantLanguageDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEntitiesDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitiesDetectionJobsOutcome ListEntitiesDetectionJobs(const Model::ListEntitiesDetectionJobsRequest& request) const;

        /**
         * <p>Gets a list of the entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEntitiesDetectionJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntitiesDetectionJobsOutcomeCallable ListEntitiesDetectionJobsCallable(const Model::ListEntitiesDetectionJobsRequest& request) const;

        /**
         * <p>Gets a list of the entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEntitiesDetectionJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEntitiesDetectionJobsAsync(const Model::ListEntitiesDetectionJobsRequest& request, const ListEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Gets a list of the properties of all entity recognizers that you created,
         * including recognizers currently in training. Allows you to filter the list of
         * recognizers based on criteria such as status and submission time. This call
         * returns up to 500 entity recognizers in the list, with a default number of 100
         * recognizers in the list.</p> <p>The results of this list are not in any
         * particular order. Please get the list and sort locally if needed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEntityRecognizers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntityRecognizersOutcomeCallable ListEntityRecognizersCallable(const Model::ListEntityRecognizersRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEntityRecognizersAsync(const Model::ListEntityRecognizersRequest& request, const ListEntityRecognizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a list of key phrase detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListKeyPhrasesDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKeyPhrasesDetectionJobsOutcome ListKeyPhrasesDetectionJobs(const Model::ListKeyPhrasesDetectionJobsRequest& request) const;

        /**
         * <p>Get a list of key phrase detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListKeyPhrasesDetectionJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListKeyPhrasesDetectionJobsOutcomeCallable ListKeyPhrasesDetectionJobsCallable(const Model::ListKeyPhrasesDetectionJobsRequest& request) const;

        /**
         * <p>Get a list of key phrase detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListKeyPhrasesDetectionJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListKeyPhrasesDetectionJobsAsync(const Model::ListKeyPhrasesDetectionJobsRequest& request, const ListKeyPhrasesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of sentiment detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListSentimentDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSentimentDetectionJobsOutcome ListSentimentDetectionJobs(const Model::ListSentimentDetectionJobsRequest& request) const;

        /**
         * <p>Gets a list of sentiment detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListSentimentDetectionJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSentimentDetectionJobsOutcomeCallable ListSentimentDetectionJobsCallable(const Model::ListSentimentDetectionJobsRequest& request) const;

        /**
         * <p>Gets a list of sentiment detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListSentimentDetectionJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all tags associated with a given Amazon Comprehend resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags associated with a given Amazon Comprehend resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Starts an asynchronous document classification job. Use the operation to
         * track the progress of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartDocumentClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDocumentClassificationJobOutcome StartDocumentClassificationJob(const Model::StartDocumentClassificationJobRequest& request) const;

        /**
         * <p>Starts an asynchronous document classification job. Use the operation to
         * track the progress of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartDocumentClassificationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDocumentClassificationJobOutcomeCallable StartDocumentClassificationJobCallable(const Model::StartDocumentClassificationJobRequest& request) const;

        /**
         * <p>Starts an asynchronous document classification job. Use the operation to
         * track the progress of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartDocumentClassificationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Starts an asynchronous dominant language detection job for a collection of
         * documents. Use the operation to track the status of a job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartDominantLanguageDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDominantLanguageDetectionJobOutcomeCallable StartDominantLanguageDetectionJobCallable(const Model::StartDominantLanguageDetectionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous dominant language detection job for a collection of
         * documents. Use the operation to track the status of a job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartDominantLanguageDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Starts an asynchronous entity detection job for a collection of documents.
         * Use the operation to track the status of a job.</p> <p>This API can be used for
         * either standard entity detection or custom entity recognition. In order to be
         * used for custom entity recognition, the optional
         * <code>EntityRecognizerArn</code> must be used in order to provide access to the
         * recognizer being used to detect the custom entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartEntitiesDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartEntitiesDetectionJobOutcomeCallable StartEntitiesDetectionJobCallable(const Model::StartEntitiesDetectionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous entity detection job for a collection of documents.
         * Use the operation to track the status of a job.</p> <p>This API can be used for
         * either standard entity detection or custom entity recognition. In order to be
         * used for custom entity recognition, the optional
         * <code>EntityRecognizerArn</code> must be used in order to provide access to the
         * recognizer being used to detect the custom entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartEntitiesDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartEntitiesDetectionJobAsync(const Model::StartEntitiesDetectionJobRequest& request, const StartEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous key phrase detection job for a collection of
         * documents. Use the operation to track the status of a job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartKeyPhrasesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartKeyPhrasesDetectionJobOutcome StartKeyPhrasesDetectionJob(const Model::StartKeyPhrasesDetectionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous key phrase detection job for a collection of
         * documents. Use the operation to track the status of a job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartKeyPhrasesDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartKeyPhrasesDetectionJobOutcomeCallable StartKeyPhrasesDetectionJobCallable(const Model::StartKeyPhrasesDetectionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous key phrase detection job for a collection of
         * documents. Use the operation to track the status of a job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartKeyPhrasesDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartKeyPhrasesDetectionJobAsync(const Model::StartKeyPhrasesDetectionJobRequest& request, const StartKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous sentiment detection job for a collection of documents.
         * use the operation to track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartSentimentDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSentimentDetectionJobOutcome StartSentimentDetectionJob(const Model::StartSentimentDetectionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous sentiment detection job for a collection of documents.
         * use the operation to track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartSentimentDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSentimentDetectionJobOutcomeCallable StartSentimentDetectionJobCallable(const Model::StartSentimentDetectionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous sentiment detection job for a collection of documents.
         * use the operation to track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartSentimentDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSentimentDetectionJobAsync(const Model::StartSentimentDetectionJobRequest& request, const StartSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDominantLanguageDetectionJobOutcomeCallable StopDominantLanguageDetectionJobCallable(const Model::StopDominantLanguageDetectionJobRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopEntitiesDetectionJobOutcomeCallable StopEntitiesDetectionJobCallable(const Model::StopEntitiesDetectionJobRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopEntitiesDetectionJobAsync(const Model::StopEntitiesDetectionJobRequest& request, const StopEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopKeyPhrasesDetectionJobOutcomeCallable StopKeyPhrasesDetectionJobCallable(const Model::StopKeyPhrasesDetectionJobRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopKeyPhrasesDetectionJobAsync(const Model::StopKeyPhrasesDetectionJobRequest& request, const StopKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a sentiment detection job in progress.</p> <p>If the job state is
         * <code>IN_PROGRESS</code> the job is marked for termination and put into the
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
         * <p>Stops a sentiment detection job in progress.</p> <p>If the job state is
         * <code>IN_PROGRESS</code> the job is marked for termination and put into the
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopSentimentDetectionJobOutcomeCallable StopSentimentDetectionJobCallable(const Model::StopSentimentDetectionJobRequest& request) const;

        /**
         * <p>Stops a sentiment detection job in progress.</p> <p>If the job state is
         * <code>IN_PROGRESS</code> the job is marked for termination and put into the
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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopSentimentDetectionJobAsync(const Model::StopSentimentDetectionJobRequest& request, const StopSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Stops a document classifier training job while in progress.</p> <p>If the
         * training job state is <code>TRAINING</code>, the job is marked for termination
         * and put into the <code>STOP_REQUESTED</code> state. If the training job
         * completes before it can be stopped, it is put into the <code>TRAINED</code>;
         * otherwise the training job is stopped and put into the <code>STOPPED</code>
         * state and the service sends back an HTTP 200 response with an empty HTTP body.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopTrainingDocumentClassifier">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTrainingDocumentClassifierOutcomeCallable StopTrainingDocumentClassifierCallable(const Model::StopTrainingDocumentClassifierRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Stops an entity recognizer training job while in progress.</p> <p>If the
         * training job state is <code>TRAINING</code>, the job is marked for termination
         * and put into the <code>STOP_REQUESTED</code> state. If the training job
         * completes before it can be stopped, it is put into the <code>TRAINED</code>;
         * otherwise the training job is stopped and putted into the <code>STOPPED</code>
         * state and the service sends back an HTTP 200 response with an empty HTTP
         * body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopTrainingEntityRecognizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTrainingEntityRecognizerOutcomeCallable StopTrainingEntityRecognizerCallable(const Model::StopTrainingEntityRecognizerRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Associates a specific tag with an Amazon Comprehend resource. A tag is a
         * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
         * For example, a tag with "Sales" as the key might be added to a resource to
         * indicate its use by the sales department. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates a specific tag with an Amazon Comprehend resource. A tag is a
         * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
         * For example, a tag with "Sales" as the key might be added to a resource to
         * indicate its use by the sales department. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes a specific tag associated with an Amazon Comprehend resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a specific tag associated with an Amazon Comprehend resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchDetectDominantLanguageAsyncHelper(const Model::BatchDetectDominantLanguageRequest& request, const BatchDetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDetectEntitiesAsyncHelper(const Model::BatchDetectEntitiesRequest& request, const BatchDetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDetectKeyPhrasesAsyncHelper(const Model::BatchDetectKeyPhrasesRequest& request, const BatchDetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDetectSentimentAsyncHelper(const Model::BatchDetectSentimentRequest& request, const BatchDetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDetectSyntaxAsyncHelper(const Model::BatchDetectSyntaxRequest& request, const BatchDetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDocumentClassifierAsyncHelper(const Model::CreateDocumentClassifierRequest& request, const CreateDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEntityRecognizerAsyncHelper(const Model::CreateEntityRecognizerRequest& request, const CreateEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDocumentClassifierAsyncHelper(const Model::DeleteDocumentClassifierRequest& request, const DeleteDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEntityRecognizerAsyncHelper(const Model::DeleteEntityRecognizerRequest& request, const DeleteEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDocumentClassificationJobAsyncHelper(const Model::DescribeDocumentClassificationJobRequest& request, const DescribeDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDocumentClassifierAsyncHelper(const Model::DescribeDocumentClassifierRequest& request, const DescribeDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDominantLanguageDetectionJobAsyncHelper(const Model::DescribeDominantLanguageDetectionJobRequest& request, const DescribeDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEntitiesDetectionJobAsyncHelper(const Model::DescribeEntitiesDetectionJobRequest& request, const DescribeEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEntityRecognizerAsyncHelper(const Model::DescribeEntityRecognizerRequest& request, const DescribeEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeKeyPhrasesDetectionJobAsyncHelper(const Model::DescribeKeyPhrasesDetectionJobRequest& request, const DescribeKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSentimentDetectionJobAsyncHelper(const Model::DescribeSentimentDetectionJobRequest& request, const DescribeSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTopicsDetectionJobAsyncHelper(const Model::DescribeTopicsDetectionJobRequest& request, const DescribeTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectDominantLanguageAsyncHelper(const Model::DetectDominantLanguageRequest& request, const DetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectEntitiesAsyncHelper(const Model::DetectEntitiesRequest& request, const DetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectKeyPhrasesAsyncHelper(const Model::DetectKeyPhrasesRequest& request, const DetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectSentimentAsyncHelper(const Model::DetectSentimentRequest& request, const DetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectSyntaxAsyncHelper(const Model::DetectSyntaxRequest& request, const DetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDocumentClassificationJobsAsyncHelper(const Model::ListDocumentClassificationJobsRequest& request, const ListDocumentClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDocumentClassifiersAsyncHelper(const Model::ListDocumentClassifiersRequest& request, const ListDocumentClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDominantLanguageDetectionJobsAsyncHelper(const Model::ListDominantLanguageDetectionJobsRequest& request, const ListDominantLanguageDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEntitiesDetectionJobsAsyncHelper(const Model::ListEntitiesDetectionJobsRequest& request, const ListEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEntityRecognizersAsyncHelper(const Model::ListEntityRecognizersRequest& request, const ListEntityRecognizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListKeyPhrasesDetectionJobsAsyncHelper(const Model::ListKeyPhrasesDetectionJobsRequest& request, const ListKeyPhrasesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSentimentDetectionJobsAsyncHelper(const Model::ListSentimentDetectionJobsRequest& request, const ListSentimentDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTopicsDetectionJobsAsyncHelper(const Model::ListTopicsDetectionJobsRequest& request, const ListTopicsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDocumentClassificationJobAsyncHelper(const Model::StartDocumentClassificationJobRequest& request, const StartDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDominantLanguageDetectionJobAsyncHelper(const Model::StartDominantLanguageDetectionJobRequest& request, const StartDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartEntitiesDetectionJobAsyncHelper(const Model::StartEntitiesDetectionJobRequest& request, const StartEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartKeyPhrasesDetectionJobAsyncHelper(const Model::StartKeyPhrasesDetectionJobRequest& request, const StartKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartSentimentDetectionJobAsyncHelper(const Model::StartSentimentDetectionJobRequest& request, const StartSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTopicsDetectionJobAsyncHelper(const Model::StartTopicsDetectionJobRequest& request, const StartTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopDominantLanguageDetectionJobAsyncHelper(const Model::StopDominantLanguageDetectionJobRequest& request, const StopDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopEntitiesDetectionJobAsyncHelper(const Model::StopEntitiesDetectionJobRequest& request, const StopEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopKeyPhrasesDetectionJobAsyncHelper(const Model::StopKeyPhrasesDetectionJobRequest& request, const StopKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopSentimentDetectionJobAsyncHelper(const Model::StopSentimentDetectionJobRequest& request, const StopSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTrainingDocumentClassifierAsyncHelper(const Model::StopTrainingDocumentClassifierRequest& request, const StopTrainingDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTrainingEntityRecognizerAsyncHelper(const Model::StopTrainingEntityRecognizerRequest& request, const StopTrainingEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Comprehend
} // namespace Aws
