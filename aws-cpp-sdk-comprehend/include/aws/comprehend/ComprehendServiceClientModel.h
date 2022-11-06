/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/comprehend/ComprehendErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/comprehend/ComprehendEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ComprehendClient header */
#include <aws/comprehend/model/BatchDetectDominantLanguageResult.h>
#include <aws/comprehend/model/BatchDetectEntitiesResult.h>
#include <aws/comprehend/model/BatchDetectKeyPhrasesResult.h>
#include <aws/comprehend/model/BatchDetectSentimentResult.h>
#include <aws/comprehend/model/BatchDetectSyntaxResult.h>
#include <aws/comprehend/model/BatchDetectTargetedSentimentResult.h>
#include <aws/comprehend/model/ClassifyDocumentResult.h>
#include <aws/comprehend/model/ContainsPiiEntitiesResult.h>
#include <aws/comprehend/model/CreateDocumentClassifierResult.h>
#include <aws/comprehend/model/CreateEndpointResult.h>
#include <aws/comprehend/model/CreateEntityRecognizerResult.h>
#include <aws/comprehend/model/DeleteDocumentClassifierResult.h>
#include <aws/comprehend/model/DeleteEndpointResult.h>
#include <aws/comprehend/model/DeleteEntityRecognizerResult.h>
#include <aws/comprehend/model/DeleteResourcePolicyResult.h>
#include <aws/comprehend/model/DescribeDocumentClassificationJobResult.h>
#include <aws/comprehend/model/DescribeDocumentClassifierResult.h>
#include <aws/comprehend/model/DescribeDominantLanguageDetectionJobResult.h>
#include <aws/comprehend/model/DescribeEndpointResult.h>
#include <aws/comprehend/model/DescribeEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/DescribeEntityRecognizerResult.h>
#include <aws/comprehend/model/DescribeEventsDetectionJobResult.h>
#include <aws/comprehend/model/DescribeKeyPhrasesDetectionJobResult.h>
#include <aws/comprehend/model/DescribePiiEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/DescribeResourcePolicyResult.h>
#include <aws/comprehend/model/DescribeSentimentDetectionJobResult.h>
#include <aws/comprehend/model/DescribeTargetedSentimentDetectionJobResult.h>
#include <aws/comprehend/model/DescribeTopicsDetectionJobResult.h>
#include <aws/comprehend/model/DetectDominantLanguageResult.h>
#include <aws/comprehend/model/DetectEntitiesResult.h>
#include <aws/comprehend/model/DetectKeyPhrasesResult.h>
#include <aws/comprehend/model/DetectPiiEntitiesResult.h>
#include <aws/comprehend/model/DetectSentimentResult.h>
#include <aws/comprehend/model/DetectSyntaxResult.h>
#include <aws/comprehend/model/DetectTargetedSentimentResult.h>
#include <aws/comprehend/model/ImportModelResult.h>
#include <aws/comprehend/model/ListDocumentClassificationJobsResult.h>
#include <aws/comprehend/model/ListDocumentClassifierSummariesResult.h>
#include <aws/comprehend/model/ListDocumentClassifiersResult.h>
#include <aws/comprehend/model/ListDominantLanguageDetectionJobsResult.h>
#include <aws/comprehend/model/ListEndpointsResult.h>
#include <aws/comprehend/model/ListEntitiesDetectionJobsResult.h>
#include <aws/comprehend/model/ListEntityRecognizerSummariesResult.h>
#include <aws/comprehend/model/ListEntityRecognizersResult.h>
#include <aws/comprehend/model/ListEventsDetectionJobsResult.h>
#include <aws/comprehend/model/ListKeyPhrasesDetectionJobsResult.h>
#include <aws/comprehend/model/ListPiiEntitiesDetectionJobsResult.h>
#include <aws/comprehend/model/ListSentimentDetectionJobsResult.h>
#include <aws/comprehend/model/ListTagsForResourceResult.h>
#include <aws/comprehend/model/ListTargetedSentimentDetectionJobsResult.h>
#include <aws/comprehend/model/ListTopicsDetectionJobsResult.h>
#include <aws/comprehend/model/PutResourcePolicyResult.h>
#include <aws/comprehend/model/StartDocumentClassificationJobResult.h>
#include <aws/comprehend/model/StartDominantLanguageDetectionJobResult.h>
#include <aws/comprehend/model/StartEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/StartEventsDetectionJobResult.h>
#include <aws/comprehend/model/StartKeyPhrasesDetectionJobResult.h>
#include <aws/comprehend/model/StartPiiEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/StartSentimentDetectionJobResult.h>
#include <aws/comprehend/model/StartTargetedSentimentDetectionJobResult.h>
#include <aws/comprehend/model/StartTopicsDetectionJobResult.h>
#include <aws/comprehend/model/StopDominantLanguageDetectionJobResult.h>
#include <aws/comprehend/model/StopEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/StopEventsDetectionJobResult.h>
#include <aws/comprehend/model/StopKeyPhrasesDetectionJobResult.h>
#include <aws/comprehend/model/StopPiiEntitiesDetectionJobResult.h>
#include <aws/comprehend/model/StopSentimentDetectionJobResult.h>
#include <aws/comprehend/model/StopTargetedSentimentDetectionJobResult.h>
#include <aws/comprehend/model/StopTrainingDocumentClassifierResult.h>
#include <aws/comprehend/model/StopTrainingEntityRecognizerResult.h>
#include <aws/comprehend/model/TagResourceResult.h>
#include <aws/comprehend/model/UntagResourceResult.h>
#include <aws/comprehend/model/UpdateEndpointResult.h>
/* End of service model headers required in ComprehendClient header */

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
    using ComprehendClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ComprehendEndpointProviderBase = Aws::Comprehend::Endpoint::ComprehendEndpointProviderBase;
    using ComprehendEndpointProvider = Aws::Comprehend::Endpoint::ComprehendEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ComprehendClient header */
      class BatchDetectDominantLanguageRequest;
      class BatchDetectEntitiesRequest;
      class BatchDetectKeyPhrasesRequest;
      class BatchDetectSentimentRequest;
      class BatchDetectSyntaxRequest;
      class BatchDetectTargetedSentimentRequest;
      class ClassifyDocumentRequest;
      class ContainsPiiEntitiesRequest;
      class CreateDocumentClassifierRequest;
      class CreateEndpointRequest;
      class CreateEntityRecognizerRequest;
      class DeleteDocumentClassifierRequest;
      class DeleteEndpointRequest;
      class DeleteEntityRecognizerRequest;
      class DeleteResourcePolicyRequest;
      class DescribeDocumentClassificationJobRequest;
      class DescribeDocumentClassifierRequest;
      class DescribeDominantLanguageDetectionJobRequest;
      class DescribeEndpointRequest;
      class DescribeEntitiesDetectionJobRequest;
      class DescribeEntityRecognizerRequest;
      class DescribeEventsDetectionJobRequest;
      class DescribeKeyPhrasesDetectionJobRequest;
      class DescribePiiEntitiesDetectionJobRequest;
      class DescribeResourcePolicyRequest;
      class DescribeSentimentDetectionJobRequest;
      class DescribeTargetedSentimentDetectionJobRequest;
      class DescribeTopicsDetectionJobRequest;
      class DetectDominantLanguageRequest;
      class DetectEntitiesRequest;
      class DetectKeyPhrasesRequest;
      class DetectPiiEntitiesRequest;
      class DetectSentimentRequest;
      class DetectSyntaxRequest;
      class DetectTargetedSentimentRequest;
      class ImportModelRequest;
      class ListDocumentClassificationJobsRequest;
      class ListDocumentClassifierSummariesRequest;
      class ListDocumentClassifiersRequest;
      class ListDominantLanguageDetectionJobsRequest;
      class ListEndpointsRequest;
      class ListEntitiesDetectionJobsRequest;
      class ListEntityRecognizerSummariesRequest;
      class ListEntityRecognizersRequest;
      class ListEventsDetectionJobsRequest;
      class ListKeyPhrasesDetectionJobsRequest;
      class ListPiiEntitiesDetectionJobsRequest;
      class ListSentimentDetectionJobsRequest;
      class ListTagsForResourceRequest;
      class ListTargetedSentimentDetectionJobsRequest;
      class ListTopicsDetectionJobsRequest;
      class PutResourcePolicyRequest;
      class StartDocumentClassificationJobRequest;
      class StartDominantLanguageDetectionJobRequest;
      class StartEntitiesDetectionJobRequest;
      class StartEventsDetectionJobRequest;
      class StartKeyPhrasesDetectionJobRequest;
      class StartPiiEntitiesDetectionJobRequest;
      class StartSentimentDetectionJobRequest;
      class StartTargetedSentimentDetectionJobRequest;
      class StartTopicsDetectionJobRequest;
      class StopDominantLanguageDetectionJobRequest;
      class StopEntitiesDetectionJobRequest;
      class StopEventsDetectionJobRequest;
      class StopKeyPhrasesDetectionJobRequest;
      class StopPiiEntitiesDetectionJobRequest;
      class StopSentimentDetectionJobRequest;
      class StopTargetedSentimentDetectionJobRequest;
      class StopTrainingDocumentClassifierRequest;
      class StopTrainingEntityRecognizerRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateEndpointRequest;
      /* End of service model forward declarations required in ComprehendClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchDetectDominantLanguageResult, ComprehendError> BatchDetectDominantLanguageOutcome;
      typedef Aws::Utils::Outcome<BatchDetectEntitiesResult, ComprehendError> BatchDetectEntitiesOutcome;
      typedef Aws::Utils::Outcome<BatchDetectKeyPhrasesResult, ComprehendError> BatchDetectKeyPhrasesOutcome;
      typedef Aws::Utils::Outcome<BatchDetectSentimentResult, ComprehendError> BatchDetectSentimentOutcome;
      typedef Aws::Utils::Outcome<BatchDetectSyntaxResult, ComprehendError> BatchDetectSyntaxOutcome;
      typedef Aws::Utils::Outcome<BatchDetectTargetedSentimentResult, ComprehendError> BatchDetectTargetedSentimentOutcome;
      typedef Aws::Utils::Outcome<ClassifyDocumentResult, ComprehendError> ClassifyDocumentOutcome;
      typedef Aws::Utils::Outcome<ContainsPiiEntitiesResult, ComprehendError> ContainsPiiEntitiesOutcome;
      typedef Aws::Utils::Outcome<CreateDocumentClassifierResult, ComprehendError> CreateDocumentClassifierOutcome;
      typedef Aws::Utils::Outcome<CreateEndpointResult, ComprehendError> CreateEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateEntityRecognizerResult, ComprehendError> CreateEntityRecognizerOutcome;
      typedef Aws::Utils::Outcome<DeleteDocumentClassifierResult, ComprehendError> DeleteDocumentClassifierOutcome;
      typedef Aws::Utils::Outcome<DeleteEndpointResult, ComprehendError> DeleteEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteEntityRecognizerResult, ComprehendError> DeleteEntityRecognizerOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, ComprehendError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeDocumentClassificationJobResult, ComprehendError> DescribeDocumentClassificationJobOutcome;
      typedef Aws::Utils::Outcome<DescribeDocumentClassifierResult, ComprehendError> DescribeDocumentClassifierOutcome;
      typedef Aws::Utils::Outcome<DescribeDominantLanguageDetectionJobResult, ComprehendError> DescribeDominantLanguageDetectionJobOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointResult, ComprehendError> DescribeEndpointOutcome;
      typedef Aws::Utils::Outcome<DescribeEntitiesDetectionJobResult, ComprehendError> DescribeEntitiesDetectionJobOutcome;
      typedef Aws::Utils::Outcome<DescribeEntityRecognizerResult, ComprehendError> DescribeEntityRecognizerOutcome;
      typedef Aws::Utils::Outcome<DescribeEventsDetectionJobResult, ComprehendError> DescribeEventsDetectionJobOutcome;
      typedef Aws::Utils::Outcome<DescribeKeyPhrasesDetectionJobResult, ComprehendError> DescribeKeyPhrasesDetectionJobOutcome;
      typedef Aws::Utils::Outcome<DescribePiiEntitiesDetectionJobResult, ComprehendError> DescribePiiEntitiesDetectionJobOutcome;
      typedef Aws::Utils::Outcome<DescribeResourcePolicyResult, ComprehendError> DescribeResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeSentimentDetectionJobResult, ComprehendError> DescribeSentimentDetectionJobOutcome;
      typedef Aws::Utils::Outcome<DescribeTargetedSentimentDetectionJobResult, ComprehendError> DescribeTargetedSentimentDetectionJobOutcome;
      typedef Aws::Utils::Outcome<DescribeTopicsDetectionJobResult, ComprehendError> DescribeTopicsDetectionJobOutcome;
      typedef Aws::Utils::Outcome<DetectDominantLanguageResult, ComprehendError> DetectDominantLanguageOutcome;
      typedef Aws::Utils::Outcome<DetectEntitiesResult, ComprehendError> DetectEntitiesOutcome;
      typedef Aws::Utils::Outcome<DetectKeyPhrasesResult, ComprehendError> DetectKeyPhrasesOutcome;
      typedef Aws::Utils::Outcome<DetectPiiEntitiesResult, ComprehendError> DetectPiiEntitiesOutcome;
      typedef Aws::Utils::Outcome<DetectSentimentResult, ComprehendError> DetectSentimentOutcome;
      typedef Aws::Utils::Outcome<DetectSyntaxResult, ComprehendError> DetectSyntaxOutcome;
      typedef Aws::Utils::Outcome<DetectTargetedSentimentResult, ComprehendError> DetectTargetedSentimentOutcome;
      typedef Aws::Utils::Outcome<ImportModelResult, ComprehendError> ImportModelOutcome;
      typedef Aws::Utils::Outcome<ListDocumentClassificationJobsResult, ComprehendError> ListDocumentClassificationJobsOutcome;
      typedef Aws::Utils::Outcome<ListDocumentClassifierSummariesResult, ComprehendError> ListDocumentClassifierSummariesOutcome;
      typedef Aws::Utils::Outcome<ListDocumentClassifiersResult, ComprehendError> ListDocumentClassifiersOutcome;
      typedef Aws::Utils::Outcome<ListDominantLanguageDetectionJobsResult, ComprehendError> ListDominantLanguageDetectionJobsOutcome;
      typedef Aws::Utils::Outcome<ListEndpointsResult, ComprehendError> ListEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListEntitiesDetectionJobsResult, ComprehendError> ListEntitiesDetectionJobsOutcome;
      typedef Aws::Utils::Outcome<ListEntityRecognizerSummariesResult, ComprehendError> ListEntityRecognizerSummariesOutcome;
      typedef Aws::Utils::Outcome<ListEntityRecognizersResult, ComprehendError> ListEntityRecognizersOutcome;
      typedef Aws::Utils::Outcome<ListEventsDetectionJobsResult, ComprehendError> ListEventsDetectionJobsOutcome;
      typedef Aws::Utils::Outcome<ListKeyPhrasesDetectionJobsResult, ComprehendError> ListKeyPhrasesDetectionJobsOutcome;
      typedef Aws::Utils::Outcome<ListPiiEntitiesDetectionJobsResult, ComprehendError> ListPiiEntitiesDetectionJobsOutcome;
      typedef Aws::Utils::Outcome<ListSentimentDetectionJobsResult, ComprehendError> ListSentimentDetectionJobsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ComprehendError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTargetedSentimentDetectionJobsResult, ComprehendError> ListTargetedSentimentDetectionJobsOutcome;
      typedef Aws::Utils::Outcome<ListTopicsDetectionJobsResult, ComprehendError> ListTopicsDetectionJobsOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, ComprehendError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<StartDocumentClassificationJobResult, ComprehendError> StartDocumentClassificationJobOutcome;
      typedef Aws::Utils::Outcome<StartDominantLanguageDetectionJobResult, ComprehendError> StartDominantLanguageDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StartEntitiesDetectionJobResult, ComprehendError> StartEntitiesDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StartEventsDetectionJobResult, ComprehendError> StartEventsDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StartKeyPhrasesDetectionJobResult, ComprehendError> StartKeyPhrasesDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StartPiiEntitiesDetectionJobResult, ComprehendError> StartPiiEntitiesDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StartSentimentDetectionJobResult, ComprehendError> StartSentimentDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StartTargetedSentimentDetectionJobResult, ComprehendError> StartTargetedSentimentDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StartTopicsDetectionJobResult, ComprehendError> StartTopicsDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StopDominantLanguageDetectionJobResult, ComprehendError> StopDominantLanguageDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StopEntitiesDetectionJobResult, ComprehendError> StopEntitiesDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StopEventsDetectionJobResult, ComprehendError> StopEventsDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StopKeyPhrasesDetectionJobResult, ComprehendError> StopKeyPhrasesDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StopPiiEntitiesDetectionJobResult, ComprehendError> StopPiiEntitiesDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StopSentimentDetectionJobResult, ComprehendError> StopSentimentDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StopTargetedSentimentDetectionJobResult, ComprehendError> StopTargetedSentimentDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StopTrainingDocumentClassifierResult, ComprehendError> StopTrainingDocumentClassifierOutcome;
      typedef Aws::Utils::Outcome<StopTrainingEntityRecognizerResult, ComprehendError> StopTrainingEntityRecognizerOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ComprehendError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ComprehendError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateEndpointResult, ComprehendError> UpdateEndpointOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchDetectDominantLanguageOutcome> BatchDetectDominantLanguageOutcomeCallable;
      typedef std::future<BatchDetectEntitiesOutcome> BatchDetectEntitiesOutcomeCallable;
      typedef std::future<BatchDetectKeyPhrasesOutcome> BatchDetectKeyPhrasesOutcomeCallable;
      typedef std::future<BatchDetectSentimentOutcome> BatchDetectSentimentOutcomeCallable;
      typedef std::future<BatchDetectSyntaxOutcome> BatchDetectSyntaxOutcomeCallable;
      typedef std::future<BatchDetectTargetedSentimentOutcome> BatchDetectTargetedSentimentOutcomeCallable;
      typedef std::future<ClassifyDocumentOutcome> ClassifyDocumentOutcomeCallable;
      typedef std::future<ContainsPiiEntitiesOutcome> ContainsPiiEntitiesOutcomeCallable;
      typedef std::future<CreateDocumentClassifierOutcome> CreateDocumentClassifierOutcomeCallable;
      typedef std::future<CreateEndpointOutcome> CreateEndpointOutcomeCallable;
      typedef std::future<CreateEntityRecognizerOutcome> CreateEntityRecognizerOutcomeCallable;
      typedef std::future<DeleteDocumentClassifierOutcome> DeleteDocumentClassifierOutcomeCallable;
      typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
      typedef std::future<DeleteEntityRecognizerOutcome> DeleteEntityRecognizerOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DescribeDocumentClassificationJobOutcome> DescribeDocumentClassificationJobOutcomeCallable;
      typedef std::future<DescribeDocumentClassifierOutcome> DescribeDocumentClassifierOutcomeCallable;
      typedef std::future<DescribeDominantLanguageDetectionJobOutcome> DescribeDominantLanguageDetectionJobOutcomeCallable;
      typedef std::future<DescribeEndpointOutcome> DescribeEndpointOutcomeCallable;
      typedef std::future<DescribeEntitiesDetectionJobOutcome> DescribeEntitiesDetectionJobOutcomeCallable;
      typedef std::future<DescribeEntityRecognizerOutcome> DescribeEntityRecognizerOutcomeCallable;
      typedef std::future<DescribeEventsDetectionJobOutcome> DescribeEventsDetectionJobOutcomeCallable;
      typedef std::future<DescribeKeyPhrasesDetectionJobOutcome> DescribeKeyPhrasesDetectionJobOutcomeCallable;
      typedef std::future<DescribePiiEntitiesDetectionJobOutcome> DescribePiiEntitiesDetectionJobOutcomeCallable;
      typedef std::future<DescribeResourcePolicyOutcome> DescribeResourcePolicyOutcomeCallable;
      typedef std::future<DescribeSentimentDetectionJobOutcome> DescribeSentimentDetectionJobOutcomeCallable;
      typedef std::future<DescribeTargetedSentimentDetectionJobOutcome> DescribeTargetedSentimentDetectionJobOutcomeCallable;
      typedef std::future<DescribeTopicsDetectionJobOutcome> DescribeTopicsDetectionJobOutcomeCallable;
      typedef std::future<DetectDominantLanguageOutcome> DetectDominantLanguageOutcomeCallable;
      typedef std::future<DetectEntitiesOutcome> DetectEntitiesOutcomeCallable;
      typedef std::future<DetectKeyPhrasesOutcome> DetectKeyPhrasesOutcomeCallable;
      typedef std::future<DetectPiiEntitiesOutcome> DetectPiiEntitiesOutcomeCallable;
      typedef std::future<DetectSentimentOutcome> DetectSentimentOutcomeCallable;
      typedef std::future<DetectSyntaxOutcome> DetectSyntaxOutcomeCallable;
      typedef std::future<DetectTargetedSentimentOutcome> DetectTargetedSentimentOutcomeCallable;
      typedef std::future<ImportModelOutcome> ImportModelOutcomeCallable;
      typedef std::future<ListDocumentClassificationJobsOutcome> ListDocumentClassificationJobsOutcomeCallable;
      typedef std::future<ListDocumentClassifierSummariesOutcome> ListDocumentClassifierSummariesOutcomeCallable;
      typedef std::future<ListDocumentClassifiersOutcome> ListDocumentClassifiersOutcomeCallable;
      typedef std::future<ListDominantLanguageDetectionJobsOutcome> ListDominantLanguageDetectionJobsOutcomeCallable;
      typedef std::future<ListEndpointsOutcome> ListEndpointsOutcomeCallable;
      typedef std::future<ListEntitiesDetectionJobsOutcome> ListEntitiesDetectionJobsOutcomeCallable;
      typedef std::future<ListEntityRecognizerSummariesOutcome> ListEntityRecognizerSummariesOutcomeCallable;
      typedef std::future<ListEntityRecognizersOutcome> ListEntityRecognizersOutcomeCallable;
      typedef std::future<ListEventsDetectionJobsOutcome> ListEventsDetectionJobsOutcomeCallable;
      typedef std::future<ListKeyPhrasesDetectionJobsOutcome> ListKeyPhrasesDetectionJobsOutcomeCallable;
      typedef std::future<ListPiiEntitiesDetectionJobsOutcome> ListPiiEntitiesDetectionJobsOutcomeCallable;
      typedef std::future<ListSentimentDetectionJobsOutcome> ListSentimentDetectionJobsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTargetedSentimentDetectionJobsOutcome> ListTargetedSentimentDetectionJobsOutcomeCallable;
      typedef std::future<ListTopicsDetectionJobsOutcome> ListTopicsDetectionJobsOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<StartDocumentClassificationJobOutcome> StartDocumentClassificationJobOutcomeCallable;
      typedef std::future<StartDominantLanguageDetectionJobOutcome> StartDominantLanguageDetectionJobOutcomeCallable;
      typedef std::future<StartEntitiesDetectionJobOutcome> StartEntitiesDetectionJobOutcomeCallable;
      typedef std::future<StartEventsDetectionJobOutcome> StartEventsDetectionJobOutcomeCallable;
      typedef std::future<StartKeyPhrasesDetectionJobOutcome> StartKeyPhrasesDetectionJobOutcomeCallable;
      typedef std::future<StartPiiEntitiesDetectionJobOutcome> StartPiiEntitiesDetectionJobOutcomeCallable;
      typedef std::future<StartSentimentDetectionJobOutcome> StartSentimentDetectionJobOutcomeCallable;
      typedef std::future<StartTargetedSentimentDetectionJobOutcome> StartTargetedSentimentDetectionJobOutcomeCallable;
      typedef std::future<StartTopicsDetectionJobOutcome> StartTopicsDetectionJobOutcomeCallable;
      typedef std::future<StopDominantLanguageDetectionJobOutcome> StopDominantLanguageDetectionJobOutcomeCallable;
      typedef std::future<StopEntitiesDetectionJobOutcome> StopEntitiesDetectionJobOutcomeCallable;
      typedef std::future<StopEventsDetectionJobOutcome> StopEventsDetectionJobOutcomeCallable;
      typedef std::future<StopKeyPhrasesDetectionJobOutcome> StopKeyPhrasesDetectionJobOutcomeCallable;
      typedef std::future<StopPiiEntitiesDetectionJobOutcome> StopPiiEntitiesDetectionJobOutcomeCallable;
      typedef std::future<StopSentimentDetectionJobOutcome> StopSentimentDetectionJobOutcomeCallable;
      typedef std::future<StopTargetedSentimentDetectionJobOutcome> StopTargetedSentimentDetectionJobOutcomeCallable;
      typedef std::future<StopTrainingDocumentClassifierOutcome> StopTrainingDocumentClassifierOutcomeCallable;
      typedef std::future<StopTrainingEntityRecognizerOutcome> StopTrainingEntityRecognizerOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateEndpointOutcome> UpdateEndpointOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ComprehendClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectDominantLanguageRequest&, const Model::BatchDetectDominantLanguageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectDominantLanguageResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectEntitiesRequest&, const Model::BatchDetectEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectEntitiesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectKeyPhrasesRequest&, const Model::BatchDetectKeyPhrasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectKeyPhrasesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectSentimentRequest&, const Model::BatchDetectSentimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectSentimentResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectSyntaxRequest&, const Model::BatchDetectSyntaxOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectSyntaxResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::BatchDetectTargetedSentimentRequest&, const Model::BatchDetectTargetedSentimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDetectTargetedSentimentResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ClassifyDocumentRequest&, const Model::ClassifyDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ClassifyDocumentResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ContainsPiiEntitiesRequest&, const Model::ContainsPiiEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ContainsPiiEntitiesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::CreateDocumentClassifierRequest&, const Model::CreateDocumentClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDocumentClassifierResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::CreateEndpointRequest&, const Model::CreateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::CreateEntityRecognizerRequest&, const Model::CreateEntityRecognizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEntityRecognizerResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DeleteDocumentClassifierRequest&, const Model::DeleteDocumentClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDocumentClassifierResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DeleteEntityRecognizerRequest&, const Model::DeleteEntityRecognizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEntityRecognizerResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeDocumentClassificationJobRequest&, const Model::DescribeDocumentClassificationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentClassificationJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeDocumentClassifierRequest&, const Model::DescribeDocumentClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentClassifierResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeDominantLanguageDetectionJobRequest&, const Model::DescribeDominantLanguageDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDominantLanguageDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeEndpointRequest&, const Model::DescribeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeEntitiesDetectionJobRequest&, const Model::DescribeEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeEntityRecognizerRequest&, const Model::DescribeEntityRecognizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEntityRecognizerResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeEventsDetectionJobRequest&, const Model::DescribeEventsDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeKeyPhrasesDetectionJobRequest&, const Model::DescribeKeyPhrasesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeKeyPhrasesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribePiiEntitiesDetectionJobRequest&, const Model::DescribePiiEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePiiEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeResourcePolicyRequest&, const Model::DescribeResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeSentimentDetectionJobRequest&, const Model::DescribeSentimentDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSentimentDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeTargetedSentimentDetectionJobRequest&, const Model::DescribeTargetedSentimentDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTargetedSentimentDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DescribeTopicsDetectionJobRequest&, const Model::DescribeTopicsDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTopicsDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectDominantLanguageRequest&, const Model::DetectDominantLanguageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectDominantLanguageResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectEntitiesRequest&, const Model::DetectEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectEntitiesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectKeyPhrasesRequest&, const Model::DetectKeyPhrasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectKeyPhrasesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectPiiEntitiesRequest&, const Model::DetectPiiEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectPiiEntitiesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectSentimentRequest&, const Model::DetectSentimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectSentimentResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectSyntaxRequest&, const Model::DetectSyntaxOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectSyntaxResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::DetectTargetedSentimentRequest&, const Model::DetectTargetedSentimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectTargetedSentimentResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ImportModelRequest&, const Model::ImportModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportModelResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListDocumentClassificationJobsRequest&, const Model::ListDocumentClassificationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentClassificationJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListDocumentClassifierSummariesRequest&, const Model::ListDocumentClassifierSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentClassifierSummariesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListDocumentClassifiersRequest&, const Model::ListDocumentClassifiersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentClassifiersResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListDominantLanguageDetectionJobsRequest&, const Model::ListDominantLanguageDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDominantLanguageDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListEndpointsRequest&, const Model::ListEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListEntitiesDetectionJobsRequest&, const Model::ListEntitiesDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitiesDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListEntityRecognizerSummariesRequest&, const Model::ListEntityRecognizerSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntityRecognizerSummariesResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListEntityRecognizersRequest&, const Model::ListEntityRecognizersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntityRecognizersResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListEventsDetectionJobsRequest&, const Model::ListEventsDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventsDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListKeyPhrasesDetectionJobsRequest&, const Model::ListKeyPhrasesDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKeyPhrasesDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListPiiEntitiesDetectionJobsRequest&, const Model::ListPiiEntitiesDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPiiEntitiesDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListSentimentDetectionJobsRequest&, const Model::ListSentimentDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSentimentDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListTargetedSentimentDetectionJobsRequest&, const Model::ListTargetedSentimentDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTargetedSentimentDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::ListTopicsDetectionJobsRequest&, const Model::ListTopicsDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTopicsDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartDocumentClassificationJobRequest&, const Model::StartDocumentClassificationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDocumentClassificationJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartDominantLanguageDetectionJobRequest&, const Model::StartDominantLanguageDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDominantLanguageDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartEntitiesDetectionJobRequest&, const Model::StartEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartEventsDetectionJobRequest&, const Model::StartEventsDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEventsDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartKeyPhrasesDetectionJobRequest&, const Model::StartKeyPhrasesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartKeyPhrasesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartPiiEntitiesDetectionJobRequest&, const Model::StartPiiEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPiiEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartSentimentDetectionJobRequest&, const Model::StartSentimentDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSentimentDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartTargetedSentimentDetectionJobRequest&, const Model::StartTargetedSentimentDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTargetedSentimentDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StartTopicsDetectionJobRequest&, const Model::StartTopicsDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTopicsDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopDominantLanguageDetectionJobRequest&, const Model::StopDominantLanguageDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDominantLanguageDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopEntitiesDetectionJobRequest&, const Model::StopEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopEventsDetectionJobRequest&, const Model::StopEventsDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopEventsDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopKeyPhrasesDetectionJobRequest&, const Model::StopKeyPhrasesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopKeyPhrasesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopPiiEntitiesDetectionJobRequest&, const Model::StopPiiEntitiesDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopPiiEntitiesDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopSentimentDetectionJobRequest&, const Model::StopSentimentDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopSentimentDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopTargetedSentimentDetectionJobRequest&, const Model::StopTargetedSentimentDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTargetedSentimentDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopTrainingDocumentClassifierRequest&, const Model::StopTrainingDocumentClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTrainingDocumentClassifierResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::StopTrainingEntityRecognizerRequest&, const Model::StopTrainingEntityRecognizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTrainingEntityRecognizerResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ComprehendClient*, const Model::UpdateEndpointRequest&, const Model::UpdateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Comprehend
} // namespace Aws
