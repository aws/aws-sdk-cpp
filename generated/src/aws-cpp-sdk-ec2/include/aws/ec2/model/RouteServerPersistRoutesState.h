/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class RouteServerPersistRoutesState
  {
    NOT_SET,
    enabling,
    enabled,
    resetting,
    disabling,
    disabled,
    modifying
  };

namespace RouteServerPersistRoutesStateMapper
{
AWS_EC2_API RouteServerPersistRoutesState GetRouteServerPersistRoutesStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForRouteServerPersistRoutesState(RouteServerPersistRoutesState value);
} // namespace RouteServerPersistRoutesStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
