﻿/**
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
  enum class PresetListBy
  {
    NOT_SET,
    NAME,
    CREATION_DATE,
    SYSTEM
  };

namespace PresetListByMapper
{
AWS_MEDIACONVERT_API PresetListBy GetPresetListByForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForPresetListBy(PresetListBy value);
} // namespace PresetListByMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
