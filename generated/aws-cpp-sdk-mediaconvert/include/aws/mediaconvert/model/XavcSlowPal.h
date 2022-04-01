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
  enum class XavcSlowPal
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace XavcSlowPalMapper
{
AWS_MEDIACONVERT_API XavcSlowPal GetXavcSlowPalForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavcSlowPal(XavcSlowPal value);
} // namespace XavcSlowPalMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
