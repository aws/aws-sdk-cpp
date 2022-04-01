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
  enum class DolbyVisionProfile
  {
    NOT_SET,
    PROFILE_5
  };

namespace DolbyVisionProfileMapper
{
AWS_MEDIACONVERT_API DolbyVisionProfile GetDolbyVisionProfileForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDolbyVisionProfile(DolbyVisionProfile value);
} // namespace DolbyVisionProfileMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
