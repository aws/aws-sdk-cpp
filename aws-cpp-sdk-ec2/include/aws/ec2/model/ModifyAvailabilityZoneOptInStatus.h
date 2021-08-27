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
  enum class ModifyAvailabilityZoneOptInStatus
  {
    NOT_SET,
    opted_in,
    not_opted_in
  };

namespace ModifyAvailabilityZoneOptInStatusMapper
{
AWS_EC2_API ModifyAvailabilityZoneOptInStatus GetModifyAvailabilityZoneOptInStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForModifyAvailabilityZoneOptInStatus(ModifyAvailabilityZoneOptInStatus value);
} // namespace ModifyAvailabilityZoneOptInStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
