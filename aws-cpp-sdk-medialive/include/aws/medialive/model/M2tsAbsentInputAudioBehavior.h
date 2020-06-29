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
  enum class M2tsAbsentInputAudioBehavior
  {
    NOT_SET,
    DROP,
    ENCODE_SILENCE
  };

namespace M2tsAbsentInputAudioBehaviorMapper
{
AWS_MEDIALIVE_API M2tsAbsentInputAudioBehavior GetM2tsAbsentInputAudioBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsAbsentInputAudioBehavior(M2tsAbsentInputAudioBehavior value);
} // namespace M2tsAbsentInputAudioBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
