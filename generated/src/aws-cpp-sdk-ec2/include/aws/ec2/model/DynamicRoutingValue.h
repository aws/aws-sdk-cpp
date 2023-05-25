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
  enum class DynamicRoutingValue
  {
    NOT_SET,
    enable,
    disable
  };

namespace DynamicRoutingValueMapper
{
AWS_EC2_API DynamicRoutingValue GetDynamicRoutingValueForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForDynamicRoutingValue(DynamicRoutingValue value);
} // namespace DynamicRoutingValueMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
