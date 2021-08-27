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
  enum class Mpeg2DisplayRatio
  {
    NOT_SET,
    DISPLAYRATIO16X9,
    DISPLAYRATIO4X3
  };

namespace Mpeg2DisplayRatioMapper
{
AWS_MEDIALIVE_API Mpeg2DisplayRatio GetMpeg2DisplayRatioForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForMpeg2DisplayRatio(Mpeg2DisplayRatio value);
} // namespace Mpeg2DisplayRatioMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
