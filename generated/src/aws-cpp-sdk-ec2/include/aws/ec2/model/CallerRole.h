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
  enum class CallerRole
  {
    NOT_SET,
    odcr_owner,
    unused_reservation_billing_owner
  };

namespace CallerRoleMapper
{
AWS_EC2_API CallerRole GetCallerRoleForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCallerRole(CallerRole value);
} // namespace CallerRoleMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
