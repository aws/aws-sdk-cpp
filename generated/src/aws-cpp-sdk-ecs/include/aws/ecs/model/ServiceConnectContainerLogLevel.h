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
enum class ServiceConnectContainerLogLevel { NOT_SET, debug, info };

namespace ServiceConnectContainerLogLevelMapper {
AWS_ECS_API ServiceConnectContainerLogLevel GetServiceConnectContainerLogLevelForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForServiceConnectContainerLogLevel(ServiceConnectContainerLogLevel value);
}  // namespace ServiceConnectContainerLogLevelMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
