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
  enum class XavcAdaptiveQuantization
  {
    NOT_SET,
    OFF,
    AUTO,
    LOW,
    MEDIUM,
    HIGH,
    HIGHER,
    MAX
  };

namespace XavcAdaptiveQuantizationMapper
{
AWS_MEDIACONVERT_API XavcAdaptiveQuantization GetXavcAdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavcAdaptiveQuantization(XavcAdaptiveQuantization value);
} // namespace XavcAdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
