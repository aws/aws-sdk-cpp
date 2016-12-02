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

#include <aws/polly-to-output/PollyToOutput_EXPORTS.h>
#include <aws/polly-to-output/PCMOutputDriver.h>
#include <aws/polly/PollyClient.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <functional>
#include <mutex>

namespace Aws
{
    namespace PollyToOutput
    {
        typedef std::function<void(const char*, std::shared_ptr<Client::AsyncCallerContext>)> SendTextCompletedHandler;

        class AWS_POLLY_OUT_API TextToSpeechManager
        {
        public:
            TextToSpeechManager(const std::shared_ptr<Polly::PollyClient>& pollyClient);
            ~TextToSpeechManager();
            void SendTextToOutputDevice(const char* text, SendTextCompletedHandler);

            Aws::Vector<DeviceInfo> EnumerateDevices() const;
            void SetActiveDevice(const DeviceInfo&, const CapabilityInfo&);

        private:
            void OnPollySynthSpeechOutcomeRecieved(const Polly::PollyClient*, const Polly::Model::SynthesizeSpeechRequest&, 
                const Polly::Model::SynthesizeSpeechOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) const;
            
            std::shared_ptr<Polly::PollyClient> m_pollyClient;
            std::shared_ptr<PCMOutputDriver> m_driver;
            CapabilityInfo m_selectedCaps;
        };
    }
}