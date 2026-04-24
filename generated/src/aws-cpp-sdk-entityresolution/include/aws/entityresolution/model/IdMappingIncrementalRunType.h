/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/EntityResolution_EXPORTS.h>

namespace Aws {
namespace EntityResolution {
namespace Model {
enum class IdMappingIncrementalRunType { NOT_SET, ON_DEMAND };

namespace IdMappingIncrementalRunTypeMapper {
AWS_ENTITYRESOLUTION_API IdMappingIncrementalRunType GetIdMappingIncrementalRunTypeForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForIdMappingIncrementalRunType(IdMappingIncrementalRunType value);
}  // namespace IdMappingIncrementalRunTypeMapper
}  // namespace Model
}  // namespace EntityResolution
}  // namespace Aws
