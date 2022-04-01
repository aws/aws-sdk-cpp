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
  enum class InputDeblockFilter
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace InputDeblockFilterMapper
{
AWS_MEDIACONVERT_API InputDeblockFilter GetInputDeblockFilterForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForInputDeblockFilter(InputDeblockFilter value);
} // namespace InputDeblockFilterMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
