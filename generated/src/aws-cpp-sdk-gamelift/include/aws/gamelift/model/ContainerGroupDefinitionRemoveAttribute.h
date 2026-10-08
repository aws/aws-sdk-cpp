/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

namespace Aws {
namespace GameLift {
namespace Model {
enum class ContainerGroupDefinitionRemoveAttribute { NOT_SET, TOTAL_VCPU_LIMIT };

namespace ContainerGroupDefinitionRemoveAttributeMapper {
AWS_GAMELIFT_API ContainerGroupDefinitionRemoveAttribute GetContainerGroupDefinitionRemoveAttributeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForContainerGroupDefinitionRemoveAttribute(ContainerGroupDefinitionRemoveAttribute value);
}  // namespace ContainerGroupDefinitionRemoveAttributeMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
