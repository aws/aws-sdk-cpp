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
  enum class ManagedBy
  {
    NOT_SET,
    account,
    declarative_policy
  };

namespace ManagedByMapper
{
AWS_EC2_API ManagedBy GetManagedByForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForManagedBy(ManagedBy value);
} // namespace ManagedByMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
