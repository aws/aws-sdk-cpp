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
  enum class NatGatewayAddressStatus
  {
    NOT_SET,
    assigning,
    unassigning,
    associating,
    disassociating,
    succeeded,
    failed
  };

namespace NatGatewayAddressStatusMapper
{
AWS_EC2_API NatGatewayAddressStatus GetNatGatewayAddressStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForNatGatewayAddressStatus(NatGatewayAddressStatus value);
} // namespace NatGatewayAddressStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
