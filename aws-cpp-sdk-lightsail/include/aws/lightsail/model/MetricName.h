/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class MetricName
  {
    NOT_SET,
    CPUUtilization,
    NetworkIn,
    NetworkOut,
    StatusCheckFailed,
    StatusCheckFailed_Instance,
    StatusCheckFailed_System,
    ClientTLSNegotiationErrorCount,
    HealthyHostCount,
    UnhealthyHostCount,
    HTTPCode_LB_4XX_Count,
    HTTPCode_LB_5XX_Count,
    HTTPCode_Instance_2XX_Count,
    HTTPCode_Instance_3XX_Count,
    HTTPCode_Instance_4XX_Count,
    HTTPCode_Instance_5XX_Count,
    InstanceResponseTime,
    RejectedConnectionCount,
    RequestCount,
    DatabaseConnections,
    DiskQueueDepth,
    FreeStorageSpace,
    NetworkReceiveThroughput,
    NetworkTransmitThroughput,
    BurstCapacityTime,
    BurstCapacityPercentage
  };

namespace MetricNameMapper
{
AWS_LIGHTSAIL_API MetricName GetMetricNameForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForMetricName(MetricName value);
} // namespace MetricNameMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
