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
  enum class ProresCodecProfile
  {
    NOT_SET,
    APPLE_PRORES_422,
    APPLE_PRORES_422_HQ,
    APPLE_PRORES_422_LT,
    APPLE_PRORES_422_PROXY
  };

namespace ProresCodecProfileMapper
{
AWS_MEDIACONVERT_API ProresCodecProfile GetProresCodecProfileForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForProresCodecProfile(ProresCodecProfile value);
} // namespace ProresCodecProfileMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
