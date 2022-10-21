/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceServiceClientModel.h>

namespace Aws
{
namespace TranscribeStreamingService
{
  /**
   * <p>Operations and objects for transcribing streaming speech to text.</p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API TranscribeStreamingServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeStreamingServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeStreamingServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                         const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TranscribeStreamingServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~TranscribeStreamingServiceClient();


        /**
         * <p>Starts a bidirectional HTTP/2 stream where audio is streamed to Amazon
         * Transcribe Medical and the transcription results are streamed to your
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/StartMedicalStreamTranscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor.
         * The streamReadyHandler is triggered when the stream is ready to be written to.
         * The responseHandler is triggered when the request is finished.
         */
        virtual void StartMedicalStreamTranscriptionAsync(Model::StartMedicalStreamTranscriptionRequest& request,
                const StartMedicalStreamTranscriptionStreamReadyHandler& streamReadyHandler,
                const StartMedicalStreamTranscriptionResponseReceivedHandler& responseHandler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext = nullptr) const;

        /**
         * <p>Starts a bidirectional HTTP/2 stream where audio is streamed to Amazon
         * Transcribe and the transcription results are streamed to your application.</p>
         * <p>The following are encoded as HTTP/2 headers:</p> <ul> <li>
         * <p>x-amzn-transcribe-language-code</p> </li> <li>
         * <p>x-amzn-transcribe-media-encoding</p> </li> <li>
         * <p>x-amzn-transcribe-sample-rate</p> </li> <li>
         * <p>x-amzn-transcribe-session-id</p> </li> </ul> <p>See the <a
         * href="https://docs.aws.amazon.com/sdk-for-go/api/service/transcribestreamingservice/#TranscribeStreamingService.StartStreamTranscription">
         * SDK for Go API Reference</a> for more detail.</p><p><h3>See Also:</h3>   <a
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
