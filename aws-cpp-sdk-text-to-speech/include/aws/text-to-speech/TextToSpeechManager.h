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

#pragma once

#include <aws/text-to-speech/TextToSpeech_EXPORTS.h>
#include <aws/text-to-speech/PCMOutputDriver.h>
#include <aws/polly/PollyClient.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <functional>
#include <mutex>

namespace Aws
{
    namespace TextToSpeech
    {
        typedef std::function<void(const char*, std::shared_ptr<Client::AsyncCallerContext>)> SendTextCompletedHandler;

        class AWS_TEXT_TO_SPEECH_API TextToSpeechManager
        {
        public:
            TextToSpeechManager(const std::shared_ptr<Polly::PollyClient>& pollyClient, const std::shared_ptr<PCMOutputDriverFactory>& driverFactory = nullptr);
            ~TextToSpeechManager();
            void SendTextToOutputDevice(const char* text, SendTextCompletedHandler);

            Aws::Vector<std::pair<DeviceInfo, std::shared_ptr<PCMOutputDriver>>> EnumerateDevices() const;
            void SetActiveDevice(const std::shared_ptr<PCMOutputDriver>&, const DeviceInfo&, const CapabilityInfo&);

            Aws::Vector<std::pair<Aws::String, Aws::String>> ListAvailableVoices() const;
            void SetActiveVoice(const Aws::String& voice);

        private:
            void OnPollySynthSpeechOutcomeRecieved(const Polly::PollyClient*, const Polly::Model::SynthesizeSpeechRequest&, 
                const Polly::Model::SynthesizeSpeechOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) const;
            
            std::shared_ptr<Polly::PollyClient> m_pollyClient;
            std::shared_ptr<PCMOutputDriver> m_activeDriver;
            Aws::Vector<std::shared_ptr<PCMOutputDriver>> m_drivers;
            Polly::Model::VoiceId m_activeVoice;
            CapabilityInfo m_selectedCaps;
            mutable std::mutex m_driverLock;
        };
    }
}