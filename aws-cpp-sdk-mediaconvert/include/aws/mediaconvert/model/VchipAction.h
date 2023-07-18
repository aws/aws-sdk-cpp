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
  enum class VchipAction
  {
    NOT_SET,
    PASSTHROUGH,
    STRIP
  };

namespace VchipActionMapper
{
AWS_MEDIACONVERT_API VchipAction GetVchipActionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVchipAction(VchipAction value);
} // namespace VchipActionMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
