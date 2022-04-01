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
  enum class HlsStreamInfResolution
  {
    NOT_SET,
    EXCLUDE,
    INCLUDE
  };

namespace HlsStreamInfResolutionMapper
{
AWS_MEDIALIVE_API HlsStreamInfResolution GetHlsStreamInfResolutionForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsStreamInfResolution(HlsStreamInfResolution value);
} // namespace HlsStreamInfResolutionMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
