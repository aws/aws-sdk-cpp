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
  enum class SubnetCidrBlockStateCode
  {
    NOT_SET,
    associating,
    associated,
    disassociating,
    disassociated,
    failing,
    failed
  };

namespace SubnetCidrBlockStateCodeMapper
{
AWS_EC2_API SubnetCidrBlockStateCode GetSubnetCidrBlockStateCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSubnetCidrBlockStateCode(SubnetCidrBlockStateCode value);
} // namespace SubnetCidrBlockStateCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
