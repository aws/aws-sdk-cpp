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
  enum class DashIsoMpdProfile
  {
    NOT_SET,
    MAIN_PROFILE,
    ON_DEMAND_PROFILE
  };

namespace DashIsoMpdProfileMapper
{
AWS_MEDIACONVERT_API DashIsoMpdProfile GetDashIsoMpdProfileForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDashIsoMpdProfile(DashIsoMpdProfile value);
} // namespace DashIsoMpdProfileMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
