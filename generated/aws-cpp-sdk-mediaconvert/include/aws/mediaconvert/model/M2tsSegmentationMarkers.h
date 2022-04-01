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
  enum class M2tsSegmentationMarkers
  {
    NOT_SET,
    NONE,
    RAI_SEGSTART,
    RAI_ADAPT,
    PSI_SEGSTART,
    EBP,
    EBP_LEGACY
  };

namespace M2tsSegmentationMarkersMapper
{
AWS_MEDIACONVERT_API M2tsSegmentationMarkers GetM2tsSegmentationMarkersForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM2tsSegmentationMarkers(M2tsSegmentationMarkers value);
} // namespace M2tsSegmentationMarkersMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
