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
enum class DaemonTaskDefinitionRevisionFilter { NOT_SET, LAST_REGISTERED };

namespace DaemonTaskDefinitionRevisionFilterMapper {
AWS_ECS_API DaemonTaskDefinitionRevisionFilter GetDaemonTaskDefinitionRevisionFilterForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDaemonTaskDefinitionRevisionFilter(DaemonTaskDefinitionRevisionFilter value);
}  // namespace DaemonTaskDefinitionRevisionFilterMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
