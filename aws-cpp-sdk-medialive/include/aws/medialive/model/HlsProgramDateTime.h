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
  enum class HlsProgramDateTime
  {
    NOT_SET,
    EXCLUDE,
    INCLUDE
  };

namespace HlsProgramDateTimeMapper
{
AWS_MEDIALIVE_API HlsProgramDateTime GetHlsProgramDateTimeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsProgramDateTime(HlsProgramDateTime value);
} // namespace HlsProgramDateTimeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
