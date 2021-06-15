/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/comprehend/model/ClassifyDocumentResult.h>
#include <aws/comprehend/model/ContainsPiiEntitiesResult.h>
#include <aws/comprehend/model/CreateDocumentClassifierResult.h>
#include <aws/comprehend/model/CreateEndpointResult.h>
#include <aws/comprehend/model/CreateEntityRecognizerResult.h>
#include <aws/comprehend/model/DeleteDocumentClassifierResult.h>
#include <aws/comprehend/model/DeleteEndpointResult.h>
#include <aws/comprehend/model/DeleteEntityRecognizerResult.h>
#include <aws/comprehend/model/DescribeDocumentClassificationJobResult.h>
#include <aws/comprehend/model/DescribeDocumentClassifierResult.h>
#include <aws/comprehend/model/DescribeDominantLanguageDetectionJobResult.h>
#include <aws/comprehend/model/DescribeEndpointResult.h>
#include <aws/comprehend/model/DescribeEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/DescribeEntityRecognizerResult.h>
#include <aws/comprehend/model/DescribeEventsDetectionJobResult.h>
#include <aws/comprehend/model/DescribeKeyPhrasesDetectionJobResult.h>
#include <aws/comprehend/model/DescribePiiEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/DescribeSentimentDetectionJobResult.h>
#include <aws/comprehend/model/DescribeTopicsDetectionJobResult.h>
#include <aws/comprehend/model/DetectDominantLanguageResult.h>
#include <aws/comprehend/model/DetectEntitiesResult.h>
#include <aws/comprehend/model/DetectKeyPhrasesResult.h>
#include <aws/comprehend/model/DetectPiiEntitiesResult.h>
#include <aws/comprehend/model/DetectSentimentResult.h>
#include <aws/comprehend/model/DetectSyntaxResult.h>
#include <aws/comprehend/model/ListDocumentClassificationJobsResult.h>
#include <aws/comprehend/model/ListDocumentClassifiersResult.h>
#include <aws/comprehend/model/ListDominantLanguageDetectionJobsResult.h>
#include <aws/comprehend/model/ListEndpointsResult.h>
#include <aws/comprehend/model/ListEntitiesDetectionJobsResult.h>
#include <aws/comprehend/model/ListEntityRecognizersResult.h>
#include <aws/comprehend/model/ListEventsDetectionJobsResult.h>
#include <aws/comprehend/model/ListKeyPhrasesDetectionJobsResult.h>
#include <aws/comprehend/model/ListPiiEntitiesDetectionJobsResult.h>
#include <aws/comprehend/model/ListSentimentDetectionJobsResult.h>
#include <aws/comprehend/model/ListTagsForResourceResult.h>
#include <aws/comprehend/model/ListTopicsDetectionJobsResult.h>
#include <aws/comprehend/model/StartDocumentClassificationJobResult.h>
#include <aws/comprehend/model/StartDominantLanguageDetectionJobResult.h>
#include <aws/comprehend/model/StartEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/StartEventsDetectionJobResult.h>
#include <aws/comprehend/model/StartKeyPhrasesDetectionJobResult.h>
#include <aws/comprehend/model/StartPiiEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/StartSentimentDetectionJobResult.h>
#include <aws/comprehend/model/StartTopicsDetectionJobResult.h>
#include <aws/comprehend/model/StopDominantLanguageDetectionJobResult.h>
#include <aws/comprehend/model/StopEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/StopEventsDetectionJobResult.h>
#include <aws/comprehend/model/StopKeyPhrasesDetectionJobResult.h>
#include <aws/comprehend/model/StopPiiEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/StopSentimentDetectionJobResult.h>
#include <aws/comprehend/model/StopTrainingDocumentClassifierResult.h>
#include <aws/comprehend/model/StopTrainingEntityRecognizerResult.h>
#include <aws/comprehend/model/TagResourceResult.h>
#include <aws/comprehend/model/UntagResourceResult.h>
#include <aws/comprehend/model/UpdateEndpointResult.h>
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
        class ClassifyDocumentRequest;
        class ContainsPiiEntitiesRequest;
        class CreateDocumentClassifierRequest;
        class CreateEndpointRequest;
        class CreateEntityRecognizerRequest;
        class DeleteDocumentClassifierRequest;
        class DeleteEndpointRequest;
        class DeleteEntityRecognizerRequest;
        class DescribeDocumentClassificationJobRequest;
        class DescribeDocumentClassifierRequest;
        class DescribeDominantLanguageDetectionJobRequest;
        class DescribeEndpointRequest;
        class DescribeEntitiesDetectionJobRequest;
        class DescribeEntityRecognizerRequest;
        class DescribeEventsDetectionJobRequest;
        class DescribeKeyPhrasesDetectionJobRequest;
        class DescribePiiEntitiesDetectionJobRequest;
        class DescribeSentimentDetectionJobRequest;
        class DescribeTopicsDetectionJobRequest;
        class DetectDominantLanguageRequest;
        class DetectEntitiesRequest;
        class DetectKeyPhrasesRequest;
        class DetectPiiEntitiesRequest;
        class DetectSentimentRequest;
        class DetectSyntaxRequest;
        class ListDocumentClassificationJobsRequest;
        class ListDocumentClassifiersRequest;
        class ListDominantLanguageDetectionJobsRequest;
        class ListEndpointsRequest;
        class ListEntitiesDetectionJobsRequest;
        class ListEntityRecognizersRequest;
        class ListEventsDetectionJobsRequest;
        class ListKeyPhrasesDetectionJobsRequest;
        class ListPiiEntitiesDetectionJobsRequest;
        class ListSentimentDetectionJobsRequest;
        class ListTagsForResourceRequest;
        class ListTopicsDetectionJobsRequest;
        class StartDocumentClassificationJobRequest;
        class StartDominantLanguageDetectionJobRequest;
        class StartEntitiesDetectionJobRequest;
        class StartEventsDetectionJobRequest;
        class StartKeyPhrasesDetectionJobRequest;
        class StartPiiEntitiesDetectionJobRequest;
        class StartSentimentDetectionJobRequest;
        class StartTopicsDetectionJobRequest;
        class StopDominantLanguageDetectionJobRequest;
        class StopEntitiesDetectionJobRequest;
        class StopEventsDetectionJobRequest;
        class StopKeyPhrasesDetectionJobRequest;
        class StopPiiEntitiesDetectionJobRequest;
        class StopSentimentDetectionJobRequest;
        class StopTrainingDocumentClassifierRequest;
        class StopTrainingEntityRecognizerRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateEndpointRequest;

        typedef Aws::Utils::Outcome<BatchDetectDominantLanguageResult, ComprehendError> BatchDetectDominantLanguageOutcome;
        typedef Aws::Utils::Outcome<BatchDetectEntitiesResult, ComprehendError> BatchDetectEntitiesOutcome;
        typedef Aws::Utils::Outcome<BatchDetectKeyPhrasesResult, ComprehendError> BatchDetectKeyPhrasesOutcome;
        typedef Aws::Utils::Outcome<BatchDetectSentimentResult, ComprehendError> BatchDetectSentimentOutcome;
        typedef Aws::Utils::Outcome<BatchDetectSyntaxResult, ComprehendError> BatchDetectSyntaxOutcome;
        typedef Aws::Utils::Outcome<ClassifyDocumentResult, ComprehendError> ClassifyDocumentOutcome;
        typedef Aws::Utils::Outcome<ContainsPiiEntitiesResult, ComprehendError> ContainsPiiEntitiesOutcome;
        typedef Aws::Utils::Outcome<CreateDocumentClassifierResult, ComprehendError> CreateDocumentClassifierOutcome;
        typedef Aws::Utils::Outcome<CreateEndpointResult, ComprehendError> CreateEndpointOutcome;
        typedef Aws::Utils::Outcome<CreateEntityRecognizerResult, ComprehendError> CreateEntityRecognizerOutcome;
        typedef Aws::Utils::Outcome<DeleteDocumentClassifierResult, ComprehendError> DeleteDocumentClassifierOutcome;
        typedef Aws::Utils::Outcome<DeleteEndpointResult, ComprehendError> DeleteEndpointOutcome;
        typedef Aws::Utils::Outcome<DeleteEntityRecognizerResult, ComprehendError> DeleteEntityRecognizerOutcome;
        typedef Aws::Utils::Outcome<DescribeDocumentClassificationJobResult, ComprehendError> DescribeDocumentClassificationJobOutcome;
        typedef Aws::Utils::Outcome<DescribeDocumentClassifierResult, ComprehendError> DescribeDocumentClassifierOutcome;
        typedef Aws::Utils::Outcome<DescribeDominantLanguageDetectionJobResult, ComprehendError> DescribeDominantLanguageDetectionJobOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointResult, ComprehendError> DescribeEndpointOutcome;
        typedef Aws::Utils::Outcome<DescribeEntitiesDetectionJobResult, ComprehendError> DescribeEntitiesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<DescribeEntityRecognizerResult, ComprehendError> DescribeEntityRecognizerOutcome;
        typedef Aws::Utils::Outcome<DescribeEventsDetectionJobResult, ComprehendError> DescribeEventsDetectionJobOutcome;
        typedef Aws::Utils::Outcome<DescribeKeyPhrasesDetectionJobResult, ComprehendError> DescribeKeyPhrasesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<DescribePiiEntitiesDetectionJobResult, ComprehendError> DescribePiiEntitiesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<DescribeSentimentDetectionJobResult, ComprehendError> DescribeSentimentDetectionJobOutcome;
        typedef Aws::Utils::Outcome<DescribeTopicsDetectionJobResult, ComprehendError> DescribeTopicsDetectionJobOutcome;
        typedef Aws::Utils::Outcome<DetectDominantLanguageResult, ComprehendError> DetectDominantLanguageOutcome;
        typedef Aws::Utils::Outcome<DetectEntitiesResult, ComprehendError> DetectEntitiesOutcome;
        typedef Aws::Utils::Outcome<DetectKeyPhrasesResult, ComprehendError> DetectKeyPhrasesOutcome;
        typedef Aws::Utils::Outcome<DetectPiiEntitiesResult, ComprehendError> DetectPiiEntitiesOutcome;
        typedef Aws::Utils::Outcome<DetectSentimentResult, ComprehendError> DetectSentimentOutcome;
        typedef Aws::Utils::Outcome<DetectSyntaxResult, ComprehendError> DetectSyntaxOutcome;
        typedef Aws::Utils::Outcome<ListDocumentClassificationJobsResult, ComprehendError> ListDocumentClassificationJobsOutcome;
        typedef Aws::Utils::Outcome<ListDocumentClassifiersResult, ComprehendError> ListDocumentClassifiersOutcome;
        typedef Aws::Utils::Outcome<ListDominantLanguageDetectionJobsResult, ComprehendError> ListDominantLanguageDetectionJobsOutcome;
        typedef Aws::Utils::Outcome<ListEndpointsResult, ComprehendError> ListEndpointsOutcome;
        typedef Aws::Utils::Outcome<ListEntitiesDetectionJobsResult, ComprehendError> ListEntitiesDetectionJobsOutcome;
        typedef Aws::Utils::Outcome<ListEntityRecognizersResult, ComprehendError> ListEntityRecognizersOutcome;
        typedef Aws::Utils::Outcome<ListEventsDetectionJobsResult, ComprehendError> ListEventsDetectionJobsOutcome;
        typedef Aws::Utils::Outcome<ListKeyPhrasesDetectionJobsResult, ComprehendError> ListKeyPhrasesDetectionJobsOutcome;
        typedef Aws::Utils::Outcome<ListPiiEntitiesDetectionJobsResult, ComprehendError> ListPiiEntitiesDetectionJobsOutcome;
        typedef Aws::Utils::Outcome<ListSentimentDetectionJobsResult, ComprehendError> ListSentimentDetectionJobsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ComprehendError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTopicsDetectionJobsResult, ComprehendError> ListTopicsDetectionJobsOutcome;
        typedef Aws::Utils::Outcome<StartDocumentClassificationJobResult, ComprehendError> StartDocumentClassificationJobOutcome;
        typedef Aws::Utils::Outcome<StartDominantLanguageDetectionJobResult, ComprehendError> StartDominantLanguageDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StartEntitiesDetectionJobResult, ComprehendError> StartEntitiesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StartEventsDetectionJobResult, ComprehendError> StartEventsDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StartKeyPhrasesDetectionJobResult, ComprehendError> StartKeyPhrasesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StartPiiEntitiesDetectionJobResult, ComprehendError> StartPiiEntitiesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StartSentimentDetectionJobResult, ComprehendError> StartSentimentDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StartTopicsDetectionJobResult, ComprehendError> StartTopicsDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StopDominantLanguageDetectionJobResult, ComprehendError> StopDominantLanguageDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StopEntitiesDetectionJobResult, ComprehendError> StopEntitiesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StopEventsDetectionJobResult, ComprehendError> StopEventsDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StopKeyPhrasesDetectionJobResult, ComprehendError> StopKeyPhrasesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StopPiiEntitiesDetectionJobResult, ComprehendError> StopPiiEntitiesDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StopSentimentDetectionJobResult, ComprehendError> StopSentimentDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StopTrainingDocumentClassifierResult, ComprehendError> StopTrainingDocumentClassifierOutcome;
        typedef Aws::Utils::Outcome<StopTrainingEntityRecognizerResult, ComprehendError> StopTrainingEntityRecognizerOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, ComprehendError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, ComprehendError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateEndpointResult, ComprehendError> UpdateEndpointOutcome;

        typedef std::future<BatchDetectDominantLanguageOutcome> BatchDetectDominantLanguageOutcomeCallable;
        typedef std::future<BatchDetectEntitiesOutcome> BatchDetectEntitiesOutcomeCallable;
        typedef std::future<BatchDetectKeyPhrasesOutcome> BatchDetectKeyPhrasesOutcomeCallable;
        typedef std::future<BatchDetectSentimentOutcome> BatchDetectSentimentOutcomeCallable;
        typedef std::future<BatchDetectSyntaxOutcome> BatchDetectSyntaxOutcomeCallable;
        typedef std::future<ClassifyDocumentOutcome> ClassifyDocumentOutcomeCallable;
        typedef std::future<ContainsPiiEntitiesOutcome> ContainsPiiEntitiesOutcomeCallable;
        typedef std::future<CreateDocumentClassifierOutcome> CreateDocumentClassifierOutcomeCallable;
        typedef std::future<CreateEndpointOutcome> CreateEndpointOutcomeCallable;
        typedef std::future<CreateEntityRecognizerOutcome> CreateEntityRecognizerOutcomeCallable;
        typedef std::future<DeleteDocumentClassifierOutcome> DeleteDocumentClassifierOutcomeCallable;
        typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
        typedef std::future<DeleteEntityRecognizerOutcome> DeleteEntityRecognizerOutcomeCallable;
        typedef std::future<DescribeDocumentClassificationJobOutcome> DescribeDocumentClassificationJobOutcomeCallable;
        typedef std::future<DescribeDocumentClassifierOutcome> DescribeDocumentClassifierOutcomeCallable;
        typedef std::future<DescribeDominantLanguageDetectionJobOutcome> DescribeDominantLanguageDetectionJobOutcomeCallable;
        typedef std::future<DescribeEndpointOutcome> DescribeEndpointOutcomeCallable;
        typedef std::future<DescribeEntitiesDetectionJobOutcome> DescribeEntitiesDetectionJobOutcomeCallable;
        typedef std::future<DescribeEntityRecognizerOutcome> DescribeEntityRecognizerOutcomeCallable;
        typedef std::future<DescribeEventsDetectionJobOutcome> DescribeEventsDetectionJobOutcomeCallable;
        typedef std::future<DescribeKeyPhrasesDetectionJobOutcome> DescribeKeyPhrasesDetectionJobOutcomeCallable;
        typedef std::future<DescribePiiEntitiesDetectionJobOutcome> DescribePiiEntitiesDetectionJobOutcomeCallable;
        typedef std::future<DescribeSentimentDetectionJobOutcome> DescribeSentimentDetectionJobOutcomeCallable;
        typedef std::future<DescribeTopicsDetectionJobOutcome> DescribeTopicsDetectionJobOutcomeCallable;
        typedef std::future<DetectDominantLanguageOutcome> DetectDominantLanguageOutcomeCallable;
        typedef std::future<DetectEntitiesOutcome> DetectEntitiesOutcomeCallable;
        typedef std::future<DetectKeyPhrasesOutcome> DetectKeyPhrasesOutcomeCallable;
        typedef std::future<DetectPiiEntitiesOutcome> DetectPiiEntitiesOutcomeCallable;
        typedef std::future<DetectSentimentOutcome> DetectSentimentOutcomeCallable;
        typedef std::future<DetectSyntaxOutcome> DetectSyntaxOutcomeCallable;
        typedef std::future<ListDocumentClassificationJobsOutcome> ListDocumentClassificationJobsOutcomeCallable;
        typedef std::future<ListDocumentClassifiersOutcome> ListDocumentClassifiersOutcomeCallable;
        typedef std::future<ListDominantLanguageDetectionJobsOutcome> ListDominantLanguageDetectionJobsOutcomeCallable;
        typedef std::future<ListEndpointsOutcome> ListEndpointsOutcomeCallable;
        typedef std::future<ListEntitiesDetectionJobsOutcome> ListEntitiesDetectionJobsOutcomeCallable;
        typedef std::future<ListEntityRecognizersOutcome> ListEntityRecognizersOutcomeCallable;
        typedef std::future<ListEventsDetectionJobsOutcome> ListEventsDetectionJobsOutcomeCallable;
        typedef std::future<ListKeyPhrasesDetectionJobsOutcome> ListKeyPhrasesDetectionJobsOutcomeCallable;
        typedef std::future<ListPiiEntitiesDetectionJobsOutcome> ListPiiEntitiesDetectionJobsOutcomeCallable;
        typedef std::future<ListSentimentDetectionJobsOutcome> ListSentimentDetectionJobsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTopicsDetectionJobsOutcome> ListTopicsDetectionJobsOutcomeCallable;
        typedef std::future<StartDocumentClassificationJobOutcome> StartDocumentClassificationJobOutcomeCallable;
        typedef std::future<StartDominantLanguageDetectionJobOutcome> StartDominantLanguageDetectionJobOutcomeCallable;
        typedef std::future<StartEntitiesDetectionJobOutcome> StartEntitiesDetectionJobOutcomeCallable;
        typedef std::future<StartEventsDetectionJobOutcome> StartEventsDetectionJobOutcomeCallable;
        typedef std::future<StartKeyPhrasesDetectionJobOutcome> StartKeyPhrasesDetectionJobOutcomeCallable;
        typedef std::future<StartPiiEntitiesDetectionJobOutcome> StartPiiEntitiesDetectionJobOutcomeCallable;
        typedef std::future<StartSentimentDetectionJobOutcome> StartSentimentDetectionJobOutcomeCallable;
        typedef std::future<StartTopicsDetectionJobOutcome> StartTopicsDetectionJobOutcomeCallable;
        typedef std::future<StopDominantLanguageDetectionJobOutcome> StopDominantLanguageDetectionJobOutcomeCallable;
        typedef std::future<StopEntitiesDetectionJobOutcome> StopEntitiesDetectionJobOutcomeCallable;
        typedef std::future<StopEventsDetectionJobOutcome> StopEventsDetectionJobOutcomeCallable;
        typedef std::future<StopKeyPhrasesDetectionJobOutcome> StopKeyPhrasesDetectionJobOutcomeCallable;
        typedef std::future<StopPiiEntitiesDetectionJobOutcome> StopPiiEntitiesDetectionJobOutcomeCallable;
        typedef std::future<StopSentimentDetectionJobOutcome> StopSentimentDetectionJobOutcomeCallable;
        typedef std::future<StopTrainingDocumentClassifierOutcome> StopTrainingDocumentClassifierOutcomeCallable;
        typedef std::future<StopTrainingEntityRecognizerOutcome> StopTrainingEntityRecognizerOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateEndpointOutcome> UpdateEndpointOutcomeCallable;
} // namespace Model

  class ComprehendClient;

    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectDominantLanguageRequest&, const Model::BatchDetectDominantLanguageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectDominantLanguageResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectEntitiesRequest&, const Model::BatchDetectEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectEntitiesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectKeyPhrasesRequest&, const Model::BatchDetectKeyPhrasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectKeyPhrasesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectSentimentRequest&, const Model::BatchDetectSentimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectSentimentResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectSyntaxRequest&, const Model::BatchDetectSyntaxOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectSyntaxResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ClassifyDocumentRequest&, const Model::ClassifyDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ClassifyDocumentResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ContainsPiiEntitiesRequest&, const Model::ContainsPiiEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ContainsPiiEntitiesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::CreateDocumentClassifierRequest&, const Model::CreateDocumentClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDocumentClassifierResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::CreateEndpointRequest&, const Model::CreateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::CreateEntityRecognizerRequest&, const Model::CreateEntityRecognizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEntityRecognizerResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DeleteDocumentClassifierRequest&, const Model::DeleteDocumentClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDocumentClassifierResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DeleteEntityRecognizerRequest&, const Model::DeleteEntityRecognizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEntityRecognizerResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeDocumentClassificationJobRequest&, const Model::DescribeDocumentClassificationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentClassificationJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeDocumentClassifierRequest&, const Model::DescribeDocumentClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentClassifierResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeDominantLanguageDetectionJobRequest&, const Model::DescribeDominantLanguageDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDominantLanguageDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeEndpointRequest&, const Model::DescribeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeEntitiesDetectionJobRequest&, const Model::DescribeEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeEntityRecognizerRequest&, const Model::DescribeEntityRecognizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEntityRecognizerResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeEventsDetectionJobRequest&, const Model::DescribeEventsDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeKeyPhrasesDetectionJobRequest&, const Model::DescribeKeyPhrasesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeKeyPhrasesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribePiiEntitiesDetectionJobRequest&, const Model::DescribePiiEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePiiEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeSentimentDetectionJobRequest&, const Model::DescribeSentimentDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSentimentDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeTopicsDetectionJobRequest&, const Model::DescribeTopicsDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTopicsDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectDominantLanguageRequest&, const Model::DetectDominantLanguageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectDominantLanguageResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectEntitiesRequest&, const Model::DetectEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectEntitiesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectKeyPhrasesRequest&, const Model::DetectKeyPhrasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectKeyPhrasesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectPiiEntitiesRequest&, const Model::DetectPiiEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectPiiEntitiesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectSentimentRequest&, const Model::DetectSentimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectSentimentResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectSyntaxRequest&, const Model::DetectSyntaxOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectSyntaxResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListDocumentClassificationJobsRequest&, const Model::ListDocumentClassificationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentClassificationJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListDocumentClassifiersRequest&, const Model::ListDocumentClassifiersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentClassifiersResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListDominantLanguageDetectionJobsRequest&, const Model::ListDominantLanguageDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDominantLanguageDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListEndpointsRequest&, const Model::ListEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListEntitiesDetectionJobsRequest&, const Model::ListEntitiesDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitiesDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListEntityRecognizersRequest&, const Model::ListEntityRecognizersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntityRecognizersResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListEventsDetectionJobsRequest&, const Model::ListEventsDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventsDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListKeyPhrasesDetectionJobsRequest&, const Model::ListKeyPhrasesDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKeyPhrasesDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListPiiEntitiesDetectionJobsRequest&, const Model::ListPiiEntitiesDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPiiEntitiesDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListSentimentDetectionJobsRequest&, const Model::ListSentimentDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSentimentDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListTopicsDetectionJobsRequest&, const Model::ListTopicsDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTopicsDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartDocumentClassificationJobRequest&, const Model::StartDocumentClassificationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDocumentClassificationJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartDominantLanguageDetectionJobRequest&, const Model::StartDominantLanguageDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDominantLanguageDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartEntitiesDetectionJobRequest&, const Model::StartEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartEventsDetectionJobRequest&, const Model::StartEventsDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEventsDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartKeyPhrasesDetectionJobRequest&, const Model::StartKeyPhrasesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartKeyPhrasesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartPiiEntitiesDetectionJobRequest&, const Model::StartPiiEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPiiEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartSentimentDetectionJobRequest&, const Model::StartSentimentDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSentimentDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartTopicsDetectionJobRequest&, const Model::StartTopicsDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTopicsDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopDominantLanguageDetectionJobRequest&, const Model::StopDominantLanguageDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDominantLanguageDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopEntitiesDetectionJobRequest&, const Model::StopEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopEventsDetectionJobRequest&, const Model::StopEventsDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopEventsDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopKeyPhrasesDetectionJobRequest&, const Model::StopKeyPhrasesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopKeyPhrasesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopPiiEntitiesDetectionJobRequest&, const Model::StopPiiEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopPiiEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopSentimentDetectionJobRequest&, const Model::StopSentimentDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopSentimentDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopTrainingDocumentClassifierRequest&, const Model::StopTrainingDocumentClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTrainingDocumentClassifierResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopTrainingEntityRecognizerRequest&, const Model::StopTrainingEntityRecognizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTrainingEntityRecognizerResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::UpdateEndpointRequest&, const Model::UpdateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointResponseReceivedHandler;

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
         * <p>Creates a new document classification request to analyze a single document in
         * real-time, using a previously created and trained custom model and an
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ClassifyDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::ClassifyDocumentOutcome ClassifyDocument(const Model::ClassifyDocumentRequest& request) const;

        /**
         * <p>Creates a new document classification request to analyze a single document in
         * real-time, using a previously created and trained custom model and an
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ClassifyDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ClassifyDocumentOutcomeCallable ClassifyDocumentCallable(const Model::ClassifyDocumentRequest& request) const;

        /**
         * <p>Creates a new document classification request to analyze a single document in
         * real-time, using a previously created and trained custom model and an
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ClassifyDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Analyzes input text for the presence of personally identifiable information
         * (PII) and returns the labels of identified PII entity types such as name,
         * address, bank account number, or phone number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ContainsPiiEntities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ContainsPiiEntitiesOutcomeCallable ContainsPiiEntitiesCallable(const Model::ContainsPiiEntitiesRequest& request) const;

        /**
         * <p>Analyzes input text for the presence of personally identifiable information
         * (PII) and returns the labels of identified PII entity types such as name,
         * address, bank account number, or phone number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ContainsPiiEntities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ContainsPiiEntitiesAsync(const Model::ContainsPiiEntitiesRequest& request, const ContainsPiiEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new document classifier that you can use to categorize documents.
         * To create a classifier, you provide a set of training documents that labeled
         * with the categories that you want to use. After the classifier is trained you
         * can use it to categorize a set of labeled documents into the categories. For
         * more information, see <a>how-document-classification</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateDocumentClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDocumentClassifierOutcome CreateDocumentClassifier(const Model::CreateDocumentClassifierRequest& request) const;

        /**
         * <p>Creates a new document classifier that you can use to categorize documents.
         * To create a classifier, you provide a set of training documents that labeled
         * with the categories that you want to use. After the classifier is trained you
         * can use it to categorize a set of labeled documents into the categories. For
         * more information, see <a>how-document-classification</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateDocumentClassifier">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDocumentClassifierOutcomeCallable CreateDocumentClassifierCallable(const Model::CreateDocumentClassifierRequest& request) const;

        /**
         * <p>Creates a new document classifier that you can use to categorize documents.
         * To create a classifier, you provide a set of training documents that labeled
         * with the categories that you want to use. After the classifier is trained you
         * can use it to categorize a set of labeled documents into the categories. For
         * more information, see <a>how-document-classification</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateDocumentClassifier">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDocumentClassifierAsync(const Model::CreateDocumentClassifierRequest& request, const CreateDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a model-specific endpoint for synchronous inference for a previously
         * trained custom model </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointOutcome CreateEndpoint(const Model::CreateEndpointRequest& request) const;

        /**
         * <p>Creates a model-specific endpoint for synchronous inference for a previously
         * trained custom model </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointOutcomeCallable CreateEndpointCallable(const Model::CreateEndpointRequest& request) const;

        /**
         * <p>Creates a model-specific endpoint for synchronous inference for a previously
         * trained custom model </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/CreateEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a model-specific endpoint for a previously-trained custom model. All
         * endpoints must be deleted in order for the model to be deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * <p>Deletes a model-specific endpoint for a previously-trained custom model. All
         * endpoints must be deleted in order for the model to be deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DeleteEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const Model::DeleteEndpointRequest& request) const;

        /**
         * <p>Deletes a model-specific endpoint for a previously-trained custom model. All
         * endpoints must be deleted in order for the model to be deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DeleteEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets the properties associated with a specific endpoint. Use this operation
         * to get the status of an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointOutcome DescribeEndpoint(const Model::DescribeEndpointRequest& request) const;

        /**
         * <p>Gets the properties associated with a specific endpoint. Use this operation
         * to get the status of an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointOutcomeCallable DescribeEndpointCallable(const Model::DescribeEndpointRequest& request) const;

        /**
         * <p>Gets the properties associated with a specific endpoint. Use this operation
         * to get the status of an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets the status and details of an events detection job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEventsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsDetectionJobOutcome DescribeEventsDetectionJob(const Model::DescribeEventsDetectionJobRequest& request) const;

        /**
         * <p>Gets the status and details of an events detection job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEventsDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsDetectionJobOutcomeCallable DescribeEventsDetectionJobCallable(const Model::DescribeEventsDetectionJobRequest& request) const;

        /**
         * <p>Gets the status and details of an events detection job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribeEventsDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets the properties associated with a PII entities detection job. For
         * example, you can use this operation to get the job status.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribePiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePiiEntitiesDetectionJobOutcome DescribePiiEntitiesDetectionJob(const Model::DescribePiiEntitiesDetectionJobRequest& request) const;

        /**
         * <p>Gets the properties associated with a PII entities detection job. For
         * example, you can use this operation to get the job status.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribePiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePiiEntitiesDetectionJobOutcomeCallable DescribePiiEntitiesDetectionJobCallable(const Model::DescribePiiEntitiesDetectionJobRequest& request) const;

        /**
         * <p>Gets the properties associated with a PII entities detection job. For
         * example, you can use this operation to get the job status.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DescribePiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePiiEntitiesDetectionJobAsync(const Model::DescribePiiEntitiesDetectionJobRequest& request, const DescribePiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Inspects the input text for entities that contain personally identifiable
         * information (PII) and returns information about them.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectPiiEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectPiiEntitiesOutcome DetectPiiEntities(const Model::DetectPiiEntitiesRequest& request) const;

        /**
         * <p>Inspects the input text for entities that contain personally identifiable
         * information (PII) and returns information about them.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectPiiEntities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectPiiEntitiesOutcomeCallable DetectPiiEntitiesCallable(const Model::DetectPiiEntitiesRequest& request) const;

        /**
         * <p>Inspects the input text for entities that contain personally identifiable
         * information (PII) and returns information about them.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DetectPiiEntities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets a list of all existing endpoints that you've created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointsOutcome ListEndpoints(const Model::ListEndpointsRequest& request) const;

        /**
         * <p>Gets a list of all existing endpoints that you've created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEndpointsOutcomeCallable ListEndpointsCallable(const Model::ListEndpointsRequest& request) const;

        /**
         * <p>Gets a list of all existing endpoints that you've created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets a list of the events detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEventsDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventsDetectionJobsOutcome ListEventsDetectionJobs(const Model::ListEventsDetectionJobsRequest& request) const;

        /**
         * <p>Gets a list of the events detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEventsDetectionJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventsDetectionJobsOutcomeCallable ListEventsDetectionJobsCallable(const Model::ListEventsDetectionJobsRequest& request) const;

        /**
         * <p>Gets a list of the events detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListEventsDetectionJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets a list of the PII entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListPiiEntitiesDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPiiEntitiesDetectionJobsOutcome ListPiiEntitiesDetectionJobs(const Model::ListPiiEntitiesDetectionJobsRequest& request) const;

        /**
         * <p>Gets a list of the PII entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListPiiEntitiesDetectionJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPiiEntitiesDetectionJobsOutcomeCallable ListPiiEntitiesDetectionJobsCallable(const Model::ListPiiEntitiesDetectionJobsRequest& request) const;

        /**
         * <p>Gets a list of the PII entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ListPiiEntitiesDetectionJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Starts an asynchronous event detection job for a collection of
         * documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartEventsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEventsDetectionJobOutcome StartEventsDetectionJob(const Model::StartEventsDetectionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous event detection job for a collection of
         * documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartEventsDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartEventsDetectionJobOutcomeCallable StartEventsDetectionJobCallable(const Model::StartEventsDetectionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous event detection job for a collection of
         * documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartEventsDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Starts an asynchronous PII entity detection job for a collection of
         * documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartPiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPiiEntitiesDetectionJobOutcome StartPiiEntitiesDetectionJob(const Model::StartPiiEntitiesDetectionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous PII entity detection job for a collection of
         * documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartPiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartPiiEntitiesDetectionJobOutcomeCallable StartPiiEntitiesDetectionJobCallable(const Model::StartPiiEntitiesDetectionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous PII entity detection job for a collection of
         * documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StartPiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartPiiEntitiesDetectionJobAsync(const Model::StartPiiEntitiesDetectionJobRequest& request, const StartPiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Stops an events detection job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopEventsDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEventsDetectionJobOutcome StopEventsDetectionJob(const Model::StopEventsDetectionJobRequest& request) const;

        /**
         * <p>Stops an events detection job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopEventsDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopEventsDetectionJobOutcomeCallable StopEventsDetectionJobCallable(const Model::StopEventsDetectionJobRequest& request) const;

        /**
         * <p>Stops an events detection job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopEventsDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Stops a PII entities detection job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopPiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopPiiEntitiesDetectionJobOutcome StopPiiEntitiesDetectionJob(const Model::StopPiiEntitiesDetectionJobRequest& request) const;

        /**
         * <p>Stops a PII entities detection job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopPiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopPiiEntitiesDetectionJobOutcomeCallable StopPiiEntitiesDetectionJobCallable(const Model::StopPiiEntitiesDetectionJobRequest& request) const;

        /**
         * <p>Stops a PII entities detection job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/StopPiiEntitiesDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopPiiEntitiesDetectionJobAsync(const Model::StopPiiEntitiesDetectionJobRequest& request, const StopPiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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

        /**
         * <p>Updates information about the specified endpoint.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/UpdateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointOutcome UpdateEndpoint(const Model::UpdateEndpointRequest& request) const;

        /**
         * <p>Updates information about the specified endpoint.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/UpdateEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointOutcomeCallable UpdateEndpointCallable(const Model::UpdateEndpointRequest& request) const;

        /**
         * <p>Updates information about the specified endpoint.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/UpdateEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointAsync(const Model::UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchDetectDominantLanguageAsyncHelper(const Model::BatchDetectDominantLanguageRequest& request, const BatchDetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDetectEntitiesAsyncHelper(const Model::BatchDetectEntitiesRequest& request, const BatchDetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDetectKeyPhrasesAsyncHelper(const Model::BatchDetectKeyPhrasesRequest& request, const BatchDetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDetectSentimentAsyncHelper(const Model::BatchDetectSentimentRequest& request, const BatchDetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDetectSyntaxAsyncHelper(const Model::BatchDetectSyntaxRequest& request, const BatchDetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ClassifyDocumentAsyncHelper(const Model::ClassifyDocumentRequest& request, const ClassifyDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ContainsPiiEntitiesAsyncHelper(const Model::ContainsPiiEntitiesRequest& request, const ContainsPiiEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDocumentClassifierAsyncHelper(const Model::CreateDocumentClassifierRequest& request, const CreateDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEndpointAsyncHelper(const Model::CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEntityRecognizerAsyncHelper(const Model::CreateEntityRecognizerRequest& request, const CreateEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDocumentClassifierAsyncHelper(const Model::DeleteDocumentClassifierRequest& request, const DeleteDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointAsyncHelper(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEntityRecognizerAsyncHelper(const Model::DeleteEntityRecognizerRequest& request, const DeleteEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDocumentClassificationJobAsyncHelper(const Model::DescribeDocumentClassificationJobRequest& request, const DescribeDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDocumentClassifierAsyncHelper(const Model::DescribeDocumentClassifierRequest& request, const DescribeDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDominantLanguageDetectionJobAsyncHelper(const Model::DescribeDominantLanguageDetectionJobRequest& request, const DescribeDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointAsyncHelper(const Model::DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEntitiesDetectionJobAsyncHelper(const Model::DescribeEntitiesDetectionJobRequest& request, const DescribeEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEntityRecognizerAsyncHelper(const Model::DescribeEntityRecognizerRequest& request, const DescribeEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventsDetectionJobAsyncHelper(const Model::DescribeEventsDetectionJobRequest& request, const DescribeEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeKeyPhrasesDetectionJobAsyncHelper(const Model::DescribeKeyPhrasesDetectionJobRequest& request, const DescribeKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePiiEntitiesDetectionJobAsyncHelper(const Model::DescribePiiEntitiesDetectionJobRequest& request, const DescribePiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSentimentDetectionJobAsyncHelper(const Model::DescribeSentimentDetectionJobRequest& request, const DescribeSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTopicsDetectionJobAsyncHelper(const Model::DescribeTopicsDetectionJobRequest& request, const DescribeTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectDominantLanguageAsyncHelper(const Model::DetectDominantLanguageRequest& request, const DetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectEntitiesAsyncHelper(const Model::DetectEntitiesRequest& request, const DetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectKeyPhrasesAsyncHelper(const Model::DetectKeyPhrasesRequest& request, const DetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectPiiEntitiesAsyncHelper(const Model::DetectPiiEntitiesRequest& request, const DetectPiiEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectSentimentAsyncHelper(const Model::DetectSentimentRequest& request, const DetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectSyntaxAsyncHelper(const Model::DetectSyntaxRequest& request, const DetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDocumentClassificationJobsAsyncHelper(const Model::ListDocumentClassificationJobsRequest& request, const ListDocumentClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDocumentClassifiersAsyncHelper(const Model::ListDocumentClassifiersRequest& request, const ListDocumentClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDominantLanguageDetectionJobsAsyncHelper(const Model::ListDominantLanguageDetectionJobsRequest& request, const ListDominantLanguageDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEndpointsAsyncHelper(const Model::ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEntitiesDetectionJobsAsyncHelper(const Model::ListEntitiesDetectionJobsRequest& request, const ListEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEntityRecognizersAsyncHelper(const Model::ListEntityRecognizersRequest& request, const ListEntityRecognizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventsDetectionJobsAsyncHelper(const Model::ListEventsDetectionJobsRequest& request, const ListEventsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListKeyPhrasesDetectionJobsAsyncHelper(const Model::ListKeyPhrasesDetectionJobsRequest& request, const ListKeyPhrasesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPiiEntitiesDetectionJobsAsyncHelper(const Model::ListPiiEntitiesDetectionJobsRequest& request, const ListPiiEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSentimentDetectionJobsAsyncHelper(const Model::ListSentimentDetectionJobsRequest& request, const ListSentimentDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTopicsDetectionJobsAsyncHelper(const Model::ListTopicsDetectionJobsRequest& request, const ListTopicsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDocumentClassificationJobAsyncHelper(const Model::StartDocumentClassificationJobRequest& request, const StartDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDominantLanguageDetectionJobAsyncHelper(const Model::StartDominantLanguageDetectionJobRequest& request, const StartDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartEntitiesDetectionJobAsyncHelper(const Model::StartEntitiesDetectionJobRequest& request, const StartEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartEventsDetectionJobAsyncHelper(const Model::StartEventsDetectionJobRequest& request, const StartEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartKeyPhrasesDetectionJobAsyncHelper(const Model::StartKeyPhrasesDetectionJobRequest& request, const StartKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartPiiEntitiesDetectionJobAsyncHelper(const Model::StartPiiEntitiesDetectionJobRequest& request, const StartPiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartSentimentDetectionJobAsyncHelper(const Model::StartSentimentDetectionJobRequest& request, const StartSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTopicsDetectionJobAsyncHelper(const Model::StartTopicsDetectionJobRequest& request, const StartTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopDominantLanguageDetectionJobAsyncHelper(const Model::StopDominantLanguageDetectionJobRequest& request, const StopDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopEntitiesDetectionJobAsyncHelper(const Model::StopEntitiesDetectionJobRequest& request, const StopEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopEventsDetectionJobAsyncHelper(const Model::StopEventsDetectionJobRequest& request, const StopEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopKeyPhrasesDetectionJobAsyncHelper(const Model::StopKeyPhrasesDetectionJobRequest& request, const StopKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopPiiEntitiesDetectionJobAsyncHelper(const Model::StopPiiEntitiesDetectionJobRequest& request, const StopPiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopSentimentDetectionJobAsyncHelper(const Model::StopSentimentDetectionJobRequest& request, const StopSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTrainingDocumentClassifierAsyncHelper(const Model::StopTrainingDocumentClassifierRequest& request, const StopTrainingDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTrainingEntityRecognizerAsyncHelper(const Model::StopTrainingEntityRecognizerRequest& request, const StopTrainingEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEndpointAsyncHelper(const Model::UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Comprehend
} // namespace Aws
