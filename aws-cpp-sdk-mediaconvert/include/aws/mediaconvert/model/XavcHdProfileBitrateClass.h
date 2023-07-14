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
  enum class XavcHdProfileBitrateClass
  {
    NOT_SET,
    BITRATE_CLASS_25,
    BITRATE_CLASS_35,
    BITRATE_CLASS_50
  };

namespace XavcHdProfileBitrateClassMapper
{
AWS_MEDIACONVERT_API XavcHdProfileBitrateClass GetXavcHdProfileBitrateClassForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavcHdProfileBitrateClass(XavcHdProfileBitrateClass value);
} // namespace XavcHdProfileBitrateClassMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
