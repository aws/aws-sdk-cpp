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
  enum class ImscStylePassthrough
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ImscStylePassthroughMapper
{
AWS_MEDIACONVERT_API ImscStylePassthrough GetImscStylePassthroughForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForImscStylePassthrough(ImscStylePassthrough value);
} // namespace ImscStylePassthroughMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
