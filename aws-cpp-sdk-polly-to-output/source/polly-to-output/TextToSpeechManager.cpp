/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/polly-to-output/TextToSpeechManager.h>
#include <aws/polly/model/SynthesizeSpeechRequest.h>
#include <aws/polly/model/DescribeVoicesRequest.h>
#include <aws/core/utils/Outcome.h>
#include <windows.h>

using namespace Aws::Polly;
using namespace Aws::Polly::Model;

static void CALLBACK waveOutProc(HWAVEOUT waveOut, UINT uMsg, DWORD_PTR, DWORD_PTR dwParam1, DWORD_PTR)
{
    switch (uMsg)
    {
    case WOM_CLOSE:
        return;
    case WOM_DONE:
        waveOutUnprepareHeader(waveOut, (WAVEHDR*)dwParam1, sizeof(WAVEHDR));
        Aws::DeleteArray(((WAVEHDR*)dwParam1)->lpData);
        Aws::Delete((WAVEHDR*)dwParam1);
        return;
    case WOM_OPEN:
        return;
    default:
        return;

    }
}


namespace Aws
{
    namespace PollyToOutput
    {
        static const char* CLASS_TAG = "TextToSpeechManager";
        static const size_t BUFF_SIZE = 1024;

        TextToSpeechManager::TextToSpeechManager(const std::shared_ptr<Polly::PollyClient>& pollyClient) : m_pollyClient(pollyClient)
        {
            WAVEFORMATEX format;
            format.nChannels = 1;
            format.nSamplesPerSec = 16000;
            format.wBitsPerSample = 16;
            format.wFormatTag = WAVE_FORMAT_PCM;
            format.nBlockAlign = (format.nChannels * format.wBitsPerSample) / 8;
            format.cbSize = 0;
            format.nAvgBytesPerSec = format.nSamplesPerSec * format.nBlockAlign;

            auto res = waveOutOpen(&m_waveOut, WAVE_MAPPER, &format, (DWORD_PTR)&waveOutProc, NULL, CALLBACK_FUNCTION | WAVE_ALLOWSYNC | WAVE_MAPPED_DEFAULT_COMMUNICATION_DEVICE | WAVE_ALLOWSYNC);
            m_isInit = !res;
        }

        TextToSpeechManager::~TextToSpeechManager()
        {
            waveOutClose(m_waveOut);
        }

        void TextToSpeechManager::SendTextToOutputDevice(const char* text, SendTextCompletedHandler)
        {
            DescribeVoicesRequest describeVocies;
            describeVocies.WithLanguageCode(LanguageCode::en_US);

            auto outcome = m_pollyClient->DescribeVoices(describeVocies);

            if (outcome.IsSuccess())
            {
                SynthesizeSpeechRequest synthesizeSpeechRequest;
                synthesizeSpeechRequest.WithOutputFormat(OutputFormat::pcm)
                    .WithSampleRate("16000")
                    .WithTextType(TextType::text)
                    .WithText(text)
                    .WithVoiceId(outcome.GetResult().GetVoices()[1].GetId());

                m_pollyClient->SynthesizeSpeechAsync(synthesizeSpeechRequest, [this](const Polly::PollyClient* client, const Polly::Model::SynthesizeSpeechRequest& request,
                    const Polly::Model::SynthesizeSpeechOutcome& speechOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
                {OnPollySynthSpeechOutcomeRecieved(client, request, speechOutcome, context);});
            }

        }

        void TextToSpeechManager::OnPollySynthSpeechOutcomeRecieved(const Polly::PollyClient*, const Polly::Model::SynthesizeSpeechRequest&,
            const Polly::Model::SynthesizeSpeechOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) const
        {
            auto result = const_cast<Polly::Model::SynthesizeSpeechOutcome&>(outcome).GetResultWithOwnership();
            auto& stream = result.GetAudioStream();

            if (m_isInit)
            {
                std::streamsize amountRead(0);
                while (stream)
                {
                    char* buffer = Aws::NewArray<char>(BUFF_SIZE, CLASS_TAG);
                    stream.read(buffer, BUFF_SIZE);
                    auto read = stream.gcount();
                    WAVEHDR* waveHdr = Aws::New<WAVEHDR>(CLASS_TAG);
                    waveHdr->lpData = buffer;
                    waveHdr->dwBufferLength = static_cast<DWORD>(read);
                    waveHdr->dwFlags = 0;
                    waveHdr->dwLoops = 0;
                    waveHdr->dwUser = NULL;

                    auto res = waveOutPrepareHeader(m_waveOut, waveHdr, sizeof(WAVEHDR));

                    res = waveOutWrite(m_waveOut, waveHdr, sizeof(WAVEHDR));
                    amountRead += read;
                }
            }
        }
    }
}