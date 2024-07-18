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
  enum class TokenState
  {
    NOT_SET,
    valid,
    expired
  };

namespace TokenStateMapper
{
AWS_EC2_API TokenState GetTokenStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTokenState(TokenState value);
} // namespace TokenStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
