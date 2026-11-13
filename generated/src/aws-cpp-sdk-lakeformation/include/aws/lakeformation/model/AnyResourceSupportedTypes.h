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
enum class AnyResourceSupportedTypes { NOT_SET, TABLE };

namespace AnyResourceSupportedTypesMapper {
AWS_LAKEFORMATION_API AnyResourceSupportedTypes GetAnyResourceSupportedTypesForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForAnyResourceSupportedTypes(AnyResourceSupportedTypes value);
}  // namespace AnyResourceSupportedTypesMapper
}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
