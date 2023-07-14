/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/text-to-speech/TextToSpeech_EXPORTS.h>
#include <aws/text-to-speech/PCMOutputDriver.h>
#include <aws/polly/PollyClient.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <functional>
#include <memory>
#include <mutex>

namespace Aws
{
    namespace TextToSpeech
    {
        /**
         * Callback for handling notifications that the SendTextToOutputDevice operation has finished.
         * @arg1 the text that was sent
         * @arg2 the outcome of the operation from the polly service.
         * @arg3 whether or not the audio stream was successfully sent to the audio driver. 
         */
        typedef std::function<void(const char*, const Polly::Model::SynthesizeSpeechOutcome&, bool)> SendTextCompletedHandler;

        typedef std::pair<DeviceInfo, std::shared_ptr<PCMOutputDriver>> OutputDevicePair;
        typedef Aws::Vector<OutputDevicePair> OutputDeviceList;

        /**
         * Maximum bytes size of audio to be sent to PCM drivers by TextToSpeechManager in one operation
         * with PCMOutputDriver::WriteBufferToDevice()
         */
        static const size_t BUFF_SIZE = 8192;

        /**
         * Manager for rendering text to the Polly service and then sending directly to an audio driver.
         * By default this uses our best guess at the correct drivers for you operating system.
         * On windows, this is the WaveOut API.
         * On Linux, this is PulseAudio
         * On Apple, this is CoreAudio.
         *
         * The drivers used can be arbitrarily overridden to send the stream anywhere you want. Simply provide your own driverFactory implementation.
         */
        class AWS_TEXT_TO_SPEECH_API TextToSpeechManager : public std::enable_shared_from_this<TextToSpeechManager>
        {
        public:
            /**
             * Create a TextToSpeechManager instance initialized with a polly client and a driver factory.
             * If driver factory is nullptr, we will create a default implementation for your operating system.
             */
            static std::shared_ptr<TextToSpeechManager> Create(const std::shared_ptr<Polly::PollyClient>& pollyClient,
                const std::shared_ptr<PCMOutputDriverFactory>& driverFactory = nullptr);
            
            ~TextToSpeechManager();
            TextToSpeechManager(const TextToSpeechManager&) = delete;
            TextToSpeechManager& operator=(const TextToSpeechManager&) = delete;
            TextToSpeechManager(TextToSpeechManager&&) = delete;
            TextToSpeechManager& operator=(TextToSpeechManager&&) = delete;
            
            /**
             * Sends @text to the Polly Service, once the audio stream is returned, the audio stream is sent to your audio driver.
             * @callback will be invoked once the entire operation has finished.
             */
            void SendTextToOutputDevice(const char* text, SendTextCompletedHandler callback);

            /**
             * Enumerate all devices and their capabilities from the installed drivers. On some operating systems,
             * the ability to choose devices is limited. On windows, this will be more detailed. Call this function
             * to determine what to pass to SetActiveDevice().
             */
            OutputDeviceList EnumerateDevices() const;

            /**
             * Sets the active driver (if there are multiple possbilities), the device to use for that driver, and the 
             * audio format to configure the device for. This format will also be used for calls to the Polly service.
             */
            void SetActiveDevice(const std::shared_ptr<PCMOutputDriver>&, const DeviceInfo&, const CapabilityInfo&);

            /**
             * Lists all available voices and their language. You can use this function to determine what to pass to the  SetActiveVoice()
             * function. The first member of the pair is the voice, the second is the language.
             */
            Aws::Vector<std::pair<Aws::String, Aws::String>> ListAvailableVoices() const;

            /**
             * Sets the active voice for use with the Polly Service.
             */
            void SetActiveVoice(const Aws::String& voice);

        private:
            TextToSpeechManager(const std::shared_ptr<Polly::PollyClient>& pollyClient,
                const std::shared_ptr<PCMOutputDriverFactory>& driverFactory);

            void OnPollySynthSpeechOutcomeRecieved(const Polly::PollyClient*, const Polly::Model::SynthesizeSpeechRequest&, 
                const Polly::Model::SynthesizeSpeechOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) const;
            
            Polly::PollyClient* m_pollyClient;
            std::shared_ptr<PCMOutputDriver> m_activeDriver;
            Aws::Vector<std::shared_ptr<PCMOutputDriver>> m_drivers;
            std::atomic<Polly::Model::VoiceId> m_activeVoice;
            CapabilityInfo m_selectedCaps;
            mutable std::mutex m_driverLock;
        };
    }
}
