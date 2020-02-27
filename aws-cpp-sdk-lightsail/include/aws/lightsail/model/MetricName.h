/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    NetworkTransmitThroughput
  };

namespace MetricNameMapper
{
AWS_LIGHTSAIL_API MetricName GetMetricNameForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForMetricName(MetricName value);
} // namespace MetricNameMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
