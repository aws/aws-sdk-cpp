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
  enum class H265SceneChangeDetect
  {
    NOT_SET,
    DISABLED,
    ENABLED,
    TRANSITION_DETECTION
  };

namespace H265SceneChangeDetectMapper
{
AWS_MEDIACONVERT_API H265SceneChangeDetect GetH265SceneChangeDetectForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265SceneChangeDetect(H265SceneChangeDetect value);
} // namespace H265SceneChangeDetectMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
