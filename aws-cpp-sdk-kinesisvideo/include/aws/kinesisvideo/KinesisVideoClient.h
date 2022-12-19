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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoClient(const Aws::KinesisVideo::KinesisVideoClientConfiguration& clientConfiguration = Aws::KinesisVideo::KinesisVideoClientConfiguration(),
                           std::shared_ptr<KinesisVideoEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<KinesisVideoEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoEndpointProvider>(ALLOCATION_TAG),
                           const Aws::KinesisVideo::KinesisVideoClientConfiguration& clientConfiguration = Aws::KinesisVideo::KinesisVideoClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<KinesisVideoEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::CreateSignalingChannelOutcomeCallable CreateSignalingChannelCallable(const Model::CreateSignalingChannelRequest& request) const;

        /**
         * An Async wrapper for CreateSignalingChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSignalingChannelAsync(const Model::CreateSignalingChannelRequest& request, const CreateSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateStreamOutcomeCallable CreateStreamCallable(const Model::CreateStreamRequest& request) const;

        /**
         * An Async wrapper for CreateStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamAsync(const Model::CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteSignalingChannelOutcomeCallable DeleteSignalingChannelCallable(const Model::DeleteSignalingChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteSignalingChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSignalingChannelAsync(const Model::DeleteSignalingChannelRequest& request, const DeleteSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteStreamOutcomeCallable DeleteStreamCallable(const Model::DeleteStreamRequest& request) const;

        /**
         * An Async wrapper for DeleteStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamAsync(const Model::DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a stream’s edge configuration that was set using the
         * <code>StartEdgeConfigurationUpdate</code> API. Use this API to get the status of
         * the configuration if the configuration is in sync with the Edge
         * Agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DescribeEdgeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEdgeConfigurationOutcome DescribeEdgeConfiguration(const Model::DescribeEdgeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeEdgeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEdgeConfigurationOutcomeCallable DescribeEdgeConfigurationCallable(const Model::DescribeEdgeConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeEdgeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEdgeConfigurationAsync(const Model::DescribeEdgeConfigurationRequest& request, const DescribeEdgeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeImageGenerationConfigurationOutcomeCallable DescribeImageGenerationConfigurationCallable(const Model::DescribeImageGenerationConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeImageGenerationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImageGenerationConfigurationAsync(const Model::DescribeImageGenerationConfigurationRequest& request, const DescribeImageGenerationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the most current information about the stream. Either streamName or
         * streamARN should be provided in the input.</p> <p>Returns the most current
         * information about the stream. The <code>streamName</code> or
         * <code>streamARN</code> should be provided in the input.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DescribeMappedResourceConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMappedResourceConfigurationOutcome DescribeMappedResourceConfiguration(const Model::DescribeMappedResourceConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeMappedResourceConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMappedResourceConfigurationOutcomeCallable DescribeMappedResourceConfigurationCallable(const Model::DescribeMappedResourceConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeMappedResourceConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMappedResourceConfigurationAsync(const Model::DescribeMappedResourceConfigurationRequest& request, const DescribeMappedResourceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeMediaStorageConfigurationOutcomeCallable DescribeMediaStorageConfigurationCallable(const Model::DescribeMediaStorageConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeMediaStorageConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMediaStorageConfigurationAsync(const Model::DescribeMediaStorageConfigurationRequest& request, const DescribeMediaStorageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeNotificationConfigurationOutcomeCallable DescribeNotificationConfigurationCallable(const Model::DescribeNotificationConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotificationConfigurationAsync(const Model::DescribeNotificationConfigurationRequest& request, const DescribeNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeSignalingChannelOutcomeCallable DescribeSignalingChannelCallable(const Model::DescribeSignalingChannelRequest& request) const;

        /**
         * An Async wrapper for DescribeSignalingChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSignalingChannelAsync(const Model::DescribeSignalingChannelRequest& request, const DescribeSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeStreamOutcomeCallable DescribeStreamCallable(const Model::DescribeStreamRequest& request) const;

        /**
         * An Async wrapper for DescribeStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStreamAsync(const Model::DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDataEndpointOutcomeCallable GetDataEndpointCallable(const Model::GetDataEndpointRequest& request) const;

        /**
         * An Async wrapper for GetDataEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataEndpointAsync(const Model::GetDataEndpointRequest& request, const GetDataEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSignalingChannelEndpointOutcomeCallable GetSignalingChannelEndpointCallable(const Model::GetSignalingChannelEndpointRequest& request) const;

        /**
         * An Async wrapper for GetSignalingChannelEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSignalingChannelEndpointAsync(const Model::GetSignalingChannelEndpointRequest& request, const GetSignalingChannelEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSignalingChannelsOutcomeCallable ListSignalingChannelsCallable(const Model::ListSignalingChannelsRequest& request) const;

        /**
         * An Async wrapper for ListSignalingChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSignalingChannelsAsync(const Model::ListSignalingChannelsRequest& request, const ListSignalingChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListStreamsOutcomeCallable ListStreamsCallable(const Model::ListStreamsRequest& request) const;

        /**
         * An Async wrapper for ListStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamsAsync(const Model::ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForStreamOutcomeCallable ListTagsForStreamCallable(const Model::ListTagsForStreamRequest& request) const;

        /**
         * An Async wrapper for ListTagsForStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForStreamAsync(const Model::ListTagsForStreamRequest& request, const ListTagsForStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * into the <code>SYNC_FAILED</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/StartEdgeConfigurationUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEdgeConfigurationUpdateOutcome StartEdgeConfigurationUpdate(const Model::StartEdgeConfigurationUpdateRequest& request) const;

        /**
         * A Callable wrapper for StartEdgeConfigurationUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartEdgeConfigurationUpdateOutcomeCallable StartEdgeConfigurationUpdateCallable(const Model::StartEdgeConfigurationUpdateRequest& request) const;

        /**
         * An Async wrapper for StartEdgeConfigurationUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartEdgeConfigurationUpdateAsync(const Model::StartEdgeConfigurationUpdateRequest& request, const StartEdgeConfigurationUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagStreamOutcomeCallable TagStreamCallable(const Model::TagStreamRequest& request) const;

        /**
         * An Async wrapper for TagStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagStreamAsync(const Model::TagStreamRequest& request, const TagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagStreamOutcomeCallable UntagStreamCallable(const Model::UntagStreamRequest& request) const;

        /**
         * An Async wrapper for UntagStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagStreamAsync(const Model::UntagStreamRequest& request, const UntagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Increases or decreases the stream's data retention period by the value that
         * you specify. To indicate whether you want to increase or decrease the data
         * retention period, specify the <code>Operation</code> parameter in the request
         * body. In the request, you must specify either the <code>StreamName</code> or the
         * <code>StreamARN</code>. </p>  <p>The retention period that you specify
         * replaces the current value.</p>  <p>This operation requires permission
         * for the <code>KinesisVideo:UpdateDataRetention</code> action.</p> <p>Changing
         * the data retention period affects the data in the stream as follows:</p> <ul>
         * <li> <p>If the data retention period is increased, existing data is retained for
         * the new retention period. For example, if the data retention period is increased
         * from one hour to seven hours, all existing data is retained for seven hours.</p>
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
        virtual Model::UpdateDataRetentionOutcomeCallable UpdateDataRetentionCallable(const Model::UpdateDataRetentionRequest& request) const;

        /**
         * An Async wrapper for UpdateDataRetention that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataRetentionAsync(const Model::UpdateDataRetentionRequest& request, const UpdateDataRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateImageGenerationConfigurationOutcomeCallable UpdateImageGenerationConfigurationCallable(const Model::UpdateImageGenerationConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateImageGenerationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateImageGenerationConfigurationAsync(const Model::UpdateImageGenerationConfigurationRequest& request, const UpdateImageGenerationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a <code>SignalingChannel</code> to a stream to store the media.
         * There are two signaling modes that can specified :</p> <ul> <li> <p>If the
         * <code>StorageStatus</code> is disabled, no data will be stored, and the
         * <code>StreamARN</code> parameter will not be needed. </p> </li> <li> <p>If the
         * <code>StorageStatus</code> is enabled, the data will be stored in the
         * <code>StreamARN</code> provided. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/UpdateMediaStorageConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMediaStorageConfigurationOutcome UpdateMediaStorageConfiguration(const Model::UpdateMediaStorageConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateMediaStorageConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMediaStorageConfigurationOutcomeCallable UpdateMediaStorageConfigurationCallable(const Model::UpdateMediaStorageConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateMediaStorageConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMediaStorageConfigurationAsync(const Model::UpdateMediaStorageConfigurationRequest& request, const UpdateMediaStorageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateNotificationConfigurationOutcomeCallable UpdateNotificationConfigurationCallable(const Model::UpdateNotificationConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNotificationConfigurationAsync(const Model::UpdateNotificationConfigurationRequest& request, const UpdateNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateSignalingChannelOutcomeCallable UpdateSignalingChannelCallable(const Model::UpdateSignalingChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateSignalingChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSignalingChannelAsync(const Model::UpdateSignalingChannelRequest& request, const UpdateSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateStreamOutcomeCallable UpdateStreamCallable(const Model::UpdateStreamRequest& request) const;

        /**
         * An Async wrapper for UpdateStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStreamAsync(const Model::UpdateStreamRequest& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
