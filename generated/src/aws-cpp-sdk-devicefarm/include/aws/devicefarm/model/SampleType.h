/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
