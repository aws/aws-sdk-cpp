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
enum class ServiceConnectAccessLoggingFormat { NOT_SET, TEXT, JSON };

namespace ServiceConnectAccessLoggingFormatMapper {
AWS_ECS_API ServiceConnectAccessLoggingFormat GetServiceConnectAccessLoggingFormatForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForServiceConnectAccessLoggingFormat(ServiceConnectAccessLoggingFormat value);
}  // namespace ServiceConnectAccessLoggingFormatMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
