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
  enum class DolbyVisionMapping
  {
    NOT_SET,
    HDR10_NOMAP,
    HDR10_1000
  };

namespace DolbyVisionMappingMapper
{
AWS_MEDIACONVERT_API DolbyVisionMapping GetDolbyVisionMappingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDolbyVisionMapping(DolbyVisionMapping value);
} // namespace DolbyVisionMappingMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
