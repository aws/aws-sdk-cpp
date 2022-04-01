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
  enum class M2tsAudioStreamType
  {
    NOT_SET,
    ATSC,
    DVB
  };

namespace M2tsAudioStreamTypeMapper
{
AWS_MEDIALIVE_API M2tsAudioStreamType GetM2tsAudioStreamTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsAudioStreamType(M2tsAudioStreamType value);
} // namespace M2tsAudioStreamTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
