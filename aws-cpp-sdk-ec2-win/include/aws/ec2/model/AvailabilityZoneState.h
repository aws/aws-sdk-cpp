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
  enum class AvailabilityZoneState
  {
    NOT_SET,
    available,
    information,
    impaired,
    unavailable
  };

namespace AvailabilityZoneStateMapper
{
AWS_EC2_API AvailabilityZoneState GetAvailabilityZoneStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAvailabilityZoneState(AvailabilityZoneState value);
} // namespace AvailabilityZoneStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
