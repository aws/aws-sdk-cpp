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
  enum class ImscAccessibilitySubs
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace ImscAccessibilitySubsMapper
{
AWS_MEDIACONVERT_API ImscAccessibilitySubs GetImscAccessibilitySubsForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForImscAccessibilitySubs(ImscAccessibilitySubs value);
} // namespace ImscAccessibilitySubsMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
