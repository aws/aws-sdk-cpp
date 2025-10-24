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
enum class ServiceField { NOT_SET, TAGS };

namespace ServiceFieldMapper {
AWS_ECS_API ServiceField GetServiceFieldForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForServiceField(ServiceField value);
}  // namespace ServiceFieldMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
