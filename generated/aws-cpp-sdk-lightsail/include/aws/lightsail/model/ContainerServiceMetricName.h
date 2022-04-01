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
  enum class ContainerServiceMetricName
  {
    NOT_SET,
    CPUUtilization,
    MemoryUtilization
  };

namespace ContainerServiceMetricNameMapper
{
AWS_LIGHTSAIL_API ContainerServiceMetricName GetContainerServiceMetricNameForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForContainerServiceMetricName(ContainerServiceMetricName value);
} // namespace ContainerServiceMetricNameMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
