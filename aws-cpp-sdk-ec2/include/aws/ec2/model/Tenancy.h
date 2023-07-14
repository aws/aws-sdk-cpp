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
  enum class Tenancy
  {
    NOT_SET,
    default_,
    dedicated,
    host
  };

namespace TenancyMapper
{
AWS_EC2_API Tenancy GetTenancyForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTenancy(Tenancy value);
} // namespace TenancyMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
