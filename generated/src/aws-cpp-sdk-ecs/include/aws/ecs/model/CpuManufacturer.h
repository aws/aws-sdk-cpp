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
enum class CpuManufacturer { NOT_SET, intel, amd, amazon_web_services };

namespace CpuManufacturerMapper {
AWS_ECS_API CpuManufacturer GetCpuManufacturerForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForCpuManufacturer(CpuManufacturer value);
}  // namespace CpuManufacturerMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
