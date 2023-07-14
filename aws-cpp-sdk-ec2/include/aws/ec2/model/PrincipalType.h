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
  enum class PrincipalType
  {
    NOT_SET,
    All,
    Service,
    OrganizationUnit,
    Account,
    User,
    Role
  };

namespace PrincipalTypeMapper
{
AWS_EC2_API PrincipalType GetPrincipalTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForPrincipalType(PrincipalType value);
} // namespace PrincipalTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
