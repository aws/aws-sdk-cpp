/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class BlueprintCategory { NOT_SET, TOOLING };

namespace BlueprintCategoryMapper {
AWS_DATAZONE_API BlueprintCategory GetBlueprintCategoryForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForBlueprintCategory(BlueprintCategory value);
}  // namespace BlueprintCategoryMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
