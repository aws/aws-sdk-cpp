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

#include <aws/text-to-speech/PCMOutputDriver.h>
#include <aws/core/utils/logging/LogMacros.h>

#ifdef WAVE_OUT
#include <aws/text-to-speech/windows/WaveOutPCMOutputDriver.h>
#elif PULSE
#include <aws/text-to-speech/linux/PulseAudioPCMOutputDriver.h>
#elif CORE_AUDIO
#include <aws/text-to-speech/apple/CoreAudioPCMOutputDriver.h>
#endif

namespace Aws
{
    namespace TextToSpeech
    {
        PCMOutputDriver::~PCMOutputDriver() {}

        static const char* CLASS_TAG = "DefaultPCMOutputDriverFactory";

        class DefaultPCMOutputDriverFactory : public PCMOutputDriverFactory
        {
        public:
            Aws::Vector<std::shared_ptr<PCMOutputDriver>> LoadDrivers() const
            {
                Aws::Vector<std::shared_ptr<PCMOutputDriver>> drivers;
#ifdef WAVE_OUT
                AWS_LOGSTREAM_INFO(CLASS_TAG, "Adding WaveOut Audio Driver.");
                drivers.push_back(Aws::MakeShared<WaveOutPCMOutputDriver>(CLASS_TAG));
#elif PULSE
                AWS_LOGSTREAM_INFO(CLASS_TAG, "Adding PulseAudio Audio Driver.");
                drivers.push_back(Aws::MakeShared<PulseAudioPCMOutputDriver>(CLASS_TAG));
#elif CORE_AUDIO
                AWS_LOGSTREAM_INFO(CLASS_TAG, "Adding CoreAudio Audio Driver.");
                drivers.push_back(Aws::MakeShared<CoreAudioPCMOutputDriver>(CLASS_TAG));
#endif
                return drivers;
            }
        };

        std::shared_ptr<PCMOutputDriverFactory> DefaultPCMOutputDriverFactoryInitFn()
        {
            return Aws::MakeShared<DefaultPCMOutputDriverFactory>(CLASS_TAG);
        }
    }
}