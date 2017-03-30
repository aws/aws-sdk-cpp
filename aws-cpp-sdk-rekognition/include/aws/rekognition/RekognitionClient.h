/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rekognition/model/DeleteCollectionResult.h>
#include <aws/rekognition/model/DeleteFacesResult.h>
#include <aws/rekognition/model/DetectFacesResult.h>
#include <aws/rekognition/model/DetectLabelsResult.h>
#include <aws/rekognition/model/IndexFacesResult.h>
#include <aws/rekognition/model/ListCollectionsResult.h>
#include <aws/rekognition/model/ListFacesResult.h>
#include <aws/rekognition/model/SearchFacesResult.h>
#include <aws/rekognition/model/SearchFacesByImageResult.h>
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

namespace Rekognition
{

namespace Model
{
        class CompareFacesRequest;
        class CreateCollectionRequest;
        class DeleteCollectionRequest;
        class DeleteFacesRequest;
        class DetectFacesRequest;
        class DetectLabelsRequest;
        class IndexFacesRequest;
        class ListCollectionsRequest;
        class ListFacesRequest;
        class SearchFacesRequest;
        class SearchFacesByImageRequest;

        typedef Aws::Utils::Outcome<CompareFacesResult, Aws::Client::AWSError<RekognitionErrors>> CompareFacesOutcome;
        typedef Aws::Utils::Outcome<CreateCollectionResult, Aws::Client::AWSError<RekognitionErrors>> CreateCollectionOutcome;
        typedef Aws::Utils::Outcome<DeleteCollectionResult, Aws::Client::AWSError<RekognitionErrors>> DeleteCollectionOutcome;
        typedef Aws::Utils::Outcome<DeleteFacesResult, Aws::Client::AWSError<RekognitionErrors>> DeleteFacesOutcome;
        typedef Aws::Utils::Outcome<DetectFacesResult, Aws::Client::AWSError<RekognitionErrors>> DetectFacesOutcome;
        typedef Aws::Utils::Outcome<DetectLabelsResult, Aws::Client::AWSError<RekognitionErrors>> DetectLabelsOutcome;
        typedef Aws::Utils::Outcome<IndexFacesResult, Aws::Client::AWSError<RekognitionErrors>> IndexFacesOutcome;
        typedef Aws::Utils::Outcome<ListCollectionsResult, Aws::Client::AWSError<RekognitionErrors>> ListCollectionsOutcome;
        typedef Aws::Utils::Outcome<ListFacesResult, Aws::Client::AWSError<RekognitionErrors>> ListFacesOutcome;
        typedef Aws::Utils::Outcome<SearchFacesResult, Aws::Client::AWSError<RekognitionErrors>> SearchFacesOutcome;
        typedef Aws::Utils::Outcome<SearchFacesByImageResult, Aws::Client::AWSError<RekognitionErrors>> SearchFacesByImageOutcome;

        typedef std::future<CompareFacesOutcome> CompareFacesOutcomeCallable;
        typedef std::future<CreateCollectionOutcome> CreateCollectionOutcomeCallable;
        typedef std::future<DeleteCollectionOutcome> DeleteCollectionOutcomeCallable;
        typedef std::future<DeleteFacesOutcome> DeleteFacesOutcomeCallable;
        typedef std::future<DetectFacesOutcome> DetectFacesOutcomeCallable;
        typedef std::future<DetectLabelsOutcome> DetectLabelsOutcomeCallable;
        typedef std::future<IndexFacesOutcome> IndexFacesOutcomeCallable;
        typedef std::future<ListCollectionsOutcome> ListCollectionsOutcomeCallable;
        typedef std::future<ListFacesOutcome> ListFacesOutcomeCallable;
        typedef std::future<SearchFacesOutcome> SearchFacesOutcomeCallable;
        typedef std::future<SearchFacesByImageOutcome> SearchFacesByImageOutcomeCallable;
} // namespace Model

  class RekognitionClient;

    typedef std::function<void(const RekognitionClient*, const Model::CompareFacesRequest&, const Model::CompareFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompareFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::CreateCollectionRequest&, const Model::CreateCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCollectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DeleteCollectionRequest&, const Model::DeleteCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCollectionResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DeleteFacesRequest&, const Model::DeleteFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DetectFacesRequest&, const Model::DetectFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::DetectLabelsRequest&, const Model::DetectLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectLabelsResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::IndexFacesRequest&, const Model::IndexFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IndexFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::ListCollectionsRequest&, const Model::ListCollectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollectionsResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::ListFacesRequest&, const Model::ListFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::SearchFacesRequest&, const Model::SearchFacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchFacesResponseReceivedHandler;
    typedef std::function<void(const RekognitionClient*, const Model::SearchFacesByImageRequest&, const Model::SearchFacesByImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchFacesByImageResponseReceivedHandler;

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
        RekognitionClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RekognitionClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RekognitionClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~RekognitionClient();

        /**
         * <p>Compares a face in the <i>source</i> input image with each face detected in
         * the <i>target</i> input image. </p> <note> <p> If the source image contains
         * multiple faces, the service detects the largest face and uses it to compare with
         * each face detected in the target image. </p> </note> <p>In response, the
         * operation returns an array of face matches ordered by similarity score with the
         * highest similarity scores first. For each face match, the response provides a
         * bounding box of the face and <code>confidence</code> value (indicating the level
         * of confidence that the bounding box contains a face). The response also provides
         * a <code>similarity</code> score, which indicates how closely the faces match.
         * </p> <note> <p>By default, only faces with the similarity score of greater than
         * or equal to 80% are returned in the response. You can change this value.</p>
         * </note> <p>In addition to the face matches, the response returns information
         * about the face in the source image, including the bounding box of the face and
         * confidence value.</p> <note> <p> This is a stateless API operation. That is, the
         * operation does not persist any data.</p> </note> <p>For an example, see
         * <a>get-started-exercise-compare-faces</a> </p> <p>This operation requires
         * permissions to perform the <code>rekognition:CompareFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CompareFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::CompareFacesOutcome CompareFaces(const Model::CompareFacesRequest& request) const;

        /**
         * <p>Compares a face in the <i>source</i> input image with each face detected in
         * the <i>target</i> input image. </p> <note> <p> If the source image contains
         * multiple faces, the service detects the largest face and uses it to compare with
         * each face detected in the target image. </p> </note> <p>In response, the
         * operation returns an array of face matches ordered by similarity score with the
         * highest similarity scores first. For each face match, the response provides a
         * bounding box of the face and <code>confidence</code> value (indicating the level
         * of confidence that the bounding box contains a face). The response also provides
         * a <code>similarity</code> score, which indicates how closely the faces match.
         * </p> <note> <p>By default, only faces with the similarity score of greater than
         * or equal to 80% are returned in the response. You can change this value.</p>
         * </note> <p>In addition to the face matches, the response returns information
         * about the face in the source image, including the bounding box of the face and
         * confidence value.</p> <note> <p> This is a stateless API operation. That is, the
         * operation does not persist any data.</p> </note> <p>For an example, see
         * <a>get-started-exercise-compare-faces</a> </p> <p>This operation requires
         * permissions to perform the <code>rekognition:CompareFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CompareFaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CompareFacesOutcomeCallable CompareFacesCallable(const Model::CompareFacesRequest& request) const;

        /**
         * <p>Compares a face in the <i>source</i> input image with each face detected in
         * the <i>target</i> input image. </p> <note> <p> If the source image contains
         * multiple faces, the service detects the largest face and uses it to compare with
         * each face detected in the target image. </p> </note> <p>In response, the
         * operation returns an array of face matches ordered by similarity score with the
         * highest similarity scores first. For each face match, the response provides a
         * bounding box of the face and <code>confidence</code> value (indicating the level
         * of confidence that the bounding box contains a face). The response also provides
         * a <code>similarity</code> score, which indicates how closely the faces match.
         * </p> <note> <p>By default, only faces with the similarity score of greater than
         * or equal to 80% are returned in the response. You can change this value.</p>
         * </note> <p>In addition to the face matches, the response returns information
         * about the face in the source image, including the bounding box of the face and
         * confidence value.</p> <note> <p> This is a stateless API operation. That is, the
         * operation does not persist any data.</p> </note> <p>For an example, see
         * <a>get-started-exercise-compare-faces</a> </p> <p>This operation requires
         * permissions to perform the <code>rekognition:CompareFaces</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CompareFaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CompareFacesAsync(const Model::CompareFacesRequest& request, const CompareFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a collection in an AWS Region. You can add faces to the collection
         * using the operation. </p> <p>For example, you might create collections, one for
         * each of your application users. A user can then index faces using the
         * <code>IndexFaces</code> operation and persist results in a specific collection.
         * Then, a user can search the collection for faces in the user-specific container.
         * </p> <p>For an example, see <a>example1</a>. </p> <p>This operation requires
         * permissions to perform the <code>rekognition:CreateCollection</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCollectionOutcome CreateCollection(const Model::CreateCollectionRequest& request) const;

        /**
         * <p>Creates a collection in an AWS Region. You can add faces to the collection
         * using the operation. </p> <p>For example, you might create collections, one for
         * each of your application users. A user can then index faces using the
         * <code>IndexFaces</code> operation and persist results in a specific collection.
         * Then, a user can search the collection for faces in the user-specific container.
         * </p> <p>For an example, see <a>example1</a>. </p> <p>This operation requires
         * permissions to perform the <code>rekognition:CreateCollection</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateCollection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCollectionOutcomeCallable CreateCollectionCallable(const Model::CreateCollectionRequest& request) const;

        /**
         * <p>Creates a collection in an AWS Region. You can add faces to the collection
         * using the operation. </p> <p>For example, you might create collections, one for
         * each of your application users. A user can then index faces using the
         * <code>IndexFaces</code> operation and persist results in a specific collection.
         * Then, a user can search the collection for faces in the user-specific container.
         * </p> <p>For an example, see <a>example1</a>. </p> <p>This operation requires
         * permissions to perform the <code>rekognition:CreateCollection</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CreateCollection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCollectionAsync(const Model::CreateCollectionRequest& request, const CreateCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified collection. Note that this operation removes all faces
         * in the collection. For an example, see <a>example1</a>.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:DeleteCollection</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCollectionOutcome DeleteCollection(const Model::DeleteCollectionRequest& request) const;

        /**
         * <p>Deletes the specified collection. Note that this operation removes all faces
         * in the collection. For an example, see <a>example1</a>.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:DeleteCollection</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DeleteCollection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCollectionOutcomeCallable DeleteCollectionCallable(const Model::DeleteCollectionRequest& request) const;

        /**
         * <p>Deletes the specified collection. Note that this operation removes all faces
         * in the collection. For an example, see <a>example1</a>.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:DeleteCollection</code>
         * action.</p><p><h3>See Also:</h3>   <a
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
         * <p>Detects faces within an image (JPEG or PNG) that is provided as input.</p>
         * <p> For each face detected, the operation returns face details including a
         * bounding box of the face, a confidence value (that the bounding box contains a
         * face), and a fixed set of attributes such as facial landmarks (for example,
         * coordinates of eye and mouth), gender, presence of beard, sunglasses, etc. </p>
         * <p>The face-detection algorithm is most effective on frontal faces. For
         * non-frontal or obscured faces, the algorithm may not detect the faces or might
         * detect faces with lower confidence. </p> <note> <p>This is a stateless API
         * operation. That is, the operation does not persist any data.</p> </note> <p>For
         * an example, see <a>get-started-exercise-detect-faces</a>.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:DetectFaces</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectFacesOutcome DetectFaces(const Model::DetectFacesRequest& request) const;

        /**
         * <p>Detects faces within an image (JPEG or PNG) that is provided as input.</p>
         * <p> For each face detected, the operation returns face details including a
         * bounding box of the face, a confidence value (that the bounding box contains a
         * face), and a fixed set of attributes such as facial landmarks (for example,
         * coordinates of eye and mouth), gender, presence of beard, sunglasses, etc. </p>
         * <p>The face-detection algorithm is most effective on frontal faces. For
         * non-frontal or obscured faces, the algorithm may not detect the faces or might
         * detect faces with lower confidence. </p> <note> <p>This is a stateless API
         * operation. That is, the operation does not persist any data.</p> </note> <p>For
         * an example, see <a>get-started-exercise-detect-faces</a>.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:DetectFaces</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectFaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectFacesOutcomeCallable DetectFacesCallable(const Model::DetectFacesRequest& request) const;

        /**
         * <p>Detects faces within an image (JPEG or PNG) that is provided as input.</p>
         * <p> For each face detected, the operation returns face details including a
         * bounding box of the face, a confidence value (that the bounding box contains a
         * face), and a fixed set of attributes such as facial landmarks (for example,
         * coordinates of eye and mouth), gender, presence of beard, sunglasses, etc. </p>
         * <p>The face-detection algorithm is most effective on frontal faces. For
         * non-frontal or obscured faces, the algorithm may not detect the faces or might
         * detect faces with lower confidence. </p> <note> <p>This is a stateless API
         * operation. That is, the operation does not persist any data.</p> </note> <p>For
         * an example, see <a>get-started-exercise-detect-faces</a>.</p> <p>This operation
         * requires permissions to perform the <code>rekognition:DetectFaces</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectFaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectFacesAsync(const Model::DetectFacesRequest& request, const DetectFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects instances of real-world labels within an image (JPEG or PNG) provided
         * as input. This includes objects like flower, tree, and table; events like
         * wedding, graduation, and birthday party; and concepts like landscape, evening,
         * and nature. For an example, see <a>get-started-exercise-detect-labels</a>.</p>
         * <p> For each object, scene, and concept the API returns one or more labels. Each
         * label provides the object name, and the level of confidence that the image
         * contains the object. For example, suppose the input image has a lighthouse, the
         * sea, and a rock. The response will include all three labels, one for each
         * object. </p> <p> <code>{Name: lighthouse, Confidence: 98.4629}</code> </p> <p>
         * <code>{Name: rock,Confidence: 79.2097}</code> </p> <p> <code> {Name:
         * sea,Confidence: 75.061}</code> </p> <p> In the preceding example, the operation
         * returns one label for each of the three objects. The operation can also return
         * multiple labels for the same object in the image. For example, if the input
         * image shows a flower (for example, a tulip), the operation might return the
         * following three labels. </p> <p> <code>{Name: flower,Confidence: 99.0562}</code>
         * </p> <p> <code>{Name: plant,Confidence: 99.0562}</code> </p> <p> <code>{Name:
         * tulip,Confidence: 99.0562}</code> </p> <p>In this example, the detection
         * algorithm more precisely identifies the flower as a tulip.</p> <p>You can
         * provide the input image as an S3 object or as base64-encoded bytes. In response,
         * the API returns an array of labels. In addition, the response also includes the
         * orientation correction. Optionally, you can specify <code>MinConfidence</code>
         * to control the confidence threshold for the labels returned. The default is 50%.
         * You can also add the <code>MaxLabels</code> parameter to limit the number of
         * labels returned. </p> <note> <p>If the object detected is a person, the
         * operation doesn't provide the same facial details that the <a>DetectFaces</a>
         * operation provides.</p> </note> <p>This is a stateless API operation. That is,
         * the operation does not persist any data.</p> <p>This operation requires
         * permissions to perform the <code>rekognition:DetectLabels</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectLabelsOutcome DetectLabels(const Model::DetectLabelsRequest& request) const;

        /**
         * <p>Detects instances of real-world labels within an image (JPEG or PNG) provided
         * as input. This includes objects like flower, tree, and table; events like
         * wedding, graduation, and birthday party; and concepts like landscape, evening,
         * and nature. For an example, see <a>get-started-exercise-detect-labels</a>.</p>
         * <p> For each object, scene, and concept the API returns one or more labels. Each
         * label provides the object name, and the level of confidence that the image
         * contains the object. For example, suppose the input image has a lighthouse, the
         * sea, and a rock. The response will include all three labels, one for each
         * object. </p> <p> <code>{Name: lighthouse, Confidence: 98.4629}</code> </p> <p>
         * <code>{Name: rock,Confidence: 79.2097}</code> </p> <p> <code> {Name:
         * sea,Confidence: 75.061}</code> </p> <p> In the preceding example, the operation
         * returns one label for each of the three objects. The operation can also return
         * multiple labels for the same object in the image. For example, if the input
         * image shows a flower (for example, a tulip), the operation might return the
         * following three labels. </p> <p> <code>{Name: flower,Confidence: 99.0562}</code>
         * </p> <p> <code>{Name: plant,Confidence: 99.0562}</code> </p> <p> <code>{Name:
         * tulip,Confidence: 99.0562}</code> </p> <p>In this example, the detection
         * algorithm more precisely identifies the flower as a tulip.</p> <p>You can
         * provide the input image as an S3 object or as base64-encoded bytes. In response,
         * the API returns an array of labels. In addition, the response also includes the
         * orientation correction. Optionally, you can specify <code>MinConfidence</code>
         * to control the confidence threshold for the labels returned. The default is 50%.
         * You can also add the <code>MaxLabels</code> parameter to limit the number of
         * labels returned. </p> <note> <p>If the object detected is a person, the
         * operation doesn't provide the same facial details that the <a>DetectFaces</a>
         * operation provides.</p> </note> <p>This is a stateless API operation. That is,
         * the operation does not persist any data.</p> <p>This operation requires
         * permissions to perform the <code>rekognition:DetectLabels</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectLabels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectLabelsOutcomeCallable DetectLabelsCallable(const Model::DetectLabelsRequest& request) const;

        /**
         * <p>Detects instances of real-world labels within an image (JPEG or PNG) provided
         * as input. This includes objects like flower, tree, and table; events like
         * wedding, graduation, and birthday party; and concepts like landscape, evening,
         * and nature. For an example, see <a>get-started-exercise-detect-labels</a>.</p>
         * <p> For each object, scene, and concept the API returns one or more labels. Each
         * label provides the object name, and the level of confidence that the image
         * contains the object. For example, suppose the input image has a lighthouse, the
         * sea, and a rock. The response will include all three labels, one for each
         * object. </p> <p> <code>{Name: lighthouse, Confidence: 98.4629}</code> </p> <p>
         * <code>{Name: rock,Confidence: 79.2097}</code> </p> <p> <code> {Name:
         * sea,Confidence: 75.061}</code> </p> <p> In the preceding example, the operation
         * returns one label for each of the three objects. The operation can also return
         * multiple labels for the same object in the image. For example, if the input
         * image shows a flower (for example, a tulip), the operation might return the
         * following three labels. </p> <p> <code>{Name: flower,Confidence: 99.0562}</code>
         * </p> <p> <code>{Name: plant,Confidence: 99.0562}</code> </p> <p> <code>{Name:
         * tulip,Confidence: 99.0562}</code> </p> <p>In this example, the detection
         * algorithm more precisely identifies the flower as a tulip.</p> <p>You can
         * provide the input image as an S3 object or as base64-encoded bytes. In response,
         * the API returns an array of labels. In addition, the response also includes the
         * orientation correction. Optionally, you can specify <code>MinConfidence</code>
         * to control the confidence threshold for the labels returned. The default is 50%.
         * You can also add the <code>MaxLabels</code> parameter to limit the number of
         * labels returned. </p> <note> <p>If the object detected is a person, the
         * operation doesn't provide the same facial details that the <a>DetectFaces</a>
         * operation provides.</p> </note> <p>This is a stateless API operation. That is,
         * the operation does not persist any data.</p> <p>This operation requires
         * permissions to perform the <code>rekognition:DetectLabels</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectLabels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectLabelsAsync(const Model::DetectLabelsRequest& request, const DetectLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects faces in the input image and adds them to the specified collection.
         * </p> <p> Amazon Rekognition does not save the actual faces detected. Instead,
         * the underlying detection algorithm first detects the faces in the input image,
         * and for each face extracts facial features into a feature vector, and stores it
         * in the back-end database. Amazon Rekognition uses feature vectors when
         * performing face match and search operations using the and operations. </p> <p>If
         * you provide the optional <code>externalImageID</code> for the input image you
         * provided, Amazon Rekognition associates this ID with all faces that it detects.
         * When you call the operation, the response returns the external ID. You can use
         * this external image ID to create a client-side index to associate the faces with
         * each image. You can then use the index to find all faces in an image. </p> <p>In
         * response, the operation returns an array of metadata for all detected faces.
         * This includes, the bounding box of the detected face, confidence value
         * (indicating the bounding box contains a face), a face ID assigned by the service
         * for each face that is detected and stored, and an image ID assigned by the
         * service for the input image If you request all facial attributes (using the
         * <code>detectionAttributes</code> parameter, Amazon Rekognition returns detailed
         * facial attributes such as facial landmarks (for example, location of eye and
         * mount) and other facial attributes such gender. If you provide the same image,
         * specify the same collection, and use the same external ID in the
         * <code>IndexFaces</code> operation, Amazon Rekognition doesn't save duplicate
         * face metadata. </p> <p>For an example, see <a>example2</a>.</p> <p>This
         * operation requires permissions to perform the
         * <code>rekognition:IndexFaces</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/IndexFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::IndexFacesOutcome IndexFaces(const Model::IndexFacesRequest& request) const;

        /**
         * <p>Detects faces in the input image and adds them to the specified collection.
         * </p> <p> Amazon Rekognition does not save the actual faces detected. Instead,
         * the underlying detection algorithm first detects the faces in the input image,
         * and for each face extracts facial features into a feature vector, and stores it
         * in the back-end database. Amazon Rekognition uses feature vectors when
         * performing face match and search operations using the and operations. </p> <p>If
         * you provide the optional <code>externalImageID</code> for the input image you
         * provided, Amazon Rekognition associates this ID with all faces that it detects.
         * When you call the operation, the response returns the external ID. You can use
         * this external image ID to create a client-side index to associate the faces with
         * each image. You can then use the index to find all faces in an image. </p> <p>In
         * response, the operation returns an array of metadata for all detected faces.
         * This includes, the bounding box of the detected face, confidence value
         * (indicating the bounding box contains a face), a face ID assigned by the service
         * for each face that is detected and stored, and an image ID assigned by the
         * service for the input image If you request all facial attributes (using the
         * <code>detectionAttributes</code> parameter, Amazon Rekognition returns detailed
         * facial attributes such as facial landmarks (for example, location of eye and
         * mount) and other facial attributes such gender. If you provide the same image,
         * specify the same collection, and use the same external ID in the
         * <code>IndexFaces</code> operation, Amazon Rekognition doesn't save duplicate
         * face metadata. </p> <p>For an example, see <a>example2</a>.</p> <p>This
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
         * </p> <p> Amazon Rekognition does not save the actual faces detected. Instead,
         * the underlying detection algorithm first detects the faces in the input image,
         * and for each face extracts facial features into a feature vector, and stores it
         * in the back-end database. Amazon Rekognition uses feature vectors when
         * performing face match and search operations using the and operations. </p> <p>If
         * you provide the optional <code>externalImageID</code> for the input image you
         * provided, Amazon Rekognition associates this ID with all faces that it detects.
         * When you call the operation, the response returns the external ID. You can use
         * this external image ID to create a client-side index to associate the faces with
         * each image. You can then use the index to find all faces in an image. </p> <p>In
         * response, the operation returns an array of metadata for all detected faces.
         * This includes, the bounding box of the detected face, confidence value
         * (indicating the bounding box contains a face), a face ID assigned by the service
         * for each face that is detected and stored, and an image ID assigned by the
         * service for the input image If you request all facial attributes (using the
         * <code>detectionAttributes</code> parameter, Amazon Rekognition returns detailed
         * facial attributes such as facial landmarks (for example, location of eye and
         * mount) and other facial attributes such gender. If you provide the same image,
         * specify the same collection, and use the same external ID in the
         * <code>IndexFaces</code> operation, Amazon Rekognition doesn't save duplicate
         * face metadata. </p> <p>For an example, see <a>example2</a>.</p> <p>This
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
         * example, see <a>example1</a>.</p> <p>This operation requires permissions to
         * perform the <code>rekognition:ListCollections</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListCollections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCollectionsOutcome ListCollections(const Model::ListCollectionsRequest& request) const;

        /**
         * <p>Returns list of collection IDs in your account. If the result is truncated,
         * the response also provides a <code>NextToken</code> that you can use in the
         * subsequent request to fetch the next set of collection IDs.</p> <p>For an
         * example, see <a>example1</a>.</p> <p>This operation requires permissions to
         * perform the <code>rekognition:ListCollections</code> action.</p><p><h3>See
         * Also:</h3>   <a
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
         * example, see <a>example1</a>.</p> <p>This operation requires permissions to
         * perform the <code>rekognition:ListCollections</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListCollections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCollectionsAsync(const Model::ListCollectionsRequest& request, const ListCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata for faces in the specified collection. This metadata
         * includes information such as the bounding box coordinates, the confidence (that
         * the bounding box contains a face), and face ID. For an example, see
         * <a>example3</a>. </p> <p>This operation requires permissions to perform the
         * <code>rekognition:ListFaces</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListFaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFacesOutcome ListFaces(const Model::ListFacesRequest& request) const;

        /**
         * <p>Returns metadata for faces in the specified collection. This metadata
         * includes information such as the bounding box coordinates, the confidence (that
         * the bounding box contains a face), and face ID. For an example, see
         * <a>example3</a>. </p> <p>This operation requires permissions to perform the
         * <code>rekognition:ListFaces</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListFaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFacesOutcomeCallable ListFacesCallable(const Model::ListFacesRequest& request) const;

        /**
         * <p>Returns metadata for faces in the specified collection. This metadata
         * includes information such as the bounding box coordinates, the confidence (that
         * the bounding box contains a face), and face ID. For an example, see
         * <a>example3</a>. </p> <p>This operation requires permissions to perform the
         * <code>rekognition:ListFaces</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ListFaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFacesAsync(const Model::ListFacesRequest& request, const ListFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * matches the input face. </p> <p>For an example, see <a>example3</a>.</p> <p>This
         * operation requires permissions to perform the
         * <code>rekognition:SearchFaces</code> action.</p><p><h3>See Also:</h3>   <a
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
         * matches the input face. </p> <p>For an example, see <a>example3</a>.</p> <p>This
         * operation requires permissions to perform the
         * <code>rekognition:SearchFaces</code> action.</p><p><h3>See Also:</h3>   <a
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
         * matches the input face. </p> <p>For an example, see <a>example3</a>.</p> <p>This
         * operation requires permissions to perform the
         * <code>rekognition:SearchFaces</code> action.</p><p><h3>See Also:</h3>   <a
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
         * </p> <note> <p> To search for all faces in an input image, you might first call
         * the operation, and then use the face IDs returned in subsequent calls to the
         * operation. </p> <p> You can also call the <code>DetectFaces</code> operation and
         * use the bounding boxes in the response to make face crops, which then you can
         * pass in to the <code>SearchFacesByImage</code> operation. </p> </note> <p> The
         * response returns an array of faces that match, ordered by similarity score with
         * the highest similarity first. More specifically, it is an array of metadata for
         * each face match found. Along with the metadata, the response also includes a
         * <code>similarity</code> indicating how similar the face is to the input face. In
         * the response, the operation also returns the bounding box (and a confidence
         * level that the bounding box contains a face) of the face that Amazon Rekognition
         * used for the input image. </p> <p>For an example, see <a>example3</a>.</p>
         * <p>This operation requires permissions to perform the
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
         * </p> <note> <p> To search for all faces in an input image, you might first call
         * the operation, and then use the face IDs returned in subsequent calls to the
         * operation. </p> <p> You can also call the <code>DetectFaces</code> operation and
         * use the bounding boxes in the response to make face crops, which then you can
         * pass in to the <code>SearchFacesByImage</code> operation. </p> </note> <p> The
         * response returns an array of faces that match, ordered by similarity score with
         * the highest similarity first. More specifically, it is an array of metadata for
         * each face match found. Along with the metadata, the response also includes a
         * <code>similarity</code> indicating how similar the face is to the input face. In
         * the response, the operation also returns the bounding box (and a confidence
         * level that the bounding box contains a face) of the face that Amazon Rekognition
         * used for the input image. </p> <p>For an example, see <a>example3</a>.</p>
         * <p>This operation requires permissions to perform the
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
         * </p> <note> <p> To search for all faces in an input image, you might first call
         * the operation, and then use the face IDs returned in subsequent calls to the
         * operation. </p> <p> You can also call the <code>DetectFaces</code> operation and
         * use the bounding boxes in the response to make face crops, which then you can
         * pass in to the <code>SearchFacesByImage</code> operation. </p> </note> <p> The
         * response returns an array of faces that match, ordered by similarity score with
         * the highest similarity first. More specifically, it is an array of metadata for
         * each face match found. Along with the metadata, the response also includes a
         * <code>similarity</code> indicating how similar the face is to the input face. In
         * the response, the operation also returns the bounding box (and a confidence
         * level that the bounding box contains a face) of the face that Amazon Rekognition
         * used for the input image. </p> <p>For an example, see <a>example3</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>rekognition:SearchFacesByImage</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SearchFacesByImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchFacesByImageAsync(const Model::SearchFacesByImageRequest& request, const SearchFacesByImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CompareFacesAsyncHelper(const Model::CompareFacesRequest& request, const CompareFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCollectionAsyncHelper(const Model::CreateCollectionRequest& request, const CreateCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCollectionAsyncHelper(const Model::DeleteCollectionRequest& request, const DeleteCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFacesAsyncHelper(const Model::DeleteFacesRequest& request, const DeleteFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectFacesAsyncHelper(const Model::DetectFacesRequest& request, const DetectFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectLabelsAsyncHelper(const Model::DetectLabelsRequest& request, const DetectLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void IndexFacesAsyncHelper(const Model::IndexFacesRequest& request, const IndexFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCollectionsAsyncHelper(const Model::ListCollectionsRequest& request, const ListCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFacesAsyncHelper(const Model::ListFacesRequest& request, const ListFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchFacesAsyncHelper(const Model::SearchFacesRequest& request, const SearchFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchFacesByImageAsyncHelper(const Model::SearchFacesByImageRequest& request, const SearchFacesByImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Rekognition
} // namespace Aws
