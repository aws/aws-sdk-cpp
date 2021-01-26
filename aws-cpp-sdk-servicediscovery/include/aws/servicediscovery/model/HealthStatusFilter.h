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
  enum class HealthStatusFilter
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY,
    ALL
  };

namespace HealthStatusFilterMapper
{
AWS_SERVICEDISCOVERY_API HealthStatusFilter GetHealthStatusFilterForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForHealthStatusFilter(HealthStatusFilter value);
} // namespace HealthStatusFilterMapper
} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
