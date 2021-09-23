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
  enum class DashIsoImageBasedTrickPlay
  {
    NOT_SET,
    NONE,
    THUMBNAIL,
    THUMBNAIL_AND_FULLFRAME,
    ADVANCED
  };

namespace DashIsoImageBasedTrickPlayMapper
{
AWS_MEDIACONVERT_API DashIsoImageBasedTrickPlay GetDashIsoImageBasedTrickPlayForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDashIsoImageBasedTrickPlay(DashIsoImageBasedTrickPlay value);
} // namespace DashIsoImageBasedTrickPlayMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
