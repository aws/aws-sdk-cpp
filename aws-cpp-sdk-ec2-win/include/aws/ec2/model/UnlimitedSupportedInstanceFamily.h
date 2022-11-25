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
  enum class UnlimitedSupportedInstanceFamily
  {
    NOT_SET,
    t2,
    t3,
    t3a,
    t4g
  };

namespace UnlimitedSupportedInstanceFamilyMapper
{
AWS_EC2_API UnlimitedSupportedInstanceFamily GetUnlimitedSupportedInstanceFamilyForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForUnlimitedSupportedInstanceFamily(UnlimitedSupportedInstanceFamily value);
} // namespace UnlimitedSupportedInstanceFamilyMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
