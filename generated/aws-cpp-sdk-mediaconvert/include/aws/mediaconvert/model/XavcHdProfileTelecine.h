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
  enum class XavcHdProfileTelecine
  {
    NOT_SET,
    NONE,
    HARD
  };

namespace XavcHdProfileTelecineMapper
{
AWS_MEDIACONVERT_API XavcHdProfileTelecine GetXavcHdProfileTelecineForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavcHdProfileTelecine(XavcHdProfileTelecine value);
} // namespace XavcHdProfileTelecineMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
