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
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisvideo/model/CreateStreamResult.h>
#include <aws/kinesisvideo/model/DeleteStreamResult.h>
#include <aws/kinesisvideo/model/DescribeStreamResult.h>
#include <aws/kinesisvideo/model/GetDataEndpointResult.h>
#include <aws/kinesisvideo/model/ListStreamsResult.h>
#include <aws/kinesisvideo/model/ListTagsForStreamResult.h>
#include <aws/kinesisvideo/model/TagStreamResult.h>
#include <aws/kinesisvideo/model/UntagStreamResult.h>
#include <aws/kinesisvideo/model/UpdateDataRetentionResult.h>
#include <aws/kinesisvideo/model/UpdateStreamResult.h>
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

namespace KinesisVideo
{

namespace Model
{
        class CreateStreamRequest;
        class DeleteStreamRequest;
        class DescribeStreamRequest;
        class GetDataEndpointRequest;
        class ListStreamsRequest;
        class ListTagsForStreamRequest;
        class TagStreamRequest;
        class UntagStreamRequest;
        class UpdateDataRetentionRequest;
        class UpdateStreamRequest;

        typedef Aws::Utils::Outcome<CreateStreamResult, Aws::Client::AWSError<KinesisVideoErrors>> CreateStreamOutcome;
        typedef Aws::Utils::Outcome<DeleteStreamResult, Aws::Client::AWSError<KinesisVideoErrors>> DeleteStreamOutcome;
        typedef Aws::Utils::Outcome<DescribeStreamResult, Aws::Client::AWSError<KinesisVideoErrors>> DescribeStreamOutcome;
        typedef Aws::Utils::Outcome<GetDataEndpointResult, Aws::Client::AWSError<KinesisVideoErrors>> GetDataEndpointOutcome;
        typedef Aws::Utils::Outcome<ListStreamsResult, Aws::Client::AWSError<KinesisVideoErrors>> ListStreamsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForStreamResult, Aws::Client::AWSError<KinesisVideoErrors>> ListTagsForStreamOutcome;
        typedef Aws::Utils::Outcome<TagStreamResult, Aws::Client::AWSError<KinesisVideoErrors>> TagStreamOutcome;
        typedef Aws::Utils::Outcome<UntagStreamResult, Aws::Client::AWSError<KinesisVideoErrors>> UntagStreamOutcome;
        typedef Aws::Utils::Outcome<UpdateDataRetentionResult, Aws::Client::AWSError<KinesisVideoErrors>> UpdateDataRetentionOutcome;
        typedef Aws::Utils::Outcome<UpdateStreamResult, Aws::Client::AWSError<KinesisVideoErrors>> UpdateStreamOutcome;

        typedef std::future<CreateStreamOutcome> CreateStreamOutcomeCallable;
        typedef std::future<DeleteStreamOutcome> DeleteStreamOutcomeCallable;
        typedef std::future<DescribeStreamOutcome> DescribeStreamOutcomeCallable;
        typedef std::future<GetDataEndpointOutcome> GetDataEndpointOutcomeCallable;
        typedef std::future<ListStreamsOutcome> ListStreamsOutcomeCallable;
        typedef std::future<ListTagsForStreamOutcome> ListTagsForStreamOutcomeCallable;
        typedef std::future<TagStreamOutcome> TagStreamOutcomeCallable;
        typedef std::future<UntagStreamOutcome> UntagStreamOutcomeCallable;
        typedef std::future<UpdateDataRetentionOutcome> UpdateDataRetentionOutcomeCallable;
        typedef std::future<UpdateStreamOutcome> UpdateStreamOutcomeCallable;
} // namespace Model

  class KinesisVideoClient;

    typedef std::function<void(const KinesisVideoClient*, const Model::CreateStreamRequest&, const Model::CreateStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::DeleteStreamRequest&, const Model::DeleteStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::DescribeStreamRequest&, const Model::DescribeStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStreamResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::GetDataEndpointRequest&, const Model::GetDataEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataEndpointResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::ListStreamsRequest&, const Model::ListStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamsResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::ListTagsForStreamRequest&, const Model::ListTagsForStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForStreamResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::TagStreamRequest&, const Model::TagStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagStreamResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::UntagStreamRequest&, const Model::UntagStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagStreamResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::UpdateDataRetentionRequest&, const Model::UpdateDataRetentionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataRetentionResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::UpdateStreamRequest&, const Model::UpdateStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStreamResponseReceivedHandler;

  /**
   * <p/>
   */
  class AWS_KINESISVIDEO_API KinesisVideoClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~KinesisVideoClient();

        inline virtual const char* GetServiceClientName() const override { return "Kinesis Video"; }


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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamOutcomeCallable CreateStreamCallable(const Model::CreateStreamRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamAsync(const Model::CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamOutcomeCallable DeleteStreamCallable(const Model::DeleteStreamRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamAsync(const Model::DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the most current information about the specified stream. You must
         * specify either the <code>StreamName</code> or the <code>StreamARN</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DescribeStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStreamOutcome DescribeStream(const Model::DescribeStreamRequest& request) const;

        /**
         * <p>Returns the most current information about the specified stream. You must
         * specify either the <code>StreamName</code> or the <code>StreamARN</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DescribeStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStreamOutcomeCallable DescribeStreamCallable(const Model::DescribeStreamRequest& request) const;

        /**
         * <p>Returns the most current information about the specified stream. You must
         * specify either the <code>StreamName</code> or the <code>StreamARN</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DescribeStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStreamAsync(const Model::DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an endpoint for a specified stream for either reading or writing. Use
         * this endpoint in your application to read from the specified stream (using the
         * <code>GetMedia</code> or <code>GetMediaForFragmentList</code> operations) or
         * write to it (using the <code>PutMedia</code> operation). </p> <note> <p>The
         * returned endpoint does not have the API name appended. The client needs to add
         * the API name to the returned endpoint.</p> </note> <p>In the request, specify
         * the stream either by <code>StreamName</code> or
         * <code>StreamARN</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/GetDataEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataEndpointOutcome GetDataEndpoint(const Model::GetDataEndpointRequest& request) const;

        /**
         * <p>Gets an endpoint for a specified stream for either reading or writing. Use
         * this endpoint in your application to read from the specified stream (using the
         * <code>GetMedia</code> or <code>GetMediaForFragmentList</code> operations) or
         * write to it (using the <code>PutMedia</code> operation). </p> <note> <p>The
         * returned endpoint does not have the API name appended. The client needs to add
         * the API name to the returned endpoint.</p> </note> <p>In the request, specify
         * the stream either by <code>StreamName</code> or
         * <code>StreamARN</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/GetDataEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataEndpointOutcomeCallable GetDataEndpointCallable(const Model::GetDataEndpointRequest& request) const;

        /**
         * <p>Gets an endpoint for a specified stream for either reading or writing. Use
         * this endpoint in your application to read from the specified stream (using the
         * <code>GetMedia</code> or <code>GetMediaForFragmentList</code> operations) or
         * write to it (using the <code>PutMedia</code> operation). </p> <note> <p>The
         * returned endpoint does not have the API name appended. The client needs to add
         * the API name to the returned endpoint.</p> </note> <p>In the request, specify
         * the stream either by <code>StreamName</code> or
         * <code>StreamARN</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/GetDataEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataEndpointAsync(const Model::GetDataEndpointRequest& request, const GetDataEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <code>StreamInfo</code> objects. Each object describes a
         * stream. To retrieve only streams that satisfy a specific condition, you can
         * specify a <code>StreamNameCondition</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ListStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamsOutcome ListStreams(const Model::ListStreamsRequest& request) const;

        /**
         * <p>Returns an array of <code>StreamInfo</code> objects. Each object describes a
         * stream. To retrieve only streams that satisfy a specific condition, you can
         * specify a <code>StreamNameCondition</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ListStreams">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamsOutcomeCallable ListStreamsCallable(const Model::ListStreamsRequest& request) const;

        /**
         * <p>Returns an array of <code>StreamInfo</code> objects. Each object describes a
         * stream. To retrieve only streams that satisfy a specific condition, you can
         * specify a <code>StreamNameCondition</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ListStreams">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamsAsync(const Model::ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags associated with the specified stream.</p> <p>In the
         * request, you must specify either the <code>StreamName</code> or the
         * <code>StreamARN</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ListTagsForStream">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForStreamOutcome ListTagsForStream(const Model::ListTagsForStreamRequest& request) const;

        /**
         * <p>Returns a list of tags associated with the specified stream.</p> <p>In the
         * request, you must specify either the <code>StreamName</code> or the
         * <code>StreamARN</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ListTagsForStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForStreamOutcomeCallable ListTagsForStreamCallable(const Model::ListTagsForStreamRequest& request) const;

        /**
         * <p>Returns a list of tags associated with the specified stream.</p> <p>In the
         * request, you must specify either the <code>StreamName</code> or the
         * <code>StreamARN</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ListTagsForStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForStreamAsync(const Model::ListTagsForStreamRequest& request, const ListTagsForStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to a stream. A <i>tag</i> is a key-value pair (the
         * value is optional) that you can define and assign to AWS resources. If you
         * specify a tag that already exists, the tag value is replaced with the value that
         * you specify in the request. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>. </p> <p>You must provide either the <code>StreamName</code> or the
         * <code>StreamARN</code>.</p> <p>This operation requires permission for the
         * <code>KinesisVideo:TagStream</code> action.</p> <p>Kinesis video streams support
         * up to 50 tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/TagStream">AWS
         * API Reference</a></p>
         */
        virtual Model::TagStreamOutcome TagStream(const Model::TagStreamRequest& request) const;

        /**
         * <p>Adds one or more tags to a stream. A <i>tag</i> is a key-value pair (the
         * value is optional) that you can define and assign to AWS resources. If you
         * specify a tag that already exists, the tag value is replaced with the value that
         * you specify in the request. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>. </p> <p>You must provide either the <code>StreamName</code> or the
         * <code>StreamARN</code>.</p> <p>This operation requires permission for the
         * <code>KinesisVideo:TagStream</code> action.</p> <p>Kinesis video streams support
         * up to 50 tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/TagStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagStreamOutcomeCallable TagStreamCallable(const Model::TagStreamRequest& request) const;

        /**
         * <p>Adds one or more tags to a stream. A <i>tag</i> is a key-value pair (the
         * value is optional) that you can define and assign to AWS resources. If you
         * specify a tag that already exists, the tag value is replaced with the value that
         * you specify in the request. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>. </p> <p>You must provide either the <code>StreamName</code> or the
         * <code>StreamARN</code>.</p> <p>This operation requires permission for the
         * <code>KinesisVideo:TagStream</code> action.</p> <p>Kinesis video streams support
         * up to 50 tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/TagStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagStreamAsync(const Model::TagStreamRequest& request, const TagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Removes one or more tags from a stream. In the request, specify only a tag
         * key or keys; don't specify the value. If you specify a tag key that does not
         * exist, it's ignored.</p> <p>In the request, you must provide the
         * <code>StreamName</code> or <code>StreamARN</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/UntagStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagStreamOutcomeCallable UntagStreamCallable(const Model::UntagStreamRequest& request) const;

        /**
         * <p>Removes one or more tags from a stream. In the request, specify only a tag
         * key or keys; don't specify the value. If you specify a tag key that does not
         * exist, it's ignored.</p> <p>In the request, you must provide the
         * <code>StreamName</code> or <code>StreamARN</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/UntagStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagStreamAsync(const Model::UntagStreamRequest& request, const UntagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Increases or decreases the stream's data retention period by the value that
         * you specify. To indicate whether you want to increase or decrease the data
         * retention period, specify the <code>Operation</code> parameter in the request
         * body. In the request, you must specify either the <code>StreamName</code> or the
         * <code>StreamARN</code>. </p> <note> <p>The retention period that you specify
         * replaces the current value.</p> </note> <p>This operation requires permission
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
         * <p> Increases or decreases the stream's data retention period by the value that
         * you specify. To indicate whether you want to increase or decrease the data
         * retention period, specify the <code>Operation</code> parameter in the request
         * body. In the request, you must specify either the <code>StreamName</code> or the
         * <code>StreamARN</code>. </p> <note> <p>The retention period that you specify
         * replaces the current value.</p> </note> <p>This operation requires permission
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataRetentionOutcomeCallable UpdateDataRetentionCallable(const Model::UpdateDataRetentionRequest& request) const;

        /**
         * <p> Increases or decreases the stream's data retention period by the value that
         * you specify. To indicate whether you want to increase or decrease the data
         * retention period, specify the <code>Operation</code> parameter in the request
         * body. In the request, you must specify either the <code>StreamName</code> or the
         * <code>StreamARN</code>. </p> <note> <p>The retention period that you specify
         * replaces the current value.</p> </note> <p>This operation requires permission
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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataRetentionAsync(const Model::UpdateDataRetentionRequest& request, const UpdateDataRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStreamOutcomeCallable UpdateStreamCallable(const Model::UpdateStreamRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStreamAsync(const Model::UpdateStreamRequest& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateStreamAsyncHelper(const Model::CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStreamAsyncHelper(const Model::DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStreamAsyncHelper(const Model::DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDataEndpointAsyncHelper(const Model::GetDataEndpointRequest& request, const GetDataEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamsAsyncHelper(const Model::ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForStreamAsyncHelper(const Model::ListTagsForStreamRequest& request, const ListTagsForStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagStreamAsyncHelper(const Model::TagStreamRequest& request, const TagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagStreamAsyncHelper(const Model::UntagStreamRequest& request, const UntagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDataRetentionAsyncHelper(const Model::UpdateDataRetentionRequest& request, const UpdateDataRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStreamAsyncHelper(const Model::UpdateStreamRequest& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace KinesisVideo
} // namespace Aws
