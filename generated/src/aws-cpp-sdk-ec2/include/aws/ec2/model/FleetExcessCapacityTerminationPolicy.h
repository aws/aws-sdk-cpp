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
  enum class FleetExcessCapacityTerminationPolicy
  {
    NOT_SET,
    no_termination,
    termination
  };

namespace FleetExcessCapacityTerminationPolicyMapper
{
AWS_EC2_API FleetExcessCapacityTerminationPolicy GetFleetExcessCapacityTerminationPolicyForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFleetExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy value);
} // namespace FleetExcessCapacityTerminationPolicyMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
