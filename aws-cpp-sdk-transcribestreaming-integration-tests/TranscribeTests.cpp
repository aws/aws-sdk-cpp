/*
* Copyright 2010-2019 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#ifdef HAVE_H2_CLIENT

#include <aws/external/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/internal/AWSHttpResourceClient.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/threading/Semaphore.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceClient.h>
#include <aws/transcribestreaming/model/StartStreamTranscriptionRequest.h>
#include <aws/transcribestreaming/model/StartStreamTranscriptionHandler.h>
#include <fstream>

using namespace Aws;
using namespace Aws::Utils;
using namespace Aws::TranscribeStreamingService;
using namespace Aws::TranscribeStreamingService::Model;

static const char TEST_FILE_NAME[] = "transcribe-test-file.wav";
const char ALLOC_TAG[] = "TranscribestreamingIntegTest";

class TranscribeStreamingTests : public ::testing::Test
{
public:
    TranscribeStreamingTests()
    {
        Aws::Internal::AWSHttpResourceClient httpclient;
        auto payload = httpclient.GetResource("https://s3.amazonaws.com/" /*endpoint*/,
                "aws-sdk-cpp-builds-sdks-team/test-resources/transcribe-test-file.wav" /*path*/, "" /*authToken*/);
        Aws::OFStream testFile(TEST_FILE_NAME, std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);
        testFile.write(payload.c_str(), payload.size());
        testFile.close();

        Aws::Client::ClientConfiguration config;
#ifdef _WIN32
        // TODO: remove this once we get H2 working with WinHttp client
        config.httpLibOverride = Aws::Http::TransferLibType::WIN_INET_CLIENT;
#endif
        m_client = Aws::MakeUnique<TranscribeStreamingServiceClient>(ALLOC_TAG, config);
    }

    ~TranscribeStreamingTests()
    {
        Aws::FileSystem::RemoveFileIfExists(TEST_FILE_NAME);
    }

    Aws::UniquePtr<TranscribeStreamingServiceClient> m_client;
};

TEST_F(TranscribeStreamingTests, TranscribeAudioFile)
{
    const char EXPECTED_MESSAGE[] = "But what if somebody decides to break it? Careful that you keep adequate coverage.";
    Aws::String transcribedResult;
    StartStreamTranscriptionHandler handler;
    handler.SetTranscriptEventCallback([&transcribedResult](const TranscriptEvent& ev)
    {
        // TODO: only check the result marked as "final"
        const auto& results = ev.GetTranscript().GetResults();
        if (results.empty())
        {
            return;
        }
        const auto& last = results.back();
        const auto& alternatives = last.GetAlternatives();
        if (alternatives.empty())
        {
            return;
        }
        transcribedResult = alternatives.back().GetTranscript();
    });

    handler.SetOnErrorCallback([&transcribedResult](const Aws::Client::AWSError<TranscribeStreamingServiceErrors>& )
    {
        // we will receive an error because the request was abruptly shutdown (via stream.Close()).
        // However, we cannot delay the call to closing the stream, because HTTP clients such as libcurl buffer the
        // requests before sending them over the wire, so it will keep BUFFER_SIZE bytes in its memory if we don't
        // signal the completion of the stream (by closing it).
        // To discern between that case and a true error, we check if we have received any text back from the service.
        if(transcribedResult.empty())
        {
            FAIL();
        }
    });

    StartStreamTranscriptionRequest request;
    request.SetMediaSampleRateHertz(8000);
    request.SetLanguageCode(LanguageCode::en_US);
    request.SetMediaEncoding(MediaEncoding::pcm);
    request.SetEventStreamHandler(handler);

    auto OnStreamReady = [](AudioStream& stream)
    {
        Aws::FStream file(TEST_FILE_NAME, std::ios_base::in | std::ios_base::binary);
        ASSERT_TRUE(file);
        char buf[1024];
        while(file)
        {
            file.read(buf, sizeof(buf));
            Aws::Vector<unsigned char> bits{buf, buf + file.gcount()};
            AudioEvent event(std::move(bits));
            if (!stream.WriteAudioEvent(event))
            {
                break;
            }
        }
        stream.WriteAudioEvent({}); // per the spec, we have to send an empty event (i.e. without a payload) at the end.
        stream.flush();
        stream.Close();
    };

    Aws::Utils::Threading::Semaphore semaphore(0, 1);
    auto OnResponseCallback = [&semaphore](const TranscribeStreamingServiceClient*,
            const StartStreamTranscriptionRequest&,
            const StartStreamTranscriptionOutcome&,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
    {
        semaphore.ReleaseAll();
    };

    m_client->StartStreamTranscriptionAsync(request, OnStreamReady, OnResponseCallback, nullptr/*context*/);
    semaphore.WaitOne();
    ASSERT_EQ(0u, transcribedResult.find(EXPECTED_MESSAGE));
}

#endif
