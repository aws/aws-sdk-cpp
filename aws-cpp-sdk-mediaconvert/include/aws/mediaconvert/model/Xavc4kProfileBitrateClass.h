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
  enum class Xavc4kProfileBitrateClass
  {
    NOT_SET,
    BITRATE_CLASS_100,
    BITRATE_CLASS_140,
    BITRATE_CLASS_200
  };

namespace Xavc4kProfileBitrateClassMapper
{
AWS_MEDIACONVERT_API Xavc4kProfileBitrateClass GetXavc4kProfileBitrateClassForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavc4kProfileBitrateClass(Xavc4kProfileBitrateClass value);
} // namespace Xavc4kProfileBitrateClassMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
