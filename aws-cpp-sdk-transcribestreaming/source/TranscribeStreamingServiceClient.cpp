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

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/event/EventStream.h>

#include <aws/transcribestreaming/TranscribeStreamingServiceClient.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceEndpoint.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceErrorMarshaller.h>
#include <aws/transcribestreaming/model/StartStreamTranscriptionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TranscribeStreamingService;
using namespace Aws::TranscribeStreamingService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "transcribe";
static const char* ALLOCATION_TAG = "TranscribeStreamingServiceClient";


TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranscribeStreamingServiceClient::TranscribeStreamingServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TranscribeStreamingServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranscribeStreamingServiceClient::~TranscribeStreamingServiceClient()
{
}

void TranscribeStreamingServiceClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + TranscribeStreamingServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void TranscribeStreamingServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

void TranscribeStreamingServiceClient::StartStreamTranscriptionAsync(Model::StartStreamTranscriptionRequest& request,
                const StartStreamTranscriptionStreamReadyHandler& streamReadyHandler,
                const StartStreamTranscriptionResponseReceivedHandler& responseHandler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  Aws::Http::URI uri = m_uri;
  if (!request.LanguageCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartStreamTranscription", "Required field: LanguageCode, is not set");
    responseHandler(this, request, StartStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LanguageCode]", false)), handlerContext);
    return;
  }
  if (!request.MediaSampleRateHertzHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartStreamTranscription", "Required field: MediaSampleRateHertz, is not set");
    responseHandler(this, request, StartStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaSampleRateHertz]", false)), handlerContext);
    return;
  }
  if (!request.MediaEncodingHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartStreamTranscription", "Required field: MediaEncoding, is not set");
    responseHandler(this, request, StartStreamTranscriptionOutcome(Aws::Client::AWSError<TranscribeStreamingServiceErrors>(TranscribeStreamingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaEncoding]", false)), handlerContext);
    return;
  }
  Aws::StringStream ss;
  ss << "/stream-transcription";
  uri.SetPath(uri.GetPath() + ss.str());
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );

  auto eventEncoderStream = Aws::MakeShared<Model::AudioStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  request.SetAudioStream(eventEncoderStream); // this becomes the body of the request
  Aws::Utils::Threading::Semaphore sem(0, 1);
  request.SetRequestSignedHandler([&](const Aws::Http::HttpRequest& httpRequest) { eventEncoderStream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(httpRequest)); sem.ReleaseAll(); });

  m_executor->Submit([this, uri, &request, responseHandler, handlerContext] () mutable {
      JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::EVENTSTREAM_SIGV4_SIGNER);
      if(outcome.IsSuccess())
      {
        responseHandler(this, request, StartStreamTranscriptionOutcome(NoResult()), handlerContext);
      }
      else
      {
        responseHandler(this, request, StartStreamTranscriptionOutcome(outcome.GetError()), handlerContext);
      }
      return StartStreamTranscriptionOutcome(NoResult());
  });
  sem.WaitOne();
  streamReadyHandler(*request.GetAudioStream());
}
