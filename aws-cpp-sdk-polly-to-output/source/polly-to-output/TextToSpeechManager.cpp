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
#include <aws/core/utils/StringUtils.h>
#include <aws/polly-to-output/windows/WaveOutPCMOutputDriver.h>
#include <windows.h>

#include <iostream>


using namespace Aws::Polly;
using namespace Aws::Polly::Model;
using namespace Aws::Utils;

namespace Aws
{
    namespace PollyToOutput
    {
        static const char* CLASS_TAG = "TextToSpeechManager";
        static const size_t BUFF_SIZE = 1024;

        TextToSpeechManager::TextToSpeechManager(const std::shared_ptr<Polly::PollyClient>& pollyClient) : m_pollyClient(pollyClient)
        {
            //temporary
            m_driver = Aws::MakeShared<WaveOutPCMOutputDriver>(CLASS_TAG);
        }

        TextToSpeechManager::~TextToSpeechManager()
        {
        }

        void TextToSpeechManager::SendTextToOutputDevice(const char* text, SendTextCompletedHandler)
        {
            SynthesizeSpeechRequest synthesizeSpeechRequest;
            synthesizeSpeechRequest.WithOutputFormat(OutputFormat::pcm)
                .WithSampleRate(StringUtils::to_string(m_selectedCaps.sampleRate))
                .WithTextType(TextType::text)
                .WithText(text)
                .WithVoiceId(VoiceId::Salli);

            m_pollyClient->SynthesizeSpeechAsync(synthesizeSpeechRequest, [this](const Polly::PollyClient* client, const Polly::Model::SynthesizeSpeechRequest& request,
                const Polly::Model::SynthesizeSpeechOutcome& speechOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
            {OnPollySynthSpeechOutcomeRecieved(client, request, speechOutcome, context);});
        }

        Aws::Vector<DeviceInfo> TextToSpeechManager::EnumerateDevices() const
        {
            return m_driver->EnumerateDevices();
        }

        void TextToSpeechManager::SetActiveDevice(const DeviceInfo& device, const CapabilityInfo& caps)
        {
            m_driver->SetActiveDevice(device, caps);
            m_selectedCaps = caps;
        }

        void TextToSpeechManager::OnPollySynthSpeechOutcomeRecieved(const Polly::PollyClient*, const Polly::Model::SynthesizeSpeechRequest&,
            const Polly::Model::SynthesizeSpeechOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) const
        {
            auto result = const_cast<Polly::Model::SynthesizeSpeechOutcome&>(outcome).GetResultWithOwnership();
            auto& stream = result.GetAudioStream();

            std::streamsize amountRead(0);
            unsigned char buffer[BUFF_SIZE];

            while (stream)
            {
                stream.read((char*)buffer, BUFF_SIZE);
                auto read = stream.gcount();
                m_driver->WriteBufferToDevice(buffer, read);
                amountRead += read;
            }
        }
    }
}
