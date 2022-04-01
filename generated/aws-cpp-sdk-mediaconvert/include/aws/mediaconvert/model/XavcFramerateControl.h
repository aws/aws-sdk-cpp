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
  enum class XavcFramerateControl
  {
    NOT_SET,
    INITIALIZE_FROM_SOURCE,
    SPECIFIED
  };

namespace XavcFramerateControlMapper
{
AWS_MEDIACONVERT_API XavcFramerateControl GetXavcFramerateControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavcFramerateControl(XavcFramerateControl value);
} // namespace XavcFramerateControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
