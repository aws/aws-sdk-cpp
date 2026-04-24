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
enum class SecondaryInterfaceType { NOT_SET, secondary };

namespace SecondaryInterfaceTypeMapper {
AWS_EC2_API SecondaryInterfaceType GetSecondaryInterfaceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSecondaryInterfaceType(SecondaryInterfaceType value);
}  // namespace SecondaryInterfaceTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
