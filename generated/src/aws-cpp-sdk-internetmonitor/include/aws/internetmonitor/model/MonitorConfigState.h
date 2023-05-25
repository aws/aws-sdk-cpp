/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{
  enum class MonitorConfigState
  {
    NOT_SET,
    PENDING,
    ACTIVE,
    INACTIVE,
    ERROR_
  };

namespace MonitorConfigStateMapper
{
AWS_INTERNETMONITOR_API MonitorConfigState GetMonitorConfigStateForName(const Aws::String& name);

AWS_INTERNETMONITOR_API Aws::String GetNameForMonitorConfigState(MonitorConfigState value);
} // namespace MonitorConfigStateMapper
} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
