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
enum class ExpressCpuArchitecture { NOT_SET, X86_64, ARM64 };

namespace ExpressCpuArchitectureMapper {
AWS_ECS_API ExpressCpuArchitecture GetExpressCpuArchitectureForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForExpressCpuArchitecture(ExpressCpuArchitecture value);
}  // namespace ExpressCpuArchitectureMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
