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

#include <aws/polly-to-output/PCMOutputDriver.h>

#ifdef WAVE_OUT
#include <aws/polly-to-output/windows/WaveOutPCMOutputDriver.h>
#elif PULSE
#include <aws/polly-to-output/linux/PulseAudioPCMOutputDriver.h>
#endif

namespace Aws
{
    namespace PollyToOutput
    {
        static const char* CLASS_TAG = "DefaultPCMOutputDriverFactory";

        class DefaultPCMOutputDriverFactory : public PCMOutputDriverFactory
        {
        public:
            Aws::Vector<std::shared_ptr<PCMOutputDriver>> LoadDrivers() const
            {
                Aws::Vector<std::shared_ptr<PCMOutputDriver>> drivers;
#ifdef WAVE_OUT
                drivers.push_back(Aws::MakeShared<WaveOutPCMOutputDriver>(CLASS_TAG));
#elif PULSE
                drivers.push_back(Aws::MakeShared<PulseAudioPCMOutputDriver>(CLASS_TAG));
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