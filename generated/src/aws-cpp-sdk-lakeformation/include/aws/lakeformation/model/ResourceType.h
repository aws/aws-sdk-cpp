/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>

namespace Aws {
namespace LakeFormation {
namespace Model {
enum class ResourceType { NOT_SET, DATABASE, TABLE };

namespace ResourceTypeMapper {
AWS_LAKEFORMATION_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
