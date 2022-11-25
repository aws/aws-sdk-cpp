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
  enum class IpamPoolCidrState
  {
    NOT_SET,
    pending_provision,
    provisioned,
    failed_provision,
    pending_deprovision,
    deprovisioned,
    failed_deprovision,
    pending_import,
    failed_import
  };

namespace IpamPoolCidrStateMapper
{
AWS_EC2_API IpamPoolCidrState GetIpamPoolCidrStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamPoolCidrState(IpamPoolCidrState value);
} // namespace IpamPoolCidrStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
