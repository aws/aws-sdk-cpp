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
  enum class H264TemporalAq
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H264TemporalAqMapper
{
AWS_MEDIALIVE_API H264TemporalAq GetH264TemporalAqForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264TemporalAq(H264TemporalAq value);
} // namespace H264TemporalAqMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
