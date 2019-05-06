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
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
namespace Event
{
  class EventEncoderStream;
}

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

namespace TranscribeStreamingService
{

namespace Model
{
        class StartStreamTranscriptionRequest;
        class AudioStream;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<TranscribeStreamingServiceErrors>> StartStreamTranscriptionOutcome;

        typedef std::future<StartStreamTranscriptionOutcome> StartStreamTranscriptionOutcomeCallable;
} // namespace Model

  class TranscribeStreamingServiceClient;

    typedef std::function<void(Model::AudioStream&)> StartStreamTranscriptionStreamReadyHandler;
    typedef std::function<void(const TranscribeStreamingServiceClient*, const Model::StartStreamTranscriptionRequest&, const Model::StartStreamTranscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartStreamTranscriptionResponseReceivedHandler;

  /**
   * <p>Operations and objects for transcribing streaming speech to text.</p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API TranscribeStreamingServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeStreamingServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeStreamingServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TranscribeStreamingServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~TranscribeStreamingServiceClient();

        inline virtual const char* GetServiceClientName() const override { return "Transcribe Streaming"; }


        /**
         * <p>Starts a bidirectional HTTP2 stream where audio is streamed to Amazon
         * Transcribe and the transcription results are streamed to your application.</p>
         * <p>The following are encoded as HTTP2 headers:</p> <ul> <li>
         * <p>x-amzn-transcribe-language-code</p> </li> <li>
         * <p>x-amzn-transcribe-media-encoding</p> </li> <li>
         * <p>x-amzn-transcribe-sample-rate</p> </li> <li>
         * <p>x-amzn-transcribe-session-id</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/StartStreamTranscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor.
         * The streamReadyHandler is triggered when the stream is ready to be written to.
         * The responseHandler is triggered when the request is finished.
         */
        virtual void StartStreamTranscriptionAsync(Model::StartStreamTranscriptionRequest& request,
                const StartStreamTranscriptionStreamReadyHandler& streamReadyHandler,
                const StartStreamTranscriptionResponseReceivedHandler& responseHandler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace TranscribeStreamingService
} // namespace Aws
