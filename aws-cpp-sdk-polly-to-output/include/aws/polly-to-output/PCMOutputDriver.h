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
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
    namespace PollyToOutput
    {
        struct CapabilityInfo
        {
            CapabilityInfo() : channels(1), sampleRate(16000), sampleWidthBits(16) {}

            unsigned channels;
            size_t sampleRate;
            unsigned sampleWidthBits;
        };

        struct DeviceInfo
        {
            Aws::String deviceName;
            Aws::String deviceId;
            Aws::Vector<CapabilityInfo> capabilities;
        };

        class AWS_POLLY_OUT_API PCMOutputDriver
        {
        public:
            virtual void WriteBufferToDevice(const unsigned char*, size_t) = 0;
            virtual Aws::Vector<DeviceInfo> EnumerateDevices() const = 0;
            virtual void SetActiveDevice(const DeviceInfo&, const CapabilityInfo&) = 0;
        };
    }
}
