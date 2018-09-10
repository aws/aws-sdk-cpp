﻿/*
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
#include <aws/kinesis-video-media/KinesisVideoMedia_EXPORTS.h>
#include <aws/kinesis-video-media/KinesisVideoMediaErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis-video-media/model/GetMediaResult.h>
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

namespace KinesisVideoMedia
{

namespace Model
{
        class GetMediaRequest;

        typedef Aws::Utils::Outcome<GetMediaResult, Aws::Client::AWSError<KinesisVideoMediaErrors>> GetMediaOutcome;

        typedef std::future<GetMediaOutcome> GetMediaOutcomeCallable;
} // namespace Model

  class KinesisVideoMediaClient;

    typedef std::function<void(const KinesisVideoMediaClient*, const Model::GetMediaRequest&, const Model::GetMediaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMediaResponseReceivedHandler;

  /**
   * <p/>
   */
  class AWS_KINESISVIDEOMEDIA_API KinesisVideoMediaClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoMediaClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoMediaClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoMediaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~KinesisVideoMediaClient();

        inline virtual const char* GetServiceClientName() const override { return "Kinesis Video Media"; }


        /**
         * <p> Use this API to retrieve media content from a Kinesis video stream. In the
         * request, you identify stream name or stream Amazon Resource Name (ARN), and the
         * starting chunk. Kinesis Video Streams then returns a stream of chunks in order
         * by fragment number.</p> <note> <p> You must first call the
         * <code>GetDataEndpoint</code> API to get an endpoint to which you can then send
         * the <code>GetMedia</code> requests. </p> </note> <p>When you put media data
         * (fragments) on a stream, Kinesis Video Streams stores each incoming fragment and
         * related metadata in what is called a "chunk." For more information, see . The
         * <code>GetMedia</code> API returns a stream of these chunks starting from the
         * chunk that you specify in the request. </p> <p>The following limits apply when
         * using the <code>GetMedia</code> API:</p> <ul> <li> <p>A client can call
         * <code>GetMedia</code> up to five times per second per stream. </p> </li> <li>
         * <p>Kinesis Video Streams sends media data at a rate of up to 25 megabytes per
         * second (or 200 megabits per second) during a <code>GetMedia</code> session. </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-media-2017-09-30/GetMedia">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaOutcome GetMedia(const Model::GetMediaRequest& request) const;

        /**
         * <p> Use this API to retrieve media content from a Kinesis video stream. In the
         * request, you identify stream name or stream Amazon Resource Name (ARN), and the
         * starting chunk. Kinesis Video Streams then returns a stream of chunks in order
         * by fragment number.</p> <note> <p> You must first call the
         * <code>GetDataEndpoint</code> API to get an endpoint to which you can then send
         * the <code>GetMedia</code> requests. </p> </note> <p>When you put media data
         * (fragments) on a stream, Kinesis Video Streams stores each incoming fragment and
         * related metadata in what is called a "chunk." For more information, see . The
         * <code>GetMedia</code> API returns a stream of these chunks starting from the
         * chunk that you specify in the request. </p> <p>The following limits apply when
         * using the <code>GetMedia</code> API:</p> <ul> <li> <p>A client can call
         * <code>GetMedia</code> up to five times per second per stream. </p> </li> <li>
         * <p>Kinesis Video Streams sends media data at a rate of up to 25 megabytes per
         * second (or 200 megabits per second) during a <code>GetMedia</code> session. </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-media-2017-09-30/GetMedia">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMediaOutcomeCallable GetMediaCallable(const Model::GetMediaRequest& request) const;

        /**
         * <p> Use this API to retrieve media content from a Kinesis video stream. In the
         * request, you identify stream name or stream Amazon Resource Name (ARN), and the
         * starting chunk. Kinesis Video Streams then returns a stream of chunks in order
         * by fragment number.</p> <note> <p> You must first call the
         * <code>GetDataEndpoint</code> API to get an endpoint to which you can then send
         * the <code>GetMedia</code> requests. </p> </note> <p>When you put media data
         * (fragments) on a stream, Kinesis Video Streams stores each incoming fragment and
         * related metadata in what is called a "chunk." For more information, see . The
         * <code>GetMedia</code> API returns a stream of these chunks starting from the
         * chunk that you specify in the request. </p> <p>The following limits apply when
         * using the <code>GetMedia</code> API:</p> <ul> <li> <p>A client can call
         * <code>GetMedia</code> up to five times per second per stream. </p> </li> <li>
         * <p>Kinesis Video Streams sends media data at a rate of up to 25 megabytes per
         * second (or 200 megabits per second) during a <code>GetMedia</code> session. </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-media-2017-09-30/GetMedia">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMediaAsync(const Model::GetMediaRequest& request, const GetMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void GetMediaAsyncHelper(const Model::GetMediaRequest& request, const GetMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace KinesisVideoMedia
} // namespace Aws
