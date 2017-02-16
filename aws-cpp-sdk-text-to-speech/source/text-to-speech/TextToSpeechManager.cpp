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

#include <aws/text-to-speech/TextToSpeechManager.h>
#include <aws/polly/model/SynthesizeSpeechRequest.h>
#include <aws/polly/model/DescribeVoicesRequest.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::Polly;
using namespace Aws::Polly::Model;
using namespace Aws::Utils;

namespace Aws
{
    namespace TextToSpeech
    {
        static const size_t BUFF_SIZE = 8192;
        static const char* CLASS_TAG = "TextToSpeechManager";

        struct SendTextCompletionHandlerCallbackContext : public Aws::Client::AsyncCallerContext
        {
            SendTextCompletedHandler callback;
        };

        TextToSpeechManager::TextToSpeechManager(const std::shared_ptr<Polly::PollyClient>& pollyClient, 
            const std::shared_ptr<PCMOutputDriverFactory>& driverFactory) 
            : m_pollyClient(pollyClient), m_activeVoice(VoiceId::Kimberly)
        {
            m_drivers = (driverFactory ? driverFactory : DefaultPCMOutputDriverFactoryInitFn())->LoadDrivers();
        }

        TextToSpeechManager::~TextToSpeechManager()
        {
        }

        void TextToSpeechManager::SendTextToOutputDevice(const char* text, SendTextCompletedHandler handler)
        {
            if (!m_activeDriver)
            {
                auto&& devices = EnumerateDevices();
                assert(devices.size() > 0);

                AWS_LOGSTREAM_INFO(CLASS_TAG, "No device has been configured. Defaulting to the first device available.");
                SetActiveDevice(devices.front().second, devices.front().first, devices.front().first.capabilities.front());
            }

            SynthesizeSpeechRequest synthesizeSpeechRequest;
            synthesizeSpeechRequest.WithOutputFormat(OutputFormat::pcm)
                .WithSampleRate(StringUtils::to_string(m_selectedCaps.sampleRate))
                .WithTextType(TextType::text)
                .WithText(text)
                .WithVoiceId(m_activeVoice);

            auto context = Aws::MakeShared<SendTextCompletionHandlerCallbackContext>(CLASS_TAG);
            context->callback = handler;

            m_pollyClient->SynthesizeSpeechAsync(synthesizeSpeechRequest, [this](const Polly::PollyClient* client, const Polly::Model::SynthesizeSpeechRequest& request,
                const Polly::Model::SynthesizeSpeechOutcome& speechOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
            {OnPollySynthSpeechOutcomeRecieved(client, request, speechOutcome, context);}, context);
        }

		OutputDeviceList TextToSpeechManager::EnumerateDevices() const
        {
			OutputDeviceList deviceDriverList;

            for (auto& driver : m_drivers)
            {
				std::lock_guard<std::mutex> m(m_driverLock);
                for (auto& deviceInfo : driver->EnumerateDevices())
                {
                    AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Adding device " << deviceInfo.deviceName << " for driver " << driver->GetName());
					OutputDevicePair device(deviceInfo, driver);
                    deviceDriverList.push_back(device);
                }
            }
            
            return deviceDriverList;
        }

        void TextToSpeechManager::SetActiveDevice(const std::shared_ptr<PCMOutputDriver>& driver, const DeviceInfo& device, const CapabilityInfo& caps)
        {
            std::lock_guard<std::mutex> m(m_driverLock);
            AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Configuring device " << device.deviceName << " for driver " << driver->GetName() 
                << " as the current active device.");
            driver->SetActiveDevice(device, caps);
            m_activeDriver = driver;
            m_selectedCaps = caps;
        }

        Aws::Vector<std::pair<Aws::String, Aws::String>> TextToSpeechManager::ListAvailableVoices() const
        {
            Aws::Vector<std::pair<Aws::String, Aws::String>> m_voices;

            DescribeVoicesRequest describeVoices;
            
            auto voicesOutcome = m_pollyClient->DescribeVoices(describeVoices);
            if (voicesOutcome.IsSuccess())
            {
                for (auto& voice : voicesOutcome.GetResult().GetVoices())
                {
                    m_voices.push_back(std::pair<Aws::String, Aws::String>(voice.GetName(), voice.GetLanguageName()));
                }
            }
            else
            {
                AWS_LOGSTREAM_ERROR(CLASS_TAG, "Error while fetching voices. " << voicesOutcome.GetError().GetExceptionName() 
                    << " " << voicesOutcome.GetError().GetMessage());
            }

            return m_voices;
        }

        void TextToSpeechManager::SetActiveVoice(const Aws::String& voice)
        {
            AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Setting active voice as: " << voice);
            m_activeVoice = VoiceIdMapper::GetVoiceIdForName(voice);
        }

        void TextToSpeechManager::OnPollySynthSpeechOutcomeRecieved(const Polly::PollyClient*, const Polly::Model::SynthesizeSpeechRequest& request,
            const Polly::Model::SynthesizeSpeechOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
        {
            bool played(false);

            if(outcome.IsSuccess())
            {
                auto result = const_cast<Polly::Model::SynthesizeSpeechOutcome&>(outcome).GetResultWithOwnership();
                auto& stream = result.GetAudioStream();
                AWS_LOGSTREAM_TRACE(CLASS_TAG, "Audio retrieved from Polly. " << result.GetContentType() << " with " 
                    << result.GetRequestCharacters() << " characters syntesized");

                std::streamsize amountRead(0);
                unsigned char buffer[BUFF_SIZE];

                std::lock_guard<std::mutex> m(m_driverLock);
                m_activeDriver->Prime();
                bool successfullyPlayed(true);
                while (stream && successfullyPlayed)
                {
                    stream.read((char*) buffer, BUFF_SIZE);
                    auto read = stream.gcount();
                    AWS_LOGSTREAM_TRACE(CLASS_TAG, "Writing " << read << " bytes to device.");

                    successfullyPlayed = m_activeDriver->WriteBufferToDevice(buffer, (std::size_t)read);
                    amountRead += read;
                    played = successfullyPlayed;
                }

                m_activeDriver->Flush();
            }
            else
            {
                AWS_LOGSTREAM_ERROR(CLASS_TAG, "Error while fetching audio from polly. " << outcome.GetError().GetExceptionName() << " "
                    << outcome.GetError().GetMessage());
            }

            auto callback = ((const std::shared_ptr<SendTextCompletionHandlerCallbackContext>&)context)->callback;
            if (callback)
            {
                callback(request.GetText().c_str(), outcome, played);
            }
        }
    }
}
