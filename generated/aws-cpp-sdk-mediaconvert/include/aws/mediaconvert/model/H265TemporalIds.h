/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class H265TemporalIds
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H265TemporalIdsMapper
{
AWS_MEDIACONVERT_API H265TemporalIds GetH265TemporalIdsForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265TemporalIds(H265TemporalIds value);
} // namespace H265TemporalIdsMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
