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
  enum class MxfProfile
  {
    NOT_SET,
    D_10,
    XDCAM,
    OP1A
  };

namespace MxfProfileMapper
{
AWS_MEDIACONVERT_API MxfProfile GetMxfProfileForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMxfProfile(MxfProfile value);
} // namespace MxfProfileMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
