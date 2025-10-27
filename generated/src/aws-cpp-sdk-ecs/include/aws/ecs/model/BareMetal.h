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
enum class BareMetal { NOT_SET, included, required, excluded };

namespace BareMetalMapper {
AWS_ECS_API BareMetal GetBareMetalForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForBareMetal(BareMetal value);
}  // namespace BareMetalMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
