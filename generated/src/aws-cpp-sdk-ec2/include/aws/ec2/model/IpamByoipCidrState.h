/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class IpamByoipCidrState {
  NOT_SET,
  advertised,
  deprovisioned,
  failed_deprovision,
  failed_provision,
  pending_advertising,
  pending_deprovision,
  pending_provision,
  pending_withdrawal,
  provisioned,
  provisioned_not_publicly_advertisable
};

namespace IpamByoipCidrStateMapper {
AWS_EC2_API IpamByoipCidrState GetIpamByoipCidrStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamByoipCidrState(IpamByoipCidrState value);
}  // namespace IpamByoipCidrStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
