/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Model {
enum class AcceleratorType { NOT_SET, gpu, fpga, inference };

namespace AcceleratorTypeMapper {
AWS_ECS_API AcceleratorType GetAcceleratorTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForAcceleratorType(AcceleratorType value);
}  // namespace AcceleratorTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
