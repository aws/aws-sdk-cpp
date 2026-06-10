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
enum class DaemonIpcMode { NOT_SET, none, shared };

namespace DaemonIpcModeMapper {
AWS_ECS_API DaemonIpcMode GetDaemonIpcModeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDaemonIpcMode(DaemonIpcMode value);
}  // namespace DaemonIpcModeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
