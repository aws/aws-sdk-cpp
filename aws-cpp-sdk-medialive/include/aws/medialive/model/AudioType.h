/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class AudioType
  {
    NOT_SET,
    CLEAN_EFFECTS,
    HEARING_IMPAIRED,
    UNDEFINED,
    VISUAL_IMPAIRED_COMMENTARY
  };

namespace AudioTypeMapper
{
AWS_MEDIALIVE_API AudioType GetAudioTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAudioType(AudioType value);
} // namespace AudioTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
