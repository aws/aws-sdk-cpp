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

#include <aws/text-to-speech/apple/CoreAudioPCMOutputDriver.h>
#include <iostream>

namespace Aws
{
    namespace TextToSpeech
    {

        CoreAudioPCMOutputDriver::CoreAudioPCMOutputDriver() : m_audioQueue(nullptr), m_maxBufferSize(4096), m_bufferCount(3)
        {
        }

        CoreAudioPCMOutputDriver::~CoreAudioPCMOutputDriver()
        {
            CleanUp();
        }

        void CoreAudioPCMOutputDriver::WriteBufferToDevice(const unsigned char* buffer , size_t size)
        {
            InitDevice();

            if(m_audioQueue)
            {
                for(size_t i = 0; i < size; i += m_maxBufferSize)
                {
                    std::unique_lock<std::mutex> m(m_queueBufferLock);
                    while(m_bufferQueue.size() == 0)
                    {
                        m_queueReadySemaphore.wait(m, [this](){ return m_bufferQueue.size() > 0;});
                    }

                    if(m_bufferQueue.size() > 0)
                    {
                        AudioQueueBufferRef audioBuffer = m_bufferQueue.front();
                        m_bufferQueue.pop();

                        auto toCpy = std::min(m_maxBufferSize, size - i);
                        memcpy(audioBuffer->mAudioData, buffer + i, toCpy);
                        audioBuffer->mAudioDataByteSize = static_cast<UInt32>(toCpy);
                        AudioQueueEnqueueBuffer(m_audioQueue, audioBuffer, 0, nullptr);
                    }
                }
            }
        }

        Aws::Vector<DeviceInfo> CoreAudioPCMOutputDriver::EnumerateDevices() const
        {
            DeviceInfo devInfo;
            devInfo.deviceId = "default";
            devInfo.deviceName = "Default Audio Output Queue";

            CapabilityInfo caps;
            caps.sampleWidthBits = 16;
            caps.channels = 1;
            caps.sampleRate = 16000;

            devInfo.capabilities.push_back(caps);
            caps.sampleRate = 8000;
            devInfo.capabilities.push_back(caps);

            return Aws::Vector<DeviceInfo>({devInfo});
        }

        void CoreAudioPCMOutputDriver::SetActiveDevice(const DeviceInfo&, const CapabilityInfo& caps)
        {
            m_selectedCaps.mSampleRate = caps.sampleRate;
            m_selectedCaps.mFormatID = kAudioFormatLinearPCM;
            m_selectedCaps.mFormatFlags = kLinearPCMFormatFlagIsSignedInteger | kAudioFormatFlagIsPacked;
            m_selectedCaps.mBitsPerChannel   = caps.sampleWidthBits;
            m_selectedCaps.mChannelsPerFrame = caps.channels;
            m_selectedCaps.mBytesPerFrame    = caps.channels * (caps.sampleWidthBits / 8);
            m_selectedCaps.mFramesPerPacket  = 1;
            m_selectedCaps.mBytesPerPacket   = m_selectedCaps.mBytesPerFrame * m_selectedCaps.mFramesPerPacket;
            m_selectedCaps.mReserved = 0;

            CleanUp();

            InitDevice();
        }

        const char* CoreAudioPCMOutputDriver::GetName() const
        {
            return "CoreAudio (Apple Platform)";
        }

        void CoreAudioPCMOutputDriver::Prime()
        {
            AudioQueueStart(m_audioQueue, nullptr);
        }

        void CoreAudioPCMOutputDriver::Flush()
        {
            AudioQueueFlush(m_audioQueue);
            AudioQueueStop(m_audioQueue, false);
        }

        void CoreAudioPCMOutputDriver::InitDevice()
        {
            if(!m_audioQueue)
            {
                AudioQueueNewOutput(&m_selectedCaps, &OnBufferReady, this, nullptr, kCFRunLoopCommonModes, 0, &m_audioQueue);

                for (size_t i = 0; i < m_bufferCount; i++)
                {
                    AudioQueueBufferRef buf;
                    AudioQueueAllocateBuffer(m_audioQueue, static_cast<UInt32>(m_maxBufferSize), &buf);
                    m_bufferQueue.push(buf);
                }
            }
        }

        void CoreAudioPCMOutputDriver::CleanUp()
        {
            if(m_audioQueue)
            {
                //make sure all buffers finish processing so we can delete them.
                AudioQueueStop(m_audioQueue, false);

                std::lock_guard<std::mutex> m(m_queueBufferLock);
                while(m_bufferQueue.size() > 0)
                {
                    AudioQueueFreeBuffer(m_audioQueue, m_bufferQueue.front());
                    m_bufferQueue.pop();
                }

                AudioQueueDispose(m_audioQueue, false);
                m_audioQueue = nullptr;
            }
        }

        void CoreAudioPCMOutputDriver::OnBufferReady(void *custom_data, AudioQueueRef, AudioQueueBufferRef buffer)
        {
            CoreAudioPCMOutputDriver* driver = (CoreAudioPCMOutputDriver*)custom_data;

            {
                std::unique_lock<std::mutex> m(driver->m_queueBufferLock);
                driver->m_bufferQueue.push(buffer);
            }
            driver->m_queueReadySemaphore.notify_one();
        }
    }
}
