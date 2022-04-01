/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class AutoScalingConfigurationStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace AutoScalingConfigurationStatusMapper
{
AWS_APPRUNNER_API AutoScalingConfigurationStatus GetAutoScalingConfigurationStatusForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForAutoScalingConfigurationStatus(AutoScalingConfigurationStatus value);
} // namespace AutoScalingConfigurationStatusMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
