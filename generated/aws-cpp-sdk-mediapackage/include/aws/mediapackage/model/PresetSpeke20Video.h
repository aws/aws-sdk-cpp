/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{
  enum class PresetSpeke20Video
  {
    NOT_SET,
    PRESET_VIDEO_1
  };

namespace PresetSpeke20VideoMapper
{
AWS_MEDIAPACKAGE_API PresetSpeke20Video GetPresetSpeke20VideoForName(const Aws::String& name);

AWS_MEDIAPACKAGE_API Aws::String GetNameForPresetSpeke20Video(PresetSpeke20Video value);
} // namespace PresetSpeke20VideoMapper
} // namespace Model
} // namespace MediaPackage
} // namespace Aws
