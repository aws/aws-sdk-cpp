/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
