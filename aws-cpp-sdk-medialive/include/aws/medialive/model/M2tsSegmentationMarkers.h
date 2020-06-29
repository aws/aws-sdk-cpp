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
  enum class M2tsSegmentationMarkers
  {
    NOT_SET,
    EBP,
    EBP_LEGACY,
    NONE,
    PSI_SEGSTART,
    RAI_ADAPT,
    RAI_SEGSTART
  };

namespace M2tsSegmentationMarkersMapper
{
AWS_MEDIALIVE_API M2tsSegmentationMarkers GetM2tsSegmentationMarkersForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsSegmentationMarkers(M2tsSegmentationMarkers value);
} // namespace M2tsSegmentationMarkersMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
