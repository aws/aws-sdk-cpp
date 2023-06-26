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
  enum class LoadBalancerState
  {
    NOT_SET,
    active,
    provisioning,
    active_impaired,
    failed,
    unknown
  };

namespace LoadBalancerStateMapper
{
AWS_LIGHTSAIL_API LoadBalancerState GetLoadBalancerStateForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForLoadBalancerState(LoadBalancerState value);
} // namespace LoadBalancerStateMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
