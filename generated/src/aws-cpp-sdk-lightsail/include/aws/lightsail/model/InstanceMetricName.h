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
  enum class InstanceMetricName
  {
    NOT_SET,
    CPUUtilization,
    NetworkIn,
    NetworkOut,
    StatusCheckFailed,
    StatusCheckFailed_Instance,
    StatusCheckFailed_System,
    BurstCapacityTime,
    BurstCapacityPercentage,
    MetadataNoToken
  };

namespace InstanceMetricNameMapper
{
AWS_LIGHTSAIL_API InstanceMetricName GetInstanceMetricNameForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForInstanceMetricName(InstanceMetricName value);
} // namespace InstanceMetricNameMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
