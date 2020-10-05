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
  enum class Vc3FramerateControl
  {
    NOT_SET,
    INITIALIZE_FROM_SOURCE,
    SPECIFIED
  };

namespace Vc3FramerateControlMapper
{
AWS_MEDIACONVERT_API Vc3FramerateControl GetVc3FramerateControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVc3FramerateControl(Vc3FramerateControl value);
} // namespace Vc3FramerateControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
