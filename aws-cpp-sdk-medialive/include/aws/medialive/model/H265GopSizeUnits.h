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
  enum class H265GopSizeUnits
  {
    NOT_SET,
    FRAMES,
    SECONDS
  };

namespace H265GopSizeUnitsMapper
{
AWS_MEDIALIVE_API H265GopSizeUnits GetH265GopSizeUnitsForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265GopSizeUnits(H265GopSizeUnits value);
} // namespace H265GopSizeUnitsMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
