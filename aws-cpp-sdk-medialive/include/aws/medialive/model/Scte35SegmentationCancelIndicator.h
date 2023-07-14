/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class Scte35SegmentationCancelIndicator
  {
    NOT_SET,
    SEGMENTATION_EVENT_NOT_CANCELED,
    SEGMENTATION_EVENT_CANCELED
  };

namespace Scte35SegmentationCancelIndicatorMapper
{
AWS_MEDIALIVE_API Scte35SegmentationCancelIndicator GetScte35SegmentationCancelIndicatorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForScte35SegmentationCancelIndicator(Scte35SegmentationCancelIndicator value);
} // namespace Scte35SegmentationCancelIndicatorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
