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
  enum class TransitGatewayPrefixListReferenceState
  {
    NOT_SET,
    pending,
    available,
    modifying,
    deleting
  };

namespace TransitGatewayPrefixListReferenceStateMapper
{
AWS_EC2_API TransitGatewayPrefixListReferenceState GetTransitGatewayPrefixListReferenceStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransitGatewayPrefixListReferenceState(TransitGatewayPrefixListReferenceState value);
} // namespace TransitGatewayPrefixListReferenceStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
