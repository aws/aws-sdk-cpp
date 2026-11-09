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
enum class GpuSharingMode { NOT_SET, IDLE, NVIDIA_MPS, DEDICATED };

namespace GpuSharingModeMapper {
AWS_ECS_API GpuSharingMode GetGpuSharingModeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForGpuSharingMode(GpuSharingMode value);
}  // namespace GpuSharingModeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
