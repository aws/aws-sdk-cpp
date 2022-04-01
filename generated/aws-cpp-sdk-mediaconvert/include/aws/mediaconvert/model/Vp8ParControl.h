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
  enum class Vp8ParControl
  {
    NOT_SET,
    INITIALIZE_FROM_SOURCE,
    SPECIFIED
  };

namespace Vp8ParControlMapper
{
AWS_MEDIACONVERT_API Vp8ParControl GetVp8ParControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVp8ParControl(Vp8ParControl value);
} // namespace Vp8ParControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
