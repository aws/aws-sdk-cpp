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
  enum class VpcPeeringConnectionStateReasonCode
  {
    NOT_SET,
    initiating_request,
    pending_acceptance,
    active,
    deleted,
    rejected,
    failed,
    expired,
    provisioning,
    deleting
  };

namespace VpcPeeringConnectionStateReasonCodeMapper
{
AWS_EC2_API VpcPeeringConnectionStateReasonCode GetVpcPeeringConnectionStateReasonCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVpcPeeringConnectionStateReasonCode(VpcPeeringConnectionStateReasonCode value);
} // namespace VpcPeeringConnectionStateReasonCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
