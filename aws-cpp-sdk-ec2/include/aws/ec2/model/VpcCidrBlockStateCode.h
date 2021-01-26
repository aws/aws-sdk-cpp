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
  enum class VpcCidrBlockStateCode
  {
    NOT_SET,
    associating,
    associated,
    disassociating,
    disassociated,
    failing,
    failed
  };

namespace VpcCidrBlockStateCodeMapper
{
AWS_EC2_API VpcCidrBlockStateCode GetVpcCidrBlockStateCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVpcCidrBlockStateCode(VpcCidrBlockStateCode value);
} // namespace VpcCidrBlockStateCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
