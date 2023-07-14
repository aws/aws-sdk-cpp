/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{
  enum class HealthStatus
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY,
    UNKNOWN
  };

namespace HealthStatusMapper
{
AWS_SERVICEDISCOVERY_API HealthStatus GetHealthStatusForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForHealthStatus(HealthStatus value);
} // namespace HealthStatusMapper
} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
