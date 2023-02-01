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
  enum class AddressFamily
  {
    NOT_SET,
    ipv4,
    ipv6
  };

namespace AddressFamilyMapper
{
AWS_EC2_API AddressFamily GetAddressFamilyForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAddressFamily(AddressFamily value);
} // namespace AddressFamilyMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
