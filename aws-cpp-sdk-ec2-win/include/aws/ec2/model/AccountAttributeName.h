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
  enum class AccountAttributeName
  {
    NOT_SET,
    supported_platforms,
    default_vpc
  };

namespace AccountAttributeNameMapper
{
AWS_EC2_API AccountAttributeName GetAccountAttributeNameForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAccountAttributeName(AccountAttributeName value);
} // namespace AccountAttributeNameMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
