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
enum class VersionConsistency { NOT_SET, enabled, disabled };

namespace VersionConsistencyMapper {
AWS_ECS_API VersionConsistency GetVersionConsistencyForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForVersionConsistency(VersionConsistency value);
}  // namespace VersionConsistencyMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
