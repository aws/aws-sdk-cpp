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
  enum class H264SubGopLength
  {
    NOT_SET,
    DYNAMIC,
    FIXED
  };

namespace H264SubGopLengthMapper
{
AWS_MEDIALIVE_API H264SubGopLength GetH264SubGopLengthForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264SubGopLength(H264SubGopLength value);
} // namespace H264SubGopLengthMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
