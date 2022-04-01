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
  enum class DvbddsHandling
  {
    NOT_SET,
    NONE,
    SPECIFIED,
    NO_DISPLAY_WINDOW
  };

namespace DvbddsHandlingMapper
{
AWS_MEDIACONVERT_API DvbddsHandling GetDvbddsHandlingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDvbddsHandling(DvbddsHandling value);
} // namespace DvbddsHandlingMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
