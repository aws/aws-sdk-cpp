/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class M2tsAudioBufferModel
  {
    NOT_SET,
    DVB,
    ATSC
  };

namespace M2tsAudioBufferModelMapper
{
AWS_MEDIACONVERT_API M2tsAudioBufferModel GetM2tsAudioBufferModelForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM2tsAudioBufferModel(M2tsAudioBufferModel value);
} // namespace M2tsAudioBufferModelMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
