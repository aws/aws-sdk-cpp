/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class PermissionType { NOT_SET, vpc_endpoint, transit_gateway_attachment };

namespace PermissionTypeMapper {
AWS_EC2_API PermissionType GetPermissionTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForPermissionType(PermissionType value);
}  // namespace PermissionTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
