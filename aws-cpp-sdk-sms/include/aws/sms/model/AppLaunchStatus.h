/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SMS
{
namespace Model
{
  enum class AppLaunchStatus
  {
    NOT_SET,
    READY_FOR_CONFIGURATION,
    CONFIGURATION_IN_PROGRESS,
    CONFIGURATION_INVALID,
    READY_FOR_LAUNCH,
    VALIDATION_IN_PROGRESS,
    LAUNCH_PENDING,
    LAUNCH_IN_PROGRESS,
    LAUNCHED,
    PARTIALLY_LAUNCHED,
    DELTA_LAUNCH_IN_PROGRESS,
    DELTA_LAUNCH_FAILED,
    LAUNCH_FAILED,
    TERMINATE_IN_PROGRESS,
    TERMINATE_FAILED,
    TERMINATED
  };

namespace AppLaunchStatusMapper
{
AWS_SMS_API AppLaunchStatus GetAppLaunchStatusForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForAppLaunchStatus(AppLaunchStatus value);
} // namespace AppLaunchStatusMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
