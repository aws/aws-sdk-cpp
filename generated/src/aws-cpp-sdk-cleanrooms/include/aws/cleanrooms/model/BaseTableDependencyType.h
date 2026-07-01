/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CleanRooms {
namespace Model {
enum class BaseTableDependencyType { NOT_SET, TABLE, INTERMEDIATE_TABLE, ID_MAPPING_TABLE };

namespace BaseTableDependencyTypeMapper {
AWS_CLEANROOMS_API BaseTableDependencyType GetBaseTableDependencyTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForBaseTableDependencyType(BaseTableDependencyType value);
}  // namespace BaseTableDependencyTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
