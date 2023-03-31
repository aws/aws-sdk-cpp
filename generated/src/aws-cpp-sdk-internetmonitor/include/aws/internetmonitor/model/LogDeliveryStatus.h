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
  enum class LogDeliveryStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace LogDeliveryStatusMapper
{
AWS_INTERNETMONITOR_API LogDeliveryStatus GetLogDeliveryStatusForName(const Aws::String& name);

AWS_INTERNETMONITOR_API Aws::String GetNameForLogDeliveryStatus(LogDeliveryStatus value);
} // namespace LogDeliveryStatusMapper
} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
