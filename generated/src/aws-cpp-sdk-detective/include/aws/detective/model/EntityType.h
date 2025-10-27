/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/Detective_EXPORTS.h>

namespace Aws {
namespace Detective {
namespace Model {
enum class EntityType { NOT_SET, IAM_ROLE, IAM_USER };

namespace EntityTypeMapper {
AWS_DETECTIVE_API EntityType GetEntityTypeForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForEntityType(EntityType value);
}  // namespace EntityTypeMapper
}  // namespace Model
}  // namespace Detective
}  // namespace Aws
