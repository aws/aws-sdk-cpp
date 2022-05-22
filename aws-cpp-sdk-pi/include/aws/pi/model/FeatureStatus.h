/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PI
{
namespace Model
{
  enum class FeatureStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    UNSUPPORTED,
    ENABLED_PENDING_REBOOT,
    DISABLED_PENDING_REBOOT,
    UNKNOWN
  };

namespace FeatureStatusMapper
{
AWS_PI_API FeatureStatus GetFeatureStatusForName(const Aws::String& name);

AWS_PI_API Aws::String GetNameForFeatureStatus(FeatureStatus value);
} // namespace FeatureStatusMapper
} // namespace Model
} // namespace PI
} // namespace Aws
