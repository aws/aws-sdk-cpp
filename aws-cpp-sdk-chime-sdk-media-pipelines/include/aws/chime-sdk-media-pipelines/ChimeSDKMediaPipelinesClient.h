/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaCapturePipelineResult.h>
#include <aws/chime-sdk-media-pipelines/model/GetMediaCapturePipelineResult.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaCapturePipelinesResult.h>
#include <aws/chime-sdk-media-pipelines/model/ListTagsForResourceResult.h>
#include <aws/chime-sdk-media-pipelines/model/TagResourceResult.h>
#include <aws/chime-sdk-media-pipelines/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
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

namespace ChimeSDKMediaPipelines
{

namespace Model
{
        class CreateMediaCapturePipelineRequest;
        class DeleteMediaCapturePipelineRequest;
        class GetMediaCapturePipelineRequest;
        class ListMediaCapturePipelinesRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<CreateMediaCapturePipelineResult, ChimeSDKMediaPipelinesError> CreateMediaCapturePipelineOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMediaPipelinesError> DeleteMediaCapturePipelineOutcome;
        typedef Aws::Utils::Outcome<GetMediaCapturePipelineResult, ChimeSDKMediaPipelinesError> GetMediaCapturePipelineOutcome;
        typedef Aws::Utils::Outcome<ListMediaCapturePipelinesResult, ChimeSDKMediaPipelinesError> ListMediaCapturePipelinesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ChimeSDKMediaPipelinesError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, ChimeSDKMediaPipelinesError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, ChimeSDKMediaPipelinesError> UntagResourceOutcome;

        typedef std::future<CreateMediaCapturePipelineOutcome> CreateMediaCapturePipelineOutcomeCallable;
        typedef std::future<DeleteMediaCapturePipelineOutcome> DeleteMediaCapturePipelineOutcomeCallable;
        typedef std::future<GetMediaCapturePipelineOutcome> GetMediaCapturePipelineOutcomeCallable;
        typedef std::future<ListMediaCapturePipelinesOutcome> ListMediaCapturePipelinesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class ChimeSDKMediaPipelinesClient;

    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::CreateMediaCapturePipelineRequest&, const Model::CreateMediaCapturePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMediaCapturePipelineResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::DeleteMediaCapturePipelineRequest&, const Model::DeleteMediaCapturePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMediaCapturePipelineResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::GetMediaCapturePipelineRequest&, const Model::GetMediaCapturePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMediaCapturePipelineResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::ListMediaCapturePipelinesRequest&, const Model::ListMediaCapturePipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMediaCapturePipelinesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>The Amazon Chime SDK media pipeline APIs in this section allow software
   * developers to create Amazon Chime SDK media pipelines and capture audio, video,
   * events, and data messages from Amazon Chime SDK meetings. For more information
   * about media pipleines, see <a
   * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amzon
   * Chime SDK media pipelines</a>. </p>
   */
  class AWS_CHIMESDKMEDIAPIPELINES_API ChimeSDKMediaPipelinesClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMediaPipelinesClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMediaPipelinesClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKMediaPipelinesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ChimeSDKMediaPipelinesClient();


        /**
         * <p>Creates a media capture pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/CreateMediaCapturePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMediaCapturePipelineOutcome CreateMediaCapturePipeline(const Model::CreateMediaCapturePipelineRequest& request) const;

        /**
         * A Callable wrapper for CreateMediaCapturePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMediaCapturePipelineOutcomeCallable CreateMediaCapturePipelineCallable(const Model::CreateMediaCapturePipelineRequest& request) const;

        /**
         * An Async wrapper for CreateMediaCapturePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMediaCapturePipelineAsync(const Model::CreateMediaCapturePipelineRequest& request, const CreateMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the media capture pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/DeleteMediaCapturePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMediaCapturePipelineOutcome DeleteMediaCapturePipeline(const Model::DeleteMediaCapturePipelineRequest& request) const;

        /**
         * A Callable wrapper for DeleteMediaCapturePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMediaCapturePipelineOutcomeCallable DeleteMediaCapturePipelineCallable(const Model::DeleteMediaCapturePipelineRequest& request) const;

        /**
         * An Async wrapper for DeleteMediaCapturePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMediaCapturePipelineAsync(const Model::DeleteMediaCapturePipelineRequest& request, const DeleteMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an existing media capture pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/GetMediaCapturePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaCapturePipelineOutcome GetMediaCapturePipeline(const Model::GetMediaCapturePipelineRequest& request) const;

        /**
         * A Callable wrapper for GetMediaCapturePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMediaCapturePipelineOutcomeCallable GetMediaCapturePipelineCallable(const Model::GetMediaCapturePipelineRequest& request) const;

        /**
         * An Async wrapper for GetMediaCapturePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMediaCapturePipelineAsync(const Model::GetMediaCapturePipelineRequest& request, const GetMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of media capture pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ListMediaCapturePipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMediaCapturePipelinesOutcome ListMediaCapturePipelines(const Model::ListMediaCapturePipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListMediaCapturePipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMediaCapturePipelinesOutcomeCallable ListMediaCapturePipelinesCallable(const Model::ListMediaCapturePipelinesRequest& request) const;

        /**
         * An Async wrapper for ListMediaCapturePipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMediaCapturePipelinesAsync(const Model::ListMediaCapturePipelinesRequest& request, const ListMediaCapturePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK media capture
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ListTagsForResource">AWS
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
         * <p>Applies the specified tags to the specified Amazon Chime SDK media capture
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/TagResource">AWS
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
         * <p>Removes the specified tags from the specified Amazon Chime SDK media capture
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/UntagResource">AWS
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


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateMediaCapturePipelineAsyncHelper(const Model::CreateMediaCapturePipelineRequest& request, const CreateMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMediaCapturePipelineAsyncHelper(const Model::DeleteMediaCapturePipelineRequest& request, const DeleteMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMediaCapturePipelineAsyncHelper(const Model::GetMediaCapturePipelineRequest& request, const GetMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMediaCapturePipelinesAsyncHelper(const Model::ListMediaCapturePipelinesRequest& request, const ListMediaCapturePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ChimeSDKMediaPipelines
} // namespace Aws
