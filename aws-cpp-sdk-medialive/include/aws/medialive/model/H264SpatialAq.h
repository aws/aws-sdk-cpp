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
  enum class H264SpatialAq
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H264SpatialAqMapper
{
AWS_MEDIALIVE_API H264SpatialAq GetH264SpatialAqForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264SpatialAq(H264SpatialAq value);
} // namespace H264SpatialAqMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
