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
enum class IsolationMode { NOT_SET, SHARED, ISOLATED_SANDBOX, CONFIDENTIAL_SANDBOX };

namespace IsolationModeMapper {
AWS_ECS_API IsolationMode GetIsolationModeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForIsolationMode(IsolationMode value);
}  // namespace IsolationModeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
