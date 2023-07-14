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
  enum class InstanceMatchCriteria
  {
    NOT_SET,
    open,
    targeted
  };

namespace InstanceMatchCriteriaMapper
{
AWS_EC2_API InstanceMatchCriteria GetInstanceMatchCriteriaForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInstanceMatchCriteria(InstanceMatchCriteria value);
} // namespace InstanceMatchCriteriaMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
