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
enum class ServiceRevisionCleanup { NOT_SET, BLOCKING, DEFERRED };

namespace ServiceRevisionCleanupMapper {
AWS_ECS_API ServiceRevisionCleanup GetServiceRevisionCleanupForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForServiceRevisionCleanup(ServiceRevisionCleanup value);
}  // namespace ServiceRevisionCleanupMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
