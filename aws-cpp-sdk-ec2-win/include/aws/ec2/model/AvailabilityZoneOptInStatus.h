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
  enum class AvailabilityZoneOptInStatus
  {
    NOT_SET,
    opt_in_not_required,
    opted_in,
    not_opted_in
  };

namespace AvailabilityZoneOptInStatusMapper
{
AWS_EC2_API AvailabilityZoneOptInStatus GetAvailabilityZoneOptInStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAvailabilityZoneOptInStatus(AvailabilityZoneOptInStatus value);
} // namespace AvailabilityZoneOptInStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
