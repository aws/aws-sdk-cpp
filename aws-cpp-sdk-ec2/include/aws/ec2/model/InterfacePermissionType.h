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
  enum class InterfacePermissionType
  {
    NOT_SET,
    INSTANCE_ATTACH,
    EIP_ASSOCIATE
  };

namespace InterfacePermissionTypeMapper
{
AWS_EC2_API InterfacePermissionType GetInterfacePermissionTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInterfacePermissionType(InterfacePermissionType value);
} // namespace InterfacePermissionTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
