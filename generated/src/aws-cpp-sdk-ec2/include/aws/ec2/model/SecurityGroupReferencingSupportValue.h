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
  enum class SecurityGroupReferencingSupportValue
  {
    NOT_SET,
    enable,
    disable
  };

namespace SecurityGroupReferencingSupportValueMapper
{
AWS_EC2_API SecurityGroupReferencingSupportValue GetSecurityGroupReferencingSupportValueForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSecurityGroupReferencingSupportValue(SecurityGroupReferencingSupportValue value);
} // namespace SecurityGroupReferencingSupportValueMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
