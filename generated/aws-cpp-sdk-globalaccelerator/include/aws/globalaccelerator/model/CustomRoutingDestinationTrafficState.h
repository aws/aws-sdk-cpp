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
  enum class CustomRoutingDestinationTrafficState
  {
    NOT_SET,
    ALLOW,
    DENY
  };

namespace CustomRoutingDestinationTrafficStateMapper
{
AWS_GLOBALACCELERATOR_API CustomRoutingDestinationTrafficState GetCustomRoutingDestinationTrafficStateForName(const Aws::String& name);

AWS_GLOBALACCELERATOR_API Aws::String GetNameForCustomRoutingDestinationTrafficState(CustomRoutingDestinationTrafficState value);
} // namespace CustomRoutingDestinationTrafficStateMapper
} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
