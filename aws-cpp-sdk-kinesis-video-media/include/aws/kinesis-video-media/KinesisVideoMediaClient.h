/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-media/KinesisVideoMedia_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis-video-media/KinesisVideoMediaServiceClientModel.h>

namespace Aws
{
namespace KinesisVideoMedia
{
  /**
   * <p/>
   */
  class AWS_KINESISVIDEOMEDIA_API KinesisVideoMediaClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<KinesisVideoMediaClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoMediaClient(const Aws::KinesisVideoMedia::KinesisVideoMediaClientConfiguration& clientConfiguration = Aws::KinesisVideoMedia::KinesisVideoMediaClientConfiguration(),
                                std::shared_ptr<KinesisVideoMediaEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoMediaEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoMediaClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<KinesisVideoMediaEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoMediaEndpointProvider>(ALLOCATION_TAG),
                                const Aws::KinesisVideoMedia::KinesisVideoMediaClientConfiguration& clientConfiguration = Aws::KinesisVideoMedia::KinesisVideoMediaClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoMediaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<KinesisVideoMediaEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisVideoMediaEndpointProvider>(ALLOCATION_TAG),
                                const Aws::KinesisVideoMedia::KinesisVideoMediaClientConfiguration& clientConfiguration = Aws::KinesisVideoMedia::KinesisVideoMediaClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoMediaClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoMediaClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoMediaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KinesisVideoMediaClient();

        /**
         * <p> Use this API to retrieve media content from a Kinesis video stream. In the
         * request, you identify the stream name or stream Amazon Resource Name (ARN), and
         * the starting chunk. Kinesis Video Streams then returns a stream of chunks in
         * order by fragment number.</p>  <p>You must first call the
         * <code>GetDataEndpoint</code> API to get an endpoint. Then send the
         * <code>GetMedia</code> requests to this endpoint using the <a
         * href="https://docs.aws.amazon.com/cli/latest/reference/">--endpoint-url
         * parameter</a>. </p>  <p>When you put media data (fragments) on a stream,
         * Kinesis Video Streams stores each incoming fragment and related metadata in what
         * is called a "chunk." For more information, see <a
         * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/API_dataplane_PutMedia.html">PutMedia</a>.
         * The <code>GetMedia</code> API returns a stream of these chunks starting from the
         * chunk that you specify in the request. </p> <p>The following limits apply when
         * using the <code>GetMedia</code> API:</p> <ul> <li> <p>A client can call
         * <code>GetMedia</code> up to five times per second per stream. </p> </li> <li>
         * <p>Kinesis Video Streams sends media data at a rate of up to 25 megabytes per
         * second (or 200 megabits per second) during a <code>GetMedia</code> session. </p>
         * </li> </ul>  <p>If an error is thrown after invoking a Kinesis Video
         * Streams media API, in addition to the HTTP status code and the response body, it
         * includes the following pieces of information: </p> <ul> <li> <p>
         * <code>x-amz-ErrorType</code> HTTP header – contains a more specific error type
         * in addition to what the HTTP status code provides. </p> </li> <li> <p>
         * <code>x-amz-RequestId</code> HTTP header – if you want to report an issue to
         * AWS, the support team can better diagnose the problem if given the Request
         * Id.</p> </li> </ul> <p>Both the HTTP status code and the ErrorType header can be
         * utilized to make programmatic decisions about whether errors are retry-able and
         * under what conditions, as well as provide information on what actions the client
         * programmer might need to take in order to successfully try again.</p> <p>For
         * more information, see the <b>Errors</b> section at the bottom of this topic, as
         * well as <a
         * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/CommonErrors.html">Common
         * Errors</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-media-2017-09-30/GetMedia">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaOutcome GetMedia(const Model::GetMediaRequest& request) const;

        /**
         * A Callable wrapper for GetMedia that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMediaOutcomeCallable GetMediaCallable(const Model::GetMediaRequest& request) const;

        /**
         * An Async wrapper for GetMedia that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMediaAsync(const Model::GetMediaRequest& request, const GetMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KinesisVideoMediaEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KinesisVideoMediaClient>;
      void init(const KinesisVideoMediaClientConfiguration& clientConfiguration);

      KinesisVideoMediaClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<KinesisVideoMediaEndpointProviderBase> m_endpointProvider;
  };

} // namespace KinesisVideoMedia
} // namespace Aws
