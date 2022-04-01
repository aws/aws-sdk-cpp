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
  enum class Xavc4kProfileCodecProfile
  {
    NOT_SET,
    HIGH,
    HIGH_422
  };

namespace Xavc4kProfileCodecProfileMapper
{
AWS_MEDIACONVERT_API Xavc4kProfileCodecProfile GetXavc4kProfileCodecProfileForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavc4kProfileCodecProfile(Xavc4kProfileCodecProfile value);
} // namespace Xavc4kProfileCodecProfileMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
