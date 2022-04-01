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
  enum class LoadBalancerAttributeName
  {
    NOT_SET,
    HealthCheckPath,
    SessionStickinessEnabled,
    SessionStickiness_LB_CookieDurationSeconds
  };

namespace LoadBalancerAttributeNameMapper
{
AWS_LIGHTSAIL_API LoadBalancerAttributeName GetLoadBalancerAttributeNameForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForLoadBalancerAttributeName(LoadBalancerAttributeName value);
} // namespace LoadBalancerAttributeNameMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
