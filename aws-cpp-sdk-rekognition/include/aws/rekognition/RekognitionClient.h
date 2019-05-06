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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rekognition/model/CompareFacesResult.h>
#include <aws/rekognition/model/CreateCollectionResult.h>
#include <aws/rekognition/model/CreateStreamProcessorResult.h>
#include <aws/rekognition/model/DeleteCollectionResult.h>
#include <aws/rekognition/model/DeleteFacesResult.h>
#include <aws/rekognition/model/DeleteStreamProcessorResult.h>
#include <aws/rekognition/model/DescribeCollectionResult.h>
#include <aws/rekognition/model/DescribeStreamProcessorResult.h>
#include <aws/rekognition/model/DetectFacesResult.h>
#include <aws/rekognition/model/DetectLabelsResult.h>
#include <aws/rekognition/model/DetectModerationLabelsResult.h>
#include <aws/rekognition/model/DetectTextResult.h>
#include <aws/rekognition/model/GetCelebrityInfoResult.h>
#include <aws/rekognition/model/GetCelebrityRecognitionResult.h>
#include <aws/rekognition/model/GetContentModerationResult.h>
#include <aws/rekognition/model/GetFaceDetectionResult.h>
#include <aws/rekognition/model/GetFaceSearchResult.h>
#include <aws/rekognition/model/GetLabelDetectionResult.h>
#include <aws/rekognition/model/GetPersonTrackingResult.h>
#include <aws/rekognition/model/IndexFacesResult.h>
#include <aws/rekognition/model/ListCollectionsResult.h>
#include <aws/rekognition/model/ListFacesResult.h>
#include <aws/rekognition/model/ListStreamProcessorsResult.h>
#include <aws/rekognition/model/RecognizeCelebritiesResult.h>
#include <aws/rekognition/model/SearchFacesResult.h>
#include <aws/rekognition/model/SearchFacesByImageResult.h>
#include <aws/rekognition/model/StartCelebrityRecognitionResult.h>
#include <aws/rekognition/model/StartContentModerationResult.h>
#include <aws/rekognition/model/StartFaceDetectionResult.h>
#include <aws/rekognition/model/StartFaceSearchResult.h>
#include <aws/rekognition/model/StartLabelDetectionResult.h>
#include <aws/rekognition/model/StartPersonTrackingResult.h>
#include <aws/rekognition/model/StartStreamProcessorResult.h>
#include <aws/rekognition/model/StopStreamProcessorResult.h>
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

namespace Rekognition
{

namespace Model
{
        class CompareFacesRequest;
        class CreateCollectionRequest;
        class CreateStreamProcessorRequest;
        class DeleteCollectionRequest;
        class DeleteFacesRequest;
        class DeleteStreamProcessorRequest;
        class DescribeCollectionRequest;
        class DescribeStreamProcessorRequest;
        class DetectFacesRequest;
        class DetectLabelsRequest;
        class DetectModerationLabelsRequest;
        class DetectTextRequest;
        class GetCelebrityInfoRequest;
        class GetCelebrityRecognitionRequest;
        class GetContentModerationRequest;
        class GetFaceDetectionRequest;
        class GetFaceSearchRequest;
        class GetLabelDetectionRequest;
        class GetPersonTrackingRequest;
        class IndexFacesRequest;
        class ListCollectionsRequest;
        class ListFacesRequest;
        class ListStreamProcessorsRequest;
        class RecognizeCelebritiesRequest;
        class SearchFacesRequest;
        class SearchFacesByImageRequest;
        class StartCelebrityRecognitionRequest;
        class StartContentModerationRequest;
        class StartFaceDetectionRequest;
        class StartFaceSearchRequest;
        class StartLabelDetectionRequest;
        class StartPersonTrackingRequest;
        class StartStreamProcessorRequest;
        class StopStreamProcessorRequest;

        typedef Aws::Utils::Outcome<CompareFacesResult, Aws::Client::AWSError<RekognitionErrors>> CompareFacesOutcome;
        typedef Aws::Utils::Outcome<CreateCollectionResult, Aws::Client::AWSError<RekognitionErrors>> CreateCollectionOutcome;
        typedef Aws::Utils::Outcome<CreateStreamProcessorResult, Aws::Client::AWSError<RekognitionErrors>> CreateStreamProcessorOutcome;
        typedef Aws::Utils::Outcome<DeleteCollectionResult, Aws::Client::AWSError<RekognitionErrors>> DeleteCollectionOutcome;
        typedef Aws::Utils::Outcome<DeleteFacesResult, Aws::Client::AWSError<RekognitionErrors>> DeleteFacesOutcome;
        typedef Aws::Utils::Outcome<DeleteStreamProcessorResult, Aws::Client::AWSError<RekognitionErrors>> DeleteStreamProcessorOutcome;
        typedef Aws::Utils::Outcome<DescribeCollectionResult, Aws::Client::AWSError<RekognitionErrors>> DescribeCollectionOutcome;
        typedef Aws::Utils::Outcome<DescribeStreamProcessorResult, Aws::Client::AWSError<RekognitionErrors>> DescribeStreamProcessorOutcome;
        typedef Aws::Utils::Outcome<DetectFacesResult, Aws::Client::AWSError<RekognitionErrors>> DetectFacesOutcome;
        typedef Aws::Utils::Outcome<DetectLabelsResult, Aws::Client::AWSError<RekognitionErrors>> DetectLabelsOutcome;
        typedef Aws::Utils::Outcome<DetectModerationLabelsResult, Aws::Client::AWSError<RekognitionErrors>> DetectModerationLabelsOutcome;
        typedef Aws::Utils::Outcome<DetectTextResult, Aws::Client::AWSError<RekognitionErrors>> DetectTextOutcome;
        typedef Aws::Utils::Outcome<GetCelebrityInfoResult, Aws::Client::AWSError<RekognitionErrors>> GetCelebrityInfoOutcome;
        typedef Aws::Utils::Outcome<GetCelebrityRecognitionResult, Aws::Client::AWSError<RekognitionErrors>> GetCelebrityRecognitionOutcome;
        typedef Aws::Utils::Outcome<GetContentModerationResult, Aws::Client::AWSError<RekognitionErrors>> GetContentModerationOutcome;
        typedef Aws::Utils::Outcome<GetFaceDetectionResult, Aws::Client::AWSError<RekognitionErrors>> GetFaceDetectionOutcome;
        typedef Aws::Utils::Outcome<GetFaceSearchResult, Aws::Client::AWSError<RekognitionErrors>> GetFaceSearchOutcome;
        typedef Aws::Utils::Outcome<GetLabelDetectionResult, Aws::Client::AWSError<RekognitionErrors>> GetLabelDetectionOutcome;
        typedef Aws::Utils::Outcome<GetPersonTrackingResult, Aws::Client::AWSError<RekognitionErrors>> GetPersonTrackingOutcome;
        typedef Aws::Utils::Outcome<IndexFacesResult, Aws::Client::AWSError<RekognitionErrors>> IndexFacesOutcome;
        typedef Aws::Utils::Outcome<ListCollectionsResult, Aws::Client::AWSError<RekognitionErrors>> ListCollectionsOutcome;
        typedef Aws::Utils::Outcome<ListFacesResult, Aws::Client::AWSError<RekognitionErrors>> ListFacesOutcome;
        typedef Aws::Utils::Outcome<ListStreamProcessorsResult, Aws::Client::AWSError<RekognitionErrors>> ListStreamProcessorsOutcome;
        typedef Aws::Utils::Outcome<RecognizeCelebritiesResult, Aws::Client::AWSError<RekognitionErrors>> RecognizeCelebritiesOutcome;
        typedef Aws::Utils::Outcome<SearchFacesResult, Aws::Client::AWSError<RekognitionErrors>> SearchFacesOutcome;
        typedef Aws::Utils::Outcome<SearchFacesByImageResult, Aws::Client::AWSError<RekognitionErrors>> SearchFacesByImageOutcome;
        typedef Aws::Utils::Outcome<StartCelebrityRecognitionResult, Aws::Client::AWSError<RekognitionErrors>> StartCelebrityRecognitionOutcome;
        typedef Aws::Utils::Outcome<StartContentModerationResult, Aws::Client::AWSError<RekognitionErrors>> StartContentModerationOutcome;
        typedef Aws::Utils::Outcome<StartFaceDetectionResult, Aws::Client::AWSError<RekognitionErrors>> StartFaceDetectionOutcome;
        typedef Aws::Utils::Outcome<StartFaceSearchResult, Aws::Client::AWSError<RekognitionErrors>> StartFaceSearchOutcome;
        typedef Aws::Utils::Outcome<StartLabelDetectionResult, Aws::Client::AWSError<RekognitionErrors>> StartLabelDetectionOutcome;
        typedef Aws::Utils::Outcome<StartPersonTrackingResult, Aws::Client::AWSError<RekognitionErrors>> StartPersonTrackingOutcome;
        typedef Aws::Utils::Outcome<StartStreamProcessorResult, Aws::Client::AWSError<RekognitionErrors>> StartStreamProcessorOutcome;
        typedef Aws::Utils::Outcome<StopStreamProcessorResult, Aws::Client::AWSError<RekognitionErrors>> StopStreamProcessorOutcome;

        typedef std::future<CompareFacesOutcome> CompareFacesOutcomeCallable;
        typedef std::future<CreateCollectionOutcome> CreateCollectionOutcomeCallable;
        typedef std::future<CreateStreamProcessorOutcome> CreateStreamProcessorOutcomeCallable;
        typedef std::future<DeleteCollectionOutcome> DeleteCollectionOutcomeCallable;
        typedef std::future<DeleteFacesOutcome> DeleteFacesOutcomeCallable;
        typedef std::future<DeleteStreamProcessorOutcome> DeleteStreamProcessorOutcomeCallable;
        typedef std::future<DescribeCollectionOutcome> DescribeCollectionOutcomeCallable;
        typedef std::future<DescribeStreamProcessorOutcome> DescribeStreamProcessorOutcomeCallable;
        typedef std::future<DetectFacesOutcome> DetectFacesOutcomeCallable;
        typedef std::future<DetectLabelsOutcome> DetectLabelsOutcomeCallable;
        typedef std::future<DetectModerationLabelsOutcome> DetectModerationLabelsOutcomeCallable;
        typedef std::future<DetectTextOutcome> DetectTextOutcomeCallable;
        typedef std::future<GetCelebrityInfoOutcome> GetCelebrityInfoOutcomeCallable;
        typedef std::future<GetCelebrityRecognitionOutcome> GetCelebrityRecognitionOutcomeCallable;
        typedef std::future<GetContentModerationOutcome> GetContentModerationOutcomeCallable;
        typedef std::future<GetFaceDetectionOutcome> GetFaceDetectionOutcomeCallable;
        typedef std::future<GetFaceSearchOutcome> GetFaceSearchOutcomeCallable;
        typedef std::future<GetLabelDetectionOutcome> GetLabelDetectionOutcomeCallable;
        typedef std::future<GetPersonTrackingOutcome> GetPersonTrackingOutcomeCallable;
        typedef std::future<IndexFacesOutcome> IndexFacesOutcomeCallable;
        typedef std::future<ListCollectionsOutcome> ListCollectionsOutcomeCallable;
        typedef std::future<ListFacesOutcome> ListFacesOutcomeCallable;
        typedef std::future<ListStreamProcessorsOutcome> ListStreamProcessorsOutcomeCallable;
        typedef std::future<RecognizeCelebritiesOutcome> RecognizeCelebritiesOutcomeCallable;
        typedef std::future<SearchFacesOutcome> SearchFacesOutcomeCallable;
        typedef std::future<SearchFacesByImageOutcome> SearchFacesByImageOutcomeCallable;
        typedef std::future<StartCelebrityRecognitionOutcome> StartCelebrityRecognitionOutcomeCallable;
        typedef std::future<StartContentModerationOutcome> StartContentModerationOutcomeCallable;
        typedef std::future<StartFaceDetectionOutcome> StartFaceDetectionOutcomeCallable;
        typedef std::future<StartFaceSearchOutcome> StartFaceSearchOutcomeCallable;
        typedef std::future<StartLabelDetectionOutcome> StartLabelDetectionOutcomeCallable;
        typedef std::future<StartPersonTrackingOutcome> StartPersonTrackingOutcomeCallable;
        typedef std::future<StartStreamProcessorOutcome> StartStreamProcessorOutcomeCallable;
        typedef std::future<StopStreamProcessorOutcome> StopStreamProcessorOutcomeCallable;
} // namespace Model

  class RekognitionClient;

    typedef std::function<void(const RekognitionClient*, const Model::CompareFacesRequest&, const Model::CompareFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompareFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::CreateCollectionRequest&, const Model::CreateCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCollectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::CreateStreamProcessorRequest&, const Model::CreateStreamProcessorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamProcessorResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DeleteCollectionRequest&, const Model::DeleteCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCollectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DeleteFacesRequest&, const Model::DeleteFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DeleteStreamProcessorRequest&, const Model::DeleteStreamProcessorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamProcessorResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DescribeCollectionRequest&, const Model::DescribeCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCollectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DescribeStreamProcessorRequest&, const Model::DescribeStreamProcessorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStreamProcessorResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DetectFacesRequest&, const Model::DetectFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DetectLabelsRequest&, const Model::DetectLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectLabelsResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DetectModerationLabelsRequest&, const Model::DetectModerationLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectModerationLabelsResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DetectTextRequest&, const Model::DetectTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectTextResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetCelebrityInfoRequest&, const Model::GetCelebrityInfoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCelebrityInfoResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetCelebrityRecognitionRequest&, const Model::GetCelebrityRecognitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCelebrityRecognitionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetContentModerationRequest&, const Model::GetContentModerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContentModerationResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetFaceDetectionRequest&, const Model::GetFaceDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFaceDetectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetFaceSearchRequest&, const Model::GetFaceSearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFaceSearchResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetLabelDetectionRequest&, const Model::GetLabelDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLabelDetectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::GetPersonTrackingRequest&, const Model::GetPersonTrackingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPersonTrackingResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::IndexFacesRequest&, const Model::IndexFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IndexFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::ListCollectionsRequest&, const Model::ListCollectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollectionsResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::ListFacesRequest&, const Model::ListFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::ListStreamProcessorsRequest&, const Model::ListStreamProcessorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamProcessorsResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::RecognizeCelebritiesRequest&, const Model::RecognizeCelebritiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RecognizeCelebritiesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::SearchFacesRequest&, const Model::SearchFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::SearchFacesByImageRequest&, const Model::SearchFacesByImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchFacesByImageResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartCelebrityRecognitionRequest&, const Model::StartCelebrityRecognitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCelebrityRecognitionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartContentModerationRequest&, const Model::StartContentModerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartContentModerationResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartFaceDetectionRequest&, const Model::StartFaceDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFaceDetectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartFaceSearchRequest&, const Model::StartFaceSearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFaceSearchResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartLabelDetectionRequest&, const Model::StartLabelDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartLabelDetectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartPersonTrackingRequest&, const Model::StartPersonTrackingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPersonTrackingResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StartStreamProcessorRequest&, const Model::StartStreamProcessorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartStreamProcessorResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::StopStreamProcessorRequest&, const Model::StopStreamProcessorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopStreamProcessorResponseReceivedHandler;

  /**
   * <p>This is the Amazon Rekognition API reference.</p>
   */
  class AWS_REKOGNITION_API RekognitionClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RekognitionClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RekognitionClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RekognitionClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~RekognitionClient();

        inline virtual const char* GetServiceClientName() const override { return "Rekognition"; }


        /**
         * <p>Compares a face in the <i>source</i> input image with each of the 100 largest
         * faces detected in the <i>target</i> input image. </p> <note> <p> If the source
         * image contains multiple faces, the service detects the largest face and compares
         * it with each face detected in the target image. </p> </note> <p>You pass the
         * input and target images either as base64-encoded image bytes or as references to
         * images in an Amazon S3 bucket. If you use the AWS CLI to call Amazon Rekognition
         * operations, passing image bytes isn't supported. The image must be formatted as
         * a PNG or JPEG file. </p> <p>In response, the operation returns an array of face
         * matches ordered by similarity score in descending order. For each face match,
         * the response provides a bounding box of the face, facial landmarks, pose details
         * (pitch, role, and yaw), quality (brightness and sharpness), and confidence value
         * (indicating the level of confidence that the bounding box contains a face). The
         * response also provides a similarity score, which indicates how closely the faces
         * match. </p> <note> <p>By default, only faces with a similarity score of greater
         * than or equal to 80% are returned in the response. You can change this value by
         * specifying the <code>SimilarityThreshold</code> parameter.</p> </note> <p>
         * <code>CompareFaces</code> also returns an array of faces that don't match the
         * source image. For each face, it returns a bounding box, confidence value,
         * landmarks, pose details, and quality. The response also returns information
         * about the face in the source image, including the bounding box of the face and
         * confidence value.</p> <p>If the image doesn't contain Exif metadata,
         * <code>CompareFaces</code> returns orientation information for the source and
         * target images. Use these values to display the images with the correct image
         * orientation.</p> <p>If no faces are detected in the source or target images,
         * <code>CompareFaces</code> returns an <code>InvalidParameterException</code>
         * error. </p> <note> <p> This is a stateless API operation. That is, data returned
         * by this operation doesn't persist.</p> </note> <p>For an example, see Comparing
         * Faces in Images in the Amazon Rekognition Developer Guide.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:CompareFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CompareFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::CompareFacesOutcome CompareFaces(const Model::CompareFacesRequest& request) const;

        /**
         * <p>Compares a face in the <i>source</i> input image with each of the 100 largest
         * faces detected in the <i>target</i> input image. </p> <note> <p> If the source
         * image contains multiple faces, the service detects the largest face and compares
         * it with each face detected in the target image. </p> </note> <p>You pass the
         * input and target images either as base64-encoded image bytes or as references to
         * images in an Amazon S3 bucket. If you use the AWS CLI to call Amazon Rekognition
         * operations, passing image bytes isn't supported. The image must be formatted as
         * a PNG or JPEG file. </p> <p>In response, the operation returns an array of face
         * matches ordered by similarity score in descending order. For each face match,
         * the response provides a bounding box of the face, facial landmarks, pose details
         * (pitch, role, and yaw), quality (brightness and sharpness), and confidence value
         * (indicating the level of confidence that the bounding box contains a face). The
         * response also provides a similarity score, which indicates how closely the faces
         * match. </p> <note> <p>By default, only faces with a similarity score of greater
         * than or equal to 80% are returned in the response. You can change this value by
         * specifying the <code>SimilarityThreshold</code> parameter.</p> </note> <p>
         * <code>CompareFaces</code> also returns an array of faces that don't match the
         * source image. For each face, it returns a bounding box, confidence value,
         * landmarks, pose details, and quality. The response also returns information
         * about the face in the source image, including the bounding box of the face and
         * confidence value.</p> <p>If the image doesn't contain Exif metadata,
         * <code>CompareFaces</code> returns orientation information for the source and
         * target images. Use these values to display the images with the correct image
         * orientation.</p> <p>If no faces are detected in the source or target images,
         * <code>CompareFaces</code> returns an <code>InvalidParameterException</code>
         * error. </p> <note> <p> This is a stateless API operation. That is, data returned
         * by this operation doesn't persist.</p> </note> <p>For an example, see Comparing
         * Faces in Images in the Amazon Rekognition Developer Guide.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:CompareFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CompareFaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CompareFacesOutcomeCallable CompareFacesCallable(const Model::CompareFacesRequest& request) const;

        /**
         * <p>Compares a face in the <i>source</i> input image with each of the 100 largest
         * faces detected in the <i>target</i> input image. </p> <note> <p> If the source
         * image contains multiple faces, the service detects the largest face and compares
         * it with each face detected in the target image. </p> </note> <p>You pass the
         * input and target images either as base64-encoded image bytes or as references to
         * images in an Amazon S3 bucket. If you use the AWS CLI to call Amazon Rekognition
         * operations, passing image bytes isn't supported. The image must be formatted as
         * a PNG or JPEG file. </p> <p>In response, the operation returns an array of face
         * matches ordered by similarity score in descending order. For each face match,
         * the response provides a bounding box of the face, facial landmarks, pose details
         * (pitch, role, and yaw), quality (brightness and sharpness), and confidence value
         * (indicating the level of confidence that the bounding box contains a face). The
         * response also provides a similarity score, which indicates how closely the faces
         * match. </p> <note> <p>By default, only faces with a similarity score of greater
         * than or equal to 80% are returned in the response. You can change this value by
         * specifying the <code>SimilarityThreshold</code> parameter.</p> </note> <p>
         * <code>CompareFaces</code> also returns an array of faces that don't match the
         * source image. For each face, it returns a bounding box, confidence value,
         * landmarks, pose details, and quality. The response also returns information
         * about the face in the source image, including the bounding box of the face and
         * confidence value.</p> <p>If the image doesn't contain Exif metadata,
         * <code>CompareFaces</code> returns orientation information for the source and
         * target images. Use these values to display the images with the correct image
         * orientation.</p> <p>If no faces are detected in the source or target images,
         * <code>CompareFaces</code> returns an <code>InvalidParameterException</code>
         * error. </p> <note> <p> This is a stateless API operation. That is, data returned
         * by this operation doesn't persist.</p> </note> <p>For an example, see Comparing
         * Faces in Images in the Amazon Rekognition Developer Guide.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:CompareFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CompareFaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CompareFacesAsync(const Model::CompareFacesRequest& request, const CompareFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a collection in an AWS Region. You can add faces to the collection
         * using the <a>IndexFaces</a> operation. </p> <p>For example, you might create
         * collections, one for each of your application users. A user can then index faces
         * using the <code>IndexFaces</code> operation and persist results in a specific
         * collection. Then, a user can search the collection for faces in the
         * user-specific container. </p> <p>When you create a collection, it is associated
         * with the latest version of the face model version.</p> <note> <p>Collection
         * names are case-sensitive.</p> </note> <p>This operation requires permissions to
         * perform the <code>rekognition:CreateCollection</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCollectionOutcome CreateCollection(const Model::CreateCollectionRequest& request) const;

        /**
         * <p>Creates a collection in an AWS Region. You can add faces to the collection
         * using the <a>IndexFaces</a> operation. </p> <p>For example, you might create
         * collections, one for each of your application users. A user can then index faces
         * using the <code>IndexFaces</code> operation and persist results in a specific
         * collection. Then, a user can search the collection for faces in the
         * user-specific container. </p> <p>When you create a collection, it is associated
         * with the latest version of the face model version.</p> <note> <p>Collection
         * names are case-sensitive.</p> </note> <p>This operation requires permissions to
         * perform the <code>rekognition:CreateCollection</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateCollection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCollectionOutcomeCallable CreateCollectionCallable(const Model::CreateCollectionRequest& request) const;

        /**
         * <p>Creates a collection in an AWS Region. You can add faces to the collection
         * using the <a>IndexFaces</a> operation. </p> <p>For example, you might create
         * collections, one for each of your application users. A user can then index faces
         * using the <code>IndexFaces</code> operation and persist results in a specific
         * collection. Then, a user can search the collection for faces in the
         * user-specific container. </p> <p>When you create a collection, it is associated
         * with the latest version of the face model version.</p> <note> <p>Collection
         * names are case-sensitive.</p> </note> <p>This operation requires permissions to
         * perform the <code>rekognition:CreateCollection</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateCollection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCollectionAsync(const Model::CreateCollectionRequest& request, const CreateCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Rekognition stream processor that you can use to detect and
         * recognize faces in a streaming video.</p> <p>Amazon Rekognition Video is a
         * consumer of live video from Amazon Kinesis Video Streams. Amazon Rekognition
         * Video sends analysis results to Amazon Kinesis Data Streams.</p> <p>You provide
         * as input a Kinesis video stream (<code>Input</code>) and a Kinesis data stream
         * (<code>Output</code>) stream. You also specify the face recognition criteria in
         * <code>Settings</code>. For example, the collection containing faces that you
         * want to recognize. Use <code>Name</code> to assign an identifier for the stream
         * processor. You use <code>Name</code> to manage the stream processor. For
         * example, you can start processing the source video by calling
         * <a>StartStreamProcessor</a> with the <code>Name</code> field. </p> <p>After you
         * have finished analyzing a streaming video, use <a>StopStreamProcessor</a> to
         * stop processing. You can delete the stream processor by calling
         * <a>DeleteStreamProcessor</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateStreamProcessor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamProcessorOutcome CreateStreamProcessor(const Model::CreateStreamProcessorRequest& request) const;

        /**
         * <p>Creates an Amazon Rekognition stream processor that you can use to detect and
         * recognize faces in a streaming video.</p> <p>Amazon Rekognition Video is a
         * consumer of live video from Amazon Kinesis Video Streams. Amazon Rekognition
         * Video sends analysis results to Amazon Kinesis Data Streams.</p> <p>You provide
         * as input a Kinesis video stream (<code>Input</code>) and a Kinesis data stream
         * (<code>Output</code>) stream. You also specify the face recognition criteria in
         * <code>Settings</code>. For example, the collection containing faces that you
         * want to recognize. Use <code>Name</code> to assign an identifier for the stream
         * processor. You use <code>Name</code> to manage the stream processor. For
         * example, you can start processing the source video by calling
         * <a>StartStreamProcessor</a> with the <code>Name</code> field. </p> <p>After you
         * have finished analyzing a streaming video, use <a>StopStreamProcessor</a> to
         * stop processing. You can delete the stream processor by calling
         * <a>DeleteStreamProcessor</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateStreamProcessor">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamProcessorOutcomeCallable CreateStreamProcessorCallable(const Model::CreateStreamProcessorRequest& request) const;

        /**
         * <p>Creates an Amazon Rekognition stream processor that you can use to detect and
         * recognize faces in a streaming video.</p> <p>Amazon Rekognition Video is a
         * consumer of live video from Amazon Kinesis Video Streams. Amazon Rekognition
         * Video sends analysis results to Amazon Kinesis Data Streams.</p> <p>You provide
         * as input a Kinesis video stream (<code>Input</code>) and a Kinesis data stream
         * (<code>Output</code>) stream. You also specify the face recognition criteria in
         * <code>Settings</code>. For example, the collection containing faces that you
         * want to recognize. Use <code>Name</code> to assign an identifier for the stream
         * processor. You use <code>Name</code> to manage the stream processor. For
         * example, you can start processing the source video by calling
         * <a>StartStreamProcessor</a> with the <code>Name</code> field. </p> <p>After you
         * have finished analyzing a streaming video, use <a>StopStreamProcessor</a> to
         * stop processing. You can delete the stream processor by calling
         * <a>DeleteStreamProcessor</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateStreamProcessor">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamProcessorAsync(const Model::CreateStreamProcessorRequest& request, const CreateStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified collection. Note that this operation removes all faces
         * in the collection. For an example, see <a>delete-collection-procedure</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>rekognition:DeleteCollection</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCollectionOutcome DeleteCollection(const Model::DeleteCollectionRequest& request) const;

        /**
         * <p>Deletes the specified collection. Note that this operation removes all faces
         * in the collection. For an example, see <a>delete-collection-procedure</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>rekognition:DeleteCollection</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteCollection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCollectionOutcomeCallable DeleteCollectionCallable(const Model::DeleteCollectionRequest& request) const;

        /**
         * <p>Deletes the specified collection. Note that this operation removes all faces
         * in the collection. For an example, see <a>delete-collection-procedure</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>rekognition:DeleteCollection</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteCollection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCollectionAsync(const Model::DeleteCollectionRequest& request, const DeleteCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes faces from a collection. You specify a collection ID and an array of
         * face IDs to remove from the collection.</p> <p>This operation requires
         * permissions to perform the <code>rekognition:DeleteFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFacesOutcome DeleteFaces(const Model::DeleteFacesRequest& request) const;

        /**
         * <p>Deletes faces from a collection. You specify a collection ID and an array of
         * face IDs to remove from the collection.</p> <p>This operation requires
         * permissions to perform the <code>rekognition:DeleteFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteFaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFacesOutcomeCallable DeleteFacesCallable(const Model::DeleteFacesRequest& request) const;

        /**
         * <p>Deletes faces from a collection. You specify a collection ID and an array of
         * face IDs to remove from the collection.</p> <p>This operation requires
         * permissions to perform the <code>rekognition:DeleteFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteFaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFacesAsync(const Model::DeleteFacesRequest& request, const DeleteFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the stream processor identified by <code>Name</code>. You assign the
         * value for <code>Name</code> when you create the stream processor with
         * <a>CreateStreamProcessor</a>. You might not be able to use the same name for a
         * stream processor for a few seconds after calling
         * <code>DeleteStreamProcessor</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteStreamProcessor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamProcessorOutcome DeleteStreamProcessor(const Model::DeleteStreamProcessorRequest& request) const;

        /**
         * <p>Deletes the stream processor identified by <code>Name</code>. You assign the
         * value for <code>Name</code> when you create the stream processor with
         * <a>CreateStreamProcessor</a>. You might not be able to use the same name for a
         * stream processor for a few seconds after calling
         * <code>DeleteStreamProcessor</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteStreamProcessor">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamProcessorOutcomeCallable DeleteStreamProcessorCallable(const Model::DeleteStreamProcessorRequest& request) const;

        /**
         * <p>Deletes the stream processor identified by <code>Name</code>. You assign the
         * value for <code>Name</code> when you create the stream processor with
         * <a>CreateStreamProcessor</a>. You might not be able to use the same name for a
         * stream processor for a few seconds after calling
         * <code>DeleteStreamProcessor</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteStreamProcessor">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamProcessorAsync(const Model::DeleteStreamProcessorRequest& request, const DeleteStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified collection. You can use
         * <code>DescribeCollection</code> to get information, such as the number of faces
         * indexed into a collection and the version of the model used by the collection
         * for face detection.</p> <p>For more information, see Describing a Collection in
         * the Amazon Rekognition Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DescribeCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCollectionOutcome DescribeCollection(const Model::DescribeCollectionRequest& request) const;

        /**
         * <p>Describes the specified collection. You can use
         * <code>DescribeCollection</code> to get information, such as the number of faces
         * indexed into a collection and the version of the model used by the collection
         * for face detection.</p> <p>For more information, see Describing a Collection in
         * the Amazon Rekognition Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DescribeCollection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCollectionOutcomeCallable DescribeCollectionCallable(const Model::DescribeCollectionRequest& request) const;

        /**
         * <p>Describes the specified collection. You can use
         * <code>DescribeCollection</code> to get information, such as the number of faces
         * indexed into a collection and the version of the model used by the collection
         * for face detection.</p> <p>For more information, see Describing a Collection in
         * the Amazon Rekognition Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DescribeCollection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCollectionAsync(const Model::DescribeCollectionRequest& request, const DescribeCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about a stream processor created by
         * <a>CreateStreamProcessor</a>. You can get information about the input and output
         * streams, the input parameters for the face recognition being performed, and the
         * current status of the stream processor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DescribeStreamProcessor">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStreamProcessorOutcome DescribeStreamProcessor(const Model::DescribeStreamProcessorRequest& request) const;

        /**
         * <p>Provides information about a stream processor created by
         * <a>CreateStreamProcessor</a>. You can get information about the input and output
         * streams, the input parameters for the face recognition being performed, and the
         * current status of the stream processor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DescribeStreamProcessor">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStreamProcessorOutcomeCallable DescribeStreamProcessorCallable(const Model::DescribeStreamProcessorRequest& request) const;

        /**
         * <p>Provides information about a stream processor created by
         * <a>CreateStreamProcessor</a>. You can get information about the input and output
         * streams, the input parameters for the face recognition being performed, and the
         * current status of the stream processor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DescribeStreamProcessor">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStreamProcessorAsync(const Model::DescribeStreamProcessorRequest& request, const DescribeStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects faces within an image that is provided as input.</p> <p>
         * <code>DetectFaces</code> detects the 100 largest faces in the image. For each
         * face detected, the operation returns face details. These details include a
         * bounding box of the face, a confidence value (that the bounding box contains a
         * face), and a fixed set of attributes such as facial landmarks (for example,
         * coordinates of eye and mouth), gender, presence of beard, sunglasses, and so on.
         * </p> <p>The face-detection algorithm is most effective on frontal faces. For
         * non-frontal or obscured faces, the algorithm might not detect the faces or might
         * detect faces with lower confidence. </p> <p>You pass the input image either as
         * base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket.
         * If you use the to call Amazon Rekognition operations, passing image bytes is not
         * supported. The image must be either a PNG or JPEG formatted file. </p> <note>
         * <p>This is a stateless API operation. That is, the operation does not persist
         * any data.</p> </note> <p>This operation requires permissions to perform the
         * <code>rekognition:DetectFaces</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectFacesOutcome DetectFaces(const Model::DetectFacesRequest& request) const;

        /**
         * <p>Detects faces within an image that is provided as input.</p> <p>
         * <code>DetectFaces</code> detects the 100 largest faces in the image. For each
         * face detected, the operation returns face details. These details include a
         * bounding box of the face, a confidence value (that the bounding box contains a
         * face), and a fixed set of attributes such as facial landmarks (for example,
         * coordinates of eye and mouth), gender, presence of beard, sunglasses, and so on.
         * </p> <p>The face-detection algorithm is most effective on frontal faces. For
         * non-frontal or obscured faces, the algorithm might not detect the faces or might
         * detect faces with lower confidence. </p> <p>You pass the input image either as
         * base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket.
         * If you use the to call Amazon Rekognition operations, passing image bytes is not
         * supported. The image must be either a PNG or JPEG formatted file. </p> <note>
         * <p>This is a stateless API operation. That is, the operation does not persist
         * any data.</p> </note> <p>This operation requires permissions to perform the
         * <code>rekognition:DetectFaces</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectFaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectFacesOutcomeCallable DetectFacesCallable(const Model::DetectFacesRequest& request) const;

        /**
         * <p>Detects faces within an image that is provided as input.</p> <p>
         * <code>DetectFaces</code> detects the 100 largest faces in the image. For each
         * face detected, the operation returns face details. These details include a
         * bounding box of the face, a confidence value (that the bounding box contains a
         * face), and a fixed set of attributes such as facial landmarks (for example,
         * coordinates of eye and mouth), gender, presence of beard, sunglasses, and so on.
         * </p> <p>The face-detection algorithm is most effective on frontal faces. For
         * non-frontal or obscured faces, the algorithm might not detect the faces or might
         * detect faces with lower confidence. </p> <p>You pass the input image either as
         * base64-encoded image bytes or as a reference to an image in an Amazon S3 bucket.
         * If you use the to call Amazon Rekognition operations, passing image bytes is not
         * supported. The image must be either a PNG or JPEG formatted file. </p> <note>
         * <p>This is a stateless API operation. That is, the operation does not persist
         * any data.</p> </note> <p>This operation requires permissions to perform the
         * <code>rekognition:DetectFaces</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectFaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectFacesAsync(const Model::DetectFacesRequest& request, const DetectFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects instances of real-world entities within an image (JPEG or PNG)
         * provided as input. This includes objects like flower, tree, and table; events
         * like wedding, graduation, and birthday party; and concepts like landscape,
         * evening, and nature. </p> <p>For an example, see Analyzing Images Stored in an
         * Amazon S3 Bucket in the Amazon Rekognition Developer Guide.</p> <note> <p>
         * <code>DetectLabels</code> does not support the detection of activities. However,
         * activity detection is supported for label detection in videos. For more
         * information, see StartLabelDetection in the Amazon Rekognition Developer
         * Guide.</p> </note> <p>You pass the input image as base64-encoded image bytes or
         * as a reference to an image in an Amazon S3 bucket. If you use the AWS CLI to
         * call Amazon Rekognition operations, passing image bytes is not supported. The
         * image must be either a PNG or JPEG formatted file. </p> <p> For each object,
         * scene, and concept the API returns one or more labels. Each label provides the
         * object name, and the level of confidence that the image contains the object. For
         * example, suppose the input image has a lighthouse, the sea, and a rock. The
         * response includes all three labels, one for each object. </p> <p> <code>{Name:
         * lighthouse, Confidence: 98.4629}</code> </p> <p> <code>{Name: rock,Confidence:
         * 79.2097}</code> </p> <p> <code> {Name: sea,Confidence: 75.061}</code> </p> <p>In
         * the preceding example, the operation returns one label for each of the three
         * objects. The operation can also return multiple labels for the same object in
         * the image. For example, if the input image shows a flower (for example, a
         * tulip), the operation might return the following three labels. </p> <p>
         * <code>{Name: flower,Confidence: 99.0562}</code> </p> <p> <code>{Name:
         * plant,Confidence: 99.0562}</code> </p> <p> <code>{Name: tulip,Confidence:
         * 99.0562}</code> </p> <p>In this example, the detection algorithm more precisely
         * identifies the flower as a tulip.</p> <p>In response, the API returns an array
         * of labels. In addition, the response also includes the orientation correction.
         * Optionally, you can specify <code>MinConfidence</code> to control the confidence
         * threshold for the labels returned. The default is 55%. You can also add the
         * <code>MaxLabels</code> parameter to limit the number of labels returned. </p>
         * <note> <p>If the object detected is a person, the operation doesn't provide the
         * same facial details that the <a>DetectFaces</a> operation provides.</p> </note>
         * <p> <code>DetectLabels</code> returns bounding boxes for instances of common
         * object labels in an array of <a>Instance</a> objects. An <code>Instance</code>
         * object contains a <a>BoundingBox</a> object, for the location of the label on
         * the image. It also includes the confidence by which the bounding box was
         * detected.</p> <p> <code>DetectLabels</code> also returns a hierarchical taxonomy
         * of detected labels. For example, a detected car might be assigned the label
         * <i>car</i>. The label <i>car</i> has two parent labels: <i>Vehicle</i> (its
         * parent) and <i>Transportation</i> (its grandparent). The response returns the
         * entire list of ancestors for a label. Each ancestor is a unique label in the
         * response. In the previous example, <i>Car</i>, <i>Vehicle</i>, and
         * <i>Transportation</i> are returned as unique labels in the response. </p>
         * <p>This is a stateless API operation. That is, the operation does not persist
         * any data.</p> <p>This operation requires permissions to perform the
         * <code>rekognition:DetectLabels</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectLabelsOutcome DetectLabels(const Model::DetectLabelsRequest& request) const;

        /**
         * <p>Detects instances of real-world entities within an image (JPEG or PNG)
         * provided as input. This includes objects like flower, tree, and table; events
         * like wedding, graduation, and birthday party; and concepts like landscape,
         * evening, and nature. </p> <p>For an example, see Analyzing Images Stored in an
         * Amazon S3 Bucket in the Amazon Rekognition Developer Guide.</p> <note> <p>
         * <code>DetectLabels</code> does not support the detection of activities. However,
         * activity detection is supported for label detection in videos. For more
         * information, see StartLabelDetection in the Amazon Rekognition Developer
         * Guide.</p> </note> <p>You pass the input image as base64-encoded image bytes or
         * as a reference to an image in an Amazon S3 bucket. If you use the AWS CLI to
         * call Amazon Rekognition operations, passing image bytes is not supported. The
         * image must be either a PNG or JPEG formatted file. </p> <p> For each object,
         * scene, and concept the API returns one or more labels. Each label provides the
         * object name, and the level of confidence that the image contains the object. For
         * example, suppose the input image has a lighthouse, the sea, and a rock. The
         * response includes all three labels, one for each object. </p> <p> <code>{Name:
         * lighthouse, Confidence: 98.4629}</code> </p> <p> <code>{Name: rock,Confidence:
         * 79.2097}</code> </p> <p> <code> {Name: sea,Confidence: 75.061}</code> </p> <p>In
         * the preceding example, the operation returns one label for each of the three
         * objects. The operation can also return multiple labels for the same object in
         * the image. For example, if the input image shows a flower (for example, a
         * tulip), the operation might return the following three labels. </p> <p>
         * <code>{Name: flower,Confidence: 99.0562}</code> </p> <p> <code>{Name:
         * plant,Confidence: 99.0562}</code> </p> <p> <code>{Name: tulip,Confidence:
         * 99.0562}</code> </p> <p>In this example, the detection algorithm more precisely
         * identifies the flower as a tulip.</p> <p>In response, the API returns an array
         * of labels. In addition, the response also includes the orientation correction.
         * Optionally, you can specify <code>MinConfidence</code> to control the confidence
         * threshold for the labels returned. The default is 55%. You can also add the
         * <code>MaxLabels</code> parameter to limit the number of labels returned. </p>
         * <note> <p>If the object detected is a person, the operation doesn't provide the
         * same facial details that the <a>DetectFaces</a> operation provides.</p> </note>
         * <p> <code>DetectLabels</code> returns bounding boxes for instances of common
         * object labels in an array of <a>Instance</a> objects. An <code>Instance</code>
         * object contains a <a>BoundingBox</a> object, for the location of the label on
         * the image. It also includes the confidence by which the bounding box was
         * detected.</p> <p> <code>DetectLabels</code> also returns a hierarchical taxonomy
         * of detected labels. For example, a detected car might be assigned the label
         * <i>car</i>. The label <i>car</i> has two parent labels: <i>Vehicle</i> (its
         * parent) and <i>Transportation</i> (its grandparent). The response returns the
         * entire list of ancestors for a label. Each ancestor is a unique label in the
         * response. In the previous example, <i>Car</i>, <i>Vehicle</i>, and
         * <i>Transportation</i> are returned as unique labels in the response. </p>
         * <p>This is a stateless API operation. That is, the operation does not persist
         * any data.</p> <p>This operation requires permissions to perform the
         * <code>rekognition:DetectLabels</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectLabels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectLabelsOutcomeCallable DetectLabelsCallable(const Model::DetectLabelsRequest& request) const;

        /**
         * <p>Detects instances of real-world entities within an image (JPEG or PNG)
         * provided as input. This includes objects like flower, tree, and table; events
         * like wedding, graduation, and birthday party; and concepts like landscape,
         * evening, and nature. </p> <p>For an example, see Analyzing Images Stored in an
         * Amazon S3 Bucket in the Amazon Rekognition Developer Guide.</p> <note> <p>
         * <code>DetectLabels</code> does not support the detection of activities. However,
         * activity detection is supported for label detection in videos. For more
         * information, see StartLabelDetection in the Amazon Rekognition Developer
         * Guide.</p> </note> <p>You pass the input image as base64-encoded image bytes or
         * as a reference to an image in an Amazon S3 bucket. If you use the AWS CLI to
         * call Amazon Rekognition operations, passing image bytes is not supported. The
         * image must be either a PNG or JPEG formatted file. </p> <p> For each object,
         * scene, and concept the API returns one or more labels. Each label provides the
         * object name, and the level of confidence that the image contains the object. For
         * example, suppose the input image has a lighthouse, the sea, and a rock. The
         * response includes all three labels, one for each object. </p> <p> <code>{Name:
         * lighthouse, Confidence: 98.4629}</code> </p> <p> <code>{Name: rock,Confidence:
         * 79.2097}</code> </p> <p> <code> {Name: sea,Confidence: 75.061}</code> </p> <p>In
         * the preceding example, the operation returns one label for each of the three
         * objects. The operation can also return multiple labels for the same object in
         * the image. For example, if the input image shows a flower (for example, a
         * tulip), the operation might return the following three labels. </p> <p>
         * <code>{Name: flower,Confidence: 99.0562}</code> </p> <p> <code>{Name:
         * plant,Confidence: 99.0562}</code> </p> <p> <code>{Name: tulip,Confidence:
         * 99.0562}</code> </p> <p>In this example, the detection algorithm more precisely
         * identifies the flower as a tulip.</p> <p>In response, the API returns an array
         * of labels. In addition, the response also includes the orientation correction.
         * Optionally, you can specify <code>MinConfidence</code> to control the confidence
         * threshold for the labels returned. The default is 55%. You can also add the
         * <code>MaxLabels</code> parameter to limit the number of labels returned. </p>
         * <note> <p>If the object detected is a person, the operation doesn't provide the
         * same facial details that the <a>DetectFaces</a> operation provides.</p> </note>
         * <p> <code>DetectLabels</code> returns bounding boxes for instances of common
         * object labels in an array of <a>Instance</a> objects. An <code>Instance</code>
         * object contains a <a>BoundingBox</a> object, for the location of the label on
         * the image. It also includes the confidence by which the bounding box was
         * detected.</p> <p> <code>DetectLabels</code> also returns a hierarchical taxonomy
         * of detected labels. For example, a detected car might be assigned the label
         * <i>car</i>. The label <i>car</i> has two parent labels: <i>Vehicle</i> (its
         * parent) and <i>Transportation</i> (its grandparent). The response returns the
         * entire list of ancestors for a label. Each ancestor is a unique label in the
         * response. In the previous example, <i>Car</i>, <i>Vehicle</i>, and
         * <i>Transportation</i> are returned as unique labels in the response. </p>
         * <p>This is a stateless API operation. That is, the operation does not persist
         * any data.</p> <p>This operation requires permissions to perform the
         * <code>rekognition:DetectLabels</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectLabels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectLabelsAsync(const Model::DetectLabelsRequest& request, const DetectLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects explicit or suggestive adult content in a specified JPEG or PNG
         * format image. Use <code>DetectModerationLabels</code> to moderate images
         * depending on your requirements. For example, you might want to filter images
         * that contain nudity, but not images containing suggestive content.</p> <p>To
         * filter images, use the labels returned by <code>DetectModerationLabels</code> to
         * determine which types of content are appropriate.</p> <p>For information about
         * moderation labels, see Detecting Unsafe Content in the Amazon Rekognition
         * Developer Guide.</p> <p>You pass the input image either as base64-encoded image
         * bytes or as a reference to an image in an Amazon S3 bucket. If you use the AWS
         * CLI to call Amazon Rekognition operations, passing image bytes is not supported.
         * The image must be either a PNG or JPEG formatted file. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectModerationLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectModerationLabelsOutcome DetectModerationLabels(const Model::DetectModerationLabelsRequest& request) const;

        /**
         * <p>Detects explicit or suggestive adult content in a specified JPEG or PNG
         * format image. Use <code>DetectModerationLabels</code> to moderate images
         * depending on your requirements. For example, you might want to filter images
         * that contain nudity, but not images containing suggestive content.</p> <p>To
         * filter images, use the labels returned by <code>DetectModerationLabels</code> to
         * determine which types of content are appropriate.</p> <p>For information about
         * moderation labels, see Detecting Unsafe Content in the Amazon Rekognition
         * Developer Guide.</p> <p>You pass the input image either as base64-encoded image
         * bytes or as a reference to an image in an Amazon S3 bucket. If you use the AWS
         * CLI to call Amazon Rekognition operations, passing image bytes is not supported.
         * The image must be either a PNG or JPEG formatted file. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectModerationLabels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectModerationLabelsOutcomeCallable DetectModerationLabelsCallable(const Model::DetectModerationLabelsRequest& request) const;

        /**
         * <p>Detects explicit or suggestive adult content in a specified JPEG or PNG
         * format image. Use <code>DetectModerationLabels</code> to moderate images
         * depending on your requirements. For example, you might want to filter images
         * that contain nudity, but not images containing suggestive content.</p> <p>To
         * filter images, use the labels returned by <code>DetectModerationLabels</code> to
         * determine which types of content are appropriate.</p> <p>For information about
         * moderation labels, see Detecting Unsafe Content in the Amazon Rekognition
         * Developer Guide.</p> <p>You pass the input image either as base64-encoded image
         * bytes or as a reference to an image in an Amazon S3 bucket. If you use the AWS
         * CLI to call Amazon Rekognition operations, passing image bytes is not supported.
         * The image must be either a PNG or JPEG formatted file. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectModerationLabels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectModerationLabelsAsync(const Model::DetectModerationLabelsRequest& request, const DetectModerationLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects text in the input image and converts it into machine-readable
         * text.</p> <p>Pass the input image as base64-encoded image bytes or as a
         * reference to an image in an Amazon S3 bucket. If you use the AWS CLI to call
         * Amazon Rekognition operations, you must pass it as a reference to an image in an
         * Amazon S3 bucket. For the AWS CLI, passing image bytes is not supported. The
         * image must be either a .png or .jpeg formatted file. </p> <p>The
         * <code>DetectText</code> operation returns text in an array of
         * <a>TextDetection</a> elements, <code>TextDetections</code>. Each
         * <code>TextDetection</code> element provides information about a single word or
         * line of text that was detected in the image. </p> <p>A word is one or more ISO
         * basic latin script characters that are not separated by spaces.
         * <code>DetectText</code> can detect up to 50 words in an image.</p> <p>A line is
         * a string of equally spaced words. A line isn't necessarily a complete sentence.
         * For example, a driver's license number is detected as a line. A line ends when
         * there is no aligned text after it. Also, a line ends when there is a large gap
         * between words, relative to the length of the words. This means, depending on the
         * gap between words, Amazon Rekognition may detect multiple lines in text aligned
         * in the same direction. Periods don't represent the end of a line. If a sentence
         * spans multiple lines, the <code>DetectText</code> operation returns multiple
         * lines.</p> <p>To determine whether a <code>TextDetection</code> element is a
         * line of text or a word, use the <code>TextDetection</code> object
         * <code>Type</code> field. </p> <p>To be detected, text must be within +/- 90
         * degrees orientation of the horizontal axis.</p> <p>For more information, see
         * DetectText in the Amazon Rekognition Developer Guide.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectText">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectTextOutcome DetectText(const Model::DetectTextRequest& request) const;

        /**
         * <p>Detects text in the input image and converts it into machine-readable
         * text.</p> <p>Pass the input image as base64-encoded image bytes or as a
         * reference to an image in an Amazon S3 bucket. If you use the AWS CLI to call
         * Amazon Rekognition operations, you must pass it as a reference to an image in an
         * Amazon S3 bucket. For the AWS CLI, passing image bytes is not supported. The
         * image must be either a .png or .jpeg formatted file. </p> <p>The
         * <code>DetectText</code> operation returns text in an array of
         * <a>TextDetection</a> elements, <code>TextDetections</code>. Each
         * <code>TextDetection</code> element provides information about a single word or
         * line of text that was detected in the image. </p> <p>A word is one or more ISO
         * basic latin script characters that are not separated by spaces.
         * <code>DetectText</code> can detect up to 50 words in an image.</p> <p>A line is
         * a string of equally spaced words. A line isn't necessarily a complete sentence.
         * For example, a driver's license number is detected as a line. A line ends when
         * there is no aligned text after it. Also, a line ends when there is a large gap
         * between words, relative to the length of the words. This means, depending on the
         * gap between words, Amazon Rekognition may detect multiple lines in text aligned
         * in the same direction. Periods don't represent the end of a line. If a sentence
         * spans multiple lines, the <code>DetectText</code> operation returns multiple
         * lines.</p> <p>To determine whether a <code>TextDetection</code> element is a
         * line of text or a word, use the <code>TextDetection</code> object
         * <code>Type</code> field. </p> <p>To be detected, text must be within +/- 90
         * degrees orientation of the horizontal axis.</p> <p>For more information, see
         * DetectText in the Amazon Rekognition Developer Guide.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectText">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectTextOutcomeCallable DetectTextCallable(const Model::DetectTextRequest& request) const;

        /**
         * <p>Detects text in the input image and converts it into machine-readable
         * text.</p> <p>Pass the input image as base64-encoded image bytes or as a
         * reference to an image in an Amazon S3 bucket. If you use the AWS CLI to call
         * Amazon Rekognition operations, you must pass it as a reference to an image in an
         * Amazon S3 bucket. For the AWS CLI, passing image bytes is not supported. The
         * image must be either a .png or .jpeg formatted file. </p> <p>The
         * <code>DetectText</code> operation returns text in an array of
         * <a>TextDetection</a> elements, <code>TextDetections</code>. Each
         * <code>TextDetection</code> element provides information about a single word or
         * line of text that was detected in the image. </p> <p>A word is one or more ISO
         * basic latin script characters that are not separated by spaces.
         * <code>DetectText</code> can detect up to 50 words in an image.</p> <p>A line is
         * a string of equally spaced words. A line isn't necessarily a complete sentence.
         * For example, a driver's license number is detected as a line. A line ends when
         * there is no aligned text after it. Also, a line ends when there is a large gap
         * between words, relative to the length of the words. This means, depending on the
         * gap between words, Amazon Rekognition may detect multiple lines in text aligned
         * in the same direction. Periods don't represent the end of a line. If a sentence
         * spans multiple lines, the <code>DetectText</code> operation returns multiple
         * lines.</p> <p>To determine whether a <code>TextDetection</code> element is a
         * line of text or a word, use the <code>TextDetection</code> object
         * <code>Type</code> field. </p> <p>To be detected, text must be within +/- 90
         * degrees orientation of the horizontal axis.</p> <p>For more information, see
         * DetectText in the Amazon Rekognition Developer Guide.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectText">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectTextAsync(const Model::DetectTextRequest& request, const DetectTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the name and additional information about a celebrity based on his or
         * her Amazon Rekognition ID. The additional information is returned as an array of
         * URLs. If there is no additional information about the celebrity, this list is
         * empty.</p> <p>For more information, see Recognizing Celebrities in an Image in
         * the Amazon Rekognition Developer Guide.</p> <p>This operation requires
         * permissions to perform the <code>rekognition:GetCelebrityInfo</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetCelebrityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCelebrityInfoOutcome GetCelebrityInfo(const Model::GetCelebrityInfoRequest& request) const;

        /**
         * <p>Gets the name and additional information about a celebrity based on his or
         * her Amazon Rekognition ID. The additional information is returned as an array of
         * URLs. If there is no additional information about the celebrity, this list is
         * empty.</p> <p>For more information, see Recognizing Celebrities in an Image in
         * the Amazon Rekognition Developer Guide.</p> <p>This operation requires
         * permissions to perform the <code>rekognition:GetCelebrityInfo</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetCelebrityInfo">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCelebrityInfoOutcomeCallable GetCelebrityInfoCallable(const Model::GetCelebrityInfoRequest& request) const;

        /**
         * <p>Gets the name and additional information about a celebrity based on his or
         * her Amazon Rekognition ID. The additional information is returned as an array of
         * URLs. If there is no additional information about the celebrity, this list is
         * empty.</p> <p>For more information, see Recognizing Celebrities in an Image in
         * the Amazon Rekognition Developer Guide.</p> <p>This operation requires
         * permissions to perform the <code>rekognition:GetCelebrityInfo</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetCelebrityInfo">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCelebrityInfoAsync(const Model::GetCelebrityInfoRequest& request, const GetCelebrityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the celebrity recognition results for a Amazon Rekognition Video
         * analysis started by <a>StartCelebrityRecognition</a>.</p> <p>Celebrity
         * recognition in a video is an asynchronous operation. Analysis is started by a
         * call to <a>StartCelebrityRecognition</a> which returns a job identifier
         * (<code>JobId</code>). When the celebrity recognition operation finishes, Amazon
         * Rekognition Video publishes a completion status to the Amazon Simple
         * Notification Service topic registered in the initial call to
         * <code>StartCelebrityRecognition</code>. To get the results of the celebrity
         * recognition analysis, first check that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. If so, call
         * <code>GetCelebrityDetection</code> and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartCelebrityDetection</code>. </p> <p>For more information, see Working
         * With Stored Videos in the Amazon Rekognition Developer Guide.</p> <p>
         * <code>GetCelebrityRecognition</code> returns detected celebrities and the
         * time(s) they are detected in an array (<code>Celebrities</code>) of
         * <a>CelebrityRecognition</a> objects. Each <code>CelebrityRecognition</code>
         * contains information about the celebrity in a <a>CelebrityDetail</a> object and
         * the time, <code>Timestamp</code>, the celebrity was detected. </p> <note> <p>
         * <code>GetCelebrityRecognition</code> only returns the default facial attributes
         * (<code>BoundingBox</code>, <code>Confidence</code>, <code>Landmarks</code>,
         * <code>Pose</code>, and <code>Quality</code>). The other facial attributes listed
         * in the <code>Face</code> object of the following response syntax are not
         * returned. For more information, see FaceDetail in the Amazon Rekognition
         * Developer Guide. </p> </note> <p>By default, the <code>Celebrities</code> array
         * is sorted by time (milliseconds from the start of the video). You can also sort
         * the array by celebrity by specifying the value <code>ID</code> in the
         * <code>SortBy</code> input parameter.</p> <p>The <code>CelebrityDetail</code>
         * object includes the celebrity identifer and additional information urls. If you
         * don't store the additional information urls, you can get them later by calling
         * <a>GetCelebrityInfo</a> with the celebrity identifer.</p> <p>No information is
         * returned for faces not recognized as celebrities.</p> <p>Use MaxResults
         * parameter to limit the number of labels returned. If there are more results than
         * specified in <code>MaxResults</code>, the value of <code>NextToken</code> in the
         * operation response contains a pagination token for getting the next set of
         * results. To get the next page of results, call
         * <code>GetCelebrityDetection</code> and populate the <code>NextToken</code>
         * request parameter with the token value returned from the previous call to
         * <code>GetCelebrityRecognition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetCelebrityRecognition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCelebrityRecognitionOutcome GetCelebrityRecognition(const Model::GetCelebrityRecognitionRequest& request) const;

        /**
         * <p>Gets the celebrity recognition results for a Amazon Rekognition Video
         * analysis started by <a>StartCelebrityRecognition</a>.</p> <p>Celebrity
         * recognition in a video is an asynchronous operation. Analysis is started by a
         * call to <a>StartCelebrityRecognition</a> which returns a job identifier
         * (<code>JobId</code>). When the celebrity recognition operation finishes, Amazon
         * Rekognition Video publishes a completion status to the Amazon Simple
         * Notification Service topic registered in the initial call to
         * <code>StartCelebrityRecognition</code>. To get the results of the celebrity
         * recognition analysis, first check that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. If so, call
         * <code>GetCelebrityDetection</code> and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartCelebrityDetection</code>. </p> <p>For more information, see Working
         * With Stored Videos in the Amazon Rekognition Developer Guide.</p> <p>
         * <code>GetCelebrityRecognition</code> returns detected celebrities and the
         * time(s) they are detected in an array (<code>Celebrities</code>) of
         * <a>CelebrityRecognition</a> objects. Each <code>CelebrityRecognition</code>
         * contains information about the celebrity in a <a>CelebrityDetail</a> object and
         * the time, <code>Timestamp</code>, the celebrity was detected. </p> <note> <p>
         * <code>GetCelebrityRecognition</code> only returns the default facial attributes
         * (<code>BoundingBox</code>, <code>Confidence</code>, <code>Landmarks</code>,
         * <code>Pose</code>, and <code>Quality</code>). The other facial attributes listed
         * in the <code>Face</code> object of the following response syntax are not
         * returned. For more information, see FaceDetail in the Amazon Rekognition
         * Developer Guide. </p> </note> <p>By default, the <code>Celebrities</code> array
         * is sorted by time (milliseconds from the start of the video). You can also sort
         * the array by celebrity by specifying the value <code>ID</code> in the
         * <code>SortBy</code> input parameter.</p> <p>The <code>CelebrityDetail</code>
         * object includes the celebrity identifer and additional information urls. If you
         * don't store the additional information urls, you can get them later by calling
         * <a>GetCelebrityInfo</a> with the celebrity identifer.</p> <p>No information is
         * returned for faces not recognized as celebrities.</p> <p>Use MaxResults
         * parameter to limit the number of labels returned. If there are more results than
         * specified in <code>MaxResults</code>, the value of <code>NextToken</code> in the
         * operation response contains a pagination token for getting the next set of
         * results. To get the next page of results, call
         * <code>GetCelebrityDetection</code> and populate the <code>NextToken</code>
         * request parameter with the token value returned from the previous call to
         * <code>GetCelebrityRecognition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetCelebrityRecognition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCelebrityRecognitionOutcomeCallable GetCelebrityRecognitionCallable(const Model::GetCelebrityRecognitionRequest& request) const;

        /**
         * <p>Gets the celebrity recognition results for a Amazon Rekognition Video
         * analysis started by <a>StartCelebrityRecognition</a>.</p> <p>Celebrity
         * recognition in a video is an asynchronous operation. Analysis is started by a
         * call to <a>StartCelebrityRecognition</a> which returns a job identifier
         * (<code>JobId</code>). When the celebrity recognition operation finishes, Amazon
         * Rekognition Video publishes a completion status to the Amazon Simple
         * Notification Service topic registered in the initial call to
         * <code>StartCelebrityRecognition</code>. To get the results of the celebrity
         * recognition analysis, first check that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. If so, call
         * <code>GetCelebrityDetection</code> and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartCelebrityDetection</code>. </p> <p>For more information, see Working
         * With Stored Videos in the Amazon Rekognition Developer Guide.</p> <p>
         * <code>GetCelebrityRecognition</code> returns detected celebrities and the
         * time(s) they are detected in an array (<code>Celebrities</code>) of
         * <a>CelebrityRecognition</a> objects. Each <code>CelebrityRecognition</code>
         * contains information about the celebrity in a <a>CelebrityDetail</a> object and
         * the time, <code>Timestamp</code>, the celebrity was detected. </p> <note> <p>
         * <code>GetCelebrityRecognition</code> only returns the default facial attributes
         * (<code>BoundingBox</code>, <code>Confidence</code>, <code>Landmarks</code>,
         * <code>Pose</code>, and <code>Quality</code>). The other facial attributes listed
         * in the <code>Face</code> object of the following response syntax are not
         * returned. For more information, see FaceDetail in the Amazon Rekognition
         * Developer Guide. </p> </note> <p>By default, the <code>Celebrities</code> array
         * is sorted by time (milliseconds from the start of the video). You can also sort
         * the array by celebrity by specifying the value <code>ID</code> in the
         * <code>SortBy</code> input parameter.</p> <p>The <code>CelebrityDetail</code>
         * object includes the celebrity identifer and additional information urls. If you
         * don't store the additional information urls, you can get them later by calling
         * <a>GetCelebrityInfo</a> with the celebrity identifer.</p> <p>No information is
         * returned for faces not recognized as celebrities.</p> <p>Use MaxResults
         * parameter to limit the number of labels returned. If there are more results than
         * specified in <code>MaxResults</code>, the value of <code>NextToken</code> in the
         * operation response contains a pagination token for getting the next set of
         * results. To get the next page of results, call
         * <code>GetCelebrityDetection</code> and populate the <code>NextToken</code>
         * request parameter with the token value returned from the previous call to
         * <code>GetCelebrityRecognition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetCelebrityRecognition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCelebrityRecognitionAsync(const Model::GetCelebrityRecognitionRequest& request, const GetCelebrityRecognitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the content moderation analysis results for a Amazon Rekognition Video
         * analysis started by <a>StartContentModeration</a>.</p> <p>Content moderation
         * analysis of a video is an asynchronous operation. You start analysis by calling
         * <a>StartContentModeration</a> which returns a job identifier
         * (<code>JobId</code>). When analysis finishes, Amazon Rekognition Video publishes
         * a completion status to the Amazon Simple Notification Service topic registered
         * in the initial call to <code>StartContentModeration</code>. To get the results
         * of the content moderation analysis, first check that the status value published
         * to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <code>GetContentModeration</code> and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartContentModeration</code>. </p> <p>For more information, see Working
         * with Stored Videos in the Amazon Rekognition Devlopers Guide.</p> <p>
         * <code>GetContentModeration</code> returns detected content moderation labels,
         * and the time they are detected, in an array, <code>ModerationLabels</code>, of
         * <a>ContentModerationDetection</a> objects. </p> <p>By default, the moderated
         * labels are returned sorted by time, in milliseconds from the start of the video.
         * You can also sort them by moderated label by specifying <code>NAME</code> for
         * the <code>SortBy</code> input parameter. </p> <p>Since video analysis can return
         * a large number of results, use the <code>MaxResults</code> parameter to limit
         * the number of labels returned in a single call to
         * <code>GetContentModeration</code>. If there are more results than specified in
         * <code>MaxResults</code>, the value of <code>NextToken</code> in the operation
         * response contains a pagination token for getting the next set of results. To get
         * the next page of results, call <code>GetContentModeration</code> and populate
         * the <code>NextToken</code> request parameter with the value of
         * <code>NextToken</code> returned from the previous call to
         * <code>GetContentModeration</code>.</p> <p>For more information, see Detecting
         * Unsafe Content in the Amazon Rekognition Developer Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetContentModeration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContentModerationOutcome GetContentModeration(const Model::GetContentModerationRequest& request) const;

        /**
         * <p>Gets the content moderation analysis results for a Amazon Rekognition Video
         * analysis started by <a>StartContentModeration</a>.</p> <p>Content moderation
         * analysis of a video is an asynchronous operation. You start analysis by calling
         * <a>StartContentModeration</a> which returns a job identifier
         * (<code>JobId</code>). When analysis finishes, Amazon Rekognition Video publishes
         * a completion status to the Amazon Simple Notification Service topic registered
         * in the initial call to <code>StartContentModeration</code>. To get the results
         * of the content moderation analysis, first check that the status value published
         * to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <code>GetContentModeration</code> and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartContentModeration</code>. </p> <p>For more information, see Working
         * with Stored Videos in the Amazon Rekognition Devlopers Guide.</p> <p>
         * <code>GetContentModeration</code> returns detected content moderation labels,
         * and the time they are detected, in an array, <code>ModerationLabels</code>, of
         * <a>ContentModerationDetection</a> objects. </p> <p>By default, the moderated
         * labels are returned sorted by time, in milliseconds from the start of the video.
         * You can also sort them by moderated label by specifying <code>NAME</code> for
         * the <code>SortBy</code> input parameter. </p> <p>Since video analysis can return
         * a large number of results, use the <code>MaxResults</code> parameter to limit
         * the number of labels returned in a single call to
         * <code>GetContentModeration</code>. If there are more results than specified in
         * <code>MaxResults</code>, the value of <code>NextToken</code> in the operation
         * response contains a pagination token for getting the next set of results. To get
         * the next page of results, call <code>GetContentModeration</code> and populate
         * the <code>NextToken</code> request parameter with the value of
         * <code>NextToken</code> returned from the previous call to
         * <code>GetContentModeration</code>.</p> <p>For more information, see Detecting
         * Unsafe Content in the Amazon Rekognition Developer Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetContentModeration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContentModerationOutcomeCallable GetContentModerationCallable(const Model::GetContentModerationRequest& request) const;

        /**
         * <p>Gets the content moderation analysis results for a Amazon Rekognition Video
         * analysis started by <a>StartContentModeration</a>.</p> <p>Content moderation
         * analysis of a video is an asynchronous operation. You start analysis by calling
         * <a>StartContentModeration</a> which returns a job identifier
         * (<code>JobId</code>). When analysis finishes, Amazon Rekognition Video publishes
         * a completion status to the Amazon Simple Notification Service topic registered
         * in the initial call to <code>StartContentModeration</code>. To get the results
         * of the content moderation analysis, first check that the status value published
         * to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <code>GetContentModeration</code> and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartContentModeration</code>. </p> <p>For more information, see Working
         * with Stored Videos in the Amazon Rekognition Devlopers Guide.</p> <p>
         * <code>GetContentModeration</code> returns detected content moderation labels,
         * and the time they are detected, in an array, <code>ModerationLabels</code>, of
         * <a>ContentModerationDetection</a> objects. </p> <p>By default, the moderated
         * labels are returned sorted by time, in milliseconds from the start of the video.
         * You can also sort them by moderated label by specifying <code>NAME</code> for
         * the <code>SortBy</code> input parameter. </p> <p>Since video analysis can return
         * a large number of results, use the <code>MaxResults</code> parameter to limit
         * the number of labels returned in a single call to
         * <code>GetContentModeration</code>. If there are more results than specified in
         * <code>MaxResults</code>, the value of <code>NextToken</code> in the operation
         * response contains a pagination token for getting the next set of results. To get
         * the next page of results, call <code>GetContentModeration</code> and populate
         * the <code>NextToken</code> request parameter with the value of
         * <code>NextToken</code> returned from the previous call to
         * <code>GetContentModeration</code>.</p> <p>For more information, see Detecting
         * Unsafe Content in the Amazon Rekognition Developer Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetContentModeration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContentModerationAsync(const Model::GetContentModerationRequest& request, const GetContentModerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets face detection results for a Amazon Rekognition Video analysis started
         * by <a>StartFaceDetection</a>.</p> <p>Face detection with Amazon Rekognition
         * Video is an asynchronous operation. You start face detection by calling
         * <a>StartFaceDetection</a> which returns a job identifier (<code>JobId</code>).
         * When the face detection operation finishes, Amazon Rekognition Video publishes a
         * completion status to the Amazon Simple Notification Service topic registered in
         * the initial call to <code>StartFaceDetection</code>. To get the results of the
         * face detection operation, first check that the status value published to the
         * Amazon SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetFaceDetection</a>
         * and pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartFaceDetection</code>.</p> <p> <code>GetFaceDetection</code> returns
         * an array of detected faces (<code>Faces</code>) sorted by the time the faces
         * were detected. </p> <p>Use MaxResults parameter to limit the number of labels
         * returned. If there are more results than specified in <code>MaxResults</code>,
         * the value of <code>NextToken</code> in the operation response contains a
         * pagination token for getting the next set of results. To get the next page of
         * results, call <code>GetFaceDetection</code> and populate the
         * <code>NextToken</code> request parameter with the token value returned from the
         * previous call to <code>GetFaceDetection</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetFaceDetection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFaceDetectionOutcome GetFaceDetection(const Model::GetFaceDetectionRequest& request) const;

        /**
         * <p>Gets face detection results for a Amazon Rekognition Video analysis started
         * by <a>StartFaceDetection</a>.</p> <p>Face detection with Amazon Rekognition
         * Video is an asynchronous operation. You start face detection by calling
         * <a>StartFaceDetection</a> which returns a job identifier (<code>JobId</code>).
         * When the face detection operation finishes, Amazon Rekognition Video publishes a
         * completion status to the Amazon Simple Notification Service topic registered in
         * the initial call to <code>StartFaceDetection</code>. To get the results of the
         * face detection operation, first check that the status value published to the
         * Amazon SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetFaceDetection</a>
         * and pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartFaceDetection</code>.</p> <p> <code>GetFaceDetection</code> returns
         * an array of detected faces (<code>Faces</code>) sorted by the time the faces
         * were detected. </p> <p>Use MaxResults parameter to limit the number of labels
         * returned. If there are more results than specified in <code>MaxResults</code>,
         * the value of <code>NextToken</code> in the operation response contains a
         * pagination token for getting the next set of results. To get the next page of
         * results, call <code>GetFaceDetection</code> and populate the
         * <code>NextToken</code> request parameter with the token value returned from the
         * previous call to <code>GetFaceDetection</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetFaceDetection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFaceDetectionOutcomeCallable GetFaceDetectionCallable(const Model::GetFaceDetectionRequest& request) const;

        /**
         * <p>Gets face detection results for a Amazon Rekognition Video analysis started
         * by <a>StartFaceDetection</a>.</p> <p>Face detection with Amazon Rekognition
         * Video is an asynchronous operation. You start face detection by calling
         * <a>StartFaceDetection</a> which returns a job identifier (<code>JobId</code>).
         * When the face detection operation finishes, Amazon Rekognition Video publishes a
         * completion status to the Amazon Simple Notification Service topic registered in
         * the initial call to <code>StartFaceDetection</code>. To get the results of the
         * face detection operation, first check that the status value published to the
         * Amazon SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetFaceDetection</a>
         * and pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartFaceDetection</code>.</p> <p> <code>GetFaceDetection</code> returns
         * an array of detected faces (<code>Faces</code>) sorted by the time the faces
         * were detected. </p> <p>Use MaxResults parameter to limit the number of labels
         * returned. If there are more results than specified in <code>MaxResults</code>,
         * the value of <code>NextToken</code> in the operation response contains a
         * pagination token for getting the next set of results. To get the next page of
         * results, call <code>GetFaceDetection</code> and populate the
         * <code>NextToken</code> request parameter with the token value returned from the
         * previous call to <code>GetFaceDetection</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetFaceDetection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFaceDetectionAsync(const Model::GetFaceDetectionRequest& request, const GetFaceDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the face search results for Amazon Rekognition Video face search started
         * by <a>StartFaceSearch</a>. The search returns faces in a collection that match
         * the faces of persons detected in a video. It also includes the time(s) that
         * faces are matched in the video.</p> <p>Face search in a video is an asynchronous
         * operation. You start face search by calling to <a>StartFaceSearch</a> which
         * returns a job identifier (<code>JobId</code>). When the search operation
         * finishes, Amazon Rekognition Video publishes a completion status to the Amazon
         * Simple Notification Service topic registered in the initial call to
         * <code>StartFaceSearch</code>. To get the search results, first check that the
         * status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so,
         * call <code>GetFaceSearch</code> and pass the job identifier (<code>JobId</code>)
         * from the initial call to <code>StartFaceSearch</code>.</p> <p>For more
         * information, see Searching Faces in a Collection in the Amazon Rekognition
         * Developer Guide.</p> <p>The search results are retured in an array,
         * <code>Persons</code>, of <a>PersonMatch</a> objects.
         * Each<code>PersonMatch</code> element contains details about the matching faces
         * in the input collection, person information (facial attributes, bounding boxes,
         * and person identifer) for the matched person, and the time the person was
         * matched in the video.</p> <note> <p> <code>GetFaceSearch</code> only returns the
         * default facial attributes (<code>BoundingBox</code>, <code>Confidence</code>,
         * <code>Landmarks</code>, <code>Pose</code>, and <code>Quality</code>). The other
         * facial attributes listed in the <code>Face</code> object of the following
         * response syntax are not returned. For more information, see FaceDetail in the
         * Amazon Rekognition Developer Guide. </p> </note> <p>By default, the
         * <code>Persons</code> array is sorted by the time, in milliseconds from the start
         * of the video, persons are matched. You can also sort by persons by specifying
         * <code>INDEX</code> for the <code>SORTBY</code> input parameter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetFaceSearch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFaceSearchOutcome GetFaceSearch(const Model::GetFaceSearchRequest& request) const;

        /**
         * <p>Gets the face search results for Amazon Rekognition Video face search started
         * by <a>StartFaceSearch</a>. The search returns faces in a collection that match
         * the faces of persons detected in a video. It also includes the time(s) that
         * faces are matched in the video.</p> <p>Face search in a video is an asynchronous
         * operation. You start face search by calling to <a>StartFaceSearch</a> which
         * returns a job identifier (<code>JobId</code>). When the search operation
         * finishes, Amazon Rekognition Video publishes a completion status to the Amazon
         * Simple Notification Service topic registered in the initial call to
         * <code>StartFaceSearch</code>. To get the search results, first check that the
         * status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so,
         * call <code>GetFaceSearch</code> and pass the job identifier (<code>JobId</code>)
         * from the initial call to <code>StartFaceSearch</code>.</p> <p>For more
         * information, see Searching Faces in a Collection in the Amazon Rekognition
         * Developer Guide.</p> <p>The search results are retured in an array,
         * <code>Persons</code>, of <a>PersonMatch</a> objects.
         * Each<code>PersonMatch</code> element contains details about the matching faces
         * in the input collection, person information (facial attributes, bounding boxes,
         * and person identifer) for the matched person, and the time the person was
         * matched in the video.</p> <note> <p> <code>GetFaceSearch</code> only returns the
         * default facial attributes (<code>BoundingBox</code>, <code>Confidence</code>,
         * <code>Landmarks</code>, <code>Pose</code>, and <code>Quality</code>). The other
         * facial attributes listed in the <code>Face</code> object of the following
         * response syntax are not returned. For more information, see FaceDetail in the
         * Amazon Rekognition Developer Guide. </p> </note> <p>By default, the
         * <code>Persons</code> array is sorted by the time, in milliseconds from the start
         * of the video, persons are matched. You can also sort by persons by specifying
         * <code>INDEX</code> for the <code>SORTBY</code> input parameter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetFaceSearch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFaceSearchOutcomeCallable GetFaceSearchCallable(const Model::GetFaceSearchRequest& request) const;

        /**
         * <p>Gets the face search results for Amazon Rekognition Video face search started
         * by <a>StartFaceSearch</a>. The search returns faces in a collection that match
         * the faces of persons detected in a video. It also includes the time(s) that
         * faces are matched in the video.</p> <p>Face search in a video is an asynchronous
         * operation. You start face search by calling to <a>StartFaceSearch</a> which
         * returns a job identifier (<code>JobId</code>). When the search operation
         * finishes, Amazon Rekognition Video publishes a completion status to the Amazon
         * Simple Notification Service topic registered in the initial call to
         * <code>StartFaceSearch</code>. To get the search results, first check that the
         * status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so,
         * call <code>GetFaceSearch</code> and pass the job identifier (<code>JobId</code>)
         * from the initial call to <code>StartFaceSearch</code>.</p> <p>For more
         * information, see Searching Faces in a Collection in the Amazon Rekognition
         * Developer Guide.</p> <p>The search results are retured in an array,
         * <code>Persons</code>, of <a>PersonMatch</a> objects.
         * Each<code>PersonMatch</code> element contains details about the matching faces
         * in the input collection, person information (facial attributes, bounding boxes,
         * and person identifer) for the matched person, and the time the person was
         * matched in the video.</p> <note> <p> <code>GetFaceSearch</code> only returns the
         * default facial attributes (<code>BoundingBox</code>, <code>Confidence</code>,
         * <code>Landmarks</code>, <code>Pose</code>, and <code>Quality</code>). The other
         * facial attributes listed in the <code>Face</code> object of the following
         * response syntax are not returned. For more information, see FaceDetail in the
         * Amazon Rekognition Developer Guide. </p> </note> <p>By default, the
         * <code>Persons</code> array is sorted by the time, in milliseconds from the start
         * of the video, persons are matched. You can also sort by persons by specifying
         * <code>INDEX</code> for the <code>SORTBY</code> input parameter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetFaceSearch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFaceSearchAsync(const Model::GetFaceSearchRequest& request, const GetFaceSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the label detection results of a Amazon Rekognition Video analysis
         * started by <a>StartLabelDetection</a>. </p> <p>The label detection operation is
         * started by a call to <a>StartLabelDetection</a> which returns a job identifier
         * (<code>JobId</code>). When the label detection operation finishes, Amazon
         * Rekognition publishes a completion status to the Amazon Simple Notification
         * Service topic registered in the initial call to
         * <code>StartlabelDetection</code>. To get the results of the label detection
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <a>GetLabelDetection</a> and pass the job
         * identifier (<code>JobId</code>) from the initial call to
         * <code>StartLabelDetection</code>.</p> <p> <code>GetLabelDetection</code> returns
         * an array of detected labels (<code>Labels</code>) sorted by the time the labels
         * were detected. You can also sort by the label name by specifying
         * <code>NAME</code> for the <code>SortBy</code> input parameter.</p> <p>The labels
         * returned include the label name, the percentage confidence in the accuracy of
         * the detected label, and the time the label was detected in the video.</p> <p>The
         * returned labels also include bounding box information for common objects, a
         * hierarchical taxonomy of detected labels, and the version of the label model
         * used for detection.</p> <p>Use MaxResults parameter to limit the number of
         * labels returned. If there are more results than specified in
         * <code>MaxResults</code>, the value of <code>NextToken</code> in the operation
         * response contains a pagination token for getting the next set of results. To get
         * the next page of results, call <code>GetlabelDetection</code> and populate the
         * <code>NextToken</code> request parameter with the token value returned from the
         * previous call to <code>GetLabelDetection</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetLabelDetection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLabelDetectionOutcome GetLabelDetection(const Model::GetLabelDetectionRequest& request) const;

        /**
         * <p>Gets the label detection results of a Amazon Rekognition Video analysis
         * started by <a>StartLabelDetection</a>. </p> <p>The label detection operation is
         * started by a call to <a>StartLabelDetection</a> which returns a job identifier
         * (<code>JobId</code>). When the label detection operation finishes, Amazon
         * Rekognition publishes a completion status to the Amazon Simple Notification
         * Service topic registered in the initial call to
         * <code>StartlabelDetection</code>. To get the results of the label detection
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <a>GetLabelDetection</a> and pass the job
         * identifier (<code>JobId</code>) from the initial call to
         * <code>StartLabelDetection</code>.</p> <p> <code>GetLabelDetection</code> returns
         * an array of detected labels (<code>Labels</code>) sorted by the time the labels
         * were detected. You can also sort by the label name by specifying
         * <code>NAME</code> for the <code>SortBy</code> input parameter.</p> <p>The labels
         * returned include the label name, the percentage confidence in the accuracy of
         * the detected label, and the time the label was detected in the video.</p> <p>The
         * returned labels also include bounding box information for common objects, a
         * hierarchical taxonomy of detected labels, and the version of the label model
         * used for detection.</p> <p>Use MaxResults parameter to limit the number of
         * labels returned. If there are more results than specified in
         * <code>MaxResults</code>, the value of <code>NextToken</code> in the operation
         * response contains a pagination token for getting the next set of results. To get
         * the next page of results, call <code>GetlabelDetection</code> and populate the
         * <code>NextToken</code> request parameter with the token value returned from the
         * previous call to <code>GetLabelDetection</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetLabelDetection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLabelDetectionOutcomeCallable GetLabelDetectionCallable(const Model::GetLabelDetectionRequest& request) const;

        /**
         * <p>Gets the label detection results of a Amazon Rekognition Video analysis
         * started by <a>StartLabelDetection</a>. </p> <p>The label detection operation is
         * started by a call to <a>StartLabelDetection</a> which returns a job identifier
         * (<code>JobId</code>). When the label detection operation finishes, Amazon
         * Rekognition publishes a completion status to the Amazon Simple Notification
         * Service topic registered in the initial call to
         * <code>StartlabelDetection</code>. To get the results of the label detection
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <a>GetLabelDetection</a> and pass the job
         * identifier (<code>JobId</code>) from the initial call to
         * <code>StartLabelDetection</code>.</p> <p> <code>GetLabelDetection</code> returns
         * an array of detected labels (<code>Labels</code>) sorted by the time the labels
         * were detected. You can also sort by the label name by specifying
         * <code>NAME</code> for the <code>SortBy</code> input parameter.</p> <p>The labels
         * returned include the label name, the percentage confidence in the accuracy of
         * the detected label, and the time the label was detected in the video.</p> <p>The
         * returned labels also include bounding box information for common objects, a
         * hierarchical taxonomy of detected labels, and the version of the label model
         * used for detection.</p> <p>Use MaxResults parameter to limit the number of
         * labels returned. If there are more results than specified in
         * <code>MaxResults</code>, the value of <code>NextToken</code> in the operation
         * response contains a pagination token for getting the next set of results. To get
         * the next page of results, call <code>GetlabelDetection</code> and populate the
         * <code>NextToken</code> request parameter with the token value returned from the
         * previous call to <code>GetLabelDetection</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetLabelDetection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLabelDetectionAsync(const Model::GetLabelDetectionRequest& request, const GetLabelDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the path tracking results of a Amazon Rekognition Video analysis started
         * by <a>StartPersonTracking</a>.</p> <p>The person path tracking operation is
         * started by a call to <code>StartPersonTracking</code> which returns a job
         * identifier (<code>JobId</code>). When the operation finishes, Amazon Rekognition
         * Video publishes a completion status to the Amazon Simple Notification Service
         * topic registered in the initial call to <code>StartPersonTracking</code>.</p>
         * <p>To get the results of the person path tracking operation, first check that
         * the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If
         * so, call <a>GetPersonTracking</a> and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartPersonTracking</code>.</p> <p> <code>GetPersonTracking</code> returns
         * an array, <code>Persons</code>, of tracked persons and the time(s) their paths
         * were tracked in the video. </p> <note> <p> <code>GetPersonTracking</code> only
         * returns the default facial attributes (<code>BoundingBox</code>,
         * <code>Confidence</code>, <code>Landmarks</code>, <code>Pose</code>, and
         * <code>Quality</code>). The other facial attributes listed in the
         * <code>Face</code> object of the following response syntax are not returned. </p>
         * <p>For more information, see FaceDetail in the Amazon Rekognition Developer
         * Guide.</p> </note> <p>By default, the array is sorted by the time(s) a person's
         * path is tracked in the video. You can sort by tracked persons by specifying
         * <code>INDEX</code> for the <code>SortBy</code> input parameter.</p> <p>Use the
         * <code>MaxResults</code> parameter to limit the number of items returned. If
         * there are more results than specified in <code>MaxResults</code>, the value of
         * <code>NextToken</code> in the operation response contains a pagination token for
         * getting the next set of results. To get the next page of results, call
         * <code>GetPersonTracking</code> and populate the <code>NextToken</code> request
         * parameter with the token value returned from the previous call to
         * <code>GetPersonTracking</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetPersonTracking">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPersonTrackingOutcome GetPersonTracking(const Model::GetPersonTrackingRequest& request) const;

        /**
         * <p>Gets the path tracking results of a Amazon Rekognition Video analysis started
         * by <a>StartPersonTracking</a>.</p> <p>The person path tracking operation is
         * started by a call to <code>StartPersonTracking</code> which returns a job
         * identifier (<code>JobId</code>). When the operation finishes, Amazon Rekognition
         * Video publishes a completion status to the Amazon Simple Notification Service
         * topic registered in the initial call to <code>StartPersonTracking</code>.</p>
         * <p>To get the results of the person path tracking operation, first check that
         * the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If
         * so, call <a>GetPersonTracking</a> and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartPersonTracking</code>.</p> <p> <code>GetPersonTracking</code> returns
         * an array, <code>Persons</code>, of tracked persons and the time(s) their paths
         * were tracked in the video. </p> <note> <p> <code>GetPersonTracking</code> only
         * returns the default facial attributes (<code>BoundingBox</code>,
         * <code>Confidence</code>, <code>Landmarks</code>, <code>Pose</code>, and
         * <code>Quality</code>). The other facial attributes listed in the
         * <code>Face</code> object of the following response syntax are not returned. </p>
         * <p>For more information, see FaceDetail in the Amazon Rekognition Developer
         * Guide.</p> </note> <p>By default, the array is sorted by the time(s) a person's
         * path is tracked in the video. You can sort by tracked persons by specifying
         * <code>INDEX</code> for the <code>SortBy</code> input parameter.</p> <p>Use the
         * <code>MaxResults</code> parameter to limit the number of items returned. If
         * there are more results than specified in <code>MaxResults</code>, the value of
         * <code>NextToken</code> in the operation response contains a pagination token for
         * getting the next set of results. To get the next page of results, call
         * <code>GetPersonTracking</code> and populate the <code>NextToken</code> request
         * parameter with the token value returned from the previous call to
         * <code>GetPersonTracking</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetPersonTracking">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPersonTrackingOutcomeCallable GetPersonTrackingCallable(const Model::GetPersonTrackingRequest& request) const;

        /**
         * <p>Gets the path tracking results of a Amazon Rekognition Video analysis started
         * by <a>StartPersonTracking</a>.</p> <p>The person path tracking operation is
         * started by a call to <code>StartPersonTracking</code> which returns a job
         * identifier (<code>JobId</code>). When the operation finishes, Amazon Rekognition
         * Video publishes a completion status to the Amazon Simple Notification Service
         * topic registered in the initial call to <code>StartPersonTracking</code>.</p>
         * <p>To get the results of the person path tracking operation, first check that
         * the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If
         * so, call <a>GetPersonTracking</a> and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartPersonTracking</code>.</p> <p> <code>GetPersonTracking</code> returns
         * an array, <code>Persons</code>, of tracked persons and the time(s) their paths
         * were tracked in the video. </p> <note> <p> <code>GetPersonTracking</code> only
         * returns the default facial attributes (<code>BoundingBox</code>,
         * <code>Confidence</code>, <code>Landmarks</code>, <code>Pose</code>, and
         * <code>Quality</code>). The other facial attributes listed in the
         * <code>Face</code> object of the following response syntax are not returned. </p>
         * <p>For more information, see FaceDetail in the Amazon Rekognition Developer
         * Guide.</p> </note> <p>By default, the array is sorted by the time(s) a person's
         * path is tracked in the video. You can sort by tracked persons by specifying
         * <code>INDEX</code> for the <code>SortBy</code> input parameter.</p> <p>Use the
         * <code>MaxResults</code> parameter to limit the number of items returned. If
         * there are more results than specified in <code>MaxResults</code>, the value of
         * <code>NextToken</code> in the operation response contains a pagination token for
         * getting the next set of results. To get the next page of results, call
         * <code>GetPersonTracking</code> and populate the <code>NextToken</code> request
         * parameter with the token value returned from the previous call to
         * <code>GetPersonTracking</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetPersonTracking">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPersonTrackingAsync(const Model::GetPersonTrackingRequest& request, const GetPersonTrackingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects faces in the input image and adds them to the specified collection.
         * </p> <p>Amazon Rekognition doesn't save the actual faces that are detected.
         * Instead, the underlying detection algorithm first detects the faces in the input
         * image. For each face, the algorithm extracts facial features into a feature
         * vector, and stores it in the backend database. Amazon Rekognition uses feature
         * vectors when it performs face match and search operations using the
         * <a>SearchFaces</a> and <a>SearchFacesByImage</a> operations.</p> <p>For more
         * information, see Adding Faces to a Collection in the Amazon Rekognition
         * Developer Guide.</p> <p>To get the number of faces in a collection, call
         * <a>DescribeCollection</a>. </p> <p>If you're using version 1.0 of the face
         * detection model, <code>IndexFaces</code> indexes the 15 largest faces in the
         * input image. Later versions of the face detection model index the 100 largest
         * faces in the input image. </p> <p>If you're using version 4 or later of the face
         * model, image orientation information is not returned in the
         * <code>OrientationCorrection</code> field. </p> <p>To determine which version of
         * the model you're using, call <a>DescribeCollection</a> and supply the collection
         * ID. You can also get the model version from the value of
         * <code>FaceModelVersion</code> in the response from <code>IndexFaces</code> </p>
         * <p>For more information, see Model Versioning in the Amazon Rekognition
         * Developer Guide.</p> <p>If you provide the optional <code>ExternalImageID</code>
         * for the input image you provided, Amazon Rekognition associates this ID with all
         * faces that it detects. When you call the <a>ListFaces</a> operation, the
         * response returns the external ID. You can use this external image ID to create a
         * client-side index to associate the faces with each image. You can then use the
         * index to find all faces in an image.</p> <p>You can specify the maximum number
         * of faces to index with the <code>MaxFaces</code> input parameter. This is useful
         * when you want to index the largest faces in an image and don't want to index
         * smaller faces, such as those belonging to people standing in the background.</p>
         * <p>The <code>QualityFilter</code> input parameter allows you to filter out
         * detected faces that don’t meet the required quality bar chosen by Amazon
         * Rekognition. The quality bar is based on a variety of common use cases. By
         * default, <code>IndexFaces</code> filters detected faces. You can also explicitly
         * filter detected faces by specifying <code>AUTO</code> for the value of
         * <code>QualityFilter</code>. If you do not want to filter detected faces, specify
         * <code>NONE</code>. </p> <note> <p>To use quality filtering, you need a
         * collection associated with version 3 of the face model. To get the version of
         * the face model associated with a collection, call <a>DescribeCollection</a>.
         * </p> </note> <p>Information about faces detected in an image, but not indexed,
         * is returned in an array of <a>UnindexedFace</a> objects,
         * <code>UnindexedFaces</code>. Faces aren't indexed for reasons such as:</p> <ul>
         * <li> <p>The number of faces detected exceeds the value of the
         * <code>MaxFaces</code> request parameter.</p> </li> <li> <p>The face is too small
         * compared to the image dimensions.</p> </li> <li> <p>The face is too blurry.</p>
         * </li> <li> <p>The image is too dark.</p> </li> <li> <p>The face has an extreme
         * pose.</p> </li> </ul> <p>In response, the <code>IndexFaces</code> operation
         * returns an array of metadata for all detected faces, <code>FaceRecords</code>.
         * This includes: </p> <ul> <li> <p>The bounding box, <code>BoundingBox</code>, of
         * the detected face. </p> </li> <li> <p>A confidence value,
         * <code>Confidence</code>, which indicates the confidence that the bounding box
         * contains a face.</p> </li> <li> <p>A face ID, <code>FaceId</code>, assigned by
         * the service for each face that's detected and stored.</p> </li> <li> <p>An image
         * ID, <code>ImageId</code>, assigned by the service for the input image.</p> </li>
         * </ul> <p>If you request all facial attributes (by using the
         * <code>detectionAttributes</code> parameter), Amazon Rekognition returns detailed
         * facial attributes, such as facial landmarks (for example, location of eye and
         * mouth) and other facial attributes like gender. If you provide the same image,
         * specify the same collection, and use the same external ID in the
         * <code>IndexFaces</code> operation, Amazon Rekognition doesn't save duplicate
         * face metadata.</p> <p/> <p>The input image is passed either as base64-encoded
         * image bytes, or as a reference to an image in an Amazon S3 bucket. If you use
         * the AWS CLI to call Amazon Rekognition operations, passing image bytes isn't
         * supported. The image must be formatted as a PNG or JPEG file. </p> <p>This
         * operation requires permissions to perform the
         * <code>rekognition:IndexFaces</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/IndexFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::IndexFacesOutcome IndexFaces(const Model::IndexFacesRequest& request) const;

        /**
         * <p>Detects faces in the input image and adds them to the specified collection.
         * </p> <p>Amazon Rekognition doesn't save the actual faces that are detected.
         * Instead, the underlying detection algorithm first detects the faces in the input
         * image. For each face, the algorithm extracts facial features into a feature
         * vector, and stores it in the backend database. Amazon Rekognition uses feature
         * vectors when it performs face match and search operations using the
         * <a>SearchFaces</a> and <a>SearchFacesByImage</a> operations.</p> <p>For more
         * information, see Adding Faces to a Collection in the Amazon Rekognition
         * Developer Guide.</p> <p>To get the number of faces in a collection, call
         * <a>DescribeCollection</a>. </p> <p>If you're using version 1.0 of the face
         * detection model, <code>IndexFaces</code> indexes the 15 largest faces in the
         * input image. Later versions of the face detection model index the 100 largest
         * faces in the input image. </p> <p>If you're using version 4 or later of the face
         * model, image orientation information is not returned in the
         * <code>OrientationCorrection</code> field. </p> <p>To determine which version of
         * the model you're using, call <a>DescribeCollection</a> and supply the collection
         * ID. You can also get the model version from the value of
         * <code>FaceModelVersion</code> in the response from <code>IndexFaces</code> </p>
         * <p>For more information, see Model Versioning in the Amazon Rekognition
         * Developer Guide.</p> <p>If you provide the optional <code>ExternalImageID</code>
         * for the input image you provided, Amazon Rekognition associates this ID with all
         * faces that it detects. When you call the <a>ListFaces</a> operation, the
         * response returns the external ID. You can use this external image ID to create a
         * client-side index to associate the faces with each image. You can then use the
         * index to find all faces in an image.</p> <p>You can specify the maximum number
         * of faces to index with the <code>MaxFaces</code> input parameter. This is useful
         * when you want to index the largest faces in an image and don't want to index
         * smaller faces, such as those belonging to people standing in the background.</p>
         * <p>The <code>QualityFilter</code> input parameter allows you to filter out
         * detected faces that don’t meet the required quality bar chosen by Amazon
         * Rekognition. The quality bar is based on a variety of common use cases. By
         * default, <code>IndexFaces</code> filters detected faces. You can also explicitly
         * filter detected faces by specifying <code>AUTO</code> for the value of
         * <code>QualityFilter</code>. If you do not want to filter detected faces, specify
         * <code>NONE</code>. </p> <note> <p>To use quality filtering, you need a
         * collection associated with version 3 of the face model. To get the version of
         * the face model associated with a collection, call <a>DescribeCollection</a>.
         * </p> </note> <p>Information about faces detected in an image, but not indexed,
         * is returned in an array of <a>UnindexedFace</a> objects,
         * <code>UnindexedFaces</code>. Faces aren't indexed for reasons such as:</p> <ul>
         * <li> <p>The number of faces detected exceeds the value of the
         * <code>MaxFaces</code> request parameter.</p> </li> <li> <p>The face is too small
         * compared to the image dimensions.</p> </li> <li> <p>The face is too blurry.</p>
         * </li> <li> <p>The image is too dark.</p> </li> <li> <p>The face has an extreme
         * pose.</p> </li> </ul> <p>In response, the <code>IndexFaces</code> operation
         * returns an array of metadata for all detected faces, <code>FaceRecords</code>.
         * This includes: </p> <ul> <li> <p>The bounding box, <code>BoundingBox</code>, of
         * the detected face. </p> </li> <li> <p>A confidence value,
         * <code>Confidence</code>, which indicates the confidence that the bounding box
         * contains a face.</p> </li> <li> <p>A face ID, <code>FaceId</code>, assigned by
         * the service for each face that's detected and stored.</p> </li> <li> <p>An image
         * ID, <code>ImageId</code>, assigned by the service for the input image.</p> </li>
         * </ul> <p>If you request all facial attributes (by using the
         * <code>detectionAttributes</code> parameter), Amazon Rekognition returns detailed
         * facial attributes, such as facial landmarks (for example, location of eye and
         * mouth) and other facial attributes like gender. If you provide the same image,
         * specify the same collection, and use the same external ID in the
         * <code>IndexFaces</code> operation, Amazon Rekognition doesn't save duplicate
         * face metadata.</p> <p/> <p>The input image is passed either as base64-encoded
         * image bytes, or as a reference to an image in an Amazon S3 bucket. If you use
         * the AWS CLI to call Amazon Rekognition operations, passing image bytes isn't
         * supported. The image must be formatted as a PNG or JPEG file. </p> <p>This
         * operation requires permissions to perform the
         * <code>rekognition:IndexFaces</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/IndexFaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::IndexFacesOutcomeCallable IndexFacesCallable(const Model::IndexFacesRequest& request) const;

        /**
         * <p>Detects faces in the input image and adds them to the specified collection.
         * </p> <p>Amazon Rekognition doesn't save the actual faces that are detected.
         * Instead, the underlying detection algorithm first detects the faces in the input
         * image. For each face, the algorithm extracts facial features into a feature
         * vector, and stores it in the backend database. Amazon Rekognition uses feature
         * vectors when it performs face match and search operations using the
         * <a>SearchFaces</a> and <a>SearchFacesByImage</a> operations.</p> <p>For more
         * information, see Adding Faces to a Collection in the Amazon Rekognition
         * Developer Guide.</p> <p>To get the number of faces in a collection, call
         * <a>DescribeCollection</a>. </p> <p>If you're using version 1.0 of the face
         * detection model, <code>IndexFaces</code> indexes the 15 largest faces in the
         * input image. Later versions of the face detection model index the 100 largest
         * faces in the input image. </p> <p>If you're using version 4 or later of the face
         * model, image orientation information is not returned in the
         * <code>OrientationCorrection</code> field. </p> <p>To determine which version of
         * the model you're using, call <a>DescribeCollection</a> and supply the collection
         * ID. You can also get the model version from the value of
         * <code>FaceModelVersion</code> in the response from <code>IndexFaces</code> </p>
         * <p>For more information, see Model Versioning in the Amazon Rekognition
         * Developer Guide.</p> <p>If you provide the optional <code>ExternalImageID</code>
         * for the input image you provided, Amazon Rekognition associates this ID with all
         * faces that it detects. When you call the <a>ListFaces</a> operation, the
         * response returns the external ID. You can use this external image ID to create a
         * client-side index to associate the faces with each image. You can then use the
         * index to find all faces in an image.</p> <p>You can specify the maximum number
         * of faces to index with the <code>MaxFaces</code> input parameter. This is useful
         * when you want to index the largest faces in an image and don't want to index
         * smaller faces, such as those belonging to people standing in the background.</p>
         * <p>The <code>QualityFilter</code> input parameter allows you to filter out
         * detected faces that don’t meet the required quality bar chosen by Amazon
         * Rekognition. The quality bar is based on a variety of common use cases. By
         * default, <code>IndexFaces</code> filters detected faces. You can also explicitly
         * filter detected faces by specifying <code>AUTO</code> for the value of
         * <code>QualityFilter</code>. If you do not want to filter detected faces, specify
         * <code>NONE</code>. </p> <note> <p>To use quality filtering, you need a
         * collection associated with version 3 of the face model. To get the version of
         * the face model associated with a collection, call <a>DescribeCollection</a>.
         * </p> </note> <p>Information about faces detected in an image, but not indexed,
         * is returned in an array of <a>UnindexedFace</a> objects,
         * <code>UnindexedFaces</code>. Faces aren't indexed for reasons such as:</p> <ul>
         * <li> <p>The number of faces detected exceeds the value of the
         * <code>MaxFaces</code> request parameter.</p> </li> <li> <p>The face is too small
         * compared to the image dimensions.</p> </li> <li> <p>The face is too blurry.</p>
         * </li> <li> <p>The image is too dark.</p> </li> <li> <p>The face has an extreme
         * pose.</p> </li> </ul> <p>In response, the <code>IndexFaces</code> operation
         * returns an array of metadata for all detected faces, <code>FaceRecords</code>.
         * This includes: </p> <ul> <li> <p>The bounding box, <code>BoundingBox</code>, of
         * the detected face. </p> </li> <li> <p>A confidence value,
         * <code>Confidence</code>, which indicates the confidence that the bounding box
         * contains a face.</p> </li> <li> <p>A face ID, <code>FaceId</code>, assigned by
         * the service for each face that's detected and stored.</p> </li> <li> <p>An image
         * ID, <code>ImageId</code>, assigned by the service for the input image.</p> </li>
         * </ul> <p>If you request all facial attributes (by using the
         * <code>detectionAttributes</code> parameter), Amazon Rekognition returns detailed
         * facial attributes, such as facial landmarks (for example, location of eye and
         * mouth) and other facial attributes like gender. If you provide the same image,
         * specify the same collection, and use the same external ID in the
         * <code>IndexFaces</code> operation, Amazon Rekognition doesn't save duplicate
         * face metadata.</p> <p/> <p>The input image is passed either as base64-encoded
         * image bytes, or as a reference to an image in an Amazon S3 bucket. If you use
         * the AWS CLI to call Amazon Rekognition operations, passing image bytes isn't
         * supported. The image must be formatted as a PNG or JPEG file. </p> <p>This
         * operation requires permissions to perform the
         * <code>rekognition:IndexFaces</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/IndexFaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void IndexFacesAsync(const Model::IndexFacesRequest& request, const IndexFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns list of collection IDs in your account. If the result is truncated,
         * the response also provides a <code>NextToken</code> that you can use in the
         * subsequent request to fetch the next set of collection IDs.</p> <p>For an
         * example, see Listing Collections in the Amazon Rekognition Developer Guide.</p>
         * <p>This operation requires permissions to perform the
         * <code>rekognition:ListCollections</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListCollections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCollectionsOutcome ListCollections(const Model::ListCollectionsRequest& request) const;

        /**
         * <p>Returns list of collection IDs in your account. If the result is truncated,
         * the response also provides a <code>NextToken</code> that you can use in the
         * subsequent request to fetch the next set of collection IDs.</p> <p>For an
         * example, see Listing Collections in the Amazon Rekognition Developer Guide.</p>
         * <p>This operation requires permissions to perform the
         * <code>rekognition:ListCollections</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListCollections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCollectionsOutcomeCallable ListCollectionsCallable(const Model::ListCollectionsRequest& request) const;

        /**
         * <p>Returns list of collection IDs in your account. If the result is truncated,
         * the response also provides a <code>NextToken</code> that you can use in the
         * subsequent request to fetch the next set of collection IDs.</p> <p>For an
         * example, see Listing Collections in the Amazon Rekognition Developer Guide.</p>
         * <p>This operation requires permissions to perform the
         * <code>rekognition:ListCollections</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListCollections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCollectionsAsync(const Model::ListCollectionsRequest& request, const ListCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata for faces in the specified collection. This metadata
         * includes information such as the bounding box coordinates, the confidence (that
         * the bounding box contains a face), and face ID. For an example, see Listing
         * Faces in a Collection in the Amazon Rekognition Developer Guide.</p> <p>This
         * operation requires permissions to perform the <code>rekognition:ListFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFacesOutcome ListFaces(const Model::ListFacesRequest& request) const;

        /**
         * <p>Returns metadata for faces in the specified collection. This metadata
         * includes information such as the bounding box coordinates, the confidence (that
         * the bounding box contains a face), and face ID. For an example, see Listing
         * Faces in a Collection in the Amazon Rekognition Developer Guide.</p> <p>This
         * operation requires permissions to perform the <code>rekognition:ListFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListFaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFacesOutcomeCallable ListFacesCallable(const Model::ListFacesRequest& request) const;

        /**
         * <p>Returns metadata for faces in the specified collection. This metadata
         * includes information such as the bounding box coordinates, the confidence (that
         * the bounding box contains a face), and face ID. For an example, see Listing
         * Faces in a Collection in the Amazon Rekognition Developer Guide.</p> <p>This
         * operation requires permissions to perform the <code>rekognition:ListFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListFaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFacesAsync(const Model::ListFacesRequest& request, const ListFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of stream processors that you have created with
         * <a>CreateStreamProcessor</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListStreamProcessors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamProcessorsOutcome ListStreamProcessors(const Model::ListStreamProcessorsRequest& request) const;

        /**
         * <p>Gets a list of stream processors that you have created with
         * <a>CreateStreamProcessor</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListStreamProcessors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamProcessorsOutcomeCallable ListStreamProcessorsCallable(const Model::ListStreamProcessorsRequest& request) const;

        /**
         * <p>Gets a list of stream processors that you have created with
         * <a>CreateStreamProcessor</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListStreamProcessors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamProcessorsAsync(const Model::ListStreamProcessorsRequest& request, const ListStreamProcessorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of celebrities recognized in the input image. For more
         * information, see Recognizing Celebrities in the Amazon Rekognition Developer
         * Guide. </p> <p> <code>RecognizeCelebrities</code> returns the 100 largest faces
         * in the image. It lists recognized celebrities in the <code>CelebrityFaces</code>
         * array and unrecognized faces in the <code>UnrecognizedFaces</code> array.
         * <code>RecognizeCelebrities</code> doesn't return celebrities whose faces aren't
         * among the largest 100 faces in the image.</p> <p>For each celebrity recognized,
         * <code>RecognizeCelebrities</code> returns a <code>Celebrity</code> object. The
         * <code>Celebrity</code> object contains the celebrity name, ID, URL links to
         * additional information, match confidence, and a <code>ComparedFace</code> object
         * that you can use to locate the celebrity's face on the image.</p> <p>Amazon
         * Rekognition doesn't retain information about which images a celebrity has been
         * recognized in. Your application must store this information and use the
         * <code>Celebrity</code> ID property as a unique identifier for the celebrity. If
         * you don't store the celebrity name or additional information URLs returned by
         * <code>RecognizeCelebrities</code>, you will need the ID to identify the
         * celebrity in a call to the <a>GetCelebrityInfo</a> operation.</p> <p>You pass
         * the input image either as base64-encoded image bytes or as a reference to an
         * image in an Amazon S3 bucket. If you use the AWS CLI to call Amazon Rekognition
         * operations, passing image bytes is not supported. The image must be either a PNG
         * or JPEG formatted file. </p> <p>For an example, see Recognizing Celebrities in
         * an Image in the Amazon Rekognition Developer Guide.</p> <p>This operation
         * requires permissions to perform the
         * <code>rekognition:RecognizeCelebrities</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/RecognizeCelebrities">AWS
         * API Reference</a></p>
         */
        virtual Model::RecognizeCelebritiesOutcome RecognizeCelebrities(const Model::RecognizeCelebritiesRequest& request) const;

        /**
         * <p>Returns an array of celebrities recognized in the input image. For more
         * information, see Recognizing Celebrities in the Amazon Rekognition Developer
         * Guide. </p> <p> <code>RecognizeCelebrities</code> returns the 100 largest faces
         * in the image. It lists recognized celebrities in the <code>CelebrityFaces</code>
         * array and unrecognized faces in the <code>UnrecognizedFaces</code> array.
         * <code>RecognizeCelebrities</code> doesn't return celebrities whose faces aren't
         * among the largest 100 faces in the image.</p> <p>For each celebrity recognized,
         * <code>RecognizeCelebrities</code> returns a <code>Celebrity</code> object. The
         * <code>Celebrity</code> object contains the celebrity name, ID, URL links to
         * additional information, match confidence, and a <code>ComparedFace</code> object
         * that you can use to locate the celebrity's face on the image.</p> <p>Amazon
         * Rekognition doesn't retain information about which images a celebrity has been
         * recognized in. Your application must store this information and use the
         * <code>Celebrity</code> ID property as a unique identifier for the celebrity. If
         * you don't store the celebrity name or additional information URLs returned by
         * <code>RecognizeCelebrities</code>, you will need the ID to identify the
         * celebrity in a call to the <a>GetCelebrityInfo</a> operation.</p> <p>You pass
         * the input image either as base64-encoded image bytes or as a reference to an
         * image in an Amazon S3 bucket. If you use the AWS CLI to call Amazon Rekognition
         * operations, passing image bytes is not supported. The image must be either a PNG
         * or JPEG formatted file. </p> <p>For an example, see Recognizing Celebrities in
         * an Image in the Amazon Rekognition Developer Guide.</p> <p>This operation
         * requires permissions to perform the
         * <code>rekognition:RecognizeCelebrities</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/RecognizeCelebrities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RecognizeCelebritiesOutcomeCallable RecognizeCelebritiesCallable(const Model::RecognizeCelebritiesRequest& request) const;

        /**
         * <p>Returns an array of celebrities recognized in the input image. For more
         * information, see Recognizing Celebrities in the Amazon Rekognition Developer
         * Guide. </p> <p> <code>RecognizeCelebrities</code> returns the 100 largest faces
         * in the image. It lists recognized celebrities in the <code>CelebrityFaces</code>
         * array and unrecognized faces in the <code>UnrecognizedFaces</code> array.
         * <code>RecognizeCelebrities</code> doesn't return celebrities whose faces aren't
         * among the largest 100 faces in the image.</p> <p>For each celebrity recognized,
         * <code>RecognizeCelebrities</code> returns a <code>Celebrity</code> object. The
         * <code>Celebrity</code> object contains the celebrity name, ID, URL links to
         * additional information, match confidence, and a <code>ComparedFace</code> object
         * that you can use to locate the celebrity's face on the image.</p> <p>Amazon
         * Rekognition doesn't retain information about which images a celebrity has been
         * recognized in. Your application must store this information and use the
         * <code>Celebrity</code> ID property as a unique identifier for the celebrity. If
         * you don't store the celebrity name or additional information URLs returned by
         * <code>RecognizeCelebrities</code>, you will need the ID to identify the
         * celebrity in a call to the <a>GetCelebrityInfo</a> operation.</p> <p>You pass
         * the input image either as base64-encoded image bytes or as a reference to an
         * image in an Amazon S3 bucket. If you use the AWS CLI to call Amazon Rekognition
         * operations, passing image bytes is not supported. The image must be either a PNG
         * or JPEG formatted file. </p> <p>For an example, see Recognizing Celebrities in
         * an Image in the Amazon Rekognition Developer Guide.</p> <p>This operation
         * requires permissions to perform the
         * <code>rekognition:RecognizeCelebrities</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/RecognizeCelebrities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RecognizeCelebritiesAsync(const Model::RecognizeCelebritiesRequest& request, const RecognizeCelebritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For a given input face ID, searches for matching faces in the collection the
         * face belongs to. You get a face ID when you add a face to the collection using
         * the <a>IndexFaces</a> operation. The operation compares the features of the
         * input face with faces in the specified collection. </p> <note> <p>You can also
         * search faces without indexing faces by using the <code>SearchFacesByImage</code>
         * operation.</p> </note> <p> The operation response returns an array of faces that
         * match, ordered by similarity score with the highest similarity first. More
         * specifically, it is an array of metadata for each face match that is found.
         * Along with the metadata, the response also includes a <code>confidence</code>
         * value for each face match, indicating the confidence that the specific face
         * matches the input face. </p> <p>For an example, see Searching for a Face Using
         * Its Face ID in the Amazon Rekognition Developer Guide.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:SearchFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SearchFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchFacesOutcome SearchFaces(const Model::SearchFacesRequest& request) const;

        /**
         * <p>For a given input face ID, searches for matching faces in the collection the
         * face belongs to. You get a face ID when you add a face to the collection using
         * the <a>IndexFaces</a> operation. The operation compares the features of the
         * input face with faces in the specified collection. </p> <note> <p>You can also
         * search faces without indexing faces by using the <code>SearchFacesByImage</code>
         * operation.</p> </note> <p> The operation response returns an array of faces that
         * match, ordered by similarity score with the highest similarity first. More
         * specifically, it is an array of metadata for each face match that is found.
         * Along with the metadata, the response also includes a <code>confidence</code>
         * value for each face match, indicating the confidence that the specific face
         * matches the input face. </p> <p>For an example, see Searching for a Face Using
         * Its Face ID in the Amazon Rekognition Developer Guide.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:SearchFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SearchFaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchFacesOutcomeCallable SearchFacesCallable(const Model::SearchFacesRequest& request) const;

        /**
         * <p>For a given input face ID, searches for matching faces in the collection the
         * face belongs to. You get a face ID when you add a face to the collection using
         * the <a>IndexFaces</a> operation. The operation compares the features of the
         * input face with faces in the specified collection. </p> <note> <p>You can also
         * search faces without indexing faces by using the <code>SearchFacesByImage</code>
         * operation.</p> </note> <p> The operation response returns an array of faces that
         * match, ordered by similarity score with the highest similarity first. More
         * specifically, it is an array of metadata for each face match that is found.
         * Along with the metadata, the response also includes a <code>confidence</code>
         * value for each face match, indicating the confidence that the specific face
         * matches the input face. </p> <p>For an example, see Searching for a Face Using
         * Its Face ID in the Amazon Rekognition Developer Guide.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:SearchFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SearchFaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchFacesAsync(const Model::SearchFacesRequest& request, const SearchFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For a given input image, first detects the largest face in the image, and
         * then searches the specified collection for matching faces. The operation
         * compares the features of the input face with faces in the specified collection.
         * </p> <note> <p>To search for all faces in an input image, you might first call
         * the <a>IndexFaces</a> operation, and then use the face IDs returned in
         * subsequent calls to the <a>SearchFaces</a> operation. </p> <p> You can also call
         * the <code>DetectFaces</code> operation and use the bounding boxes in the
         * response to make face crops, which then you can pass in to the
         * <code>SearchFacesByImage</code> operation. </p> </note> <p>You pass the input
         * image either as base64-encoded image bytes or as a reference to an image in an
         * Amazon S3 bucket. If you use the AWS CLI to call Amazon Rekognition operations,
         * passing image bytes is not supported. The image must be either a PNG or JPEG
         * formatted file. </p> <p> The response returns an array of faces that match,
         * ordered by similarity score with the highest similarity first. More
         * specifically, it is an array of metadata for each face match found. Along with
         * the metadata, the response also includes a <code>similarity</code> indicating
         * how similar the face is to the input face. In the response, the operation also
         * returns the bounding box (and a confidence level that the bounding box contains
         * a face) of the face that Amazon Rekognition used for the input image. </p>
         * <p>For an example, Searching for a Face Using an Image in the Amazon Rekognition
         * Developer Guide.</p> <p>This operation requires permissions to perform the
         * <code>rekognition:SearchFacesByImage</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SearchFacesByImage">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchFacesByImageOutcome SearchFacesByImage(const Model::SearchFacesByImageRequest& request) const;

        /**
         * <p>For a given input image, first detects the largest face in the image, and
         * then searches the specified collection for matching faces. The operation
         * compares the features of the input face with faces in the specified collection.
         * </p> <note> <p>To search for all faces in an input image, you might first call
         * the <a>IndexFaces</a> operation, and then use the face IDs returned in
         * subsequent calls to the <a>SearchFaces</a> operation. </p> <p> You can also call
         * the <code>DetectFaces</code> operation and use the bounding boxes in the
         * response to make face crops, which then you can pass in to the
         * <code>SearchFacesByImage</code> operation. </p> </note> <p>You pass the input
         * image either as base64-encoded image bytes or as a reference to an image in an
         * Amazon S3 bucket. If you use the AWS CLI to call Amazon Rekognition operations,
         * passing image bytes is not supported. The image must be either a PNG or JPEG
         * formatted file. </p> <p> The response returns an array of faces that match,
         * ordered by similarity score with the highest similarity first. More
         * specifically, it is an array of metadata for each face match found. Along with
         * the metadata, the response also includes a <code>similarity</code> indicating
         * how similar the face is to the input face. In the response, the operation also
         * returns the bounding box (and a confidence level that the bounding box contains
         * a face) of the face that Amazon Rekognition used for the input image. </p>
         * <p>For an example, Searching for a Face Using an Image in the Amazon Rekognition
         * Developer Guide.</p> <p>This operation requires permissions to perform the
         * <code>rekognition:SearchFacesByImage</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SearchFacesByImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchFacesByImageOutcomeCallable SearchFacesByImageCallable(const Model::SearchFacesByImageRequest& request) const;

        /**
         * <p>For a given input image, first detects the largest face in the image, and
         * then searches the specified collection for matching faces. The operation
         * compares the features of the input face with faces in the specified collection.
         * </p> <note> <p>To search for all faces in an input image, you might first call
         * the <a>IndexFaces</a> operation, and then use the face IDs returned in
         * subsequent calls to the <a>SearchFaces</a> operation. </p> <p> You can also call
         * the <code>DetectFaces</code> operation and use the bounding boxes in the
         * response to make face crops, which then you can pass in to the
         * <code>SearchFacesByImage</code> operation. </p> </note> <p>You pass the input
         * image either as base64-encoded image bytes or as a reference to an image in an
         * Amazon S3 bucket. If you use the AWS CLI to call Amazon Rekognition operations,
         * passing image bytes is not supported. The image must be either a PNG or JPEG
         * formatted file. </p> <p> The response returns an array of faces that match,
         * ordered by similarity score with the highest similarity first. More
         * specifically, it is an array of metadata for each face match found. Along with
         * the metadata, the response also includes a <code>similarity</code> indicating
         * how similar the face is to the input face. In the response, the operation also
         * returns the bounding box (and a confidence level that the bounding box contains
         * a face) of the face that Amazon Rekognition used for the input image. </p>
         * <p>For an example, Searching for a Face Using an Image in the Amazon Rekognition
         * Developer Guide.</p> <p>This operation requires permissions to perform the
         * <code>rekognition:SearchFacesByImage</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SearchFacesByImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchFacesByImageAsync(const Model::SearchFacesByImageRequest& request, const SearchFacesByImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts asynchronous recognition of celebrities in a stored video.</p>
         * <p>Amazon Rekognition Video can detect celebrities in a video must be stored in
         * an Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the
         * filename of the video. <code>StartCelebrityRecognition</code> returns a job
         * identifier (<code>JobId</code>) which you use to get the results of the
         * analysis. When celebrity recognition analysis is finished, Amazon Rekognition
         * Video publishes a completion status to the Amazon Simple Notification Service
         * topic that you specify in <code>NotificationChannel</code>. To get the results
         * of the celebrity recognition analysis, first check that the status value
         * published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <a>GetCelebrityRecognition</a> and pass the job identifier (<code>JobId</code>)
         * from the initial call to <code>StartCelebrityRecognition</code>. </p> <p>For
         * more information, see Recognizing Celebrities in the Amazon Rekognition
         * Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartCelebrityRecognition">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCelebrityRecognitionOutcome StartCelebrityRecognition(const Model::StartCelebrityRecognitionRequest& request) const;

        /**
         * <p>Starts asynchronous recognition of celebrities in a stored video.</p>
         * <p>Amazon Rekognition Video can detect celebrities in a video must be stored in
         * an Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the
         * filename of the video. <code>StartCelebrityRecognition</code> returns a job
         * identifier (<code>JobId</code>) which you use to get the results of the
         * analysis. When celebrity recognition analysis is finished, Amazon Rekognition
         * Video publishes a completion status to the Amazon Simple Notification Service
         * topic that you specify in <code>NotificationChannel</code>. To get the results
         * of the celebrity recognition analysis, first check that the status value
         * published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <a>GetCelebrityRecognition</a> and pass the job identifier (<code>JobId</code>)
         * from the initial call to <code>StartCelebrityRecognition</code>. </p> <p>For
         * more information, see Recognizing Celebrities in the Amazon Rekognition
         * Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartCelebrityRecognition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartCelebrityRecognitionOutcomeCallable StartCelebrityRecognitionCallable(const Model::StartCelebrityRecognitionRequest& request) const;

        /**
         * <p>Starts asynchronous recognition of celebrities in a stored video.</p>
         * <p>Amazon Rekognition Video can detect celebrities in a video must be stored in
         * an Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the
         * filename of the video. <code>StartCelebrityRecognition</code> returns a job
         * identifier (<code>JobId</code>) which you use to get the results of the
         * analysis. When celebrity recognition analysis is finished, Amazon Rekognition
         * Video publishes a completion status to the Amazon Simple Notification Service
         * topic that you specify in <code>NotificationChannel</code>. To get the results
         * of the celebrity recognition analysis, first check that the status value
         * published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <a>GetCelebrityRecognition</a> and pass the job identifier (<code>JobId</code>)
         * from the initial call to <code>StartCelebrityRecognition</code>. </p> <p>For
         * more information, see Recognizing Celebrities in the Amazon Rekognition
         * Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartCelebrityRecognition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartCelebrityRecognitionAsync(const Model::StartCelebrityRecognitionRequest& request, const StartCelebrityRecognitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Starts asynchronous detection of explicit or suggestive adult content in a
         * stored video.</p> <p>Amazon Rekognition Video can moderate content in a video
         * stored in an Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and
         * the filename of the video. <code>StartContentModeration</code> returns a job
         * identifier (<code>JobId</code>) which you use to get the results of the
         * analysis. When content moderation analysis is finished, Amazon Rekognition Video
         * publishes a completion status to the Amazon Simple Notification Service topic
         * that you specify in <code>NotificationChannel</code>.</p> <p>To get the results
         * of the content moderation analysis, first check that the status value published
         * to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <a>GetContentModeration</a> and pass the job identifier (<code>JobId</code>)
         * from the initial call to <code>StartContentModeration</code>. </p> <p>For more
         * information, see Detecting Unsafe Content in the Amazon Rekognition Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartContentModeration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContentModerationOutcome StartContentModeration(const Model::StartContentModerationRequest& request) const;

        /**
         * <p> Starts asynchronous detection of explicit or suggestive adult content in a
         * stored video.</p> <p>Amazon Rekognition Video can moderate content in a video
         * stored in an Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and
         * the filename of the video. <code>StartContentModeration</code> returns a job
         * identifier (<code>JobId</code>) which you use to get the results of the
         * analysis. When content moderation analysis is finished, Amazon Rekognition Video
         * publishes a completion status to the Amazon Simple Notification Service topic
         * that you specify in <code>NotificationChannel</code>.</p> <p>To get the results
         * of the content moderation analysis, first check that the status value published
         * to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <a>GetContentModeration</a> and pass the job identifier (<code>JobId</code>)
         * from the initial call to <code>StartContentModeration</code>. </p> <p>For more
         * information, see Detecting Unsafe Content in the Amazon Rekognition Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartContentModeration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartContentModerationOutcomeCallable StartContentModerationCallable(const Model::StartContentModerationRequest& request) const;

        /**
         * <p> Starts asynchronous detection of explicit or suggestive adult content in a
         * stored video.</p> <p>Amazon Rekognition Video can moderate content in a video
         * stored in an Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and
         * the filename of the video. <code>StartContentModeration</code> returns a job
         * identifier (<code>JobId</code>) which you use to get the results of the
         * analysis. When content moderation analysis is finished, Amazon Rekognition Video
         * publishes a completion status to the Amazon Simple Notification Service topic
         * that you specify in <code>NotificationChannel</code>.</p> <p>To get the results
         * of the content moderation analysis, first check that the status value published
         * to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <a>GetContentModeration</a> and pass the job identifier (<code>JobId</code>)
         * from the initial call to <code>StartContentModeration</code>. </p> <p>For more
         * information, see Detecting Unsafe Content in the Amazon Rekognition Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartContentModeration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartContentModerationAsync(const Model::StartContentModerationRequest& request, const StartContentModerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts asynchronous detection of faces in a stored video.</p> <p>Amazon
         * Rekognition Video can detect faces in a video stored in an Amazon S3 bucket. Use
         * <a>Video</a> to specify the bucket name and the filename of the video.
         * <code>StartFaceDetection</code> returns a job identifier (<code>JobId</code>)
         * that you use to get the results of the operation. When face detection is
         * finished, Amazon Rekognition Video publishes a completion status to the Amazon
         * Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>. To get the results of the face detection
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <a>GetFaceDetection</a> and pass the job
         * identifier (<code>JobId</code>) from the initial call to
         * <code>StartFaceDetection</code>.</p> <p>For more information, see Detecting
         * Faces in a Stored Video in the Amazon Rekognition Developer Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartFaceDetection">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFaceDetectionOutcome StartFaceDetection(const Model::StartFaceDetectionRequest& request) const;

        /**
         * <p>Starts asynchronous detection of faces in a stored video.</p> <p>Amazon
         * Rekognition Video can detect faces in a video stored in an Amazon S3 bucket. Use
         * <a>Video</a> to specify the bucket name and the filename of the video.
         * <code>StartFaceDetection</code> returns a job identifier (<code>JobId</code>)
         * that you use to get the results of the operation. When face detection is
         * finished, Amazon Rekognition Video publishes a completion status to the Amazon
         * Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>. To get the results of the face detection
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <a>GetFaceDetection</a> and pass the job
         * identifier (<code>JobId</code>) from the initial call to
         * <code>StartFaceDetection</code>.</p> <p>For more information, see Detecting
         * Faces in a Stored Video in the Amazon Rekognition Developer Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartFaceDetection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFaceDetectionOutcomeCallable StartFaceDetectionCallable(const Model::StartFaceDetectionRequest& request) const;

        /**
         * <p>Starts asynchronous detection of faces in a stored video.</p> <p>Amazon
         * Rekognition Video can detect faces in a video stored in an Amazon S3 bucket. Use
         * <a>Video</a> to specify the bucket name and the filename of the video.
         * <code>StartFaceDetection</code> returns a job identifier (<code>JobId</code>)
         * that you use to get the results of the operation. When face detection is
         * finished, Amazon Rekognition Video publishes a completion status to the Amazon
         * Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>. To get the results of the face detection
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <a>GetFaceDetection</a> and pass the job
         * identifier (<code>JobId</code>) from the initial call to
         * <code>StartFaceDetection</code>.</p> <p>For more information, see Detecting
         * Faces in a Stored Video in the Amazon Rekognition Developer Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartFaceDetection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFaceDetectionAsync(const Model::StartFaceDetectionRequest& request, const StartFaceDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the asynchronous search for faces in a collection that match the faces
         * of persons detected in a stored video.</p> <p>The video must be stored in an
         * Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the filename
         * of the video. <code>StartFaceSearch</code> returns a job identifier
         * (<code>JobId</code>) which you use to get the search results once the search has
         * completed. When searching is finished, Amazon Rekognition Video publishes a
         * completion status to the Amazon Simple Notification Service topic that you
         * specify in <code>NotificationChannel</code>. To get the search results, first
         * check that the status value published to the Amazon SNS topic is
         * <code>SUCCEEDED</code>. If so, call <a>GetFaceSearch</a> and pass the job
         * identifier (<code>JobId</code>) from the initial call to
         * <code>StartFaceSearch</code>. For more information, see
         * <a>procedure-person-search-videos</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartFaceSearch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFaceSearchOutcome StartFaceSearch(const Model::StartFaceSearchRequest& request) const;

        /**
         * <p>Starts the asynchronous search for faces in a collection that match the faces
         * of persons detected in a stored video.</p> <p>The video must be stored in an
         * Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the filename
         * of the video. <code>StartFaceSearch</code> returns a job identifier
         * (<code>JobId</code>) which you use to get the search results once the search has
         * completed. When searching is finished, Amazon Rekognition Video publishes a
         * completion status to the Amazon Simple Notification Service topic that you
         * specify in <code>NotificationChannel</code>. To get the search results, first
         * check that the status value published to the Amazon SNS topic is
         * <code>SUCCEEDED</code>. If so, call <a>GetFaceSearch</a> and pass the job
         * identifier (<code>JobId</code>) from the initial call to
         * <code>StartFaceSearch</code>. For more information, see
         * <a>procedure-person-search-videos</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartFaceSearch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFaceSearchOutcomeCallable StartFaceSearchCallable(const Model::StartFaceSearchRequest& request) const;

        /**
         * <p>Starts the asynchronous search for faces in a collection that match the faces
         * of persons detected in a stored video.</p> <p>The video must be stored in an
         * Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the filename
         * of the video. <code>StartFaceSearch</code> returns a job identifier
         * (<code>JobId</code>) which you use to get the search results once the search has
         * completed. When searching is finished, Amazon Rekognition Video publishes a
         * completion status to the Amazon Simple Notification Service topic that you
         * specify in <code>NotificationChannel</code>. To get the search results, first
         * check that the status value published to the Amazon SNS topic is
         * <code>SUCCEEDED</code>. If so, call <a>GetFaceSearch</a> and pass the job
         * identifier (<code>JobId</code>) from the initial call to
         * <code>StartFaceSearch</code>. For more information, see
         * <a>procedure-person-search-videos</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartFaceSearch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFaceSearchAsync(const Model::StartFaceSearchRequest& request, const StartFaceSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts asynchronous detection of labels in a stored video.</p> <p>Amazon
         * Rekognition Video can detect labels in a video. Labels are instances of
         * real-world entities. This includes objects like flower, tree, and table; events
         * like wedding, graduation, and birthday party; concepts like landscape, evening,
         * and nature; and activities like a person getting out of a car or a person
         * skiing.</p> <p>The video must be stored in an Amazon S3 bucket. Use <a>Video</a>
         * to specify the bucket name and the filename of the video.
         * <code>StartLabelDetection</code> returns a job identifier (<code>JobId</code>)
         * which you use to get the results of the operation. When label detection is
         * finished, Amazon Rekognition Video publishes a completion status to the Amazon
         * Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>.</p> <p>To get the results of the label
         * detection operation, first check that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetLabelDetection</a> and
         * pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartLabelDetection</code>.</p> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartLabelDetection">AWS
         * API Reference</a></p>
         */
        virtual Model::StartLabelDetectionOutcome StartLabelDetection(const Model::StartLabelDetectionRequest& request) const;

        /**
         * <p>Starts asynchronous detection of labels in a stored video.</p> <p>Amazon
         * Rekognition Video can detect labels in a video. Labels are instances of
         * real-world entities. This includes objects like flower, tree, and table; events
         * like wedding, graduation, and birthday party; concepts like landscape, evening,
         * and nature; and activities like a person getting out of a car or a person
         * skiing.</p> <p>The video must be stored in an Amazon S3 bucket. Use <a>Video</a>
         * to specify the bucket name and the filename of the video.
         * <code>StartLabelDetection</code> returns a job identifier (<code>JobId</code>)
         * which you use to get the results of the operation. When label detection is
         * finished, Amazon Rekognition Video publishes a completion status to the Amazon
         * Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>.</p> <p>To get the results of the label
         * detection operation, first check that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetLabelDetection</a> and
         * pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartLabelDetection</code>.</p> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartLabelDetection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartLabelDetectionOutcomeCallable StartLabelDetectionCallable(const Model::StartLabelDetectionRequest& request) const;

        /**
         * <p>Starts asynchronous detection of labels in a stored video.</p> <p>Amazon
         * Rekognition Video can detect labels in a video. Labels are instances of
         * real-world entities. This includes objects like flower, tree, and table; events
         * like wedding, graduation, and birthday party; concepts like landscape, evening,
         * and nature; and activities like a person getting out of a car or a person
         * skiing.</p> <p>The video must be stored in an Amazon S3 bucket. Use <a>Video</a>
         * to specify the bucket name and the filename of the video.
         * <code>StartLabelDetection</code> returns a job identifier (<code>JobId</code>)
         * which you use to get the results of the operation. When label detection is
         * finished, Amazon Rekognition Video publishes a completion status to the Amazon
         * Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>.</p> <p>To get the results of the label
         * detection operation, first check that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetLabelDetection</a> and
         * pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartLabelDetection</code>.</p> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartLabelDetection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartLabelDetectionAsync(const Model::StartLabelDetectionRequest& request, const StartLabelDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the asynchronous tracking of a person's path in a stored video.</p>
         * <p>Amazon Rekognition Video can track the path of people in a video stored in an
         * Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the filename
         * of the video. <code>StartPersonTracking</code> returns a job identifier
         * (<code>JobId</code>) which you use to get the results of the operation. When
         * label detection is finished, Amazon Rekognition publishes a completion status to
         * the Amazon Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>. </p> <p>To get the results of the person
         * detection operation, first check that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetPersonTracking</a> and
         * pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartPersonTracking</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartPersonTracking">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPersonTrackingOutcome StartPersonTracking(const Model::StartPersonTrackingRequest& request) const;

        /**
         * <p>Starts the asynchronous tracking of a person's path in a stored video.</p>
         * <p>Amazon Rekognition Video can track the path of people in a video stored in an
         * Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the filename
         * of the video. <code>StartPersonTracking</code> returns a job identifier
         * (<code>JobId</code>) which you use to get the results of the operation. When
         * label detection is finished, Amazon Rekognition publishes a completion status to
         * the Amazon Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>. </p> <p>To get the results of the person
         * detection operation, first check that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetPersonTracking</a> and
         * pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartPersonTracking</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartPersonTracking">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartPersonTrackingOutcomeCallable StartPersonTrackingCallable(const Model::StartPersonTrackingRequest& request) const;

        /**
         * <p>Starts the asynchronous tracking of a person's path in a stored video.</p>
         * <p>Amazon Rekognition Video can track the path of people in a video stored in an
         * Amazon S3 bucket. Use <a>Video</a> to specify the bucket name and the filename
         * of the video. <code>StartPersonTracking</code> returns a job identifier
         * (<code>JobId</code>) which you use to get the results of the operation. When
         * label detection is finished, Amazon Rekognition publishes a completion status to
         * the Amazon Simple Notification Service topic that you specify in
         * <code>NotificationChannel</code>. </p> <p>To get the results of the person
         * detection operation, first check that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetPersonTracking</a> and
         * pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartPersonTracking</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartPersonTracking">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartPersonTrackingAsync(const Model::StartPersonTrackingRequest& request, const StartPersonTrackingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts processing a stream processor. You create a stream processor by
         * calling <a>CreateStreamProcessor</a>. To tell <code>StartStreamProcessor</code>
         * which stream processor to start, use the value of the <code>Name</code> field
         * specified in the call to <code>CreateStreamProcessor</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartStreamProcessor">AWS
         * API Reference</a></p>
         */
        virtual Model::StartStreamProcessorOutcome StartStreamProcessor(const Model::StartStreamProcessorRequest& request) const;

        /**
         * <p>Starts processing a stream processor. You create a stream processor by
         * calling <a>CreateStreamProcessor</a>. To tell <code>StartStreamProcessor</code>
         * which stream processor to start, use the value of the <code>Name</code> field
         * specified in the call to <code>CreateStreamProcessor</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartStreamProcessor">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartStreamProcessorOutcomeCallable StartStreamProcessorCallable(const Model::StartStreamProcessorRequest& request) const;

        /**
         * <p>Starts processing a stream processor. You create a stream processor by
         * calling <a>CreateStreamProcessor</a>. To tell <code>StartStreamProcessor</code>
         * which stream processor to start, use the value of the <code>Name</code> field
         * specified in the call to <code>CreateStreamProcessor</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartStreamProcessor">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartStreamProcessorAsync(const Model::StartStreamProcessorRequest& request, const StartStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a running stream processor that was created by
         * <a>CreateStreamProcessor</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StopStreamProcessor">AWS
         * API Reference</a></p>
         */
        virtual Model::StopStreamProcessorOutcome StopStreamProcessor(const Model::StopStreamProcessorRequest& request) const;

        /**
         * <p>Stops a running stream processor that was created by
         * <a>CreateStreamProcessor</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StopStreamProcessor">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopStreamProcessorOutcomeCallable StopStreamProcessorCallable(const Model::StopStreamProcessorRequest& request) const;

        /**
         * <p>Stops a running stream processor that was created by
         * <a>CreateStreamProcessor</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StopStreamProcessor">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopStreamProcessorAsync(const Model::StopStreamProcessorRequest& request, const StopStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CompareFacesAsyncHelper(const Model::CompareFacesRequest& request, const CompareFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCollectionAsyncHelper(const Model::CreateCollectionRequest& request, const CreateCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamProcessorAsyncHelper(const Model::CreateStreamProcessorRequest& request, const CreateStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCollectionAsyncHelper(const Model::DeleteCollectionRequest& request, const DeleteCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFacesAsyncHelper(const Model::DeleteFacesRequest& request, const DeleteFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStreamProcessorAsyncHelper(const Model::DeleteStreamProcessorRequest& request, const DeleteStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCollectionAsyncHelper(const Model::DescribeCollectionRequest& request, const DescribeCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStreamProcessorAsyncHelper(const Model::DescribeStreamProcessorRequest& request, const DescribeStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectFacesAsyncHelper(const Model::DetectFacesRequest& request, const DetectFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectLabelsAsyncHelper(const Model::DetectLabelsRequest& request, const DetectLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectModerationLabelsAsyncHelper(const Model::DetectModerationLabelsRequest& request, const DetectModerationLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectTextAsyncHelper(const Model::DetectTextRequest& request, const DetectTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCelebrityInfoAsyncHelper(const Model::GetCelebrityInfoRequest& request, const GetCelebrityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCelebrityRecognitionAsyncHelper(const Model::GetCelebrityRecognitionRequest& request, const GetCelebrityRecognitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContentModerationAsyncHelper(const Model::GetContentModerationRequest& request, const GetContentModerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFaceDetectionAsyncHelper(const Model::GetFaceDetectionRequest& request, const GetFaceDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFaceSearchAsyncHelper(const Model::GetFaceSearchRequest& request, const GetFaceSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLabelDetectionAsyncHelper(const Model::GetLabelDetectionRequest& request, const GetLabelDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPersonTrackingAsyncHelper(const Model::GetPersonTrackingRequest& request, const GetPersonTrackingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void IndexFacesAsyncHelper(const Model::IndexFacesRequest& request, const IndexFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCollectionsAsyncHelper(const Model::ListCollectionsRequest& request, const ListCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFacesAsyncHelper(const Model::ListFacesRequest& request, const ListFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamProcessorsAsyncHelper(const Model::ListStreamProcessorsRequest& request, const ListStreamProcessorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RecognizeCelebritiesAsyncHelper(const Model::RecognizeCelebritiesRequest& request, const RecognizeCelebritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchFacesAsyncHelper(const Model::SearchFacesRequest& request, const SearchFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchFacesByImageAsyncHelper(const Model::SearchFacesByImageRequest& request, const SearchFacesByImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartCelebrityRecognitionAsyncHelper(const Model::StartCelebrityRecognitionRequest& request, const StartCelebrityRecognitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartContentModerationAsyncHelper(const Model::StartContentModerationRequest& request, const StartContentModerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartFaceDetectionAsyncHelper(const Model::StartFaceDetectionRequest& request, const StartFaceDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartFaceSearchAsyncHelper(const Model::StartFaceSearchRequest& request, const StartFaceSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartLabelDetectionAsyncHelper(const Model::StartLabelDetectionRequest& request, const StartLabelDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartPersonTrackingAsyncHelper(const Model::StartPersonTrackingRequest& request, const StartPersonTrackingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartStreamProcessorAsyncHelper(const Model::StartStreamProcessorRequest& request, const StartStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopStreamProcessorAsyncHelper(const Model::StopStreamProcessorRequest& request, const StopStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Rekognition
} // namespace Aws
