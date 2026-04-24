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
enum class ServiceConnectIncludeQueryParameters { NOT_SET, DISABLED, ENABLED };

namespace ServiceConnectIncludeQueryParametersMapper {
AWS_ECS_API ServiceConnectIncludeQueryParameters GetServiceConnectIncludeQueryParametersForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForServiceConnectIncludeQueryParameters(ServiceConnectIncludeQueryParameters value);
}  // namespace ServiceConnectIncludeQueryParametersMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
