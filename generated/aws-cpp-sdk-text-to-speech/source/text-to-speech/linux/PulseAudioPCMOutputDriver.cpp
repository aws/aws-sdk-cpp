/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/text-to-speech/linux/PulseAudioPCMOutputDriver.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <pulse/error.h>

using namespace Aws::Utils;

namespace Aws
{
    namespace TextToSpeech
    {
        static const char* APP_NAME = "Aws::Polly::TextToSpeech";
        static const char* CLASS_NAME = "PulseAudioPCMOutputDriver";

        PulseAudioPCMOutputDriver::PulseAudioPCMOutputDriver() : m_driver(0) {}

        PulseAudioPCMOutputDriver::~PulseAudioPCMOutputDriver()
        {
            if(m_driver)
            {
                pa_simple_free(m_driver);
            }
        }

        bool PulseAudioPCMOutputDriver::WriteBufferToDevice(const unsigned char* buffer, size_t size)
        {
            InitDevice();

            if(m_driver)
            {
                int error(-1);
                if(pa_simple_write(m_driver, buffer, size, &error) < 0)
                {
                    AWS_LOGSTREAM_ERROR(CLASS_NAME, " error writing buffer to output device " << pa_strerror(error));
                    return false;
                }

                return true;
            }

            return false;
        }

        Aws::Vector<DeviceInfo> PulseAudioPCMOutputDriver::EnumerateDevices() const
        {
            Aws::Vector<DeviceInfo> devices;

            DeviceInfo deviceInfo;
            deviceInfo.deviceId = "0";
            deviceInfo.deviceName = "default audio output device";

            CapabilityInfo capabilityInfo;
            capabilityInfo.channels = MONO;
            capabilityInfo.sampleRate = KHZ_16;
            capabilityInfo.sampleWidthBits = BIT_WIDTH_16;

            deviceInfo.capabilities.push_back(capabilityInfo);

            capabilityInfo.sampleRate = KHZ_8;
            deviceInfo.capabilities.push_back(capabilityInfo);

            devices.push_back(deviceInfo);

            return devices;
        }

        void PulseAudioPCMOutputDriver::SetActiveDevice(const DeviceInfo& deviceInfo, const CapabilityInfo& capabilityInfo)
        {
            m_activeDevice = deviceInfo;
            m_selectedCaps.channels = static_cast<uint8_t>(capabilityInfo.channels);
            m_selectedCaps.rate = static_cast<uint32_t>(capabilityInfo.sampleRate);
            m_selectedCaps.format = PA_SAMPLE_S16LE;

            if(m_driver)
            {
                pa_simple_free(m_driver);
                m_driver = nullptr;
            }

            InitDevice();
        }

        const char* PulseAudioPCMOutputDriver::GetName() const
        {
            return "Linux (Pulse Audio)";
        }

        void PulseAudioPCMOutputDriver::InitDevice()
        {
            if (!m_driver)
            {
                int errorCode = -1;

                m_driver = pa_simple_new(nullptr, APP_NAME, PA_STREAM_PLAYBACK, NULL, "playback", &m_selectedCaps, nullptr, nullptr, &errorCode);
                if(!m_driver)
                {
                    AWS_LOGSTREAM_ERROR(CLASS_NAME, " error initializing device " << pa_strerror(errorCode));
                }
            }
        }
    }
}
