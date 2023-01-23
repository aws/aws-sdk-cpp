/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{
  enum class HealthState
  {
    NOT_SET,
    INITIAL,
    HEALTHY,
    UNHEALTHY
  };

namespace HealthStateMapper
{
AWS_GLOBALACCELERATOR_API HealthState GetHealthStateForName(const Aws::String& name);

AWS_GLOBALACCELERATOR_API Aws::String GetNameForHealthState(HealthState value);
} // namespace HealthStateMapper
} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
