/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisvideo/KinesisVideoServiceClientModel.h>

namespace Aws
{
namespace KinesisVideo
{
  /**
   * <p/>
   */
  class AWS_KINESISVIDEO_API KinesisVideoClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<KinesisVideoClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef KinesisVideoClientConfiguration ClientConfigurationType;
      typedef KinesisVideoEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoClient(const Aws::KinesisVideo::KinesisVideoClientConfiguration& clientConfiguration = Aws::KinesisVideo::KinesisVideoClientConfiguration(),
                           std::shared_ptr<KinesisVideoEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<KinesisVideoEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::KinesisVideo::KinesisVideoClientConfiguration& clientConfiguration = Aws::KinesisVideo::KinesisVideoClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<KinesisVideoEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::KinesisVideo::KinesisVideoClientConfiguration& clientConfiguration = Aws::KinesisVideo::KinesisVideoClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KinesisVideoClient();

        /**
         * <p>Creates a signaling channel. </p> <p> <code>CreateSignalingChannel</code> is
         * an asynchronous operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/CreateSignalingChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSignalingChannelOutcome CreateSignalingChannel(const Model::CreateSignalingChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateSignalingChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSignalingChannelRequestT = Model::CreateSignalingChannelRequest>
        Model::CreateSignalingChannelOutcomeCallable CreateSignalingChannelCallable(const CreateSignalingChannelRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::CreateSignalingChannel, request);
        }

        /**
         * An Async wrapper for CreateSignalingChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSignalingChannelRequestT = Model::CreateSignalingChannelRequest>
        void CreateSignalingChannelAsync(const CreateSignalingChannelRequestT& request, const CreateSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::CreateSignalingChannel, request, handler, context);
        }

        /**
         * <p>Creates a new Kinesis video stream. </p> <p>When you create a new stream,
         * Kinesis Video Streams assigns it a version number. When you change the stream's
         * metadata, Kinesis Video Streams updates the version. </p> <p>
         * <code>CreateStream</code> is an asynchronous operation.</p> <p>For information
         * about how the service works, see <a
         * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/how-it-works.html">How
         * it Works</a>. </p> <p>You must have permissions for the
         * <code>KinesisVideo:CreateStream</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/CreateStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamOutcome CreateStream(const Model::CreateStreamRequest& request) const;

        /**
         * A Callable wrapper for CreateStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStreamRequestT = Model::CreateStreamRequest>
        Model::CreateStreamOutcomeCallable CreateStreamCallable(const CreateStreamRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::CreateStream, request);
        }

        /**
         * An Async wrapper for CreateStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStreamRequestT = Model::CreateStreamRequest>
        void CreateStreamAsync(const CreateStreamRequestT& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::CreateStream, request, handler, context);
        }

        /**
         * <p>An asynchronous API that deletes a stream’s existing edge configuration, as
         * well as the corresponding media from the Edge Agent.</p> <p>When you invoke this
         * API, the sync status is set to <code>DELETING</code>. A deletion process starts,
         * in which active edge jobs are stopped and all media is deleted from the edge
         * device. The time to delete varies, depending on the total amount of stored
         * media. If the deletion process fails, the sync status changes to
         * <code>DELETE_FAILED</code>. You will need to re-try the deletion.</p> <p>When
         * the deletion process has completed successfully, the edge configuration is no
         * longer accessible.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DeleteEdgeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEdgeConfigurationOutcome DeleteEdgeConfiguration(const Model::DeleteEdgeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteEdgeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEdgeConfigurationRequestT = Model::DeleteEdgeConfigurationRequest>
        Model::DeleteEdgeConfigurationOutcomeCallable DeleteEdgeConfigurationCallable(const DeleteEdgeConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::DeleteEdgeConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteEdgeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEdgeConfigurationRequestT = Model::DeleteEdgeConfigurationRequest>
        void DeleteEdgeConfigurationAsync(const DeleteEdgeConfigurationRequestT& request, const DeleteEdgeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::DeleteEdgeConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes a specified signaling channel. <code>DeleteSignalingChannel</code> is
         * an asynchronous operation. If you don't specify the channel's current version,
         * the most recent version is deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DeleteSignalingChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSignalingChannelOutcome DeleteSignalingChannel(const Model::DeleteSignalingChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteSignalingChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSignalingChannelRequestT = Model::DeleteSignalingChannelRequest>
        Model::DeleteSignalingChannelOutcomeCallable DeleteSignalingChannelCallable(const DeleteSignalingChannelRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::DeleteSignalingChannel, request);
        }

        /**
         * An Async wrapper for DeleteSignalingChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSignalingChannelRequestT = Model::DeleteSignalingChannelRequest>
        void DeleteSignalingChannelAsync(const DeleteSignalingChannelRequestT& request, const DeleteSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::DeleteSignalingChannel, request, handler, context);
        }

        /**
         * <p>Deletes a Kinesis video stream and the data contained in the stream. </p>
         * <p>This method marks the stream for deletion, and makes the data in the stream
         * inaccessible immediately.</p> <p> </p> <p> To ensure that you have the latest
         * version of the stream before deleting it, you can specify the stream version.
         * Kinesis Video Streams assigns a version to each stream. When you update a
         * stream, Kinesis Video Streams assigns a new version number. To get the latest
         * stream version, use the <code>DescribeStream</code> API. </p> <p>This operation
         * requires permission for the <code>KinesisVideo:DeleteStream</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DeleteStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamOutcome DeleteStream(const Model::DeleteStreamRequest& request) const;

        /**
         * A Callable wrapper for DeleteStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStreamRequestT = Model::DeleteStreamRequest>
        Model::DeleteStreamOutcomeCallable DeleteStreamCallable(const DeleteStreamRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::DeleteStream, request);
        }

        /**
         * An Async wrapper for DeleteStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStreamRequestT = Model::DeleteStreamRequest>
        void DeleteStreamAsync(const DeleteStreamRequestT& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::DeleteStream, request, handler, context);
        }

        /**
         * <p>Describes a stream’s edge configuration that was set using the
         * <code>StartEdgeConfigurationUpdate</code> API and the latest status of the edge
         * agent's recorder and uploader jobs. Use this API to get the status of the
         * configuration to determine if the configuration is in sync with the Edge Agent.
         * Use this API to evaluate the health of the Edge Agent.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DescribeEdgeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEdgeConfigurationOutcome DescribeEdgeConfiguration(const Model::DescribeEdgeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeEdgeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEdgeConfigurationRequestT = Model::DescribeEdgeConfigurationRequest>
        Model::DescribeEdgeConfigurationOutcomeCallable DescribeEdgeConfigurationCallable(const DescribeEdgeConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::DescribeEdgeConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeEdgeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEdgeConfigurationRequestT = Model::DescribeEdgeConfigurationRequest>
        void DescribeEdgeConfigurationAsync(const DescribeEdgeConfigurationRequestT& request, const DescribeEdgeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::DescribeEdgeConfiguration, request, handler, context);
        }

        /**
         * <p>Gets the <code>ImageGenerationConfiguration</code> for a given Kinesis video
         * stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DescribeImageGenerationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageGenerationConfigurationOutcome DescribeImageGenerationConfiguration(const Model::DescribeImageGenerationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeImageGenerationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeImageGenerationConfigurationRequestT = Model::DescribeImageGenerationConfigurationRequest>
        Model::DescribeImageGenerationConfigurationOutcomeCallable DescribeImageGenerationConfigurationCallable(const DescribeImageGenerationConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::DescribeImageGenerationConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeImageGenerationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeImageGenerationConfigurationRequestT = Model::DescribeImageGenerationConfigurationRequest>
        void DescribeImageGenerationConfigurationAsync(const DescribeImageGenerationConfigurationRequestT& request, const DescribeImageGenerationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::DescribeImageGenerationConfiguration, request, handler, context);
        }

        /**
         * <p>Returns the most current information about the stream. The
         * <code>streamName</code> or <code>streamARN</code> should be provided in the
         * input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DescribeMappedResourceConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMappedResourceConfigurationOutcome DescribeMappedResourceConfiguration(const Model::DescribeMappedResourceConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeMappedResourceConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMappedResourceConfigurationRequestT = Model::DescribeMappedResourceConfigurationRequest>
        Model::DescribeMappedResourceConfigurationOutcomeCallable DescribeMappedResourceConfigurationCallable(const DescribeMappedResourceConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::DescribeMappedResourceConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeMappedResourceConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMappedResourceConfigurationRequestT = Model::DescribeMappedResourceConfigurationRequest>
        void DescribeMappedResourceConfigurationAsync(const DescribeMappedResourceConfigurationRequestT& request, const DescribeMappedResourceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::DescribeMappedResourceConfiguration, request, handler, context);
        }

        /**
         * <p>Returns the most current information about the channel. Specify the
         * <code>ChannelName</code> or <code>ChannelARN</code> in the input.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DescribeMediaStorageConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMediaStorageConfigurationOutcome DescribeMediaStorageConfiguration(const Model::DescribeMediaStorageConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeMediaStorageConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMediaStorageConfigurationRequestT = Model::DescribeMediaStorageConfigurationRequest>
        Model::DescribeMediaStorageConfigurationOutcomeCallable DescribeMediaStorageConfigurationCallable(const DescribeMediaStorageConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::DescribeMediaStorageConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeMediaStorageConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMediaStorageConfigurationRequestT = Model::DescribeMediaStorageConfigurationRequest>
        void DescribeMediaStorageConfigurationAsync(const DescribeMediaStorageConfigurationRequestT& request, const DescribeMediaStorageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::DescribeMediaStorageConfiguration, request, handler, context);
        }

        /**
         * <p>Gets the <code>NotificationConfiguration</code> for a given Kinesis video
         * stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DescribeNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationConfigurationOutcome DescribeNotificationConfiguration(const Model::DescribeNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeNotificationConfigurationRequestT = Model::DescribeNotificationConfigurationRequest>
        Model::DescribeNotificationConfigurationOutcomeCallable DescribeNotificationConfigurationCallable(const DescribeNotificationConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::DescribeNotificationConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeNotificationConfigurationRequestT = Model::DescribeNotificationConfigurationRequest>
        void DescribeNotificationConfigurationAsync(const DescribeNotificationConfigurationRequestT& request, const DescribeNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::DescribeNotificationConfiguration, request, handler, context);
        }

        /**
         * <p>Returns the most current information about the signaling channel. You must
         * specify either the name or the Amazon Resource Name (ARN) of the channel that
         * you want to describe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DescribeSignalingChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSignalingChannelOutcome DescribeSignalingChannel(const Model::DescribeSignalingChannelRequest& request) const;

        /**
         * A Callable wrapper for DescribeSignalingChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSignalingChannelRequestT = Model::DescribeSignalingChannelRequest>
        Model::DescribeSignalingChannelOutcomeCallable DescribeSignalingChannelCallable(const DescribeSignalingChannelRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::DescribeSignalingChannel, request);
        }

        /**
         * An Async wrapper for DescribeSignalingChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSignalingChannelRequestT = Model::DescribeSignalingChannelRequest>
        void DescribeSignalingChannelAsync(const DescribeSignalingChannelRequestT& request, const DescribeSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::DescribeSignalingChannel, request, handler, context);
        }

        /**
         * <p>Returns the most current information about the specified stream. You must
         * specify either the <code>StreamName</code> or the <code>StreamARN</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DescribeStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStreamOutcome DescribeStream(const Model::DescribeStreamRequest& request) const;

        /**
         * A Callable wrapper for DescribeStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeStreamRequestT = Model::DescribeStreamRequest>
        Model::DescribeStreamOutcomeCallable DescribeStreamCallable(const DescribeStreamRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::DescribeStream, request);
        }

        /**
         * An Async wrapper for DescribeStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStreamRequestT = Model::DescribeStreamRequest>
        void DescribeStreamAsync(const DescribeStreamRequestT& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::DescribeStream, request, handler, context);
        }

        /**
         * <p>Gets an endpoint for a specified stream for either reading or writing. Use
         * this endpoint in your application to read from the specified stream (using the
         * <code>GetMedia</code> or <code>GetMediaForFragmentList</code> operations) or
         * write to it (using the <code>PutMedia</code> operation). </p>  <p>The
         * returned endpoint does not have the API name appended. The client needs to add
         * the API name to the returned endpoint.</p>  <p>In the request, specify
         * the stream either by <code>StreamName</code> or
         * <code>StreamARN</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/GetDataEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataEndpointOutcome GetDataEndpoint(const Model::GetDataEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetDataEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataEndpointRequestT = Model::GetDataEndpointRequest>
        Model::GetDataEndpointOutcomeCallable GetDataEndpointCallable(const GetDataEndpointRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::GetDataEndpoint, request);
        }

        /**
         * An Async wrapper for GetDataEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataEndpointRequestT = Model::GetDataEndpointRequest>
        void GetDataEndpointAsync(const GetDataEndpointRequestT& request, const GetDataEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::GetDataEndpoint, request, handler, context);
        }

        /**
         * <p>Provides an endpoint for the specified signaling channel to send and receive
         * messages. This API uses the
         * <code>SingleMasterChannelEndpointConfiguration</code> input parameter, which
         * consists of the <code>Protocols</code> and <code>Role</code> properties.</p> <p>
         * <code>Protocols</code> is used to determine the communication mechanism. For
         * example, if you specify <code>WSS</code> as the protocol, this API produces a
         * secure websocket endpoint. If you specify <code>HTTPS</code> as the protocol,
         * this API generates an HTTPS endpoint. </p> <p> <code>Role</code> determines the
         * messaging permissions. A <code>MASTER</code> role results in this API generating
         * an endpoint that a client can use to communicate with any of the viewers on the
         * channel. A <code>VIEWER</code> role results in this API generating an endpoint
         * that a client can use to communicate only with a <code>MASTER</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/GetSignalingChannelEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSignalingChannelEndpointOutcome GetSignalingChannelEndpoint(const Model::GetSignalingChannelEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetSignalingChannelEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSignalingChannelEndpointRequestT = Model::GetSignalingChannelEndpointRequest>
        Model::GetSignalingChannelEndpointOutcomeCallable GetSignalingChannelEndpointCallable(const GetSignalingChannelEndpointRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::GetSignalingChannelEndpoint, request);
        }

        /**
         * An Async wrapper for GetSignalingChannelEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSignalingChannelEndpointRequestT = Model::GetSignalingChannelEndpointRequest>
        void GetSignalingChannelEndpointAsync(const GetSignalingChannelEndpointRequestT& request, const GetSignalingChannelEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::GetSignalingChannelEndpoint, request, handler, context);
        }

        /**
         * <p>Returns an array of edge configurations associated with the specified Edge
         * Agent.</p> <p>In the request, you must specify the Edge Agent
         * <code>HubDeviceArn</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ListEdgeAgentConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEdgeAgentConfigurationsOutcome ListEdgeAgentConfigurations(const Model::ListEdgeAgentConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListEdgeAgentConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEdgeAgentConfigurationsRequestT = Model::ListEdgeAgentConfigurationsRequest>
        Model::ListEdgeAgentConfigurationsOutcomeCallable ListEdgeAgentConfigurationsCallable(const ListEdgeAgentConfigurationsRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::ListEdgeAgentConfigurations, request);
        }

        /**
         * An Async wrapper for ListEdgeAgentConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEdgeAgentConfigurationsRequestT = Model::ListEdgeAgentConfigurationsRequest>
        void ListEdgeAgentConfigurationsAsync(const ListEdgeAgentConfigurationsRequestT& request, const ListEdgeAgentConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::ListEdgeAgentConfigurations, request, handler, context);
        }

        /**
         * <p>Returns an array of <code>ChannelInfo</code> objects. Each object describes a
         * signaling channel. To retrieve only those channels that satisfy a specific
         * condition, you can specify a <code>ChannelNameCondition</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ListSignalingChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSignalingChannelsOutcome ListSignalingChannels(const Model::ListSignalingChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListSignalingChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSignalingChannelsRequestT = Model::ListSignalingChannelsRequest>
        Model::ListSignalingChannelsOutcomeCallable ListSignalingChannelsCallable(const ListSignalingChannelsRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::ListSignalingChannels, request);
        }

        /**
         * An Async wrapper for ListSignalingChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSignalingChannelsRequestT = Model::ListSignalingChannelsRequest>
        void ListSignalingChannelsAsync(const ListSignalingChannelsRequestT& request, const ListSignalingChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::ListSignalingChannels, request, handler, context);
        }

        /**
         * <p>Returns an array of <code>StreamInfo</code> objects. Each object describes a
         * stream. To retrieve only streams that satisfy a specific condition, you can
         * specify a <code>StreamNameCondition</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ListStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamsOutcome ListStreams(const Model::ListStreamsRequest& request) const;

        /**
         * A Callable wrapper for ListStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStreamsRequestT = Model::ListStreamsRequest>
        Model::ListStreamsOutcomeCallable ListStreamsCallable(const ListStreamsRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::ListStreams, request);
        }

        /**
         * An Async wrapper for ListStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamsRequestT = Model::ListStreamsRequest>
        void ListStreamsAsync(const ListStreamsRequestT& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::ListStreams, request, handler, context);
        }

        /**
         * <p>Returns a list of tags associated with the specified signaling
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns a list of tags associated with the specified stream.</p> <p>In the
         * request, you must specify either the <code>StreamName</code> or the
         * <code>StreamARN</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ListTagsForStream">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForStreamOutcome ListTagsForStream(const Model::ListTagsForStreamRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForStreamRequestT = Model::ListTagsForStreamRequest>
        Model::ListTagsForStreamOutcomeCallable ListTagsForStreamCallable(const ListTagsForStreamRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::ListTagsForStream, request);
        }

        /**
         * An Async wrapper for ListTagsForStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForStreamRequestT = Model::ListTagsForStreamRequest>
        void ListTagsForStreamAsync(const ListTagsForStreamRequestT& request, const ListTagsForStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::ListTagsForStream, request, handler, context);
        }

        /**
         * <p>An asynchronous API that updates a stream’s existing edge configuration. The
         * Kinesis Video Stream will sync the stream’s edge configuration with the Edge
         * Agent IoT Greengrass component that runs on an IoT Hub Device, setup at your
         * premise. The time to sync can vary and depends on the connectivity of the Hub
         * Device. The <code>SyncStatus</code> will be updated as the edge configuration is
         * acknowledged, and synced with the Edge Agent. </p> <p>If this API is invoked for
         * the first time, a new edge configuration will be created for the stream, and the
         * sync status will be set to <code>SYNCING</code>. You will have to wait for the
         * sync status to reach a terminal state such as: <code>IN_SYNC</code>, or
         * <code>SYNC_FAILED</code>, before using this API again. If you invoke this API
         * during the syncing process, a <code>ResourceInUseException</code> will be
         * thrown. The connectivity of the stream’s edge configuration and the Edge Agent
         * will be retried for 15 minutes. After 15 minutes, the status will transition
         * into the <code>SYNC_FAILED</code> state.</p> <p>To move an edge configuration
         * from one device to another, use <a>DeleteEdgeConfiguration</a> to delete the
         * current edge configuration. You can then invoke StartEdgeConfigurationUpdate
         * with an updated Hub Device ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/StartEdgeConfigurationUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEdgeConfigurationUpdateOutcome StartEdgeConfigurationUpdate(const Model::StartEdgeConfigurationUpdateRequest& request) const;

        /**
         * A Callable wrapper for StartEdgeConfigurationUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartEdgeConfigurationUpdateRequestT = Model::StartEdgeConfigurationUpdateRequest>
        Model::StartEdgeConfigurationUpdateOutcomeCallable StartEdgeConfigurationUpdateCallable(const StartEdgeConfigurationUpdateRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::StartEdgeConfigurationUpdate, request);
        }

        /**
         * An Async wrapper for StartEdgeConfigurationUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartEdgeConfigurationUpdateRequestT = Model::StartEdgeConfigurationUpdateRequest>
        void StartEdgeConfigurationUpdateAsync(const StartEdgeConfigurationUpdateRequestT& request, const StartEdgeConfigurationUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::StartEdgeConfigurationUpdate, request, handler, context);
        }

        /**
         * <p>Adds one or more tags to a signaling channel. A <i>tag</i> is a key-value
         * pair (the value is optional) that you can define and assign to Amazon Web
         * Services resources. If you specify a tag that already exists, the tag value is
         * replaced with the value that you specify in the request. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>Billing and Cost Management and Cost
         * Management User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::TagResource, request, handler, context);
        }

        /**
         * <p>Adds one or more tags to a stream. A <i>tag</i> is a key-value pair (the
         * value is optional) that you can define and assign to Amazon Web Services
         * resources. If you specify a tag that already exists, the tag value is replaced
         * with the value that you specify in the request. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>Billing and Cost Management and Cost
         * Management User Guide</i>. </p> <p>You must provide either the
         * <code>StreamName</code> or the <code>StreamARN</code>.</p> <p>This operation
         * requires permission for the <code>KinesisVideo:TagStream</code> action.</p> <p>A
         * Kinesis video stream can support up to 50 tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/TagStream">AWS
         * API Reference</a></p>
         */
        virtual Model::TagStreamOutcome TagStream(const Model::TagStreamRequest& request) const;

        /**
         * A Callable wrapper for TagStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagStreamRequestT = Model::TagStreamRequest>
        Model::TagStreamOutcomeCallable TagStreamCallable(const TagStreamRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::TagStream, request);
        }

        /**
         * An Async wrapper for TagStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagStreamRequestT = Model::TagStreamRequest>
        void TagStreamAsync(const TagStreamRequestT& request, const TagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::TagStream, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from a signaling channel. In the request, specify
         * only a tag key or keys; don't specify the value. If you specify a tag key that
         * does not exist, it's ignored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from a stream. In the request, specify only a tag
         * key or keys; don't specify the value. If you specify a tag key that does not
         * exist, it's ignored.</p> <p>In the request, you must provide the
         * <code>StreamName</code> or <code>StreamARN</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/UntagStream">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagStreamOutcome UntagStream(const Model::UntagStreamRequest& request) const;

        /**
         * A Callable wrapper for UntagStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagStreamRequestT = Model::UntagStreamRequest>
        Model::UntagStreamOutcomeCallable UntagStreamCallable(const UntagStreamRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::UntagStream, request);
        }

        /**
         * An Async wrapper for UntagStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagStreamRequestT = Model::UntagStreamRequest>
        void UntagStreamAsync(const UntagStreamRequestT& request, const UntagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::UntagStream, request, handler, context);
        }

        /**
         * <p>Increases or decreases the stream's data retention period by the value that
         * you specify. To indicate whether you want to increase or decrease the data
         * retention period, specify the <code>Operation</code> parameter in the request
         * body. In the request, you must specify either the <code>StreamName</code> or the
         * <code>StreamARN</code>. </p> <p>This operation requires permission for the
         * <code>KinesisVideo:UpdateDataRetention</code> action.</p> <p>Changing the data
         * retention period affects the data in the stream as follows:</p> <ul> <li> <p>If
         * the data retention period is increased, existing data is retained for the new
         * retention period. For example, if the data retention period is increased from
         * one hour to seven hours, all existing data is retained for seven hours.</p>
         * </li> <li> <p>If the data retention period is decreased, existing data is
         * retained for the new retention period. For example, if the data retention period
         * is decreased from seven hours to one hour, all existing data is retained for one
         * hour, and any data older than one hour is deleted immediately.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/UpdateDataRetention">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataRetentionOutcome UpdateDataRetention(const Model::UpdateDataRetentionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataRetention that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataRetentionRequestT = Model::UpdateDataRetentionRequest>
        Model::UpdateDataRetentionOutcomeCallable UpdateDataRetentionCallable(const UpdateDataRetentionRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::UpdateDataRetention, request);
        }

        /**
         * An Async wrapper for UpdateDataRetention that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataRetentionRequestT = Model::UpdateDataRetentionRequest>
        void UpdateDataRetentionAsync(const UpdateDataRetentionRequestT& request, const UpdateDataRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::UpdateDataRetention, request, handler, context);
        }

        /**
         * <p>Updates the <code>StreamInfo</code> and
         * <code>ImageProcessingConfiguration</code> fields.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/UpdateImageGenerationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImageGenerationConfigurationOutcome UpdateImageGenerationConfiguration(const Model::UpdateImageGenerationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateImageGenerationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateImageGenerationConfigurationRequestT = Model::UpdateImageGenerationConfigurationRequest>
        Model::UpdateImageGenerationConfigurationOutcomeCallable UpdateImageGenerationConfigurationCallable(const UpdateImageGenerationConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::UpdateImageGenerationConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateImageGenerationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateImageGenerationConfigurationRequestT = Model::UpdateImageGenerationConfigurationRequest>
        void UpdateImageGenerationConfigurationAsync(const UpdateImageGenerationConfigurationRequestT& request, const UpdateImageGenerationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::UpdateImageGenerationConfiguration, request, handler, context);
        }

        /**
         * <p>Associates a <code>SignalingChannel</code> to a stream to store the media.
         * There are two signaling modes that you can specify :</p> <ul> <li> <p>If
         * <code>StorageStatus</code> is enabled, the data will be stored in the
         * <code>StreamARN</code> provided. In order for WebRTC Ingestion to work, the
         * stream must have data retention enabled.</p> </li> <li> <p>If
         * <code>StorageStatus</code> is disabled, no data will be stored, and the
         * <code>StreamARN</code> parameter will not be needed. </p> </li> </ul>
         *  <p>If <code>StorageStatus</code> is enabled, direct peer-to-peer
         * (master-viewer) connections no longer occur. Peers connect directly to the
         * storage session. You must call the <code>JoinStorageSession</code> API to
         * trigger an SDP offer send and establish a connection between a peer and the
         * storage session. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/UpdateMediaStorageConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMediaStorageConfigurationOutcome UpdateMediaStorageConfiguration(const Model::UpdateMediaStorageConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateMediaStorageConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMediaStorageConfigurationRequestT = Model::UpdateMediaStorageConfigurationRequest>
        Model::UpdateMediaStorageConfigurationOutcomeCallable UpdateMediaStorageConfigurationCallable(const UpdateMediaStorageConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::UpdateMediaStorageConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateMediaStorageConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMediaStorageConfigurationRequestT = Model::UpdateMediaStorageConfigurationRequest>
        void UpdateMediaStorageConfigurationAsync(const UpdateMediaStorageConfigurationRequestT& request, const UpdateMediaStorageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::UpdateMediaStorageConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the notification information for a stream.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/UpdateNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotificationConfigurationOutcome UpdateNotificationConfiguration(const Model::UpdateNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNotificationConfigurationRequestT = Model::UpdateNotificationConfigurationRequest>
        Model::UpdateNotificationConfigurationOutcomeCallable UpdateNotificationConfigurationCallable(const UpdateNotificationConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::UpdateNotificationConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNotificationConfigurationRequestT = Model::UpdateNotificationConfigurationRequest>
        void UpdateNotificationConfigurationAsync(const UpdateNotificationConfigurationRequestT& request, const UpdateNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::UpdateNotificationConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the existing signaling channel. This is an asynchronous operation and
         * takes time to complete. </p> <p>If the <code>MessageTtlSeconds</code> value is
         * updated (either increased or reduced), it only applies to new messages sent via
         * this channel after it's been updated. Existing messages are still expired as per
         * the previous <code>MessageTtlSeconds</code> value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/UpdateSignalingChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSignalingChannelOutcome UpdateSignalingChannel(const Model::UpdateSignalingChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateSignalingChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSignalingChannelRequestT = Model::UpdateSignalingChannelRequest>
        Model::UpdateSignalingChannelOutcomeCallable UpdateSignalingChannelCallable(const UpdateSignalingChannelRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::UpdateSignalingChannel, request);
        }

        /**
         * An Async wrapper for UpdateSignalingChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSignalingChannelRequestT = Model::UpdateSignalingChannelRequest>
        void UpdateSignalingChannelAsync(const UpdateSignalingChannelRequestT& request, const UpdateSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::UpdateSignalingChannel, request, handler, context);
        }

        /**
         * <p>Updates stream metadata, such as the device name and media type.</p> <p>You
         * must provide the stream name or the Amazon Resource Name (ARN) of the
         * stream.</p> <p>To make sure that you have the latest version of the stream
         * before updating it, you can specify the stream version. Kinesis Video Streams
         * assigns a version to each stream. When you update a stream, Kinesis Video
         * Streams assigns a new version number. To get the latest stream version, use the
         * <code>DescribeStream</code> API. </p> <p> <code>UpdateStream</code> is an
         * asynchronous operation, and takes time to complete.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/UpdateStream">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamOutcome UpdateStream(const Model::UpdateStreamRequest& request) const;

        /**
         * A Callable wrapper for UpdateStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStreamRequestT = Model::UpdateStreamRequest>
        Model::UpdateStreamOutcomeCallable UpdateStreamCallable(const UpdateStreamRequestT& request) const
        {
            return SubmitCallable(&KinesisVideoClient::UpdateStream, request);
        }

        /**
         * An Async wrapper for UpdateStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStreamRequestT = Model::UpdateStreamRequest>
        void UpdateStreamAsync(const UpdateStreamRequestT& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisVideoClient::UpdateStream, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KinesisVideoEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KinesisVideoClient>;
      void init(const KinesisVideoClientConfiguration& clientConfiguration);

      KinesisVideoClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<KinesisVideoEndpointProviderBase> m_endpointProvider;
  };

} // namespace KinesisVideo
} // namespace Aws
