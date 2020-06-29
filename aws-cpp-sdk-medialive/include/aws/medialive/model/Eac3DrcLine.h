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
  enum class Eac3DrcLine
  {
    NOT_SET,
    FILM_LIGHT,
    FILM_STANDARD,
    MUSIC_LIGHT,
    MUSIC_STANDARD,
    NONE,
    SPEECH
  };

namespace Eac3DrcLineMapper
{
AWS_MEDIALIVE_API Eac3DrcLine GetEac3DrcLineForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEac3DrcLine(Eac3DrcLine value);
} // namespace Eac3DrcLineMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
