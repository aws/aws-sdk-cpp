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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class SampleType
  {
    NOT_SET,
    CPU,
    MEMORY,
    THREADS,
    RX_RATE,
    TX_RATE,
    RX,
    TX,
    NATIVE_FRAMES,
    NATIVE_FPS,
    NATIVE_MIN_DRAWTIME,
    NATIVE_AVG_DRAWTIME,
    NATIVE_MAX_DRAWTIME,
    OPENGL_FRAMES,
    OPENGL_FPS,
    OPENGL_MIN_DRAWTIME,
    OPENGL_AVG_DRAWTIME,
    OPENGL_MAX_DRAWTIME
  };

namespace SampleTypeMapper
{
AWS_DEVICEFARM_API SampleType GetSampleTypeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForSampleType(SampleType value);
} // namespace SampleTypeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
