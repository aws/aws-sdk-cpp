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
   * pipelines, see <a
   * href="https://docs.aws.amazon.com/chime-sdk/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon
   * Chime SDK media pipelines</a>. </p>
   */
  class AWS_CHIMESDKMEDIAPIPELINES_API ChimeSDKMediaPipelinesClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ChimeSDKMediaPipelinesClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ChimeSDKMediaPipelinesClientConfiguration ClientConfigurationType;
      typedef ChimeSDKMediaPipelinesEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMediaPipelinesClient(const Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration& clientConfiguration = Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration(),
                                     std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMediaPipelinesClient(const Aws::Auth::AWSCredentials& credentials,
                                     std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase> endpointProvider = nullptr,
                                     const Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration& clientConfiguration = Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKMediaPipelinesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<ChimeSDKMediaPipelinesEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename CreateMediaCapturePipelineRequestT = Model::CreateMediaCapturePipelineRequest>
        Model::CreateMediaCapturePipelineOutcomeCallable CreateMediaCapturePipelineCallable(const CreateMediaCapturePipelineRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::CreateMediaCapturePipeline, request);
        }

        /**
         * An Async wrapper for CreateMediaCapturePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMediaCapturePipelineRequestT = Model::CreateMediaCapturePipelineRequest>
        void CreateMediaCapturePipelineAsync(const CreateMediaCapturePipelineRequestT& request, const CreateMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::CreateMediaCapturePipeline, request, handler, context);
        }

        /**
         * <p>Creates a media concatenation pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/CreateMediaConcatenationPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMediaConcatenationPipelineOutcome CreateMediaConcatenationPipeline(const Model::CreateMediaConcatenationPipelineRequest& request) const;

        /**
         * A Callable wrapper for CreateMediaConcatenationPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMediaConcatenationPipelineRequestT = Model::CreateMediaConcatenationPipelineRequest>
        Model::CreateMediaConcatenationPipelineOutcomeCallable CreateMediaConcatenationPipelineCallable(const CreateMediaConcatenationPipelineRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::CreateMediaConcatenationPipeline, request);
        }

        /**
         * An Async wrapper for CreateMediaConcatenationPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMediaConcatenationPipelineRequestT = Model::CreateMediaConcatenationPipelineRequest>
        void CreateMediaConcatenationPipelineAsync(const CreateMediaConcatenationPipelineRequestT& request, const CreateMediaConcatenationPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::CreateMediaConcatenationPipeline, request, handler, context);
        }

        /**
         * <p>Creates a media insights pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/CreateMediaInsightsPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMediaInsightsPipelineOutcome CreateMediaInsightsPipeline(const Model::CreateMediaInsightsPipelineRequest& request) const;

        /**
         * A Callable wrapper for CreateMediaInsightsPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMediaInsightsPipelineRequestT = Model::CreateMediaInsightsPipelineRequest>
        Model::CreateMediaInsightsPipelineOutcomeCallable CreateMediaInsightsPipelineCallable(const CreateMediaInsightsPipelineRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::CreateMediaInsightsPipeline, request);
        }

        /**
         * An Async wrapper for CreateMediaInsightsPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMediaInsightsPipelineRequestT = Model::CreateMediaInsightsPipelineRequest>
        void CreateMediaInsightsPipelineAsync(const CreateMediaInsightsPipelineRequestT& request, const CreateMediaInsightsPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::CreateMediaInsightsPipeline, request, handler, context);
        }

        /**
         * <p>A structure that contains the static configurations for a media insights
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/CreateMediaInsightsPipelineConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMediaInsightsPipelineConfigurationOutcome CreateMediaInsightsPipelineConfiguration(const Model::CreateMediaInsightsPipelineConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateMediaInsightsPipelineConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMediaInsightsPipelineConfigurationRequestT = Model::CreateMediaInsightsPipelineConfigurationRequest>
        Model::CreateMediaInsightsPipelineConfigurationOutcomeCallable CreateMediaInsightsPipelineConfigurationCallable(const CreateMediaInsightsPipelineConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::CreateMediaInsightsPipelineConfiguration, request);
        }

        /**
         * An Async wrapper for CreateMediaInsightsPipelineConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMediaInsightsPipelineConfigurationRequestT = Model::CreateMediaInsightsPipelineConfigurationRequest>
        void CreateMediaInsightsPipelineConfigurationAsync(const CreateMediaInsightsPipelineConfigurationRequestT& request, const CreateMediaInsightsPipelineConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::CreateMediaInsightsPipelineConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a media live connector pipeline in an Amazon Chime SDK
         * meeting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/CreateMediaLiveConnectorPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMediaLiveConnectorPipelineOutcome CreateMediaLiveConnectorPipeline(const Model::CreateMediaLiveConnectorPipelineRequest& request) const;

        /**
         * A Callable wrapper for CreateMediaLiveConnectorPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMediaLiveConnectorPipelineRequestT = Model::CreateMediaLiveConnectorPipelineRequest>
        Model::CreateMediaLiveConnectorPipelineOutcomeCallable CreateMediaLiveConnectorPipelineCallable(const CreateMediaLiveConnectorPipelineRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::CreateMediaLiveConnectorPipeline, request);
        }

        /**
         * An Async wrapper for CreateMediaLiveConnectorPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMediaLiveConnectorPipelineRequestT = Model::CreateMediaLiveConnectorPipelineRequest>
        void CreateMediaLiveConnectorPipelineAsync(const CreateMediaLiveConnectorPipelineRequestT& request, const CreateMediaLiveConnectorPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::CreateMediaLiveConnectorPipeline, request, handler, context);
        }

        /**
         * <p>Creates an Kinesis video stream pool for the media pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/CreateMediaPipelineKinesisVideoStreamPool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMediaPipelineKinesisVideoStreamPoolOutcome CreateMediaPipelineKinesisVideoStreamPool(const Model::CreateMediaPipelineKinesisVideoStreamPoolRequest& request) const;

        /**
         * A Callable wrapper for CreateMediaPipelineKinesisVideoStreamPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMediaPipelineKinesisVideoStreamPoolRequestT = Model::CreateMediaPipelineKinesisVideoStreamPoolRequest>
        Model::CreateMediaPipelineKinesisVideoStreamPoolOutcomeCallable CreateMediaPipelineKinesisVideoStreamPoolCallable(const CreateMediaPipelineKinesisVideoStreamPoolRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::CreateMediaPipelineKinesisVideoStreamPool, request);
        }

        /**
         * An Async wrapper for CreateMediaPipelineKinesisVideoStreamPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMediaPipelineKinesisVideoStreamPoolRequestT = Model::CreateMediaPipelineKinesisVideoStreamPoolRequest>
        void CreateMediaPipelineKinesisVideoStreamPoolAsync(const CreateMediaPipelineKinesisVideoStreamPoolRequestT& request, const CreateMediaPipelineKinesisVideoStreamPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::CreateMediaPipelineKinesisVideoStreamPool, request, handler, context);
        }

        /**
         * <p>Creates a streaming media pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/CreateMediaStreamPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMediaStreamPipelineOutcome CreateMediaStreamPipeline(const Model::CreateMediaStreamPipelineRequest& request) const;

        /**
         * A Callable wrapper for CreateMediaStreamPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMediaStreamPipelineRequestT = Model::CreateMediaStreamPipelineRequest>
        Model::CreateMediaStreamPipelineOutcomeCallable CreateMediaStreamPipelineCallable(const CreateMediaStreamPipelineRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::CreateMediaStreamPipeline, request);
        }

        /**
         * An Async wrapper for CreateMediaStreamPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMediaStreamPipelineRequestT = Model::CreateMediaStreamPipelineRequest>
        void CreateMediaStreamPipelineAsync(const CreateMediaStreamPipelineRequestT& request, const CreateMediaStreamPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::CreateMediaStreamPipeline, request, handler, context);
        }

        /**
         * <p>Deletes the media pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/DeleteMediaCapturePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMediaCapturePipelineOutcome DeleteMediaCapturePipeline(const Model::DeleteMediaCapturePipelineRequest& request) const;

        /**
         * A Callable wrapper for DeleteMediaCapturePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMediaCapturePipelineRequestT = Model::DeleteMediaCapturePipelineRequest>
        Model::DeleteMediaCapturePipelineOutcomeCallable DeleteMediaCapturePipelineCallable(const DeleteMediaCapturePipelineRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::DeleteMediaCapturePipeline, request);
        }

        /**
         * An Async wrapper for DeleteMediaCapturePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMediaCapturePipelineRequestT = Model::DeleteMediaCapturePipelineRequest>
        void DeleteMediaCapturePipelineAsync(const DeleteMediaCapturePipelineRequestT& request, const DeleteMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::DeleteMediaCapturePipeline, request, handler, context);
        }

        /**
         * <p>Deletes the specified configuration settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/DeleteMediaInsightsPipelineConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMediaInsightsPipelineConfigurationOutcome DeleteMediaInsightsPipelineConfiguration(const Model::DeleteMediaInsightsPipelineConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteMediaInsightsPipelineConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMediaInsightsPipelineConfigurationRequestT = Model::DeleteMediaInsightsPipelineConfigurationRequest>
        Model::DeleteMediaInsightsPipelineConfigurationOutcomeCallable DeleteMediaInsightsPipelineConfigurationCallable(const DeleteMediaInsightsPipelineConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::DeleteMediaInsightsPipelineConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteMediaInsightsPipelineConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMediaInsightsPipelineConfigurationRequestT = Model::DeleteMediaInsightsPipelineConfigurationRequest>
        void DeleteMediaInsightsPipelineConfigurationAsync(const DeleteMediaInsightsPipelineConfigurationRequestT& request, const DeleteMediaInsightsPipelineConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::DeleteMediaInsightsPipelineConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the media pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/DeleteMediaPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMediaPipelineOutcome DeleteMediaPipeline(const Model::DeleteMediaPipelineRequest& request) const;

        /**
         * A Callable wrapper for DeleteMediaPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMediaPipelineRequestT = Model::DeleteMediaPipelineRequest>
        Model::DeleteMediaPipelineOutcomeCallable DeleteMediaPipelineCallable(const DeleteMediaPipelineRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::DeleteMediaPipeline, request);
        }

        /**
         * An Async wrapper for DeleteMediaPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMediaPipelineRequestT = Model::DeleteMediaPipelineRequest>
        void DeleteMediaPipelineAsync(const DeleteMediaPipelineRequestT& request, const DeleteMediaPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::DeleteMediaPipeline, request, handler, context);
        }

        /**
         * <p>Deletes an Kinesis video stream pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/DeleteMediaPipelineKinesisVideoStreamPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMediaPipelineKinesisVideoStreamPoolOutcome DeleteMediaPipelineKinesisVideoStreamPool(const Model::DeleteMediaPipelineKinesisVideoStreamPoolRequest& request) const;

        /**
         * A Callable wrapper for DeleteMediaPipelineKinesisVideoStreamPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMediaPipelineKinesisVideoStreamPoolRequestT = Model::DeleteMediaPipelineKinesisVideoStreamPoolRequest>
        Model::DeleteMediaPipelineKinesisVideoStreamPoolOutcomeCallable DeleteMediaPipelineKinesisVideoStreamPoolCallable(const DeleteMediaPipelineKinesisVideoStreamPoolRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::DeleteMediaPipelineKinesisVideoStreamPool, request);
        }

        /**
         * An Async wrapper for DeleteMediaPipelineKinesisVideoStreamPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMediaPipelineKinesisVideoStreamPoolRequestT = Model::DeleteMediaPipelineKinesisVideoStreamPoolRequest>
        void DeleteMediaPipelineKinesisVideoStreamPoolAsync(const DeleteMediaPipelineKinesisVideoStreamPoolRequestT& request, const DeleteMediaPipelineKinesisVideoStreamPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::DeleteMediaPipelineKinesisVideoStreamPool, request, handler, context);
        }

        /**
         * <p>Gets an existing media pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/GetMediaCapturePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaCapturePipelineOutcome GetMediaCapturePipeline(const Model::GetMediaCapturePipelineRequest& request) const;

        /**
         * A Callable wrapper for GetMediaCapturePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMediaCapturePipelineRequestT = Model::GetMediaCapturePipelineRequest>
        Model::GetMediaCapturePipelineOutcomeCallable GetMediaCapturePipelineCallable(const GetMediaCapturePipelineRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::GetMediaCapturePipeline, request);
        }

        /**
         * An Async wrapper for GetMediaCapturePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMediaCapturePipelineRequestT = Model::GetMediaCapturePipelineRequest>
        void GetMediaCapturePipelineAsync(const GetMediaCapturePipelineRequestT& request, const GetMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::GetMediaCapturePipeline, request, handler, context);
        }

        /**
         * <p>Gets the configuration settings for a media insights pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/GetMediaInsightsPipelineConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaInsightsPipelineConfigurationOutcome GetMediaInsightsPipelineConfiguration(const Model::GetMediaInsightsPipelineConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetMediaInsightsPipelineConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMediaInsightsPipelineConfigurationRequestT = Model::GetMediaInsightsPipelineConfigurationRequest>
        Model::GetMediaInsightsPipelineConfigurationOutcomeCallable GetMediaInsightsPipelineConfigurationCallable(const GetMediaInsightsPipelineConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::GetMediaInsightsPipelineConfiguration, request);
        }

        /**
         * An Async wrapper for GetMediaInsightsPipelineConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMediaInsightsPipelineConfigurationRequestT = Model::GetMediaInsightsPipelineConfigurationRequest>
        void GetMediaInsightsPipelineConfigurationAsync(const GetMediaInsightsPipelineConfigurationRequestT& request, const GetMediaInsightsPipelineConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::GetMediaInsightsPipelineConfiguration, request, handler, context);
        }

        /**
         * <p>Gets an existing media pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/GetMediaPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaPipelineOutcome GetMediaPipeline(const Model::GetMediaPipelineRequest& request) const;

        /**
         * A Callable wrapper for GetMediaPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMediaPipelineRequestT = Model::GetMediaPipelineRequest>
        Model::GetMediaPipelineOutcomeCallable GetMediaPipelineCallable(const GetMediaPipelineRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::GetMediaPipeline, request);
        }

        /**
         * An Async wrapper for GetMediaPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMediaPipelineRequestT = Model::GetMediaPipelineRequest>
        void GetMediaPipelineAsync(const GetMediaPipelineRequestT& request, const GetMediaPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::GetMediaPipeline, request, handler, context);
        }

        /**
         * <p>Gets an Kinesis video stream pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/GetMediaPipelineKinesisVideoStreamPool">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaPipelineKinesisVideoStreamPoolOutcome GetMediaPipelineKinesisVideoStreamPool(const Model::GetMediaPipelineKinesisVideoStreamPoolRequest& request) const;

        /**
         * A Callable wrapper for GetMediaPipelineKinesisVideoStreamPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMediaPipelineKinesisVideoStreamPoolRequestT = Model::GetMediaPipelineKinesisVideoStreamPoolRequest>
        Model::GetMediaPipelineKinesisVideoStreamPoolOutcomeCallable GetMediaPipelineKinesisVideoStreamPoolCallable(const GetMediaPipelineKinesisVideoStreamPoolRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::GetMediaPipelineKinesisVideoStreamPool, request);
        }

        /**
         * An Async wrapper for GetMediaPipelineKinesisVideoStreamPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMediaPipelineKinesisVideoStreamPoolRequestT = Model::GetMediaPipelineKinesisVideoStreamPoolRequest>
        void GetMediaPipelineKinesisVideoStreamPoolAsync(const GetMediaPipelineKinesisVideoStreamPoolRequestT& request, const GetMediaPipelineKinesisVideoStreamPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::GetMediaPipelineKinesisVideoStreamPool, request, handler, context);
        }

        /**
         * <p>Retrieves the details of the specified speaker search task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/GetSpeakerSearchTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSpeakerSearchTaskOutcome GetSpeakerSearchTask(const Model::GetSpeakerSearchTaskRequest& request) const;

        /**
         * A Callable wrapper for GetSpeakerSearchTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSpeakerSearchTaskRequestT = Model::GetSpeakerSearchTaskRequest>
        Model::GetSpeakerSearchTaskOutcomeCallable GetSpeakerSearchTaskCallable(const GetSpeakerSearchTaskRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::GetSpeakerSearchTask, request);
        }

        /**
         * An Async wrapper for GetSpeakerSearchTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSpeakerSearchTaskRequestT = Model::GetSpeakerSearchTaskRequest>
        void GetSpeakerSearchTaskAsync(const GetSpeakerSearchTaskRequestT& request, const GetSpeakerSearchTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::GetSpeakerSearchTask, request, handler, context);
        }

        /**
         * <p>Retrieves the details of a voice tone analysis task.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/GetVoiceToneAnalysisTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceToneAnalysisTaskOutcome GetVoiceToneAnalysisTask(const Model::GetVoiceToneAnalysisTaskRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceToneAnalysisTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceToneAnalysisTaskRequestT = Model::GetVoiceToneAnalysisTaskRequest>
        Model::GetVoiceToneAnalysisTaskOutcomeCallable GetVoiceToneAnalysisTaskCallable(const GetVoiceToneAnalysisTaskRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::GetVoiceToneAnalysisTask, request);
        }

        /**
         * An Async wrapper for GetVoiceToneAnalysisTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceToneAnalysisTaskRequestT = Model::GetVoiceToneAnalysisTaskRequest>
        void GetVoiceToneAnalysisTaskAsync(const GetVoiceToneAnalysisTaskRequestT& request, const GetVoiceToneAnalysisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::GetVoiceToneAnalysisTask, request, handler, context);
        }

        /**
         * <p>Returns a list of media pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ListMediaCapturePipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMediaCapturePipelinesOutcome ListMediaCapturePipelines(const Model::ListMediaCapturePipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListMediaCapturePipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMediaCapturePipelinesRequestT = Model::ListMediaCapturePipelinesRequest>
        Model::ListMediaCapturePipelinesOutcomeCallable ListMediaCapturePipelinesCallable(const ListMediaCapturePipelinesRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::ListMediaCapturePipelines, request);
        }

        /**
         * An Async wrapper for ListMediaCapturePipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMediaCapturePipelinesRequestT = Model::ListMediaCapturePipelinesRequest>
        void ListMediaCapturePipelinesAsync(const ListMediaCapturePipelinesRequestT& request, const ListMediaCapturePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::ListMediaCapturePipelines, request, handler, context);
        }

        /**
         * <p>Lists the available media insights pipeline configurations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ListMediaInsightsPipelineConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMediaInsightsPipelineConfigurationsOutcome ListMediaInsightsPipelineConfigurations(const Model::ListMediaInsightsPipelineConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListMediaInsightsPipelineConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMediaInsightsPipelineConfigurationsRequestT = Model::ListMediaInsightsPipelineConfigurationsRequest>
        Model::ListMediaInsightsPipelineConfigurationsOutcomeCallable ListMediaInsightsPipelineConfigurationsCallable(const ListMediaInsightsPipelineConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::ListMediaInsightsPipelineConfigurations, request);
        }

        /**
         * An Async wrapper for ListMediaInsightsPipelineConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMediaInsightsPipelineConfigurationsRequestT = Model::ListMediaInsightsPipelineConfigurationsRequest>
        void ListMediaInsightsPipelineConfigurationsAsync(const ListMediaInsightsPipelineConfigurationsRequestT& request, const ListMediaInsightsPipelineConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::ListMediaInsightsPipelineConfigurations, request, handler, context);
        }

        /**
         * <p>Lists the video stream pools in the media pipeline.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ListMediaPipelineKinesisVideoStreamPools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMediaPipelineKinesisVideoStreamPoolsOutcome ListMediaPipelineKinesisVideoStreamPools(const Model::ListMediaPipelineKinesisVideoStreamPoolsRequest& request) const;

        /**
         * A Callable wrapper for ListMediaPipelineKinesisVideoStreamPools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMediaPipelineKinesisVideoStreamPoolsRequestT = Model::ListMediaPipelineKinesisVideoStreamPoolsRequest>
        Model::ListMediaPipelineKinesisVideoStreamPoolsOutcomeCallable ListMediaPipelineKinesisVideoStreamPoolsCallable(const ListMediaPipelineKinesisVideoStreamPoolsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::ListMediaPipelineKinesisVideoStreamPools, request);
        }

        /**
         * An Async wrapper for ListMediaPipelineKinesisVideoStreamPools that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMediaPipelineKinesisVideoStreamPoolsRequestT = Model::ListMediaPipelineKinesisVideoStreamPoolsRequest>
        void ListMediaPipelineKinesisVideoStreamPoolsAsync(const ListMediaPipelineKinesisVideoStreamPoolsRequestT& request, const ListMediaPipelineKinesisVideoStreamPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::ListMediaPipelineKinesisVideoStreamPools, request, handler, context);
        }

        /**
         * <p>Returns a list of media pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ListMediaPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMediaPipelinesOutcome ListMediaPipelines(const Model::ListMediaPipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListMediaPipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMediaPipelinesRequestT = Model::ListMediaPipelinesRequest>
        Model::ListMediaPipelinesOutcomeCallable ListMediaPipelinesCallable(const ListMediaPipelinesRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::ListMediaPipelines, request);
        }

        /**
         * An Async wrapper for ListMediaPipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMediaPipelinesRequestT = Model::ListMediaPipelinesRequest>
        void ListMediaPipelinesAsync(const ListMediaPipelinesRequestT& request, const ListMediaPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::ListMediaPipelines, request, handler, context);
        }

        /**
         * <p>Lists the tags available for a media pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Starts a speaker search task.</p>  <p>Before starting any speaker
         * search tasks, you must provide all notices and obtain all consents from the
         * speaker as required under applicable privacy and biometrics laws, and as
         * required under the <a href="https://aws.amazon.com/service-terms/">AWS service
         * terms</a> for the Amazon Chime SDK.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/StartSpeakerSearchTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSpeakerSearchTaskOutcome StartSpeakerSearchTask(const Model::StartSpeakerSearchTaskRequest& request) const;

        /**
         * A Callable wrapper for StartSpeakerSearchTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSpeakerSearchTaskRequestT = Model::StartSpeakerSearchTaskRequest>
        Model::StartSpeakerSearchTaskOutcomeCallable StartSpeakerSearchTaskCallable(const StartSpeakerSearchTaskRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::StartSpeakerSearchTask, request);
        }

        /**
         * An Async wrapper for StartSpeakerSearchTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSpeakerSearchTaskRequestT = Model::StartSpeakerSearchTaskRequest>
        void StartSpeakerSearchTaskAsync(const StartSpeakerSearchTaskRequestT& request, const StartSpeakerSearchTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::StartSpeakerSearchTask, request, handler, context);
        }

        /**
         * <p>Starts a voice tone analysis task. For more information about voice tone
         * analysis, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/voice-analytics.html">Using
         * Amazon Chime SDK voice analytics</a> in the <i>Amazon Chime SDK Developer
         * Guide</i>.</p>  <p>Before starting any voice tone analysis tasks, you
         * must provide all notices and obtain all consents from the speaker as required
         * under applicable privacy and biometrics laws, and as required under the <a
         * href="https://aws.amazon.com/service-terms/">AWS service terms</a> for the
         * Amazon Chime SDK.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/StartVoiceToneAnalysisTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartVoiceToneAnalysisTaskOutcome StartVoiceToneAnalysisTask(const Model::StartVoiceToneAnalysisTaskRequest& request) const;

        /**
         * A Callable wrapper for StartVoiceToneAnalysisTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartVoiceToneAnalysisTaskRequestT = Model::StartVoiceToneAnalysisTaskRequest>
        Model::StartVoiceToneAnalysisTaskOutcomeCallable StartVoiceToneAnalysisTaskCallable(const StartVoiceToneAnalysisTaskRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::StartVoiceToneAnalysisTask, request);
        }

        /**
         * An Async wrapper for StartVoiceToneAnalysisTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartVoiceToneAnalysisTaskRequestT = Model::StartVoiceToneAnalysisTaskRequest>
        void StartVoiceToneAnalysisTaskAsync(const StartVoiceToneAnalysisTaskRequestT& request, const StartVoiceToneAnalysisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::StartVoiceToneAnalysisTask, request, handler, context);
        }

        /**
         * <p>Stops a speaker search task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/StopSpeakerSearchTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSpeakerSearchTaskOutcome StopSpeakerSearchTask(const Model::StopSpeakerSearchTaskRequest& request) const;

        /**
         * A Callable wrapper for StopSpeakerSearchTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopSpeakerSearchTaskRequestT = Model::StopSpeakerSearchTaskRequest>
        Model::StopSpeakerSearchTaskOutcomeCallable StopSpeakerSearchTaskCallable(const StopSpeakerSearchTaskRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::StopSpeakerSearchTask, request);
        }

        /**
         * An Async wrapper for StopSpeakerSearchTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopSpeakerSearchTaskRequestT = Model::StopSpeakerSearchTaskRequest>
        void StopSpeakerSearchTaskAsync(const StopSpeakerSearchTaskRequestT& request, const StopSpeakerSearchTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::StopSpeakerSearchTask, request, handler, context);
        }

        /**
         * <p>Stops a voice tone analysis task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/StopVoiceToneAnalysisTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StopVoiceToneAnalysisTaskOutcome StopVoiceToneAnalysisTask(const Model::StopVoiceToneAnalysisTaskRequest& request) const;

        /**
         * A Callable wrapper for StopVoiceToneAnalysisTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopVoiceToneAnalysisTaskRequestT = Model::StopVoiceToneAnalysisTaskRequest>
        Model::StopVoiceToneAnalysisTaskOutcomeCallable StopVoiceToneAnalysisTaskCallable(const StopVoiceToneAnalysisTaskRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::StopVoiceToneAnalysisTask, request);
        }

        /**
         * An Async wrapper for StopVoiceToneAnalysisTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopVoiceToneAnalysisTaskRequestT = Model::StopVoiceToneAnalysisTaskRequest>
        void StopVoiceToneAnalysisTaskAsync(const StopVoiceToneAnalysisTaskRequestT& request, const StopVoiceToneAnalysisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::StopVoiceToneAnalysisTask, request, handler, context);
        }

        /**
         * <p>The ARN of the media pipeline that you want to tag. Consists of the
         * pipeline's endpoint region, resource ID, and pipeline ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes any tags from a media pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the media insights pipeline's configuration settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/UpdateMediaInsightsPipelineConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMediaInsightsPipelineConfigurationOutcome UpdateMediaInsightsPipelineConfiguration(const Model::UpdateMediaInsightsPipelineConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateMediaInsightsPipelineConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMediaInsightsPipelineConfigurationRequestT = Model::UpdateMediaInsightsPipelineConfigurationRequest>
        Model::UpdateMediaInsightsPipelineConfigurationOutcomeCallable UpdateMediaInsightsPipelineConfigurationCallable(const UpdateMediaInsightsPipelineConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::UpdateMediaInsightsPipelineConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateMediaInsightsPipelineConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMediaInsightsPipelineConfigurationRequestT = Model::UpdateMediaInsightsPipelineConfigurationRequest>
        void UpdateMediaInsightsPipelineConfigurationAsync(const UpdateMediaInsightsPipelineConfigurationRequestT& request, const UpdateMediaInsightsPipelineConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::UpdateMediaInsightsPipelineConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the status of a media insights pipeline.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/UpdateMediaInsightsPipelineStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMediaInsightsPipelineStatusOutcome UpdateMediaInsightsPipelineStatus(const Model::UpdateMediaInsightsPipelineStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateMediaInsightsPipelineStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMediaInsightsPipelineStatusRequestT = Model::UpdateMediaInsightsPipelineStatusRequest>
        Model::UpdateMediaInsightsPipelineStatusOutcomeCallable UpdateMediaInsightsPipelineStatusCallable(const UpdateMediaInsightsPipelineStatusRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::UpdateMediaInsightsPipelineStatus, request);
        }

        /**
         * An Async wrapper for UpdateMediaInsightsPipelineStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMediaInsightsPipelineStatusRequestT = Model::UpdateMediaInsightsPipelineStatusRequest>
        void UpdateMediaInsightsPipelineStatusAsync(const UpdateMediaInsightsPipelineStatusRequestT& request, const UpdateMediaInsightsPipelineStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::UpdateMediaInsightsPipelineStatus, request, handler, context);
        }

        /**
         * <p>Updates an Kinesis video stream pool in a media pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/UpdateMediaPipelineKinesisVideoStreamPool">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMediaPipelineKinesisVideoStreamPoolOutcome UpdateMediaPipelineKinesisVideoStreamPool(const Model::UpdateMediaPipelineKinesisVideoStreamPoolRequest& request) const;

        /**
         * A Callable wrapper for UpdateMediaPipelineKinesisVideoStreamPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMediaPipelineKinesisVideoStreamPoolRequestT = Model::UpdateMediaPipelineKinesisVideoStreamPoolRequest>
        Model::UpdateMediaPipelineKinesisVideoStreamPoolOutcomeCallable UpdateMediaPipelineKinesisVideoStreamPoolCallable(const UpdateMediaPipelineKinesisVideoStreamPoolRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMediaPipelinesClient::UpdateMediaPipelineKinesisVideoStreamPool, request);
        }

        /**
         * An Async wrapper for UpdateMediaPipelineKinesisVideoStreamPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMediaPipelineKinesisVideoStreamPoolRequestT = Model::UpdateMediaPipelineKinesisVideoStreamPoolRequest>
        void UpdateMediaPipelineKinesisVideoStreamPoolAsync(const UpdateMediaPipelineKinesisVideoStreamPoolRequestT& request, const UpdateMediaPipelineKinesisVideoStreamPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMediaPipelinesClient::UpdateMediaPipelineKinesisVideoStreamPool, request, handler, context);
        }


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
