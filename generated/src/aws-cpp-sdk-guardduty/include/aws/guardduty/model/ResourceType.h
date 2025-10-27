/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class ResourceType { NOT_SET, EKS, ECS, EC2 };

namespace ResourceTypeMapper {
AWS_GUARDDUTY_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
