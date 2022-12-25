/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesServiceClientModel.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
  /**
   * <p>The Amazon Chime SDK media pipeline APIs in this section allow software
   * developers to create Amazon Chime SDK media pipelines that capture, concatenate,
   * or stream your Amazon Chime SDK meetings. For more information about media
   * pipleines, see <a
   * href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon
   * Chime SDK media pipelines</a>. </p>
   */
  class AWS_CHIMESDKMEDIAPIPELINES_API ChimeSDKMediaPipelinesClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ChimeSDKMediaPipelinesClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMediaPipelinesClient(const Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration& clientConfiguration = Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration(),
                                     std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase> endpointProvider = Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMediaPipelinesClient(const Aws::Auth::AWSCredentials& credentials,
                                     std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase> endpointProvider = Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG),
                                     const Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration& clientConfiguration = Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKMediaPipelinesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase> endpointProvider = Aws::MakeShared<ChimeSDKMediaPipelinesEndpointProvider>(ALLOCATION_TAG),
                                     const Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration& clientConfiguration = Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMediaPipelinesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMediaPipelinesClient(const Aws::Auth::AWSCredentials& credentials,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKMediaPipelinesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ChimeSDKMediaPipelinesClient();

        /**
         * <p>Creates a media pipeline.</p><p><h3>See Also:</h3>   <a
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
         * <p>Creates a media concatenation pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/CreateMediaConcatenationPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMediaConcatenationPipelineOutcome CreateMediaConcatenationPipeline(const Model::CreateMediaConcatenationPipelineRequest& request) const;

        /**
         * A Callable wrapper for CreateMediaConcatenationPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMediaConcatenationPipelineOutcomeCallable CreateMediaConcatenationPipelineCallable(const Model::CreateMediaConcatenationPipelineRequest& request) const;

        /**
         * An Async wrapper for CreateMediaConcatenationPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMediaConcatenationPipelineAsync(const Model::CreateMediaConcatenationPipelineRequest& request, const CreateMediaConcatenationPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a streaming media pipeline in an Amazon Chime SDK
         * meeting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/CreateMediaLiveConnectorPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMediaLiveConnectorPipelineOutcome CreateMediaLiveConnectorPipeline(const Model::CreateMediaLiveConnectorPipelineRequest& request) const;

        /**
         * A Callable wrapper for CreateMediaLiveConnectorPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMediaLiveConnectorPipelineOutcomeCallable CreateMediaLiveConnectorPipelineCallable(const Model::CreateMediaLiveConnectorPipelineRequest& request) const;

        /**
         * An Async wrapper for CreateMediaLiveConnectorPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMediaLiveConnectorPipelineAsync(const Model::CreateMediaLiveConnectorPipelineRequest& request, const CreateMediaLiveConnectorPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the media pipeline.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes the media pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/DeleteMediaPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMediaPipelineOutcome DeleteMediaPipeline(const Model::DeleteMediaPipelineRequest& request) const;

        /**
         * A Callable wrapper for DeleteMediaPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMediaPipelineOutcomeCallable DeleteMediaPipelineCallable(const Model::DeleteMediaPipelineRequest& request) const;

        /**
         * An Async wrapper for DeleteMediaPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMediaPipelineAsync(const Model::DeleteMediaPipelineRequest& request, const DeleteMediaPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an existing media pipeline.</p><p><h3>See Also:</h3>   <a
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
         * <p>Gets an existing media pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/GetMediaPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaPipelineOutcome GetMediaPipeline(const Model::GetMediaPipelineRequest& request) const;

        /**
         * A Callable wrapper for GetMediaPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMediaPipelineOutcomeCallable GetMediaPipelineCallable(const Model::GetMediaPipelineRequest& request) const;

        /**
         * An Async wrapper for GetMediaPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMediaPipelineAsync(const Model::GetMediaPipelineRequest& request, const GetMediaPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of media pipelines.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns a list of media pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ListMediaPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMediaPipelinesOutcome ListMediaPipelines(const Model::ListMediaPipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListMediaPipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMediaPipelinesOutcomeCallable ListMediaPipelinesCallable(const Model::ListMediaPipelinesRequest& request) const;

        /**
         * An Async wrapper for ListMediaPipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMediaPipelinesAsync(const Model::ListMediaPipelinesRequest& request, const ListMediaPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags available for a media pipeline.</p><p><h3>See Also:</h3>   <a
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
         * <p>The ARN of the media pipeline that you want to tag. Consists of he pipeline's
         * endpoint region, resource ID, and pipeline ID.</p><p><h3>See Also:</h3>   <a
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
         * <p>Removes any tags from a media pipeline.</p><p><h3>See Also:</h3>   <a
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
      std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ChimeSDKMediaPipelinesClient>;
      void init(const ChimeSDKMediaPipelinesClientConfiguration& clientConfiguration);

      ChimeSDKMediaPipelinesClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase> m_endpointProvider;
  };

} // namespace ChimeSDKMediaPipelines
} // namespace Aws
