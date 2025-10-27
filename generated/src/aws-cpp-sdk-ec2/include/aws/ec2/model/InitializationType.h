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
enum class InitializationType { NOT_SET, default_, provisioned_rate, volume_copy };

namespace InitializationTypeMapper {
AWS_EC2_API InitializationType GetInitializationTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInitializationType(InitializationType value);
}  // namespace InitializationTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
