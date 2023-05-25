/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class Ec2InstanceSortBy
  {
    NOT_SET,
    NETWORK_FINDINGS,
    CRITICAL,
    HIGH,
    ALL
  };

namespace Ec2InstanceSortByMapper
{
AWS_INSPECTOR2_API Ec2InstanceSortBy GetEc2InstanceSortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForEc2InstanceSortBy(Ec2InstanceSortBy value);
} // namespace Ec2InstanceSortByMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
