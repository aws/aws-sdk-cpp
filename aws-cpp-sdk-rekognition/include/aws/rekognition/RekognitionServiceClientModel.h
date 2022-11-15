/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/rekognition/RekognitionErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/rekognition/RekognitionEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in RekognitionClient header */
#include <aws/rekognition/model/CompareFacesResult.h>
#include <aws/rekognition/model/CopyProjectVersionResult.h>
#include <aws/rekognition/model/CreateCollectionResult.h>
#include <aws/rekognition/model/CreateDatasetResult.h>
#include <aws/rekognition/model/CreateProjectResult.h>
#include <aws/rekognition/model/CreateProjectVersionResult.h>
#include <aws/rekognition/model/CreateStreamProcessorResult.h>
#include <aws/rekognition/model/DeleteCollectionResult.h>
#include <aws/rekognition/model/DeleteDatasetResult.h>
#include <aws/rekognition/model/DeleteFacesResult.h>
#include <aws/rekognition/model/DeleteProjectResult.h>
#include <aws/rekognition/model/DeleteProjectPolicyResult.h>
#include <aws/rekognition/model/DeleteProjectVersionResult.h>
#include <aws/rekognition/model/DeleteStreamProcessorResult.h>
#include <aws/rekognition/model/DescribeCollectionResult.h>
#include <aws/rekognition/model/DescribeDatasetResult.h>
#include <aws/rekognition/model/DescribeProjectVersionsResult.h>
#include <aws/rekognition/model/DescribeProjectsResult.h>
#include <aws/rekognition/model/DescribeStreamProcessorResult.h>
#include <aws/rekognition/model/DetectCustomLabelsResult.h>
#include <aws/rekognition/model/DetectFacesResult.h>
#include <aws/rekognition/model/DetectLabelsResult.h>
#include <aws/rekognition/model/DetectModerationLabelsResult.h>
#include <aws/rekognition/model/DetectProtectiveEquipmentResult.h>
#include <aws/rekognition/model/DetectTextResult.h>
#include <aws/rekognition/model/DistributeDatasetEntriesResult.h>
#include <aws/rekognition/model/GetCelebrityInfoResult.h>
#include <aws/rekognition/model/GetCelebrityRecognitionResult.h>
#include <aws/rekognition/model/GetContentModerationResult.h>
#include <aws/rekognition/model/GetFaceDetectionResult.h>
#include <aws/rekognition/model/GetFaceSearchResult.h>
#include <aws/rekognition/model/GetLabelDetectionResult.h>
#include <aws/rekognition/model/GetPersonTrackingResult.h>
#include <aws/rekognition/model/GetSegmentDetectionResult.h>
#include <aws/rekognition/model/GetTextDetectionResult.h>
#include <aws/rekognition/model/IndexFacesResult.h>
#include <aws/rekognition/model/ListCollectionsResult.h>
#include <aws/rekognition/model/ListDatasetEntriesResult.h>
#include <aws/rekognition/model/ListDatasetLabelsResult.h>
#include <aws/rekognition/model/ListFacesResult.h>
#include <aws/rekognition/model/ListProjectPoliciesResult.h>
#include <aws/rekognition/model/ListStreamProcessorsResult.h>
#include <aws/rekognition/model/ListTagsForResourceResult.h>
#include <aws/rekognition/model/PutProjectPolicyResult.h>
#include <aws/rekognition/model/RecognizeCelebritiesResult.h>
#include <aws/rekognition/model/SearchFacesResult.h>
#include <aws/rekognition/model/SearchFacesByImageResult.h>
#include <aws/rekognition/model/StartCelebrityRecognitionResult.h>
#include <aws/rekognition/model/StartContentModerationResult.h>
#include <aws/rekognition/model/StartFaceDetectionResult.h>
#include <aws/rekognition/model/StartFaceSearchResult.h>
#include <aws/rekognition/model/StartLabelDetectionResult.h>
#include <aws/rekognition/model/StartPersonTrackingResult.h>
#include <aws/rekognition/model/StartProjectVersionResult.h>
#include <aws/rekognition/model/StartSegmentDetectionResult.h>
#include <aws/rekognition/model/StartStreamProcessorResult.h>
#include <aws/rekognition/model/StartTextDetectionResult.h>
#include <aws/rekognition/model/StopProjectVersionResult.h>
#include <aws/rekognition/model/StopStreamProcessorResult.h>
#include <aws/rekognition/model/TagResourceResult.h>
#include <aws/rekognition/model/UntagResourceResult.h>
#include <aws/rekognition/model/UpdateDatasetEntriesResult.h>
#include <aws/rekognition/model/UpdateStreamProcessorResult.h>
/* End of service model headers required in RekognitionClient header */

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

  namespace Rekognition
  {
    using RekognitionClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using RekognitionEndpointProviderBase = Aws::Rekognition::Endpoint::RekognitionEndpointProviderBase;
    using RekognitionEndpointProvider = Aws::Rekognition::Endpoint::RekognitionEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in RekognitionClient header */
      class CompareFacesRequest;
      class CopyProjectVersionRequest;
      class CreateCollectionRequest;
      class CreateDatasetRequest;
      class CreateProjectRequest;
      class CreateProjectVersionRequest;
      class CreateStreamProcessorRequest;
      class DeleteCollectionRequest;
      class DeleteDatasetRequest;
      class DeleteFacesRequest;
      class DeleteProjectRequest;
      class DeleteProjectPolicyRequest;
      class DeleteProjectVersionRequest;
      class DeleteStreamProcessorRequest;
      class DescribeCollectionRequest;
      class DescribeDatasetRequest;
      class DescribeProjectVersionsRequest;
      class DescribeProjectsRequest;
      class DescribeStreamProcessorRequest;
      class DetectCustomLabelsRequest;
      class DetectFacesRequest;
      class DetectLabelsRequest;
      class DetectModerationLabelsRequest;
      class DetectProtectiveEquipmentRequest;
      class DetectTextRequest;
      class DistributeDatasetEntriesRequest;
      class GetCelebrityInfoRequest;
      class GetCelebrityRecognitionRequest;
      class GetContentModerationRequest;
      class GetFaceDetectionRequest;
      class GetFaceSearchRequest;
      class GetLabelDetectionRequest;
      class GetPersonTrackingRequest;
      class GetSegmentDetectionRequest;
      class GetTextDetectionRequest;
      class IndexFacesRequest;
      class ListCollectionsRequest;
      class ListDatasetEntriesRequest;
      class ListDatasetLabelsRequest;
      class ListFacesRequest;
      class ListProjectPoliciesRequest;
      class ListStreamProcessorsRequest;
      class ListTagsForResourceRequest;
      class PutProjectPolicyRequest;
      class RecognizeCelebritiesRequest;
      class SearchFacesRequest;
      class SearchFacesByImageRequest;
      class StartCelebrityRecognitionRequest;
      class StartContentModerationRequest;
      class StartFaceDetectionRequest;
      class StartFaceSearchRequest;
      class StartLabelDetectionRequest;
      class StartPersonTrackingRequest;
      class StartProjectVersionRequest;
      class StartSegmentDetectionRequest;
      class StartStreamProcessorRequest;
      class StartTextDetectionRequest;
      class StopProjectVersionRequest;
      class StopStreamProcessorRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDatasetEntriesRequest;
      class UpdateStreamProcessorRequest;
      /* End of service model forward declarations required in RekognitionClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CompareFacesResult, RekognitionError> CompareFacesOutcome;
      typedef Aws::Utils::Outcome<CopyProjectVersionResult, RekognitionError> CopyProjectVersionOutcome;
      typedef Aws::Utils::Outcome<CreateCollectionResult, RekognitionError> CreateCollectionOutcome;
      typedef Aws::Utils::Outcome<CreateDatasetResult, RekognitionError> CreateDatasetOutcome;
      typedef Aws::Utils::Outcome<CreateProjectResult, RekognitionError> CreateProjectOutcome;
      typedef Aws::Utils::Outcome<CreateProjectVersionResult, RekognitionError> CreateProjectVersionOutcome;
      typedef Aws::Utils::Outcome<CreateStreamProcessorResult, RekognitionError> CreateStreamProcessorOutcome;
      typedef Aws::Utils::Outcome<DeleteCollectionResult, RekognitionError> DeleteCollectionOutcome;
      typedef Aws::Utils::Outcome<DeleteDatasetResult, RekognitionError> DeleteDatasetOutcome;
      typedef Aws::Utils::Outcome<DeleteFacesResult, RekognitionError> DeleteFacesOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectResult, RekognitionError> DeleteProjectOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectPolicyResult, RekognitionError> DeleteProjectPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectVersionResult, RekognitionError> DeleteProjectVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteStreamProcessorResult, RekognitionError> DeleteStreamProcessorOutcome;
      typedef Aws::Utils::Outcome<DescribeCollectionResult, RekognitionError> DescribeCollectionOutcome;
      typedef Aws::Utils::Outcome<DescribeDatasetResult, RekognitionError> DescribeDatasetOutcome;
      typedef Aws::Utils::Outcome<DescribeProjectVersionsResult, RekognitionError> DescribeProjectVersionsOutcome;
      typedef Aws::Utils::Outcome<DescribeProjectsResult, RekognitionError> DescribeProjectsOutcome;
      typedef Aws::Utils::Outcome<DescribeStreamProcessorResult, RekognitionError> DescribeStreamProcessorOutcome;
      typedef Aws::Utils::Outcome<DetectCustomLabelsResult, RekognitionError> DetectCustomLabelsOutcome;
      typedef Aws::Utils::Outcome<DetectFacesResult, RekognitionError> DetectFacesOutcome;
      typedef Aws::Utils::Outcome<DetectLabelsResult, RekognitionError> DetectLabelsOutcome;
      typedef Aws::Utils::Outcome<DetectModerationLabelsResult, RekognitionError> DetectModerationLabelsOutcome;
      typedef Aws::Utils::Outcome<DetectProtectiveEquipmentResult, RekognitionError> DetectProtectiveEquipmentOutcome;
      typedef Aws::Utils::Outcome<DetectTextResult, RekognitionError> DetectTextOutcome;
      typedef Aws::Utils::Outcome<DistributeDatasetEntriesResult, RekognitionError> DistributeDatasetEntriesOutcome;
      typedef Aws::Utils::Outcome<GetCelebrityInfoResult, RekognitionError> GetCelebrityInfoOutcome;
      typedef Aws::Utils::Outcome<GetCelebrityRecognitionResult, RekognitionError> GetCelebrityRecognitionOutcome;
      typedef Aws::Utils::Outcome<GetContentModerationResult, RekognitionError> GetContentModerationOutcome;
      typedef Aws::Utils::Outcome<GetFaceDetectionResult, RekognitionError> GetFaceDetectionOutcome;
      typedef Aws::Utils::Outcome<GetFaceSearchResult, RekognitionError> GetFaceSearchOutcome;
      typedef Aws::Utils::Outcome<GetLabelDetectionResult, RekognitionError> GetLabelDetectionOutcome;
      typedef Aws::Utils::Outcome<GetPersonTrackingResult, RekognitionError> GetPersonTrackingOutcome;
      typedef Aws::Utils::Outcome<GetSegmentDetectionResult, RekognitionError> GetSegmentDetectionOutcome;
      typedef Aws::Utils::Outcome<GetTextDetectionResult, RekognitionError> GetTextDetectionOutcome;
      typedef Aws::Utils::Outcome<IndexFacesResult, RekognitionError> IndexFacesOutcome;
      typedef Aws::Utils::Outcome<ListCollectionsResult, RekognitionError> ListCollectionsOutcome;
      typedef Aws::Utils::Outcome<ListDatasetEntriesResult, RekognitionError> ListDatasetEntriesOutcome;
      typedef Aws::Utils::Outcome<ListDatasetLabelsResult, RekognitionError> ListDatasetLabelsOutcome;
      typedef Aws::Utils::Outcome<ListFacesResult, RekognitionError> ListFacesOutcome;
      typedef Aws::Utils::Outcome<ListProjectPoliciesResult, RekognitionError> ListProjectPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListStreamProcessorsResult, RekognitionError> ListStreamProcessorsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, RekognitionError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutProjectPolicyResult, RekognitionError> PutProjectPolicyOutcome;
      typedef Aws::Utils::Outcome<RecognizeCelebritiesResult, RekognitionError> RecognizeCelebritiesOutcome;
      typedef Aws::Utils::Outcome<SearchFacesResult, RekognitionError> SearchFacesOutcome;
      typedef Aws::Utils::Outcome<SearchFacesByImageResult, RekognitionError> SearchFacesByImageOutcome;
      typedef Aws::Utils::Outcome<StartCelebrityRecognitionResult, RekognitionError> StartCelebrityRecognitionOutcome;
      typedef Aws::Utils::Outcome<StartContentModerationResult, RekognitionError> StartContentModerationOutcome;
      typedef Aws::Utils::Outcome<StartFaceDetectionResult, RekognitionError> StartFaceDetectionOutcome;
      typedef Aws::Utils::Outcome<StartFaceSearchResult, RekognitionError> StartFaceSearchOutcome;
      typedef Aws::Utils::Outcome<StartLabelDetectionResult, RekognitionError> StartLabelDetectionOutcome;
      typedef Aws::Utils::Outcome<StartPersonTrackingResult, RekognitionError> StartPersonTrackingOutcome;
      typedef Aws::Utils::Outcome<StartProjectVersionResult, RekognitionError> StartProjectVersionOutcome;
      typedef Aws::Utils::Outcome<StartSegmentDetectionResult, RekognitionError> StartSegmentDetectionOutcome;
      typedef Aws::Utils::Outcome<StartStreamProcessorResult, RekognitionError> StartStreamProcessorOutcome;
      typedef Aws::Utils::Outcome<StartTextDetectionResult, RekognitionError> StartTextDetectionOutcome;
      typedef Aws::Utils::Outcome<StopProjectVersionResult, RekognitionError> StopProjectVersionOutcome;
      typedef Aws::Utils::Outcome<StopStreamProcessorResult, RekognitionError> StopStreamProcessorOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, RekognitionError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, RekognitionError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDatasetEntriesResult, RekognitionError> UpdateDatasetEntriesOutcome;
      typedef Aws::Utils::Outcome<UpdateStreamProcessorResult, RekognitionError> UpdateStreamProcessorOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CompareFacesOutcome> CompareFacesOutcomeCallable;
      typedef std::future<CopyProjectVersionOutcome> CopyProjectVersionOutcomeCallable;
      typedef std::future<CreateCollectionOutcome> CreateCollectionOutcomeCallable;
      typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
      typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
      typedef std::future<CreateProjectVersionOutcome> CreateProjectVersionOutcomeCallable;
      typedef std::future<CreateStreamProcessorOutcome> CreateStreamProcessorOutcomeCallable;
      typedef std::future<DeleteCollectionOutcome> DeleteCollectionOutcomeCallable;
      typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
      typedef std::future<DeleteFacesOutcome> DeleteFacesOutcomeCallable;
      typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
      typedef std::future<DeleteProjectPolicyOutcome> DeleteProjectPolicyOutcomeCallable;
      typedef std::future<DeleteProjectVersionOutcome> DeleteProjectVersionOutcomeCallable;
      typedef std::future<DeleteStreamProcessorOutcome> DeleteStreamProcessorOutcomeCallable;
      typedef std::future<DescribeCollectionOutcome> DescribeCollectionOutcomeCallable;
      typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
      typedef std::future<DescribeProjectVersionsOutcome> DescribeProjectVersionsOutcomeCallable;
      typedef std::future<DescribeProjectsOutcome> DescribeProjectsOutcomeCallable;
      typedef std::future<DescribeStreamProcessorOutcome> DescribeStreamProcessorOutcomeCallable;
      typedef std::future<DetectCustomLabelsOutcome> DetectCustomLabelsOutcomeCallable;
      typedef std::future<DetectFacesOutcome> DetectFacesOutcomeCallable;
      typedef std::future<DetectLabelsOutcome> DetectLabelsOutcomeCallable;
      typedef std::future<DetectModerationLabelsOutcome> DetectModerationLabelsOutcomeCallable;
      typedef std::future<DetectProtectiveEquipmentOutcome> DetectProtectiveEquipmentOutcomeCallable;
      typedef std::future<DetectTextOutcome> DetectTextOutcomeCallable;
      typedef std::future<DistributeDatasetEntriesOutcome> DistributeDatasetEntriesOutcomeCallable;
      typedef std::future<GetCelebrityInfoOutcome> GetCelebrityInfoOutcomeCallable;
      typedef std::future<GetCelebrityRecognitionOutcome> GetCelebrityRecognitionOutcomeCallable;
      typedef std::future<GetContentModerationOutcome> GetContentModerationOutcomeCallable;
      typedef std::future<GetFaceDetectionOutcome> GetFaceDetectionOutcomeCallable;
      typedef std::future<GetFaceSearchOutcome> GetFaceSearchOutcomeCallable;
      typedef std::future<GetLabelDetectionOutcome> GetLabelDetectionOutcomeCallable;
      typedef std::future<GetPersonTrackingOutcome> GetPersonTrackingOutcomeCallable;
      typedef std::future<GetSegmentDetectionOutcome> GetSegmentDetectionOutcomeCallable;
      typedef std::future<GetTextDetectionOutcome> GetTextDetectionOutcomeCallable;
      typedef std::future<IndexFacesOutcome> IndexFacesOutcomeCallable;
      typedef std::future<ListCollectionsOutcome> ListCollectionsOutcomeCallable;
      typedef std::future<ListDatasetEntriesOutcome> ListDatasetEntriesOutcomeCallable;
      typedef std::future<ListDatasetLabelsOutcome> ListDatasetLabelsOutcomeCallable;
      typedef std::future<ListFacesOutcome> ListFacesOutcomeCallable;
      typedef std::future<ListProjectPoliciesOutcome> ListProjectPoliciesOutcomeCallable;
      typedef std::future<ListStreamProcessorsOutcome> ListStreamProcessorsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutProjectPolicyOutcome> PutProjectPolicyOutcomeCallable;
      typedef std::future<RecognizeCelebritiesOutcome> RecognizeCelebritiesOutcomeCallable;
      typedef std::future<SearchFacesOutcome> SearchFacesOutcomeCallable;
      typedef std::future<SearchFacesByImageOutcome> SearchFacesByImageOutcomeCallable;
      typedef std::future<StartCelebrityRecognitionOutcome> StartCelebrityRecognitionOutcomeCallable;
      typedef std::future<StartContentModerationOutcome> StartContentModerationOutcomeCallable;
      typedef std::future<StartFaceDetectionOutcome> StartFaceDetectionOutcomeCallable;
      typedef std::future<StartFaceSearchOutcome> StartFaceSearchOutcomeCallable;
      typedef std::future<StartLabelDetectionOutcome> StartLabelDetectionOutcomeCallable;
      typedef std::future<StartPersonTrackingOutcome> StartPersonTrackingOutcomeCallable;
      typedef std::future<StartProjectVersionOutcome> StartProjectVersionOutcomeCallable;
      typedef std::future<StartSegmentDetectionOutcome> StartSegmentDetectionOutcomeCallable;
      typedef std::future<StartStreamProcessorOutcome> StartStreamProcessorOutcomeCallable;
      typedef std::future<StartTextDetectionOutcome> StartTextDetectionOutcomeCallable;
      typedef std::future<StopProjectVersionOutcome> StopProjectVersionOutcomeCallable;
      typedef std::future<StopStreamProcessorOutcome> StopStreamProcessorOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDatasetEntriesOutcome> UpdateDatasetEntriesOutcomeCallable;
      typedef std::future<UpdateStreamProcessorOutcome> UpdateStreamProcessorOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class RekognitionClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const RekognitionClient*, const Model::CompareFacesRequest&, const Model::CompareFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompareFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::CopyProjectVersionRequest&, const Model::CopyProjectVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyProjectVersionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::CreateCollectionRequest&, const Model::CreateCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCollectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::CreateProjectVersionRequest&, const Model::CreateProjectVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectVersionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::CreateStreamProcessorRequest&, const Model::CreateStreamProcessorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamProcessorResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DeleteCollectionRequest&, const Model::DeleteCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCollectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DeleteFacesRequest&, const Model::DeleteFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DeleteProjectPolicyRequest&, const Model::DeleteProjectPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectPolicyResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DeleteProjectVersionRequest&, const Model::DeleteProjectVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectVersionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DeleteStreamProcessorRequest&, const Model::DeleteStreamProcessorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamProcessorResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DescribeCollectionRequest&, const Model::DescribeCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCollectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DescribeProjectVersionsRequest&, const Model::DescribeProjectVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProjectVersionsResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DescribeProjectsRequest&, const Model::DescribeProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProjectsResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DescribeStreamProcessorRequest&, const Model::DescribeStreamProcessorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStreamProcessorResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DetectCustomLabelsRequest&, const Model::DetectCustomLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectCustomLabelsResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DetectFacesRequest&, const Model::DetectFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DetectLabelsRequest&, const Model::DetectLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectLabelsResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DetectModerationLabelsRequest&, const Model::DetectModerationLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectModerationLabelsResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DetectProtectiveEquipmentRequest&, const Model::DetectProtectiveEquipmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectProtectiveEquipmentResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DetectTextRequest&, const Model::DetectTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectTextResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DistributeDatasetEntriesRequest&, const Model::DistributeDatasetEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DistributeDatasetEntriesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetCelebrityInfoRequest&, const Model::GetCelebrityInfoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCelebrityInfoResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetCelebrityRecognitionRequest&, const Model::GetCelebrityRecognitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCelebrityRecognitionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetContentModerationRequest&, const Model::GetContentModerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContentModerationResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetFaceDetectionRequest&, const Model::GetFaceDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFaceDetectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetFaceSearchRequest&, const Model::GetFaceSearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFaceSearchResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetLabelDetectionRequest&, const Model::GetLabelDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLabelDetectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetPersonTrackingRequest&, const Model::GetPersonTrackingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPersonTrackingResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetSegmentDetectionRequest&, const Model::GetSegmentDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentDetectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetTextDetectionRequest&, const Model::GetTextDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTextDetectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::IndexFacesRequest&, const Model::IndexFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IndexFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::ListCollectionsRequest&, const Model::ListCollectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollectionsResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::ListDatasetEntriesRequest&, const Model::ListDatasetEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetEntriesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::ListDatasetLabelsRequest&, const Model::ListDatasetLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetLabelsResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::ListFacesRequest&, const Model::ListFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::ListProjectPoliciesRequest&, const Model::ListProjectPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectPoliciesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::ListStreamProcessorsRequest&, const Model::ListStreamProcessorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamProcessorsResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::PutProjectPolicyRequest&, const Model::PutProjectPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutProjectPolicyResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::RecognizeCelebritiesRequest&, const Model::RecognizeCelebritiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RecognizeCelebritiesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::SearchFacesRequest&, const Model::SearchFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::SearchFacesByImageRequest&, const Model::SearchFacesByImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchFacesByImageResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartCelebrityRecognitionRequest&, const Model::StartCelebrityRecognitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCelebrityRecognitionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartContentModerationRequest&, const Model::StartContentModerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartContentModerationResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartFaceDetectionRequest&, const Model::StartFaceDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFaceDetectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartFaceSearchRequest&, const Model::StartFaceSearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFaceSearchResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartLabelDetectionRequest&, const Model::StartLabelDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartLabelDetectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartPersonTrackingRequest&, const Model::StartPersonTrackingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPersonTrackingResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartProjectVersionRequest&, const Model::StartProjectVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartProjectVersionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartSegmentDetectionRequest&, const Model::StartSegmentDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSegmentDetectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartStreamProcessorRequest&, const Model::StartStreamProcessorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartStreamProcessorResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartTextDetectionRequest&, const Model::StartTextDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTextDetectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StopProjectVersionRequest&, const Model::StopProjectVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopProjectVersionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StopStreamProcessorRequest&, const Model::StopStreamProcessorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopStreamProcessorResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::UpdateDatasetEntriesRequest&, const Model::UpdateDatasetEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatasetEntriesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::UpdateStreamProcessorRequest&, const Model::UpdateStreamProcessorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStreamProcessorResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Rekognition
} // namespace Aws
