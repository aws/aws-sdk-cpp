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
  enum class H264GopSizeUnits
  {
    NOT_SET,
    FRAMES,
    SECONDS
  };

namespace H264GopSizeUnitsMapper
{
AWS_MEDIALIVE_API H264GopSizeUnits GetH264GopSizeUnitsForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264GopSizeUnits(H264GopSizeUnits value);
} // namespace H264GopSizeUnitsMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
