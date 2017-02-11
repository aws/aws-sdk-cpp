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

#include <aws/text-to-speech/PCMOutputDriver.h>
#include <pulse/simple.h>

namespace Aws
{
    namespace TextToSpeech
    {
        /**
         * PulseAudio implementation for PCM output.
         */
        class PulseAudioPCMOutputDriver : public PCMOutputDriver
        {
        public:
            PulseAudioPCMOutputDriver();
            virtual ~PulseAudioPCMOutputDriver();

            PulseAudioPCMOutputDriver(const PulseAudioPCMOutputDriver&) = delete;
            PulseAudioPCMOutputDriver& operator=(const PulseAudioPCMOutputDriver&) = delete;
            PulseAudioPCMOutputDriver(PulseAudioPCMOutputDriver&&) = delete;
            PulseAudioPCMOutputDriver& operator=(PulseAudioPCMOutputDriver&&) = delete;

            bool WriteBufferToDevice(const unsigned char* buffer, size_t bufferSize) override;
            Aws::Vector<DeviceInfo> EnumerateDevices() const override;
            void SetActiveDevice(const DeviceInfo& device, const CapabilityInfo& capabilities) override;
            const char* GetName() const override;

        private:
            void InitDevice();

            DeviceInfo m_activeDevice;
            pa_simple* m_driver;
            pa_sample_spec m_selectedCaps;
        };
    }
}
