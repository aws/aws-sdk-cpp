/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFV2
{
namespace Model
{
  enum class Platform
  {
    NOT_SET,
    IOS,
    ANDROID_
  };

namespace PlatformMapper
{
AWS_WAFV2_API Platform GetPlatformForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForPlatform(Platform value);
} // namespace PlatformMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
