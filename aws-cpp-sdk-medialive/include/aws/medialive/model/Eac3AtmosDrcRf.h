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
  enum class Eac3AtmosDrcRf
  {
    NOT_SET,
    FILM_LIGHT,
    FILM_STANDARD,
    MUSIC_LIGHT,
    MUSIC_STANDARD,
    NONE,
    SPEECH
  };

namespace Eac3AtmosDrcRfMapper
{
AWS_MEDIALIVE_API Eac3AtmosDrcRf GetEac3AtmosDrcRfForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEac3AtmosDrcRf(Eac3AtmosDrcRf value);
} // namespace Eac3AtmosDrcRfMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
