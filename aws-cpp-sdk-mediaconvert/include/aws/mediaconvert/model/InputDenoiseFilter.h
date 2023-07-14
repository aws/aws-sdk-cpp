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
  enum class InputDenoiseFilter
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace InputDenoiseFilterMapper
{
AWS_MEDIACONVERT_API InputDenoiseFilter GetInputDenoiseFilterForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForInputDenoiseFilter(InputDenoiseFilter value);
} // namespace InputDenoiseFilterMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
