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
  enum class HlsOutputSelection
  {
    NOT_SET,
    MANIFESTS_AND_SEGMENTS,
    SEGMENTS_ONLY
  };

namespace HlsOutputSelectionMapper
{
AWS_MEDIACONVERT_API HlsOutputSelection GetHlsOutputSelectionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsOutputSelection(HlsOutputSelection value);
} // namespace HlsOutputSelectionMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
