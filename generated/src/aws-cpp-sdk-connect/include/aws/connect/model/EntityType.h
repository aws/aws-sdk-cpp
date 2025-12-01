/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class EntityType { NOT_SET, USER, AI_AGENT };

namespace EntityTypeMapper {
AWS_CONNECT_API EntityType GetEntityTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEntityType(EntityType value);
}  // namespace EntityTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
