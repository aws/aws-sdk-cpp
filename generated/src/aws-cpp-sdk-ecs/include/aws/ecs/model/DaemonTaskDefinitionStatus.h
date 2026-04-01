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
enum class DaemonTaskDefinitionStatus { NOT_SET, ACTIVE, DELETE_IN_PROGRESS, DELETED };

namespace DaemonTaskDefinitionStatusMapper {
AWS_ECS_API DaemonTaskDefinitionStatus GetDaemonTaskDefinitionStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDaemonTaskDefinitionStatus(DaemonTaskDefinitionStatus value);
}  // namespace DaemonTaskDefinitionStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
