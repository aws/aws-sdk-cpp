/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class AudioMuxType
  {
    NOT_SET,
    AudioOnly,
    AudioWithActiveSpeakerVideo
  };

namespace AudioMuxTypeMapper
{
AWS_CHIME_API AudioMuxType GetAudioMuxTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForAudioMuxType(AudioMuxType value);
} // namespace AudioMuxTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
