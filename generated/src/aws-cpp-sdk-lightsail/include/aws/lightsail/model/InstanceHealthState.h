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
  enum class InstanceHealthState
  {
    NOT_SET,
    initial,
    healthy,
    unhealthy,
    unused,
    draining,
    unavailable
  };

namespace InstanceHealthStateMapper
{
AWS_LIGHTSAIL_API InstanceHealthState GetInstanceHealthStateForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForInstanceHealthState(InstanceHealthState value);
} // namespace InstanceHealthStateMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
