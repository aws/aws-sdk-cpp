/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class Ec2MarketType
  {
    NOT_SET,
    on_demand,
    spot
  };

namespace Ec2MarketTypeMapper
{
AWS_DEADLINE_API Ec2MarketType GetEc2MarketTypeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForEc2MarketType(Ec2MarketType value);
} // namespace Ec2MarketTypeMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
