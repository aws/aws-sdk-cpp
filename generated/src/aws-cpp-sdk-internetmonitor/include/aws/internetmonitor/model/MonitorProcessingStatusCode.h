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
  enum class MonitorProcessingStatusCode
  {
    NOT_SET,
    OK,
    INACTIVE,
    COLLECTING_DATA,
    INSUFFICIENT_DATA,
    FAULT_SERVICE,
    FAULT_ACCESS_CLOUDWATCH
  };

namespace MonitorProcessingStatusCodeMapper
{
AWS_INTERNETMONITOR_API MonitorProcessingStatusCode GetMonitorProcessingStatusCodeForName(const Aws::String& name);

AWS_INTERNETMONITOR_API Aws::String GetNameForMonitorProcessingStatusCode(MonitorProcessingStatusCode value);
} // namespace MonitorProcessingStatusCodeMapper
} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
