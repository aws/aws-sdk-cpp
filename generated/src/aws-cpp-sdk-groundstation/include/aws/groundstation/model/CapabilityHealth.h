/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GroundStation
{
namespace Model
{
  enum class CapabilityHealth
  {
    NOT_SET,
    UNHEALTHY,
    HEALTHY
  };

namespace CapabilityHealthMapper
{
AWS_GROUNDSTATION_API CapabilityHealth GetCapabilityHealthForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForCapabilityHealth(CapabilityHealth value);
} // namespace CapabilityHealthMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
