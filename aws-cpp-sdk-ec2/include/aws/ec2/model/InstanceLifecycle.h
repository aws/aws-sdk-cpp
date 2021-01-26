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
  enum class InstanceLifecycle
  {
    NOT_SET,
    spot,
    on_demand
  };

namespace InstanceLifecycleMapper
{
AWS_EC2_API InstanceLifecycle GetInstanceLifecycleForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInstanceLifecycle(InstanceLifecycle value);
} // namespace InstanceLifecycleMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
